#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeyChangeMain__15CMenuChrCngMenuFv
// Address: 0x2b1310 - 0x2b34c8
void KeyChangeMain__15CMenuChrCngMenuFv_0x2b1310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyChangeMain__15CMenuChrCngMenuFv_0x2b1310");
#endif

    switch (ctx->pc) {
        case 0x2b1310u: goto label_2b1310;
        case 0x2b1314u: goto label_2b1314;
        case 0x2b1318u: goto label_2b1318;
        case 0x2b131cu: goto label_2b131c;
        case 0x2b1320u: goto label_2b1320;
        case 0x2b1324u: goto label_2b1324;
        case 0x2b1328u: goto label_2b1328;
        case 0x2b132cu: goto label_2b132c;
        case 0x2b1330u: goto label_2b1330;
        case 0x2b1334u: goto label_2b1334;
        case 0x2b1338u: goto label_2b1338;
        case 0x2b133cu: goto label_2b133c;
        case 0x2b1340u: goto label_2b1340;
        case 0x2b1344u: goto label_2b1344;
        case 0x2b1348u: goto label_2b1348;
        case 0x2b134cu: goto label_2b134c;
        case 0x2b1350u: goto label_2b1350;
        case 0x2b1354u: goto label_2b1354;
        case 0x2b1358u: goto label_2b1358;
        case 0x2b135cu: goto label_2b135c;
        case 0x2b1360u: goto label_2b1360;
        case 0x2b1364u: goto label_2b1364;
        case 0x2b1368u: goto label_2b1368;
        case 0x2b136cu: goto label_2b136c;
        case 0x2b1370u: goto label_2b1370;
        case 0x2b1374u: goto label_2b1374;
        case 0x2b1378u: goto label_2b1378;
        case 0x2b137cu: goto label_2b137c;
        case 0x2b1380u: goto label_2b1380;
        case 0x2b1384u: goto label_2b1384;
        case 0x2b1388u: goto label_2b1388;
        case 0x2b138cu: goto label_2b138c;
        case 0x2b1390u: goto label_2b1390;
        case 0x2b1394u: goto label_2b1394;
        case 0x2b1398u: goto label_2b1398;
        case 0x2b139cu: goto label_2b139c;
        case 0x2b13a0u: goto label_2b13a0;
        case 0x2b13a4u: goto label_2b13a4;
        case 0x2b13a8u: goto label_2b13a8;
        case 0x2b13acu: goto label_2b13ac;
        case 0x2b13b0u: goto label_2b13b0;
        case 0x2b13b4u: goto label_2b13b4;
        case 0x2b13b8u: goto label_2b13b8;
        case 0x2b13bcu: goto label_2b13bc;
        case 0x2b13c0u: goto label_2b13c0;
        case 0x2b13c4u: goto label_2b13c4;
        case 0x2b13c8u: goto label_2b13c8;
        case 0x2b13ccu: goto label_2b13cc;
        case 0x2b13d0u: goto label_2b13d0;
        case 0x2b13d4u: goto label_2b13d4;
        case 0x2b13d8u: goto label_2b13d8;
        case 0x2b13dcu: goto label_2b13dc;
        case 0x2b13e0u: goto label_2b13e0;
        case 0x2b13e4u: goto label_2b13e4;
        case 0x2b13e8u: goto label_2b13e8;
        case 0x2b13ecu: goto label_2b13ec;
        case 0x2b13f0u: goto label_2b13f0;
        case 0x2b13f4u: goto label_2b13f4;
        case 0x2b13f8u: goto label_2b13f8;
        case 0x2b13fcu: goto label_2b13fc;
        case 0x2b1400u: goto label_2b1400;
        case 0x2b1404u: goto label_2b1404;
        case 0x2b1408u: goto label_2b1408;
        case 0x2b140cu: goto label_2b140c;
        case 0x2b1410u: goto label_2b1410;
        case 0x2b1414u: goto label_2b1414;
        case 0x2b1418u: goto label_2b1418;
        case 0x2b141cu: goto label_2b141c;
        case 0x2b1420u: goto label_2b1420;
        case 0x2b1424u: goto label_2b1424;
        case 0x2b1428u: goto label_2b1428;
        case 0x2b142cu: goto label_2b142c;
        case 0x2b1430u: goto label_2b1430;
        case 0x2b1434u: goto label_2b1434;
        case 0x2b1438u: goto label_2b1438;
        case 0x2b143cu: goto label_2b143c;
        case 0x2b1440u: goto label_2b1440;
        case 0x2b1444u: goto label_2b1444;
        case 0x2b1448u: goto label_2b1448;
        case 0x2b144cu: goto label_2b144c;
        case 0x2b1450u: goto label_2b1450;
        case 0x2b1454u: goto label_2b1454;
        case 0x2b1458u: goto label_2b1458;
        case 0x2b145cu: goto label_2b145c;
        case 0x2b1460u: goto label_2b1460;
        case 0x2b1464u: goto label_2b1464;
        case 0x2b1468u: goto label_2b1468;
        case 0x2b146cu: goto label_2b146c;
        case 0x2b1470u: goto label_2b1470;
        case 0x2b1474u: goto label_2b1474;
        case 0x2b1478u: goto label_2b1478;
        case 0x2b147cu: goto label_2b147c;
        case 0x2b1480u: goto label_2b1480;
        case 0x2b1484u: goto label_2b1484;
        case 0x2b1488u: goto label_2b1488;
        case 0x2b148cu: goto label_2b148c;
        case 0x2b1490u: goto label_2b1490;
        case 0x2b1494u: goto label_2b1494;
        case 0x2b1498u: goto label_2b1498;
        case 0x2b149cu: goto label_2b149c;
        case 0x2b14a0u: goto label_2b14a0;
        case 0x2b14a4u: goto label_2b14a4;
        case 0x2b14a8u: goto label_2b14a8;
        case 0x2b14acu: goto label_2b14ac;
        case 0x2b14b0u: goto label_2b14b0;
        case 0x2b14b4u: goto label_2b14b4;
        case 0x2b14b8u: goto label_2b14b8;
        case 0x2b14bcu: goto label_2b14bc;
        case 0x2b14c0u: goto label_2b14c0;
        case 0x2b14c4u: goto label_2b14c4;
        case 0x2b14c8u: goto label_2b14c8;
        case 0x2b14ccu: goto label_2b14cc;
        case 0x2b14d0u: goto label_2b14d0;
        case 0x2b14d4u: goto label_2b14d4;
        case 0x2b14d8u: goto label_2b14d8;
        case 0x2b14dcu: goto label_2b14dc;
        case 0x2b14e0u: goto label_2b14e0;
        case 0x2b14e4u: goto label_2b14e4;
        case 0x2b14e8u: goto label_2b14e8;
        case 0x2b14ecu: goto label_2b14ec;
        case 0x2b14f0u: goto label_2b14f0;
        case 0x2b14f4u: goto label_2b14f4;
        case 0x2b14f8u: goto label_2b14f8;
        case 0x2b14fcu: goto label_2b14fc;
        case 0x2b1500u: goto label_2b1500;
        case 0x2b1504u: goto label_2b1504;
        case 0x2b1508u: goto label_2b1508;
        case 0x2b150cu: goto label_2b150c;
        case 0x2b1510u: goto label_2b1510;
        case 0x2b1514u: goto label_2b1514;
        case 0x2b1518u: goto label_2b1518;
        case 0x2b151cu: goto label_2b151c;
        case 0x2b1520u: goto label_2b1520;
        case 0x2b1524u: goto label_2b1524;
        case 0x2b1528u: goto label_2b1528;
        case 0x2b152cu: goto label_2b152c;
        case 0x2b1530u: goto label_2b1530;
        case 0x2b1534u: goto label_2b1534;
        case 0x2b1538u: goto label_2b1538;
        case 0x2b153cu: goto label_2b153c;
        case 0x2b1540u: goto label_2b1540;
        case 0x2b1544u: goto label_2b1544;
        case 0x2b1548u: goto label_2b1548;
        case 0x2b154cu: goto label_2b154c;
        case 0x2b1550u: goto label_2b1550;
        case 0x2b1554u: goto label_2b1554;
        case 0x2b1558u: goto label_2b1558;
        case 0x2b155cu: goto label_2b155c;
        case 0x2b1560u: goto label_2b1560;
        case 0x2b1564u: goto label_2b1564;
        case 0x2b1568u: goto label_2b1568;
        case 0x2b156cu: goto label_2b156c;
        case 0x2b1570u: goto label_2b1570;
        case 0x2b1574u: goto label_2b1574;
        case 0x2b1578u: goto label_2b1578;
        case 0x2b157cu: goto label_2b157c;
        case 0x2b1580u: goto label_2b1580;
        case 0x2b1584u: goto label_2b1584;
        case 0x2b1588u: goto label_2b1588;
        case 0x2b158cu: goto label_2b158c;
        case 0x2b1590u: goto label_2b1590;
        case 0x2b1594u: goto label_2b1594;
        case 0x2b1598u: goto label_2b1598;
        case 0x2b159cu: goto label_2b159c;
        case 0x2b15a0u: goto label_2b15a0;
        case 0x2b15a4u: goto label_2b15a4;
        case 0x2b15a8u: goto label_2b15a8;
        case 0x2b15acu: goto label_2b15ac;
        case 0x2b15b0u: goto label_2b15b0;
        case 0x2b15b4u: goto label_2b15b4;
        case 0x2b15b8u: goto label_2b15b8;
        case 0x2b15bcu: goto label_2b15bc;
        case 0x2b15c0u: goto label_2b15c0;
        case 0x2b15c4u: goto label_2b15c4;
        case 0x2b15c8u: goto label_2b15c8;
        case 0x2b15ccu: goto label_2b15cc;
        case 0x2b15d0u: goto label_2b15d0;
        case 0x2b15d4u: goto label_2b15d4;
        case 0x2b15d8u: goto label_2b15d8;
        case 0x2b15dcu: goto label_2b15dc;
        case 0x2b15e0u: goto label_2b15e0;
        case 0x2b15e4u: goto label_2b15e4;
        case 0x2b15e8u: goto label_2b15e8;
        case 0x2b15ecu: goto label_2b15ec;
        case 0x2b15f0u: goto label_2b15f0;
        case 0x2b15f4u: goto label_2b15f4;
        case 0x2b15f8u: goto label_2b15f8;
        case 0x2b15fcu: goto label_2b15fc;
        case 0x2b1600u: goto label_2b1600;
        case 0x2b1604u: goto label_2b1604;
        case 0x2b1608u: goto label_2b1608;
        case 0x2b160cu: goto label_2b160c;
        case 0x2b1610u: goto label_2b1610;
        case 0x2b1614u: goto label_2b1614;
        case 0x2b1618u: goto label_2b1618;
        case 0x2b161cu: goto label_2b161c;
        case 0x2b1620u: goto label_2b1620;
        case 0x2b1624u: goto label_2b1624;
        case 0x2b1628u: goto label_2b1628;
        case 0x2b162cu: goto label_2b162c;
        case 0x2b1630u: goto label_2b1630;
        case 0x2b1634u: goto label_2b1634;
        case 0x2b1638u: goto label_2b1638;
        case 0x2b163cu: goto label_2b163c;
        case 0x2b1640u: goto label_2b1640;
        case 0x2b1644u: goto label_2b1644;
        case 0x2b1648u: goto label_2b1648;
        case 0x2b164cu: goto label_2b164c;
        case 0x2b1650u: goto label_2b1650;
        case 0x2b1654u: goto label_2b1654;
        case 0x2b1658u: goto label_2b1658;
        case 0x2b165cu: goto label_2b165c;
        case 0x2b1660u: goto label_2b1660;
        case 0x2b1664u: goto label_2b1664;
        case 0x2b1668u: goto label_2b1668;
        case 0x2b166cu: goto label_2b166c;
        case 0x2b1670u: goto label_2b1670;
        case 0x2b1674u: goto label_2b1674;
        case 0x2b1678u: goto label_2b1678;
        case 0x2b167cu: goto label_2b167c;
        case 0x2b1680u: goto label_2b1680;
        case 0x2b1684u: goto label_2b1684;
        case 0x2b1688u: goto label_2b1688;
        case 0x2b168cu: goto label_2b168c;
        case 0x2b1690u: goto label_2b1690;
        case 0x2b1694u: goto label_2b1694;
        case 0x2b1698u: goto label_2b1698;
        case 0x2b169cu: goto label_2b169c;
        case 0x2b16a0u: goto label_2b16a0;
        case 0x2b16a4u: goto label_2b16a4;
        case 0x2b16a8u: goto label_2b16a8;
        case 0x2b16acu: goto label_2b16ac;
        case 0x2b16b0u: goto label_2b16b0;
        case 0x2b16b4u: goto label_2b16b4;
        case 0x2b16b8u: goto label_2b16b8;
        case 0x2b16bcu: goto label_2b16bc;
        case 0x2b16c0u: goto label_2b16c0;
        case 0x2b16c4u: goto label_2b16c4;
        case 0x2b16c8u: goto label_2b16c8;
        case 0x2b16ccu: goto label_2b16cc;
        case 0x2b16d0u: goto label_2b16d0;
        case 0x2b16d4u: goto label_2b16d4;
        case 0x2b16d8u: goto label_2b16d8;
        case 0x2b16dcu: goto label_2b16dc;
        case 0x2b16e0u: goto label_2b16e0;
        case 0x2b16e4u: goto label_2b16e4;
        case 0x2b16e8u: goto label_2b16e8;
        case 0x2b16ecu: goto label_2b16ec;
        case 0x2b16f0u: goto label_2b16f0;
        case 0x2b16f4u: goto label_2b16f4;
        case 0x2b16f8u: goto label_2b16f8;
        case 0x2b16fcu: goto label_2b16fc;
        case 0x2b1700u: goto label_2b1700;
        case 0x2b1704u: goto label_2b1704;
        case 0x2b1708u: goto label_2b1708;
        case 0x2b170cu: goto label_2b170c;
        case 0x2b1710u: goto label_2b1710;
        case 0x2b1714u: goto label_2b1714;
        case 0x2b1718u: goto label_2b1718;
        case 0x2b171cu: goto label_2b171c;
        case 0x2b1720u: goto label_2b1720;
        case 0x2b1724u: goto label_2b1724;
        case 0x2b1728u: goto label_2b1728;
        case 0x2b172cu: goto label_2b172c;
        case 0x2b1730u: goto label_2b1730;
        case 0x2b1734u: goto label_2b1734;
        case 0x2b1738u: goto label_2b1738;
        case 0x2b173cu: goto label_2b173c;
        case 0x2b1740u: goto label_2b1740;
        case 0x2b1744u: goto label_2b1744;
        case 0x2b1748u: goto label_2b1748;
        case 0x2b174cu: goto label_2b174c;
        case 0x2b1750u: goto label_2b1750;
        case 0x2b1754u: goto label_2b1754;
        case 0x2b1758u: goto label_2b1758;
        case 0x2b175cu: goto label_2b175c;
        case 0x2b1760u: goto label_2b1760;
        case 0x2b1764u: goto label_2b1764;
        case 0x2b1768u: goto label_2b1768;
        case 0x2b176cu: goto label_2b176c;
        case 0x2b1770u: goto label_2b1770;
        case 0x2b1774u: goto label_2b1774;
        case 0x2b1778u: goto label_2b1778;
        case 0x2b177cu: goto label_2b177c;
        case 0x2b1780u: goto label_2b1780;
        case 0x2b1784u: goto label_2b1784;
        case 0x2b1788u: goto label_2b1788;
        case 0x2b178cu: goto label_2b178c;
        case 0x2b1790u: goto label_2b1790;
        case 0x2b1794u: goto label_2b1794;
        case 0x2b1798u: goto label_2b1798;
        case 0x2b179cu: goto label_2b179c;
        case 0x2b17a0u: goto label_2b17a0;
        case 0x2b17a4u: goto label_2b17a4;
        case 0x2b17a8u: goto label_2b17a8;
        case 0x2b17acu: goto label_2b17ac;
        case 0x2b17b0u: goto label_2b17b0;
        case 0x2b17b4u: goto label_2b17b4;
        case 0x2b17b8u: goto label_2b17b8;
        case 0x2b17bcu: goto label_2b17bc;
        case 0x2b17c0u: goto label_2b17c0;
        case 0x2b17c4u: goto label_2b17c4;
        case 0x2b17c8u: goto label_2b17c8;
        case 0x2b17ccu: goto label_2b17cc;
        case 0x2b17d0u: goto label_2b17d0;
        case 0x2b17d4u: goto label_2b17d4;
        case 0x2b17d8u: goto label_2b17d8;
        case 0x2b17dcu: goto label_2b17dc;
        case 0x2b17e0u: goto label_2b17e0;
        case 0x2b17e4u: goto label_2b17e4;
        case 0x2b17e8u: goto label_2b17e8;
        case 0x2b17ecu: goto label_2b17ec;
        case 0x2b17f0u: goto label_2b17f0;
        case 0x2b17f4u: goto label_2b17f4;
        case 0x2b17f8u: goto label_2b17f8;
        case 0x2b17fcu: goto label_2b17fc;
        case 0x2b1800u: goto label_2b1800;
        case 0x2b1804u: goto label_2b1804;
        case 0x2b1808u: goto label_2b1808;
        case 0x2b180cu: goto label_2b180c;
        case 0x2b1810u: goto label_2b1810;
        case 0x2b1814u: goto label_2b1814;
        case 0x2b1818u: goto label_2b1818;
        case 0x2b181cu: goto label_2b181c;
        case 0x2b1820u: goto label_2b1820;
        case 0x2b1824u: goto label_2b1824;
        case 0x2b1828u: goto label_2b1828;
        case 0x2b182cu: goto label_2b182c;
        case 0x2b1830u: goto label_2b1830;
        case 0x2b1834u: goto label_2b1834;
        case 0x2b1838u: goto label_2b1838;
        case 0x2b183cu: goto label_2b183c;
        case 0x2b1840u: goto label_2b1840;
        case 0x2b1844u: goto label_2b1844;
        case 0x2b1848u: goto label_2b1848;
        case 0x2b184cu: goto label_2b184c;
        case 0x2b1850u: goto label_2b1850;
        case 0x2b1854u: goto label_2b1854;
        case 0x2b1858u: goto label_2b1858;
        case 0x2b185cu: goto label_2b185c;
        case 0x2b1860u: goto label_2b1860;
        case 0x2b1864u: goto label_2b1864;
        case 0x2b1868u: goto label_2b1868;
        case 0x2b186cu: goto label_2b186c;
        case 0x2b1870u: goto label_2b1870;
        case 0x2b1874u: goto label_2b1874;
        case 0x2b1878u: goto label_2b1878;
        case 0x2b187cu: goto label_2b187c;
        case 0x2b1880u: goto label_2b1880;
        case 0x2b1884u: goto label_2b1884;
        case 0x2b1888u: goto label_2b1888;
        case 0x2b188cu: goto label_2b188c;
        case 0x2b1890u: goto label_2b1890;
        case 0x2b1894u: goto label_2b1894;
        case 0x2b1898u: goto label_2b1898;
        case 0x2b189cu: goto label_2b189c;
        case 0x2b18a0u: goto label_2b18a0;
        case 0x2b18a4u: goto label_2b18a4;
        case 0x2b18a8u: goto label_2b18a8;
        case 0x2b18acu: goto label_2b18ac;
        case 0x2b18b0u: goto label_2b18b0;
        case 0x2b18b4u: goto label_2b18b4;
        case 0x2b18b8u: goto label_2b18b8;
        case 0x2b18bcu: goto label_2b18bc;
        case 0x2b18c0u: goto label_2b18c0;
        case 0x2b18c4u: goto label_2b18c4;
        case 0x2b18c8u: goto label_2b18c8;
        case 0x2b18ccu: goto label_2b18cc;
        case 0x2b18d0u: goto label_2b18d0;
        case 0x2b18d4u: goto label_2b18d4;
        case 0x2b18d8u: goto label_2b18d8;
        case 0x2b18dcu: goto label_2b18dc;
        case 0x2b18e0u: goto label_2b18e0;
        case 0x2b18e4u: goto label_2b18e4;
        case 0x2b18e8u: goto label_2b18e8;
        case 0x2b18ecu: goto label_2b18ec;
        case 0x2b18f0u: goto label_2b18f0;
        case 0x2b18f4u: goto label_2b18f4;
        case 0x2b18f8u: goto label_2b18f8;
        case 0x2b18fcu: goto label_2b18fc;
        case 0x2b1900u: goto label_2b1900;
        case 0x2b1904u: goto label_2b1904;
        case 0x2b1908u: goto label_2b1908;
        case 0x2b190cu: goto label_2b190c;
        case 0x2b1910u: goto label_2b1910;
        case 0x2b1914u: goto label_2b1914;
        case 0x2b1918u: goto label_2b1918;
        case 0x2b191cu: goto label_2b191c;
        case 0x2b1920u: goto label_2b1920;
        case 0x2b1924u: goto label_2b1924;
        case 0x2b1928u: goto label_2b1928;
        case 0x2b192cu: goto label_2b192c;
        case 0x2b1930u: goto label_2b1930;
        case 0x2b1934u: goto label_2b1934;
        case 0x2b1938u: goto label_2b1938;
        case 0x2b193cu: goto label_2b193c;
        case 0x2b1940u: goto label_2b1940;
        case 0x2b1944u: goto label_2b1944;
        case 0x2b1948u: goto label_2b1948;
        case 0x2b194cu: goto label_2b194c;
        case 0x2b1950u: goto label_2b1950;
        case 0x2b1954u: goto label_2b1954;
        case 0x2b1958u: goto label_2b1958;
        case 0x2b195cu: goto label_2b195c;
        case 0x2b1960u: goto label_2b1960;
        case 0x2b1964u: goto label_2b1964;
        case 0x2b1968u: goto label_2b1968;
        case 0x2b196cu: goto label_2b196c;
        case 0x2b1970u: goto label_2b1970;
        case 0x2b1974u: goto label_2b1974;
        case 0x2b1978u: goto label_2b1978;
        case 0x2b197cu: goto label_2b197c;
        case 0x2b1980u: goto label_2b1980;
        case 0x2b1984u: goto label_2b1984;
        case 0x2b1988u: goto label_2b1988;
        case 0x2b198cu: goto label_2b198c;
        case 0x2b1990u: goto label_2b1990;
        case 0x2b1994u: goto label_2b1994;
        case 0x2b1998u: goto label_2b1998;
        case 0x2b199cu: goto label_2b199c;
        case 0x2b19a0u: goto label_2b19a0;
        case 0x2b19a4u: goto label_2b19a4;
        case 0x2b19a8u: goto label_2b19a8;
        case 0x2b19acu: goto label_2b19ac;
        case 0x2b19b0u: goto label_2b19b0;
        case 0x2b19b4u: goto label_2b19b4;
        case 0x2b19b8u: goto label_2b19b8;
        case 0x2b19bcu: goto label_2b19bc;
        case 0x2b19c0u: goto label_2b19c0;
        case 0x2b19c4u: goto label_2b19c4;
        case 0x2b19c8u: goto label_2b19c8;
        case 0x2b19ccu: goto label_2b19cc;
        case 0x2b19d0u: goto label_2b19d0;
        case 0x2b19d4u: goto label_2b19d4;
        case 0x2b19d8u: goto label_2b19d8;
        case 0x2b19dcu: goto label_2b19dc;
        case 0x2b19e0u: goto label_2b19e0;
        case 0x2b19e4u: goto label_2b19e4;
        case 0x2b19e8u: goto label_2b19e8;
        case 0x2b19ecu: goto label_2b19ec;
        case 0x2b19f0u: goto label_2b19f0;
        case 0x2b19f4u: goto label_2b19f4;
        case 0x2b19f8u: goto label_2b19f8;
        case 0x2b19fcu: goto label_2b19fc;
        case 0x2b1a00u: goto label_2b1a00;
        case 0x2b1a04u: goto label_2b1a04;
        case 0x2b1a08u: goto label_2b1a08;
        case 0x2b1a0cu: goto label_2b1a0c;
        case 0x2b1a10u: goto label_2b1a10;
        case 0x2b1a14u: goto label_2b1a14;
        case 0x2b1a18u: goto label_2b1a18;
        case 0x2b1a1cu: goto label_2b1a1c;
        case 0x2b1a20u: goto label_2b1a20;
        case 0x2b1a24u: goto label_2b1a24;
        case 0x2b1a28u: goto label_2b1a28;
        case 0x2b1a2cu: goto label_2b1a2c;
        case 0x2b1a30u: goto label_2b1a30;
        case 0x2b1a34u: goto label_2b1a34;
        case 0x2b1a38u: goto label_2b1a38;
        case 0x2b1a3cu: goto label_2b1a3c;
        case 0x2b1a40u: goto label_2b1a40;
        case 0x2b1a44u: goto label_2b1a44;
        case 0x2b1a48u: goto label_2b1a48;
        case 0x2b1a4cu: goto label_2b1a4c;
        case 0x2b1a50u: goto label_2b1a50;
        case 0x2b1a54u: goto label_2b1a54;
        case 0x2b1a58u: goto label_2b1a58;
        case 0x2b1a5cu: goto label_2b1a5c;
        case 0x2b1a60u: goto label_2b1a60;
        case 0x2b1a64u: goto label_2b1a64;
        case 0x2b1a68u: goto label_2b1a68;
        case 0x2b1a6cu: goto label_2b1a6c;
        case 0x2b1a70u: goto label_2b1a70;
        case 0x2b1a74u: goto label_2b1a74;
        case 0x2b1a78u: goto label_2b1a78;
        case 0x2b1a7cu: goto label_2b1a7c;
        case 0x2b1a80u: goto label_2b1a80;
        case 0x2b1a84u: goto label_2b1a84;
        case 0x2b1a88u: goto label_2b1a88;
        case 0x2b1a8cu: goto label_2b1a8c;
        case 0x2b1a90u: goto label_2b1a90;
        case 0x2b1a94u: goto label_2b1a94;
        case 0x2b1a98u: goto label_2b1a98;
        case 0x2b1a9cu: goto label_2b1a9c;
        case 0x2b1aa0u: goto label_2b1aa0;
        case 0x2b1aa4u: goto label_2b1aa4;
        case 0x2b1aa8u: goto label_2b1aa8;
        case 0x2b1aacu: goto label_2b1aac;
        case 0x2b1ab0u: goto label_2b1ab0;
        case 0x2b1ab4u: goto label_2b1ab4;
        case 0x2b1ab8u: goto label_2b1ab8;
        case 0x2b1abcu: goto label_2b1abc;
        case 0x2b1ac0u: goto label_2b1ac0;
        case 0x2b1ac4u: goto label_2b1ac4;
        case 0x2b1ac8u: goto label_2b1ac8;
        case 0x2b1accu: goto label_2b1acc;
        case 0x2b1ad0u: goto label_2b1ad0;
        case 0x2b1ad4u: goto label_2b1ad4;
        case 0x2b1ad8u: goto label_2b1ad8;
        case 0x2b1adcu: goto label_2b1adc;
        case 0x2b1ae0u: goto label_2b1ae0;
        case 0x2b1ae4u: goto label_2b1ae4;
        case 0x2b1ae8u: goto label_2b1ae8;
        case 0x2b1aecu: goto label_2b1aec;
        case 0x2b1af0u: goto label_2b1af0;
        case 0x2b1af4u: goto label_2b1af4;
        case 0x2b1af8u: goto label_2b1af8;
        case 0x2b1afcu: goto label_2b1afc;
        case 0x2b1b00u: goto label_2b1b00;
        case 0x2b1b04u: goto label_2b1b04;
        case 0x2b1b08u: goto label_2b1b08;
        case 0x2b1b0cu: goto label_2b1b0c;
        case 0x2b1b10u: goto label_2b1b10;
        case 0x2b1b14u: goto label_2b1b14;
        case 0x2b1b18u: goto label_2b1b18;
        case 0x2b1b1cu: goto label_2b1b1c;
        case 0x2b1b20u: goto label_2b1b20;
        case 0x2b1b24u: goto label_2b1b24;
        case 0x2b1b28u: goto label_2b1b28;
        case 0x2b1b2cu: goto label_2b1b2c;
        case 0x2b1b30u: goto label_2b1b30;
        case 0x2b1b34u: goto label_2b1b34;
        case 0x2b1b38u: goto label_2b1b38;
        case 0x2b1b3cu: goto label_2b1b3c;
        case 0x2b1b40u: goto label_2b1b40;
        case 0x2b1b44u: goto label_2b1b44;
        case 0x2b1b48u: goto label_2b1b48;
        case 0x2b1b4cu: goto label_2b1b4c;
        case 0x2b1b50u: goto label_2b1b50;
        case 0x2b1b54u: goto label_2b1b54;
        case 0x2b1b58u: goto label_2b1b58;
        case 0x2b1b5cu: goto label_2b1b5c;
        case 0x2b1b60u: goto label_2b1b60;
        case 0x2b1b64u: goto label_2b1b64;
        case 0x2b1b68u: goto label_2b1b68;
        case 0x2b1b6cu: goto label_2b1b6c;
        case 0x2b1b70u: goto label_2b1b70;
        case 0x2b1b74u: goto label_2b1b74;
        case 0x2b1b78u: goto label_2b1b78;
        case 0x2b1b7cu: goto label_2b1b7c;
        case 0x2b1b80u: goto label_2b1b80;
        case 0x2b1b84u: goto label_2b1b84;
        case 0x2b1b88u: goto label_2b1b88;
        case 0x2b1b8cu: goto label_2b1b8c;
        case 0x2b1b90u: goto label_2b1b90;
        case 0x2b1b94u: goto label_2b1b94;
        case 0x2b1b98u: goto label_2b1b98;
        case 0x2b1b9cu: goto label_2b1b9c;
        case 0x2b1ba0u: goto label_2b1ba0;
        case 0x2b1ba4u: goto label_2b1ba4;
        case 0x2b1ba8u: goto label_2b1ba8;
        case 0x2b1bacu: goto label_2b1bac;
        case 0x2b1bb0u: goto label_2b1bb0;
        case 0x2b1bb4u: goto label_2b1bb4;
        case 0x2b1bb8u: goto label_2b1bb8;
        case 0x2b1bbcu: goto label_2b1bbc;
        case 0x2b1bc0u: goto label_2b1bc0;
        case 0x2b1bc4u: goto label_2b1bc4;
        case 0x2b1bc8u: goto label_2b1bc8;
        case 0x2b1bccu: goto label_2b1bcc;
        case 0x2b1bd0u: goto label_2b1bd0;
        case 0x2b1bd4u: goto label_2b1bd4;
        case 0x2b1bd8u: goto label_2b1bd8;
        case 0x2b1bdcu: goto label_2b1bdc;
        case 0x2b1be0u: goto label_2b1be0;
        case 0x2b1be4u: goto label_2b1be4;
        case 0x2b1be8u: goto label_2b1be8;
        case 0x2b1becu: goto label_2b1bec;
        case 0x2b1bf0u: goto label_2b1bf0;
        case 0x2b1bf4u: goto label_2b1bf4;
        case 0x2b1bf8u: goto label_2b1bf8;
        case 0x2b1bfcu: goto label_2b1bfc;
        case 0x2b1c00u: goto label_2b1c00;
        case 0x2b1c04u: goto label_2b1c04;
        case 0x2b1c08u: goto label_2b1c08;
        case 0x2b1c0cu: goto label_2b1c0c;
        case 0x2b1c10u: goto label_2b1c10;
        case 0x2b1c14u: goto label_2b1c14;
        case 0x2b1c18u: goto label_2b1c18;
        case 0x2b1c1cu: goto label_2b1c1c;
        case 0x2b1c20u: goto label_2b1c20;
        case 0x2b1c24u: goto label_2b1c24;
        case 0x2b1c28u: goto label_2b1c28;
        case 0x2b1c2cu: goto label_2b1c2c;
        case 0x2b1c30u: goto label_2b1c30;
        case 0x2b1c34u: goto label_2b1c34;
        case 0x2b1c38u: goto label_2b1c38;
        case 0x2b1c3cu: goto label_2b1c3c;
        case 0x2b1c40u: goto label_2b1c40;
        case 0x2b1c44u: goto label_2b1c44;
        case 0x2b1c48u: goto label_2b1c48;
        case 0x2b1c4cu: goto label_2b1c4c;
        case 0x2b1c50u: goto label_2b1c50;
        case 0x2b1c54u: goto label_2b1c54;
        case 0x2b1c58u: goto label_2b1c58;
        case 0x2b1c5cu: goto label_2b1c5c;
        case 0x2b1c60u: goto label_2b1c60;
        case 0x2b1c64u: goto label_2b1c64;
        case 0x2b1c68u: goto label_2b1c68;
        case 0x2b1c6cu: goto label_2b1c6c;
        case 0x2b1c70u: goto label_2b1c70;
        case 0x2b1c74u: goto label_2b1c74;
        case 0x2b1c78u: goto label_2b1c78;
        case 0x2b1c7cu: goto label_2b1c7c;
        case 0x2b1c80u: goto label_2b1c80;
        case 0x2b1c84u: goto label_2b1c84;
        case 0x2b1c88u: goto label_2b1c88;
        case 0x2b1c8cu: goto label_2b1c8c;
        case 0x2b1c90u: goto label_2b1c90;
        case 0x2b1c94u: goto label_2b1c94;
        case 0x2b1c98u: goto label_2b1c98;
        case 0x2b1c9cu: goto label_2b1c9c;
        case 0x2b1ca0u: goto label_2b1ca0;
        case 0x2b1ca4u: goto label_2b1ca4;
        case 0x2b1ca8u: goto label_2b1ca8;
        case 0x2b1cacu: goto label_2b1cac;
        case 0x2b1cb0u: goto label_2b1cb0;
        case 0x2b1cb4u: goto label_2b1cb4;
        case 0x2b1cb8u: goto label_2b1cb8;
        case 0x2b1cbcu: goto label_2b1cbc;
        case 0x2b1cc0u: goto label_2b1cc0;
        case 0x2b1cc4u: goto label_2b1cc4;
        case 0x2b1cc8u: goto label_2b1cc8;
        case 0x2b1cccu: goto label_2b1ccc;
        case 0x2b1cd0u: goto label_2b1cd0;
        case 0x2b1cd4u: goto label_2b1cd4;
        case 0x2b1cd8u: goto label_2b1cd8;
        case 0x2b1cdcu: goto label_2b1cdc;
        case 0x2b1ce0u: goto label_2b1ce0;
        case 0x2b1ce4u: goto label_2b1ce4;
        case 0x2b1ce8u: goto label_2b1ce8;
        case 0x2b1cecu: goto label_2b1cec;
        case 0x2b1cf0u: goto label_2b1cf0;
        case 0x2b1cf4u: goto label_2b1cf4;
        case 0x2b1cf8u: goto label_2b1cf8;
        case 0x2b1cfcu: goto label_2b1cfc;
        case 0x2b1d00u: goto label_2b1d00;
        case 0x2b1d04u: goto label_2b1d04;
        case 0x2b1d08u: goto label_2b1d08;
        case 0x2b1d0cu: goto label_2b1d0c;
        case 0x2b1d10u: goto label_2b1d10;
        case 0x2b1d14u: goto label_2b1d14;
        case 0x2b1d18u: goto label_2b1d18;
        case 0x2b1d1cu: goto label_2b1d1c;
        case 0x2b1d20u: goto label_2b1d20;
        case 0x2b1d24u: goto label_2b1d24;
        case 0x2b1d28u: goto label_2b1d28;
        case 0x2b1d2cu: goto label_2b1d2c;
        case 0x2b1d30u: goto label_2b1d30;
        case 0x2b1d34u: goto label_2b1d34;
        case 0x2b1d38u: goto label_2b1d38;
        case 0x2b1d3cu: goto label_2b1d3c;
        case 0x2b1d40u: goto label_2b1d40;
        case 0x2b1d44u: goto label_2b1d44;
        case 0x2b1d48u: goto label_2b1d48;
        case 0x2b1d4cu: goto label_2b1d4c;
        case 0x2b1d50u: goto label_2b1d50;
        case 0x2b1d54u: goto label_2b1d54;
        case 0x2b1d58u: goto label_2b1d58;
        case 0x2b1d5cu: goto label_2b1d5c;
        case 0x2b1d60u: goto label_2b1d60;
        case 0x2b1d64u: goto label_2b1d64;
        case 0x2b1d68u: goto label_2b1d68;
        case 0x2b1d6cu: goto label_2b1d6c;
        case 0x2b1d70u: goto label_2b1d70;
        case 0x2b1d74u: goto label_2b1d74;
        case 0x2b1d78u: goto label_2b1d78;
        case 0x2b1d7cu: goto label_2b1d7c;
        case 0x2b1d80u: goto label_2b1d80;
        case 0x2b1d84u: goto label_2b1d84;
        case 0x2b1d88u: goto label_2b1d88;
        case 0x2b1d8cu: goto label_2b1d8c;
        case 0x2b1d90u: goto label_2b1d90;
        case 0x2b1d94u: goto label_2b1d94;
        case 0x2b1d98u: goto label_2b1d98;
        case 0x2b1d9cu: goto label_2b1d9c;
        case 0x2b1da0u: goto label_2b1da0;
        case 0x2b1da4u: goto label_2b1da4;
        case 0x2b1da8u: goto label_2b1da8;
        case 0x2b1dacu: goto label_2b1dac;
        case 0x2b1db0u: goto label_2b1db0;
        case 0x2b1db4u: goto label_2b1db4;
        case 0x2b1db8u: goto label_2b1db8;
        case 0x2b1dbcu: goto label_2b1dbc;
        case 0x2b1dc0u: goto label_2b1dc0;
        case 0x2b1dc4u: goto label_2b1dc4;
        case 0x2b1dc8u: goto label_2b1dc8;
        case 0x2b1dccu: goto label_2b1dcc;
        case 0x2b1dd0u: goto label_2b1dd0;
        case 0x2b1dd4u: goto label_2b1dd4;
        case 0x2b1dd8u: goto label_2b1dd8;
        case 0x2b1ddcu: goto label_2b1ddc;
        case 0x2b1de0u: goto label_2b1de0;
        case 0x2b1de4u: goto label_2b1de4;
        case 0x2b1de8u: goto label_2b1de8;
        case 0x2b1decu: goto label_2b1dec;
        case 0x2b1df0u: goto label_2b1df0;
        case 0x2b1df4u: goto label_2b1df4;
        case 0x2b1df8u: goto label_2b1df8;
        case 0x2b1dfcu: goto label_2b1dfc;
        case 0x2b1e00u: goto label_2b1e00;
        case 0x2b1e04u: goto label_2b1e04;
        case 0x2b1e08u: goto label_2b1e08;
        case 0x2b1e0cu: goto label_2b1e0c;
        case 0x2b1e10u: goto label_2b1e10;
        case 0x2b1e14u: goto label_2b1e14;
        case 0x2b1e18u: goto label_2b1e18;
        case 0x2b1e1cu: goto label_2b1e1c;
        case 0x2b1e20u: goto label_2b1e20;
        case 0x2b1e24u: goto label_2b1e24;
        case 0x2b1e28u: goto label_2b1e28;
        case 0x2b1e2cu: goto label_2b1e2c;
        case 0x2b1e30u: goto label_2b1e30;
        case 0x2b1e34u: goto label_2b1e34;
        case 0x2b1e38u: goto label_2b1e38;
        case 0x2b1e3cu: goto label_2b1e3c;
        case 0x2b1e40u: goto label_2b1e40;
        case 0x2b1e44u: goto label_2b1e44;
        case 0x2b1e48u: goto label_2b1e48;
        case 0x2b1e4cu: goto label_2b1e4c;
        case 0x2b1e50u: goto label_2b1e50;
        case 0x2b1e54u: goto label_2b1e54;
        case 0x2b1e58u: goto label_2b1e58;
        case 0x2b1e5cu: goto label_2b1e5c;
        case 0x2b1e60u: goto label_2b1e60;
        case 0x2b1e64u: goto label_2b1e64;
        case 0x2b1e68u: goto label_2b1e68;
        case 0x2b1e6cu: goto label_2b1e6c;
        case 0x2b1e70u: goto label_2b1e70;
        case 0x2b1e74u: goto label_2b1e74;
        case 0x2b1e78u: goto label_2b1e78;
        case 0x2b1e7cu: goto label_2b1e7c;
        case 0x2b1e80u: goto label_2b1e80;
        case 0x2b1e84u: goto label_2b1e84;
        case 0x2b1e88u: goto label_2b1e88;
        case 0x2b1e8cu: goto label_2b1e8c;
        case 0x2b1e90u: goto label_2b1e90;
        case 0x2b1e94u: goto label_2b1e94;
        case 0x2b1e98u: goto label_2b1e98;
        case 0x2b1e9cu: goto label_2b1e9c;
        case 0x2b1ea0u: goto label_2b1ea0;
        case 0x2b1ea4u: goto label_2b1ea4;
        case 0x2b1ea8u: goto label_2b1ea8;
        case 0x2b1eacu: goto label_2b1eac;
        case 0x2b1eb0u: goto label_2b1eb0;
        case 0x2b1eb4u: goto label_2b1eb4;
        case 0x2b1eb8u: goto label_2b1eb8;
        case 0x2b1ebcu: goto label_2b1ebc;
        case 0x2b1ec0u: goto label_2b1ec0;
        case 0x2b1ec4u: goto label_2b1ec4;
        case 0x2b1ec8u: goto label_2b1ec8;
        case 0x2b1eccu: goto label_2b1ecc;
        case 0x2b1ed0u: goto label_2b1ed0;
        case 0x2b1ed4u: goto label_2b1ed4;
        case 0x2b1ed8u: goto label_2b1ed8;
        case 0x2b1edcu: goto label_2b1edc;
        case 0x2b1ee0u: goto label_2b1ee0;
        case 0x2b1ee4u: goto label_2b1ee4;
        case 0x2b1ee8u: goto label_2b1ee8;
        case 0x2b1eecu: goto label_2b1eec;
        case 0x2b1ef0u: goto label_2b1ef0;
        case 0x2b1ef4u: goto label_2b1ef4;
        case 0x2b1ef8u: goto label_2b1ef8;
        case 0x2b1efcu: goto label_2b1efc;
        case 0x2b1f00u: goto label_2b1f00;
        case 0x2b1f04u: goto label_2b1f04;
        case 0x2b1f08u: goto label_2b1f08;
        case 0x2b1f0cu: goto label_2b1f0c;
        case 0x2b1f10u: goto label_2b1f10;
        case 0x2b1f14u: goto label_2b1f14;
        case 0x2b1f18u: goto label_2b1f18;
        case 0x2b1f1cu: goto label_2b1f1c;
        case 0x2b1f20u: goto label_2b1f20;
        case 0x2b1f24u: goto label_2b1f24;
        case 0x2b1f28u: goto label_2b1f28;
        case 0x2b1f2cu: goto label_2b1f2c;
        case 0x2b1f30u: goto label_2b1f30;
        case 0x2b1f34u: goto label_2b1f34;
        case 0x2b1f38u: goto label_2b1f38;
        case 0x2b1f3cu: goto label_2b1f3c;
        case 0x2b1f40u: goto label_2b1f40;
        case 0x2b1f44u: goto label_2b1f44;
        case 0x2b1f48u: goto label_2b1f48;
        case 0x2b1f4cu: goto label_2b1f4c;
        case 0x2b1f50u: goto label_2b1f50;
        case 0x2b1f54u: goto label_2b1f54;
        case 0x2b1f58u: goto label_2b1f58;
        case 0x2b1f5cu: goto label_2b1f5c;
        case 0x2b1f60u: goto label_2b1f60;
        case 0x2b1f64u: goto label_2b1f64;
        case 0x2b1f68u: goto label_2b1f68;
        case 0x2b1f6cu: goto label_2b1f6c;
        case 0x2b1f70u: goto label_2b1f70;
        case 0x2b1f74u: goto label_2b1f74;
        case 0x2b1f78u: goto label_2b1f78;
        case 0x2b1f7cu: goto label_2b1f7c;
        case 0x2b1f80u: goto label_2b1f80;
        case 0x2b1f84u: goto label_2b1f84;
        case 0x2b1f88u: goto label_2b1f88;
        case 0x2b1f8cu: goto label_2b1f8c;
        case 0x2b1f90u: goto label_2b1f90;
        case 0x2b1f94u: goto label_2b1f94;
        case 0x2b1f98u: goto label_2b1f98;
        case 0x2b1f9cu: goto label_2b1f9c;
        case 0x2b1fa0u: goto label_2b1fa0;
        case 0x2b1fa4u: goto label_2b1fa4;
        case 0x2b1fa8u: goto label_2b1fa8;
        case 0x2b1facu: goto label_2b1fac;
        case 0x2b1fb0u: goto label_2b1fb0;
        case 0x2b1fb4u: goto label_2b1fb4;
        case 0x2b1fb8u: goto label_2b1fb8;
        case 0x2b1fbcu: goto label_2b1fbc;
        case 0x2b1fc0u: goto label_2b1fc0;
        case 0x2b1fc4u: goto label_2b1fc4;
        case 0x2b1fc8u: goto label_2b1fc8;
        case 0x2b1fccu: goto label_2b1fcc;
        case 0x2b1fd0u: goto label_2b1fd0;
        case 0x2b1fd4u: goto label_2b1fd4;
        case 0x2b1fd8u: goto label_2b1fd8;
        case 0x2b1fdcu: goto label_2b1fdc;
        case 0x2b1fe0u: goto label_2b1fe0;
        case 0x2b1fe4u: goto label_2b1fe4;
        case 0x2b1fe8u: goto label_2b1fe8;
        case 0x2b1fecu: goto label_2b1fec;
        case 0x2b1ff0u: goto label_2b1ff0;
        case 0x2b1ff4u: goto label_2b1ff4;
        case 0x2b1ff8u: goto label_2b1ff8;
        case 0x2b1ffcu: goto label_2b1ffc;
        case 0x2b2000u: goto label_2b2000;
        case 0x2b2004u: goto label_2b2004;
        case 0x2b2008u: goto label_2b2008;
        case 0x2b200cu: goto label_2b200c;
        case 0x2b2010u: goto label_2b2010;
        case 0x2b2014u: goto label_2b2014;
        case 0x2b2018u: goto label_2b2018;
        case 0x2b201cu: goto label_2b201c;
        case 0x2b2020u: goto label_2b2020;
        case 0x2b2024u: goto label_2b2024;
        case 0x2b2028u: goto label_2b2028;
        case 0x2b202cu: goto label_2b202c;
        case 0x2b2030u: goto label_2b2030;
        case 0x2b2034u: goto label_2b2034;
        case 0x2b2038u: goto label_2b2038;
        case 0x2b203cu: goto label_2b203c;
        case 0x2b2040u: goto label_2b2040;
        case 0x2b2044u: goto label_2b2044;
        case 0x2b2048u: goto label_2b2048;
        case 0x2b204cu: goto label_2b204c;
        case 0x2b2050u: goto label_2b2050;
        case 0x2b2054u: goto label_2b2054;
        case 0x2b2058u: goto label_2b2058;
        case 0x2b205cu: goto label_2b205c;
        case 0x2b2060u: goto label_2b2060;
        case 0x2b2064u: goto label_2b2064;
        case 0x2b2068u: goto label_2b2068;
        case 0x2b206cu: goto label_2b206c;
        case 0x2b2070u: goto label_2b2070;
        case 0x2b2074u: goto label_2b2074;
        case 0x2b2078u: goto label_2b2078;
        case 0x2b207cu: goto label_2b207c;
        case 0x2b2080u: goto label_2b2080;
        case 0x2b2084u: goto label_2b2084;
        case 0x2b2088u: goto label_2b2088;
        case 0x2b208cu: goto label_2b208c;
        case 0x2b2090u: goto label_2b2090;
        case 0x2b2094u: goto label_2b2094;
        case 0x2b2098u: goto label_2b2098;
        case 0x2b209cu: goto label_2b209c;
        case 0x2b20a0u: goto label_2b20a0;
        case 0x2b20a4u: goto label_2b20a4;
        case 0x2b20a8u: goto label_2b20a8;
        case 0x2b20acu: goto label_2b20ac;
        case 0x2b20b0u: goto label_2b20b0;
        case 0x2b20b4u: goto label_2b20b4;
        case 0x2b20b8u: goto label_2b20b8;
        case 0x2b20bcu: goto label_2b20bc;
        case 0x2b20c0u: goto label_2b20c0;
        case 0x2b20c4u: goto label_2b20c4;
        case 0x2b20c8u: goto label_2b20c8;
        case 0x2b20ccu: goto label_2b20cc;
        case 0x2b20d0u: goto label_2b20d0;
        case 0x2b20d4u: goto label_2b20d4;
        case 0x2b20d8u: goto label_2b20d8;
        case 0x2b20dcu: goto label_2b20dc;
        case 0x2b20e0u: goto label_2b20e0;
        case 0x2b20e4u: goto label_2b20e4;
        case 0x2b20e8u: goto label_2b20e8;
        case 0x2b20ecu: goto label_2b20ec;
        case 0x2b20f0u: goto label_2b20f0;
        case 0x2b20f4u: goto label_2b20f4;
        case 0x2b20f8u: goto label_2b20f8;
        case 0x2b20fcu: goto label_2b20fc;
        case 0x2b2100u: goto label_2b2100;
        case 0x2b2104u: goto label_2b2104;
        case 0x2b2108u: goto label_2b2108;
        case 0x2b210cu: goto label_2b210c;
        case 0x2b2110u: goto label_2b2110;
        case 0x2b2114u: goto label_2b2114;
        case 0x2b2118u: goto label_2b2118;
        case 0x2b211cu: goto label_2b211c;
        case 0x2b2120u: goto label_2b2120;
        case 0x2b2124u: goto label_2b2124;
        case 0x2b2128u: goto label_2b2128;
        case 0x2b212cu: goto label_2b212c;
        case 0x2b2130u: goto label_2b2130;
        case 0x2b2134u: goto label_2b2134;
        case 0x2b2138u: goto label_2b2138;
        case 0x2b213cu: goto label_2b213c;
        case 0x2b2140u: goto label_2b2140;
        case 0x2b2144u: goto label_2b2144;
        case 0x2b2148u: goto label_2b2148;
        case 0x2b214cu: goto label_2b214c;
        case 0x2b2150u: goto label_2b2150;
        case 0x2b2154u: goto label_2b2154;
        case 0x2b2158u: goto label_2b2158;
        case 0x2b215cu: goto label_2b215c;
        case 0x2b2160u: goto label_2b2160;
        case 0x2b2164u: goto label_2b2164;
        case 0x2b2168u: goto label_2b2168;
        case 0x2b216cu: goto label_2b216c;
        case 0x2b2170u: goto label_2b2170;
        case 0x2b2174u: goto label_2b2174;
        case 0x2b2178u: goto label_2b2178;
        case 0x2b217cu: goto label_2b217c;
        case 0x2b2180u: goto label_2b2180;
        case 0x2b2184u: goto label_2b2184;
        case 0x2b2188u: goto label_2b2188;
        case 0x2b218cu: goto label_2b218c;
        case 0x2b2190u: goto label_2b2190;
        case 0x2b2194u: goto label_2b2194;
        case 0x2b2198u: goto label_2b2198;
        case 0x2b219cu: goto label_2b219c;
        case 0x2b21a0u: goto label_2b21a0;
        case 0x2b21a4u: goto label_2b21a4;
        case 0x2b21a8u: goto label_2b21a8;
        case 0x2b21acu: goto label_2b21ac;
        case 0x2b21b0u: goto label_2b21b0;
        case 0x2b21b4u: goto label_2b21b4;
        case 0x2b21b8u: goto label_2b21b8;
        case 0x2b21bcu: goto label_2b21bc;
        case 0x2b21c0u: goto label_2b21c0;
        case 0x2b21c4u: goto label_2b21c4;
        case 0x2b21c8u: goto label_2b21c8;
        case 0x2b21ccu: goto label_2b21cc;
        case 0x2b21d0u: goto label_2b21d0;
        case 0x2b21d4u: goto label_2b21d4;
        case 0x2b21d8u: goto label_2b21d8;
        case 0x2b21dcu: goto label_2b21dc;
        case 0x2b21e0u: goto label_2b21e0;
        case 0x2b21e4u: goto label_2b21e4;
        case 0x2b21e8u: goto label_2b21e8;
        case 0x2b21ecu: goto label_2b21ec;
        case 0x2b21f0u: goto label_2b21f0;
        case 0x2b21f4u: goto label_2b21f4;
        case 0x2b21f8u: goto label_2b21f8;
        case 0x2b21fcu: goto label_2b21fc;
        case 0x2b2200u: goto label_2b2200;
        case 0x2b2204u: goto label_2b2204;
        case 0x2b2208u: goto label_2b2208;
        case 0x2b220cu: goto label_2b220c;
        case 0x2b2210u: goto label_2b2210;
        case 0x2b2214u: goto label_2b2214;
        case 0x2b2218u: goto label_2b2218;
        case 0x2b221cu: goto label_2b221c;
        case 0x2b2220u: goto label_2b2220;
        case 0x2b2224u: goto label_2b2224;
        case 0x2b2228u: goto label_2b2228;
        case 0x2b222cu: goto label_2b222c;
        case 0x2b2230u: goto label_2b2230;
        case 0x2b2234u: goto label_2b2234;
        case 0x2b2238u: goto label_2b2238;
        case 0x2b223cu: goto label_2b223c;
        case 0x2b2240u: goto label_2b2240;
        case 0x2b2244u: goto label_2b2244;
        case 0x2b2248u: goto label_2b2248;
        case 0x2b224cu: goto label_2b224c;
        case 0x2b2250u: goto label_2b2250;
        case 0x2b2254u: goto label_2b2254;
        case 0x2b2258u: goto label_2b2258;
        case 0x2b225cu: goto label_2b225c;
        case 0x2b2260u: goto label_2b2260;
        case 0x2b2264u: goto label_2b2264;
        case 0x2b2268u: goto label_2b2268;
        case 0x2b226cu: goto label_2b226c;
        case 0x2b2270u: goto label_2b2270;
        case 0x2b2274u: goto label_2b2274;
        case 0x2b2278u: goto label_2b2278;
        case 0x2b227cu: goto label_2b227c;
        case 0x2b2280u: goto label_2b2280;
        case 0x2b2284u: goto label_2b2284;
        case 0x2b2288u: goto label_2b2288;
        case 0x2b228cu: goto label_2b228c;
        case 0x2b2290u: goto label_2b2290;
        case 0x2b2294u: goto label_2b2294;
        case 0x2b2298u: goto label_2b2298;
        case 0x2b229cu: goto label_2b229c;
        case 0x2b22a0u: goto label_2b22a0;
        case 0x2b22a4u: goto label_2b22a4;
        case 0x2b22a8u: goto label_2b22a8;
        case 0x2b22acu: goto label_2b22ac;
        case 0x2b22b0u: goto label_2b22b0;
        case 0x2b22b4u: goto label_2b22b4;
        case 0x2b22b8u: goto label_2b22b8;
        case 0x2b22bcu: goto label_2b22bc;
        case 0x2b22c0u: goto label_2b22c0;
        case 0x2b22c4u: goto label_2b22c4;
        case 0x2b22c8u: goto label_2b22c8;
        case 0x2b22ccu: goto label_2b22cc;
        case 0x2b22d0u: goto label_2b22d0;
        case 0x2b22d4u: goto label_2b22d4;
        case 0x2b22d8u: goto label_2b22d8;
        case 0x2b22dcu: goto label_2b22dc;
        case 0x2b22e0u: goto label_2b22e0;
        case 0x2b22e4u: goto label_2b22e4;
        case 0x2b22e8u: goto label_2b22e8;
        case 0x2b22ecu: goto label_2b22ec;
        case 0x2b22f0u: goto label_2b22f0;
        case 0x2b22f4u: goto label_2b22f4;
        case 0x2b22f8u: goto label_2b22f8;
        case 0x2b22fcu: goto label_2b22fc;
        case 0x2b2300u: goto label_2b2300;
        case 0x2b2304u: goto label_2b2304;
        case 0x2b2308u: goto label_2b2308;
        case 0x2b230cu: goto label_2b230c;
        case 0x2b2310u: goto label_2b2310;
        case 0x2b2314u: goto label_2b2314;
        case 0x2b2318u: goto label_2b2318;
        case 0x2b231cu: goto label_2b231c;
        case 0x2b2320u: goto label_2b2320;
        case 0x2b2324u: goto label_2b2324;
        case 0x2b2328u: goto label_2b2328;
        case 0x2b232cu: goto label_2b232c;
        case 0x2b2330u: goto label_2b2330;
        case 0x2b2334u: goto label_2b2334;
        case 0x2b2338u: goto label_2b2338;
        case 0x2b233cu: goto label_2b233c;
        case 0x2b2340u: goto label_2b2340;
        case 0x2b2344u: goto label_2b2344;
        case 0x2b2348u: goto label_2b2348;
        case 0x2b234cu: goto label_2b234c;
        case 0x2b2350u: goto label_2b2350;
        case 0x2b2354u: goto label_2b2354;
        case 0x2b2358u: goto label_2b2358;
        case 0x2b235cu: goto label_2b235c;
        case 0x2b2360u: goto label_2b2360;
        case 0x2b2364u: goto label_2b2364;
        case 0x2b2368u: goto label_2b2368;
        case 0x2b236cu: goto label_2b236c;
        case 0x2b2370u: goto label_2b2370;
        case 0x2b2374u: goto label_2b2374;
        case 0x2b2378u: goto label_2b2378;
        case 0x2b237cu: goto label_2b237c;
        case 0x2b2380u: goto label_2b2380;
        case 0x2b2384u: goto label_2b2384;
        case 0x2b2388u: goto label_2b2388;
        case 0x2b238cu: goto label_2b238c;
        case 0x2b2390u: goto label_2b2390;
        case 0x2b2394u: goto label_2b2394;
        case 0x2b2398u: goto label_2b2398;
        case 0x2b239cu: goto label_2b239c;
        case 0x2b23a0u: goto label_2b23a0;
        case 0x2b23a4u: goto label_2b23a4;
        case 0x2b23a8u: goto label_2b23a8;
        case 0x2b23acu: goto label_2b23ac;
        case 0x2b23b0u: goto label_2b23b0;
        case 0x2b23b4u: goto label_2b23b4;
        case 0x2b23b8u: goto label_2b23b8;
        case 0x2b23bcu: goto label_2b23bc;
        case 0x2b23c0u: goto label_2b23c0;
        case 0x2b23c4u: goto label_2b23c4;
        case 0x2b23c8u: goto label_2b23c8;
        case 0x2b23ccu: goto label_2b23cc;
        case 0x2b23d0u: goto label_2b23d0;
        case 0x2b23d4u: goto label_2b23d4;
        case 0x2b23d8u: goto label_2b23d8;
        case 0x2b23dcu: goto label_2b23dc;
        case 0x2b23e0u: goto label_2b23e0;
        case 0x2b23e4u: goto label_2b23e4;
        case 0x2b23e8u: goto label_2b23e8;
        case 0x2b23ecu: goto label_2b23ec;
        case 0x2b23f0u: goto label_2b23f0;
        case 0x2b23f4u: goto label_2b23f4;
        case 0x2b23f8u: goto label_2b23f8;
        case 0x2b23fcu: goto label_2b23fc;
        case 0x2b2400u: goto label_2b2400;
        case 0x2b2404u: goto label_2b2404;
        case 0x2b2408u: goto label_2b2408;
        case 0x2b240cu: goto label_2b240c;
        case 0x2b2410u: goto label_2b2410;
        case 0x2b2414u: goto label_2b2414;
        case 0x2b2418u: goto label_2b2418;
        case 0x2b241cu: goto label_2b241c;
        case 0x2b2420u: goto label_2b2420;
        case 0x2b2424u: goto label_2b2424;
        case 0x2b2428u: goto label_2b2428;
        case 0x2b242cu: goto label_2b242c;
        case 0x2b2430u: goto label_2b2430;
        case 0x2b2434u: goto label_2b2434;
        case 0x2b2438u: goto label_2b2438;
        case 0x2b243cu: goto label_2b243c;
        case 0x2b2440u: goto label_2b2440;
        case 0x2b2444u: goto label_2b2444;
        case 0x2b2448u: goto label_2b2448;
        case 0x2b244cu: goto label_2b244c;
        case 0x2b2450u: goto label_2b2450;
        case 0x2b2454u: goto label_2b2454;
        case 0x2b2458u: goto label_2b2458;
        case 0x2b245cu: goto label_2b245c;
        case 0x2b2460u: goto label_2b2460;
        case 0x2b2464u: goto label_2b2464;
        case 0x2b2468u: goto label_2b2468;
        case 0x2b246cu: goto label_2b246c;
        case 0x2b2470u: goto label_2b2470;
        case 0x2b2474u: goto label_2b2474;
        case 0x2b2478u: goto label_2b2478;
        case 0x2b247cu: goto label_2b247c;
        case 0x2b2480u: goto label_2b2480;
        case 0x2b2484u: goto label_2b2484;
        case 0x2b2488u: goto label_2b2488;
        case 0x2b248cu: goto label_2b248c;
        case 0x2b2490u: goto label_2b2490;
        case 0x2b2494u: goto label_2b2494;
        case 0x2b2498u: goto label_2b2498;
        case 0x2b249cu: goto label_2b249c;
        case 0x2b24a0u: goto label_2b24a0;
        case 0x2b24a4u: goto label_2b24a4;
        case 0x2b24a8u: goto label_2b24a8;
        case 0x2b24acu: goto label_2b24ac;
        case 0x2b24b0u: goto label_2b24b0;
        case 0x2b24b4u: goto label_2b24b4;
        case 0x2b24b8u: goto label_2b24b8;
        case 0x2b24bcu: goto label_2b24bc;
        case 0x2b24c0u: goto label_2b24c0;
        case 0x2b24c4u: goto label_2b24c4;
        case 0x2b24c8u: goto label_2b24c8;
        case 0x2b24ccu: goto label_2b24cc;
        case 0x2b24d0u: goto label_2b24d0;
        case 0x2b24d4u: goto label_2b24d4;
        case 0x2b24d8u: goto label_2b24d8;
        case 0x2b24dcu: goto label_2b24dc;
        case 0x2b24e0u: goto label_2b24e0;
        case 0x2b24e4u: goto label_2b24e4;
        case 0x2b24e8u: goto label_2b24e8;
        case 0x2b24ecu: goto label_2b24ec;
        case 0x2b24f0u: goto label_2b24f0;
        case 0x2b24f4u: goto label_2b24f4;
        case 0x2b24f8u: goto label_2b24f8;
        case 0x2b24fcu: goto label_2b24fc;
        case 0x2b2500u: goto label_2b2500;
        case 0x2b2504u: goto label_2b2504;
        case 0x2b2508u: goto label_2b2508;
        case 0x2b250cu: goto label_2b250c;
        case 0x2b2510u: goto label_2b2510;
        case 0x2b2514u: goto label_2b2514;
        case 0x2b2518u: goto label_2b2518;
        case 0x2b251cu: goto label_2b251c;
        case 0x2b2520u: goto label_2b2520;
        case 0x2b2524u: goto label_2b2524;
        case 0x2b2528u: goto label_2b2528;
        case 0x2b252cu: goto label_2b252c;
        case 0x2b2530u: goto label_2b2530;
        case 0x2b2534u: goto label_2b2534;
        case 0x2b2538u: goto label_2b2538;
        case 0x2b253cu: goto label_2b253c;
        case 0x2b2540u: goto label_2b2540;
        case 0x2b2544u: goto label_2b2544;
        case 0x2b2548u: goto label_2b2548;
        case 0x2b254cu: goto label_2b254c;
        case 0x2b2550u: goto label_2b2550;
        case 0x2b2554u: goto label_2b2554;
        case 0x2b2558u: goto label_2b2558;
        case 0x2b255cu: goto label_2b255c;
        case 0x2b2560u: goto label_2b2560;
        case 0x2b2564u: goto label_2b2564;
        case 0x2b2568u: goto label_2b2568;
        case 0x2b256cu: goto label_2b256c;
        case 0x2b2570u: goto label_2b2570;
        case 0x2b2574u: goto label_2b2574;
        case 0x2b2578u: goto label_2b2578;
        case 0x2b257cu: goto label_2b257c;
        case 0x2b2580u: goto label_2b2580;
        case 0x2b2584u: goto label_2b2584;
        case 0x2b2588u: goto label_2b2588;
        case 0x2b258cu: goto label_2b258c;
        case 0x2b2590u: goto label_2b2590;
        case 0x2b2594u: goto label_2b2594;
        case 0x2b2598u: goto label_2b2598;
        case 0x2b259cu: goto label_2b259c;
        case 0x2b25a0u: goto label_2b25a0;
        case 0x2b25a4u: goto label_2b25a4;
        case 0x2b25a8u: goto label_2b25a8;
        case 0x2b25acu: goto label_2b25ac;
        case 0x2b25b0u: goto label_2b25b0;
        case 0x2b25b4u: goto label_2b25b4;
        case 0x2b25b8u: goto label_2b25b8;
        case 0x2b25bcu: goto label_2b25bc;
        case 0x2b25c0u: goto label_2b25c0;
        case 0x2b25c4u: goto label_2b25c4;
        case 0x2b25c8u: goto label_2b25c8;
        case 0x2b25ccu: goto label_2b25cc;
        case 0x2b25d0u: goto label_2b25d0;
        case 0x2b25d4u: goto label_2b25d4;
        case 0x2b25d8u: goto label_2b25d8;
        case 0x2b25dcu: goto label_2b25dc;
        case 0x2b25e0u: goto label_2b25e0;
        case 0x2b25e4u: goto label_2b25e4;
        case 0x2b25e8u: goto label_2b25e8;
        case 0x2b25ecu: goto label_2b25ec;
        case 0x2b25f0u: goto label_2b25f0;
        case 0x2b25f4u: goto label_2b25f4;
        case 0x2b25f8u: goto label_2b25f8;
        case 0x2b25fcu: goto label_2b25fc;
        case 0x2b2600u: goto label_2b2600;
        case 0x2b2604u: goto label_2b2604;
        case 0x2b2608u: goto label_2b2608;
        case 0x2b260cu: goto label_2b260c;
        case 0x2b2610u: goto label_2b2610;
        case 0x2b2614u: goto label_2b2614;
        case 0x2b2618u: goto label_2b2618;
        case 0x2b261cu: goto label_2b261c;
        case 0x2b2620u: goto label_2b2620;
        case 0x2b2624u: goto label_2b2624;
        case 0x2b2628u: goto label_2b2628;
        case 0x2b262cu: goto label_2b262c;
        case 0x2b2630u: goto label_2b2630;
        case 0x2b2634u: goto label_2b2634;
        case 0x2b2638u: goto label_2b2638;
        case 0x2b263cu: goto label_2b263c;
        case 0x2b2640u: goto label_2b2640;
        case 0x2b2644u: goto label_2b2644;
        case 0x2b2648u: goto label_2b2648;
        case 0x2b264cu: goto label_2b264c;
        case 0x2b2650u: goto label_2b2650;
        case 0x2b2654u: goto label_2b2654;
        case 0x2b2658u: goto label_2b2658;
        case 0x2b265cu: goto label_2b265c;
        case 0x2b2660u: goto label_2b2660;
        case 0x2b2664u: goto label_2b2664;
        case 0x2b2668u: goto label_2b2668;
        case 0x2b266cu: goto label_2b266c;
        case 0x2b2670u: goto label_2b2670;
        case 0x2b2674u: goto label_2b2674;
        case 0x2b2678u: goto label_2b2678;
        case 0x2b267cu: goto label_2b267c;
        case 0x2b2680u: goto label_2b2680;
        case 0x2b2684u: goto label_2b2684;
        case 0x2b2688u: goto label_2b2688;
        case 0x2b268cu: goto label_2b268c;
        case 0x2b2690u: goto label_2b2690;
        case 0x2b2694u: goto label_2b2694;
        case 0x2b2698u: goto label_2b2698;
        case 0x2b269cu: goto label_2b269c;
        case 0x2b26a0u: goto label_2b26a0;
        case 0x2b26a4u: goto label_2b26a4;
        case 0x2b26a8u: goto label_2b26a8;
        case 0x2b26acu: goto label_2b26ac;
        case 0x2b26b0u: goto label_2b26b0;
        case 0x2b26b4u: goto label_2b26b4;
        case 0x2b26b8u: goto label_2b26b8;
        case 0x2b26bcu: goto label_2b26bc;
        case 0x2b26c0u: goto label_2b26c0;
        case 0x2b26c4u: goto label_2b26c4;
        case 0x2b26c8u: goto label_2b26c8;
        case 0x2b26ccu: goto label_2b26cc;
        case 0x2b26d0u: goto label_2b26d0;
        case 0x2b26d4u: goto label_2b26d4;
        case 0x2b26d8u: goto label_2b26d8;
        case 0x2b26dcu: goto label_2b26dc;
        case 0x2b26e0u: goto label_2b26e0;
        case 0x2b26e4u: goto label_2b26e4;
        case 0x2b26e8u: goto label_2b26e8;
        case 0x2b26ecu: goto label_2b26ec;
        case 0x2b26f0u: goto label_2b26f0;
        case 0x2b26f4u: goto label_2b26f4;
        case 0x2b26f8u: goto label_2b26f8;
        case 0x2b26fcu: goto label_2b26fc;
        case 0x2b2700u: goto label_2b2700;
        case 0x2b2704u: goto label_2b2704;
        case 0x2b2708u: goto label_2b2708;
        case 0x2b270cu: goto label_2b270c;
        case 0x2b2710u: goto label_2b2710;
        case 0x2b2714u: goto label_2b2714;
        case 0x2b2718u: goto label_2b2718;
        case 0x2b271cu: goto label_2b271c;
        case 0x2b2720u: goto label_2b2720;
        case 0x2b2724u: goto label_2b2724;
        case 0x2b2728u: goto label_2b2728;
        case 0x2b272cu: goto label_2b272c;
        case 0x2b2730u: goto label_2b2730;
        case 0x2b2734u: goto label_2b2734;
        case 0x2b2738u: goto label_2b2738;
        case 0x2b273cu: goto label_2b273c;
        case 0x2b2740u: goto label_2b2740;
        case 0x2b2744u: goto label_2b2744;
        case 0x2b2748u: goto label_2b2748;
        case 0x2b274cu: goto label_2b274c;
        case 0x2b2750u: goto label_2b2750;
        case 0x2b2754u: goto label_2b2754;
        case 0x2b2758u: goto label_2b2758;
        case 0x2b275cu: goto label_2b275c;
        case 0x2b2760u: goto label_2b2760;
        case 0x2b2764u: goto label_2b2764;
        case 0x2b2768u: goto label_2b2768;
        case 0x2b276cu: goto label_2b276c;
        case 0x2b2770u: goto label_2b2770;
        case 0x2b2774u: goto label_2b2774;
        case 0x2b2778u: goto label_2b2778;
        case 0x2b277cu: goto label_2b277c;
        case 0x2b2780u: goto label_2b2780;
        case 0x2b2784u: goto label_2b2784;
        case 0x2b2788u: goto label_2b2788;
        case 0x2b278cu: goto label_2b278c;
        case 0x2b2790u: goto label_2b2790;
        case 0x2b2794u: goto label_2b2794;
        case 0x2b2798u: goto label_2b2798;
        case 0x2b279cu: goto label_2b279c;
        case 0x2b27a0u: goto label_2b27a0;
        case 0x2b27a4u: goto label_2b27a4;
        case 0x2b27a8u: goto label_2b27a8;
        case 0x2b27acu: goto label_2b27ac;
        case 0x2b27b0u: goto label_2b27b0;
        case 0x2b27b4u: goto label_2b27b4;
        case 0x2b27b8u: goto label_2b27b8;
        case 0x2b27bcu: goto label_2b27bc;
        case 0x2b27c0u: goto label_2b27c0;
        case 0x2b27c4u: goto label_2b27c4;
        case 0x2b27c8u: goto label_2b27c8;
        case 0x2b27ccu: goto label_2b27cc;
        case 0x2b27d0u: goto label_2b27d0;
        case 0x2b27d4u: goto label_2b27d4;
        case 0x2b27d8u: goto label_2b27d8;
        case 0x2b27dcu: goto label_2b27dc;
        case 0x2b27e0u: goto label_2b27e0;
        case 0x2b27e4u: goto label_2b27e4;
        case 0x2b27e8u: goto label_2b27e8;
        case 0x2b27ecu: goto label_2b27ec;
        case 0x2b27f0u: goto label_2b27f0;
        case 0x2b27f4u: goto label_2b27f4;
        case 0x2b27f8u: goto label_2b27f8;
        case 0x2b27fcu: goto label_2b27fc;
        case 0x2b2800u: goto label_2b2800;
        case 0x2b2804u: goto label_2b2804;
        case 0x2b2808u: goto label_2b2808;
        case 0x2b280cu: goto label_2b280c;
        case 0x2b2810u: goto label_2b2810;
        case 0x2b2814u: goto label_2b2814;
        case 0x2b2818u: goto label_2b2818;
        case 0x2b281cu: goto label_2b281c;
        case 0x2b2820u: goto label_2b2820;
        case 0x2b2824u: goto label_2b2824;
        case 0x2b2828u: goto label_2b2828;
        case 0x2b282cu: goto label_2b282c;
        case 0x2b2830u: goto label_2b2830;
        case 0x2b2834u: goto label_2b2834;
        case 0x2b2838u: goto label_2b2838;
        case 0x2b283cu: goto label_2b283c;
        case 0x2b2840u: goto label_2b2840;
        case 0x2b2844u: goto label_2b2844;
        case 0x2b2848u: goto label_2b2848;
        case 0x2b284cu: goto label_2b284c;
        case 0x2b2850u: goto label_2b2850;
        case 0x2b2854u: goto label_2b2854;
        case 0x2b2858u: goto label_2b2858;
        case 0x2b285cu: goto label_2b285c;
        case 0x2b2860u: goto label_2b2860;
        case 0x2b2864u: goto label_2b2864;
        case 0x2b2868u: goto label_2b2868;
        case 0x2b286cu: goto label_2b286c;
        case 0x2b2870u: goto label_2b2870;
        case 0x2b2874u: goto label_2b2874;
        case 0x2b2878u: goto label_2b2878;
        case 0x2b287cu: goto label_2b287c;
        case 0x2b2880u: goto label_2b2880;
        case 0x2b2884u: goto label_2b2884;
        case 0x2b2888u: goto label_2b2888;
        case 0x2b288cu: goto label_2b288c;
        case 0x2b2890u: goto label_2b2890;
        case 0x2b2894u: goto label_2b2894;
        case 0x2b2898u: goto label_2b2898;
        case 0x2b289cu: goto label_2b289c;
        case 0x2b28a0u: goto label_2b28a0;
        case 0x2b28a4u: goto label_2b28a4;
        case 0x2b28a8u: goto label_2b28a8;
        case 0x2b28acu: goto label_2b28ac;
        case 0x2b28b0u: goto label_2b28b0;
        case 0x2b28b4u: goto label_2b28b4;
        case 0x2b28b8u: goto label_2b28b8;
        case 0x2b28bcu: goto label_2b28bc;
        case 0x2b28c0u: goto label_2b28c0;
        case 0x2b28c4u: goto label_2b28c4;
        case 0x2b28c8u: goto label_2b28c8;
        case 0x2b28ccu: goto label_2b28cc;
        case 0x2b28d0u: goto label_2b28d0;
        case 0x2b28d4u: goto label_2b28d4;
        case 0x2b28d8u: goto label_2b28d8;
        case 0x2b28dcu: goto label_2b28dc;
        case 0x2b28e0u: goto label_2b28e0;
        case 0x2b28e4u: goto label_2b28e4;
        case 0x2b28e8u: goto label_2b28e8;
        case 0x2b28ecu: goto label_2b28ec;
        case 0x2b28f0u: goto label_2b28f0;
        case 0x2b28f4u: goto label_2b28f4;
        case 0x2b28f8u: goto label_2b28f8;
        case 0x2b28fcu: goto label_2b28fc;
        case 0x2b2900u: goto label_2b2900;
        case 0x2b2904u: goto label_2b2904;
        case 0x2b2908u: goto label_2b2908;
        case 0x2b290cu: goto label_2b290c;
        case 0x2b2910u: goto label_2b2910;
        case 0x2b2914u: goto label_2b2914;
        case 0x2b2918u: goto label_2b2918;
        case 0x2b291cu: goto label_2b291c;
        case 0x2b2920u: goto label_2b2920;
        case 0x2b2924u: goto label_2b2924;
        case 0x2b2928u: goto label_2b2928;
        case 0x2b292cu: goto label_2b292c;
        case 0x2b2930u: goto label_2b2930;
        case 0x2b2934u: goto label_2b2934;
        case 0x2b2938u: goto label_2b2938;
        case 0x2b293cu: goto label_2b293c;
        case 0x2b2940u: goto label_2b2940;
        case 0x2b2944u: goto label_2b2944;
        case 0x2b2948u: goto label_2b2948;
        case 0x2b294cu: goto label_2b294c;
        case 0x2b2950u: goto label_2b2950;
        case 0x2b2954u: goto label_2b2954;
        case 0x2b2958u: goto label_2b2958;
        case 0x2b295cu: goto label_2b295c;
        case 0x2b2960u: goto label_2b2960;
        case 0x2b2964u: goto label_2b2964;
        case 0x2b2968u: goto label_2b2968;
        case 0x2b296cu: goto label_2b296c;
        case 0x2b2970u: goto label_2b2970;
        case 0x2b2974u: goto label_2b2974;
        case 0x2b2978u: goto label_2b2978;
        case 0x2b297cu: goto label_2b297c;
        case 0x2b2980u: goto label_2b2980;
        case 0x2b2984u: goto label_2b2984;
        case 0x2b2988u: goto label_2b2988;
        case 0x2b298cu: goto label_2b298c;
        case 0x2b2990u: goto label_2b2990;
        case 0x2b2994u: goto label_2b2994;
        case 0x2b2998u: goto label_2b2998;
        case 0x2b299cu: goto label_2b299c;
        case 0x2b29a0u: goto label_2b29a0;
        case 0x2b29a4u: goto label_2b29a4;
        case 0x2b29a8u: goto label_2b29a8;
        case 0x2b29acu: goto label_2b29ac;
        case 0x2b29b0u: goto label_2b29b0;
        case 0x2b29b4u: goto label_2b29b4;
        case 0x2b29b8u: goto label_2b29b8;
        case 0x2b29bcu: goto label_2b29bc;
        case 0x2b29c0u: goto label_2b29c0;
        case 0x2b29c4u: goto label_2b29c4;
        case 0x2b29c8u: goto label_2b29c8;
        case 0x2b29ccu: goto label_2b29cc;
        case 0x2b29d0u: goto label_2b29d0;
        case 0x2b29d4u: goto label_2b29d4;
        case 0x2b29d8u: goto label_2b29d8;
        case 0x2b29dcu: goto label_2b29dc;
        case 0x2b29e0u: goto label_2b29e0;
        case 0x2b29e4u: goto label_2b29e4;
        case 0x2b29e8u: goto label_2b29e8;
        case 0x2b29ecu: goto label_2b29ec;
        case 0x2b29f0u: goto label_2b29f0;
        case 0x2b29f4u: goto label_2b29f4;
        case 0x2b29f8u: goto label_2b29f8;
        case 0x2b29fcu: goto label_2b29fc;
        case 0x2b2a00u: goto label_2b2a00;
        case 0x2b2a04u: goto label_2b2a04;
        case 0x2b2a08u: goto label_2b2a08;
        case 0x2b2a0cu: goto label_2b2a0c;
        case 0x2b2a10u: goto label_2b2a10;
        case 0x2b2a14u: goto label_2b2a14;
        case 0x2b2a18u: goto label_2b2a18;
        case 0x2b2a1cu: goto label_2b2a1c;
        case 0x2b2a20u: goto label_2b2a20;
        case 0x2b2a24u: goto label_2b2a24;
        case 0x2b2a28u: goto label_2b2a28;
        case 0x2b2a2cu: goto label_2b2a2c;
        case 0x2b2a30u: goto label_2b2a30;
        case 0x2b2a34u: goto label_2b2a34;
        case 0x2b2a38u: goto label_2b2a38;
        case 0x2b2a3cu: goto label_2b2a3c;
        case 0x2b2a40u: goto label_2b2a40;
        case 0x2b2a44u: goto label_2b2a44;
        case 0x2b2a48u: goto label_2b2a48;
        case 0x2b2a4cu: goto label_2b2a4c;
        case 0x2b2a50u: goto label_2b2a50;
        case 0x2b2a54u: goto label_2b2a54;
        case 0x2b2a58u: goto label_2b2a58;
        case 0x2b2a5cu: goto label_2b2a5c;
        case 0x2b2a60u: goto label_2b2a60;
        case 0x2b2a64u: goto label_2b2a64;
        case 0x2b2a68u: goto label_2b2a68;
        case 0x2b2a6cu: goto label_2b2a6c;
        case 0x2b2a70u: goto label_2b2a70;
        case 0x2b2a74u: goto label_2b2a74;
        case 0x2b2a78u: goto label_2b2a78;
        case 0x2b2a7cu: goto label_2b2a7c;
        case 0x2b2a80u: goto label_2b2a80;
        case 0x2b2a84u: goto label_2b2a84;
        case 0x2b2a88u: goto label_2b2a88;
        case 0x2b2a8cu: goto label_2b2a8c;
        case 0x2b2a90u: goto label_2b2a90;
        case 0x2b2a94u: goto label_2b2a94;
        case 0x2b2a98u: goto label_2b2a98;
        case 0x2b2a9cu: goto label_2b2a9c;
        case 0x2b2aa0u: goto label_2b2aa0;
        case 0x2b2aa4u: goto label_2b2aa4;
        case 0x2b2aa8u: goto label_2b2aa8;
        case 0x2b2aacu: goto label_2b2aac;
        case 0x2b2ab0u: goto label_2b2ab0;
        case 0x2b2ab4u: goto label_2b2ab4;
        case 0x2b2ab8u: goto label_2b2ab8;
        case 0x2b2abcu: goto label_2b2abc;
        case 0x2b2ac0u: goto label_2b2ac0;
        case 0x2b2ac4u: goto label_2b2ac4;
        case 0x2b2ac8u: goto label_2b2ac8;
        case 0x2b2accu: goto label_2b2acc;
        case 0x2b2ad0u: goto label_2b2ad0;
        case 0x2b2ad4u: goto label_2b2ad4;
        case 0x2b2ad8u: goto label_2b2ad8;
        case 0x2b2adcu: goto label_2b2adc;
        case 0x2b2ae0u: goto label_2b2ae0;
        case 0x2b2ae4u: goto label_2b2ae4;
        case 0x2b2ae8u: goto label_2b2ae8;
        case 0x2b2aecu: goto label_2b2aec;
        case 0x2b2af0u: goto label_2b2af0;
        case 0x2b2af4u: goto label_2b2af4;
        case 0x2b2af8u: goto label_2b2af8;
        case 0x2b2afcu: goto label_2b2afc;
        case 0x2b2b00u: goto label_2b2b00;
        case 0x2b2b04u: goto label_2b2b04;
        case 0x2b2b08u: goto label_2b2b08;
        case 0x2b2b0cu: goto label_2b2b0c;
        case 0x2b2b10u: goto label_2b2b10;
        case 0x2b2b14u: goto label_2b2b14;
        case 0x2b2b18u: goto label_2b2b18;
        case 0x2b2b1cu: goto label_2b2b1c;
        case 0x2b2b20u: goto label_2b2b20;
        case 0x2b2b24u: goto label_2b2b24;
        case 0x2b2b28u: goto label_2b2b28;
        case 0x2b2b2cu: goto label_2b2b2c;
        case 0x2b2b30u: goto label_2b2b30;
        case 0x2b2b34u: goto label_2b2b34;
        case 0x2b2b38u: goto label_2b2b38;
        case 0x2b2b3cu: goto label_2b2b3c;
        case 0x2b2b40u: goto label_2b2b40;
        case 0x2b2b44u: goto label_2b2b44;
        case 0x2b2b48u: goto label_2b2b48;
        case 0x2b2b4cu: goto label_2b2b4c;
        case 0x2b2b50u: goto label_2b2b50;
        case 0x2b2b54u: goto label_2b2b54;
        case 0x2b2b58u: goto label_2b2b58;
        case 0x2b2b5cu: goto label_2b2b5c;
        case 0x2b2b60u: goto label_2b2b60;
        case 0x2b2b64u: goto label_2b2b64;
        case 0x2b2b68u: goto label_2b2b68;
        case 0x2b2b6cu: goto label_2b2b6c;
        case 0x2b2b70u: goto label_2b2b70;
        case 0x2b2b74u: goto label_2b2b74;
        case 0x2b2b78u: goto label_2b2b78;
        case 0x2b2b7cu: goto label_2b2b7c;
        case 0x2b2b80u: goto label_2b2b80;
        case 0x2b2b84u: goto label_2b2b84;
        case 0x2b2b88u: goto label_2b2b88;
        case 0x2b2b8cu: goto label_2b2b8c;
        case 0x2b2b90u: goto label_2b2b90;
        case 0x2b2b94u: goto label_2b2b94;
        case 0x2b2b98u: goto label_2b2b98;
        case 0x2b2b9cu: goto label_2b2b9c;
        case 0x2b2ba0u: goto label_2b2ba0;
        case 0x2b2ba4u: goto label_2b2ba4;
        case 0x2b2ba8u: goto label_2b2ba8;
        case 0x2b2bacu: goto label_2b2bac;
        case 0x2b2bb0u: goto label_2b2bb0;
        case 0x2b2bb4u: goto label_2b2bb4;
        case 0x2b2bb8u: goto label_2b2bb8;
        case 0x2b2bbcu: goto label_2b2bbc;
        case 0x2b2bc0u: goto label_2b2bc0;
        case 0x2b2bc4u: goto label_2b2bc4;
        case 0x2b2bc8u: goto label_2b2bc8;
        case 0x2b2bccu: goto label_2b2bcc;
        case 0x2b2bd0u: goto label_2b2bd0;
        case 0x2b2bd4u: goto label_2b2bd4;
        case 0x2b2bd8u: goto label_2b2bd8;
        case 0x2b2bdcu: goto label_2b2bdc;
        case 0x2b2be0u: goto label_2b2be0;
        case 0x2b2be4u: goto label_2b2be4;
        case 0x2b2be8u: goto label_2b2be8;
        case 0x2b2becu: goto label_2b2bec;
        case 0x2b2bf0u: goto label_2b2bf0;
        case 0x2b2bf4u: goto label_2b2bf4;
        case 0x2b2bf8u: goto label_2b2bf8;
        case 0x2b2bfcu: goto label_2b2bfc;
        case 0x2b2c00u: goto label_2b2c00;
        case 0x2b2c04u: goto label_2b2c04;
        case 0x2b2c08u: goto label_2b2c08;
        case 0x2b2c0cu: goto label_2b2c0c;
        case 0x2b2c10u: goto label_2b2c10;
        case 0x2b2c14u: goto label_2b2c14;
        case 0x2b2c18u: goto label_2b2c18;
        case 0x2b2c1cu: goto label_2b2c1c;
        case 0x2b2c20u: goto label_2b2c20;
        case 0x2b2c24u: goto label_2b2c24;
        case 0x2b2c28u: goto label_2b2c28;
        case 0x2b2c2cu: goto label_2b2c2c;
        case 0x2b2c30u: goto label_2b2c30;
        case 0x2b2c34u: goto label_2b2c34;
        case 0x2b2c38u: goto label_2b2c38;
        case 0x2b2c3cu: goto label_2b2c3c;
        case 0x2b2c40u: goto label_2b2c40;
        case 0x2b2c44u: goto label_2b2c44;
        case 0x2b2c48u: goto label_2b2c48;
        case 0x2b2c4cu: goto label_2b2c4c;
        case 0x2b2c50u: goto label_2b2c50;
        case 0x2b2c54u: goto label_2b2c54;
        case 0x2b2c58u: goto label_2b2c58;
        case 0x2b2c5cu: goto label_2b2c5c;
        case 0x2b2c60u: goto label_2b2c60;
        case 0x2b2c64u: goto label_2b2c64;
        case 0x2b2c68u: goto label_2b2c68;
        case 0x2b2c6cu: goto label_2b2c6c;
        case 0x2b2c70u: goto label_2b2c70;
        case 0x2b2c74u: goto label_2b2c74;
        case 0x2b2c78u: goto label_2b2c78;
        case 0x2b2c7cu: goto label_2b2c7c;
        case 0x2b2c80u: goto label_2b2c80;
        case 0x2b2c84u: goto label_2b2c84;
        case 0x2b2c88u: goto label_2b2c88;
        case 0x2b2c8cu: goto label_2b2c8c;
        case 0x2b2c90u: goto label_2b2c90;
        case 0x2b2c94u: goto label_2b2c94;
        case 0x2b2c98u: goto label_2b2c98;
        case 0x2b2c9cu: goto label_2b2c9c;
        case 0x2b2ca0u: goto label_2b2ca0;
        case 0x2b2ca4u: goto label_2b2ca4;
        case 0x2b2ca8u: goto label_2b2ca8;
        case 0x2b2cacu: goto label_2b2cac;
        case 0x2b2cb0u: goto label_2b2cb0;
        case 0x2b2cb4u: goto label_2b2cb4;
        case 0x2b2cb8u: goto label_2b2cb8;
        case 0x2b2cbcu: goto label_2b2cbc;
        case 0x2b2cc0u: goto label_2b2cc0;
        case 0x2b2cc4u: goto label_2b2cc4;
        case 0x2b2cc8u: goto label_2b2cc8;
        case 0x2b2cccu: goto label_2b2ccc;
        case 0x2b2cd0u: goto label_2b2cd0;
        case 0x2b2cd4u: goto label_2b2cd4;
        case 0x2b2cd8u: goto label_2b2cd8;
        case 0x2b2cdcu: goto label_2b2cdc;
        case 0x2b2ce0u: goto label_2b2ce0;
        case 0x2b2ce4u: goto label_2b2ce4;
        case 0x2b2ce8u: goto label_2b2ce8;
        case 0x2b2cecu: goto label_2b2cec;
        case 0x2b2cf0u: goto label_2b2cf0;
        case 0x2b2cf4u: goto label_2b2cf4;
        case 0x2b2cf8u: goto label_2b2cf8;
        case 0x2b2cfcu: goto label_2b2cfc;
        case 0x2b2d00u: goto label_2b2d00;
        case 0x2b2d04u: goto label_2b2d04;
        case 0x2b2d08u: goto label_2b2d08;
        case 0x2b2d0cu: goto label_2b2d0c;
        case 0x2b2d10u: goto label_2b2d10;
        case 0x2b2d14u: goto label_2b2d14;
        case 0x2b2d18u: goto label_2b2d18;
        case 0x2b2d1cu: goto label_2b2d1c;
        case 0x2b2d20u: goto label_2b2d20;
        case 0x2b2d24u: goto label_2b2d24;
        case 0x2b2d28u: goto label_2b2d28;
        case 0x2b2d2cu: goto label_2b2d2c;
        case 0x2b2d30u: goto label_2b2d30;
        case 0x2b2d34u: goto label_2b2d34;
        case 0x2b2d38u: goto label_2b2d38;
        case 0x2b2d3cu: goto label_2b2d3c;
        case 0x2b2d40u: goto label_2b2d40;
        case 0x2b2d44u: goto label_2b2d44;
        case 0x2b2d48u: goto label_2b2d48;
        case 0x2b2d4cu: goto label_2b2d4c;
        case 0x2b2d50u: goto label_2b2d50;
        case 0x2b2d54u: goto label_2b2d54;
        case 0x2b2d58u: goto label_2b2d58;
        case 0x2b2d5cu: goto label_2b2d5c;
        case 0x2b2d60u: goto label_2b2d60;
        case 0x2b2d64u: goto label_2b2d64;
        case 0x2b2d68u: goto label_2b2d68;
        case 0x2b2d6cu: goto label_2b2d6c;
        case 0x2b2d70u: goto label_2b2d70;
        case 0x2b2d74u: goto label_2b2d74;
        case 0x2b2d78u: goto label_2b2d78;
        case 0x2b2d7cu: goto label_2b2d7c;
        case 0x2b2d80u: goto label_2b2d80;
        case 0x2b2d84u: goto label_2b2d84;
        case 0x2b2d88u: goto label_2b2d88;
        case 0x2b2d8cu: goto label_2b2d8c;
        case 0x2b2d90u: goto label_2b2d90;
        case 0x2b2d94u: goto label_2b2d94;
        case 0x2b2d98u: goto label_2b2d98;
        case 0x2b2d9cu: goto label_2b2d9c;
        case 0x2b2da0u: goto label_2b2da0;
        case 0x2b2da4u: goto label_2b2da4;
        case 0x2b2da8u: goto label_2b2da8;
        case 0x2b2dacu: goto label_2b2dac;
        case 0x2b2db0u: goto label_2b2db0;
        case 0x2b2db4u: goto label_2b2db4;
        case 0x2b2db8u: goto label_2b2db8;
        case 0x2b2dbcu: goto label_2b2dbc;
        case 0x2b2dc0u: goto label_2b2dc0;
        case 0x2b2dc4u: goto label_2b2dc4;
        case 0x2b2dc8u: goto label_2b2dc8;
        case 0x2b2dccu: goto label_2b2dcc;
        case 0x2b2dd0u: goto label_2b2dd0;
        case 0x2b2dd4u: goto label_2b2dd4;
        case 0x2b2dd8u: goto label_2b2dd8;
        case 0x2b2ddcu: goto label_2b2ddc;
        case 0x2b2de0u: goto label_2b2de0;
        case 0x2b2de4u: goto label_2b2de4;
        case 0x2b2de8u: goto label_2b2de8;
        case 0x2b2decu: goto label_2b2dec;
        case 0x2b2df0u: goto label_2b2df0;
        case 0x2b2df4u: goto label_2b2df4;
        case 0x2b2df8u: goto label_2b2df8;
        case 0x2b2dfcu: goto label_2b2dfc;
        case 0x2b2e00u: goto label_2b2e00;
        case 0x2b2e04u: goto label_2b2e04;
        case 0x2b2e08u: goto label_2b2e08;
        case 0x2b2e0cu: goto label_2b2e0c;
        case 0x2b2e10u: goto label_2b2e10;
        case 0x2b2e14u: goto label_2b2e14;
        case 0x2b2e18u: goto label_2b2e18;
        case 0x2b2e1cu: goto label_2b2e1c;
        case 0x2b2e20u: goto label_2b2e20;
        case 0x2b2e24u: goto label_2b2e24;
        case 0x2b2e28u: goto label_2b2e28;
        case 0x2b2e2cu: goto label_2b2e2c;
        case 0x2b2e30u: goto label_2b2e30;
        case 0x2b2e34u: goto label_2b2e34;
        case 0x2b2e38u: goto label_2b2e38;
        case 0x2b2e3cu: goto label_2b2e3c;
        case 0x2b2e40u: goto label_2b2e40;
        case 0x2b2e44u: goto label_2b2e44;
        case 0x2b2e48u: goto label_2b2e48;
        case 0x2b2e4cu: goto label_2b2e4c;
        case 0x2b2e50u: goto label_2b2e50;
        case 0x2b2e54u: goto label_2b2e54;
        case 0x2b2e58u: goto label_2b2e58;
        case 0x2b2e5cu: goto label_2b2e5c;
        case 0x2b2e60u: goto label_2b2e60;
        case 0x2b2e64u: goto label_2b2e64;
        case 0x2b2e68u: goto label_2b2e68;
        case 0x2b2e6cu: goto label_2b2e6c;
        case 0x2b2e70u: goto label_2b2e70;
        case 0x2b2e74u: goto label_2b2e74;
        case 0x2b2e78u: goto label_2b2e78;
        case 0x2b2e7cu: goto label_2b2e7c;
        case 0x2b2e80u: goto label_2b2e80;
        case 0x2b2e84u: goto label_2b2e84;
        case 0x2b2e88u: goto label_2b2e88;
        case 0x2b2e8cu: goto label_2b2e8c;
        case 0x2b2e90u: goto label_2b2e90;
        case 0x2b2e94u: goto label_2b2e94;
        case 0x2b2e98u: goto label_2b2e98;
        case 0x2b2e9cu: goto label_2b2e9c;
        case 0x2b2ea0u: goto label_2b2ea0;
        case 0x2b2ea4u: goto label_2b2ea4;
        case 0x2b2ea8u: goto label_2b2ea8;
        case 0x2b2eacu: goto label_2b2eac;
        case 0x2b2eb0u: goto label_2b2eb0;
        case 0x2b2eb4u: goto label_2b2eb4;
        case 0x2b2eb8u: goto label_2b2eb8;
        case 0x2b2ebcu: goto label_2b2ebc;
        case 0x2b2ec0u: goto label_2b2ec0;
        case 0x2b2ec4u: goto label_2b2ec4;
        case 0x2b2ec8u: goto label_2b2ec8;
        case 0x2b2eccu: goto label_2b2ecc;
        case 0x2b2ed0u: goto label_2b2ed0;
        case 0x2b2ed4u: goto label_2b2ed4;
        case 0x2b2ed8u: goto label_2b2ed8;
        case 0x2b2edcu: goto label_2b2edc;
        case 0x2b2ee0u: goto label_2b2ee0;
        case 0x2b2ee4u: goto label_2b2ee4;
        case 0x2b2ee8u: goto label_2b2ee8;
        case 0x2b2eecu: goto label_2b2eec;
        case 0x2b2ef0u: goto label_2b2ef0;
        case 0x2b2ef4u: goto label_2b2ef4;
        case 0x2b2ef8u: goto label_2b2ef8;
        case 0x2b2efcu: goto label_2b2efc;
        case 0x2b2f00u: goto label_2b2f00;
        case 0x2b2f04u: goto label_2b2f04;
        case 0x2b2f08u: goto label_2b2f08;
        case 0x2b2f0cu: goto label_2b2f0c;
        case 0x2b2f10u: goto label_2b2f10;
        case 0x2b2f14u: goto label_2b2f14;
        case 0x2b2f18u: goto label_2b2f18;
        case 0x2b2f1cu: goto label_2b2f1c;
        case 0x2b2f20u: goto label_2b2f20;
        case 0x2b2f24u: goto label_2b2f24;
        case 0x2b2f28u: goto label_2b2f28;
        case 0x2b2f2cu: goto label_2b2f2c;
        case 0x2b2f30u: goto label_2b2f30;
        case 0x2b2f34u: goto label_2b2f34;
        case 0x2b2f38u: goto label_2b2f38;
        case 0x2b2f3cu: goto label_2b2f3c;
        case 0x2b2f40u: goto label_2b2f40;
        case 0x2b2f44u: goto label_2b2f44;
        case 0x2b2f48u: goto label_2b2f48;
        case 0x2b2f4cu: goto label_2b2f4c;
        case 0x2b2f50u: goto label_2b2f50;
        case 0x2b2f54u: goto label_2b2f54;
        case 0x2b2f58u: goto label_2b2f58;
        case 0x2b2f5cu: goto label_2b2f5c;
        case 0x2b2f60u: goto label_2b2f60;
        case 0x2b2f64u: goto label_2b2f64;
        case 0x2b2f68u: goto label_2b2f68;
        case 0x2b2f6cu: goto label_2b2f6c;
        case 0x2b2f70u: goto label_2b2f70;
        case 0x2b2f74u: goto label_2b2f74;
        case 0x2b2f78u: goto label_2b2f78;
        case 0x2b2f7cu: goto label_2b2f7c;
        case 0x2b2f80u: goto label_2b2f80;
        case 0x2b2f84u: goto label_2b2f84;
        case 0x2b2f88u: goto label_2b2f88;
        case 0x2b2f8cu: goto label_2b2f8c;
        case 0x2b2f90u: goto label_2b2f90;
        case 0x2b2f94u: goto label_2b2f94;
        case 0x2b2f98u: goto label_2b2f98;
        case 0x2b2f9cu: goto label_2b2f9c;
        case 0x2b2fa0u: goto label_2b2fa0;
        case 0x2b2fa4u: goto label_2b2fa4;
        case 0x2b2fa8u: goto label_2b2fa8;
        case 0x2b2facu: goto label_2b2fac;
        case 0x2b2fb0u: goto label_2b2fb0;
        case 0x2b2fb4u: goto label_2b2fb4;
        case 0x2b2fb8u: goto label_2b2fb8;
        case 0x2b2fbcu: goto label_2b2fbc;
        case 0x2b2fc0u: goto label_2b2fc0;
        case 0x2b2fc4u: goto label_2b2fc4;
        case 0x2b2fc8u: goto label_2b2fc8;
        case 0x2b2fccu: goto label_2b2fcc;
        case 0x2b2fd0u: goto label_2b2fd0;
        case 0x2b2fd4u: goto label_2b2fd4;
        case 0x2b2fd8u: goto label_2b2fd8;
        case 0x2b2fdcu: goto label_2b2fdc;
        case 0x2b2fe0u: goto label_2b2fe0;
        case 0x2b2fe4u: goto label_2b2fe4;
        case 0x2b2fe8u: goto label_2b2fe8;
        case 0x2b2fecu: goto label_2b2fec;
        case 0x2b2ff0u: goto label_2b2ff0;
        case 0x2b2ff4u: goto label_2b2ff4;
        case 0x2b2ff8u: goto label_2b2ff8;
        case 0x2b2ffcu: goto label_2b2ffc;
        case 0x2b3000u: goto label_2b3000;
        case 0x2b3004u: goto label_2b3004;
        case 0x2b3008u: goto label_2b3008;
        case 0x2b300cu: goto label_2b300c;
        case 0x2b3010u: goto label_2b3010;
        case 0x2b3014u: goto label_2b3014;
        case 0x2b3018u: goto label_2b3018;
        case 0x2b301cu: goto label_2b301c;
        case 0x2b3020u: goto label_2b3020;
        case 0x2b3024u: goto label_2b3024;
        case 0x2b3028u: goto label_2b3028;
        case 0x2b302cu: goto label_2b302c;
        case 0x2b3030u: goto label_2b3030;
        case 0x2b3034u: goto label_2b3034;
        case 0x2b3038u: goto label_2b3038;
        case 0x2b303cu: goto label_2b303c;
        case 0x2b3040u: goto label_2b3040;
        case 0x2b3044u: goto label_2b3044;
        case 0x2b3048u: goto label_2b3048;
        case 0x2b304cu: goto label_2b304c;
        case 0x2b3050u: goto label_2b3050;
        case 0x2b3054u: goto label_2b3054;
        case 0x2b3058u: goto label_2b3058;
        case 0x2b305cu: goto label_2b305c;
        case 0x2b3060u: goto label_2b3060;
        case 0x2b3064u: goto label_2b3064;
        case 0x2b3068u: goto label_2b3068;
        case 0x2b306cu: goto label_2b306c;
        case 0x2b3070u: goto label_2b3070;
        case 0x2b3074u: goto label_2b3074;
        case 0x2b3078u: goto label_2b3078;
        case 0x2b307cu: goto label_2b307c;
        case 0x2b3080u: goto label_2b3080;
        case 0x2b3084u: goto label_2b3084;
        case 0x2b3088u: goto label_2b3088;
        case 0x2b308cu: goto label_2b308c;
        case 0x2b3090u: goto label_2b3090;
        case 0x2b3094u: goto label_2b3094;
        case 0x2b3098u: goto label_2b3098;
        case 0x2b309cu: goto label_2b309c;
        case 0x2b30a0u: goto label_2b30a0;
        case 0x2b30a4u: goto label_2b30a4;
        case 0x2b30a8u: goto label_2b30a8;
        case 0x2b30acu: goto label_2b30ac;
        case 0x2b30b0u: goto label_2b30b0;
        case 0x2b30b4u: goto label_2b30b4;
        case 0x2b30b8u: goto label_2b30b8;
        case 0x2b30bcu: goto label_2b30bc;
        case 0x2b30c0u: goto label_2b30c0;
        case 0x2b30c4u: goto label_2b30c4;
        case 0x2b30c8u: goto label_2b30c8;
        case 0x2b30ccu: goto label_2b30cc;
        case 0x2b30d0u: goto label_2b30d0;
        case 0x2b30d4u: goto label_2b30d4;
        case 0x2b30d8u: goto label_2b30d8;
        case 0x2b30dcu: goto label_2b30dc;
        case 0x2b30e0u: goto label_2b30e0;
        case 0x2b30e4u: goto label_2b30e4;
        case 0x2b30e8u: goto label_2b30e8;
        case 0x2b30ecu: goto label_2b30ec;
        case 0x2b30f0u: goto label_2b30f0;
        case 0x2b30f4u: goto label_2b30f4;
        case 0x2b30f8u: goto label_2b30f8;
        case 0x2b30fcu: goto label_2b30fc;
        case 0x2b3100u: goto label_2b3100;
        case 0x2b3104u: goto label_2b3104;
        case 0x2b3108u: goto label_2b3108;
        case 0x2b310cu: goto label_2b310c;
        case 0x2b3110u: goto label_2b3110;
        case 0x2b3114u: goto label_2b3114;
        case 0x2b3118u: goto label_2b3118;
        case 0x2b311cu: goto label_2b311c;
        case 0x2b3120u: goto label_2b3120;
        case 0x2b3124u: goto label_2b3124;
        case 0x2b3128u: goto label_2b3128;
        case 0x2b312cu: goto label_2b312c;
        case 0x2b3130u: goto label_2b3130;
        case 0x2b3134u: goto label_2b3134;
        case 0x2b3138u: goto label_2b3138;
        case 0x2b313cu: goto label_2b313c;
        case 0x2b3140u: goto label_2b3140;
        case 0x2b3144u: goto label_2b3144;
        case 0x2b3148u: goto label_2b3148;
        case 0x2b314cu: goto label_2b314c;
        case 0x2b3150u: goto label_2b3150;
        case 0x2b3154u: goto label_2b3154;
        case 0x2b3158u: goto label_2b3158;
        case 0x2b315cu: goto label_2b315c;
        case 0x2b3160u: goto label_2b3160;
        case 0x2b3164u: goto label_2b3164;
        case 0x2b3168u: goto label_2b3168;
        case 0x2b316cu: goto label_2b316c;
        case 0x2b3170u: goto label_2b3170;
        case 0x2b3174u: goto label_2b3174;
        case 0x2b3178u: goto label_2b3178;
        case 0x2b317cu: goto label_2b317c;
        case 0x2b3180u: goto label_2b3180;
        case 0x2b3184u: goto label_2b3184;
        case 0x2b3188u: goto label_2b3188;
        case 0x2b318cu: goto label_2b318c;
        case 0x2b3190u: goto label_2b3190;
        case 0x2b3194u: goto label_2b3194;
        case 0x2b3198u: goto label_2b3198;
        case 0x2b319cu: goto label_2b319c;
        case 0x2b31a0u: goto label_2b31a0;
        case 0x2b31a4u: goto label_2b31a4;
        case 0x2b31a8u: goto label_2b31a8;
        case 0x2b31acu: goto label_2b31ac;
        case 0x2b31b0u: goto label_2b31b0;
        case 0x2b31b4u: goto label_2b31b4;
        case 0x2b31b8u: goto label_2b31b8;
        case 0x2b31bcu: goto label_2b31bc;
        case 0x2b31c0u: goto label_2b31c0;
        case 0x2b31c4u: goto label_2b31c4;
        case 0x2b31c8u: goto label_2b31c8;
        case 0x2b31ccu: goto label_2b31cc;
        case 0x2b31d0u: goto label_2b31d0;
        case 0x2b31d4u: goto label_2b31d4;
        case 0x2b31d8u: goto label_2b31d8;
        case 0x2b31dcu: goto label_2b31dc;
        case 0x2b31e0u: goto label_2b31e0;
        case 0x2b31e4u: goto label_2b31e4;
        case 0x2b31e8u: goto label_2b31e8;
        case 0x2b31ecu: goto label_2b31ec;
        case 0x2b31f0u: goto label_2b31f0;
        case 0x2b31f4u: goto label_2b31f4;
        case 0x2b31f8u: goto label_2b31f8;
        case 0x2b31fcu: goto label_2b31fc;
        case 0x2b3200u: goto label_2b3200;
        case 0x2b3204u: goto label_2b3204;
        case 0x2b3208u: goto label_2b3208;
        case 0x2b320cu: goto label_2b320c;
        case 0x2b3210u: goto label_2b3210;
        case 0x2b3214u: goto label_2b3214;
        case 0x2b3218u: goto label_2b3218;
        case 0x2b321cu: goto label_2b321c;
        case 0x2b3220u: goto label_2b3220;
        case 0x2b3224u: goto label_2b3224;
        case 0x2b3228u: goto label_2b3228;
        case 0x2b322cu: goto label_2b322c;
        case 0x2b3230u: goto label_2b3230;
        case 0x2b3234u: goto label_2b3234;
        case 0x2b3238u: goto label_2b3238;
        case 0x2b323cu: goto label_2b323c;
        case 0x2b3240u: goto label_2b3240;
        case 0x2b3244u: goto label_2b3244;
        case 0x2b3248u: goto label_2b3248;
        case 0x2b324cu: goto label_2b324c;
        case 0x2b3250u: goto label_2b3250;
        case 0x2b3254u: goto label_2b3254;
        case 0x2b3258u: goto label_2b3258;
        case 0x2b325cu: goto label_2b325c;
        case 0x2b3260u: goto label_2b3260;
        case 0x2b3264u: goto label_2b3264;
        case 0x2b3268u: goto label_2b3268;
        case 0x2b326cu: goto label_2b326c;
        case 0x2b3270u: goto label_2b3270;
        case 0x2b3274u: goto label_2b3274;
        case 0x2b3278u: goto label_2b3278;
        case 0x2b327cu: goto label_2b327c;
        case 0x2b3280u: goto label_2b3280;
        case 0x2b3284u: goto label_2b3284;
        case 0x2b3288u: goto label_2b3288;
        case 0x2b328cu: goto label_2b328c;
        case 0x2b3290u: goto label_2b3290;
        case 0x2b3294u: goto label_2b3294;
        case 0x2b3298u: goto label_2b3298;
        case 0x2b329cu: goto label_2b329c;
        case 0x2b32a0u: goto label_2b32a0;
        case 0x2b32a4u: goto label_2b32a4;
        case 0x2b32a8u: goto label_2b32a8;
        case 0x2b32acu: goto label_2b32ac;
        case 0x2b32b0u: goto label_2b32b0;
        case 0x2b32b4u: goto label_2b32b4;
        case 0x2b32b8u: goto label_2b32b8;
        case 0x2b32bcu: goto label_2b32bc;
        case 0x2b32c0u: goto label_2b32c0;
        case 0x2b32c4u: goto label_2b32c4;
        case 0x2b32c8u: goto label_2b32c8;
        case 0x2b32ccu: goto label_2b32cc;
        case 0x2b32d0u: goto label_2b32d0;
        case 0x2b32d4u: goto label_2b32d4;
        case 0x2b32d8u: goto label_2b32d8;
        case 0x2b32dcu: goto label_2b32dc;
        case 0x2b32e0u: goto label_2b32e0;
        case 0x2b32e4u: goto label_2b32e4;
        case 0x2b32e8u: goto label_2b32e8;
        case 0x2b32ecu: goto label_2b32ec;
        case 0x2b32f0u: goto label_2b32f0;
        case 0x2b32f4u: goto label_2b32f4;
        case 0x2b32f8u: goto label_2b32f8;
        case 0x2b32fcu: goto label_2b32fc;
        case 0x2b3300u: goto label_2b3300;
        case 0x2b3304u: goto label_2b3304;
        case 0x2b3308u: goto label_2b3308;
        case 0x2b330cu: goto label_2b330c;
        case 0x2b3310u: goto label_2b3310;
        case 0x2b3314u: goto label_2b3314;
        case 0x2b3318u: goto label_2b3318;
        case 0x2b331cu: goto label_2b331c;
        case 0x2b3320u: goto label_2b3320;
        case 0x2b3324u: goto label_2b3324;
        case 0x2b3328u: goto label_2b3328;
        case 0x2b332cu: goto label_2b332c;
        case 0x2b3330u: goto label_2b3330;
        case 0x2b3334u: goto label_2b3334;
        case 0x2b3338u: goto label_2b3338;
        case 0x2b333cu: goto label_2b333c;
        case 0x2b3340u: goto label_2b3340;
        case 0x2b3344u: goto label_2b3344;
        case 0x2b3348u: goto label_2b3348;
        case 0x2b334cu: goto label_2b334c;
        case 0x2b3350u: goto label_2b3350;
        case 0x2b3354u: goto label_2b3354;
        case 0x2b3358u: goto label_2b3358;
        case 0x2b335cu: goto label_2b335c;
        case 0x2b3360u: goto label_2b3360;
        case 0x2b3364u: goto label_2b3364;
        case 0x2b3368u: goto label_2b3368;
        case 0x2b336cu: goto label_2b336c;
        case 0x2b3370u: goto label_2b3370;
        case 0x2b3374u: goto label_2b3374;
        case 0x2b3378u: goto label_2b3378;
        case 0x2b337cu: goto label_2b337c;
        case 0x2b3380u: goto label_2b3380;
        case 0x2b3384u: goto label_2b3384;
        case 0x2b3388u: goto label_2b3388;
        case 0x2b338cu: goto label_2b338c;
        case 0x2b3390u: goto label_2b3390;
        case 0x2b3394u: goto label_2b3394;
        case 0x2b3398u: goto label_2b3398;
        case 0x2b339cu: goto label_2b339c;
        case 0x2b33a0u: goto label_2b33a0;
        case 0x2b33a4u: goto label_2b33a4;
        case 0x2b33a8u: goto label_2b33a8;
        case 0x2b33acu: goto label_2b33ac;
        case 0x2b33b0u: goto label_2b33b0;
        case 0x2b33b4u: goto label_2b33b4;
        case 0x2b33b8u: goto label_2b33b8;
        case 0x2b33bcu: goto label_2b33bc;
        case 0x2b33c0u: goto label_2b33c0;
        case 0x2b33c4u: goto label_2b33c4;
        case 0x2b33c8u: goto label_2b33c8;
        case 0x2b33ccu: goto label_2b33cc;
        case 0x2b33d0u: goto label_2b33d0;
        case 0x2b33d4u: goto label_2b33d4;
        case 0x2b33d8u: goto label_2b33d8;
        case 0x2b33dcu: goto label_2b33dc;
        case 0x2b33e0u: goto label_2b33e0;
        case 0x2b33e4u: goto label_2b33e4;
        case 0x2b33e8u: goto label_2b33e8;
        case 0x2b33ecu: goto label_2b33ec;
        case 0x2b33f0u: goto label_2b33f0;
        case 0x2b33f4u: goto label_2b33f4;
        case 0x2b33f8u: goto label_2b33f8;
        case 0x2b33fcu: goto label_2b33fc;
        case 0x2b3400u: goto label_2b3400;
        case 0x2b3404u: goto label_2b3404;
        case 0x2b3408u: goto label_2b3408;
        case 0x2b340cu: goto label_2b340c;
        case 0x2b3410u: goto label_2b3410;
        case 0x2b3414u: goto label_2b3414;
        case 0x2b3418u: goto label_2b3418;
        case 0x2b341cu: goto label_2b341c;
        case 0x2b3420u: goto label_2b3420;
        case 0x2b3424u: goto label_2b3424;
        case 0x2b3428u: goto label_2b3428;
        case 0x2b342cu: goto label_2b342c;
        case 0x2b3430u: goto label_2b3430;
        case 0x2b3434u: goto label_2b3434;
        case 0x2b3438u: goto label_2b3438;
        case 0x2b343cu: goto label_2b343c;
        case 0x2b3440u: goto label_2b3440;
        case 0x2b3444u: goto label_2b3444;
        case 0x2b3448u: goto label_2b3448;
        case 0x2b344cu: goto label_2b344c;
        case 0x2b3450u: goto label_2b3450;
        case 0x2b3454u: goto label_2b3454;
        case 0x2b3458u: goto label_2b3458;
        case 0x2b345cu: goto label_2b345c;
        case 0x2b3460u: goto label_2b3460;
        case 0x2b3464u: goto label_2b3464;
        case 0x2b3468u: goto label_2b3468;
        case 0x2b346cu: goto label_2b346c;
        case 0x2b3470u: goto label_2b3470;
        case 0x2b3474u: goto label_2b3474;
        case 0x2b3478u: goto label_2b3478;
        case 0x2b347cu: goto label_2b347c;
        case 0x2b3480u: goto label_2b3480;
        case 0x2b3484u: goto label_2b3484;
        case 0x2b3488u: goto label_2b3488;
        case 0x2b348cu: goto label_2b348c;
        case 0x2b3490u: goto label_2b3490;
        case 0x2b3494u: goto label_2b3494;
        case 0x2b3498u: goto label_2b3498;
        case 0x2b349cu: goto label_2b349c;
        case 0x2b34a0u: goto label_2b34a0;
        case 0x2b34a4u: goto label_2b34a4;
        case 0x2b34a8u: goto label_2b34a8;
        case 0x2b34acu: goto label_2b34ac;
        case 0x2b34b0u: goto label_2b34b0;
        case 0x2b34b4u: goto label_2b34b4;
        case 0x2b34b8u: goto label_2b34b8;
        case 0x2b34bcu: goto label_2b34bc;
        case 0x2b34c0u: goto label_2b34c0;
        case 0x2b34c4u: goto label_2b34c4;
        default: break;
    }

    ctx->pc = 0x2b1310u;

label_2b1310:
    // 0x2b1310: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x2b1310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_2b1314:
    // 0x2b1314: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b1314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2b1318:
    // 0x2b1318: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2b1318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2b131c:
    // 0x2b131c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2b131cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2b1320:
    // 0x2b1320: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2b1320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2b1324:
    // 0x2b1324: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b1324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2b1328:
    // 0x2b1328: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b1328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2b132c:
    // 0x2b132c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b132cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2b1330:
    // 0x2b1330: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2b1330u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b1334:
    // 0x2b1334: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b1334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2b1338:
    // 0x2b1338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b1338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b133c:
    // 0x2b133c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b133cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b1340:
    // 0x2b1340: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2b1340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2b1344:
    // 0x2b1344: 0xc08f804  jal         func_23E010
label_2b1348:
    if (ctx->pc == 0x2B1348u) {
        ctx->pc = 0x2B1348u;
            // 0x2b1348: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B134Cu;
        goto label_2b134c;
    }
    ctx->pc = 0x2B1344u;
    SET_GPR_U32(ctx, 31, 0x2B134Cu);
    ctx->pc = 0x2B1348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1344u;
            // 0x2b1348: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E010u;
    if (runtime->hasFunction(0x23E010u)) {
        auto targetFn = runtime->lookupFunction(0x23E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B134Cu; }
        if (ctx->pc != 0x2B134Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelDataInit__12CMenuKeyFuncFv_0x23e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B134Cu; }
        if (ctx->pc != 0x2B134Cu) { return; }
    }
    ctx->pc = 0x2B134Cu;
label_2b134c:
    // 0x2b134c: 0xc08f80c  jal         func_23E030
label_2b1350:
    if (ctx->pc == 0x2B1350u) {
        ctx->pc = 0x2B1350u;
            // 0x2b1350: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1354u;
        goto label_2b1354;
    }
    ctx->pc = 0x2B134Cu;
    SET_GPR_U32(ctx, 31, 0x2B1354u);
    ctx->pc = 0x2B1350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B134Cu;
            // 0x2b1350: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1354u; }
        if (ctx->pc != 0x2B1354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1354u; }
        if (ctx->pc != 0x2B1354u) { return; }
    }
    ctx->pc = 0x2B1354u;
label_2b1354:
    // 0x2b1354: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b1354u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1358:
    // 0x2b1358: 0xc08f8c8  jal         func_23E320
label_2b135c:
    if (ctx->pc == 0x2B135Cu) {
        ctx->pc = 0x2B135Cu;
            // 0x2b135c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1360u;
        goto label_2b1360;
    }
    ctx->pc = 0x2B1358u;
    SET_GPR_U32(ctx, 31, 0x2B1360u);
    ctx->pc = 0x2B135Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1358u;
            // 0x2b135c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1360u; }
        if (ctx->pc != 0x2B1360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1360u; }
        if (ctx->pc != 0x2B1360u) { return; }
    }
    ctx->pc = 0x2B1360u;
label_2b1360:
    // 0x2b1360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b1360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1364:
    // 0x2b1364: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b1364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b1368:
    // 0x2b1368: 0x8c22ca48  lw          $v0, -0x35B8($at)
    ctx->pc = 0x2b1368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
label_2b136c:
    // 0x2b136c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b136cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1370:
    // 0x2b1370: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2b1370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_2b1374:
    // 0x2b1374: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b1374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b1378:
    // 0x2b1378: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2b1378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_2b137c:
    // 0x2b137c: 0x8c3eca4c  lw          $fp, -0x35B4($at)
    ctx->pc = 0x2b137cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
label_2b1380:
    // 0x2b1380: 0x83829ba0  lb          $v0, -0x6460($gp)
    ctx->pc = 0x2b1380u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941600)));
label_2b1384:
    // 0x2b1384: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b1384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b1388:
    // 0x2b1388: 0x8c31ca50  lw          $s1, -0x35B0($at)
    ctx->pc = 0x2b1388u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
label_2b138c:
    // 0x2b138c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b138cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b1390:
    // 0x2b1390: 0x8c32ca54  lw          $s2, -0x35AC($at)
    ctx->pc = 0x2b1390u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953556)));
label_2b1394:
    // 0x2b1394: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b1394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b1398:
    // 0x2b1398: 0x8c37ca5c  lw          $s7, -0x35A4($at)
    ctx->pc = 0x2b1398u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_2b139c:
    // 0x2b139c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b13a0:
    if (ctx->pc == 0x2B13A0u) {
        ctx->pc = 0x2B13A0u;
            // 0x2b13a0: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        ctx->pc = 0x2B13A4u;
        goto label_2b13a4;
    }
    ctx->pc = 0x2B139Cu;
    {
        const bool branch_taken_0x2b139c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B13A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B139Cu;
            // 0x2b13a0: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b139c) {
            ctx->pc = 0x2B13B4u;
            goto label_2b13b4;
        }
    }
    ctx->pc = 0x2B13A4u;
label_2b13a4:
    // 0x2b13a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b13a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b13a8:
    // 0x2b13a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b13a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b13ac:
    // 0x2b13ac: 0xa3839b9c  sb          $v1, -0x6464($gp)
    ctx->pc = 0x2b13acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941596), (uint8_t)GPR_U32(ctx, 3));
label_2b13b0:
    // 0x2b13b0: 0xa3829ba0  sb          $v0, -0x6460($gp)
    ctx->pc = 0x2b13b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941600), (uint8_t)GPR_U32(ctx, 2));
label_2b13b4:
    // 0x2b13b4: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x2b13b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
label_2b13b8:
    // 0x2b13b8: 0x106000fa  beqz        $v1, . + 4 + (0xFA << 2)
label_2b13bc:
    if (ctx->pc == 0x2B13BCu) {
        ctx->pc = 0x2B13BCu;
            // 0x2b13bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B13C0u;
        goto label_2b13c0;
    }
    ctx->pc = 0x2B13B8u;
    {
        const bool branch_taken_0x2b13b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B13BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B13B8u;
            // 0x2b13bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b13b8) {
            ctx->pc = 0x2B17A4u;
            goto label_2b17a4;
        }
    }
    ctx->pc = 0x2B13C0u;
label_2b13c0:
    // 0x2b13c0: 0x106500e4  beq         $v1, $a1, . + 4 + (0xE4 << 2)
label_2b13c4:
    if (ctx->pc == 0x2B13C4u) {
        ctx->pc = 0x2B13C4u;
            // 0x2b13c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B13C8u;
        goto label_2b13c8;
    }
    ctx->pc = 0x2B13C0u;
    {
        const bool branch_taken_0x2b13c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B13C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B13C0u;
            // 0x2b13c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b13c0) {
            ctx->pc = 0x2B1754u;
            goto label_2b1754;
        }
    }
    ctx->pc = 0x2B13C8u;
label_2b13c8:
    // 0x2b13c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b13c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b13cc:
    // 0x2b13cc: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
label_2b13d0:
    if (ctx->pc == 0x2B13D0u) {
        ctx->pc = 0x2B13D0u;
            // 0x2b13d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B13D4u;
        goto label_2b13d4;
    }
    ctx->pc = 0x2B13CCu;
    {
        const bool branch_taken_0x2b13cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B13D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B13CCu;
            // 0x2b13d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b13cc) {
            ctx->pc = 0x2B13F4u;
            goto label_2b13f4;
        }
    }
    ctx->pc = 0x2B13D4u;
label_2b13d4:
    // 0x2b13d4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2b13d8:
    if (ctx->pc == 0x2B13D8u) {
        ctx->pc = 0x2B13DCu;
        goto label_2b13dc;
    }
    ctx->pc = 0x2B13D4u;
    {
        const bool branch_taken_0x2b13d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b13d4) {
            ctx->pc = 0x2B13E4u;
            goto label_2b13e4;
        }
    }
    ctx->pc = 0x2B13DCu;
label_2b13dc:
    // 0x2b13dc: 0x10000319  b           . + 4 + (0x319 << 2)
label_2b13e0:
    if (ctx->pc == 0x2B13E0u) {
        ctx->pc = 0x2B13E0u;
            // 0x2b13e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B13E4u;
        goto label_2b13e4;
    }
    ctx->pc = 0x2B13DCu;
    {
        const bool branch_taken_0x2b13dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B13E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B13DCu;
            // 0x2b13e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b13dc) {
            ctx->pc = 0x2B2044u;
            goto label_2b2044;
        }
    }
    ctx->pc = 0x2B13E4u;
label_2b13e4:
    // 0x2b13e4: 0x12000316  beqz        $s0, . + 4 + (0x316 << 2)
label_2b13e8:
    if (ctx->pc == 0x2B13E8u) {
        ctx->pc = 0x2B13ECu;
        goto label_2b13ec;
    }
    ctx->pc = 0x2B13E4u;
    {
        const bool branch_taken_0x2b13e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b13e4) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B13ECu;
label_2b13ec:
    // 0x2b13ec: 0x10000314  b           . + 4 + (0x314 << 2)
label_2b13f0:
    if (ctx->pc == 0x2B13F0u) {
        ctx->pc = 0x2B13F0u;
            // 0x2b13f0: 0x2413001e  addiu       $s3, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x2B13F4u;
        goto label_2b13f4;
    }
    ctx->pc = 0x2B13ECu;
    {
        const bool branch_taken_0x2b13ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B13F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B13ECu;
            // 0x2b13f0: 0x2413001e  addiu       $s3, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b13ec) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B13F4u;
label_2b13f4:
    // 0x2b13f4: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x2b13f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2b13f8:
    // 0x2b13f8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2b13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b13fc:
    // 0x2b13fc: 0x106200ad  beq         $v1, $v0, . + 4 + (0xAD << 2)
label_2b1400:
    if (ctx->pc == 0x2B1400u) {
        ctx->pc = 0x2B1400u;
            // 0x2b1400: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2B1404u;
        goto label_2b1404;
    }
    ctx->pc = 0x2B13FCu;
    {
        const bool branch_taken_0x2b13fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B1400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B13FCu;
            // 0x2b1400: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b13fc) {
            ctx->pc = 0x2B16B4u;
            goto label_2b16b4;
        }
    }
    ctx->pc = 0x2B1404u;
label_2b1404:
    // 0x2b1404: 0x1062030e  beq         $v1, $v0, . + 4 + (0x30E << 2)
label_2b1408:
    if (ctx->pc == 0x2B1408u) {
        ctx->pc = 0x2B1408u;
            // 0x2b1408: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2B140Cu;
        goto label_2b140c;
    }
    ctx->pc = 0x2B1404u;
    {
        const bool branch_taken_0x2b1404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B1408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1404u;
            // 0x2b1408: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1404) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B140Cu;
label_2b140c:
    // 0x2b140c: 0x10620078  beq         $v1, $v0, . + 4 + (0x78 << 2)
label_2b1410:
    if (ctx->pc == 0x2B1410u) {
        ctx->pc = 0x2B1414u;
        goto label_2b1414;
    }
    ctx->pc = 0x2B140Cu;
    {
        const bool branch_taken_0x2b140c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b140c) {
            ctx->pc = 0x2B15F0u;
            goto label_2b15f0;
        }
    }
    ctx->pc = 0x2B1414u;
label_2b1414:
    // 0x2b1414: 0x1064030a  beq         $v1, $a0, . + 4 + (0x30A << 2)
label_2b1418:
    if (ctx->pc == 0x2B1418u) {
        ctx->pc = 0x2B1418u;
            // 0x2b1418: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B141Cu;
        goto label_2b141c;
    }
    ctx->pc = 0x2B1414u;
    {
        const bool branch_taken_0x2b1414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B1418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1414u;
            // 0x2b1418: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1414) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B141Cu;
label_2b141c:
    // 0x2b141c: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
label_2b1420:
    if (ctx->pc == 0x2B1420u) {
        ctx->pc = 0x2B1424u;
        goto label_2b1424;
    }
    ctx->pc = 0x2B141Cu;
    {
        const bool branch_taken_0x2b141c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b141c) {
            ctx->pc = 0x2B1580u;
            goto label_2b1580;
        }
    }
    ctx->pc = 0x2B1424u;
label_2b1424:
    // 0x2b1424: 0x10650056  beq         $v1, $a1, . + 4 + (0x56 << 2)
label_2b1428:
    if (ctx->pc == 0x2B1428u) {
        ctx->pc = 0x2B142Cu;
        goto label_2b142c;
    }
    ctx->pc = 0x2B1424u;
    {
        const bool branch_taken_0x2b1424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2b1424) {
            ctx->pc = 0x2B1580u;
            goto label_2b1580;
        }
    }
    ctx->pc = 0x2B142Cu;
label_2b142c:
    // 0x2b142c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b1430:
    if (ctx->pc == 0x2B1430u) {
        ctx->pc = 0x2B1434u;
        goto label_2b1434;
    }
    ctx->pc = 0x2B142Cu;
    {
        const bool branch_taken_0x2b142c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b142c) {
            ctx->pc = 0x2B143Cu;
            goto label_2b143c;
        }
    }
    ctx->pc = 0x2B1434u;
label_2b1434:
    // 0x2b1434: 0x10000302  b           . + 4 + (0x302 << 2)
label_2b1438:
    if (ctx->pc == 0x2B1438u) {
        ctx->pc = 0x2B143Cu;
        goto label_2b143c;
    }
    ctx->pc = 0x2B1434u;
    {
        const bool branch_taken_0x2b1434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1434) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B143Cu;
label_2b143c:
    // 0x2b143c: 0x8e8201f8  lw          $v0, 0x1F8($s4)
    ctx->pc = 0x2b143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 504)));
label_2b1440:
    // 0x2b1440: 0x80440030  lb          $a0, 0x30($v0)
    ctx->pc = 0x2b1440u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 48)));
label_2b1444:
    // 0x2b1444: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x2b1444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2b1448:
    // 0x2b1448: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
label_2b144c:
    if (ctx->pc == 0x2B144Cu) {
        ctx->pc = 0x2B1450u;
        goto label_2b1450;
    }
    ctx->pc = 0x2B1448u;
    {
        const bool branch_taken_0x2b1448 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x2b1448) {
            ctx->pc = 0x2B1454u;
            goto label_2b1454;
        }
    }
    ctx->pc = 0x2B1450u;
label_2b1450:
    // 0x2b1450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b1450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1454:
    // 0x2b1454: 0x86c30050  lh          $v1, 0x50($s6)
    ctx->pc = 0x2b1454u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 80)));
label_2b1458:
    // 0x2b1458: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b1458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b145c:
    // 0x2b145c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2b1460:
    if (ctx->pc == 0x2B1460u) {
        ctx->pc = 0x2B1464u;
        goto label_2b1464;
    }
    ctx->pc = 0x2B145Cu;
    {
        const bool branch_taken_0x2b145c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b145c) {
            ctx->pc = 0x2B146Cu;
            goto label_2b146c;
        }
    }
    ctx->pc = 0x2B1464u;
label_2b1464:
    // 0x2b1464: 0x1000000a  b           . + 4 + (0xA << 2)
label_2b1468:
    if (ctx->pc == 0x2B1468u) {
        ctx->pc = 0x2B146Cu;
        goto label_2b146c;
    }
    ctx->pc = 0x2B1464u;
    {
        const bool branch_taken_0x2b1464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1464) {
            ctx->pc = 0x2B1490u;
            goto label_2b1490;
        }
    }
    ctx->pc = 0x2B146Cu;
label_2b146c:
    // 0x2b146c: 0x120002f4  beqz        $s0, . + 4 + (0x2F4 << 2)
label_2b1470:
    if (ctx->pc == 0x2B1470u) {
        ctx->pc = 0x2B1470u;
            // 0x2b1470: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B1474u;
        goto label_2b1474;
    }
    ctx->pc = 0x2B146Cu;
    {
        const bool branch_taken_0x2b146c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B146Cu;
            // 0x2b1470: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b146c) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1474u;
label_2b1474:
    // 0x2b1474: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b1474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b1478:
    // 0x2b1478: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b1478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b147c:
    // 0x2b147c: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x2b147cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_2b1480:
    // 0x2b1480: 0xc08e7cc  jal         func_239F30
label_2b1484:
    if (ctx->pc == 0x2B1484u) {
        ctx->pc = 0x2B1484u;
            // 0x2b1484: 0x24a5eb88  addiu       $a1, $a1, -0x1478 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962056));
        ctx->pc = 0x2B1488u;
        goto label_2b1488;
    }
    ctx->pc = 0x2B1480u;
    SET_GPR_U32(ctx, 31, 0x2B1488u);
    ctx->pc = 0x2B1484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1480u;
            // 0x2b1484: 0x24a5eb88  addiu       $a1, $a1, -0x1478 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1488u; }
        if (ctx->pc != 0x2B1488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1488u; }
        if (ctx->pc != 0x2B1488u) { return; }
    }
    ctx->pc = 0x2B1488u;
label_2b1488:
    // 0x2b1488: 0x100002ed  b           . + 4 + (0x2ED << 2)
label_2b148c:
    if (ctx->pc == 0x2B148Cu) {
        ctx->pc = 0x2B1490u;
        goto label_2b1490;
    }
    ctx->pc = 0x2B1488u;
    {
        const bool branch_taken_0x2b1488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1488) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1490u;
label_2b1490:
    // 0x2b1490: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
label_2b1494:
    if (ctx->pc == 0x2B1494u) {
        ctx->pc = 0x2B1494u;
            // 0x2b1494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1498u;
        goto label_2b1498;
    }
    ctx->pc = 0x2B1490u;
    {
        const bool branch_taken_0x2b1490 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2B1494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1490u;
            // 0x2b1494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1490) {
            ctx->pc = 0x2B14A4u;
            goto label_2b14a4;
        }
    }
    ctx->pc = 0x2B1498u;
label_2b1498:
    // 0x2b1498: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b1498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b149c:
    // 0x2b149c: 0xc0875b4  jal         func_21D6D0
label_2b14a0:
    if (ctx->pc == 0x2B14A0u) {
        ctx->pc = 0x2B14A0u;
            // 0x2b14a0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B14A4u;
        goto label_2b14a4;
    }
    ctx->pc = 0x2B149Cu;
    SET_GPR_U32(ctx, 31, 0x2B14A4u);
    ctx->pc = 0x2B14A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B149Cu;
            // 0x2b14a0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6D0u;
    if (runtime->hasFunction(0x21D6D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B14A4u; }
        if (ctx->pc != 0x2B14A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor2__7CDC2MesFiii_0x21d6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B14A4u; }
        if (ctx->pc != 0x2B14A4u) { return; }
    }
    ctx->pc = 0x2B14A4u;
label_2b14a4:
    // 0x2b14a4: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x2b14a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
label_2b14a8:
    // 0x2b14a8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2b14ac:
    if (ctx->pc == 0x2B14ACu) {
        ctx->pc = 0x2B14ACu;
            // 0x2b14ac: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B14B0u;
        goto label_2b14b0;
    }
    ctx->pc = 0x2B14A8u;
    {
        const bool branch_taken_0x2b14a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B14ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B14A8u;
            // 0x2b14ac: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b14a8) {
            ctx->pc = 0x2B152Cu;
            goto label_2b152c;
        }
    }
    ctx->pc = 0x2B14B0u;
label_2b14b0:
    // 0x2b14b0: 0x32a20008  andi        $v0, $s5, 0x8
    ctx->pc = 0x2b14b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
label_2b14b4:
    // 0x2b14b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b14b8:
    if (ctx->pc == 0x2B14B8u) {
        ctx->pc = 0x2B14B8u;
            // 0x2b14b8: 0x32a20004  andi        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x2B14BCu;
        goto label_2b14bc;
    }
    ctx->pc = 0x2B14B4u;
    {
        const bool branch_taken_0x2b14b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B14B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B14B4u;
            // 0x2b14b8: 0x32a20004  andi        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b14b4) {
            ctx->pc = 0x2B14D0u;
            goto label_2b14d0;
        }
    }
    ctx->pc = 0x2B14BCu;
label_2b14bc:
    // 0x2b14bc: 0x8e8301f4  lw          $v1, 0x1F4($s4)
    ctx->pc = 0x2b14bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 500)));
label_2b14c0:
    // 0x2b14c0: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x2b14c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_2b14c4:
    // 0x2b14c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b14c8:
    // 0x2b14c8: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x2b14c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
label_2b14cc:
    // 0x2b14cc: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x2b14ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_2b14d0:
    // 0x2b14d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b14d4:
    if (ctx->pc == 0x2B14D4u) {
        ctx->pc = 0x2B14D8u;
        goto label_2b14d8;
    }
    ctx->pc = 0x2B14D0u;
    {
        const bool branch_taken_0x2b14d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b14d0) {
            ctx->pc = 0x2B14E8u;
            goto label_2b14e8;
        }
    }
    ctx->pc = 0x2B14D8u;
label_2b14d8:
    // 0x2b14d8: 0x8e8301f4  lw          $v1, 0x1F4($s4)
    ctx->pc = 0x2b14d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 500)));
label_2b14dc:
    // 0x2b14dc: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x2b14dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_2b14e0:
    // 0x2b14e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b14e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2b14e4:
    // 0x2b14e4: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x2b14e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
label_2b14e8:
    // 0x2b14e8: 0x8e8201f4  lw          $v0, 0x1F4($s4)
    ctx->pc = 0x2b14e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 500)));
label_2b14ec:
    // 0x2b14ec: 0x8e8301f8  lw          $v1, 0x1F8($s4)
    ctx->pc = 0x2b14ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 504)));
label_2b14f0:
    // 0x2b14f0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2b14f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2b14f4:
    // 0x2b14f4: 0x8063002f  lb          $v1, 0x2F($v1)
    ctx->pc = 0x2b14f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 47)));
label_2b14f8:
    // 0x2b14f8: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x2b14f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_2b14fc:
    // 0x2b14fc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2b14fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b1500:
    // 0x2b1500: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2b1504:
    if (ctx->pc == 0x2B1504u) {
        ctx->pc = 0x2B1504u;
            // 0x2b1504: 0x3163c  dsll32      $v0, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
        ctx->pc = 0x2B1508u;
        goto label_2b1508;
    }
    ctx->pc = 0x2B1500u;
    {
        const bool branch_taken_0x2b1500 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1500u;
            // 0x2b1504: 0x3163c  dsll32      $v0, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1500) {
            ctx->pc = 0x2B1510u;
            goto label_2b1510;
        }
    }
    ctx->pc = 0x2B1508u;
label_2b1508:
    // 0x2b1508: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2b1508u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_2b150c:
    // 0x2b150c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2b150cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_2b1510:
    // 0x2b1510: 0x8e8201f4  lw          $v0, 0x1F4($s4)
    ctx->pc = 0x2b1510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 500)));
label_2b1514:
    // 0x2b1514: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x2b1514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2b1518:
    // 0x2b1518: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x2b1518u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_2b151c:
    // 0x2b151c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2b1520:
    if (ctx->pc == 0x2B1520u) {
        ctx->pc = 0x2B1524u;
        goto label_2b1524;
    }
    ctx->pc = 0x2B151Cu;
    {
        const bool branch_taken_0x2b151c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2b151c) {
            ctx->pc = 0x2B1528u;
            goto label_2b1528;
        }
    }
    ctx->pc = 0x2B1524u;
label_2b1524:
    // 0x2b1524: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x2b1524u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_2b1528:
    // 0x2b1528: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b1528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b152c:
    // 0x2b152c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b1530:
    // 0x2b1530: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
label_2b1534:
    if (ctx->pc == 0x2B1534u) {
        ctx->pc = 0x2B1534u;
            // 0x2b1534: 0xa3839b9c  sb          $v1, -0x6464($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941596), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2B1538u;
        goto label_2b1538;
    }
    ctx->pc = 0x2B1530u;
    {
        const bool branch_taken_0x2b1530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B1534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1530u;
            // 0x2b1534: 0xa3839b9c  sb          $v1, -0x6464($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941596), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1530) {
            ctx->pc = 0x2B1578u;
            goto label_2b1578;
        }
    }
    ctx->pc = 0x2B1538u;
label_2b1538:
    // 0x2b1538: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b1538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b153c:
    // 0x2b153c: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_2b1540:
    if (ctx->pc == 0x2B1540u) {
        ctx->pc = 0x2B1540u;
            // 0x2b1540: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B1544u;
        goto label_2b1544;
    }
    ctx->pc = 0x2B153Cu;
    {
        const bool branch_taken_0x2b153c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B1540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B153Cu;
            // 0x2b1540: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b153c) {
            ctx->pc = 0x2B1554u;
            goto label_2b1554;
        }
    }
    ctx->pc = 0x2B1544u;
label_2b1544:
    // 0x2b1544: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_2b1548:
    if (ctx->pc == 0x2B1548u) {
        ctx->pc = 0x2B154Cu;
        goto label_2b154c;
    }
    ctx->pc = 0x2B1544u;
    {
        const bool branch_taken_0x2b1544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b1544) {
            ctx->pc = 0x2B1554u;
            goto label_2b1554;
        }
    }
    ctx->pc = 0x2B154Cu;
label_2b154c:
    // 0x2b154c: 0x100002bc  b           . + 4 + (0x2BC << 2)
label_2b1550:
    if (ctx->pc == 0x2B1550u) {
        ctx->pc = 0x2B1554u;
        goto label_2b1554;
    }
    ctx->pc = 0x2B154Cu;
    {
        const bool branch_taken_0x2b154c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b154c) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1554u;
label_2b1554:
    // 0x2b1554: 0x8e8201f8  lw          $v0, 0x1F8($s4)
    ctx->pc = 0x2b1554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 504)));
label_2b1558:
    // 0x2b1558: 0x80420030  lb          $v0, 0x30($v0)
    ctx->pc = 0x2b1558u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 48)));
label_2b155c:
    // 0x2b155c: 0x184002b8  blez        $v0, . + 4 + (0x2B8 << 2)
label_2b1560:
    if (ctx->pc == 0x2B1560u) {
        ctx->pc = 0x2B1560u;
            // 0x2b1560: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B1564u;
        goto label_2b1564;
    }
    ctx->pc = 0x2B155Cu;
    {
        const bool branch_taken_0x2b155c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B1560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B155Cu;
            // 0x2b1560: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b155c) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1564u;
label_2b1564:
    // 0x2b1564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b1568:
    // 0x2b1568: 0xc087690  jal         func_21DA40
label_2b156c:
    if (ctx->pc == 0x2B156Cu) {
        ctx->pc = 0x2B156Cu;
            // 0x2b156c: 0x24130064  addiu       $s3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x2B1570u;
        goto label_2b1570;
    }
    ctx->pc = 0x2B1568u;
    SET_GPR_U32(ctx, 31, 0x2B1570u);
    ctx->pc = 0x2B156Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1568u;
            // 0x2b156c: 0x24130064  addiu       $s3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA40u;
    if (runtime->hasFunction(0x21DA40u)) {
        auto targetFn = runtime->lookupFunction(0x21DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1570u; }
        if (ctx->pc != 0x2B1570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMsgCursor__7CDC2MesFv_0x21da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1570u; }
        if (ctx->pc != 0x2B1570u) { return; }
    }
    ctx->pc = 0x2B1570u;
label_2b1570:
    // 0x2b1570: 0x100002b3  b           . + 4 + (0x2B3 << 2)
label_2b1574:
    if (ctx->pc == 0x2B1574u) {
        ctx->pc = 0x2B1574u;
            // 0x2b1574: 0xa3829b9c  sb          $v0, -0x6464($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941596), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B1578u;
        goto label_2b1578;
    }
    ctx->pc = 0x2B1570u;
    {
        const bool branch_taken_0x2b1570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1570u;
            // 0x2b1574: 0xa3829b9c  sb          $v0, -0x6464($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941596), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1570) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1578u;
label_2b1578:
    // 0x2b1578: 0x100002b1  b           . + 4 + (0x2B1 << 2)
label_2b157c:
    if (ctx->pc == 0x2B157Cu) {
        ctx->pc = 0x2B157Cu;
            // 0x2b157c: 0x2413003c  addiu       $s3, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x2B1580u;
        goto label_2b1580;
    }
    ctx->pc = 0x2B1578u;
    {
        const bool branch_taken_0x2b1578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B157Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1578u;
            // 0x2b157c: 0x2413003c  addiu       $s3, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1578) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1580u;
label_2b1580:
    // 0x2b1580: 0x120002af  beqz        $s0, . + 4 + (0x2AF << 2)
label_2b1584:
    if (ctx->pc == 0x2B1584u) {
        ctx->pc = 0x2B1584u;
            // 0x2b1584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B1588u;
        goto label_2b1588;
    }
    ctx->pc = 0x2B1580u;
    {
        const bool branch_taken_0x2b1580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1580u;
            // 0x2b1584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1580) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1588u;
label_2b1588:
    // 0x2b1588: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2b1588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_2b158c:
    // 0x2b158c: 0x9282012c  lbu         $v0, 0x12C($s4)
    ctx->pc = 0x2b158cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 300)));
label_2b1590:
    // 0x2b1590: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2b1594:
    if (ctx->pc == 0x2B1594u) {
        ctx->pc = 0x2B1594u;
            // 0x2b1594: 0x2413001e  addiu       $s3, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x2B1598u;
        goto label_2b1598;
    }
    ctx->pc = 0x2B1590u;
    {
        const bool branch_taken_0x2b1590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1590u;
            // 0x2b1594: 0x2413001e  addiu       $s3, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1590) {
            ctx->pc = 0x2B15DCu;
            goto label_2b15dc;
        }
    }
    ctx->pc = 0x2B1598u;
label_2b1598:
    // 0x2b1598: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b1598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b159c:
    // 0x2b159c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b159cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b15a0:
    // 0x2b15a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b15a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b15a4:
    // 0x2b15a4: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x2b15a4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_2b15a8:
    // 0x2b15a8: 0xc08e7cc  jal         func_239F30
label_2b15ac:
    if (ctx->pc == 0x2B15ACu) {
        ctx->pc = 0x2B15ACu;
            // 0x2b15ac: 0x24a5eb88  addiu       $a1, $a1, -0x1478 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962056));
        ctx->pc = 0x2B15B0u;
        goto label_2b15b0;
    }
    ctx->pc = 0x2B15A8u;
    SET_GPR_U32(ctx, 31, 0x2B15B0u);
    ctx->pc = 0x2B15ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B15A8u;
            // 0x2b15ac: 0x24a5eb88  addiu       $a1, $a1, -0x1478 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B15B0u; }
        if (ctx->pc != 0x2B15B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B15B0u; }
        if (ctx->pc != 0x2B15B0u) { return; }
    }
    ctx->pc = 0x2B15B0u;
label_2b15b0:
    // 0x2b15b0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b15b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b15b4:
    // 0x2b15b4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b15b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b15b8:
    // 0x2b15b8: 0xac20d638  sw          $zero, -0x29C8($at)
    ctx->pc = 0x2b15b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956600), GPR_U32(ctx, 0));
label_2b15bc:
    // 0x2b15bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b15bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b15c0:
    // 0x2b15c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b15c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b15c4:
    // 0x2b15c4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2b15c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b15c8:
    // 0x2b15c8: 0xac23d62c  sw          $v1, -0x29D4($at)
    ctx->pc = 0x2b15c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 3));
label_2b15cc:
    // 0x2b15cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b15ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b15d0:
    // 0x2b15d0: 0xac22d630  sw          $v0, -0x29D0($at)
    ctx->pc = 0x2b15d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
label_2b15d4:
    // 0x2b15d4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b15d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b15d8:
    // 0x2b15d8: 0xac22d634  sw          $v0, -0x29CC($at)
    ctx->pc = 0x2b15d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 2));
label_2b15dc:
    // 0x2b15dc: 0x9282012d  lbu         $v0, 0x12D($s4)
    ctx->pc = 0x2b15dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 301)));
label_2b15e0:
    // 0x2b15e0: 0x10400297  beqz        $v0, . + 4 + (0x297 << 2)
label_2b15e4:
    if (ctx->pc == 0x2B15E4u) {
        ctx->pc = 0x2B15E4u;
            // 0x2b15e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B15E8u;
        goto label_2b15e8;
    }
    ctx->pc = 0x2B15E0u;
    {
        const bool branch_taken_0x2b15e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B15E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B15E0u;
            // 0x2b15e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b15e0) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B15E8u;
label_2b15e8:
    // 0x2b15e8: 0x10000295  b           . + 4 + (0x295 << 2)
label_2b15ec:
    if (ctx->pc == 0x2B15ECu) {
        ctx->pc = 0x2B15ECu;
            // 0x2b15ec: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B15F0u;
        goto label_2b15f0;
    }
    ctx->pc = 0x2B15E8u;
    {
        const bool branch_taken_0x2b15e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B15ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B15E8u;
            // 0x2b15ec: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b15e8) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B15F0u;
label_2b15f0:
    // 0x2b15f0: 0x8e4500e4  lw          $a1, 0xE4($s2)
    ctx->pc = 0x2b15f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_2b15f4:
    // 0x2b15f4: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
label_2b15f8:
    if (ctx->pc == 0x2B15F8u) {
        ctx->pc = 0x2B15F8u;
            // 0x2b15f8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B15FCu;
        goto label_2b15fc;
    }
    ctx->pc = 0x2B15F4u;
    {
        const bool branch_taken_0x2b15f4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2B15F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B15F4u;
            // 0x2b15f8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b15f4) {
            ctx->pc = 0x2B1604u;
            goto label_2b1604;
        }
    }
    ctx->pc = 0x2B15FCu;
label_2b15fc:
    // 0x2b15fc: 0x1000000f  b           . + 4 + (0xF << 2)
label_2b1600:
    if (ctx->pc == 0x2B1600u) {
        ctx->pc = 0x2B1600u;
            // 0x2b1600: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1604u;
        goto label_2b1604;
    }
    ctx->pc = 0x2B15FCu;
    {
        const bool branch_taken_0x2b15fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B15FCu;
            // 0x2b1600: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b15fc) {
            ctx->pc = 0x2B163Cu;
            goto label_2b163c;
        }
    }
    ctx->pc = 0x2B1604u;
label_2b1604:
    // 0x2b1604: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b1604u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1608:
    // 0x2b1608: 0x10000009  b           . + 4 + (0x9 << 2)
label_2b160c:
    if (ctx->pc == 0x2B160Cu) {
        ctx->pc = 0x2B160Cu;
            // 0x2b160c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1610u;
        goto label_2b1610;
    }
    ctx->pc = 0x2B1608u;
    {
        const bool branch_taken_0x2b1608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B160Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1608u;
            // 0x2b160c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1608) {
            ctx->pc = 0x2B1630u;
            goto label_2b1630;
        }
    }
    ctx->pc = 0x2B1610u;
label_2b1610:
    // 0x2b1610: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x2b1610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_2b1614:
    // 0x2b1614: 0x2a2082a  slt         $at, $s5, $v0
    ctx->pc = 0x2b1614u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b1618:
    // 0x2b1618: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2b161c:
    if (ctx->pc == 0x2B161Cu) {
        ctx->pc = 0x2B1620u;
        goto label_2b1620;
    }
    ctx->pc = 0x2B1618u;
    {
        const bool branch_taken_0x2b1618 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1618) {
            ctx->pc = 0x2B1624u;
            goto label_2b1624;
        }
    }
    ctx->pc = 0x2B1620u;
label_2b1620:
    // 0x2b1620: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b1620u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1624:
    // 0x2b1624: 0x0  nop
    ctx->pc = 0x2b1624u;
    // NOP
label_2b1628:
    // 0x2b1628: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2b1628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2b162c:
    // 0x2b162c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b162cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2b1630:
    // 0x2b1630: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x2b1630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2b1634:
    // 0x2b1634: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_2b1638:
    if (ctx->pc == 0x2B1638u) {
        ctx->pc = 0x2B1638u;
            // 0x2b1638: 0x2441021  addu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->pc = 0x2B163Cu;
        goto label_2b163c;
    }
    ctx->pc = 0x2B1634u;
    {
        const bool branch_taken_0x2b1634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1634u;
            // 0x2b1638: 0x2441021  addu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1634) {
            ctx->pc = 0x2B1610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b1610;
        }
    }
    ctx->pc = 0x2B163Cu;
label_2b163c:
    // 0x2b163c: 0x26a5fffe  addiu       $a1, $s5, -0x2
    ctx->pc = 0x2b163cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
label_2b1640:
    // 0x2b1640: 0x26a6ffff  addiu       $a2, $s5, -0x1
    ctx->pc = 0x2b1640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2b1644:
    // 0x2b1644: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b1648:
    // 0x2b1648: 0xc0875b4  jal         func_21D6D0
label_2b164c:
    if (ctx->pc == 0x2B164Cu) {
        ctx->pc = 0x2B164Cu;
            // 0x2b164c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B1650u;
        goto label_2b1650;
    }
    ctx->pc = 0x2B1648u;
    SET_GPR_U32(ctx, 31, 0x2B1650u);
    ctx->pc = 0x2B164Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1648u;
            // 0x2b164c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6D0u;
    if (runtime->hasFunction(0x21D6D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1650u; }
        if (ctx->pc != 0x2B1650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor2__7CDC2MesFiii_0x21d6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1650u; }
        if (ctx->pc != 0x2B1650u) { return; }
    }
    ctx->pc = 0x2B1650u;
label_2b1650:
    // 0x2b1650: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b1650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b1654:
    // 0x2b1654: 0x12030013  beq         $s0, $v1, . + 4 + (0x13 << 2)
label_2b1658:
    if (ctx->pc == 0x2B1658u) {
        ctx->pc = 0x2B1658u;
            // 0x2b1658: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B165Cu;
        goto label_2b165c;
    }
    ctx->pc = 0x2B1654u;
    {
        const bool branch_taken_0x2b1654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B1658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1654u;
            // 0x2b1658: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1654) {
            ctx->pc = 0x2B16A4u;
            goto label_2b16a4;
        }
    }
    ctx->pc = 0x2B165Cu;
label_2b165c:
    // 0x2b165c: 0x12040003  beq         $s0, $a0, . + 4 + (0x3 << 2)
label_2b1660:
    if (ctx->pc == 0x2B1660u) {
        ctx->pc = 0x2B1660u;
            // 0x2b1660: 0x26a3fffe  addiu       $v1, $s5, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
        ctx->pc = 0x2B1664u;
        goto label_2b1664;
    }
    ctx->pc = 0x2B165Cu;
    {
        const bool branch_taken_0x2b165c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B1660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B165Cu;
            // 0x2b1660: 0x26a3fffe  addiu       $v1, $s5, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b165c) {
            ctx->pc = 0x2B166Cu;
            goto label_2b166c;
        }
    }
    ctx->pc = 0x2B1664u;
label_2b1664:
    // 0x2b1664: 0x10000276  b           . + 4 + (0x276 << 2)
label_2b1668:
    if (ctx->pc == 0x2B1668u) {
        ctx->pc = 0x2B166Cu;
        goto label_2b166c;
    }
    ctx->pc = 0x2B1664u;
    {
        const bool branch_taken_0x2b1664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1664) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B166Cu;
label_2b166c:
    // 0x2b166c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2b166cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b1670:
    // 0x2b1670: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2b1674:
    if (ctx->pc == 0x2B1674u) {
        ctx->pc = 0x2B1674u;
            // 0x2b1674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B1678u;
        goto label_2b1678;
    }
    ctx->pc = 0x2B1670u;
    {
        const bool branch_taken_0x2b1670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1670u;
            // 0x2b1674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1670) {
            ctx->pc = 0x2B16A8u;
            goto label_2b16a8;
        }
    }
    ctx->pc = 0x2B1678u;
label_2b1678:
    // 0x2b1678: 0x8e82021c  lw          $v0, 0x21C($s4)
    ctx->pc = 0x2b1678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b167c:
    // 0x2b167c: 0x14440270  bne         $v0, $a0, . + 4 + (0x270 << 2)
label_2b1680:
    if (ctx->pc == 0x2B1680u) {
        ctx->pc = 0x2B1680u;
            // 0x2b1680: 0x2413005a  addiu       $s3, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->pc = 0x2B1684u;
        goto label_2b1684;
    }
    ctx->pc = 0x2B167Cu;
    {
        const bool branch_taken_0x2b167c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B1680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B167Cu;
            // 0x2b1680: 0x2413005a  addiu       $s3, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b167c) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1684u;
label_2b1684:
    // 0x2b1684: 0x83839b9c  lb          $v1, -0x6464($gp)
    ctx->pc = 0x2b1684u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941596)));
label_2b1688:
    // 0x2b1688: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2b168c:
    if (ctx->pc == 0x2B168Cu) {
        ctx->pc = 0x2B168Cu;
            // 0x2b168c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B1690u;
        goto label_2b1690;
    }
    ctx->pc = 0x2B1688u;
    {
        const bool branch_taken_0x2b1688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B168Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1688u;
            // 0x2b168c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1688) {
            ctx->pc = 0x2B1694u;
            goto label_2b1694;
        }
    }
    ctx->pc = 0x2B1690u;
label_2b1690:
    // 0x2b1690: 0x241300c8  addiu       $s3, $zero, 0xC8
    ctx->pc = 0x2b1690u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_2b1694:
    // 0x2b1694: 0x1462026a  bne         $v1, $v0, . + 4 + (0x26A << 2)
label_2b1698:
    if (ctx->pc == 0x2B1698u) {
        ctx->pc = 0x2B169Cu;
        goto label_2b169c;
    }
    ctx->pc = 0x2B1694u;
    {
        const bool branch_taken_0x2b1694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b1694) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B169Cu;
label_2b169c:
    // 0x2b169c: 0x10000268  b           . + 4 + (0x268 << 2)
label_2b16a0:
    if (ctx->pc == 0x2B16A0u) {
        ctx->pc = 0x2B16A0u;
            // 0x2b16a0: 0x241300c9  addiu       $s3, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->pc = 0x2B16A4u;
        goto label_2b16a4;
    }
    ctx->pc = 0x2B169Cu;
    {
        const bool branch_taken_0x2b169c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B16A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B169Cu;
            // 0x2b16a0: 0x241300c9  addiu       $s3, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b169c) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B16A4u;
label_2b16a4:
    // 0x2b16a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b16a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b16a8:
    // 0x2b16a8: 0x2413001e  addiu       $s3, $zero, 0x1E
    ctx->pc = 0x2b16a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2b16ac:
    // 0x2b16ac: 0x10000264  b           . + 4 + (0x264 << 2)
label_2b16b0:
    if (ctx->pc == 0x2B16B0u) {
        ctx->pc = 0x2B16B0u;
            // 0x2b16b0: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x2B16B4u;
        goto label_2b16b4;
    }
    ctx->pc = 0x2B16ACu;
    {
        const bool branch_taken_0x2b16ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B16B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B16ACu;
            // 0x2b16b0: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b16ac) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B16B4u;
label_2b16b4:
    // 0x2b16b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b16b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b16b8:
    // 0x2b16b8: 0x26850138  addiu       $a1, $s4, 0x138
    ctx->pc = 0x2b16b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 312));
label_2b16bc:
    // 0x2b16bc: 0x2686013c  addiu       $a2, $s4, 0x13C
    ctx->pc = 0x2b16bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 316));
label_2b16c0:
    // 0x2b16c0: 0xc08ede0  jal         func_23B780
label_2b16c4:
    if (ctx->pc == 0x2B16C4u) {
        ctx->pc = 0x2B16C4u;
            // 0x2b16c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B16C8u;
        goto label_2b16c8;
    }
    ctx->pc = 0x2B16C0u;
    SET_GPR_U32(ctx, 31, 0x2B16C8u);
    ctx->pc = 0x2B16C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B16C0u;
            // 0x2b16c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B780u;
    if (runtime->hasFunction(0x23B780u)) {
        auto targetFn = runtime->lookupFunction(0x23B780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B16C8u; }
        if (ctx->pc != 0x2B16C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemBrdKey__FiPiPii_0x23b780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B16C8u; }
        if (ctx->pc != 0x2B16C8u) { return; }
    }
    ctx->pc = 0x2B16C8u;
label_2b16c8:
    // 0x2b16c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b16c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b16cc:
    // 0x2b16cc: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
label_2b16d0:
    if (ctx->pc == 0x2B16D0u) {
        ctx->pc = 0x2B16D0u;
            // 0x2b16d0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B16D4u;
        goto label_2b16d4;
    }
    ctx->pc = 0x2B16CCu;
    {
        const bool branch_taken_0x2b16cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B16D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B16CCu;
            // 0x2b16d0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b16cc) {
            ctx->pc = 0x2B1730u;
            goto label_2b1730;
        }
    }
    ctx->pc = 0x2B16D4u;
label_2b16d4:
    // 0x2b16d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b16d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b16d8:
    // 0x2b16d8: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_2b16dc:
    if (ctx->pc == 0x2B16DCu) {
        ctx->pc = 0x2B16DCu;
            // 0x2b16dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B16E0u;
        goto label_2b16e0;
    }
    ctx->pc = 0x2B16D8u;
    {
        const bool branch_taken_0x2b16d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B16DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B16D8u;
            // 0x2b16dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b16d8) {
            ctx->pc = 0x2B16F0u;
            goto label_2b16f0;
        }
    }
    ctx->pc = 0x2B16E0u;
label_2b16e0:
    // 0x2b16e0: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_2b16e4:
    if (ctx->pc == 0x2B16E4u) {
        ctx->pc = 0x2B16E8u;
        goto label_2b16e8;
    }
    ctx->pc = 0x2B16E0u;
    {
        const bool branch_taken_0x2b16e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b16e0) {
            ctx->pc = 0x2B16F0u;
            goto label_2b16f0;
        }
    }
    ctx->pc = 0x2B16E8u;
label_2b16e8:
    // 0x2b16e8: 0x10000255  b           . + 4 + (0x255 << 2)
label_2b16ec:
    if (ctx->pc == 0x2B16ECu) {
        ctx->pc = 0x2B16F0u;
        goto label_2b16f0;
    }
    ctx->pc = 0x2B16E8u;
    {
        const bool branch_taken_0x2b16e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b16e8) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B16F0u;
label_2b16f0:
    // 0x2b16f0: 0x8e830138  lw          $v1, 0x138($s4)
    ctx->pc = 0x2b16f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_2b16f4:
    // 0x2b16f4: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2b16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_2b16f8:
    // 0x2b16f8: 0x2442cb70  addiu       $v0, $v0, -0x3490
    ctx->pc = 0x2b16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953840));
label_2b16fc:
    // 0x2b16fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b16fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2b1700:
    // 0x2b1700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b1700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b1704:
    // 0x2b1704: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b1704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b1708:
    // 0x2b1708: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2b1708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2b170c:
    // 0x2b170c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2b170cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2b1710:
    // 0x2b1710: 0x1040024b  beqz        $v0, . + 4 + (0x24B << 2)
label_2b1714:
    if (ctx->pc == 0x2B1714u) {
        ctx->pc = 0x2B1714u;
            // 0x2b1714: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B1718u;
        goto label_2b1718;
    }
    ctx->pc = 0x2B1710u;
    {
        const bool branch_taken_0x2b1710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1710u;
            // 0x2b1714: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1710) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1718u;
label_2b1718:
    // 0x2b1718: 0xc066060  jal         func_198180
label_2b171c:
    if (ctx->pc == 0x2B171Cu) {
        ctx->pc = 0x2B171Cu;
            // 0x2b171c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1720u;
        goto label_2b1720;
    }
    ctx->pc = 0x2B1718u;
    SET_GPR_U32(ctx, 31, 0x2B1720u);
    ctx->pc = 0x2B171Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1718u;
            // 0x2b171c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198180u;
    if (runtime->hasFunction(0x198180u)) {
        auto targetFn = runtime->lookupFunction(0x198180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1720u; }
        if (ctx->pc != 0x2B1720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRepair__13CGameDataUsedFv_0x198180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1720u; }
        if (ctx->pc != 0x2B1720u) { return; }
    }
    ctx->pc = 0x2B1720u;
label_2b1720:
    // 0x2b1720: 0x10400247  beqz        $v0, . + 4 + (0x247 << 2)
label_2b1724:
    if (ctx->pc == 0x2B1724u) {
        ctx->pc = 0x2B1728u;
        goto label_2b1728;
    }
    ctx->pc = 0x2B1720u;
    {
        const bool branch_taken_0x2b1720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1720) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1728u;
label_2b1728:
    // 0x2b1728: 0x10000245  b           . + 4 + (0x245 << 2)
label_2b172c:
    if (ctx->pc == 0x2B172Cu) {
        ctx->pc = 0x2B172Cu;
            // 0x2b172c: 0x2413005a  addiu       $s3, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->pc = 0x2B1730u;
        goto label_2b1730;
    }
    ctx->pc = 0x2B1728u;
    {
        const bool branch_taken_0x2b1728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B172Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1728u;
            // 0x2b172c: 0x2413005a  addiu       $s3, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1728) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1730u;
label_2b1730:
    // 0x2b1730: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b1730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b1734:
    // 0x2b1734: 0x24a5eb98  addiu       $a1, $a1, -0x1468
    ctx->pc = 0x2b1734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962072));
label_2b1738:
    // 0x2b1738: 0xc08e7cc  jal         func_239F30
label_2b173c:
    if (ctx->pc == 0x2B173Cu) {
        ctx->pc = 0x2B173Cu;
            // 0x2b173c: 0x2413001e  addiu       $s3, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x2B1740u;
        goto label_2b1740;
    }
    ctx->pc = 0x2B1738u;
    SET_GPR_U32(ctx, 31, 0x2B1740u);
    ctx->pc = 0x2B173Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1738u;
            // 0x2b173c: 0x2413001e  addiu       $s3, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1740u; }
        if (ctx->pc != 0x2B1740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1740u; }
        if (ctx->pc != 0x2B1740u) { return; }
    }
    ctx->pc = 0x2B1740u;
label_2b1740:
    // 0x2b1740: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2b1740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2b1744:
    // 0x2b1744: 0xc08f02c  jal         func_23C0B0
label_2b1748:
    if (ctx->pc == 0x2B1748u) {
        ctx->pc = 0x2B1748u;
            // 0x2b1748: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B174Cu;
        goto label_2b174c;
    }
    ctx->pc = 0x2B1744u;
    SET_GPR_U32(ctx, 31, 0x2B174Cu);
    ctx->pc = 0x2B1748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1744u;
            // 0x2b1748: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B174Cu; }
        if (ctx->pc != 0x2B174Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B174Cu; }
        if (ctx->pc != 0x2B174Cu) { return; }
    }
    ctx->pc = 0x2B174Cu;
label_2b174c:
    // 0x2b174c: 0x1000023c  b           . + 4 + (0x23C << 2)
label_2b1750:
    if (ctx->pc == 0x2B1750u) {
        ctx->pc = 0x2B1754u;
        goto label_2b1754;
    }
    ctx->pc = 0x2B174Cu;
    {
        const bool branch_taken_0x2b174c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b174c) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1754u;
label_2b1754:
    // 0x2b1754: 0xc087630  jal         func_21D8C0
label_2b1758:
    if (ctx->pc == 0x2B1758u) {
        ctx->pc = 0x2B175Cu;
        goto label_2b175c;
    }
    ctx->pc = 0x2B1754u;
    SET_GPR_U32(ctx, 31, 0x2B175Cu);
    ctx->pc = 0x21D8C0u;
    if (runtime->hasFunction(0x21D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B175Cu; }
        if (ctx->pc != 0x2B175Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor__7CDC2MesFv_0x21d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B175Cu; }
        if (ctx->pc != 0x2B175Cu) { return; }
    }
    ctx->pc = 0x2B175Cu;
label_2b175c:
    // 0x2b175c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b175cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b1760:
    // 0x2b1760: 0x1203000d  beq         $s0, $v1, . + 4 + (0xD << 2)
label_2b1764:
    if (ctx->pc == 0x2B1764u) {
        ctx->pc = 0x2B1764u;
            // 0x2b1764: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2B1768u;
        goto label_2b1768;
    }
    ctx->pc = 0x2B1760u;
    {
        const bool branch_taken_0x2b1760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B1764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1760u;
            // 0x2b1764: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1760) {
            ctx->pc = 0x2B1798u;
            goto label_2b1798;
        }
    }
    ctx->pc = 0x2B1768u;
label_2b1768:
    // 0x2b1768: 0x12030007  beq         $s0, $v1, . + 4 + (0x7 << 2)
label_2b176c:
    if (ctx->pc == 0x2B176Cu) {
        ctx->pc = 0x2B176Cu;
            // 0x2b176c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2B1770u;
        goto label_2b1770;
    }
    ctx->pc = 0x2B1768u;
    {
        const bool branch_taken_0x2b1768 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B176Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1768u;
            // 0x2b176c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1768) {
            ctx->pc = 0x2B1788u;
            goto label_2b1788;
        }
    }
    ctx->pc = 0x2B1770u;
label_2b1770:
    // 0x2b1770: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
label_2b1774:
    if (ctx->pc == 0x2B1774u) {
        ctx->pc = 0x2B1774u;
            // 0x2b1774: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B1778u;
        goto label_2b1778;
    }
    ctx->pc = 0x2B1770u;
    {
        const bool branch_taken_0x2b1770 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B1774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1770u;
            // 0x2b1774: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1770) {
            ctx->pc = 0x2B1788u;
            goto label_2b1788;
        }
    }
    ctx->pc = 0x2B1778u;
label_2b1778:
    // 0x2b1778: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
label_2b177c:
    if (ctx->pc == 0x2B177Cu) {
        ctx->pc = 0x2B1780u;
        goto label_2b1780;
    }
    ctx->pc = 0x2B1778u;
    {
        const bool branch_taken_0x2b1778 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b1778) {
            ctx->pc = 0x2B1788u;
            goto label_2b1788;
        }
    }
    ctx->pc = 0x2B1780u;
label_2b1780:
    // 0x2b1780: 0x1000022f  b           . + 4 + (0x22F << 2)
label_2b1784:
    if (ctx->pc == 0x2B1784u) {
        ctx->pc = 0x2B1788u;
        goto label_2b1788;
    }
    ctx->pc = 0x2B1780u;
    {
        const bool branch_taken_0x2b1780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1780) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1788u;
label_2b1788:
    // 0x2b1788: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b178c:
    if (ctx->pc == 0x2B178Cu) {
        ctx->pc = 0x2B178Cu;
            // 0x2b178c: 0x24130050  addiu       $s3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2B1790u;
        goto label_2b1790;
    }
    ctx->pc = 0x2B1788u;
    {
        const bool branch_taken_0x2b1788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B178Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1788u;
            // 0x2b178c: 0x24130050  addiu       $s3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1788) {
            ctx->pc = 0x2B179Cu;
            goto label_2b179c;
        }
    }
    ctx->pc = 0x2B1790u;
label_2b1790:
    // 0x2b1790: 0x1000022b  b           . + 4 + (0x22B << 2)
label_2b1794:
    if (ctx->pc == 0x2B1794u) {
        ctx->pc = 0x2B1794u;
            // 0x2b1794: 0x24130014  addiu       $s3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2B1798u;
        goto label_2b1798;
    }
    ctx->pc = 0x2B1790u;
    {
        const bool branch_taken_0x2b1790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1790u;
            // 0x2b1794: 0x24130014  addiu       $s3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1790) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1798u;
label_2b1798:
    // 0x2b1798: 0x24130050  addiu       $s3, $zero, 0x50
    ctx->pc = 0x2b1798u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2b179c:
    // 0x2b179c: 0x10000228  b           . + 4 + (0x228 << 2)
label_2b17a0:
    if (ctx->pc == 0x2B17A0u) {
        ctx->pc = 0x2B17A4u;
        goto label_2b17a4;
    }
    ctx->pc = 0x2B179Cu;
    {
        const bool branch_taken_0x2b179c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b179c) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B17A4u;
label_2b17a4:
    // 0x2b17a4: 0x86820120  lh          $v0, 0x120($s4)
    ctx->pc = 0x2b17a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 288)));
label_2b17a8:
    // 0x2b17a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2b17ac:
    if (ctx->pc == 0x2B17ACu) {
        ctx->pc = 0x2B17B0u;
        goto label_2b17b0;
    }
    ctx->pc = 0x2B17A8u;
    {
        const bool branch_taken_0x2b17a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b17a8) {
            ctx->pc = 0x2B17B4u;
            goto label_2b17b4;
        }
    }
    ctx->pc = 0x2B17B0u;
label_2b17b0:
    // 0x2b17b0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b17b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b17b4:
    // 0x2b17b4: 0x8682011c  lh          $v0, 0x11C($s4)
    ctx->pc = 0x2b17b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 284)));
label_2b17b8:
    // 0x2b17b8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2b17b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b17bc:
    // 0x2b17bc: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_2b17c0:
    if (ctx->pc == 0x2B17C0u) {
        ctx->pc = 0x2B17C4u;
        goto label_2b17c4;
    }
    ctx->pc = 0x2B17BCu;
    {
        const bool branch_taken_0x2b17bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b17bc) {
            ctx->pc = 0x2B180Cu;
            goto label_2b180c;
        }
    }
    ctx->pc = 0x2B17C4u;
label_2b17c4:
    // 0x2b17c4: 0x1200021e  beqz        $s0, . + 4 + (0x21E << 2)
label_2b17c8:
    if (ctx->pc == 0x2B17C8u) {
        ctx->pc = 0x2B17C8u;
            // 0x2b17c8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B17CCu;
        goto label_2b17cc;
    }
    ctx->pc = 0x2B17C4u;
    {
        const bool branch_taken_0x2b17c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B17C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B17C4u;
            // 0x2b17c8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b17c4) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B17CCu;
label_2b17cc:
    // 0x2b17cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b17ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b17d0:
    // 0x2b17d0: 0xc08e7cc  jal         func_239F30
label_2b17d4:
    if (ctx->pc == 0x2B17D4u) {
        ctx->pc = 0x2B17D4u;
            // 0x2b17d4: 0x24a5eba8  addiu       $a1, $a1, -0x1458 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962088));
        ctx->pc = 0x2B17D8u;
        goto label_2b17d8;
    }
    ctx->pc = 0x2B17D0u;
    SET_GPR_U32(ctx, 31, 0x2B17D8u);
    ctx->pc = 0x2B17D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B17D0u;
            // 0x2b17d4: 0x24a5eba8  addiu       $a1, $a1, -0x1458 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B17D8u; }
        if (ctx->pc != 0x2B17D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B17D8u; }
        if (ctx->pc != 0x2B17D8u) { return; }
    }
    ctx->pc = 0x2B17D8u;
label_2b17d8:
    // 0x2b17d8: 0x8f9094f8  lw          $s0, -0x6B08($gp)
    ctx->pc = 0x2b17d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2b17dc:
    // 0x2b17dc: 0x8e040138  lw          $a0, 0x138($s0)
    ctx->pc = 0x2b17dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_2b17e0:
    // 0x2b17e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2b17e4:
    if (ctx->pc == 0x2B17E4u) {
        ctx->pc = 0x2B17E4u;
            // 0x2b17e4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2B17E8u;
        goto label_2b17e8;
    }
    ctx->pc = 0x2B17E0u;
    {
        const bool branch_taken_0x2b17e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B17E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B17E0u;
            // 0x2b17e4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b17e0) {
            ctx->pc = 0x2B17F0u;
            goto label_2b17f0;
        }
    }
    ctx->pc = 0x2B17E8u;
label_2b17e8:
    // 0x2b17e8: 0xc0896d8  jal         func_225B60
label_2b17ec:
    if (ctx->pc == 0x2B17ECu) {
        ctx->pc = 0x2B17ECu;
            // 0x2b17ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B17F0u;
        goto label_2b17f0;
    }
    ctx->pc = 0x2B17E8u;
    SET_GPR_U32(ctx, 31, 0x2B17F0u);
    ctx->pc = 0x2B17ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B17E8u;
            // 0x2b17ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B60u;
    if (runtime->hasFunction(0x225B60u)) {
        auto targetFn = runtime->lookupFunction(0x225B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B17F0u; }
        if (ctx->pc != 0x2B17F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormFadeIn__16CMenuPosDataFormFii_0x225b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B17F0u; }
        if (ctx->pc != 0x2B17F0u) { return; }
    }
    ctx->pc = 0x2B17F0u;
label_2b17f0:
    // 0x2b17f0: 0x8e04013c  lw          $a0, 0x13C($s0)
    ctx->pc = 0x2b17f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_2b17f4:
    // 0x2b17f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2b17f8:
    if (ctx->pc == 0x2B17F8u) {
        ctx->pc = 0x2B17F8u;
            // 0x2b17f8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2B17FCu;
        goto label_2b17fc;
    }
    ctx->pc = 0x2B17F4u;
    {
        const bool branch_taken_0x2b17f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B17F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B17F4u;
            // 0x2b17f8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b17f4) {
            ctx->pc = 0x2B1804u;
            goto label_2b1804;
        }
    }
    ctx->pc = 0x2B17FCu;
label_2b17fc:
    // 0x2b17fc: 0xc0896d8  jal         func_225B60
label_2b1800:
    if (ctx->pc == 0x2B1800u) {
        ctx->pc = 0x2B1800u;
            // 0x2b1800: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1804u;
        goto label_2b1804;
    }
    ctx->pc = 0x2B17FCu;
    SET_GPR_U32(ctx, 31, 0x2B1804u);
    ctx->pc = 0x2B1800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B17FCu;
            // 0x2b1800: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B60u;
    if (runtime->hasFunction(0x225B60u)) {
        auto targetFn = runtime->lookupFunction(0x225B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1804u; }
        if (ctx->pc != 0x2B1804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormFadeIn__16CMenuPosDataFormFii_0x225b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1804u; }
        if (ctx->pc != 0x2B1804u) { return; }
    }
    ctx->pc = 0x2B1804u;
label_2b1804:
    // 0x2b1804: 0x1000020e  b           . + 4 + (0x20E << 2)
label_2b1808:
    if (ctx->pc == 0x2B1808u) {
        ctx->pc = 0x2B1808u;
            // 0x2b1808: 0xa680011c  sh          $zero, 0x11C($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 284), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B180Cu;
        goto label_2b180c;
    }
    ctx->pc = 0x2B1804u;
    {
        const bool branch_taken_0x2b1804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1804u;
            // 0x2b1808: 0xa680011c  sh          $zero, 0x11C($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 284), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1804) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B180Cu;
label_2b180c:
    // 0x2b180c: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x2b180cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
label_2b1810:
    // 0x2b1810: 0x10400111  beqz        $v0, . + 4 + (0x111 << 2)
label_2b1814:
    if (ctx->pc == 0x2B1814u) {
        ctx->pc = 0x2B1818u;
        goto label_2b1818;
    }
    ctx->pc = 0x2B1810u;
    {
        const bool branch_taken_0x2b1810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1810) {
            ctx->pc = 0x2B1C58u;
            goto label_2b1c58;
        }
    }
    ctx->pc = 0x2B1818u;
label_2b1818:
    // 0x2b1818: 0x8e830110  lw          $v1, 0x110($s4)
    ctx->pc = 0x2b1818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_2b181c:
    // 0x2b181c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b181cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b1820:
    // 0x2b1820: 0x106200af  beq         $v1, $v0, . + 4 + (0xAF << 2)
label_2b1824:
    if (ctx->pc == 0x2B1824u) {
        ctx->pc = 0x2B1824u;
            // 0x2b1824: 0x32a20001  andi        $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x2B1828u;
        goto label_2b1828;
    }
    ctx->pc = 0x2B1820u;
    {
        const bool branch_taken_0x2b1820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B1824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1820u;
            // 0x2b1824: 0x32a20001  andi        $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1820) {
            ctx->pc = 0x2B1AE0u;
            goto label_2b1ae0;
        }
    }
    ctx->pc = 0x2B1828u;
label_2b1828:
    // 0x2b1828: 0xc08f840  jal         func_23E100
label_2b182c:
    if (ctx->pc == 0x2B182Cu) {
        ctx->pc = 0x2B182Cu;
            // 0x2b182c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x2B1830u;
        goto label_2b1830;
    }
    ctx->pc = 0x2B1828u;
    SET_GPR_U32(ctx, 31, 0x2B1830u);
    ctx->pc = 0x2B182Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1828u;
            // 0x2b182c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E100u;
    if (runtime->hasFunction(0x23E100u)) {
        auto targetFn = runtime->lookupFunction(0x23E100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1830u; }
        if (ctx->pc != 0x2B1830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLRKey__12CMenuKeyFuncFv_0x23e100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1830u; }
        if (ctx->pc != 0x2B1830u) { return; }
    }
    ctx->pc = 0x2B1830u;
label_2b1830:
    // 0x2b1830: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b1830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1834:
    // 0x2b1834: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2b1834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2b1838:
    // 0x2b1838: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b183c:
    if (ctx->pc == 0x2B183Cu) {
        ctx->pc = 0x2B183Cu;
            // 0x2b183c: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x2B1840u;
        goto label_2b1840;
    }
    ctx->pc = 0x2B1838u;
    {
        const bool branch_taken_0x2b1838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B183Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1838u;
            // 0x2b183c: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1838) {
            ctx->pc = 0x2B1848u;
            goto label_2b1848;
        }
    }
    ctx->pc = 0x2B1840u;
label_2b1840:
    // 0x2b1840: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b1844:
    if (ctx->pc == 0x2B1844u) {
        ctx->pc = 0x2B1844u;
            // 0x2b1844: 0x32220010  andi        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
        ctx->pc = 0x2B1848u;
        goto label_2b1848;
    }
    ctx->pc = 0x2B1840u;
    {
        const bool branch_taken_0x2b1840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1840u;
            // 0x2b1844: 0x32220010  andi        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1840) {
            ctx->pc = 0x2B1858u;
            goto label_2b1858;
        }
    }
    ctx->pc = 0x2B1848u;
label_2b1848:
    // 0x2b1848: 0x87829b94  lh          $v0, -0x646C($gp)
    ctx->pc = 0x2b1848u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941588)));
label_2b184c:
    // 0x2b184c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b184cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b1850:
    // 0x2b1850: 0xa7829b94  sh          $v0, -0x646C($gp)
    ctx->pc = 0x2b1850u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941588), (uint16_t)GPR_U32(ctx, 2));
label_2b1854:
    // 0x2b1854: 0x32220010  andi        $v0, $s1, 0x10
    ctx->pc = 0x2b1854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
label_2b1858:
    // 0x2b1858: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b185c:
    if (ctx->pc == 0x2B185Cu) {
        ctx->pc = 0x2B185Cu;
            // 0x2b185c: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x2B1860u;
        goto label_2b1860;
    }
    ctx->pc = 0x2B1858u;
    {
        const bool branch_taken_0x2b1858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B185Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1858u;
            // 0x2b185c: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1858) {
            ctx->pc = 0x2B1868u;
            goto label_2b1868;
        }
    }
    ctx->pc = 0x2B1860u;
label_2b1860:
    // 0x2b1860: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b1864:
    if (ctx->pc == 0x2B1864u) {
        ctx->pc = 0x2B1868u;
        goto label_2b1868;
    }
    ctx->pc = 0x2B1860u;
    {
        const bool branch_taken_0x2b1860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1860) {
            ctx->pc = 0x2B1874u;
            goto label_2b1874;
        }
    }
    ctx->pc = 0x2B1868u;
label_2b1868:
    // 0x2b1868: 0x87829b94  lh          $v0, -0x646C($gp)
    ctx->pc = 0x2b1868u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941588)));
label_2b186c:
    // 0x2b186c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2b1870:
    // 0x2b1870: 0xa7829b94  sh          $v0, -0x646C($gp)
    ctx->pc = 0x2b1870u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941588), (uint16_t)GPR_U32(ctx, 2));
label_2b1874:
    // 0x2b1874: 0x87829b94  lh          $v0, -0x646C($gp)
    ctx->pc = 0x2b1874u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941588)));
label_2b1878:
    // 0x2b1878: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2b187c:
    if (ctx->pc == 0x2B187Cu) {
        ctx->pc = 0x2B187Cu;
            // 0x2b187c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B1880u;
        goto label_2b1880;
    }
    ctx->pc = 0x2B1878u;
    {
        const bool branch_taken_0x2b1878 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2B187Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1878u;
            // 0x2b187c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1878) {
            ctx->pc = 0x2B1884u;
            goto label_2b1884;
        }
    }
    ctx->pc = 0x2B1880u;
label_2b1880:
    // 0x2b1880: 0xa7829b94  sh          $v0, -0x646C($gp)
    ctx->pc = 0x2b1880u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941588), (uint16_t)GPR_U32(ctx, 2));
label_2b1884:
    // 0x2b1884: 0x87829b94  lh          $v0, -0x646C($gp)
    ctx->pc = 0x2b1884u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941588)));
label_2b1888:
    // 0x2b1888: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x2b1888u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_2b188c:
    // 0x2b188c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2b1890:
    if (ctx->pc == 0x2B1890u) {
        ctx->pc = 0x2B1894u;
        goto label_2b1894;
    }
    ctx->pc = 0x2B188Cu;
    {
        const bool branch_taken_0x2b188c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b188c) {
            ctx->pc = 0x2B1898u;
            goto label_2b1898;
        }
    }
    ctx->pc = 0x2B1894u;
label_2b1894:
    // 0x2b1894: 0xa7809b94  sh          $zero, -0x646C($gp)
    ctx->pc = 0x2b1894u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941588), (uint16_t)GPR_U32(ctx, 0));
label_2b1898:
    // 0x2b1898: 0x87829b94  lh          $v0, -0x646C($gp)
    ctx->pc = 0x2b1898u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941588)));
label_2b189c:
    // 0x2b189c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_2b18a0:
    if (ctx->pc == 0x2B18A0u) {
        ctx->pc = 0x2B18A0u;
            // 0x2b18a0: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x2B18A4u;
        goto label_2b18a4;
    }
    ctx->pc = 0x2B189Cu;
    {
        const bool branch_taken_0x2b189c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B18A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B189Cu;
            // 0x2b18a0: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b189c) {
            ctx->pc = 0x2B1938u;
            goto label_2b1938;
        }
    }
    ctx->pc = 0x2B18A4u;
label_2b18a4:
    // 0x2b18a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b18a8:
    if (ctx->pc == 0x2B18A8u) {
        ctx->pc = 0x2B18A8u;
            // 0x2b18a8: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x2B18ACu;
        goto label_2b18ac;
    }
    ctx->pc = 0x2B18A4u;
    {
        const bool branch_taken_0x2b18a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B18A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B18A4u;
            // 0x2b18a8: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b18a4) {
            ctx->pc = 0x2B18BCu;
            goto label_2b18bc;
        }
    }
    ctx->pc = 0x2B18ACu;
label_2b18ac:
    // 0x2b18ac: 0x87829b98  lh          $v0, -0x6468($gp)
    ctx->pc = 0x2b18acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
label_2b18b0:
    // 0x2b18b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b18b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2b18b4:
    // 0x2b18b4: 0xa7829b98  sh          $v0, -0x6468($gp)
    ctx->pc = 0x2b18b4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941592), (uint16_t)GPR_U32(ctx, 2));
label_2b18b8:
    // 0x2b18b8: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x2b18b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_2b18bc:
    // 0x2b18bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b18c0:
    if (ctx->pc == 0x2B18C0u) {
        ctx->pc = 0x2B18C4u;
        goto label_2b18c4;
    }
    ctx->pc = 0x2B18BCu;
    {
        const bool branch_taken_0x2b18bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b18bc) {
            ctx->pc = 0x2B18D0u;
            goto label_2b18d0;
        }
    }
    ctx->pc = 0x2B18C4u;
label_2b18c4:
    // 0x2b18c4: 0x87829b98  lh          $v0, -0x6468($gp)
    ctx->pc = 0x2b18c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
label_2b18c8:
    // 0x2b18c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b18c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b18cc:
    // 0x2b18cc: 0xa7829b98  sh          $v0, -0x6468($gp)
    ctx->pc = 0x2b18ccu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941592), (uint16_t)GPR_U32(ctx, 2));
label_2b18d0:
    // 0x2b18d0: 0x87829b98  lh          $v0, -0x6468($gp)
    ctx->pc = 0x2b18d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
label_2b18d4:
    // 0x2b18d4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2b18d8:
    if (ctx->pc == 0x2B18D8u) {
        ctx->pc = 0x2B18D8u;
            // 0x2b18d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B18DCu;
        goto label_2b18dc;
    }
    ctx->pc = 0x2B18D4u;
    {
        const bool branch_taken_0x2b18d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2B18D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B18D4u;
            // 0x2b18d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b18d4) {
            ctx->pc = 0x2B18E0u;
            goto label_2b18e0;
        }
    }
    ctx->pc = 0x2B18DCu;
label_2b18dc:
    // 0x2b18dc: 0xa7829b98  sh          $v0, -0x6468($gp)
    ctx->pc = 0x2b18dcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941592), (uint16_t)GPR_U32(ctx, 2));
label_2b18e0:
    // 0x2b18e0: 0x87829b98  lh          $v0, -0x6468($gp)
    ctx->pc = 0x2b18e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
label_2b18e4:
    // 0x2b18e4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2b18e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_2b18e8:
    // 0x2b18e8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2b18ec:
    if (ctx->pc == 0x2B18ECu) {
        ctx->pc = 0x2B18ECu;
            // 0x2b18ec: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x2B18F0u;
        goto label_2b18f0;
    }
    ctx->pc = 0x2B18E8u;
    {
        const bool branch_taken_0x2b18e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B18ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B18E8u;
            // 0x2b18ec: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b18e8) {
            ctx->pc = 0x2B18F4u;
            goto label_2b18f4;
        }
    }
    ctx->pc = 0x2B18F0u;
label_2b18f0:
    // 0x2b18f0: 0xa7809b98  sh          $zero, -0x6468($gp)
    ctx->pc = 0x2b18f0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941592), (uint16_t)GPR_U32(ctx, 0));
label_2b18f4:
    // 0x2b18f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b18f8:
    if (ctx->pc == 0x2B18F8u) {
        ctx->pc = 0x2B18F8u;
            // 0x2b18f8: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x2B18FCu;
        goto label_2b18fc;
    }
    ctx->pc = 0x2B18F4u;
    {
        const bool branch_taken_0x2b18f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B18F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B18F4u;
            // 0x2b18f8: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b18f4) {
            ctx->pc = 0x2B1918u;
            goto label_2b1918;
        }
    }
    ctx->pc = 0x2B18FCu;
label_2b18fc:
    // 0x2b18fc: 0x87859b98  lh          $a1, -0x6468($gp)
    ctx->pc = 0x2b18fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
label_2b1900:
    // 0x2b1900: 0x28a10004  slti        $at, $a1, 0x4
    ctx->pc = 0x2b1900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_2b1904:
    // 0x2b1904: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2b1908:
    if (ctx->pc == 0x2B1908u) {
        ctx->pc = 0x2B190Cu;
        goto label_2b190c;
    }
    ctx->pc = 0x2B1904u;
    {
        const bool branch_taken_0x2b1904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1904) {
            ctx->pc = 0x2B1914u;
            goto label_2b1914;
        }
    }
    ctx->pc = 0x2B190Cu;
label_2b190c:
    // 0x2b190c: 0xc066e68  jal         func_19B9A0
label_2b1910:
    if (ctx->pc == 0x2B1910u) {
        ctx->pc = 0x2B1910u;
            // 0x2b1910: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->pc = 0x2B1914u;
        goto label_2b1914;
    }
    ctx->pc = 0x2B190Cu;
    SET_GPR_U32(ctx, 31, 0x2B1914u);
    ctx->pc = 0x2B1910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B190Cu;
            // 0x2b1910: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B9A0u;
    if (runtime->hasFunction(0x19B9A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1914u; }
        if (ctx->pc != 0x2B1914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JoinPartyMember__16CUserDataManagerFi_0x19b9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1914u; }
        if (ctx->pc != 0x2B1914u) { return; }
    }
    ctx->pc = 0x2B1914u;
label_2b1914:
    // 0x2b1914: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x2b1914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_2b1918:
    // 0x2b1918: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b191c:
    if (ctx->pc == 0x2B191Cu) {
        ctx->pc = 0x2B1920u;
        goto label_2b1920;
    }
    ctx->pc = 0x2B1918u;
    {
        const bool branch_taken_0x2b1918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1918) {
            ctx->pc = 0x2B1938u;
            goto label_2b1938;
        }
    }
    ctx->pc = 0x2B1920u;
label_2b1920:
    // 0x2b1920: 0x87859b98  lh          $a1, -0x6468($gp)
    ctx->pc = 0x2b1920u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
label_2b1924:
    // 0x2b1924: 0x28a10004  slti        $at, $a1, 0x4
    ctx->pc = 0x2b1924u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_2b1928:
    // 0x2b1928: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2b192c:
    if (ctx->pc == 0x2B192Cu) {
        ctx->pc = 0x2B1930u;
        goto label_2b1930;
    }
    ctx->pc = 0x2B1928u;
    {
        const bool branch_taken_0x2b1928 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1928) {
            ctx->pc = 0x2B1938u;
            goto label_2b1938;
        }
    }
    ctx->pc = 0x2B1930u;
label_2b1930:
    // 0x2b1930: 0xc066e80  jal         func_19BA00
label_2b1934:
    if (ctx->pc == 0x2B1934u) {
        ctx->pc = 0x2B1934u;
            // 0x2b1934: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->pc = 0x2B1938u;
        goto label_2b1938;
    }
    ctx->pc = 0x2B1930u;
    SET_GPR_U32(ctx, 31, 0x2B1938u);
    ctx->pc = 0x2B1934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1930u;
            // 0x2b1934: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BA00u;
    if (runtime->hasFunction(0x19BA00u)) {
        auto targetFn = runtime->lookupFunction(0x19BA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1938u; }
        if (ctx->pc != 0x2B1938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LeavePartyMember__16CUserDataManagerFi_0x19ba00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1938u; }
        if (ctx->pc != 0x2B1938u) { return; }
    }
    ctx->pc = 0x2B1938u;
label_2b1938:
    // 0x2b1938: 0x87839b94  lh          $v1, -0x646C($gp)
    ctx->pc = 0x2b1938u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941588)));
label_2b193c:
    // 0x2b193c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1940:
    // 0x2b1940: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
label_2b1944:
    if (ctx->pc == 0x2B1944u) {
        ctx->pc = 0x2B1944u;
            // 0x2b1944: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x2B1948u;
        goto label_2b1948;
    }
    ctx->pc = 0x2B1940u;
    {
        const bool branch_taken_0x2b1940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B1944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1940u;
            // 0x2b1944: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1940) {
            ctx->pc = 0x2B19C4u;
            goto label_2b19c4;
        }
    }
    ctx->pc = 0x2B1948u;
label_2b1948:
    // 0x2b1948: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b194c:
    if (ctx->pc == 0x2B194Cu) {
        ctx->pc = 0x2B194Cu;
            // 0x2b194c: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x2B1950u;
        goto label_2b1950;
    }
    ctx->pc = 0x2B1948u;
    {
        const bool branch_taken_0x2b1948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B194Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1948u;
            // 0x2b194c: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1948) {
            ctx->pc = 0x2B1960u;
            goto label_2b1960;
        }
    }
    ctx->pc = 0x2B1950u;
label_2b1950:
    // 0x2b1950: 0x87829b98  lh          $v0, -0x6468($gp)
    ctx->pc = 0x2b1950u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
label_2b1954:
    // 0x2b1954: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b1954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2b1958:
    // 0x2b1958: 0xa7829b98  sh          $v0, -0x6468($gp)
    ctx->pc = 0x2b1958u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941592), (uint16_t)GPR_U32(ctx, 2));
label_2b195c:
    // 0x2b195c: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x2b195cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_2b1960:
    // 0x2b1960: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b1964:
    if (ctx->pc == 0x2B1964u) {
        ctx->pc = 0x2B1968u;
        goto label_2b1968;
    }
    ctx->pc = 0x2B1960u;
    {
        const bool branch_taken_0x2b1960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1960) {
            ctx->pc = 0x2B1974u;
            goto label_2b1974;
        }
    }
    ctx->pc = 0x2B1968u;
label_2b1968:
    // 0x2b1968: 0x87829b98  lh          $v0, -0x6468($gp)
    ctx->pc = 0x2b1968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
label_2b196c:
    // 0x2b196c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b196cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b1970:
    // 0x2b1970: 0xa7829b98  sh          $v0, -0x6468($gp)
    ctx->pc = 0x2b1970u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941592), (uint16_t)GPR_U32(ctx, 2));
label_2b1974:
    // 0x2b1974: 0x87829b98  lh          $v0, -0x6468($gp)
    ctx->pc = 0x2b1974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
label_2b1978:
    // 0x2b1978: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2b197c:
    if (ctx->pc == 0x2B197Cu) {
        ctx->pc = 0x2B197Cu;
            // 0x2b197c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B1980u;
        goto label_2b1980;
    }
    ctx->pc = 0x2B1978u;
    {
        const bool branch_taken_0x2b1978 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2B197Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1978u;
            // 0x2b197c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1978) {
            ctx->pc = 0x2B1984u;
            goto label_2b1984;
        }
    }
    ctx->pc = 0x2B1980u;
label_2b1980:
    // 0x2b1980: 0xa7829b98  sh          $v0, -0x6468($gp)
    ctx->pc = 0x2b1980u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941592), (uint16_t)GPR_U32(ctx, 2));
label_2b1984:
    // 0x2b1984: 0x87829b98  lh          $v0, -0x6468($gp)
    ctx->pc = 0x2b1984u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
label_2b1988:
    // 0x2b1988: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2b1988u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_2b198c:
    // 0x2b198c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2b1990:
    if (ctx->pc == 0x2B1990u) {
        ctx->pc = 0x2B1990u;
            // 0x2b1990: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x2B1994u;
        goto label_2b1994;
    }
    ctx->pc = 0x2B198Cu;
    {
        const bool branch_taken_0x2b198c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B198Cu;
            // 0x2b1990: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b198c) {
            ctx->pc = 0x2B1998u;
            goto label_2b1998;
        }
    }
    ctx->pc = 0x2B1994u;
label_2b1994:
    // 0x2b1994: 0xa7809b98  sh          $zero, -0x6468($gp)
    ctx->pc = 0x2b1994u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941592), (uint16_t)GPR_U32(ctx, 0));
label_2b1998:
    // 0x2b1998: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b199c:
    if (ctx->pc == 0x2B199Cu) {
        ctx->pc = 0x2B199Cu;
            // 0x2b199c: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x2B19A0u;
        goto label_2b19a0;
    }
    ctx->pc = 0x2B1998u;
    {
        const bool branch_taken_0x2b1998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B199Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1998u;
            // 0x2b199c: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1998) {
            ctx->pc = 0x2B19B0u;
            goto label_2b19b0;
        }
    }
    ctx->pc = 0x2B19A0u;
label_2b19a0:
    // 0x2b19a0: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b19a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b19a4:
    // 0x2b19a4: 0xc066ea8  jal         func_19BAA0
label_2b19a8:
    if (ctx->pc == 0x2B19A8u) {
        ctx->pc = 0x2B19A8u;
            // 0x2b19a8: 0x87859b98  lh          $a1, -0x6468($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
        ctx->pc = 0x2B19ACu;
        goto label_2b19ac;
    }
    ctx->pc = 0x2B19A4u;
    SET_GPR_U32(ctx, 31, 0x2B19ACu);
    ctx->pc = 0x2B19A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B19A4u;
            // 0x2b19a8: 0x87859b98  lh          $a1, -0x6468($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAA0u;
    if (runtime->hasFunction(0x19BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B19ACu; }
        if (ctx->pc != 0x2B19ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChange__16CUserDataManagerFi_0x19baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B19ACu; }
        if (ctx->pc != 0x2B19ACu) { return; }
    }
    ctx->pc = 0x2B19ACu;
label_2b19ac:
    // 0x2b19ac: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x2b19acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_2b19b0:
    // 0x2b19b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b19b4:
    if (ctx->pc == 0x2B19B4u) {
        ctx->pc = 0x2B19B8u;
        goto label_2b19b8;
    }
    ctx->pc = 0x2B19B0u;
    {
        const bool branch_taken_0x2b19b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b19b0) {
            ctx->pc = 0x2B19C4u;
            goto label_2b19c4;
        }
    }
    ctx->pc = 0x2B19B8u;
label_2b19b8:
    // 0x2b19b8: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b19b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b19bc:
    // 0x2b19bc: 0xc066ebc  jal         func_19BAF0
label_2b19c0:
    if (ctx->pc == 0x2B19C0u) {
        ctx->pc = 0x2B19C0u;
            // 0x2b19c0: 0x87859b98  lh          $a1, -0x6468($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
        ctx->pc = 0x2B19C4u;
        goto label_2b19c4;
    }
    ctx->pc = 0x2B19BCu;
    SET_GPR_U32(ctx, 31, 0x2B19C4u);
    ctx->pc = 0x2B19C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B19BCu;
            // 0x2b19c0: 0x87859b98  lh          $a1, -0x6468($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAF0u;
    if (runtime->hasFunction(0x19BAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B19C4u; }
        if (ctx->pc != 0x2B19C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DisableCharaChange__16CUserDataManagerFi_0x19baf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B19C4u; }
        if (ctx->pc != 0x2B19C4u) { return; }
    }
    ctx->pc = 0x2B19C4u;
label_2b19c4:
    // 0x2b19c4: 0x87839b94  lh          $v1, -0x646C($gp)
    ctx->pc = 0x2b19c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941588)));
label_2b19c8:
    // 0x2b19c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b19cc:
    // 0x2b19cc: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
label_2b19d0:
    if (ctx->pc == 0x2B19D0u) {
        ctx->pc = 0x2B19D0u;
            // 0x2b19d0: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x2B19D4u;
        goto label_2b19d4;
    }
    ctx->pc = 0x2B19CCu;
    {
        const bool branch_taken_0x2b19cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B19D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B19CCu;
            // 0x2b19d0: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b19cc) {
            ctx->pc = 0x2B1A58u;
            goto label_2b1a58;
        }
    }
    ctx->pc = 0x2B19D4u;
label_2b19d4:
    // 0x2b19d4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2b19d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_2b19d8:
    // 0x2b19d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b19dc:
    if (ctx->pc == 0x2B19DCu) {
        ctx->pc = 0x2B19DCu;
            // 0x2b19dc: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x2B19E0u;
        goto label_2b19e0;
    }
    ctx->pc = 0x2B19D8u;
    {
        const bool branch_taken_0x2b19d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B19DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B19D8u;
            // 0x2b19dc: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b19d8) {
            ctx->pc = 0x2B19F0u;
            goto label_2b19f0;
        }
    }
    ctx->pc = 0x2B19E0u;
label_2b19e0:
    // 0x2b19e0: 0x87829b98  lh          $v0, -0x6468($gp)
    ctx->pc = 0x2b19e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
label_2b19e4:
    // 0x2b19e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b19e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2b19e8:
    // 0x2b19e8: 0xa7829b98  sh          $v0, -0x6468($gp)
    ctx->pc = 0x2b19e8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941592), (uint16_t)GPR_U32(ctx, 2));
label_2b19ec:
    // 0x2b19ec: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x2b19ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_2b19f0:
    // 0x2b19f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b19f4:
    if (ctx->pc == 0x2B19F4u) {
        ctx->pc = 0x2B19F8u;
        goto label_2b19f8;
    }
    ctx->pc = 0x2B19F0u;
    {
        const bool branch_taken_0x2b19f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b19f0) {
            ctx->pc = 0x2B1A04u;
            goto label_2b1a04;
        }
    }
    ctx->pc = 0x2B19F8u;
label_2b19f8:
    // 0x2b19f8: 0x87829b98  lh          $v0, -0x6468($gp)
    ctx->pc = 0x2b19f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
label_2b19fc:
    // 0x2b19fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b19fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b1a00:
    // 0x2b1a00: 0xa7829b98  sh          $v0, -0x6468($gp)
    ctx->pc = 0x2b1a00u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941592), (uint16_t)GPR_U32(ctx, 2));
label_2b1a04:
    // 0x2b1a04: 0x87829b98  lh          $v0, -0x6468($gp)
    ctx->pc = 0x2b1a04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
label_2b1a08:
    // 0x2b1a08: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2b1a0c:
    if (ctx->pc == 0x2B1A0Cu) {
        ctx->pc = 0x2B1A0Cu;
            // 0x2b1a0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B1A10u;
        goto label_2b1a10;
    }
    ctx->pc = 0x2B1A08u;
    {
        const bool branch_taken_0x2b1a08 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2B1A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1A08u;
            // 0x2b1a0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a08) {
            ctx->pc = 0x2B1A14u;
            goto label_2b1a14;
        }
    }
    ctx->pc = 0x2B1A10u;
label_2b1a10:
    // 0x2b1a10: 0xa7829b98  sh          $v0, -0x6468($gp)
    ctx->pc = 0x2b1a10u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941592), (uint16_t)GPR_U32(ctx, 2));
label_2b1a14:
    // 0x2b1a14: 0x87829b98  lh          $v0, -0x6468($gp)
    ctx->pc = 0x2b1a14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
label_2b1a18:
    // 0x2b1a18: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2b1a18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_2b1a1c:
    // 0x2b1a1c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2b1a20:
    if (ctx->pc == 0x2B1A20u) {
        ctx->pc = 0x2B1A20u;
            // 0x2b1a20: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x2B1A24u;
        goto label_2b1a24;
    }
    ctx->pc = 0x2B1A1Cu;
    {
        const bool branch_taken_0x2b1a1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1A1Cu;
            // 0x2b1a20: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a1c) {
            ctx->pc = 0x2B1A28u;
            goto label_2b1a28;
        }
    }
    ctx->pc = 0x2B1A24u;
label_2b1a24:
    // 0x2b1a24: 0xa7809b98  sh          $zero, -0x6468($gp)
    ctx->pc = 0x2b1a24u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941592), (uint16_t)GPR_U32(ctx, 0));
label_2b1a28:
    // 0x2b1a28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b1a2c:
    if (ctx->pc == 0x2B1A2Cu) {
        ctx->pc = 0x2B1A2Cu;
            // 0x2b1a2c: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x2B1A30u;
        goto label_2b1a30;
    }
    ctx->pc = 0x2B1A28u;
    {
        const bool branch_taken_0x2b1a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1A28u;
            // 0x2b1a2c: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a28) {
            ctx->pc = 0x2B1A40u;
            goto label_2b1a40;
        }
    }
    ctx->pc = 0x2B1A30u;
label_2b1a30:
    // 0x2b1a30: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b1a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b1a34:
    // 0x2b1a34: 0xc066fc0  jal         func_19BF00
label_2b1a38:
    if (ctx->pc == 0x2B1A38u) {
        ctx->pc = 0x2B1A38u;
            // 0x2b1a38: 0x87859b98  lh          $a1, -0x6468($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
        ctx->pc = 0x2B1A3Cu;
        goto label_2b1a3c;
    }
    ctx->pc = 0x2B1A34u;
    SET_GPR_U32(ctx, 31, 0x2B1A3Cu);
    ctx->pc = 0x2B1A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1A34u;
            // 0x2b1a38: 0x87859b98  lh          $a1, -0x6468($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (runtime->hasFunction(0x19BF00u)) {
        auto targetFn = runtime->lookupFunction(0x19BF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1A3Cu; }
        if (ctx->pc != 0x2B1A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChangeMask__16CUserDataManagerFi_0x19bf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1A3Cu; }
        if (ctx->pc != 0x2B1A3Cu) { return; }
    }
    ctx->pc = 0x2B1A3Cu;
label_2b1a3c:
    // 0x2b1a3c: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x2b1a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_2b1a40:
    // 0x2b1a40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b1a44:
    if (ctx->pc == 0x2B1A44u) {
        ctx->pc = 0x2B1A48u;
        goto label_2b1a48;
    }
    ctx->pc = 0x2B1A40u;
    {
        const bool branch_taken_0x2b1a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1a40) {
            ctx->pc = 0x2B1A54u;
            goto label_2b1a54;
        }
    }
    ctx->pc = 0x2B1A48u;
label_2b1a48:
    // 0x2b1a48: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b1a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b1a4c:
    // 0x2b1a4c: 0xc066fcc  jal         func_19BF30
label_2b1a50:
    if (ctx->pc == 0x2B1A50u) {
        ctx->pc = 0x2B1A50u;
            // 0x2b1a50: 0x87859b98  lh          $a1, -0x6468($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
        ctx->pc = 0x2B1A54u;
        goto label_2b1a54;
    }
    ctx->pc = 0x2B1A4Cu;
    SET_GPR_U32(ctx, 31, 0x2B1A54u);
    ctx->pc = 0x2B1A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1A4Cu;
            // 0x2b1a50: 0x87859b98  lh          $a1, -0x6468($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF30u;
    if (runtime->hasFunction(0x19BF30u)) {
        auto targetFn = runtime->lookupFunction(0x19BF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1A54u; }
        if (ctx->pc != 0x2B1A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DisableCharaChangeMask__16CUserDataManagerFi_0x19bf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1A54u; }
        if (ctx->pc != 0x2B1A54u) { return; }
    }
    ctx->pc = 0x2B1A54u;
label_2b1a54:
    // 0x2b1a54: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x2b1a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_2b1a58:
    // 0x2b1a58: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_2b1a5c:
    if (ctx->pc == 0x2B1A5Cu) {
        ctx->pc = 0x2B1A5Cu;
            // 0x2b1a5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A60u;
        goto label_2b1a60;
    }
    ctx->pc = 0x2B1A58u;
    {
        const bool branch_taken_0x2b1a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1A58u;
            // 0x2b1a5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a58) {
            ctx->pc = 0x2B1C50u;
            goto label_2b1c50;
        }
    }
    ctx->pc = 0x2B1A60u;
label_2b1a60:
    // 0x2b1a60: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b1a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b1a64:
    // 0x2b1a64: 0xc066e68  jal         func_19B9A0
label_2b1a68:
    if (ctx->pc == 0x2B1A68u) {
        ctx->pc = 0x2B1A68u;
            // 0x2b1a68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A6Cu;
        goto label_2b1a6c;
    }
    ctx->pc = 0x2B1A64u;
    SET_GPR_U32(ctx, 31, 0x2B1A6Cu);
    ctx->pc = 0x2B1A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1A64u;
            // 0x2b1a68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B9A0u;
    if (runtime->hasFunction(0x19B9A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1A6Cu; }
        if (ctx->pc != 0x2B1A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JoinPartyMember__16CUserDataManagerFi_0x19b9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1A6Cu; }
        if (ctx->pc != 0x2B1A6Cu) { return; }
    }
    ctx->pc = 0x2B1A6Cu;
label_2b1a6c:
    // 0x2b1a6c: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b1a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b1a70:
    // 0x2b1a70: 0xc066e68  jal         func_19B9A0
label_2b1a74:
    if (ctx->pc == 0x2B1A74u) {
        ctx->pc = 0x2B1A74u;
            // 0x2b1a74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B1A78u;
        goto label_2b1a78;
    }
    ctx->pc = 0x2B1A70u;
    SET_GPR_U32(ctx, 31, 0x2B1A78u);
    ctx->pc = 0x2B1A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1A70u;
            // 0x2b1a74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B9A0u;
    if (runtime->hasFunction(0x19B9A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1A78u; }
        if (ctx->pc != 0x2B1A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JoinPartyMember__16CUserDataManagerFi_0x19b9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1A78u; }
        if (ctx->pc != 0x2B1A78u) { return; }
    }
    ctx->pc = 0x2B1A78u;
label_2b1a78:
    // 0x2b1a78: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b1a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b1a7c:
    // 0x2b1a7c: 0xc066ea8  jal         func_19BAA0
label_2b1a80:
    if (ctx->pc == 0x2B1A80u) {
        ctx->pc = 0x2B1A80u;
            // 0x2b1a80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A84u;
        goto label_2b1a84;
    }
    ctx->pc = 0x2B1A7Cu;
    SET_GPR_U32(ctx, 31, 0x2B1A84u);
    ctx->pc = 0x2B1A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1A7Cu;
            // 0x2b1a80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAA0u;
    if (runtime->hasFunction(0x19BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1A84u; }
        if (ctx->pc != 0x2B1A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChange__16CUserDataManagerFi_0x19baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1A84u; }
        if (ctx->pc != 0x2B1A84u) { return; }
    }
    ctx->pc = 0x2B1A84u;
label_2b1a84:
    // 0x2b1a84: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b1a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b1a88:
    // 0x2b1a88: 0xc066ea8  jal         func_19BAA0
label_2b1a8c:
    if (ctx->pc == 0x2B1A8Cu) {
        ctx->pc = 0x2B1A8Cu;
            // 0x2b1a8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B1A90u;
        goto label_2b1a90;
    }
    ctx->pc = 0x2B1A88u;
    SET_GPR_U32(ctx, 31, 0x2B1A90u);
    ctx->pc = 0x2B1A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1A88u;
            // 0x2b1a8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAA0u;
    if (runtime->hasFunction(0x19BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1A90u; }
        if (ctx->pc != 0x2B1A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChange__16CUserDataManagerFi_0x19baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1A90u; }
        if (ctx->pc != 0x2B1A90u) { return; }
    }
    ctx->pc = 0x2B1A90u;
label_2b1a90:
    // 0x2b1a90: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b1a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b1a94:
    // 0x2b1a94: 0xc066ea8  jal         func_19BAA0
label_2b1a98:
    if (ctx->pc == 0x2B1A98u) {
        ctx->pc = 0x2B1A98u;
            // 0x2b1a98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B1A9Cu;
        goto label_2b1a9c;
    }
    ctx->pc = 0x2B1A94u;
    SET_GPR_U32(ctx, 31, 0x2B1A9Cu);
    ctx->pc = 0x2B1A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1A94u;
            // 0x2b1a98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAA0u;
    if (runtime->hasFunction(0x19BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1A9Cu; }
        if (ctx->pc != 0x2B1A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChange__16CUserDataManagerFi_0x19baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1A9Cu; }
        if (ctx->pc != 0x2B1A9Cu) { return; }
    }
    ctx->pc = 0x2B1A9Cu;
label_2b1a9c:
    // 0x2b1a9c: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b1a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b1aa0:
    // 0x2b1aa0: 0xc066ea8  jal         func_19BAA0
label_2b1aa4:
    if (ctx->pc == 0x2B1AA4u) {
        ctx->pc = 0x2B1AA4u;
            // 0x2b1aa4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B1AA8u;
        goto label_2b1aa8;
    }
    ctx->pc = 0x2B1AA0u;
    SET_GPR_U32(ctx, 31, 0x2B1AA8u);
    ctx->pc = 0x2B1AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1AA0u;
            // 0x2b1aa4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAA0u;
    if (runtime->hasFunction(0x19BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1AA8u; }
        if (ctx->pc != 0x2B1AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChange__16CUserDataManagerFi_0x19baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1AA8u; }
        if (ctx->pc != 0x2B1AA8u) { return; }
    }
    ctx->pc = 0x2B1AA8u;
label_2b1aa8:
    // 0x2b1aa8: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b1aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b1aac:
    // 0x2b1aac: 0xc066fc0  jal         func_19BF00
label_2b1ab0:
    if (ctx->pc == 0x2B1AB0u) {
        ctx->pc = 0x2B1AB0u;
            // 0x2b1ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1AB4u;
        goto label_2b1ab4;
    }
    ctx->pc = 0x2B1AACu;
    SET_GPR_U32(ctx, 31, 0x2B1AB4u);
    ctx->pc = 0x2B1AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1AACu;
            // 0x2b1ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (runtime->hasFunction(0x19BF00u)) {
        auto targetFn = runtime->lookupFunction(0x19BF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1AB4u; }
        if (ctx->pc != 0x2B1AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChangeMask__16CUserDataManagerFi_0x19bf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1AB4u; }
        if (ctx->pc != 0x2B1AB4u) { return; }
    }
    ctx->pc = 0x2B1AB4u;
label_2b1ab4:
    // 0x2b1ab4: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b1ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b1ab8:
    // 0x2b1ab8: 0xc066fc0  jal         func_19BF00
label_2b1abc:
    if (ctx->pc == 0x2B1ABCu) {
        ctx->pc = 0x2B1ABCu;
            // 0x2b1abc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B1AC0u;
        goto label_2b1ac0;
    }
    ctx->pc = 0x2B1AB8u;
    SET_GPR_U32(ctx, 31, 0x2B1AC0u);
    ctx->pc = 0x2B1ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1AB8u;
            // 0x2b1abc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (runtime->hasFunction(0x19BF00u)) {
        auto targetFn = runtime->lookupFunction(0x19BF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1AC0u; }
        if (ctx->pc != 0x2B1AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChangeMask__16CUserDataManagerFi_0x19bf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1AC0u; }
        if (ctx->pc != 0x2B1AC0u) { return; }
    }
    ctx->pc = 0x2B1AC0u;
label_2b1ac0:
    // 0x2b1ac0: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b1ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b1ac4:
    // 0x2b1ac4: 0xc066fc0  jal         func_19BF00
label_2b1ac8:
    if (ctx->pc == 0x2B1AC8u) {
        ctx->pc = 0x2B1AC8u;
            // 0x2b1ac8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B1ACCu;
        goto label_2b1acc;
    }
    ctx->pc = 0x2B1AC4u;
    SET_GPR_U32(ctx, 31, 0x2B1ACCu);
    ctx->pc = 0x2B1AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1AC4u;
            // 0x2b1ac8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (runtime->hasFunction(0x19BF00u)) {
        auto targetFn = runtime->lookupFunction(0x19BF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1ACCu; }
        if (ctx->pc != 0x2B1ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChangeMask__16CUserDataManagerFi_0x19bf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1ACCu; }
        if (ctx->pc != 0x2B1ACCu) { return; }
    }
    ctx->pc = 0x2B1ACCu;
label_2b1acc:
    // 0x2b1acc: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b1accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b1ad0:
    // 0x2b1ad0: 0xc066fc0  jal         func_19BF00
label_2b1ad4:
    if (ctx->pc == 0x2B1AD4u) {
        ctx->pc = 0x2B1AD4u;
            // 0x2b1ad4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B1AD8u;
        goto label_2b1ad8;
    }
    ctx->pc = 0x2B1AD0u;
    SET_GPR_U32(ctx, 31, 0x2B1AD8u);
    ctx->pc = 0x2B1AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1AD0u;
            // 0x2b1ad4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (runtime->hasFunction(0x19BF00u)) {
        auto targetFn = runtime->lookupFunction(0x19BF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1AD8u; }
        if (ctx->pc != 0x2B1AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChangeMask__16CUserDataManagerFi_0x19bf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1AD8u; }
        if (ctx->pc != 0x2B1AD8u) { return; }
    }
    ctx->pc = 0x2B1AD8u;
label_2b1ad8:
    // 0x2b1ad8: 0x1000005c  b           . + 4 + (0x5C << 2)
label_2b1adc:
    if (ctx->pc == 0x2B1ADCu) {
        ctx->pc = 0x2B1AE0u;
        goto label_2b1ae0;
    }
    ctx->pc = 0x2B1AD8u;
    {
        const bool branch_taken_0x2b1ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1ad8) {
            ctx->pc = 0x2B1C4Cu;
            goto label_2b1c4c;
        }
    }
    ctx->pc = 0x2B1AE0u;
label_2b1ae0:
    // 0x2b1ae0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b1ae4:
    if (ctx->pc == 0x2B1AE4u) {
        ctx->pc = 0x2B1AE4u;
            // 0x2b1ae4: 0x32a20002  andi        $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x2B1AE8u;
        goto label_2b1ae8;
    }
    ctx->pc = 0x2B1AE0u;
    {
        const bool branch_taken_0x2b1ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1AE0u;
            // 0x2b1ae4: 0x32a20002  andi        $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ae0) {
            ctx->pc = 0x2B1AF8u;
            goto label_2b1af8;
        }
    }
    ctx->pc = 0x2B1AE8u;
label_2b1ae8:
    // 0x2b1ae8: 0x83829b8c  lb          $v0, -0x6474($gp)
    ctx->pc = 0x2b1ae8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941580)));
label_2b1aec:
    // 0x2b1aec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b1aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2b1af0:
    // 0x2b1af0: 0xa3829b8c  sb          $v0, -0x6474($gp)
    ctx->pc = 0x2b1af0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941580), (uint8_t)GPR_U32(ctx, 2));
label_2b1af4:
    // 0x2b1af4: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x2b1af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
label_2b1af8:
    // 0x2b1af8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b1afc:
    if (ctx->pc == 0x2B1AFCu) {
        ctx->pc = 0x2B1B00u;
        goto label_2b1b00;
    }
    ctx->pc = 0x2B1AF8u;
    {
        const bool branch_taken_0x2b1af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1af8) {
            ctx->pc = 0x2B1B0Cu;
            goto label_2b1b0c;
        }
    }
    ctx->pc = 0x2B1B00u;
label_2b1b00:
    // 0x2b1b00: 0x83829b8c  lb          $v0, -0x6474($gp)
    ctx->pc = 0x2b1b00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941580)));
label_2b1b04:
    // 0x2b1b04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b1b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b1b08:
    // 0x2b1b08: 0xa3829b8c  sb          $v0, -0x6474($gp)
    ctx->pc = 0x2b1b08u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941580), (uint8_t)GPR_U32(ctx, 2));
label_2b1b0c:
    // 0x2b1b0c: 0x83829b8c  lb          $v0, -0x6474($gp)
    ctx->pc = 0x2b1b0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941580)));
label_2b1b10:
    // 0x2b1b10: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_2b1b14:
    if (ctx->pc == 0x2B1B14u) {
        ctx->pc = 0x2B1B14u;
            // 0x2b1b14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B1B18u;
        goto label_2b1b18;
    }
    ctx->pc = 0x2B1B10u;
    {
        const bool branch_taken_0x2b1b10 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B1B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1B10u;
            // 0x2b1b14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b10) {
            ctx->pc = 0x2B1B1Cu;
            goto label_2b1b1c;
        }
    }
    ctx->pc = 0x2B1B18u;
label_2b1b18:
    // 0x2b1b18: 0xa3829b8c  sb          $v0, -0x6474($gp)
    ctx->pc = 0x2b1b18u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941580), (uint8_t)GPR_U32(ctx, 2));
label_2b1b1c:
    // 0x2b1b1c: 0x83829b8c  lb          $v0, -0x6474($gp)
    ctx->pc = 0x2b1b1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941580)));
label_2b1b20:
    // 0x2b1b20: 0x2842001b  slti        $v0, $v0, 0x1B
    ctx->pc = 0x2b1b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)27) ? 1 : 0);
label_2b1b24:
    // 0x2b1b24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b1b28:
    if (ctx->pc == 0x2B1B28u) {
        ctx->pc = 0x2B1B28u;
            // 0x2b1b28: 0x32a20008  andi        $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x2B1B2Cu;
        goto label_2b1b2c;
    }
    ctx->pc = 0x2B1B24u;
    {
        const bool branch_taken_0x2b1b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1B24u;
            // 0x2b1b28: 0x32a20008  andi        $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b24) {
            ctx->pc = 0x2B1B38u;
            goto label_2b1b38;
        }
    }
    ctx->pc = 0x2B1B2Cu;
label_2b1b2c:
    // 0x2b1b2c: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x2b1b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2b1b30:
    // 0x2b1b30: 0xa3829b8c  sb          $v0, -0x6474($gp)
    ctx->pc = 0x2b1b30u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941580), (uint8_t)GPR_U32(ctx, 2));
label_2b1b34:
    // 0x2b1b34: 0x32a20008  andi        $v0, $s5, 0x8
    ctx->pc = 0x2b1b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
label_2b1b38:
    // 0x2b1b38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b1b3c:
    if (ctx->pc == 0x2B1B3Cu) {
        ctx->pc = 0x2B1B3Cu;
            // 0x2b1b3c: 0x32a20004  andi        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x2B1B40u;
        goto label_2b1b40;
    }
    ctx->pc = 0x2B1B38u;
    {
        const bool branch_taken_0x2b1b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1B38u;
            // 0x2b1b3c: 0x32a20004  andi        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b38) {
            ctx->pc = 0x2B1B50u;
            goto label_2b1b50;
        }
    }
    ctx->pc = 0x2B1B40u;
label_2b1b40:
    // 0x2b1b40: 0x83829b90  lb          $v0, -0x6470($gp)
    ctx->pc = 0x2b1b40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941584)));
label_2b1b44:
    // 0x2b1b44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b1b48:
    // 0x2b1b48: 0xa3829b90  sb          $v0, -0x6470($gp)
    ctx->pc = 0x2b1b48u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941584), (uint8_t)GPR_U32(ctx, 2));
label_2b1b4c:
    // 0x2b1b4c: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x2b1b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_2b1b50:
    // 0x2b1b50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b1b54:
    if (ctx->pc == 0x2B1B54u) {
        ctx->pc = 0x2B1B58u;
        goto label_2b1b58;
    }
    ctx->pc = 0x2B1B50u;
    {
        const bool branch_taken_0x2b1b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1b50) {
            ctx->pc = 0x2B1B64u;
            goto label_2b1b64;
        }
    }
    ctx->pc = 0x2B1B58u;
label_2b1b58:
    // 0x2b1b58: 0x83829b90  lb          $v0, -0x6470($gp)
    ctx->pc = 0x2b1b58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941584)));
label_2b1b5c:
    // 0x2b1b5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b1b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2b1b60:
    // 0x2b1b60: 0xa3829b90  sb          $v0, -0x6470($gp)
    ctx->pc = 0x2b1b60u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941584), (uint8_t)GPR_U32(ctx, 2));
label_2b1b64:
    // 0x2b1b64: 0x83829b90  lb          $v0, -0x6470($gp)
    ctx->pc = 0x2b1b64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941584)));
label_2b1b68:
    // 0x2b1b68: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2b1b6c:
    if (ctx->pc == 0x2B1B6Cu) {
        ctx->pc = 0x2B1B70u;
        goto label_2b1b70;
    }
    ctx->pc = 0x2B1B68u;
    {
        const bool branch_taken_0x2b1b68 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2b1b68) {
            ctx->pc = 0x2B1B74u;
            goto label_2b1b74;
        }
    }
    ctx->pc = 0x2B1B70u;
label_2b1b70:
    // 0x2b1b70: 0xa3809b90  sb          $zero, -0x6470($gp)
    ctx->pc = 0x2b1b70u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941584), (uint8_t)GPR_U32(ctx, 0));
label_2b1b74:
    // 0x2b1b74: 0x83829b90  lb          $v0, -0x6470($gp)
    ctx->pc = 0x2b1b74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941584)));
label_2b1b78:
    // 0x2b1b78: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2b1b78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2b1b7c:
    // 0x2b1b7c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_2b1b80:
    if (ctx->pc == 0x2B1B80u) {
        ctx->pc = 0x2B1B80u;
            // 0x2b1b80: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x2B1B84u;
        goto label_2b1b84;
    }
    ctx->pc = 0x2B1B7Cu;
    {
        const bool branch_taken_0x2b1b7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1B7Cu;
            // 0x2b1b80: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b7c) {
            ctx->pc = 0x2B1B90u;
            goto label_2b1b90;
        }
    }
    ctx->pc = 0x2B1B84u;
label_2b1b84:
    // 0x2b1b84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1b88:
    // 0x2b1b88: 0xa3829b90  sb          $v0, -0x6470($gp)
    ctx->pc = 0x2b1b88u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941584), (uint8_t)GPR_U32(ctx, 2));
label_2b1b8c:
    // 0x2b1b8c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2b1b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_2b1b90:
    // 0x2b1b90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b1b94:
    if (ctx->pc == 0x2B1B94u) {
        ctx->pc = 0x2B1B94u;
            // 0x2b1b94: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x2B1B98u;
        goto label_2b1b98;
    }
    ctx->pc = 0x2B1B90u;
    {
        const bool branch_taken_0x2b1b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1B90u;
            // 0x2b1b94: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b90) {
            ctx->pc = 0x2B1BA0u;
            goto label_2b1ba0;
        }
    }
    ctx->pc = 0x2B1B98u;
label_2b1b98:
    // 0x2b1b98: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_2b1b9c:
    if (ctx->pc == 0x2B1B9Cu) {
        ctx->pc = 0x2B1BA0u;
        goto label_2b1ba0;
    }
    ctx->pc = 0x2B1B98u;
    {
        const bool branch_taken_0x2b1b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1b98) {
            ctx->pc = 0x2B1C4Cu;
            goto label_2b1c4c;
        }
    }
    ctx->pc = 0x2B1BA0u;
label_2b1ba0:
    // 0x2b1ba0: 0xc065af8  jal         func_196BE0
label_2b1ba4:
    if (ctx->pc == 0x2B1BA4u) {
        ctx->pc = 0x2B1BA4u;
            // 0x2b1ba4: 0x83909b8c  lb          $s0, -0x6474($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941580)));
        ctx->pc = 0x2B1BA8u;
        goto label_2b1ba8;
    }
    ctx->pc = 0x2B1BA0u;
    SET_GPR_U32(ctx, 31, 0x2B1BA8u);
    ctx->pc = 0x2B1BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1BA0u;
            // 0x2b1ba4: 0x83909b8c  lb          $s0, -0x6474($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941580)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1BA8u; }
        if (ctx->pc != 0x2B1BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1BA8u; }
        if (ctx->pc != 0x2B1BA8u) { return; }
    }
    ctx->pc = 0x2B1BA8u;
label_2b1ba8:
    // 0x2b1ba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b1ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1bac:
    // 0x2b1bac: 0xc06723c  jal         func_19C8F0
label_2b1bb0:
    if (ctx->pc == 0x2B1BB0u) {
        ctx->pc = 0x2B1BB0u;
            // 0x2b1bb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1BB4u;
        goto label_2b1bb4;
    }
    ctx->pc = 0x2B1BACu;
    SET_GPR_U32(ctx, 31, 0x2B1BB4u);
    ctx->pc = 0x2B1BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1BACu;
            // 0x2b1bb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F0u;
    if (runtime->hasFunction(0x19C8F0u)) {
        auto targetFn = runtime->lookupFunction(0x19C8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1BB4u; }
        if (ctx->pc != 0x2B1BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaStatus__16CUserDataManagerFi_0x19c8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1BB4u; }
        if (ctx->pc != 0x2B1BB4u) { return; }
    }
    ctx->pc = 0x2B1BB4u;
label_2b1bb4:
    // 0x2b1bb4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2b1bb8:
    if (ctx->pc == 0x2B1BB8u) {
        ctx->pc = 0x2B1BBCu;
        goto label_2b1bbc;
    }
    ctx->pc = 0x2B1BB4u;
    {
        const bool branch_taken_0x2b1bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1bb4) {
            ctx->pc = 0x2B1BD8u;
            goto label_2b1bd8;
        }
    }
    ctx->pc = 0x2B1BBCu;
label_2b1bbc:
    // 0x2b1bbc: 0xc065af8  jal         func_196BE0
label_2b1bc0:
    if (ctx->pc == 0x2B1BC0u) {
        ctx->pc = 0x2B1BC4u;
        goto label_2b1bc4;
    }
    ctx->pc = 0x2B1BBCu;
    SET_GPR_U32(ctx, 31, 0x2B1BC4u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1BC4u; }
        if (ctx->pc != 0x2B1BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1BC4u; }
        if (ctx->pc != 0x2B1BC4u) { return; }
    }
    ctx->pc = 0x2B1BC4u;
label_2b1bc4:
    // 0x2b1bc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b1bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1bc8:
    // 0x2b1bc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1bcc:
    // 0x2b1bcc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2b1bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2b1bd0:
    // 0x2b1bd0: 0xc0671b8  jal         func_19C6E0
label_2b1bd4:
    if (ctx->pc == 0x2B1BD4u) {
        ctx->pc = 0x2B1BD4u;
            // 0x2b1bd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B1BD8u;
        goto label_2b1bd8;
    }
    ctx->pc = 0x2B1BD0u;
    SET_GPR_U32(ctx, 31, 0x2B1BD8u);
    ctx->pc = 0x2B1BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1BD0u;
            // 0x2b1bd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C6E0u;
    if (runtime->hasFunction(0x19C6E0u)) {
        auto targetFn = runtime->lookupFunction(0x19C6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1BD8u; }
        if (ctx->pc != 0x2B1BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JoinPartyChara__16CUserDataManagerFiii_0x19c6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1BD8u; }
        if (ctx->pc != 0x2B1BD8u) { return; }
    }
    ctx->pc = 0x2B1BD8u;
label_2b1bd8:
    // 0x2b1bd8: 0x83829b90  lb          $v0, -0x6470($gp)
    ctx->pc = 0x2b1bd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941584)));
label_2b1bdc:
    // 0x2b1bdc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2b1be0:
    if (ctx->pc == 0x2B1BE0u) {
        ctx->pc = 0x2B1BE4u;
        goto label_2b1be4;
    }
    ctx->pc = 0x2B1BDCu;
    {
        const bool branch_taken_0x2b1bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1bdc) {
            ctx->pc = 0x2B1BFCu;
            goto label_2b1bfc;
        }
    }
    ctx->pc = 0x2B1BE4u;
label_2b1be4:
    // 0x2b1be4: 0xc065af8  jal         func_196BE0
label_2b1be8:
    if (ctx->pc == 0x2B1BE8u) {
        ctx->pc = 0x2B1BECu;
        goto label_2b1bec;
    }
    ctx->pc = 0x2B1BE4u;
    SET_GPR_U32(ctx, 31, 0x2B1BECu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1BECu; }
        if (ctx->pc != 0x2B1BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1BECu; }
        if (ctx->pc != 0x2B1BECu) { return; }
    }
    ctx->pc = 0x2B1BECu;
label_2b1bec:
    // 0x2b1bec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b1becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1bf0:
    // 0x2b1bf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1bf4:
    // 0x2b1bf4: 0xc0671d4  jal         func_19C750
label_2b1bf8:
    if (ctx->pc == 0x2B1BF8u) {
        ctx->pc = 0x2B1BF8u;
            // 0x2b1bf8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B1BFCu;
        goto label_2b1bfc;
    }
    ctx->pc = 0x2B1BF4u;
    SET_GPR_U32(ctx, 31, 0x2B1BFCu);
    ctx->pc = 0x2B1BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1BF4u;
            // 0x2b1bf8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C750u;
    if (runtime->hasFunction(0x19C750u)) {
        auto targetFn = runtime->lookupFunction(0x19C750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1BFCu; }
        if (ctx->pc != 0x2B1BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartyCharaStatus__16CUserDataManagerFii_0x19c750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1BFCu; }
        if (ctx->pc != 0x2B1BFCu) { return; }
    }
    ctx->pc = 0x2B1BFCu;
label_2b1bfc:
    // 0x2b1bfc: 0x83839b90  lb          $v1, -0x6470($gp)
    ctx->pc = 0x2b1bfcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941584)));
label_2b1c00:
    // 0x2b1c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1c04:
    // 0x2b1c04: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2b1c08:
    if (ctx->pc == 0x2B1C08u) {
        ctx->pc = 0x2B1C0Cu;
        goto label_2b1c0c;
    }
    ctx->pc = 0x2B1C04u;
    {
        const bool branch_taken_0x2b1c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b1c04) {
            ctx->pc = 0x2B1C24u;
            goto label_2b1c24;
        }
    }
    ctx->pc = 0x2B1C0Cu;
label_2b1c0c:
    // 0x2b1c0c: 0xc065af8  jal         func_196BE0
label_2b1c10:
    if (ctx->pc == 0x2B1C10u) {
        ctx->pc = 0x2B1C14u;
        goto label_2b1c14;
    }
    ctx->pc = 0x2B1C0Cu;
    SET_GPR_U32(ctx, 31, 0x2B1C14u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1C14u; }
        if (ctx->pc != 0x2B1C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1C14u; }
        if (ctx->pc != 0x2B1C14u) { return; }
    }
    ctx->pc = 0x2B1C14u;
label_2b1c14:
    // 0x2b1c14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b1c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1c18:
    // 0x2b1c18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1c1c:
    // 0x2b1c1c: 0xc0671d4  jal         func_19C750
label_2b1c20:
    if (ctx->pc == 0x2B1C20u) {
        ctx->pc = 0x2B1C20u;
            // 0x2b1c20: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B1C24u;
        goto label_2b1c24;
    }
    ctx->pc = 0x2B1C1Cu;
    SET_GPR_U32(ctx, 31, 0x2B1C24u);
    ctx->pc = 0x2B1C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1C1Cu;
            // 0x2b1c20: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C750u;
    if (runtime->hasFunction(0x19C750u)) {
        auto targetFn = runtime->lookupFunction(0x19C750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1C24u; }
        if (ctx->pc != 0x2B1C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartyCharaStatus__16CUserDataManagerFii_0x19c750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1C24u; }
        if (ctx->pc != 0x2B1C24u) { return; }
    }
    ctx->pc = 0x2B1C24u;
label_2b1c24:
    // 0x2b1c24: 0x83839b90  lb          $v1, -0x6470($gp)
    ctx->pc = 0x2b1c24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941584)));
label_2b1c28:
    // 0x2b1c28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b1c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b1c2c:
    // 0x2b1c2c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2b1c30:
    if (ctx->pc == 0x2B1C30u) {
        ctx->pc = 0x2B1C34u;
        goto label_2b1c34;
    }
    ctx->pc = 0x2B1C2Cu;
    {
        const bool branch_taken_0x2b1c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b1c2c) {
            ctx->pc = 0x2B1C4Cu;
            goto label_2b1c4c;
        }
    }
    ctx->pc = 0x2B1C34u;
label_2b1c34:
    // 0x2b1c34: 0xc065af8  jal         func_196BE0
label_2b1c38:
    if (ctx->pc == 0x2B1C38u) {
        ctx->pc = 0x2B1C3Cu;
        goto label_2b1c3c;
    }
    ctx->pc = 0x2B1C34u;
    SET_GPR_U32(ctx, 31, 0x2B1C3Cu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1C3Cu; }
        if (ctx->pc != 0x2B1C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1C3Cu; }
        if (ctx->pc != 0x2B1C3Cu) { return; }
    }
    ctx->pc = 0x2B1C3Cu;
label_2b1c3c:
    // 0x2b1c3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b1c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1c40:
    // 0x2b1c40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1c44:
    // 0x2b1c44: 0xc0671d4  jal         func_19C750
label_2b1c48:
    if (ctx->pc == 0x2B1C48u) {
        ctx->pc = 0x2B1C48u;
            // 0x2b1c48: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2B1C4Cu;
        goto label_2b1c4c;
    }
    ctx->pc = 0x2B1C44u;
    SET_GPR_U32(ctx, 31, 0x2B1C4Cu);
    ctx->pc = 0x2B1C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1C44u;
            // 0x2b1c48: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C750u;
    if (runtime->hasFunction(0x19C750u)) {
        auto targetFn = runtime->lookupFunction(0x19C750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1C4Cu; }
        if (ctx->pc != 0x2B1C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartyCharaStatus__16CUserDataManagerFii_0x19c750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1C4Cu; }
        if (ctx->pc != 0x2B1C4Cu) { return; }
    }
    ctx->pc = 0x2B1C4Cu;
label_2b1c4c:
    // 0x2b1c4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b1c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1c50:
    // 0x2b1c50: 0x10000612  b           . + 4 + (0x612 << 2)
label_2b1c54:
    if (ctx->pc == 0x2B1C54u) {
        ctx->pc = 0x2B1C54u;
            // 0x2b1c54: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2B1C58u;
        goto label_2b1c58;
    }
    ctx->pc = 0x2B1C50u;
    {
        const bool branch_taken_0x2b1c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1C50u;
            // 0x2b1c54: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c50) {
            ctx->pc = 0x2B349Cu;
            goto label_2b349c;
        }
    }
    ctx->pc = 0x2B1C58u;
label_2b1c58:
    // 0x2b1c58: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x2b1c58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2b1c5c:
    // 0x2b1c5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b1c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b1c60:
    // 0x2b1c60: 0x106200c3  beq         $v1, $v0, . + 4 + (0xC3 << 2)
label_2b1c64:
    if (ctx->pc == 0x2B1C64u) {
        ctx->pc = 0x2B1C64u;
            // 0x2b1c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C68u;
        goto label_2b1c68;
    }
    ctx->pc = 0x2B1C60u;
    {
        const bool branch_taken_0x2b1c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B1C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1C60u;
            // 0x2b1c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c60) {
            ctx->pc = 0x2B1F70u;
            goto label_2b1f70;
        }
    }
    ctx->pc = 0x2B1C68u;
label_2b1c68:
    // 0x2b1c68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b1c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1c6c:
    // 0x2b1c6c: 0x10660088  beq         $v1, $a2, . + 4 + (0x88 << 2)
label_2b1c70:
    if (ctx->pc == 0x2B1C70u) {
        ctx->pc = 0x2B1C74u;
        goto label_2b1c74;
    }
    ctx->pc = 0x2B1C6Cu;
    {
        const bool branch_taken_0x2b1c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x2b1c6c) {
            ctx->pc = 0x2B1E90u;
            goto label_2b1e90;
        }
    }
    ctx->pc = 0x2B1C74u;
label_2b1c74:
    // 0x2b1c74: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b1c78:
    if (ctx->pc == 0x2B1C78u) {
        ctx->pc = 0x2B1C7Cu;
        goto label_2b1c7c;
    }
    ctx->pc = 0x2B1C74u;
    {
        const bool branch_taken_0x2b1c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1c74) {
            ctx->pc = 0x2B1C84u;
            goto label_2b1c84;
        }
    }
    ctx->pc = 0x2B1C7Cu;
label_2b1c7c:
    // 0x2b1c7c: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_2b1c80:
    if (ctx->pc == 0x2B1C80u) {
        ctx->pc = 0x2B1C84u;
        goto label_2b1c84;
    }
    ctx->pc = 0x2B1C7Cu;
    {
        const bool branch_taken_0x2b1c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1c7c) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1C84u;
label_2b1c84:
    // 0x2b1c84: 0x8e820110  lw          $v0, 0x110($s4)
    ctx->pc = 0x2b1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_2b1c88:
    // 0x2b1c88: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x2b1c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_2b1c8c:
    // 0x2b1c8c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2b1c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b1c90:
    // 0x2b1c90: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2b1c94:
    if (ctx->pc == 0x2B1C94u) {
        ctx->pc = 0x2B1C94u;
            // 0x2b1c94: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->pc = 0x2B1C98u;
        goto label_2b1c98;
    }
    ctx->pc = 0x2B1C90u;
    {
        const bool branch_taken_0x2b1c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1C90u;
            // 0x2b1c94: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c90) {
            ctx->pc = 0x2B1C9Cu;
            goto label_2b1c9c;
        }
    }
    ctx->pc = 0x2B1C98u;
label_2b1c98:
    // 0x2b1c98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b1c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1c9c:
    // 0x2b1c9c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2b1ca0:
    if (ctx->pc == 0x2B1CA0u) {
        ctx->pc = 0x2B1CA0u;
            // 0x2b1ca0: 0x32a20008  andi        $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x2B1CA4u;
        goto label_2b1ca4;
    }
    ctx->pc = 0x2B1C9Cu;
    {
        const bool branch_taken_0x2b1c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1C9Cu;
            // 0x2b1ca0: 0x32a20008  andi        $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c9c) {
            ctx->pc = 0x2B1CB8u;
            goto label_2b1cb8;
        }
    }
    ctx->pc = 0x2B1CA4u;
label_2b1ca4:
    // 0x2b1ca4: 0x32a20008  andi        $v0, $s5, 0x8
    ctx->pc = 0x2b1ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
label_2b1ca8:
    // 0x2b1ca8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2b1cac:
    if (ctx->pc == 0x2B1CACu) {
        ctx->pc = 0x2B1CB0u;
        goto label_2b1cb0;
    }
    ctx->pc = 0x2B1CA8u;
    {
        const bool branch_taken_0x2b1ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1ca8) {
            ctx->pc = 0x2B1CB4u;
            goto label_2b1cb4;
        }
    }
    ctx->pc = 0x2B1CB0u;
label_2b1cb0:
    // 0x2b1cb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b1cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1cb4:
    // 0x2b1cb4: 0x32a20008  andi        $v0, $s5, 0x8
    ctx->pc = 0x2b1cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
label_2b1cb8:
    // 0x2b1cb8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2b1cbc:
    if (ctx->pc == 0x2B1CBCu) {
        ctx->pc = 0x2B1CBCu;
            // 0x2b1cbc: 0x32a50002  andi        $a1, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x2B1CC0u;
        goto label_2b1cc0;
    }
    ctx->pc = 0x2B1CB8u;
    {
        const bool branch_taken_0x2b1cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1CB8u;
            // 0x2b1cbc: 0x32a50002  andi        $a1, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1cb8) {
            ctx->pc = 0x2B1CC4u;
            goto label_2b1cc4;
        }
    }
    ctx->pc = 0x2B1CC0u;
label_2b1cc0:
    // 0x2b1cc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b1cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b1cc4:
    // 0x2b1cc4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_2b1cc8:
    if (ctx->pc == 0x2B1CC8u) {
        ctx->pc = 0x2B1CCCu;
        goto label_2b1ccc;
    }
    ctx->pc = 0x2B1CC4u;
    {
        const bool branch_taken_0x2b1cc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1cc4) {
            ctx->pc = 0x2B1CD8u;
            goto label_2b1cd8;
        }
    }
    ctx->pc = 0x2B1CCCu;
label_2b1ccc:
    // 0x2b1ccc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2b1cd0:
    if (ctx->pc == 0x2B1CD0u) {
        ctx->pc = 0x2B1CD4u;
        goto label_2b1cd4;
    }
    ctx->pc = 0x2B1CCCu;
    {
        const bool branch_taken_0x2b1ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1ccc) {
            ctx->pc = 0x2B1CD8u;
            goto label_2b1cd8;
        }
    }
    ctx->pc = 0x2B1CD4u;
label_2b1cd4:
    // 0x2b1cd4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b1cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b1cd8:
    // 0x2b1cd8: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_2b1cdc:
    if (ctx->pc == 0x2B1CDCu) {
        ctx->pc = 0x2B1CE0u;
        goto label_2b1ce0;
    }
    ctx->pc = 0x2B1CD8u;
    {
        const bool branch_taken_0x2b1cd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1cd8) {
            ctx->pc = 0x2B1CE4u;
            goto label_2b1ce4;
        }
    }
    ctx->pc = 0x2B1CE0u;
label_2b1ce0:
    // 0x2b1ce0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b1ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b1ce4:
    // 0x2b1ce4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_2b1ce8:
    if (ctx->pc == 0x2B1CE8u) {
        ctx->pc = 0x2B1CE8u;
            // 0x2b1ce8: 0x32a20004  andi        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x2B1CECu;
        goto label_2b1cec;
    }
    ctx->pc = 0x2B1CE4u;
    {
        const bool branch_taken_0x2b1ce4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1CE4u;
            // 0x2b1ce8: 0x32a20004  andi        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ce4) {
            ctx->pc = 0x2B1D00u;
            goto label_2b1d00;
        }
    }
    ctx->pc = 0x2B1CECu;
label_2b1cec:
    // 0x2b1cec: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x2b1cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_2b1cf0:
    // 0x2b1cf0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2b1cf4:
    if (ctx->pc == 0x2B1CF4u) {
        ctx->pc = 0x2B1CF8u;
        goto label_2b1cf8;
    }
    ctx->pc = 0x2B1CF0u;
    {
        const bool branch_taken_0x2b1cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1cf0) {
            ctx->pc = 0x2B1CFCu;
            goto label_2b1cfc;
        }
    }
    ctx->pc = 0x2B1CF8u;
label_2b1cf8:
    // 0x2b1cf8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b1cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b1cfc:
    // 0x2b1cfc: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x2b1cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_2b1d00:
    // 0x2b1d00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2b1d04:
    if (ctx->pc == 0x2B1D04u) {
        ctx->pc = 0x2B1D08u;
        goto label_2b1d08;
    }
    ctx->pc = 0x2B1D00u;
    {
        const bool branch_taken_0x2b1d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1d00) {
            ctx->pc = 0x2B1D0Cu;
            goto label_2b1d0c;
        }
    }
    ctx->pc = 0x2B1D08u;
label_2b1d08:
    // 0x2b1d08: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2b1d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2b1d0c:
    // 0x2b1d0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2b1d10:
    if (ctx->pc == 0x2B1D10u) {
        ctx->pc = 0x2B1D14u;
        goto label_2b1d14;
    }
    ctx->pc = 0x2B1D0Cu;
    {
        const bool branch_taken_0x2b1d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1d0c) {
            ctx->pc = 0x2B1D20u;
            goto label_2b1d20;
        }
    }
    ctx->pc = 0x2B1D14u;
label_2b1d14:
    // 0x2b1d14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b1d18:
    if (ctx->pc == 0x2B1D18u) {
        ctx->pc = 0x2B1D18u;
            // 0x2b1d18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B1D1Cu;
        goto label_2b1d1c;
    }
    ctx->pc = 0x2B1D14u;
    {
        const bool branch_taken_0x2b1d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1D14u;
            // 0x2b1d18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d14) {
            ctx->pc = 0x2B1D24u;
            goto label_2b1d24;
        }
    }
    ctx->pc = 0x2B1D1Cu;
label_2b1d1c:
    // 0x2b1d1c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2b1d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2b1d20:
    // 0x2b1d20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b1d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b1d24:
    // 0x2b1d24: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_2b1d28:
    if (ctx->pc == 0x2B1D28u) {
        ctx->pc = 0x2B1D2Cu;
        goto label_2b1d2c;
    }
    ctx->pc = 0x2B1D24u;
    {
        const bool branch_taken_0x2b1d24 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2b1d24) {
            ctx->pc = 0x2B1D4Cu;
            goto label_2b1d4c;
        }
    }
    ctx->pc = 0x2B1D2Cu;
label_2b1d2c:
    // 0x2b1d2c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2b1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2b1d30:
    // 0x2b1d30: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2b1d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_2b1d34:
    // 0x2b1d34: 0x24634770  addiu       $v1, $v1, 0x4770
    ctx->pc = 0x2b1d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18288));
label_2b1d38:
    // 0x2b1d38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b1d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b1d3c:
    // 0x2b1d3c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2b1d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2b1d40:
    // 0x2b1d40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b1d44:
    // 0x2b1d44: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2b1d44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b1d48:
    // 0x2b1d48: 0x0  nop
    ctx->pc = 0x2b1d48u;
    // NOP
label_2b1d4c:
    // 0x2b1d4c: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
label_2b1d50:
    if (ctx->pc == 0x2B1D50u) {
        ctx->pc = 0x2B1D54u;
        goto label_2b1d54;
    }
    ctx->pc = 0x2B1D4Cu;
    {
        const bool branch_taken_0x2b1d4c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2b1d4c) {
            ctx->pc = 0x2B1D58u;
            goto label_2b1d58;
        }
    }
    ctx->pc = 0x2B1D54u;
label_2b1d54:
    // 0x2b1d54: 0xae820110  sw          $v0, 0x110($s4)
    ctx->pc = 0x2b1d54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 2));
label_2b1d58:
    // 0x2b1d58: 0x8e830110  lw          $v1, 0x110($s4)
    ctx->pc = 0x2b1d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_2b1d5c:
    // 0x2b1d5c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2b1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2b1d60:
    // 0x2b1d60: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
label_2b1d64:
    if (ctx->pc == 0x2B1D64u) {
        ctx->pc = 0x2B1D64u;
            // 0x2b1d64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B1D68u;
        goto label_2b1d68;
    }
    ctx->pc = 0x2B1D60u;
    {
        const bool branch_taken_0x2b1d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B1D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1D60u;
            // 0x2b1d64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d60) {
            ctx->pc = 0x2B1DACu;
            goto label_2b1dac;
        }
    }
    ctx->pc = 0x2B1D68u;
label_2b1d68:
    // 0x2b1d68: 0xc094274  jal         func_2509D0
label_2b1d6c:
    if (ctx->pc == 0x2B1D6Cu) {
        ctx->pc = 0x2B1D6Cu;
            // 0x2b1d6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D70u;
        goto label_2b1d70;
    }
    ctx->pc = 0x2B1D68u;
    SET_GPR_U32(ctx, 31, 0x2B1D70u);
    ctx->pc = 0x2B1D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1D68u;
            // 0x2b1d6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1D70u; }
        if (ctx->pc != 0x2B1D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1D70u; }
        if (ctx->pc != 0x2B1D70u) { return; }
    }
    ctx->pc = 0x2B1D70u;
label_2b1d70:
    // 0x2b1d70: 0x8e830110  lw          $v1, 0x110($s4)
    ctx->pc = 0x2b1d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_2b1d74:
    // 0x2b1d74: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b1d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b1d78:
    // 0x2b1d78: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2b1d7c:
    if (ctx->pc == 0x2B1D7Cu) {
        ctx->pc = 0x2B1D7Cu;
            // 0x2b1d7c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2B1D80u;
        goto label_2b1d80;
    }
    ctx->pc = 0x2B1D78u;
    {
        const bool branch_taken_0x2b1d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B1D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1D78u;
            // 0x2b1d7c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d78) {
            ctx->pc = 0x2B1D8Cu;
            goto label_2b1d8c;
        }
    }
    ctx->pc = 0x2B1D80u;
label_2b1d80:
    // 0x2b1d80: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x2b1d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
label_2b1d84:
    // 0x2b1d84: 0xc054ba8  jal         func_152EA0
label_2b1d88:
    if (ctx->pc == 0x2B1D88u) {
        ctx->pc = 0x2B1D88u;
            // 0x2b1d88: 0x8e850248  lw          $a1, 0x248($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 584)));
        ctx->pc = 0x2B1D8Cu;
        goto label_2b1d8c;
    }
    ctx->pc = 0x2B1D84u;
    SET_GPR_U32(ctx, 31, 0x2B1D8Cu);
    ctx->pc = 0x2B1D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1D84u;
            // 0x2b1d88: 0x8e850248  lw          $a1, 0x248($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 584)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1D8Cu; }
        if (ctx->pc != 0x2B1D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1D8Cu; }
        if (ctx->pc != 0x2B1D8Cu) { return; }
    }
    ctx->pc = 0x2B1D8Cu;
label_2b1d8c:
    // 0x2b1d8c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2b1d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2b1d90:
    // 0x2b1d90: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b1d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b1d94:
    // 0x2b1d94: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_2b1d98:
    if (ctx->pc == 0x2B1D98u) {
        ctx->pc = 0x2B1D98u;
            // 0x2b1d98: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2B1D9Cu;
        goto label_2b1d9c;
    }
    ctx->pc = 0x2B1D94u;
    {
        const bool branch_taken_0x2b1d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B1D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1D94u;
            // 0x2b1d98: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d94) {
            ctx->pc = 0x2B1DA8u;
            goto label_2b1da8;
        }
    }
    ctx->pc = 0x2B1D9Cu;
label_2b1d9c:
    // 0x2b1d9c: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x2b1d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
label_2b1da0:
    // 0x2b1da0: 0xc054ba8  jal         func_152EA0
label_2b1da4:
    if (ctx->pc == 0x2B1DA4u) {
        ctx->pc = 0x2B1DA4u;
            // 0x2b1da4: 0x8e850244  lw          $a1, 0x244($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 580)));
        ctx->pc = 0x2B1DA8u;
        goto label_2b1da8;
    }
    ctx->pc = 0x2B1DA0u;
    SET_GPR_U32(ctx, 31, 0x2B1DA8u);
    ctx->pc = 0x2B1DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1DA0u;
            // 0x2b1da4: 0x8e850244  lw          $a1, 0x244($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 580)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1DA8u; }
        if (ctx->pc != 0x2B1DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1DA8u; }
        if (ctx->pc != 0x2B1DA8u) { return; }
    }
    ctx->pc = 0x2B1DA8u;
label_2b1da8:
    // 0x2b1da8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b1da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b1dac:
    // 0x2b1dac: 0x1202001d  beq         $s0, $v0, . + 4 + (0x1D << 2)
label_2b1db0:
    if (ctx->pc == 0x2B1DB0u) {
        ctx->pc = 0x2B1DB0u;
            // 0x2b1db0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B1DB4u;
        goto label_2b1db4;
    }
    ctx->pc = 0x2B1DACu;
    {
        const bool branch_taken_0x2b1dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B1DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1DACu;
            // 0x2b1db0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1dac) {
            ctx->pc = 0x2B1E24u;
            goto label_2b1e24;
        }
    }
    ctx->pc = 0x2B1DB4u;
label_2b1db4:
    // 0x2b1db4: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_2b1db8:
    if (ctx->pc == 0x2B1DB8u) {
        ctx->pc = 0x2B1DBCu;
        goto label_2b1dbc;
    }
    ctx->pc = 0x2B1DB4u;
    {
        const bool branch_taken_0x2b1db4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b1db4) {
            ctx->pc = 0x2B1DC4u;
            goto label_2b1dc4;
        }
    }
    ctx->pc = 0x2B1DBCu;
label_2b1dbc:
    // 0x2b1dbc: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_2b1dc0:
    if (ctx->pc == 0x2B1DC0u) {
        ctx->pc = 0x2B1DC4u;
        goto label_2b1dc4;
    }
    ctx->pc = 0x2B1DBCu;
    {
        const bool branch_taken_0x2b1dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1dbc) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1DC4u;
label_2b1dc4:
    // 0x2b1dc4: 0x8e830110  lw          $v1, 0x110($s4)
    ctx->pc = 0x2b1dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_2b1dc8:
    // 0x2b1dc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b1dcc:
    // 0x2b1dcc: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_2b1dd0:
    if (ctx->pc == 0x2B1DD0u) {
        ctx->pc = 0x2B1DD0u;
            // 0x2b1dd0: 0x24130032  addiu       $s3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x2B1DD4u;
        goto label_2b1dd4;
    }
    ctx->pc = 0x2B1DCCu;
    {
        const bool branch_taken_0x2b1dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B1DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1DCCu;
            // 0x2b1dd0: 0x24130032  addiu       $s3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1dcc) {
            ctx->pc = 0x2B1E14u;
            goto label_2b1e14;
        }
    }
    ctx->pc = 0x2B1DD4u;
label_2b1dd4:
    // 0x2b1dd4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b1dd8:
    // 0x2b1dd8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2b1ddc:
    if (ctx->pc == 0x2B1DDCu) {
        ctx->pc = 0x2B1DE0u;
        goto label_2b1de0;
    }
    ctx->pc = 0x2B1DD8u;
    {
        const bool branch_taken_0x2b1dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b1dd8) {
            ctx->pc = 0x2B1DE8u;
            goto label_2b1de8;
        }
    }
    ctx->pc = 0x2B1DE0u;
label_2b1de0:
    // 0x2b1de0: 0x1000000e  b           . + 4 + (0xE << 2)
label_2b1de4:
    if (ctx->pc == 0x2B1DE4u) {
        ctx->pc = 0x2B1DE4u;
            // 0x2b1de4: 0x24130046  addiu       $s3, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x2B1DE8u;
        goto label_2b1de8;
    }
    ctx->pc = 0x2B1DE0u;
    {
        const bool branch_taken_0x2b1de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1DE0u;
            // 0x2b1de4: 0x24130046  addiu       $s3, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1de0) {
            ctx->pc = 0x2B1E1Cu;
            goto label_2b1e1c;
        }
    }
    ctx->pc = 0x2B1DE8u;
label_2b1de8:
    // 0x2b1de8: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x2b1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2b1dec:
    // 0x2b1dec: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2b1decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2b1df0:
    // 0x2b1df0: 0x84630050  lh          $v1, 0x50($v1)
    ctx->pc = 0x2b1df0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2b1df4:
    // 0x2b1df4: 0x10620092  beq         $v1, $v0, . + 4 + (0x92 << 2)
label_2b1df8:
    if (ctx->pc == 0x2B1DF8u) {
        ctx->pc = 0x2B1DF8u;
            // 0x2b1df8: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B1DFCu;
        goto label_2b1dfc;
    }
    ctx->pc = 0x2B1DF4u;
    {
        const bool branch_taken_0x2b1df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B1DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1DF4u;
            // 0x2b1df8: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1df4) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1DFCu;
label_2b1dfc:
    // 0x2b1dfc: 0x8e82021c  lw          $v0, 0x21C($s4)
    ctx->pc = 0x2b1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b1e00:
    // 0x2b1e00: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2b1e00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b1e04:
    // 0x2b1e04: 0x1020008e  beqz        $at, . + 4 + (0x8E << 2)
label_2b1e08:
    if (ctx->pc == 0x2B1E08u) {
        ctx->pc = 0x2B1E0Cu;
        goto label_2b1e0c;
    }
    ctx->pc = 0x2B1E04u;
    {
        const bool branch_taken_0x2b1e04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1e04) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1E0Cu;
label_2b1e0c:
    // 0x2b1e0c: 0x1000008c  b           . + 4 + (0x8C << 2)
label_2b1e10:
    if (ctx->pc == 0x2B1E10u) {
        ctx->pc = 0x2B1E10u;
            // 0x2b1e10: 0x24130022  addiu       $s3, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->pc = 0x2B1E14u;
        goto label_2b1e14;
    }
    ctx->pc = 0x2B1E0Cu;
    {
        const bool branch_taken_0x2b1e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1E0Cu;
            // 0x2b1e10: 0x24130022  addiu       $s3, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e0c) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1E14u;
label_2b1e14:
    // 0x2b1e14: 0x1000008a  b           . + 4 + (0x8A << 2)
label_2b1e18:
    if (ctx->pc == 0x2B1E18u) {
        ctx->pc = 0x2B1E1Cu;
        goto label_2b1e1c;
    }
    ctx->pc = 0x2B1E14u;
    {
        const bool branch_taken_0x2b1e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1e14) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1E1Cu;
label_2b1e1c:
    // 0x2b1e1c: 0x10000088  b           . + 4 + (0x88 << 2)
label_2b1e20:
    if (ctx->pc == 0x2B1E20u) {
        ctx->pc = 0x2B1E24u;
        goto label_2b1e24;
    }
    ctx->pc = 0x2B1E1Cu;
    {
        const bool branch_taken_0x2b1e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1e1c) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1E24u;
label_2b1e24:
    // 0x2b1e24: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x2b1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2b1e28:
    // 0x2b1e28: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2b1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2b1e2c:
    // 0x2b1e2c: 0x84630050  lh          $v1, 0x50($v1)
    ctx->pc = 0x2b1e2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2b1e30:
    // 0x2b1e30: 0x14620083  bne         $v1, $v0, . + 4 + (0x83 << 2)
label_2b1e34:
    if (ctx->pc == 0x2B1E34u) {
        ctx->pc = 0x2B1E34u;
            // 0x2b1e34: 0x24130028  addiu       $s3, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x2B1E38u;
        goto label_2b1e38;
    }
    ctx->pc = 0x2B1E30u;
    {
        const bool branch_taken_0x2b1e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B1E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1E30u;
            // 0x2b1e34: 0x24130028  addiu       $s3, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e30) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1E38u;
label_2b1e38:
    // 0x2b1e38: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b1e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b1e3c:
    // 0x2b1e3c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2b1e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_2b1e40:
    // 0x2b1e40: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2b1e40u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_2b1e44:
    // 0x2b1e44: 0x84254d96  lh          $a1, 0x4D96($at)
    ctx->pc = 0x2b1e44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
label_2b1e48:
    // 0x2b1e48: 0xc066d58  jal         func_19B560
label_2b1e4c:
    if (ctx->pc == 0x2B1E4Cu) {
        ctx->pc = 0x2B1E4Cu;
            // 0x2b1e4c: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B1E50u;
        goto label_2b1e50;
    }
    ctx->pc = 0x2B1E48u;
    SET_GPR_U32(ctx, 31, 0x2B1E50u);
    ctx->pc = 0x2B1E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1E48u;
            // 0x2b1e4c: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B560u;
    if (runtime->hasFunction(0x19B560u)) {
        auto targetFn = runtime->lookupFunction(0x19B560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1E50u; }
        if (ctx->pc != 0x2B1E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHp__16CUserDataManagerFi_0x19b560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1E50u; }
        if (ctx->pc != 0x2B1E50u) { return; }
    }
    ctx->pc = 0x2B1E50u;
label_2b1e50:
    // 0x2b1e50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b1e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b1e54:
    // 0x2b1e54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b1e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b1e58:
    // 0x2b1e58: 0x0  nop
    ctx->pc = 0x2b1e58u;
    // NOP
label_2b1e5c:
    // 0x2b1e5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b1e5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b1e60:
    // 0x2b1e60: 0x0  nop
    ctx->pc = 0x2b1e60u;
    // NOP
label_2b1e64:
    // 0x2b1e64: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2b1e68:
    if (ctx->pc == 0x2B1E68u) {
        ctx->pc = 0x2B1E68u;
            // 0x2b1e68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B1E6Cu;
        goto label_2b1e6c;
    }
    ctx->pc = 0x2B1E64u;
    {
        const bool branch_taken_0x2b1e64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B1E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1E64u;
            // 0x2b1e68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e64) {
            ctx->pc = 0x2B1E74u;
            goto label_2b1e74;
        }
    }
    ctx->pc = 0x2B1E6Cu;
label_2b1e6c:
    // 0x2b1e6c: 0x10000074  b           . + 4 + (0x74 << 2)
label_2b1e70:
    if (ctx->pc == 0x2B1E70u) {
        ctx->pc = 0x2B1E74u;
        goto label_2b1e74;
    }
    ctx->pc = 0x2B1E6Cu;
    {
        const bool branch_taken_0x2b1e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1e6c) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1E74u;
label_2b1e74:
    // 0x2b1e74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b1e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b1e78:
    // 0x2b1e78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b1e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b1e7c:
    // 0x2b1e7c: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x2b1e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_2b1e80:
    // 0x2b1e80: 0xc08e898  jal         func_23A260
label_2b1e84:
    if (ctx->pc == 0x2B1E84u) {
        ctx->pc = 0x2B1E84u;
            // 0x2b1e84: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x2B1E88u;
        goto label_2b1e88;
    }
    ctx->pc = 0x2B1E80u;
    SET_GPR_U32(ctx, 31, 0x2B1E88u);
    ctx->pc = 0x2B1E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1E80u;
            // 0x2b1e84: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1E88u; }
        if (ctx->pc != 0x2B1E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1E88u; }
        if (ctx->pc != 0x2B1E88u) { return; }
    }
    ctx->pc = 0x2B1E88u;
label_2b1e88:
    // 0x2b1e88: 0x1000006d  b           . + 4 + (0x6D << 2)
label_2b1e8c:
    if (ctx->pc == 0x2B1E8Cu) {
        ctx->pc = 0x2B1E90u;
        goto label_2b1e90;
    }
    ctx->pc = 0x2B1E88u;
    {
        const bool branch_taken_0x2b1e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1e88) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1E90u;
label_2b1e90:
    // 0x2b1e90: 0x8e83021c  lw          $v1, 0x21C($s4)
    ctx->pc = 0x2b1e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b1e94:
    // 0x2b1e94: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x2b1e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2b1e98:
    // 0x2b1e98: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2b1e9c:
    if (ctx->pc == 0x2B1E9Cu) {
        ctx->pc = 0x2B1E9Cu;
            // 0x2b1e9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1EA0u;
        goto label_2b1ea0;
    }
    ctx->pc = 0x2B1E98u;
    {
        const bool branch_taken_0x2b1e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B1E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1E98u;
            // 0x2b1e9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e98) {
            ctx->pc = 0x2B1EA4u;
            goto label_2b1ea4;
        }
    }
    ctx->pc = 0x2B1EA0u;
label_2b1ea0:
    // 0x2b1ea0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b1ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1ea4:
    // 0x2b1ea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b1ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1ea8:
    // 0x2b1ea8: 0xc0875b4  jal         func_21D6D0
label_2b1eac:
    if (ctx->pc == 0x2B1EACu) {
        ctx->pc = 0x2B1EACu;
            // 0x2b1eac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B1EB0u;
        goto label_2b1eb0;
    }
    ctx->pc = 0x2B1EA8u;
    SET_GPR_U32(ctx, 31, 0x2B1EB0u);
    ctx->pc = 0x2B1EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1EA8u;
            // 0x2b1eac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6D0u;
    if (runtime->hasFunction(0x21D6D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1EB0u; }
        if (ctx->pc != 0x2B1EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor2__7CDC2MesFiii_0x21d6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1EB0u; }
        if (ctx->pc != 0x2B1EB0u) { return; }
    }
    ctx->pc = 0x2B1EB0u;
label_2b1eb0:
    // 0x2b1eb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b1eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b1eb4:
    // 0x2b1eb4: 0x12030028  beq         $s0, $v1, . + 4 + (0x28 << 2)
label_2b1eb8:
    if (ctx->pc == 0x2B1EB8u) {
        ctx->pc = 0x2B1EB8u;
            // 0x2b1eb8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B1EBCu;
        goto label_2b1ebc;
    }
    ctx->pc = 0x2B1EB4u;
    {
        const bool branch_taken_0x2b1eb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B1EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1EB4u;
            // 0x2b1eb8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1eb4) {
            ctx->pc = 0x2B1F58u;
            goto label_2b1f58;
        }
    }
    ctx->pc = 0x2B1EBCu;
label_2b1ebc:
    // 0x2b1ebc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b1ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1ec0:
    // 0x2b1ec0: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
label_2b1ec4:
    if (ctx->pc == 0x2B1EC4u) {
        ctx->pc = 0x2B1EC8u;
        goto label_2b1ec8;
    }
    ctx->pc = 0x2B1EC0u;
    {
        const bool branch_taken_0x2b1ec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b1ec0) {
            ctx->pc = 0x2B1ED0u;
            goto label_2b1ed0;
        }
    }
    ctx->pc = 0x2B1EC8u;
label_2b1ec8:
    // 0x2b1ec8: 0x1000005d  b           . + 4 + (0x5D << 2)
label_2b1ecc:
    if (ctx->pc == 0x2B1ECCu) {
        ctx->pc = 0x2B1ED0u;
        goto label_2b1ed0;
    }
    ctx->pc = 0x2B1EC8u;
    {
        const bool branch_taken_0x2b1ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1ec8) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1ED0u;
label_2b1ed0:
    // 0x2b1ed0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2b1ed4:
    if (ctx->pc == 0x2B1ED4u) {
        ctx->pc = 0x2B1ED4u;
            // 0x2b1ed4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B1ED8u;
        goto label_2b1ed8;
    }
    ctx->pc = 0x2B1ED0u;
    {
        const bool branch_taken_0x2b1ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1ED0u;
            // 0x2b1ed4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ed0) {
            ctx->pc = 0x2B1EDCu;
            goto label_2b1edc;
        }
    }
    ctx->pc = 0x2B1ED8u;
label_2b1ed8:
    // 0x2b1ed8: 0x2413001e  addiu       $s3, $zero, 0x1E
    ctx->pc = 0x2b1ed8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2b1edc:
    // 0x2b1edc: 0x14430058  bne         $v0, $v1, . + 4 + (0x58 << 2)
label_2b1ee0:
    if (ctx->pc == 0x2B1EE0u) {
        ctx->pc = 0x2B1EE0u;
            // 0x2b1ee0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B1EE4u;
        goto label_2b1ee4;
    }
    ctx->pc = 0x2B1EDCu;
    {
        const bool branch_taken_0x2b1edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B1EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1EDCu;
            // 0x2b1ee0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1edc) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1EE4u;
label_2b1ee4:
    // 0x2b1ee4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b1ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b1ee8:
    // 0x2b1ee8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b1ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b1eec:
    // 0x2b1eec: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x2b1eecu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_2b1ef0:
    // 0x2b1ef0: 0xc08e7cc  jal         func_239F30
label_2b1ef4:
    if (ctx->pc == 0x2B1EF4u) {
        ctx->pc = 0x2B1EF4u;
            // 0x2b1ef4: 0x24a5ebb8  addiu       $a1, $a1, -0x1448 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962104));
        ctx->pc = 0x2B1EF8u;
        goto label_2b1ef8;
    }
    ctx->pc = 0x2B1EF0u;
    SET_GPR_U32(ctx, 31, 0x2B1EF8u);
    ctx->pc = 0x2B1EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1EF0u;
            // 0x2b1ef4: 0x24a5ebb8  addiu       $a1, $a1, -0x1448 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1EF8u; }
        if (ctx->pc != 0x2B1EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1EF8u; }
        if (ctx->pc != 0x2B1EF8u) { return; }
    }
    ctx->pc = 0x2B1EF8u;
label_2b1ef8:
    // 0x2b1ef8: 0xc7809ba4  lwc1        $f0, -0x645C($gp)
    ctx->pc = 0x2b1ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b1efc:
    // 0x2b1efc: 0x27a201cc  addiu       $v0, $sp, 0x1CC
    ctx->pc = 0x2b1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
label_2b1f00:
    // 0x2b1f00: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b1f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2b1f04:
    // 0x2b1f04: 0xc0aacf4  jal         func_2AB3D0
label_2b1f08:
    if (ctx->pc == 0x2B1F08u) {
        ctx->pc = 0x2B1F08u;
            // 0x2b1f08: 0x8e84021c  lw          $a0, 0x21C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
        ctx->pc = 0x2B1F0Cu;
        goto label_2b1f0c;
    }
    ctx->pc = 0x2B1F04u;
    SET_GPR_U32(ctx, 31, 0x2B1F0Cu);
    ctx->pc = 0x2B1F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1F04u;
            // 0x2b1f08: 0x8e84021c  lw          $a0, 0x21C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB3D0u;
    if (runtime->hasFunction(0x2AB3D0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1F0Cu; }
        if (ctx->pc != 0x2B1F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNPCName__Fi_0x2ab3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1F0Cu; }
        if (ctx->pc != 0x2B1F0Cu) { return; }
    }
    ctx->pc = 0x2B1F0Cu;
label_2b1f0c:
    // 0x2b1f0c: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x2b1f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
label_2b1f10:
    // 0x2b1f10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f14:
    // 0x2b1f14: 0x27a501cc  addiu       $a1, $sp, 0x1CC
    ctx->pc = 0x2b1f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
label_2b1f18:
    // 0x2b1f18: 0xc087720  jal         func_21DC80
label_2b1f1c:
    if (ctx->pc == 0x2B1F1Cu) {
        ctx->pc = 0x2B1F1Cu;
            // 0x2b1f1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B1F20u;
        goto label_2b1f20;
    }
    ctx->pc = 0x2B1F18u;
    SET_GPR_U32(ctx, 31, 0x2B1F20u);
    ctx->pc = 0x2B1F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1F18u;
            // 0x2b1f1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1F20u; }
        if (ctx->pc != 0x2B1F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1F20u; }
        if (ctx->pc != 0x2B1F20u) { return; }
    }
    ctx->pc = 0x2B1F20u;
label_2b1f20:
    // 0x2b1f20: 0x8e8201f4  lw          $v0, 0x1F4($s4)
    ctx->pc = 0x2b1f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 500)));
label_2b1f24:
    // 0x2b1f24: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x2b1f24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2b1f28:
    // 0x2b1f28: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2b1f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2b1f2c:
    // 0x2b1f2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b1f30:
    if (ctx->pc == 0x2B1F30u) {
        ctx->pc = 0x2B1F30u;
            // 0x2b1f30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1F34u;
        goto label_2b1f34;
    }
    ctx->pc = 0x2B1F2Cu;
    {
        const bool branch_taken_0x2b1f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1F2Cu;
            // 0x2b1f30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f2c) {
            ctx->pc = 0x2B1F48u;
            goto label_2b1f48;
        }
    }
    ctx->pc = 0x2B1F34u;
label_2b1f34:
    // 0x2b1f34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f38:
    // 0x2b1f38: 0xc0877e0  jal         func_21DF80
label_2b1f3c:
    if (ctx->pc == 0x2B1F3Cu) {
        ctx->pc = 0x2B1F3Cu;
            // 0x2b1f3c: 0x240501b0  addiu       $a1, $zero, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
        ctx->pc = 0x2B1F40u;
        goto label_2b1f40;
    }
    ctx->pc = 0x2B1F38u;
    SET_GPR_U32(ctx, 31, 0x2B1F40u);
    ctx->pc = 0x2B1F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1F38u;
            // 0x2b1f3c: 0x240501b0  addiu       $a1, $zero, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1F40u; }
        if (ctx->pc != 0x2B1F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1F40u; }
        if (ctx->pc != 0x2B1F40u) { return; }
    }
    ctx->pc = 0x2B1F40u;
label_2b1f40:
    // 0x2b1f40: 0x1000003f  b           . + 4 + (0x3F << 2)
label_2b1f44:
    if (ctx->pc == 0x2B1F44u) {
        ctx->pc = 0x2B1F48u;
        goto label_2b1f48;
    }
    ctx->pc = 0x2B1F40u;
    {
        const bool branch_taken_0x2b1f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1f40) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1F48u;
label_2b1f48:
    // 0x2b1f48: 0xc0877e0  jal         func_21DF80
label_2b1f4c:
    if (ctx->pc == 0x2B1F4Cu) {
        ctx->pc = 0x2B1F4Cu;
            // 0x2b1f4c: 0x240501af  addiu       $a1, $zero, 0x1AF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 431));
        ctx->pc = 0x2B1F50u;
        goto label_2b1f50;
    }
    ctx->pc = 0x2B1F48u;
    SET_GPR_U32(ctx, 31, 0x2B1F50u);
    ctx->pc = 0x2B1F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1F48u;
            // 0x2b1f4c: 0x240501af  addiu       $a1, $zero, 0x1AF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 431));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1F50u; }
        if (ctx->pc != 0x2B1F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1F50u; }
        if (ctx->pc != 0x2B1F50u) { return; }
    }
    ctx->pc = 0x2B1F50u;
label_2b1f50:
    // 0x2b1f50: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2b1f54:
    if (ctx->pc == 0x2B1F54u) {
        ctx->pc = 0x2B1F58u;
        goto label_2b1f58;
    }
    ctx->pc = 0x2B1F50u;
    {
        const bool branch_taken_0x2b1f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1f50) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1F58u;
label_2b1f58:
    // 0x2b1f58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b1f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f5c:
    // 0x2b1f5c: 0x24a5ebc8  addiu       $a1, $a1, -0x1438
    ctx->pc = 0x2b1f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962120));
label_2b1f60:
    // 0x2b1f60: 0xc08e7cc  jal         func_239F30
label_2b1f64:
    if (ctx->pc == 0x2B1F64u) {
        ctx->pc = 0x2B1F64u;
            // 0x2b1f64: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B1F68u;
        goto label_2b1f68;
    }
    ctx->pc = 0x2B1F60u;
    SET_GPR_U32(ctx, 31, 0x2B1F68u);
    ctx->pc = 0x2B1F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1F60u;
            // 0x2b1f64: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1F68u; }
        if (ctx->pc != 0x2B1F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1F68u; }
        if (ctx->pc != 0x2B1F68u) { return; }
    }
    ctx->pc = 0x2B1F68u;
label_2b1f68:
    // 0x2b1f68: 0x10000035  b           . + 4 + (0x35 << 2)
label_2b1f6c:
    if (ctx->pc == 0x2B1F6Cu) {
        ctx->pc = 0x2B1F70u;
        goto label_2b1f70;
    }
    ctx->pc = 0x2B1F68u;
    {
        const bool branch_taken_0x2b1f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1f68) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B1F70u;
label_2b1f70:
    // 0x2b1f70: 0xc087654  jal         func_21D950
label_2b1f74:
    if (ctx->pc == 0x2B1F74u) {
        ctx->pc = 0x2B1F74u;
            // 0x2b1f74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1F78u;
        goto label_2b1f78;
    }
    ctx->pc = 0x2B1F70u;
    SET_GPR_U32(ctx, 31, 0x2B1F78u);
    ctx->pc = 0x2B1F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1F70u;
            // 0x2b1f74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1F78u; }
        if (ctx->pc != 0x2B1F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1F78u; }
        if (ctx->pc != 0x2B1F78u) { return; }
    }
    ctx->pc = 0x2B1F78u;
label_2b1f78:
    // 0x2b1f78: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b1f78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f7c:
    // 0x2b1f7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b1f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1f80:
    // 0x2b1f80: 0x16a20028  bne         $s5, $v0, . + 4 + (0x28 << 2)
label_2b1f84:
    if (ctx->pc == 0x2B1F84u) {
        ctx->pc = 0x2B1F84u;
            // 0x2b1f84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B1F88u;
        goto label_2b1f88;
    }
    ctx->pc = 0x2B1F80u;
    {
        const bool branch_taken_0x2b1f80 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B1F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1F80u;
            // 0x2b1f84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f80) {
            ctx->pc = 0x2B2024u;
            goto label_2b2024;
        }
    }
    ctx->pc = 0x2B1F88u;
label_2b1f88:
    // 0x2b1f88: 0x8e8201f4  lw          $v0, 0x1F4($s4)
    ctx->pc = 0x2b1f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 500)));
label_2b1f8c:
    // 0x2b1f8c: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x2b1f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2b1f90:
    // 0x2b1f90: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x2b1f90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2b1f94:
    // 0x2b1f94: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2b1f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2b1f98:
    // 0x2b1f98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b1f9c:
    if (ctx->pc == 0x2B1F9Cu) {
        ctx->pc = 0x2B1F9Cu;
            // 0x2b1f9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B1FA0u;
        goto label_2b1fa0;
    }
    ctx->pc = 0x2B1F98u;
    {
        const bool branch_taken_0x2b1f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1F98u;
            // 0x2b1f9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f98) {
            ctx->pc = 0x2B1FACu;
            goto label_2b1fac;
        }
    }
    ctx->pc = 0x2B1FA0u;
label_2b1fa0:
    // 0x2b1fa0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b1fa4:
    // 0x2b1fa4: 0x10000013  b           . + 4 + (0x13 << 2)
label_2b1fa8:
    if (ctx->pc == 0x2B1FA8u) {
        ctx->pc = 0x2B1FA8u;
            // 0x2b1fa8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B1FACu;
        goto label_2b1fac;
    }
    ctx->pc = 0x2B1FA4u;
    {
        const bool branch_taken_0x2b1fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1FA4u;
            // 0x2b1fa8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1fa4) {
            ctx->pc = 0x2B1FF4u;
            goto label_2b1ff4;
        }
    }
    ctx->pc = 0x2B1FACu;
label_2b1fac:
    // 0x2b1fac: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2b1facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2b1fb0:
    // 0x2b1fb0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2b1fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_2b1fb4:
    // 0x2b1fb4: 0x879094c0  lh          $s0, -0x6B40($gp)
    ctx->pc = 0x2b1fb4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939840)));
label_2b1fb8:
    // 0x2b1fb8: 0xc0b49fc  jal         func_2D27F0
label_2b1fbc:
    if (ctx->pc == 0x2B1FBCu) {
        ctx->pc = 0x2B1FBCu;
            // 0x2b1fbc: 0x2484ebd8  addiu       $a0, $a0, -0x1428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962136));
        ctx->pc = 0x2B1FC0u;
        goto label_2b1fc0;
    }
    ctx->pc = 0x2B1FB8u;
    SET_GPR_U32(ctx, 31, 0x2B1FC0u);
    ctx->pc = 0x2B1FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1FB8u;
            // 0x2b1fbc: 0x2484ebd8  addiu       $a0, $a0, -0x1428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1FC0u; }
        if (ctx->pc != 0x2B1FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1FC0u; }
        if (ctx->pc != 0x2B1FC0u) { return; }
    }
    ctx->pc = 0x2B1FC0u;
label_2b1fc0:
    // 0x2b1fc0: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_2b1fc4:
    if (ctx->pc == 0x2B1FC4u) {
        ctx->pc = 0x2B1FC4u;
            // 0x2b1fc4: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B1FC8u;
        goto label_2b1fc8;
    }
    ctx->pc = 0x2B1FC0u;
    {
        const bool branch_taken_0x2b1fc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B1FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1FC0u;
            // 0x2b1fc4: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1fc0) {
            ctx->pc = 0x2B1FD8u;
            goto label_2b1fd8;
        }
    }
    ctx->pc = 0x2B1FC8u;
label_2b1fc8:
    // 0x2b1fc8: 0xc0b49fc  jal         func_2D27F0
label_2b1fcc:
    if (ctx->pc == 0x2B1FCCu) {
        ctx->pc = 0x2B1FCCu;
            // 0x2b1fcc: 0x2484ebe0  addiu       $a0, $a0, -0x1420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962144));
        ctx->pc = 0x2B1FD0u;
        goto label_2b1fd0;
    }
    ctx->pc = 0x2B1FC8u;
    SET_GPR_U32(ctx, 31, 0x2B1FD0u);
    ctx->pc = 0x2B1FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1FC8u;
            // 0x2b1fcc: 0x2484ebe0  addiu       $a0, $a0, -0x1420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1FD0u; }
        if (ctx->pc != 0x2B1FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1FD0u; }
        if (ctx->pc != 0x2B1FD0u) { return; }
    }
    ctx->pc = 0x2B1FD0u;
label_2b1fd0:
    // 0x2b1fd0: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
label_2b1fd4:
    if (ctx->pc == 0x2B1FD4u) {
        ctx->pc = 0x2B1FD8u;
        goto label_2b1fd8;
    }
    ctx->pc = 0x2B1FD0u;
    {
        const bool branch_taken_0x2b1fd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b1fd0) {
            ctx->pc = 0x2B1FF4u;
            goto label_2b1ff4;
        }
    }
    ctx->pc = 0x2B1FD8u;
label_2b1fd8:
    // 0x2b1fd8: 0x8e85021c  lw          $a1, 0x21C($s4)
    ctx->pc = 0x2b1fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b1fdc:
    // 0x2b1fdc: 0xc0b25f0  jal         func_2C97C0
label_2b1fe0:
    if (ctx->pc == 0x2B1FE0u) {
        ctx->pc = 0x2B1FE0u;
            // 0x2b1fe0: 0x8f8494a4  lw          $a0, -0x6B5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
        ctx->pc = 0x2B1FE4u;
        goto label_2b1fe4;
    }
    ctx->pc = 0x2B1FDCu;
    SET_GPR_U32(ctx, 31, 0x2B1FE4u);
    ctx->pc = 0x2B1FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1FDCu;
            // 0x2b1fe0: 0x8f8494a4  lw          $a0, -0x6B5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C97C0u;
    if (runtime->hasFunction(0x2C97C0u)) {
        auto targetFn = runtime->lookupFunction(0x2C97C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1FE4u; }
        if (ctx->pc != 0x2B1FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchCharaID__6CSceneFi_0x2c97c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1FE4u; }
        if (ctx->pc != 0x2B1FE4u) { return; }
    }
    ctx->pc = 0x2B1FE4u;
label_2b1fe4:
    // 0x2b1fe4: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2b1fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2b1fe8:
    // 0x2b1fe8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b1fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1fec:
    // 0x2b1fec: 0xc0a11b4  jal         func_2846D0
label_2b1ff0:
    if (ctx->pc == 0x2B1FF0u) {
        ctx->pc = 0x2B1FF0u;
            // 0x2b1ff0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B1FF4u;
        goto label_2b1ff4;
    }
    ctx->pc = 0x2B1FECu;
    SET_GPR_U32(ctx, 31, 0x2B1FF4u);
    ctx->pc = 0x2B1FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1FECu;
            // 0x2b1ff0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1FF4u; }
        if (ctx->pc != 0x2B1FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1FF4u; }
        if (ctx->pc != 0x2B1FF4u) { return; }
    }
    ctx->pc = 0x2B1FF4u;
label_2b1ff4:
    // 0x2b1ff4: 0xae80021c  sw          $zero, 0x21C($s4)
    ctx->pc = 0x2b1ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 540), GPR_U32(ctx, 0));
label_2b1ff8:
    // 0x2b1ff8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b1ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b1ffc:
    // 0x2b1ffc: 0xae8001f4  sw          $zero, 0x1F4($s4)
    ctx->pc = 0x2b1ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 500), GPR_U32(ctx, 0));
label_2b2000:
    // 0x2b2000: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b2000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b2004:
    // 0x2b2004: 0xae800220  sw          $zero, 0x220($s4)
    ctx->pc = 0x2b2004u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 544), GPR_U32(ctx, 0));
label_2b2008:
    // 0x2b2008: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b2008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b200c:
    // 0x2b200c: 0xae820224  sw          $v0, 0x224($s4)
    ctx->pc = 0x2b200cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 548), GPR_U32(ctx, 2));
label_2b2010:
    // 0x2b2010: 0x24a5ebe8  addiu       $a1, $a1, -0x1418
    ctx->pc = 0x2b2010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962152));
label_2b2014:
    // 0x2b2014: 0xc08e7cc  jal         func_239F30
label_2b2018:
    if (ctx->pc == 0x2B2018u) {
        ctx->pc = 0x2B2018u;
            // 0x2b2018: 0xae820228  sw          $v0, 0x228($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 552), GPR_U32(ctx, 2));
        ctx->pc = 0x2B201Cu;
        goto label_2b201c;
    }
    ctx->pc = 0x2B2014u;
    SET_GPR_U32(ctx, 31, 0x2B201Cu);
    ctx->pc = 0x2B2018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2014u;
            // 0x2b2018: 0xae820228  sw          $v0, 0x228($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B201Cu; }
        if (ctx->pc != 0x2B201Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B201Cu; }
        if (ctx->pc != 0x2B201Cu) { return; }
    }
    ctx->pc = 0x2B201Cu;
label_2b201c:
    // 0x2b201c: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x2b201cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
label_2b2020:
    // 0x2b2020: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b2020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b2024:
    // 0x2b2024: 0x16a20006  bne         $s5, $v0, . + 4 + (0x6 << 2)
label_2b2028:
    if (ctx->pc == 0x2B2028u) {
        ctx->pc = 0x2B2028u;
            // 0x2b2028: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B202Cu;
        goto label_2b202c;
    }
    ctx->pc = 0x2B2024u;
    {
        const bool branch_taken_0x2b2024 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B2028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2024u;
            // 0x2b2028: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2024) {
            ctx->pc = 0x2B2040u;
            goto label_2b2040;
        }
    }
    ctx->pc = 0x2B202Cu;
label_2b202c:
    // 0x2b202c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b202cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b2030:
    // 0x2b2030: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b2030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b2034:
    // 0x2b2034: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x2b2034u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_2b2038:
    // 0x2b2038: 0xc08e7cc  jal         func_239F30
label_2b203c:
    if (ctx->pc == 0x2B203Cu) {
        ctx->pc = 0x2B203Cu;
            // 0x2b203c: 0x24a5ebf0  addiu       $a1, $a1, -0x1410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962160));
        ctx->pc = 0x2B2040u;
        goto label_2b2040;
    }
    ctx->pc = 0x2B2038u;
    SET_GPR_U32(ctx, 31, 0x2B2040u);
    ctx->pc = 0x2B203Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2038u;
            // 0x2b203c: 0x24a5ebf0  addiu       $a1, $a1, -0x1410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2040u; }
        if (ctx->pc != 0x2B2040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2040u; }
        if (ctx->pc != 0x2B2040u) { return; }
    }
    ctx->pc = 0x2B2040u;
label_2b2040:
    // 0x2b2040: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b2040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b2044:
    // 0x2b2044: 0xc08ef84  jal         func_23BE10
label_2b2048:
    if (ctx->pc == 0x2B2048u) {
        ctx->pc = 0x2B204Cu;
        goto label_2b204c;
    }
    ctx->pc = 0x2B2044u;
    SET_GPR_U32(ctx, 31, 0x2B204Cu);
    ctx->pc = 0x23BE10u;
    if (runtime->hasFunction(0x23BE10u)) {
        auto targetFn = runtime->lookupFunction(0x23BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B204Cu; }
        if (ctx->pc != 0x2B204Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCharaNo__12CMenuKeyFuncFv_0x23be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B204Cu; }
        if (ctx->pc != 0x2B204Cu) { return; }
    }
    ctx->pc = 0x2B204Cu;
label_2b204c:
    // 0x2b204c: 0x240300ca  addiu       $v1, $zero, 0xCA
    ctx->pc = 0x2b204cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
label_2b2050:
    // 0x2b2050: 0x126304de  beq         $s3, $v1, . + 4 + (0x4DE << 2)
label_2b2054:
    if (ctx->pc == 0x2B2054u) {
        ctx->pc = 0x2B2058u;
        goto label_2b2058;
    }
    ctx->pc = 0x2B2050u;
    {
        const bool branch_taken_0x2b2050 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b2050) {
            ctx->pc = 0x2B33CCu;
            goto label_2b33cc;
        }
    }
    ctx->pc = 0x2B2058u;
label_2b2058:
    // 0x2b2058: 0x240300c9  addiu       $v1, $zero, 0xC9
    ctx->pc = 0x2b2058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_2b205c:
    // 0x2b205c: 0x126304db  beq         $s3, $v1, . + 4 + (0x4DB << 2)
label_2b2060:
    if (ctx->pc == 0x2B2060u) {
        ctx->pc = 0x2B2064u;
        goto label_2b2064;
    }
    ctx->pc = 0x2B205Cu;
    {
        const bool branch_taken_0x2b205c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b205c) {
            ctx->pc = 0x2B33CCu;
            goto label_2b33cc;
        }
    }
    ctx->pc = 0x2B2064u;
label_2b2064:
    // 0x2b2064: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x2b2064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_2b2068:
    // 0x2b2068: 0x126304d8  beq         $s3, $v1, . + 4 + (0x4D8 << 2)
label_2b206c:
    if (ctx->pc == 0x2B206Cu) {
        ctx->pc = 0x2B2070u;
        goto label_2b2070;
    }
    ctx->pc = 0x2B2068u;
    {
        const bool branch_taken_0x2b2068 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b2068) {
            ctx->pc = 0x2B33CCu;
            goto label_2b33cc;
        }
    }
    ctx->pc = 0x2B2070u;
label_2b2070:
    // 0x2b2070: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x2b2070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_2b2074:
    // 0x2b2074: 0x126302e1  beq         $s3, $v1, . + 4 + (0x2E1 << 2)
label_2b2078:
    if (ctx->pc == 0x2B2078u) {
        ctx->pc = 0x2B2078u;
            // 0x2b2078: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2B207Cu;
        goto label_2b207c;
    }
    ctx->pc = 0x2B2074u;
    {
        const bool branch_taken_0x2b2074 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B2078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2074u;
            // 0x2b2078: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2074) {
            ctx->pc = 0x2B2BFCu;
            goto label_2b2bfc;
        }
    }
    ctx->pc = 0x2B207Cu;
label_2b207c:
    // 0x2b207c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2b207cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2b2080:
    // 0x2b2080: 0x12630263  beq         $s3, $v1, . + 4 + (0x263 << 2)
label_2b2084:
    if (ctx->pc == 0x2B2084u) {
        ctx->pc = 0x2B2084u;
            // 0x2b2084: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x2B2088u;
        goto label_2b2088;
    }
    ctx->pc = 0x2B2080u;
    {
        const bool branch_taken_0x2b2080 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B2084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2080u;
            // 0x2b2084: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2080) {
            ctx->pc = 0x2B2A10u;
            goto label_2b2a10;
        }
    }
    ctx->pc = 0x2B2088u;
label_2b2088:
    // 0x2b2088: 0x1263024b  beq         $s3, $v1, . + 4 + (0x24B << 2)
label_2b208c:
    if (ctx->pc == 0x2B208Cu) {
        ctx->pc = 0x2B208Cu;
            // 0x2b208c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B2090u;
        goto label_2b2090;
    }
    ctx->pc = 0x2B2088u;
    {
        const bool branch_taken_0x2b2088 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B208Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2088u;
            // 0x2b208c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2088) {
            ctx->pc = 0x2B29B8u;
            goto label_2b29b8;
        }
    }
    ctx->pc = 0x2B2090u;
label_2b2090:
    // 0x2b2090: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x2b2090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2b2094:
    // 0x2b2094: 0x1263022d  beq         $s3, $v1, . + 4 + (0x22D << 2)
label_2b2098:
    if (ctx->pc == 0x2B2098u) {
        ctx->pc = 0x2B2098u;
            // 0x2b2098: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x2B209Cu;
        goto label_2b209c;
    }
    ctx->pc = 0x2B2094u;
    {
        const bool branch_taken_0x2b2094 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B2098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2094u;
            // 0x2b2098: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2094) {
            ctx->pc = 0x2B294Cu;
            goto label_2b294c;
        }
    }
    ctx->pc = 0x2B209Cu;
label_2b209c:
    // 0x2b209c: 0x12630219  beq         $s3, $v1, . + 4 + (0x219 << 2)
label_2b20a0:
    if (ctx->pc == 0x2B20A0u) {
        ctx->pc = 0x2B20A0u;
            // 0x2b20a0: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2B20A4u;
        goto label_2b20a4;
    }
    ctx->pc = 0x2B209Cu;
    {
        const bool branch_taken_0x2b209c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B20A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B209Cu;
            // 0x2b20a0: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b209c) {
            ctx->pc = 0x2B2904u;
            goto label_2b2904;
        }
    }
    ctx->pc = 0x2B20A4u;
label_2b20a4:
    // 0x2b20a4: 0x126301b6  beq         $s3, $v1, . + 4 + (0x1B6 << 2)
label_2b20a8:
    if (ctx->pc == 0x2B20A8u) {
        ctx->pc = 0x2B20A8u;
            // 0x2b20a8: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2B20ACu;
        goto label_2b20ac;
    }
    ctx->pc = 0x2B20A4u;
    {
        const bool branch_taken_0x2b20a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B20A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B20A4u;
            // 0x2b20a8: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20a4) {
            ctx->pc = 0x2B2780u;
            goto label_2b2780;
        }
    }
    ctx->pc = 0x2B20ACu;
label_2b20ac:
    // 0x2b20ac: 0x126301ad  beq         $s3, $v1, . + 4 + (0x1AD << 2)
label_2b20b0:
    if (ctx->pc == 0x2B20B0u) {
        ctx->pc = 0x2B20B0u;
            // 0x2b20b0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B20B4u;
        goto label_2b20b4;
    }
    ctx->pc = 0x2B20ACu;
    {
        const bool branch_taken_0x2b20ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B20B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B20ACu;
            // 0x2b20b0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20ac) {
            ctx->pc = 0x2B2764u;
            goto label_2b2764;
        }
    }
    ctx->pc = 0x2B20B4u;
label_2b20b4:
    // 0x2b20b4: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x2b20b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_2b20b8:
    // 0x2b20b8: 0x126300a5  beq         $s3, $v1, . + 4 + (0xA5 << 2)
label_2b20bc:
    if (ctx->pc == 0x2B20BCu) {
        ctx->pc = 0x2B20BCu;
            // 0x2b20bc: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2B20C0u;
        goto label_2b20c0;
    }
    ctx->pc = 0x2B20B8u;
    {
        const bool branch_taken_0x2b20b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B20BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B20B8u;
            // 0x2b20bc: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20b8) {
            ctx->pc = 0x2B2350u;
            goto label_2b2350;
        }
    }
    ctx->pc = 0x2B20C0u;
label_2b20c0:
    // 0x2b20c0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2b20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2b20c4:
    // 0x2b20c4: 0x1262002b  beq         $s3, $v0, . + 4 + (0x2B << 2)
label_2b20c8:
    if (ctx->pc == 0x2B20C8u) {
        ctx->pc = 0x2B20C8u;
            // 0x2b20c8: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->pc = 0x2B20CCu;
        goto label_2b20cc;
    }
    ctx->pc = 0x2B20C4u;
    {
        const bool branch_taken_0x2b20c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B20C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B20C4u;
            // 0x2b20c8: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20c4) {
            ctx->pc = 0x2B2174u;
            goto label_2b2174;
        }
    }
    ctx->pc = 0x2B20CCu;
label_2b20cc:
    // 0x2b20cc: 0x12620009  beq         $s3, $v0, . + 4 + (0x9 << 2)
label_2b20d0:
    if (ctx->pc == 0x2B20D0u) {
        ctx->pc = 0x2B20D0u;
            // 0x2b20d0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B20D4u;
        goto label_2b20d4;
    }
    ctx->pc = 0x2B20CCu;
    {
        const bool branch_taken_0x2b20cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B20D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B20CCu;
            // 0x2b20d0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20cc) {
            ctx->pc = 0x2B20F4u;
            goto label_2b20f4;
        }
    }
    ctx->pc = 0x2B20D4u;
label_2b20d4:
    // 0x2b20d4: 0x12640003  beq         $s3, $a0, . + 4 + (0x3 << 2)
label_2b20d8:
    if (ctx->pc == 0x2B20D8u) {
        ctx->pc = 0x2B20DCu;
        goto label_2b20dc;
    }
    ctx->pc = 0x2B20D4u;
    {
        const bool branch_taken_0x2b20d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b20d4) {
            ctx->pc = 0x2B20E4u;
            goto label_2b20e4;
        }
    }
    ctx->pc = 0x2B20DCu;
label_2b20dc:
    // 0x2b20dc: 0x100004ee  b           . + 4 + (0x4EE << 2)
label_2b20e0:
    if (ctx->pc == 0x2B20E0u) {
        ctx->pc = 0x2B20E0u;
            // 0x2b20e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B20E4u;
        goto label_2b20e4;
    }
    ctx->pc = 0x2B20DCu;
    {
        const bool branch_taken_0x2b20dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B20E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B20DCu;
            // 0x2b20e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20dc) {
            ctx->pc = 0x2B3498u;
            goto label_2b3498;
        }
    }
    ctx->pc = 0x2B20E4u;
label_2b20e4:
    // 0x2b20e4: 0xc094274  jal         func_2509D0
label_2b20e8:
    if (ctx->pc == 0x2B20E8u) {
        ctx->pc = 0x2B20ECu;
        goto label_2b20ec;
    }
    ctx->pc = 0x2B20E4u;
    SET_GPR_U32(ctx, 31, 0x2B20ECu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B20ECu; }
        if (ctx->pc != 0x2B20ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B20ECu; }
        if (ctx->pc != 0x2B20ECu) { return; }
    }
    ctx->pc = 0x2B20ECu;
label_2b20ec:
    // 0x2b20ec: 0x100004e9  b           . + 4 + (0x4E9 << 2)
label_2b20f0:
    if (ctx->pc == 0x2B20F0u) {
        ctx->pc = 0x2B20F4u;
        goto label_2b20f4;
    }
    ctx->pc = 0x2B20ECu;
    {
        const bool branch_taken_0x2b20ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b20ec) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B20F4u;
label_2b20f4:
    // 0x2b20f4: 0x8e8201f4  lw          $v0, 0x1F4($s4)
    ctx->pc = 0x2b20f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 500)));
label_2b20f8:
    // 0x2b20f8: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x2b20f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2b20fc:
    // 0x2b20fc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2b20fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2b2100:
    // 0x2b2100: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b2104:
    if (ctx->pc == 0x2B2104u) {
        ctx->pc = 0x2B2104u;
            // 0x2b2104: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B2108u;
        goto label_2b2108;
    }
    ctx->pc = 0x2B2100u;
    {
        const bool branch_taken_0x2b2100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2100u;
            // 0x2b2104: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2100) {
            ctx->pc = 0x2B2120u;
            goto label_2b2120;
        }
    }
    ctx->pc = 0x2B2108u;
label_2b2108:
    // 0x2b2108: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b2108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b210c:
    // 0x2b210c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b210cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b2110:
    // 0x2b2110: 0xc08e7cc  jal         func_239F30
label_2b2114:
    if (ctx->pc == 0x2B2114u) {
        ctx->pc = 0x2B2114u;
            // 0x2b2114: 0x24a5ec00  addiu       $a1, $a1, -0x1400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962176));
        ctx->pc = 0x2B2118u;
        goto label_2b2118;
    }
    ctx->pc = 0x2B2110u;
    SET_GPR_U32(ctx, 31, 0x2B2118u);
    ctx->pc = 0x2B2114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2110u;
            // 0x2b2114: 0x24a5ec00  addiu       $a1, $a1, -0x1400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2118u; }
        if (ctx->pc != 0x2B2118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2118u; }
        if (ctx->pc != 0x2B2118u) { return; }
    }
    ctx->pc = 0x2B2118u;
label_2b2118:
    // 0x2b2118: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b211c:
    if (ctx->pc == 0x2B211Cu) {
        ctx->pc = 0x2B211Cu;
            // 0x2b211c: 0x8e83021c  lw          $v1, 0x21C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
        ctx->pc = 0x2B2120u;
        goto label_2b2120;
    }
    ctx->pc = 0x2B2118u;
    {
        const bool branch_taken_0x2b2118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B211Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2118u;
            // 0x2b211c: 0x8e83021c  lw          $v1, 0x21C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2118) {
            ctx->pc = 0x2B2130u;
            goto label_2b2130;
        }
    }
    ctx->pc = 0x2B2120u;
label_2b2120:
    // 0x2b2120: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b2120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b2124:
    // 0x2b2124: 0xc08e7cc  jal         func_239F30
label_2b2128:
    if (ctx->pc == 0x2B2128u) {
        ctx->pc = 0x2B2128u;
            // 0x2b2128: 0x24a5ec10  addiu       $a1, $a1, -0x13F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962192));
        ctx->pc = 0x2B212Cu;
        goto label_2b212c;
    }
    ctx->pc = 0x2B2124u;
    SET_GPR_U32(ctx, 31, 0x2B212Cu);
    ctx->pc = 0x2B2128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2124u;
            // 0x2b2128: 0x24a5ec10  addiu       $a1, $a1, -0x13F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B212Cu; }
        if (ctx->pc != 0x2B212Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B212Cu; }
        if (ctx->pc != 0x2B212Cu) { return; }
    }
    ctx->pc = 0x2B212Cu;
label_2b212c:
    // 0x2b212c: 0x8e83021c  lw          $v1, 0x21C($s4)
    ctx->pc = 0x2b212cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b2130:
    // 0x2b2130: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x2b2130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2b2134:
    // 0x2b2134: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2b2138:
    if (ctx->pc == 0x2B2138u) {
        ctx->pc = 0x2B2138u;
            // 0x2b2138: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x2B213Cu;
        goto label_2b213c;
    }
    ctx->pc = 0x2B2134u;
    {
        const bool branch_taken_0x2b2134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B2138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2134u;
            // 0x2b2138: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2134) {
            ctx->pc = 0x2B2150u;
            goto label_2b2150;
        }
    }
    ctx->pc = 0x2B213Cu;
label_2b213c:
    // 0x2b213c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b213cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b2140:
    // 0x2b2140: 0x8c24ca54  lw          $a0, -0x35AC($at)
    ctx->pc = 0x2b2140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953556)));
label_2b2144:
    // 0x2b2144: 0xc0877e0  jal         func_21DF80
label_2b2148:
    if (ctx->pc == 0x2B2148u) {
        ctx->pc = 0x2B2148u;
            // 0x2b2148: 0x240501b3  addiu       $a1, $zero, 0x1B3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
        ctx->pc = 0x2B214Cu;
        goto label_2b214c;
    }
    ctx->pc = 0x2B2144u;
    SET_GPR_U32(ctx, 31, 0x2B214Cu);
    ctx->pc = 0x2B2148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2144u;
            // 0x2b2148: 0x240501b3  addiu       $a1, $zero, 0x1B3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B214Cu; }
        if (ctx->pc != 0x2B214Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B214Cu; }
        if (ctx->pc != 0x2B214Cu) { return; }
    }
    ctx->pc = 0x2B214Cu;
label_2b214c:
    // 0x2b214c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x2b214cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2b2150:
    // 0x2b2150: 0xc094274  jal         func_2509D0
label_2b2154:
    if (ctx->pc == 0x2B2154u) {
        ctx->pc = 0x2B2158u;
        goto label_2b2158;
    }
    ctx->pc = 0x2B2150u;
    SET_GPR_U32(ctx, 31, 0x2B2158u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2158u; }
        if (ctx->pc != 0x2B2158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2158u; }
        if (ctx->pc != 0x2B2158u) { return; }
    }
    ctx->pc = 0x2B2158u;
label_2b2158:
    // 0x2b2158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b215c:
    // 0x2b215c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2b215cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b2160:
    // 0x2b2160: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x2b2160u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_2b2164:
    // 0x2b2164: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x2b2164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_2b2168:
    // 0x2b2168: 0xae4301a8  sw          $v1, 0x1A8($s2)
    ctx->pc = 0x2b2168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 3));
label_2b216c:
    // 0x2b216c: 0x100004c9  b           . + 4 + (0x4C9 << 2)
label_2b2170:
    if (ctx->pc == 0x2B2170u) {
        ctx->pc = 0x2B2170u;
            // 0x2b2170: 0xae4201ac  sw          $v0, 0x1AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 2));
        ctx->pc = 0x2B2174u;
        goto label_2b2174;
    }
    ctx->pc = 0x2B216Cu;
    {
        const bool branch_taken_0x2b216c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B216Cu;
            // 0x2b2170: 0xae4201ac  sw          $v0, 0x1AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b216c) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2174u;
label_2b2174:
    // 0x2b2174: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x2b2174u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_2b2178:
    // 0x2b2178: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b2178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b217c:
    // 0x2b217c: 0x104504c5  beq         $v0, $a1, . + 4 + (0x4C5 << 2)
label_2b2180:
    if (ctx->pc == 0x2B2180u) {
        ctx->pc = 0x2B2184u;
        goto label_2b2184;
    }
    ctx->pc = 0x2B217Cu;
    {
        const bool branch_taken_0x2b217c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2b217c) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2184u;
label_2b2184:
    // 0x2b2184: 0x8e82021c  lw          $v0, 0x21C($s4)
    ctx->pc = 0x2b2184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b2188:
    // 0x2b2188: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2b2188u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b218c:
    // 0x2b218c: 0x1020006c  beqz        $at, . + 4 + (0x6C << 2)
label_2b2190:
    if (ctx->pc == 0x2B2190u) {
        ctx->pc = 0x2B2190u;
            // 0x2b2190: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B2194u;
        goto label_2b2194;
    }
    ctx->pc = 0x2B218Cu;
    {
        const bool branch_taken_0x2b218c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B218Cu;
            // 0x2b2190: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b218c) {
            ctx->pc = 0x2B2340u;
            goto label_2b2340;
        }
    }
    ctx->pc = 0x2B2194u;
label_2b2194:
    // 0x2b2194: 0x8e84020c  lw          $a0, 0x20C($s4)
    ctx->pc = 0x2b2194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 524)));
label_2b2198:
    // 0x2b2198: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2b219c:
    if (ctx->pc == 0x2B219Cu) {
        ctx->pc = 0x2B21A0u;
        goto label_2b21a0;
    }
    ctx->pc = 0x2B2198u;
    {
        const bool branch_taken_0x2b2198 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2198) {
            ctx->pc = 0x2B21B0u;
            goto label_2b21b0;
        }
    }
    ctx->pc = 0x2B21A0u;
label_2b21a0:
    // 0x2b21a0: 0xc0ac380  jal         func_2B0E00
label_2b21a4:
    if (ctx->pc == 0x2B21A4u) {
        ctx->pc = 0x2B21A4u;
            // 0x2b21a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B21A8u;
        goto label_2b21a8;
    }
    ctx->pc = 0x2B21A0u;
    SET_GPR_U32(ctx, 31, 0x2B21A8u);
    ctx->pc = 0x2B21A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B21A0u;
            // 0x2b21a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0E00u;
    if (runtime->hasFunction(0x2B0E00u)) {
        auto targetFn = runtime->lookupFunction(0x2B0E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B21A8u; }
        if (ctx->pc != 0x2B21A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGNPCModel__15CMenuChrCngMenuFi_0x2b0e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B21A8u; }
        if (ctx->pc != 0x2B21A8u) { return; }
    }
    ctx->pc = 0x2B21A8u;
label_2b21a8:
    // 0x2b21a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2b21ac:
    if (ctx->pc == 0x2B21ACu) {
        ctx->pc = 0x2B21ACu;
            // 0x2b21ac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B21B0u;
        goto label_2b21b0;
    }
    ctx->pc = 0x2B21A8u;
    {
        const bool branch_taken_0x2b21a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B21ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B21A8u;
            // 0x2b21ac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b21a8) {
            ctx->pc = 0x2B21C4u;
            goto label_2b21c4;
        }
    }
    ctx->pc = 0x2B21B0u;
label_2b21b0:
    // 0x2b21b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b21b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b21b4:
    // 0x2b21b4: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x2b21b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_2b21b8:
    // 0x2b21b8: 0x320f809  jalr        $t9
label_2b21bc:
    if (ctx->pc == 0x2B21BCu) {
        ctx->pc = 0x2B21BCu;
            // 0x2b21bc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B21C0u;
        goto label_2b21c0;
    }
    ctx->pc = 0x2B21B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B21C0u);
        ctx->pc = 0x2B21BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B21B8u;
            // 0x2b21bc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B21C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B21C0u; }
            if (ctx->pc != 0x2B21C0u) { return; }
        }
        }
    }
    ctx->pc = 0x2B21C0u;
label_2b21c0:
    // 0x2b21c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b21c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b21c4:
    // 0x2b21c4: 0xc094274  jal         func_2509D0
label_2b21c8:
    if (ctx->pc == 0x2B21C8u) {
        ctx->pc = 0x2B21CCu;
        goto label_2b21cc;
    }
    ctx->pc = 0x2B21C4u;
    SET_GPR_U32(ctx, 31, 0x2B21CCu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B21CCu; }
        if (ctx->pc != 0x2B21CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B21CCu; }
        if (ctx->pc != 0x2B21CCu) { return; }
    }
    ctx->pc = 0x2B21CCu;
label_2b21cc:
    // 0x2b21cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b21ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b21d0:
    // 0x2b21d0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b21d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b21d4:
    // 0x2b21d4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2b21d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b21d8:
    // 0x2b21d8: 0xa6830014  sh          $v1, 0x14($s4)
    ctx->pc = 0x2b21d8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 3));
label_2b21dc:
    // 0x2b21dc: 0xae820250  sw          $v0, 0x250($s4)
    ctx->pc = 0x2b21dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 592), GPR_U32(ctx, 2));
label_2b21e0:
    // 0x2b21e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b21e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b21e4:
    // 0x2b21e4: 0x24a5ec18  addiu       $a1, $a1, -0x13E8
    ctx->pc = 0x2b21e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962200));
label_2b21e8:
    // 0x2b21e8: 0xc08e7cc  jal         func_239F30
label_2b21ec:
    if (ctx->pc == 0x2B21ECu) {
        ctx->pc = 0x2B21ECu;
            // 0x2b21ec: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B21F0u;
        goto label_2b21f0;
    }
    ctx->pc = 0x2B21E8u;
    SET_GPR_U32(ctx, 31, 0x2B21F0u);
    ctx->pc = 0x2B21ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B21E8u;
            // 0x2b21ec: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B21F0u; }
        if (ctx->pc != 0x2B21F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B21F0u; }
        if (ctx->pc != 0x2B21F0u) { return; }
    }
    ctx->pc = 0x2B21F0u;
label_2b21f0:
    // 0x2b21f0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2b21f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2b21f4:
    // 0x2b21f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b21f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b21f8:
    // 0x2b21f8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_2b21fc:
    if (ctx->pc == 0x2B21FCu) {
        ctx->pc = 0x2B21FCu;
            // 0x2b21fc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B2200u;
        goto label_2b2200;
    }
    ctx->pc = 0x2B21F8u;
    {
        const bool branch_taken_0x2b21f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B21FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B21F8u;
            // 0x2b21fc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b21f8) {
            ctx->pc = 0x2B2214u;
            goto label_2b2214;
        }
    }
    ctx->pc = 0x2B2200u;
label_2b2200:
    // 0x2b2200: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b2200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b2204:
    // 0x2b2204: 0xc08e7cc  jal         func_239F30
label_2b2208:
    if (ctx->pc == 0x2B2208u) {
        ctx->pc = 0x2B2208u;
            // 0x2b2208: 0x24a5ec28  addiu       $a1, $a1, -0x13D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962216));
        ctx->pc = 0x2B220Cu;
        goto label_2b220c;
    }
    ctx->pc = 0x2B2204u;
    SET_GPR_U32(ctx, 31, 0x2B220Cu);
    ctx->pc = 0x2B2208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2204u;
            // 0x2b2208: 0x24a5ec28  addiu       $a1, $a1, -0x13D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B220Cu; }
        if (ctx->pc != 0x2B220Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B220Cu; }
        if (ctx->pc != 0x2B220Cu) { return; }
    }
    ctx->pc = 0x2B220Cu;
label_2b220c:
    // 0x2b220c: 0x8e820178  lw          $v0, 0x178($s4)
    ctx->pc = 0x2b220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
label_2b2210:
    // 0x2b2210: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2b2210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_2b2214:
    // 0x2b2214: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2b2214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2b2218:
    // 0x2b2218: 0xc0877e0  jal         func_21DF80
label_2b221c:
    if (ctx->pc == 0x2B221Cu) {
        ctx->pc = 0x2B221Cu;
            // 0x2b221c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x2B2220u;
        goto label_2b2220;
    }
    ctx->pc = 0x2B2218u;
    SET_GPR_U32(ctx, 31, 0x2B2220u);
    ctx->pc = 0x2B221Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2218u;
            // 0x2b221c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2220u; }
        if (ctx->pc != 0x2B2220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2220u; }
        if (ctx->pc != 0x2B2220u) { return; }
    }
    ctx->pc = 0x2B2220u;
label_2b2220:
    // 0x2b2220: 0xc087898  jal         func_21E260
label_2b2224:
    if (ctx->pc == 0x2B2224u) {
        ctx->pc = 0x2B2224u;
            // 0x2b2224: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x2B2228u;
        goto label_2b2228;
    }
    ctx->pc = 0x2B2220u;
    SET_GPR_U32(ctx, 31, 0x2B2228u);
    ctx->pc = 0x2B2224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2220u;
            // 0x2b2224: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2228u; }
        if (ctx->pc != 0x2B2228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2228u; }
        if (ctx->pc != 0x2B2228u) { return; }
    }
    ctx->pc = 0x2B2228u;
label_2b2228:
    // 0x2b2228: 0xdf839ba8  ld          $v1, -0x6458($gp)
    ctx->pc = 0x2b2228u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294941608)));
label_2b222c:
    // 0x2b222c: 0x27a501b8  addiu       $a1, $sp, 0x1B8
    ctx->pc = 0x2b222cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_2b2230:
    // 0x2b2230: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b2230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b2234:
    // 0x2b2234: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2b2234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2b2238:
    // 0x2b2238: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2b2238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b223c:
    // 0x2b223c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x2b223cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_2b2240:
    // 0x2b2240: 0x8e830224  lw          $v1, 0x224($s4)
    ctx->pc = 0x2b2240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 548)));
label_2b2244:
    // 0x2b2244: 0xafa301b8  sw          $v1, 0x1B8($sp)
    ctx->pc = 0x2b2244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 3));
label_2b2248:
    // 0x2b2248: 0x8e830228  lw          $v1, 0x228($s4)
    ctx->pc = 0x2b2248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 552)));
label_2b224c:
    // 0x2b224c: 0xafa301bc  sw          $v1, 0x1BC($sp)
    ctx->pc = 0x2b224cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 3));
label_2b2250:
    // 0x2b2250: 0xc0876ec  jal         func_21DBB0
label_2b2254:
    if (ctx->pc == 0x2B2254u) {
        ctx->pc = 0x2B2254u;
            // 0x2b2254: 0xafc200b0  sw          $v0, 0xB0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x2B2258u;
        goto label_2b2258;
    }
    ctx->pc = 0x2B2250u;
    SET_GPR_U32(ctx, 31, 0x2B2258u);
    ctx->pc = 0x2B2254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2250u;
            // 0x2b2254: 0xafc200b0  sw          $v0, 0xB0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2258u; }
        if (ctx->pc != 0x2B2258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2258u; }
        if (ctx->pc != 0x2B2258u) { return; }
    }
    ctx->pc = 0x2B2258u;
label_2b2258:
    // 0x2b2258: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2b2258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2b225c:
    // 0x2b225c: 0xc0877e0  jal         func_21DF80
label_2b2260:
    if (ctx->pc == 0x2B2260u) {
        ctx->pc = 0x2B2260u;
            // 0x2b2260: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2B2264u;
        goto label_2b2264;
    }
    ctx->pc = 0x2B225Cu;
    SET_GPR_U32(ctx, 31, 0x2B2264u);
    ctx->pc = 0x2B2260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B225Cu;
            // 0x2b2260: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2264u; }
        if (ctx->pc != 0x2B2264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2264u; }
        if (ctx->pc != 0x2B2264u) { return; }
    }
    ctx->pc = 0x2B2264u;
label_2b2264:
    // 0x2b2264: 0xc087898  jal         func_21E260
label_2b2268:
    if (ctx->pc == 0x2B2268u) {
        ctx->pc = 0x2B2268u;
            // 0x2b2268: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B226Cu;
        goto label_2b226c;
    }
    ctx->pc = 0x2B2264u;
    SET_GPR_U32(ctx, 31, 0x2B226Cu);
    ctx->pc = 0x2B2268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2264u;
            // 0x2b2268: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B226Cu; }
        if (ctx->pc != 0x2B226Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B226Cu; }
        if (ctx->pc != 0x2B226Cu) { return; }
    }
    ctx->pc = 0x2B226Cu;
label_2b226c:
    // 0x2b226c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b226cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b2270:
    // 0x2b2270: 0xc0877e0  jal         func_21DF80
label_2b2274:
    if (ctx->pc == 0x2B2274u) {
        ctx->pc = 0x2B2274u;
            // 0x2b2274: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x2B2278u;
        goto label_2b2278;
    }
    ctx->pc = 0x2B2270u;
    SET_GPR_U32(ctx, 31, 0x2B2278u);
    ctx->pc = 0x2B2274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2270u;
            // 0x2b2274: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2278u; }
        if (ctx->pc != 0x2B2278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2278u; }
        if (ctx->pc != 0x2B2278u) { return; }
    }
    ctx->pc = 0x2B2278u;
label_2b2278:
    // 0x2b2278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b2278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b227c:
    // 0x2b227c: 0x2685022c  addiu       $a1, $s4, 0x22C
    ctx->pc = 0x2b227cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 556));
label_2b2280:
    // 0x2b2280: 0xc0876ec  jal         func_21DBB0
label_2b2284:
    if (ctx->pc == 0x2B2284u) {
        ctx->pc = 0x2B2284u;
            // 0x2b2284: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2B2288u;
        goto label_2b2288;
    }
    ctx->pc = 0x2B2280u;
    SET_GPR_U32(ctx, 31, 0x2B2288u);
    ctx->pc = 0x2B2284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2280u;
            // 0x2b2284: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2288u; }
        if (ctx->pc != 0x2B2288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2288u; }
        if (ctx->pc != 0x2B2288u) { return; }
    }
    ctx->pc = 0x2B2288u;
label_2b2288:
    // 0x2b2288: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2b2288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2b228c:
    // 0x2b228c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b228cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b2290:
    // 0x2b2290: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x2b2290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_2b2294:
    // 0x2b2294: 0xc0875b0  jal         func_21D6C0
label_2b2298:
    if (ctx->pc == 0x2B2298u) {
        ctx->pc = 0x2B2298u;
            // 0x2b2298: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B229Cu;
        goto label_2b229c;
    }
    ctx->pc = 0x2B2294u;
    SET_GPR_U32(ctx, 31, 0x2B229Cu);
    ctx->pc = 0x2B2298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2294u;
            // 0x2b2298: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B229Cu; }
        if (ctx->pc != 0x2B229Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B229Cu; }
        if (ctx->pc != 0x2B229Cu) { return; }
    }
    ctx->pc = 0x2B229Cu;
label_2b229c:
    // 0x2b229c: 0x8e8201f8  lw          $v0, 0x1F8($s4)
    ctx->pc = 0x2b229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 504)));
label_2b22a0:
    // 0x2b22a0: 0x80420030  lb          $v0, 0x30($v0)
    ctx->pc = 0x2b22a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 48)));
label_2b22a4:
    // 0x2b22a4: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_2b22a8:
    if (ctx->pc == 0x2B22A8u) {
        ctx->pc = 0x2B22A8u;
            // 0x2b22a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B22ACu;
        goto label_2b22ac;
    }
    ctx->pc = 0x2B22A4u;
    {
        const bool branch_taken_0x2b22a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B22A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B22A4u;
            // 0x2b22a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b22a4) {
            ctx->pc = 0x2B22CCu;
            goto label_2b22cc;
        }
    }
    ctx->pc = 0x2B22ACu;
label_2b22ac:
    // 0x2b22ac: 0xc0875b0  jal         func_21D6C0
label_2b22b0:
    if (ctx->pc == 0x2B22B0u) {
        ctx->pc = 0x2B22B0u;
            // 0x2b22b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B22B4u;
        goto label_2b22b4;
    }
    ctx->pc = 0x2B22ACu;
    SET_GPR_U32(ctx, 31, 0x2B22B4u);
    ctx->pc = 0x2B22B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B22ACu;
            // 0x2b22b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B22B4u; }
        if (ctx->pc != 0x2B22B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B22B4u; }
        if (ctx->pc != 0x2B22B4u) { return; }
    }
    ctx->pc = 0x2B22B4u;
label_2b22b4:
    // 0x2b22b4: 0x83859b9c  lb          $a1, -0x6464($gp)
    ctx->pc = 0x2b22b4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941596)));
label_2b22b8:
    // 0x2b22b8: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x2b22b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2b22bc:
    // 0x2b22bc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2b22c0:
    if (ctx->pc == 0x2B22C0u) {
        ctx->pc = 0x2B22C0u;
            // 0x2b22c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B22C4u;
        goto label_2b22c4;
    }
    ctx->pc = 0x2B22BCu;
    {
        const bool branch_taken_0x2b22bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B22C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B22BCu;
            // 0x2b22c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b22bc) {
            ctx->pc = 0x2B22CCu;
            goto label_2b22cc;
        }
    }
    ctx->pc = 0x2B22C4u;
label_2b22c4:
    // 0x2b22c4: 0xc0875b0  jal         func_21D6C0
label_2b22c8:
    if (ctx->pc == 0x2B22C8u) {
        ctx->pc = 0x2B22CCu;
        goto label_2b22cc;
    }
    ctx->pc = 0x2B22C4u;
    SET_GPR_U32(ctx, 31, 0x2B22CCu);
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B22CCu; }
        if (ctx->pc != 0x2B22CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B22CCu; }
        if (ctx->pc != 0x2B22CCu) { return; }
    }
    ctx->pc = 0x2B22CCu;
label_2b22cc:
    // 0x2b22cc: 0xae800270  sw          $zero, 0x270($s4)
    ctx->pc = 0x2b22ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 624), GPR_U32(ctx, 0));
label_2b22d0:
    // 0x2b22d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b22d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b22d4:
    // 0x2b22d4: 0x86c30050  lh          $v1, 0x50($s6)
    ctx->pc = 0x2b22d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 80)));
label_2b22d8:
    // 0x2b22d8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2b22dc:
    if (ctx->pc == 0x2B22DCu) {
        ctx->pc = 0x2B22DCu;
            // 0x2b22dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B22E0u;
        goto label_2b22e0;
    }
    ctx->pc = 0x2B22D8u;
    {
        const bool branch_taken_0x2b22d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B22DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B22D8u;
            // 0x2b22dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b22d8) {
            ctx->pc = 0x2B22F4u;
            goto label_2b22f4;
        }
    }
    ctx->pc = 0x2B22E0u;
label_2b22e0:
    // 0x2b22e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b22e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b22e4:
    // 0x2b22e4: 0xc0875b0  jal         func_21D6C0
label_2b22e8:
    if (ctx->pc == 0x2B22E8u) {
        ctx->pc = 0x2B22E8u;
            // 0x2b22e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B22ECu;
        goto label_2b22ec;
    }
    ctx->pc = 0x2B22E4u;
    SET_GPR_U32(ctx, 31, 0x2B22ECu);
    ctx->pc = 0x2B22E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B22E4u;
            // 0x2b22e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B22ECu; }
        if (ctx->pc != 0x2B22ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B22ECu; }
        if (ctx->pc != 0x2B22ECu) { return; }
    }
    ctx->pc = 0x2B22ECu;
label_2b22ec:
    // 0x2b22ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_2b22f0:
    if (ctx->pc == 0x2B22F0u) {
        ctx->pc = 0x2B22F0u;
            // 0x2b22f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B22F4u;
        goto label_2b22f4;
    }
    ctx->pc = 0x2B22ECu;
    {
        const bool branch_taken_0x2b22ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B22F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B22ECu;
            // 0x2b22f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b22ec) {
            ctx->pc = 0x2B22FCu;
            goto label_2b22fc;
        }
    }
    ctx->pc = 0x2B22F4u;
label_2b22f4:
    // 0x2b22f4: 0xae820270  sw          $v0, 0x270($s4)
    ctx->pc = 0x2b22f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 624), GPR_U32(ctx, 2));
label_2b22f8:
    // 0x2b22f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b22fc:
    // 0x2b22fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b22fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2300:
    // 0x2b2300: 0xa38293f8  sb          $v0, -0x6C08($gp)
    ctx->pc = 0x2b2300u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939640), (uint8_t)GPR_U32(ctx, 2));
label_2b2304:
    // 0x2b2304: 0xae800138  sw          $zero, 0x138($s4)
    ctx->pc = 0x2b2304u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 0));
label_2b2308:
    // 0x2b2308: 0xc068644  jal         func_1A1910
label_2b230c:
    if (ctx->pc == 0x2B230Cu) {
        ctx->pc = 0x2B230Cu;
            // 0x2b230c: 0xae80013c  sw          $zero, 0x13C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 316), GPR_U32(ctx, 0));
        ctx->pc = 0x2B2310u;
        goto label_2b2310;
    }
    ctx->pc = 0x2B2308u;
    SET_GPR_U32(ctx, 31, 0x2B2310u);
    ctx->pc = 0x2B230Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2308u;
            // 0x2b230c: 0xae80013c  sw          $zero, 0x13C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2310u; }
        if (ctx->pc != 0x2B2310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2310u; }
        if (ctx->pc != 0x2B2310u) { return; }
    }
    ctx->pc = 0x2B2310u;
label_2b2310:
    // 0x2b2310: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x2b2310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
label_2b2314:
    // 0x2b2314: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2b2314u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_2b2318:
    // 0x2b2318: 0x3485aaab  ori         $a1, $a0, 0xAAAB
    ctx->pc = 0x2b2318u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
label_2b231c:
    // 0x2b231c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2b231cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b2320:
    // 0x2b2320: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x2b2320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2b2324:
    // 0x2b2324: 0x8e840138  lw          $a0, 0x138($s4)
    ctx->pc = 0x2b2324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_2b2328:
    // 0x2b2328: 0x8e85013c  lw          $a1, 0x13C($s4)
    ctx->pc = 0x2b2328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 316)));
label_2b232c:
    // 0x2b232c: 0x1010  mfhi        $v0
    ctx->pc = 0x2b232cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2b2330:
    // 0x2b2330: 0xc089b7c  jal         func_226DF0
label_2b2334:
    if (ctx->pc == 0x2B2334u) {
        ctx->pc = 0x2B2334u;
            // 0x2b2334: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2B2338u;
        goto label_2b2338;
    }
    ctx->pc = 0x2B2330u;
    SET_GPR_U32(ctx, 31, 0x2B2338u);
    ctx->pc = 0x2B2334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2330u;
            // 0x2b2334: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226DF0u;
    if (runtime->hasFunction(0x226DF0u)) {
        auto targetFn = runtime->lookupFunction(0x226DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2338u; }
        if (ctx->pc != 0x2B2338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemBrdSetInfo__Fiiii_0x226df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2338u; }
        if (ctx->pc != 0x2B2338u) { return; }
    }
    ctx->pc = 0x2B2338u;
label_2b2338:
    // 0x2b2338: 0x10000456  b           . + 4 + (0x456 << 2)
label_2b233c:
    if (ctx->pc == 0x2B233Cu) {
        ctx->pc = 0x2B2340u;
        goto label_2b2340;
    }
    ctx->pc = 0x2B2338u;
    {
        const bool branch_taken_0x2b2338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2338) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2340u;
label_2b2340:
    // 0x2b2340: 0xc094274  jal         func_2509D0
label_2b2344:
    if (ctx->pc == 0x2B2344u) {
        ctx->pc = 0x2B2348u;
        goto label_2b2348;
    }
    ctx->pc = 0x2B2340u;
    SET_GPR_U32(ctx, 31, 0x2B2348u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2348u; }
        if (ctx->pc != 0x2B2348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2348u; }
        if (ctx->pc != 0x2B2348u) { return; }
    }
    ctx->pc = 0x2B2348u;
label_2b2348:
    // 0x2b2348: 0x10000452  b           . + 4 + (0x452 << 2)
label_2b234c:
    if (ctx->pc == 0x2B234Cu) {
        ctx->pc = 0x2B2350u;
        goto label_2b2350;
    }
    ctx->pc = 0x2B2348u;
    {
        const bool branch_taken_0x2b2348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2348) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2350u;
label_2b2350:
    // 0x2b2350: 0x8e830110  lw          $v1, 0x110($s4)
    ctx->pc = 0x2b2350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_2b2354:
    // 0x2b2354: 0x8c24d8c8  lw          $a0, -0x2738($at)
    ctx->pc = 0x2b2354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
label_2b2358:
    // 0x2b2358: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
label_2b235c:
    if (ctx->pc == 0x2B235Cu) {
        ctx->pc = 0x2B235Cu;
            // 0x2b235c: 0x24900020  addiu       $s0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x2B2360u;
        goto label_2b2360;
    }
    ctx->pc = 0x2B2358u;
    {
        const bool branch_taken_0x2b2358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B235Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2358u;
            // 0x2b235c: 0x24900020  addiu       $s0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2358) {
            ctx->pc = 0x2B23C0u;
            goto label_2b23c0;
        }
    }
    ctx->pc = 0x2B2360u;
label_2b2360:
    // 0x2b2360: 0xc094274  jal         func_2509D0
label_2b2364:
    if (ctx->pc == 0x2B2364u) {
        ctx->pc = 0x2B2364u;
            // 0x2b2364: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B2368u;
        goto label_2b2368;
    }
    ctx->pc = 0x2B2360u;
    SET_GPR_U32(ctx, 31, 0x2B2368u);
    ctx->pc = 0x2B2364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2360u;
            // 0x2b2364: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2368u; }
        if (ctx->pc != 0x2B2368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2368u; }
        if (ctx->pc != 0x2B2368u) { return; }
    }
    ctx->pc = 0x2B2368u;
label_2b2368:
    // 0x2b2368: 0x8e830110  lw          $v1, 0x110($s4)
    ctx->pc = 0x2b2368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_2b236c:
    // 0x2b236c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b2370:
    // 0x2b2370: 0x14620448  bne         $v1, $v0, . + 4 + (0x448 << 2)
label_2b2374:
    if (ctx->pc == 0x2B2374u) {
        ctx->pc = 0x2B2378u;
        goto label_2b2378;
    }
    ctx->pc = 0x2B2370u;
    {
        const bool branch_taken_0x2b2370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b2370) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2378u;
label_2b2378:
    // 0x2b2378: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2b2378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b237c:
    // 0x2b237c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b237cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b2380:
    // 0x2b2380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b2384:
    // 0x2b2384: 0x0  nop
    ctx->pc = 0x2b2384u;
    // NOP
label_2b2388:
    // 0x2b2388: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b2388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b238c:
    // 0x2b238c: 0x0  nop
    ctx->pc = 0x2b238cu;
    // NOP
label_2b2390:
    // 0x2b2390: 0x45000440  bc1f        . + 4 + (0x440 << 2)
label_2b2394:
    if (ctx->pc == 0x2B2394u) {
        ctx->pc = 0x2B2394u;
            // 0x2b2394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B2398u;
        goto label_2b2398;
    }
    ctx->pc = 0x2B2390u;
    {
        const bool branch_taken_0x2b2390 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B2394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2390u;
            // 0x2b2394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2390) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2398u;
label_2b2398:
    // 0x2b2398: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b2398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b239c:
    // 0x2b239c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b239cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b23a0:
    // 0x2b23a0: 0xa682011c  sh          $v0, 0x11C($s4)
    ctx->pc = 0x2b23a0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 284), (uint16_t)GPR_U32(ctx, 2));
label_2b23a4:
    // 0x2b23a4: 0xc08e7cc  jal         func_239F30
label_2b23a8:
    if (ctx->pc == 0x2B23A8u) {
        ctx->pc = 0x2B23A8u;
            // 0x2b23a8: 0x24a5ec38  addiu       $a1, $a1, -0x13C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962232));
        ctx->pc = 0x2B23ACu;
        goto label_2b23ac;
    }
    ctx->pc = 0x2B23A4u;
    SET_GPR_U32(ctx, 31, 0x2B23ACu);
    ctx->pc = 0x2B23A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B23A4u;
            // 0x2b23a8: 0x24a5ec38  addiu       $a1, $a1, -0x13C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B23ACu; }
        if (ctx->pc != 0x2B23ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B23ACu; }
        if (ctx->pc != 0x2B23ACu) { return; }
    }
    ctx->pc = 0x2B23ACu;
label_2b23ac:
    // 0x2b23ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b23acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b23b0:
    // 0x2b23b0: 0xc0877e0  jal         func_21DF80
label_2b23b4:
    if (ctx->pc == 0x2B23B4u) {
        ctx->pc = 0x2B23B4u;
            // 0x2b23b4: 0x240501a4  addiu       $a1, $zero, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
        ctx->pc = 0x2B23B8u;
        goto label_2b23b8;
    }
    ctx->pc = 0x2B23B0u;
    SET_GPR_U32(ctx, 31, 0x2B23B8u);
    ctx->pc = 0x2B23B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B23B0u;
            // 0x2b23b4: 0x240501a4  addiu       $a1, $zero, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B23B8u; }
        if (ctx->pc != 0x2B23B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B23B8u; }
        if (ctx->pc != 0x2B23B8u) { return; }
    }
    ctx->pc = 0x2B23B8u;
label_2b23b8:
    // 0x2b23b8: 0x10000436  b           . + 4 + (0x436 << 2)
label_2b23bc:
    if (ctx->pc == 0x2B23BCu) {
        ctx->pc = 0x2B23C0u;
        goto label_2b23c0;
    }
    ctx->pc = 0x2B23B8u;
    {
        const bool branch_taken_0x2b23b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b23b8) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B23C0u;
label_2b23c0:
    // 0x2b23c0: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b23c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b23c4:
    // 0x2b23c4: 0xc0670b0  jal         func_19C2C0
label_2b23c8:
    if (ctx->pc == 0x2B23C8u) {
        ctx->pc = 0x2B23C8u;
            // 0x2b23c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B23CCu;
        goto label_2b23cc;
    }
    ctx->pc = 0x2B23C4u;
    SET_GPR_U32(ctx, 31, 0x2B23CCu);
    ctx->pc = 0x2B23C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B23C4u;
            // 0x2b23c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2C0u;
    if (runtime->hasFunction(0x19C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B23CCu; }
        if (ctx->pc != 0x2B23CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaStatusAttirbute__16CUserDataManagerFi_0x19c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B23CCu; }
        if (ctx->pc != 0x2B23CCu) { return; }
    }
    ctx->pc = 0x2B23CCu;
label_2b23cc:
    // 0x2b23cc: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x2b23ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2b23d0:
    // 0x2b23d0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2b23d4:
    if (ctx->pc == 0x2B23D4u) {
        ctx->pc = 0x2B23D8u;
        goto label_2b23d8;
    }
    ctx->pc = 0x2B23D0u;
    {
        const bool branch_taken_0x2b23d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b23d0) {
            ctx->pc = 0x2B23E4u;
            goto label_2b23e4;
        }
    }
    ctx->pc = 0x2B23D8u;
label_2b23d8:
    // 0x2b23d8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2b23d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2b23dc:
    // 0x2b23dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2b23e0:
    if (ctx->pc == 0x2B23E0u) {
        ctx->pc = 0x2B23E4u;
        goto label_2b23e4;
    }
    ctx->pc = 0x2B23DCu;
    {
        const bool branch_taken_0x2b23dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b23dc) {
            ctx->pc = 0x2B2414u;
            goto label_2b2414;
        }
    }
    ctx->pc = 0x2B23E4u;
label_2b23e4:
    // 0x2b23e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b23e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b23e8:
    // 0x2b23e8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b23e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b23ec:
    // 0x2b23ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b23ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b23f0:
    // 0x2b23f0: 0xa682011c  sh          $v0, 0x11C($s4)
    ctx->pc = 0x2b23f0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 284), (uint16_t)GPR_U32(ctx, 2));
label_2b23f4:
    // 0x2b23f4: 0xc08e7cc  jal         func_239F30
label_2b23f8:
    if (ctx->pc == 0x2B23F8u) {
        ctx->pc = 0x2B23F8u;
            // 0x2b23f8: 0x24a5ec38  addiu       $a1, $a1, -0x13C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962232));
        ctx->pc = 0x2B23FCu;
        goto label_2b23fc;
    }
    ctx->pc = 0x2B23F4u;
    SET_GPR_U32(ctx, 31, 0x2B23FCu);
    ctx->pc = 0x2B23F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B23F4u;
            // 0x2b23f8: 0x24a5ec38  addiu       $a1, $a1, -0x13C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B23FCu; }
        if (ctx->pc != 0x2B23FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B23FCu; }
        if (ctx->pc != 0x2B23FCu) { return; }
    }
    ctx->pc = 0x2B23FCu;
label_2b23fc:
    // 0x2b23fc: 0x8e820110  lw          $v0, 0x110($s4)
    ctx->pc = 0x2b23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_2b2400:
    // 0x2b2400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b2400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b2404:
    // 0x2b2404: 0xc0877e0  jal         func_21DF80
label_2b2408:
    if (ctx->pc == 0x2B2408u) {
        ctx->pc = 0x2B2408u;
            // 0x2b2408: 0x244501a5  addiu       $a1, $v0, 0x1A5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 421));
        ctx->pc = 0x2B240Cu;
        goto label_2b240c;
    }
    ctx->pc = 0x2B2404u;
    SET_GPR_U32(ctx, 31, 0x2B240Cu);
    ctx->pc = 0x2B2408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2404u;
            // 0x2b2408: 0x244501a5  addiu       $a1, $v0, 0x1A5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 421));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B240Cu; }
        if (ctx->pc != 0x2B240Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B240Cu; }
        if (ctx->pc != 0x2B240Cu) { return; }
    }
    ctx->pc = 0x2B240Cu;
label_2b240c:
    // 0x2b240c: 0x10000421  b           . + 4 + (0x421 << 2)
label_2b2410:
    if (ctx->pc == 0x2B2410u) {
        ctx->pc = 0x2B2414u;
        goto label_2b2414;
    }
    ctx->pc = 0x2B240Cu;
    {
        const bool branch_taken_0x2b240c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b240c) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2414u;
label_2b2414:
    // 0x2b2414: 0xc066e94  jal         func_19BA50
label_2b2418:
    if (ctx->pc == 0x2B2418u) {
        ctx->pc = 0x2B2418u;
            // 0x2b2418: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->pc = 0x2B241Cu;
        goto label_2b241c;
    }
    ctx->pc = 0x2B2414u;
    SET_GPR_U32(ctx, 31, 0x2B241Cu);
    ctx->pc = 0x2B2418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2414u;
            // 0x2b2418: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BA50u;
    if (runtime->hasFunction(0x19BA50u)) {
        auto targetFn = runtime->lookupFunction(0x19BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B241Cu; }
        if (ctx->pc != 0x2B241Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowPartyMember__16CUserDataManagerFv_0x19ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B241Cu; }
        if (ctx->pc != 0x2B241Cu) { return; }
    }
    ctx->pc = 0x2B241Cu;
label_2b241c:
    // 0x2b241c: 0xae820128  sw          $v0, 0x128($s4)
    ctx->pc = 0x2b241cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 2));
label_2b2420:
    // 0x2b2420: 0xc066fe0  jal         func_19BF80
label_2b2424:
    if (ctx->pc == 0x2B2424u) {
        ctx->pc = 0x2B2424u;
            // 0x2b2424: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->pc = 0x2B2428u;
        goto label_2b2428;
    }
    ctx->pc = 0x2B2420u;
    SET_GPR_U32(ctx, 31, 0x2B2428u);
    ctx->pc = 0x2B2424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2420u;
            // 0x2b2424: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF80u;
    if (runtime->hasFunction(0x19BF80u)) {
        auto targetFn = runtime->lookupFunction(0x19BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2428u; }
        if (ctx->pc != 0x2B2428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableCharaChangeFlag__16CUserDataManagerFv_0x19bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2428u; }
        if (ctx->pc != 0x2B2428u) { return; }
    }
    ctx->pc = 0x2B2428u;
label_2b2428:
    // 0x2b2428: 0xae820124  sw          $v0, 0x124($s4)
    ctx->pc = 0x2b2428u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
label_2b242c:
    // 0x2b242c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b242cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2430:
    // 0x2b2430: 0x8e850110  lw          $a1, 0x110($s4)
    ctx->pc = 0x2b2430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_2b2434:
    // 0x2b2434: 0x8e820128  lw          $v0, 0x128($s4)
    ctx->pc = 0x2b2434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
label_2b2438:
    // 0x2b2438: 0xa32004  sllv        $a0, $v1, $a1
    ctx->pc = 0x2b2438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_2b243c:
    // 0x2b243c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b243cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2b2440:
    // 0x2b2440: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b2444:
    if (ctx->pc == 0x2B2444u) {
        ctx->pc = 0x2B2448u;
        goto label_2b2448;
    }
    ctx->pc = 0x2B2440u;
    {
        const bool branch_taken_0x2b2440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2440) {
            ctx->pc = 0x2B2458u;
            goto label_2b2458;
        }
    }
    ctx->pc = 0x2B2448u;
label_2b2448:
    // 0x2b2448: 0xc094274  jal         func_2509D0
label_2b244c:
    if (ctx->pc == 0x2B244Cu) {
        ctx->pc = 0x2B244Cu;
            // 0x2b244c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B2450u;
        goto label_2b2450;
    }
    ctx->pc = 0x2B2448u;
    SET_GPR_U32(ctx, 31, 0x2B2450u);
    ctx->pc = 0x2B244Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2448u;
            // 0x2b244c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2450u; }
        if (ctx->pc != 0x2B2450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2450u; }
        if (ctx->pc != 0x2B2450u) { return; }
    }
    ctx->pc = 0x2B2450u;
label_2b2450:
    // 0x2b2450: 0x10000410  b           . + 4 + (0x410 << 2)
label_2b2454:
    if (ctx->pc == 0x2B2454u) {
        ctx->pc = 0x2B2458u;
        goto label_2b2458;
    }
    ctx->pc = 0x2B2450u;
    {
        const bool branch_taken_0x2b2450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2450) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2458u;
label_2b2458:
    // 0x2b2458: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x2b2458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
label_2b245c:
    // 0x2b245c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b245cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2b2460:
    // 0x2b2460: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2b2464:
    if (ctx->pc == 0x2B2464u) {
        ctx->pc = 0x2B2464u;
            // 0x2b2464: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B2468u;
        goto label_2b2468;
    }
    ctx->pc = 0x2B2460u;
    {
        const bool branch_taken_0x2b2460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2460u;
            // 0x2b2464: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2460) {
            ctx->pc = 0x2B24A0u;
            goto label_2b24a0;
        }
    }
    ctx->pc = 0x2B2468u;
label_2b2468:
    // 0x2b2468: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
label_2b246c:
    if (ctx->pc == 0x2B246Cu) {
        ctx->pc = 0x2B246Cu;
            // 0x2b246c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x2B2470u;
        goto label_2b2470;
    }
    ctx->pc = 0x2B2468u;
    {
        const bool branch_taken_0x2b2468 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B246Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2468u;
            // 0x2b246c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2468) {
            ctx->pc = 0x2B24A0u;
            goto label_2b24a0;
        }
    }
    ctx->pc = 0x2B2470u;
label_2b2470:
    // 0x2b2470: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b2470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b2474:
    // 0x2b2474: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x2b2474u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_2b2478:
    // 0x2b2478: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b2478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b247c:
    // 0x2b247c: 0x24a5ec38  addiu       $a1, $a1, -0x13C8
    ctx->pc = 0x2b247cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962232));
label_2b2480:
    // 0x2b2480: 0xc08e7cc  jal         func_239F30
label_2b2484:
    if (ctx->pc == 0x2B2484u) {
        ctx->pc = 0x2B2484u;
            // 0x2b2484: 0xa683011c  sh          $v1, 0x11C($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 284), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2B2488u;
        goto label_2b2488;
    }
    ctx->pc = 0x2B2480u;
    SET_GPR_U32(ctx, 31, 0x2B2488u);
    ctx->pc = 0x2B2484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2480u;
            // 0x2b2484: 0xa683011c  sh          $v1, 0x11C($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 284), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2488u; }
        if (ctx->pc != 0x2B2488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2488u; }
        if (ctx->pc != 0x2B2488u) { return; }
    }
    ctx->pc = 0x2B2488u;
label_2b2488:
    // 0x2b2488: 0x8e820110  lw          $v0, 0x110($s4)
    ctx->pc = 0x2b2488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_2b248c:
    // 0x2b248c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b248cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b2490:
    // 0x2b2490: 0xc0877e0  jal         func_21DF80
label_2b2494:
    if (ctx->pc == 0x2B2494u) {
        ctx->pc = 0x2B2494u;
            // 0x2b2494: 0x244501a5  addiu       $a1, $v0, 0x1A5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 421));
        ctx->pc = 0x2B2498u;
        goto label_2b2498;
    }
    ctx->pc = 0x2B2490u;
    SET_GPR_U32(ctx, 31, 0x2B2498u);
    ctx->pc = 0x2B2494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2490u;
            // 0x2b2494: 0x244501a5  addiu       $a1, $v0, 0x1A5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 421));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2498u; }
        if (ctx->pc != 0x2B2498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2498u; }
        if (ctx->pc != 0x2B2498u) { return; }
    }
    ctx->pc = 0x2B2498u;
label_2b2498:
    // 0x2b2498: 0x100003fe  b           . + 4 + (0x3FE << 2)
label_2b249c:
    if (ctx->pc == 0x2B249Cu) {
        ctx->pc = 0x2B24A0u;
        goto label_2b24a0;
    }
    ctx->pc = 0x2B2498u;
    {
        const bool branch_taken_0x2b2498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2498) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B24A0u;
label_2b24a0:
    // 0x2b24a0: 0x86c20050  lh          $v0, 0x50($s6)
    ctx->pc = 0x2b24a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 80)));
label_2b24a4:
    // 0x2b24a4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2b24a8:
    if (ctx->pc == 0x2B24A8u) {
        ctx->pc = 0x2B24A8u;
            // 0x2b24a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B24ACu;
        goto label_2b24ac;
    }
    ctx->pc = 0x2B24A4u;
    {
        const bool branch_taken_0x2b24a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B24A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B24A4u;
            // 0x2b24a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b24a4) {
            ctx->pc = 0x2B24CCu;
            goto label_2b24cc;
        }
    }
    ctx->pc = 0x2B24ACu;
label_2b24ac:
    // 0x2b24ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b24acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b24b0:
    // 0x2b24b0: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_2b24b4:
    if (ctx->pc == 0x2B24B4u) {
        ctx->pc = 0x2B24B4u;
            // 0x2b24b4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B24B8u;
        goto label_2b24b8;
    }
    ctx->pc = 0x2B24B0u;
    {
        const bool branch_taken_0x2b24b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B24B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B24B0u;
            // 0x2b24b4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b24b0) {
            ctx->pc = 0x2B24C8u;
            goto label_2b24c8;
        }
    }
    ctx->pc = 0x2B24B8u;
label_2b24b8:
    // 0x2b24b8: 0xc094274  jal         func_2509D0
label_2b24bc:
    if (ctx->pc == 0x2B24BCu) {
        ctx->pc = 0x2B24C0u;
        goto label_2b24c0;
    }
    ctx->pc = 0x2B24B8u;
    SET_GPR_U32(ctx, 31, 0x2B24C0u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B24C0u; }
        if (ctx->pc != 0x2B24C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B24C0u; }
        if (ctx->pc != 0x2B24C0u) { return; }
    }
    ctx->pc = 0x2B24C0u;
label_2b24c0:
    // 0x2b24c0: 0x100003f4  b           . + 4 + (0x3F4 << 2)
label_2b24c4:
    if (ctx->pc == 0x2B24C4u) {
        ctx->pc = 0x2B24C8u;
        goto label_2b24c8;
    }
    ctx->pc = 0x2B24C0u;
    {
        const bool branch_taken_0x2b24c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b24c0) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B24C8u;
label_2b24c8:
    // 0x2b24c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b24cc:
    // 0x2b24cc: 0x14a20013  bne         $a1, $v0, . + 4 + (0x13 << 2)
label_2b24d0:
    if (ctx->pc == 0x2B24D0u) {
        ctx->pc = 0x2B24D4u;
        goto label_2b24d4;
    }
    ctx->pc = 0x2B24CCu;
    {
        const bool branch_taken_0x2b24cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b24cc) {
            ctx->pc = 0x2B251Cu;
            goto label_2b251c;
        }
    }
    ctx->pc = 0x2B24D4u;
label_2b24d4:
    // 0x2b24d4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2b24d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b24d8:
    // 0x2b24d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b24d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b24dc:
    // 0x2b24dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b24dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b24e0:
    // 0x2b24e0: 0x0  nop
    ctx->pc = 0x2b24e0u;
    // NOP
label_2b24e4:
    // 0x2b24e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b24e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b24e8:
    // 0x2b24e8: 0x0  nop
    ctx->pc = 0x2b24e8u;
    // NOP
label_2b24ec:
    // 0x2b24ec: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2b24f0:
    if (ctx->pc == 0x2B24F0u) {
        ctx->pc = 0x2B24F0u;
            // 0x2b24f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B24F4u;
        goto label_2b24f4;
    }
    ctx->pc = 0x2B24ECu;
    {
        const bool branch_taken_0x2b24ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B24F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B24ECu;
            // 0x2b24f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b24ec) {
            ctx->pc = 0x2B251Cu;
            goto label_2b251c;
        }
    }
    ctx->pc = 0x2B24F4u;
label_2b24f4:
    // 0x2b24f4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b24f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b24f8:
    // 0x2b24f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b24f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b24fc:
    // 0x2b24fc: 0xa682011c  sh          $v0, 0x11C($s4)
    ctx->pc = 0x2b24fcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 284), (uint16_t)GPR_U32(ctx, 2));
label_2b2500:
    // 0x2b2500: 0xc08e7cc  jal         func_239F30
label_2b2504:
    if (ctx->pc == 0x2B2504u) {
        ctx->pc = 0x2B2504u;
            // 0x2b2504: 0x24a5ec38  addiu       $a1, $a1, -0x13C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962232));
        ctx->pc = 0x2B2508u;
        goto label_2b2508;
    }
    ctx->pc = 0x2B2500u;
    SET_GPR_U32(ctx, 31, 0x2B2508u);
    ctx->pc = 0x2B2504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2500u;
            // 0x2b2504: 0x24a5ec38  addiu       $a1, $a1, -0x13C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2508u; }
        if (ctx->pc != 0x2B2508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2508u; }
        if (ctx->pc != 0x2B2508u) { return; }
    }
    ctx->pc = 0x2B2508u;
label_2b2508:
    // 0x2b2508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b2508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b250c:
    // 0x2b250c: 0xc0877e0  jal         func_21DF80
label_2b2510:
    if (ctx->pc == 0x2B2510u) {
        ctx->pc = 0x2B2510u;
            // 0x2b2510: 0x240501a4  addiu       $a1, $zero, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
        ctx->pc = 0x2B2514u;
        goto label_2b2514;
    }
    ctx->pc = 0x2B250Cu;
    SET_GPR_U32(ctx, 31, 0x2B2514u);
    ctx->pc = 0x2B2510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B250Cu;
            // 0x2b2510: 0x240501a4  addiu       $a1, $zero, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2514u; }
        if (ctx->pc != 0x2B2514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2514u; }
        if (ctx->pc != 0x2B2514u) { return; }
    }
    ctx->pc = 0x2B2514u;
label_2b2514:
    // 0x2b2514: 0x100003df  b           . + 4 + (0x3DF << 2)
label_2b2518:
    if (ctx->pc == 0x2B2518u) {
        ctx->pc = 0x2B251Cu;
        goto label_2b251c;
    }
    ctx->pc = 0x2B2514u;
    {
        const bool branch_taken_0x2b2514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2514) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B251Cu;
label_2b251c:
    // 0x2b251c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2b2520:
    if (ctx->pc == 0x2B2520u) {
        ctx->pc = 0x2B2520u;
            // 0x2b2520: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x2B2524u;
        goto label_2b2524;
    }
    ctx->pc = 0x2B251Cu;
    {
        const bool branch_taken_0x2b251c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B251Cu;
            // 0x2b2520: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b251c) {
            ctx->pc = 0x2B2534u;
            goto label_2b2534;
        }
    }
    ctx->pc = 0x2B2524u;
label_2b2524:
    // 0x2b2524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2528:
    // 0x2b2528: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
label_2b252c:
    if (ctx->pc == 0x2B252Cu) {
        ctx->pc = 0x2B2530u;
        goto label_2b2530;
    }
    ctx->pc = 0x2B2528u;
    {
        const bool branch_taken_0x2b2528 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b2528) {
            ctx->pc = 0x2B2594u;
            goto label_2b2594;
        }
    }
    ctx->pc = 0x2B2530u;
label_2b2530:
    // 0x2b2530: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2b2530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2b2534:
    // 0x2b2534: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2b2534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2b2538:
    // 0x2b2538: 0x8c420150  lw          $v0, 0x150($v0)
    ctx->pc = 0x2b2538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2b253c:
    // 0x2b253c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b253cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b2540:
    // 0x2b2540: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b2540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b2544:
    // 0x2b2544: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b2544u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b2548:
    // 0x2b2548: 0x0  nop
    ctx->pc = 0x2b2548u;
    // NOP
label_2b254c:
    // 0x2b254c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2b2550:
    if (ctx->pc == 0x2B2550u) {
        ctx->pc = 0x2B2550u;
            // 0x2b2550: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B2554u;
        goto label_2b2554;
    }
    ctx->pc = 0x2B254Cu;
    {
        const bool branch_taken_0x2b254c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B2550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B254Cu;
            // 0x2b2550: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b254c) {
            ctx->pc = 0x2B2564u;
            goto label_2b2564;
        }
    }
    ctx->pc = 0x2B2554u;
label_2b2554:
    // 0x2b2554: 0xc094274  jal         func_2509D0
label_2b2558:
    if (ctx->pc == 0x2B2558u) {
        ctx->pc = 0x2B255Cu;
        goto label_2b255c;
    }
    ctx->pc = 0x2B2554u;
    SET_GPR_U32(ctx, 31, 0x2B255Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B255Cu; }
        if (ctx->pc != 0x2B255Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B255Cu; }
        if (ctx->pc != 0x2B255Cu) { return; }
    }
    ctx->pc = 0x2B255Cu;
label_2b255c:
    // 0x2b255c: 0x100003cd  b           . + 4 + (0x3CD << 2)
label_2b2560:
    if (ctx->pc == 0x2B2560u) {
        ctx->pc = 0x2B2564u;
        goto label_2b2564;
    }
    ctx->pc = 0x2B255Cu;
    {
        const bool branch_taken_0x2b255c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b255c) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2564u;
label_2b2564:
    // 0x2b2564: 0xc0670b0  jal         func_19C2C0
label_2b2568:
    if (ctx->pc == 0x2B2568u) {
        ctx->pc = 0x2B2568u;
            // 0x2b2568: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->pc = 0x2B256Cu;
        goto label_2b256c;
    }
    ctx->pc = 0x2B2564u;
    SET_GPR_U32(ctx, 31, 0x2B256Cu);
    ctx->pc = 0x2B2568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2564u;
            // 0x2b2568: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2C0u;
    if (runtime->hasFunction(0x19C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B256Cu; }
        if (ctx->pc != 0x2B256Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaStatusAttirbute__16CUserDataManagerFi_0x19c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B256Cu; }
        if (ctx->pc != 0x2B256Cu) { return; }
    }
    ctx->pc = 0x2B256Cu;
label_2b256c:
    // 0x2b256c: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x2b256cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2b2570:
    // 0x2b2570: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2b2574:
    if (ctx->pc == 0x2B2574u) {
        ctx->pc = 0x2B2574u;
            // 0x2b2574: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B2578u;
        goto label_2b2578;
    }
    ctx->pc = 0x2B2570u;
    {
        const bool branch_taken_0x2b2570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2570u;
            // 0x2b2574: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2570) {
            ctx->pc = 0x2B2584u;
            goto label_2b2584;
        }
    }
    ctx->pc = 0x2B2578u;
label_2b2578:
    // 0x2b2578: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2b2578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2b257c:
    // 0x2b257c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b2580:
    if (ctx->pc == 0x2B2580u) {
        ctx->pc = 0x2B2584u;
        goto label_2b2584;
    }
    ctx->pc = 0x2B257Cu;
    {
        const bool branch_taken_0x2b257c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b257c) {
            ctx->pc = 0x2B2594u;
            goto label_2b2594;
        }
    }
    ctx->pc = 0x2B2584u;
label_2b2584:
    // 0x2b2584: 0xc094274  jal         func_2509D0
label_2b2588:
    if (ctx->pc == 0x2B2588u) {
        ctx->pc = 0x2B258Cu;
        goto label_2b258c;
    }
    ctx->pc = 0x2B2584u;
    SET_GPR_U32(ctx, 31, 0x2B258Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B258Cu; }
        if (ctx->pc != 0x2B258Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B258Cu; }
        if (ctx->pc != 0x2B258Cu) { return; }
    }
    ctx->pc = 0x2B258Cu;
label_2b258c:
    // 0x2b258c: 0x100003c1  b           . + 4 + (0x3C1 << 2)
label_2b2590:
    if (ctx->pc == 0x2B2590u) {
        ctx->pc = 0x2B2594u;
        goto label_2b2594;
    }
    ctx->pc = 0x2B258Cu;
    {
        const bool branch_taken_0x2b258c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b258c) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2594u;
label_2b2594:
    // 0x2b2594: 0x8e830110  lw          $v1, 0x110($s4)
    ctx->pc = 0x2b2594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_2b2598:
    // 0x2b2598: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b2598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b259c:
    // 0x2b259c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_2b25a0:
    if (ctx->pc == 0x2B25A0u) {
        ctx->pc = 0x2B25A0u;
            // 0x2b25a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B25A4u;
        goto label_2b25a4;
    }
    ctx->pc = 0x2B259Cu;
    {
        const bool branch_taken_0x2b259c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B25A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B259Cu;
            // 0x2b25a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b259c) {
            ctx->pc = 0x2B25D4u;
            goto label_2b25d4;
        }
    }
    ctx->pc = 0x2B25A4u;
label_2b25a4:
    // 0x2b25a4: 0x8e820154  lw          $v0, 0x154($s4)
    ctx->pc = 0x2b25a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 340)));
label_2b25a8:
    // 0x2b25a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b25a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b25ac:
    // 0x2b25ac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b25acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b25b0:
    // 0x2b25b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b25b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b25b4:
    // 0x2b25b4: 0x0  nop
    ctx->pc = 0x2b25b4u;
    // NOP
label_2b25b8:
    // 0x2b25b8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2b25bc:
    if (ctx->pc == 0x2B25BCu) {
        ctx->pc = 0x2B25BCu;
            // 0x2b25bc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B25C0u;
        goto label_2b25c0;
    }
    ctx->pc = 0x2B25B8u;
    {
        const bool branch_taken_0x2b25b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B25BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B25B8u;
            // 0x2b25bc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b25b8) {
            ctx->pc = 0x2B25D0u;
            goto label_2b25d0;
        }
    }
    ctx->pc = 0x2B25C0u;
label_2b25c0:
    // 0x2b25c0: 0xc094274  jal         func_2509D0
label_2b25c4:
    if (ctx->pc == 0x2B25C4u) {
        ctx->pc = 0x2B25C8u;
        goto label_2b25c8;
    }
    ctx->pc = 0x2B25C0u;
    SET_GPR_U32(ctx, 31, 0x2B25C8u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B25C8u; }
        if (ctx->pc != 0x2B25C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B25C8u; }
        if (ctx->pc != 0x2B25C8u) { return; }
    }
    ctx->pc = 0x2B25C8u;
label_2b25c8:
    // 0x2b25c8: 0x100003b2  b           . + 4 + (0x3B2 << 2)
label_2b25cc:
    if (ctx->pc == 0x2B25CCu) {
        ctx->pc = 0x2B25D0u;
        goto label_2b25d0;
    }
    ctx->pc = 0x2B25C8u;
    {
        const bool branch_taken_0x2b25c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b25c8) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B25D0u;
label_2b25d0:
    // 0x2b25d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b25d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b25d4:
    // 0x2b25d4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_2b25d8:
    if (ctx->pc == 0x2B25D8u) {
        ctx->pc = 0x2B25D8u;
            // 0x2b25d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B25DCu;
        goto label_2b25dc;
    }
    ctx->pc = 0x2B25D4u;
    {
        const bool branch_taken_0x2b25d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B25D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B25D4u;
            // 0x2b25d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b25d4) {
            ctx->pc = 0x2B260Cu;
            goto label_2b260c;
        }
    }
    ctx->pc = 0x2B25DCu;
label_2b25dc:
    // 0x2b25dc: 0x8e820150  lw          $v0, 0x150($s4)
    ctx->pc = 0x2b25dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 336)));
label_2b25e0:
    // 0x2b25e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b25e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b25e4:
    // 0x2b25e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b25e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b25e8:
    // 0x2b25e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b25e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b25ec:
    // 0x2b25ec: 0x0  nop
    ctx->pc = 0x2b25ecu;
    // NOP
label_2b25f0:
    // 0x2b25f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2b25f4:
    if (ctx->pc == 0x2B25F4u) {
        ctx->pc = 0x2B25F4u;
            // 0x2b25f4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B25F8u;
        goto label_2b25f8;
    }
    ctx->pc = 0x2B25F0u;
    {
        const bool branch_taken_0x2b25f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B25F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B25F0u;
            // 0x2b25f4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b25f0) {
            ctx->pc = 0x2B2608u;
            goto label_2b2608;
        }
    }
    ctx->pc = 0x2B25F8u;
label_2b25f8:
    // 0x2b25f8: 0xc094274  jal         func_2509D0
label_2b25fc:
    if (ctx->pc == 0x2B25FCu) {
        ctx->pc = 0x2B2600u;
        goto label_2b2600;
    }
    ctx->pc = 0x2B25F8u;
    SET_GPR_U32(ctx, 31, 0x2B2600u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2600u; }
        if (ctx->pc != 0x2B2600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2600u; }
        if (ctx->pc != 0x2B2600u) { return; }
    }
    ctx->pc = 0x2B2600u;
label_2b2600:
    // 0x2b2600: 0x100003a4  b           . + 4 + (0x3A4 << 2)
label_2b2604:
    if (ctx->pc == 0x2B2604u) {
        ctx->pc = 0x2B2608u;
        goto label_2b2608;
    }
    ctx->pc = 0x2B2600u;
    {
        const bool branch_taken_0x2b2600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2600) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2608u;
label_2b2608:
    // 0x2b2608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b260c:
    // 0x2b260c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b260cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b2610:
    // 0x2b2610: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b2610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b2614:
    // 0x2b2614: 0xa6820014  sh          $v0, 0x14($s4)
    ctx->pc = 0x2b2614u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
label_2b2618:
    // 0x2b2618: 0xc08e7cc  jal         func_239F30
label_2b261c:
    if (ctx->pc == 0x2B261Cu) {
        ctx->pc = 0x2B261Cu;
            // 0x2b261c: 0x24a5ec50  addiu       $a1, $a1, -0x13B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962256));
        ctx->pc = 0x2B2620u;
        goto label_2b2620;
    }
    ctx->pc = 0x2B2618u;
    SET_GPR_U32(ctx, 31, 0x2B2620u);
    ctx->pc = 0x2B261Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2618u;
            // 0x2b261c: 0x24a5ec50  addiu       $a1, $a1, -0x13B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2620u; }
        if (ctx->pc != 0x2B2620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2620u; }
        if (ctx->pc != 0x2B2620u) { return; }
    }
    ctx->pc = 0x2B2620u;
label_2b2620:
    // 0x2b2620: 0x8e830110  lw          $v1, 0x110($s4)
    ctx->pc = 0x2b2620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_2b2624:
    // 0x2b2624: 0x27828490  addiu       $v0, $gp, -0x7B70
    ctx->pc = 0x2b2624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935696));
label_2b2628:
    // 0x2b2628: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2b2628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2b262c:
    // 0x2b262c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b262cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b2630:
    // 0x2b2630: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2b2630u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2b2634:
    // 0x2b2634: 0xc0877e0  jal         func_21DF80
label_2b2638:
    if (ctx->pc == 0x2B2638u) {
        ctx->pc = 0x2B2638u;
            // 0x2b2638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B263Cu;
        goto label_2b263c;
    }
    ctx->pc = 0x2B2634u;
    SET_GPR_U32(ctx, 31, 0x2B263Cu);
    ctx->pc = 0x2B2638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2634u;
            // 0x2b2638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B263Cu; }
        if (ctx->pc != 0x2B263Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B263Cu; }
        if (ctx->pc != 0x2B263Cu) { return; }
    }
    ctx->pc = 0x2B263Cu;
label_2b263c:
    // 0x2b263c: 0xae80020c  sw          $zero, 0x20C($s4)
    ctx->pc = 0x2b263cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 524), GPR_U32(ctx, 0));
label_2b2640:
    // 0x2b2640: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b2640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2644:
    // 0x2b2644: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b2644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2648:
    // 0x2b2648: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b2648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
label_2b264c:
    // 0x2b264c: 0x2442ca80  addiu       $v0, $v0, -0x3580
    ctx->pc = 0x2b264cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953600));
label_2b2650:
    // 0x2b2650: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2b2650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2b2654:
    // 0x2b2654: 0xc0abf08  jal         func_2AFC20
label_2b2658:
    if (ctx->pc == 0x2B2658u) {
        ctx->pc = 0x2B2658u;
            // 0x2b2658: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2B265Cu;
        goto label_2b265c;
    }
    ctx->pc = 0x2B2654u;
    SET_GPR_U32(ctx, 31, 0x2B265Cu);
    ctx->pc = 0x2B2658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2654u;
            // 0x2b2658: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFC20u;
    if (runtime->hasFunction(0x2AFC20u)) {
        auto targetFn = runtime->lookupFunction(0x2AFC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B265Cu; }
        if (ctx->pc != 0x2B265Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuBGReadInfo2__FP17MENU_BGREAD_INFO2_0x2afc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B265Cu; }
        if (ctx->pc != 0x2B265Cu) { return; }
    }
    ctx->pc = 0x2B265Cu;
label_2b265c:
    // 0x2b265c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b265cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b2660:
    // 0x2b2660: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x2b2660u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
label_2b2664:
    // 0x2b2664: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2b2668:
    if (ctx->pc == 0x2B2668u) {
        ctx->pc = 0x2B2668u;
            // 0x2b2668: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x2B266Cu;
        goto label_2b266c;
    }
    ctx->pc = 0x2B2664u;
    {
        const bool branch_taken_0x2b2664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2664u;
            // 0x2b2668: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2664) {
            ctx->pc = 0x2B2648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b2648;
        }
    }
    ctx->pc = 0x2B266Cu;
label_2b266c:
    // 0x2b266c: 0x86850110  lh          $a1, 0x110($s4)
    ctx->pc = 0x2b266cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
label_2b2670:
    // 0x2b2670: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b2670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b2674:
    // 0x2b2674: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b2674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b2678:
    // 0x2b2678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b267c:
    // 0x2b267c: 0x27909b70  addiu       $s0, $gp, -0x6490
    ctx->pc = 0x2b267cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941552));
label_2b2680:
    // 0x2b2680: 0xa6850122  sh          $a1, 0x122($s4)
    ctx->pc = 0x2b2680u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 290), (uint16_t)GPR_U32(ctx, 5));
label_2b2684:
    // 0x2b2684: 0x82850110  lb          $a1, 0x110($s4)
    ctx->pc = 0x2b2684u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 272)));
label_2b2688:
    // 0x2b2688: 0xa3859b73  sb          $a1, -0x648D($gp)
    ctx->pc = 0x2b2688u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941555), (uint8_t)GPR_U32(ctx, 5));
label_2b268c:
    // 0x2b268c: 0xa3849b70  sb          $a0, -0x6490($gp)
    ctx->pc = 0x2b268cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941552), (uint8_t)GPR_U32(ctx, 4));
label_2b2690:
    // 0x2b2690: 0xa3839b74  sb          $v1, -0x648C($gp)
    ctx->pc = 0x2b2690u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 3));
label_2b2694:
    // 0x2b2694: 0xa3809b75  sb          $zero, -0x648B($gp)
    ctx->pc = 0x2b2694u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 0));
label_2b2698:
    // 0x2b2698: 0xc065b88  jal         func_196E20
label_2b269c:
    if (ctx->pc == 0x2B269Cu) {
        ctx->pc = 0x2B269Cu;
            // 0x2b269c: 0xa3829b77  sb          $v0, -0x6489($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941559), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B26A0u;
        goto label_2b26a0;
    }
    ctx->pc = 0x2B2698u;
    SET_GPR_U32(ctx, 31, 0x2B26A0u);
    ctx->pc = 0x2B269Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2698u;
            // 0x2b269c: 0xa3829b77  sb          $v0, -0x6489($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941559), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E20u;
    if (runtime->hasFunction(0x196E20u)) {
        auto targetFn = runtime->lookupFunction(0x196E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B26A0u; }
        if (ctx->pc != 0x2B26A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReEquipFishingGameWeapon__Fv_0x196e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B26A0u; }
        if (ctx->pc != 0x2B26A0u) { return; }
    }
    ctx->pc = 0x2B26A0u;
label_2b26a0:
    // 0x2b26a0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b26a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b26a4:
    // 0x2b26a4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2b26a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2b26a8:
    // 0x2b26a8: 0xac20dc14  sw          $zero, -0x23EC($at)
    ctx->pc = 0x2b26a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958100), GPR_U32(ctx, 0));
label_2b26ac:
    // 0x2b26ac: 0x2484dbf0  addiu       $a0, $a0, -0x2410
    ctx->pc = 0x2b26acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
label_2b26b0:
    // 0x2b26b0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b26b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b26b4:
    // 0x2b26b4: 0xc04e780  jal         func_139E00
label_2b26b8:
    if (ctx->pc == 0x2B26B8u) {
        ctx->pc = 0x2B26B8u;
            // 0x2b26b8: 0xac20dc0c  sw          $zero, -0x23F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
        ctx->pc = 0x2B26BCu;
        goto label_2b26bc;
    }
    ctx->pc = 0x2B26B4u;
    SET_GPR_U32(ctx, 31, 0x2B26BCu);
    ctx->pc = 0x2B26B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B26B4u;
            // 0x2b26b8: 0xac20dc0c  sw          $zero, -0x23F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B26BCu; }
        if (ctx->pc != 0x2B26BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B26BCu; }
        if (ctx->pc != 0x2B26BCu) { return; }
    }
    ctx->pc = 0x2B26BCu;
label_2b26bc:
    // 0x2b26bc: 0xc0abf6c  jal         func_2AFDB0
label_2b26c0:
    if (ctx->pc == 0x2B26C0u) {
        ctx->pc = 0x2B26C0u;
            // 0x2b26c0: 0x86840122  lh          $a0, 0x122($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 290)));
        ctx->pc = 0x2B26C4u;
        goto label_2b26c4;
    }
    ctx->pc = 0x2B26BCu;
    SET_GPR_U32(ctx, 31, 0x2B26C4u);
    ctx->pc = 0x2B26C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B26BCu;
            // 0x2b26c0: 0x86840122  lh          $a0, 0x122($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 290)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFDB0u;
    if (runtime->hasFunction(0x2AFDB0u)) {
        auto targetFn = runtime->lookupFunction(0x2AFDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B26C4u; }
        if (ctx->pc != 0x2B26C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuLoadItemNo__Fi_0x2afdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B26C4u; }
        if (ctx->pc != 0x2B26C4u) { return; }
    }
    ctx->pc = 0x2B26C4u;
label_2b26c4:
    // 0x2b26c4: 0x86830122  lh          $v1, 0x122($s4)
    ctx->pc = 0x2b26c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 290)));
label_2b26c8:
    // 0x2b26c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b26cc:
    // 0x2b26cc: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_2b26d0:
    if (ctx->pc == 0x2B26D0u) {
        ctx->pc = 0x2B26D0u;
            // 0x2b26d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B26D4u;
        goto label_2b26d4;
    }
    ctx->pc = 0x2B26CCu;
    {
        const bool branch_taken_0x2b26cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B26D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B26CCu;
            // 0x2b26d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26cc) {
            ctx->pc = 0x2B271Cu;
            goto label_2b271c;
        }
    }
    ctx->pc = 0x2B26D4u;
label_2b26d4:
    // 0x2b26d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b26d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b26d8:
    // 0x2b26d8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2b26dc:
    if (ctx->pc == 0x2B26DCu) {
        ctx->pc = 0x2B26DCu;
            // 0x2b26dc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B26E0u;
        goto label_2b26e0;
    }
    ctx->pc = 0x2B26D8u;
    {
        const bool branch_taken_0x2b26d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B26DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B26D8u;
            // 0x2b26dc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26d8) {
            ctx->pc = 0x2B26F0u;
            goto label_2b26f0;
        }
    }
    ctx->pc = 0x2B26E0u;
label_2b26e0:
    // 0x2b26e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b26e4:
    if (ctx->pc == 0x2B26E4u) {
        ctx->pc = 0x2B26E8u;
        goto label_2b26e8;
    }
    ctx->pc = 0x2B26E0u;
    {
        const bool branch_taken_0x2b26e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b26e0) {
            ctx->pc = 0x2B26F0u;
            goto label_2b26f0;
        }
    }
    ctx->pc = 0x2B26E8u;
label_2b26e8:
    // 0x2b26e8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2b26ec:
    if (ctx->pc == 0x2B26ECu) {
        ctx->pc = 0x2B26ECu;
            // 0x2b26ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B26F0u;
        goto label_2b26f0;
    }
    ctx->pc = 0x2B26E8u;
    {
        const bool branch_taken_0x2b26e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B26ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B26E8u;
            // 0x2b26ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26e8) {
            ctx->pc = 0x2B2758u;
            goto label_2b2758;
        }
    }
    ctx->pc = 0x2B26F0u;
label_2b26f0:
    // 0x2b26f0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2b26f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2b26f4:
    // 0x2b26f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b26f8:
    // 0x2b26f8: 0xa2070002  sb          $a3, 0x2($s0)
    ctx->pc = 0x2b26f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 7));
label_2b26fc:
    // 0x2b26fc: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x2b26fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_2b2700:
    // 0x2b2700: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2b2700u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_2b2704:
    // 0x2b2704: 0x86850122  lh          $a1, 0x122($s4)
    ctx->pc = 0x2b2704u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 290)));
label_2b2708:
    // 0x2b2708: 0x2484dbf0  addiu       $a0, $a0, -0x2410
    ctx->pc = 0x2b2708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
label_2b270c:
    // 0x2b270c: 0xc0ae434  jal         func_2B90D0
label_2b2710:
    if (ctx->pc == 0x2B2710u) {
        ctx->pc = 0x2B2710u;
            // 0x2b2710: 0x24c6ca80  addiu       $a2, $a2, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953600));
        ctx->pc = 0x2B2714u;
        goto label_2b2714;
    }
    ctx->pc = 0x2B270Cu;
    SET_GPR_U32(ctx, 31, 0x2B2714u);
    ctx->pc = 0x2B2710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B270Cu;
            // 0x2b2710: 0x24c6ca80  addiu       $a2, $a2, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B90D0u;
    if (runtime->hasFunction(0x2B90D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B90D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2714u; }
        if (ctx->pc != 0x2B2714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoad__FP9mgCMemoryiPP17MENU_BGREAD_INFO2i_0x2b90d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2714u; }
        if (ctx->pc != 0x2B2714u) { return; }
    }
    ctx->pc = 0x2B2714u;
label_2b2714:
    // 0x2b2714: 0x1000000f  b           . + 4 + (0xF << 2)
label_2b2718:
    if (ctx->pc == 0x2B2718u) {
        ctx->pc = 0x2B271Cu;
        goto label_2b271c;
    }
    ctx->pc = 0x2B2714u;
    {
        const bool branch_taken_0x2b2714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2714) {
            ctx->pc = 0x2B2754u;
            goto label_2b2754;
        }
    }
    ctx->pc = 0x2B271Cu;
label_2b271c:
    // 0x2b271c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2b271cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2b2720:
    // 0x2b2720: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2b2720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_2b2724:
    // 0x2b2724: 0x2484dbf0  addiu       $a0, $a0, -0x2410
    ctx->pc = 0x2b2724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
label_2b2728:
    // 0x2b2728: 0xa2060002  sb          $a2, 0x2($s0)
    ctx->pc = 0x2b2728u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 6));
label_2b272c:
    // 0x2b272c: 0xc0ae8c0  jal         func_2BA300
label_2b2730:
    if (ctx->pc == 0x2B2730u) {
        ctx->pc = 0x2B2730u;
            // 0x2b2730: 0x24a5ca80  addiu       $a1, $a1, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953600));
        ctx->pc = 0x2B2734u;
        goto label_2b2734;
    }
    ctx->pc = 0x2B272Cu;
    SET_GPR_U32(ctx, 31, 0x2B2734u);
    ctx->pc = 0x2B2730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B272Cu;
            // 0x2b2730: 0x24a5ca80  addiu       $a1, $a1, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA300u;
    if (runtime->hasFunction(0x2BA300u)) {
        auto targetFn = runtime->lookupFunction(0x2BA300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2734u; }
        if (ctx->pc != 0x2B2734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemRoboDataLoad__FP9mgCMemoryPP17MENU_BGREAD_INFO2i_0x2ba300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2734u; }
        if (ctx->pc != 0x2B2734u) { return; }
    }
    ctx->pc = 0x2B2734u;
label_2b2734:
    // 0x2b2734: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2b2734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_2b2738:
    // 0x2b2738: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b273c:
    if (ctx->pc == 0x2B273Cu) {
        ctx->pc = 0x2B273Cu;
            // 0x2b273c: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2B2740u;
        goto label_2b2740;
    }
    ctx->pc = 0x2B2738u;
    {
        const bool branch_taken_0x2b2738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B273Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2738u;
            // 0x2b273c: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2738) {
            ctx->pc = 0x2B2748u;
            goto label_2b2748;
        }
    }
    ctx->pc = 0x2B2740u;
label_2b2740:
    // 0x2b2740: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2b2740u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_2b2744:
    // 0x2b2744: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2b2744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b2748:
    // 0x2b2748: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2b2748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2b274c:
    // 0x2b274c: 0xc04e748  jal         func_139D20
label_2b2750:
    if (ctx->pc == 0x2B2750u) {
        ctx->pc = 0x2B2750u;
            // 0x2b2750: 0x2484dbf0  addiu       $a0, $a0, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
        ctx->pc = 0x2B2754u;
        goto label_2b2754;
    }
    ctx->pc = 0x2B274Cu;
    SET_GPR_U32(ctx, 31, 0x2B2754u);
    ctx->pc = 0x2B2750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B274Cu;
            // 0x2b2750: 0x2484dbf0  addiu       $a0, $a0, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2754u; }
        if (ctx->pc != 0x2B2754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2754u; }
        if (ctx->pc != 0x2B2754u) { return; }
    }
    ctx->pc = 0x2B2754u;
label_2b2754:
    // 0x2b2754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2758:
    // 0x2b2758: 0xa6820120  sh          $v0, 0x120($s4)
    ctx->pc = 0x2b2758u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 288), (uint16_t)GPR_U32(ctx, 2));
label_2b275c:
    // 0x2b275c: 0x1000034d  b           . + 4 + (0x34D << 2)
label_2b2760:
    if (ctx->pc == 0x2B2760u) {
        ctx->pc = 0x2B2760u;
            // 0x2b2760: 0xa280011f  sb          $zero, 0x11F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 287), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B2764u;
        goto label_2b2764;
    }
    ctx->pc = 0x2B275Cu;
    {
        const bool branch_taken_0x2b275c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B275Cu;
            // 0x2b2760: 0xa280011f  sb          $zero, 0x11F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 287), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b275c) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2764u;
label_2b2764:
    // 0x2b2764: 0xa6800014  sh          $zero, 0x14($s4)
    ctx->pc = 0x2b2764u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 0));
label_2b2768:
    // 0x2b2768: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b2768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b276c:
    // 0x2b276c: 0x24a5eba8  addiu       $a1, $a1, -0x1458
    ctx->pc = 0x2b276cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962088));
label_2b2770:
    // 0x2b2770: 0xc08e7cc  jal         func_239F30
label_2b2774:
    if (ctx->pc == 0x2B2774u) {
        ctx->pc = 0x2B2774u;
            // 0x2b2774: 0xa6800120  sh          $zero, 0x120($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 288), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B2778u;
        goto label_2b2778;
    }
    ctx->pc = 0x2B2770u;
    SET_GPR_U32(ctx, 31, 0x2B2778u);
    ctx->pc = 0x2B2774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2770u;
            // 0x2b2774: 0xa6800120  sh          $zero, 0x120($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 288), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2778u; }
        if (ctx->pc != 0x2B2778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2778u; }
        if (ctx->pc != 0x2B2778u) { return; }
    }
    ctx->pc = 0x2B2778u;
label_2b2778:
    // 0x2b2778: 0x10000346  b           . + 4 + (0x346 << 2)
label_2b277c:
    if (ctx->pc == 0x2B277Cu) {
        ctx->pc = 0x2B2780u;
        goto label_2b2780;
    }
    ctx->pc = 0x2B2778u;
    {
        const bool branch_taken_0x2b2778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2778) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2780u;
label_2b2780:
    // 0x2b2780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2784:
    // 0x2b2784: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b2784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b2788:
    // 0x2b2788: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b2788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b278c:
    // 0x2b278c: 0xa282011f  sb          $v0, 0x11F($s4)
    ctx->pc = 0x2b278cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 287), (uint8_t)GPR_U32(ctx, 2));
label_2b2790:
    // 0x2b2790: 0xc08e7cc  jal         func_239F30
label_2b2794:
    if (ctx->pc == 0x2B2794u) {
        ctx->pc = 0x2B2794u;
            // 0x2b2794: 0x24a5ec68  addiu       $a1, $a1, -0x1398 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962280));
        ctx->pc = 0x2B2798u;
        goto label_2b2798;
    }
    ctx->pc = 0x2B2790u;
    SET_GPR_U32(ctx, 31, 0x2B2798u);
    ctx->pc = 0x2B2794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2790u;
            // 0x2b2794: 0x24a5ec68  addiu       $a1, $a1, -0x1398 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2798u; }
        if (ctx->pc != 0x2B2798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2798u; }
        if (ctx->pc != 0x2B2798u) { return; }
    }
    ctx->pc = 0x2B2798u;
label_2b2798:
    // 0x2b2798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b279c:
    // 0x2b279c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b279cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b27a0:
    // 0x2b27a0: 0xac22d62c  sw          $v0, -0x29D4($at)
    ctx->pc = 0x2b27a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
label_2b27a4:
    // 0x2b27a4: 0x8e820110  lw          $v0, 0x110($s4)
    ctx->pc = 0x2b27a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_2b27a8:
    // 0x2b27a8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b27a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b27ac:
    // 0x2b27ac: 0xc065af8  jal         func_196BE0
label_2b27b0:
    if (ctx->pc == 0x2B27B0u) {
        ctx->pc = 0x2B27B0u;
            // 0x2b27b0: 0xac22d630  sw          $v0, -0x29D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
        ctx->pc = 0x2B27B4u;
        goto label_2b27b4;
    }
    ctx->pc = 0x2B27ACu;
    SET_GPR_U32(ctx, 31, 0x2B27B4u);
    ctx->pc = 0x2B27B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B27ACu;
            // 0x2b27b0: 0xac22d630  sw          $v0, -0x29D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B27B4u; }
        if (ctx->pc != 0x2B27B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B27B4u; }
        if (ctx->pc != 0x2B27B4u) { return; }
    }
    ctx->pc = 0x2B27B4u;
label_2b27b4:
    // 0x2b27b4: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2b27b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_2b27b8:
    // 0x2b27b8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2b27b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2b27bc:
    // 0x2b27bc: 0xc065af8  jal         func_196BE0
label_2b27c0:
    if (ctx->pc == 0x2B27C0u) {
        ctx->pc = 0x2B27C0u;
            // 0x2b27c0: 0x84304d96  lh          $s0, 0x4D96($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
        ctx->pc = 0x2B27C4u;
        goto label_2b27c4;
    }
    ctx->pc = 0x2B27BCu;
    SET_GPR_U32(ctx, 31, 0x2B27C4u);
    ctx->pc = 0x2B27C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B27BCu;
            // 0x2b27c0: 0x84304d96  lh          $s0, 0x4D96($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B27C4u; }
        if (ctx->pc != 0x2B27C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B27C4u; }
        if (ctx->pc != 0x2B27C4u) { return; }
    }
    ctx->pc = 0x2B27C4u;
label_2b27c4:
    // 0x2b27c4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b27c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b27c8:
    // 0x2b27c8: 0x8c25d630  lw          $a1, -0x29D0($at)
    ctx->pc = 0x2b27c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956592)));
label_2b27cc:
    // 0x2b27cc: 0xc0670f4  jal         func_19C3D0
label_2b27d0:
    if (ctx->pc == 0x2B27D0u) {
        ctx->pc = 0x2B27D0u;
            // 0x2b27d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B27D4u;
        goto label_2b27d4;
    }
    ctx->pc = 0x2B27CCu;
    SET_GPR_U32(ctx, 31, 0x2B27D4u);
    ctx->pc = 0x2B27D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B27CCu;
            // 0x2b27d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C3D0u;
    if (runtime->hasFunction(0x19C3D0u)) {
        auto targetFn = runtime->lookupFunction(0x19C3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B27D4u; }
        if (ctx->pc != 0x2B27D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveChrNo__16CUserDataManagerFi_0x19c3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B27D4u; }
        if (ctx->pc != 0x2B27D4u) { return; }
    }
    ctx->pc = 0x2B27D4u;
label_2b27d4:
    // 0x2b27d4: 0x86c20050  lh          $v0, 0x50($s6)
    ctx->pc = 0x2b27d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 80)));
label_2b27d8:
    // 0x2b27d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2b27dc:
    if (ctx->pc == 0x2B27DCu) {
        ctx->pc = 0x2B27DCu;
            // 0x2b27dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B27E0u;
        goto label_2b27e0;
    }
    ctx->pc = 0x2B27D8u;
    {
        const bool branch_taken_0x2b27d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B27DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B27D8u;
            // 0x2b27dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b27d8) {
            ctx->pc = 0x2B2800u;
            goto label_2b2800;
        }
    }
    ctx->pc = 0x2B27E0u;
label_2b27e0:
    // 0x2b27e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b27e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b27e4:
    // 0x2b27e4: 0x86860122  lh          $a2, 0x122($s4)
    ctx->pc = 0x2b27e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 290)));
label_2b27e8:
    // 0x2b27e8: 0x8c24d5f4  lw          $a0, -0x2A0C($at)
    ctx->pc = 0x2b27e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956532)));
label_2b27ec:
    // 0x2b27ec: 0x8f859b6c  lw          $a1, -0x6494($gp)
    ctx->pc = 0x2b27ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
label_2b27f0:
    // 0x2b27f0: 0xc07a6f8  jal         func_1E9BE0
label_2b27f4:
    if (ctx->pc == 0x2B27F4u) {
        ctx->pc = 0x2B27F4u;
            // 0x2b27f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B27F8u;
        goto label_2b27f8;
    }
    ctx->pc = 0x2B27F0u;
    SET_GPR_U32(ctx, 31, 0x2B27F8u);
    ctx->pc = 0x2B27F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B27F0u;
            // 0x2b27f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9BE0u;
    if (runtime->hasFunction(0x1E9BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E9BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B27F8u; }
        if (ctx->pc != 0x2B27F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaMemAllocPtr__FP9mgCMemoryP9mgCMemoryii_0x1e9be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B27F8u; }
        if (ctx->pc != 0x2B27F8u) { return; }
    }
    ctx->pc = 0x2B27F8u;
label_2b27f8:
    // 0x2b27f8: 0x1000000c  b           . + 4 + (0xC << 2)
label_2b27fc:
    if (ctx->pc == 0x2B27FCu) {
        ctx->pc = 0x2B27FCu;
            // 0x2b27fc: 0x8e830110  lw          $v1, 0x110($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
        ctx->pc = 0x2B2800u;
        goto label_2b2800;
    }
    ctx->pc = 0x2B27F8u;
    {
        const bool branch_taken_0x2b27f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B27FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B27F8u;
            // 0x2b27fc: 0x8e830110  lw          $v1, 0x110($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b27f8) {
            ctx->pc = 0x2B282Cu;
            goto label_2b282c;
        }
    }
    ctx->pc = 0x2B2800u;
label_2b2800:
    // 0x2b2800: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_2b2804:
    if (ctx->pc == 0x2B2804u) {
        ctx->pc = 0x2B2808u;
        goto label_2b2808;
    }
    ctx->pc = 0x2B2800u;
    {
        const bool branch_taken_0x2b2800 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b2800) {
            ctx->pc = 0x2B2810u;
            goto label_2b2810;
        }
    }
    ctx->pc = 0x2B2808u;
label_2b2808:
    // 0x2b2808: 0xc0ac064  jal         func_2B0190
label_2b280c:
    if (ctx->pc == 0x2B280Cu) {
        ctx->pc = 0x2B2810u;
        goto label_2b2810;
    }
    ctx->pc = 0x2B2808u;
    SET_GPR_U32(ctx, 31, 0x2B2810u);
    ctx->pc = 0x2B0190u;
    if (runtime->hasFunction(0x2B0190u)) {
        auto targetFn = runtime->lookupFunction(0x2B0190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2810u; }
        if (ctx->pc != 0x2B2810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteMonsterEffect__Fv_0x2b0190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2810u; }
        if (ctx->pc != 0x2B2810u) { return; }
    }
    ctx->pc = 0x2B2810u;
label_2b2810:
    // 0x2b2810: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b2810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b2814:
    // 0x2b2814: 0x86860122  lh          $a2, 0x122($s4)
    ctx->pc = 0x2b2814u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 290)));
label_2b2818:
    // 0x2b2818: 0x8c24d5f4  lw          $a0, -0x2A0C($at)
    ctx->pc = 0x2b2818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956532)));
label_2b281c:
    // 0x2b281c: 0x8f859b6c  lw          $a1, -0x6494($gp)
    ctx->pc = 0x2b281cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
label_2b2820:
    // 0x2b2820: 0xc07a6f8  jal         func_1E9BE0
label_2b2824:
    if (ctx->pc == 0x2B2824u) {
        ctx->pc = 0x2B2824u;
            // 0x2b2824: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2828u;
        goto label_2b2828;
    }
    ctx->pc = 0x2B2820u;
    SET_GPR_U32(ctx, 31, 0x2B2828u);
    ctx->pc = 0x2B2824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2820u;
            // 0x2b2824: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9BE0u;
    if (runtime->hasFunction(0x1E9BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E9BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2828u; }
        if (ctx->pc != 0x2B2828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaMemAllocPtr__FP9mgCMemoryP9mgCMemoryii_0x1e9be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2828u; }
        if (ctx->pc != 0x2B2828u) { return; }
    }
    ctx->pc = 0x2B2828u;
label_2b2828:
    // 0x2b2828: 0x8e830110  lw          $v1, 0x110($s4)
    ctx->pc = 0x2b2828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_2b282c:
    // 0x2b282c: 0x27828498  addiu       $v0, $gp, -0x7B68
    ctx->pc = 0x2b282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935704));
label_2b2830:
    // 0x2b2830: 0xae830114  sw          $v1, 0x114($s4)
    ctx->pc = 0x2b2830u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 3));
label_2b2834:
    // 0x2b2834: 0x8e830110  lw          $v1, 0x110($s4)
    ctx->pc = 0x2b2834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_2b2838:
    // 0x2b2838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b2838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b283c:
    // 0x2b283c: 0xc094274  jal         func_2509D0
label_2b2840:
    if (ctx->pc == 0x2B2840u) {
        ctx->pc = 0x2B2840u;
            // 0x2b2840: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2B2844u;
        goto label_2b2844;
    }
    ctx->pc = 0x2B283Cu;
    SET_GPR_U32(ctx, 31, 0x2B2844u);
    ctx->pc = 0x2B2840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B283Cu;
            // 0x2b2840: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2844u; }
        if (ctx->pc != 0x2B2844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2844u; }
        if (ctx->pc != 0x2B2844u) { return; }
    }
    ctx->pc = 0x2B2844u;
label_2b2844:
    // 0x2b2844: 0x83839b71  lb          $v1, -0x648F($gp)
    ctx->pc = 0x2b2844u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941553)));
label_2b2848:
    // 0x2b2848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b284c:
    // 0x2b284c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2b2850:
    if (ctx->pc == 0x2B2850u) {
        ctx->pc = 0x2B2854u;
        goto label_2b2854;
    }
    ctx->pc = 0x2B284Cu;
    {
        const bool branch_taken_0x2b284c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b284c) {
            ctx->pc = 0x2B285Cu;
            goto label_2b285c;
        }
    }
    ctx->pc = 0x2B2854u;
label_2b2854:
    // 0x2b2854: 0xc0ac4a8  jal         func_2B12A0
label_2b2858:
    if (ctx->pc == 0x2B2858u) {
        ctx->pc = 0x2B285Cu;
        goto label_2b285c;
    }
    ctx->pc = 0x2B2854u;
    SET_GPR_U32(ctx, 31, 0x2B285Cu);
    ctx->pc = 0x2B12A0u;
    if (runtime->hasFunction(0x2B12A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B12A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B285Cu; }
        if (ctx->pc != 0x2B285Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditCharaPrepare__Fv_0x2b12a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B285Cu; }
        if (ctx->pc != 0x2B285Cu) { return; }
    }
    ctx->pc = 0x2B285Cu;
label_2b285c:
    // 0x2b285c: 0xc08ca88  jal         func_232A20
label_2b2860:
    if (ctx->pc == 0x2B2860u) {
        ctx->pc = 0x2B2864u;
        goto label_2b2864;
    }
    ctx->pc = 0x2B285Cu;
    SET_GPR_U32(ctx, 31, 0x2B2864u);
    ctx->pc = 0x232A20u;
    if (runtime->hasFunction(0x232A20u)) {
        auto targetFn = runtime->lookupFunction(0x232A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2864u; }
        if (ctx->pc != 0x2B2864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuLoopType__Fv_0x232a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2864u; }
        if (ctx->pc != 0x2B2864u) { return; }
    }
    ctx->pc = 0x2B2864u;
label_2b2864:
    // 0x2b2864: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b2864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2868:
    // 0x2b2868: 0x1443030a  bne         $v0, $v1, . + 4 + (0x30A << 2)
label_2b286c:
    if (ctx->pc == 0x2B286Cu) {
        ctx->pc = 0x2B2870u;
        goto label_2b2870;
    }
    ctx->pc = 0x2B2868u;
    {
        const bool branch_taken_0x2b2868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b2868) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2870u;
label_2b2870:
    // 0x2b2870: 0x8f828ddc  lw          $v0, -0x7224($gp)
    ctx->pc = 0x2b2870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_2b2874:
    // 0x2b2874: 0x10400307  beqz        $v0, . + 4 + (0x307 << 2)
label_2b2878:
    if (ctx->pc == 0x2B2878u) {
        ctx->pc = 0x2B287Cu;
        goto label_2b287c;
    }
    ctx->pc = 0x2B2874u;
    {
        const bool branch_taken_0x2b2874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2874) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B287Cu;
label_2b287c:
    // 0x2b287c: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2b287cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2b2880:
    // 0x2b2880: 0xc0a0ed8  jal         func_283B60
label_2b2884:
    if (ctx->pc == 0x2B2884u) {
        ctx->pc = 0x2B2884u;
            // 0x2b2884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2888u;
        goto label_2b2888;
    }
    ctx->pc = 0x2B2880u;
    SET_GPR_U32(ctx, 31, 0x2B2888u);
    ctx->pc = 0x2B2884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2880u;
            // 0x2b2884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2888u; }
        if (ctx->pc != 0x2B2888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2888u; }
        if (ctx->pc != 0x2B2888u) { return; }
    }
    ctx->pc = 0x2B2888u;
label_2b2888:
    // 0x2b2888: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b288c:
    // 0x2b288c: 0x8c4207dc  lw          $v0, 0x7DC($v0)
    ctx->pc = 0x2b288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
label_2b2890:
    // 0x2b2890: 0x10400300  beqz        $v0, . + 4 + (0x300 << 2)
label_2b2894:
    if (ctx->pc == 0x2B2894u) {
        ctx->pc = 0x2B2898u;
        goto label_2b2898;
    }
    ctx->pc = 0x2B2890u;
    {
        const bool branch_taken_0x2b2890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2890) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2898u;
label_2b2898:
    // 0x2b2898: 0x820207e0  lb          $v0, 0x7E0($s0)
    ctx->pc = 0x2b2898u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2016)));
label_2b289c:
    // 0x2b289c: 0x44002fd  bltz        $v0, . + 4 + (0x2FD << 2)
label_2b28a0:
    if (ctx->pc == 0x2B28A0u) {
        ctx->pc = 0x2B28A0u;
            // 0x2b28a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B28A4u;
        goto label_2b28a4;
    }
    ctx->pc = 0x2B289Cu;
    {
        const bool branch_taken_0x2b289c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B28A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B289Cu;
            // 0x2b28a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b289c) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B28A4u;
label_2b28a4:
    // 0x2b28a4: 0x8e0407dc  lw          $a0, 0x7DC($s0)
    ctx->pc = 0x2b28a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2012)));
label_2b28a8:
    // 0x2b28a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b28a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b28ac:
    // 0x2b28ac: 0xc0b8884  jal         func_2E2210
label_2b28b0:
    if (ctx->pc == 0x2B28B0u) {
        ctx->pc = 0x2B28B0u;
            // 0x2b28b0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B28B4u;
        goto label_2b28b4;
    }
    ctx->pc = 0x2B28ACu;
    SET_GPR_U32(ctx, 31, 0x2B28B4u);
    ctx->pc = 0x2B28B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B28ACu;
            // 0x2b28b0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2210u;
    if (runtime->hasFunction(0x2E2210u)) {
        auto targetFn = runtime->lookupFunction(0x2E2210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B28B4u; }
        if (ctx->pc != 0x2B28B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseFromLevel__16CEffectScriptManFii_0x2e2210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B28B4u; }
        if (ctx->pc != 0x2B28B4u) { return; }
    }
    ctx->pc = 0x2B28B4u;
label_2b28b4:
    // 0x2b28b4: 0x8e0407dc  lw          $a0, 0x7DC($s0)
    ctx->pc = 0x2b28b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2012)));
label_2b28b8:
    // 0x2b28b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b28b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b28bc:
    // 0x2b28bc: 0xc0b8884  jal         func_2E2210
label_2b28c0:
    if (ctx->pc == 0x2B28C0u) {
        ctx->pc = 0x2B28C0u;
            // 0x2b28c0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B28C4u;
        goto label_2b28c4;
    }
    ctx->pc = 0x2B28BCu;
    SET_GPR_U32(ctx, 31, 0x2B28C4u);
    ctx->pc = 0x2B28C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B28BCu;
            // 0x2b28c0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2210u;
    if (runtime->hasFunction(0x2E2210u)) {
        auto targetFn = runtime->lookupFunction(0x2E2210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B28C4u; }
        if (ctx->pc != 0x2B28C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseFromLevel__16CEffectScriptManFii_0x2e2210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B28C4u; }
        if (ctx->pc != 0x2B28C4u) { return; }
    }
    ctx->pc = 0x2B28C4u;
label_2b28c4:
    // 0x2b28c4: 0xc0b8580  jal         func_2E1600
label_2b28c8:
    if (ctx->pc == 0x2B28C8u) {
        ctx->pc = 0x2B28C8u;
            // 0x2b28c8: 0x8e0407dc  lw          $a0, 0x7DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2012)));
        ctx->pc = 0x2B28CCu;
        goto label_2b28cc;
    }
    ctx->pc = 0x2B28C4u;
    SET_GPR_U32(ctx, 31, 0x2B28CCu);
    ctx->pc = 0x2B28C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B28C4u;
            // 0x2b28c8: 0x8e0407dc  lw          $a0, 0x7DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2012)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1600u;
    if (runtime->hasFunction(0x2E1600u)) {
        auto targetFn = runtime->lookupFunction(0x2E1600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B28CCu; }
        if (ctx->pc != 0x2B28CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__16CEffectScriptManFv_0x2e1600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B28CCu; }
        if (ctx->pc != 0x2B28CCu) { return; }
    }
    ctx->pc = 0x2B28CCu;
label_2b28cc:
    // 0x2b28cc: 0x8e0407dc  lw          $a0, 0x7DC($s0)
    ctx->pc = 0x2b28ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2012)));
label_2b28d0:
    // 0x2b28d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b28d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b28d4:
    // 0x2b28d4: 0xc0b8884  jal         func_2E2210
label_2b28d8:
    if (ctx->pc == 0x2B28D8u) {
        ctx->pc = 0x2B28D8u;
            // 0x2b28d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B28DCu;
        goto label_2b28dc;
    }
    ctx->pc = 0x2B28D4u;
    SET_GPR_U32(ctx, 31, 0x2B28DCu);
    ctx->pc = 0x2B28D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B28D4u;
            // 0x2b28d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2210u;
    if (runtime->hasFunction(0x2E2210u)) {
        auto targetFn = runtime->lookupFunction(0x2E2210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B28DCu; }
        if (ctx->pc != 0x2B28DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseFromLevel__16CEffectScriptManFii_0x2e2210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B28DCu; }
        if (ctx->pc != 0x2B28DCu) { return; }
    }
    ctx->pc = 0x2B28DCu;
label_2b28dc:
    // 0x2b28dc: 0x8e0407dc  lw          $a0, 0x7DC($s0)
    ctx->pc = 0x2b28dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2012)));
label_2b28e0:
    // 0x2b28e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b28e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b28e4:
    // 0x2b28e4: 0xc0b8884  jal         func_2E2210
label_2b28e8:
    if (ctx->pc == 0x2B28E8u) {
        ctx->pc = 0x2B28E8u;
            // 0x2b28e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B28ECu;
        goto label_2b28ec;
    }
    ctx->pc = 0x2B28E4u;
    SET_GPR_U32(ctx, 31, 0x2B28ECu);
    ctx->pc = 0x2B28E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B28E4u;
            // 0x2b28e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2210u;
    if (runtime->hasFunction(0x2E2210u)) {
        auto targetFn = runtime->lookupFunction(0x2E2210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B28ECu; }
        if (ctx->pc != 0x2B28ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseFromLevel__16CEffectScriptManFii_0x2e2210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B28ECu; }
        if (ctx->pc != 0x2B28ECu) { return; }
    }
    ctx->pc = 0x2B28ECu;
label_2b28ec:
    // 0x2b28ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b28ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2b28f0:
    // 0x2b28f0: 0x2a220078  slti        $v0, $s1, 0x78
    ctx->pc = 0x2b28f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)120) ? 1 : 0);
label_2b28f4:
    // 0x2b28f4: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_2b28f8:
    if (ctx->pc == 0x2B28F8u) {
        ctx->pc = 0x2B28FCu;
        goto label_2b28fc;
    }
    ctx->pc = 0x2B28F4u;
    {
        const bool branch_taken_0x2b28f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b28f4) {
            ctx->pc = 0x2B28A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b28a4;
        }
    }
    ctx->pc = 0x2B28FCu;
label_2b28fc:
    // 0x2b28fc: 0x100002e5  b           . + 4 + (0x2E5 << 2)
label_2b2900:
    if (ctx->pc == 0x2B2900u) {
        ctx->pc = 0x2B2904u;
        goto label_2b2904;
    }
    ctx->pc = 0x2B28FCu;
    {
        const bool branch_taken_0x2b28fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b28fc) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2904u;
label_2b2904:
    // 0x2b2904: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b2904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b2908:
    // 0x2b2908: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b2908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b290c:
    // 0x2b290c: 0xc08d220  jal         func_234880
label_2b2910:
    if (ctx->pc == 0x2B2910u) {
        ctx->pc = 0x2B2910u;
            // 0x2b2910: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B2914u;
        goto label_2b2914;
    }
    ctx->pc = 0x2B290Cu;
    SET_GPR_U32(ctx, 31, 0x2B2914u);
    ctx->pc = 0x2B2910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B290Cu;
            // 0x2b2910: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234880u;
    if (runtime->hasFunction(0x234880u)) {
        auto targetFn = runtime->lookupFunction(0x234880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2914u; }
        if (ctx->pc != 0x2B2914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnMenuIntern__Fi_0x234880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2914u; }
        if (ctx->pc != 0x2B2914u) { return; }
    }
    ctx->pc = 0x2B2914u;
label_2b2914:
    // 0x2b2914: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b2914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b2918:
    // 0x2b2918: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b2918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b291c:
    // 0x2b291c: 0xc08e7cc  jal         func_239F30
label_2b2920:
    if (ctx->pc == 0x2B2920u) {
        ctx->pc = 0x2B2920u;
            // 0x2b2920: 0x24a5ec78  addiu       $a1, $a1, -0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962296));
        ctx->pc = 0x2B2924u;
        goto label_2b2924;
    }
    ctx->pc = 0x2B291Cu;
    SET_GPR_U32(ctx, 31, 0x2B2924u);
    ctx->pc = 0x2B2920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B291Cu;
            // 0x2b2920: 0x24a5ec78  addiu       $a1, $a1, -0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2924u; }
        if (ctx->pc != 0x2B2924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2924u; }
        if (ctx->pc != 0x2B2924u) { return; }
    }
    ctx->pc = 0x2B2924u;
label_2b2924:
    // 0x2b2924: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b2924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b2928:
    // 0x2b2928: 0xc08900c  jal         func_224030
label_2b292c:
    if (ctx->pc == 0x2B292Cu) {
        ctx->pc = 0x2B292Cu;
            // 0x2b292c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2930u;
        goto label_2b2930;
    }
    ctx->pc = 0x2B2928u;
    SET_GPR_U32(ctx, 31, 0x2B2930u);
    ctx->pc = 0x2B292Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2928u;
            // 0x2b292c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224030u;
    if (runtime->hasFunction(0x224030u)) {
        auto targetFn = runtime->lookupFunction(0x224030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2930u; }
        if (ctx->pc != 0x2B2930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameModeSet__Fii_0x224030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2930u; }
        if (ctx->pc != 0x2B2930u) { return; }
    }
    ctx->pc = 0x2B2930u;
label_2b2930:
    // 0x2b2930: 0x8f849518  lw          $a0, -0x6AE8($gp)
    ctx->pc = 0x2b2930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939928)));
label_2b2934:
    // 0x2b2934: 0x108002d7  beqz        $a0, . + 4 + (0x2D7 << 2)
label_2b2938:
    if (ctx->pc == 0x2B2938u) {
        ctx->pc = 0x2B2938u;
            // 0x2b2938: 0x3c034080  lui         $v1, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
        ctx->pc = 0x2B293Cu;
        goto label_2b293c;
    }
    ctx->pc = 0x2B2934u;
    {
        const bool branch_taken_0x2b2934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2934u;
            // 0x2b2938: 0x3c034080  lui         $v1, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2934) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B293Cu;
label_2b293c:
    // 0x2b293c: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2b293cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
label_2b2940:
    // 0x2b2940: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x2b2940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_2b2944:
    // 0x2b2944: 0x100002d3  b           . + 4 + (0x2D3 << 2)
label_2b2948:
    if (ctx->pc == 0x2B2948u) {
        ctx->pc = 0x2B2948u;
            // 0x2b2948: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x2B294Cu;
        goto label_2b294c;
    }
    ctx->pc = 0x2B2944u;
    {
        const bool branch_taken_0x2b2944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2944u;
            // 0x2b2948: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2944) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B294Cu;
label_2b294c:
    // 0x2b294c: 0xc088ff8  jal         func_223FE0
label_2b2950:
    if (ctx->pc == 0x2B2950u) {
        ctx->pc = 0x2B2954u;
        goto label_2b2954;
    }
    ctx->pc = 0x2B294Cu;
    SET_GPR_U32(ctx, 31, 0x2B2954u);
    ctx->pc = 0x223FE0u;
    if (runtime->hasFunction(0x223FE0u)) {
        auto targetFn = runtime->lookupFunction(0x223FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2954u; }
        if (ctx->pc != 0x2B2954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainFrameEndFlag__Fv_0x223fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2954u; }
        if (ctx->pc != 0x2B2954u) { return; }
    }
    ctx->pc = 0x2B2954u;
label_2b2954:
    // 0x2b2954: 0x104002cf  beqz        $v0, . + 4 + (0x2CF << 2)
label_2b2958:
    if (ctx->pc == 0x2B2958u) {
        ctx->pc = 0x2B2958u;
            // 0x2b2958: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B295Cu;
        goto label_2b295c;
    }
    ctx->pc = 0x2B2954u;
    {
        const bool branch_taken_0x2b2954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2954u;
            // 0x2b2958: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2954) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B295Cu;
label_2b295c:
    // 0x2b295c: 0xc0684a8  jal         func_1A12A0
label_2b2960:
    if (ctx->pc == 0x2B2960u) {
        ctx->pc = 0x2B2964u;
        goto label_2b2964;
    }
    ctx->pc = 0x2B295Cu;
    SET_GPR_U32(ctx, 31, 0x2B2964u);
    ctx->pc = 0x1A12A0u;
    if (runtime->hasFunction(0x1A12A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A12A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2964u; }
        if (ctx->pc != 0x2B2964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsCheckParty__Fi_0x1a12a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2964u; }
        if (ctx->pc != 0x2B2964u) { return; }
    }
    ctx->pc = 0x2B2964u;
label_2b2964:
    // 0x2b2964: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b2968:
    if (ctx->pc == 0x2B2968u) {
        ctx->pc = 0x2B2968u;
            // 0x2b2968: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B296Cu;
        goto label_2b296c;
    }
    ctx->pc = 0x2B2964u;
    {
        const bool branch_taken_0x2b2964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2964u;
            // 0x2b2968: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2964) {
            ctx->pc = 0x2B297Cu;
            goto label_2b297c;
        }
    }
    ctx->pc = 0x2B296Cu;
label_2b296c:
    // 0x2b296c: 0xc094274  jal         func_2509D0
label_2b2970:
    if (ctx->pc == 0x2B2970u) {
        ctx->pc = 0x2B2974u;
        goto label_2b2974;
    }
    ctx->pc = 0x2B296Cu;
    SET_GPR_U32(ctx, 31, 0x2B2974u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2974u; }
        if (ctx->pc != 0x2B2974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2974u; }
        if (ctx->pc != 0x2B2974u) { return; }
    }
    ctx->pc = 0x2B2974u;
label_2b2974:
    // 0x2b2974: 0x100002c7  b           . + 4 + (0x2C7 << 2)
label_2b2978:
    if (ctx->pc == 0x2B2978u) {
        ctx->pc = 0x2B297Cu;
        goto label_2b297c;
    }
    ctx->pc = 0x2B2974u;
    {
        const bool branch_taken_0x2b2974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2974) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B297Cu;
label_2b297c:
    // 0x2b297c: 0xc066fe0  jal         func_19BF80
label_2b2980:
    if (ctx->pc == 0x2B2980u) {
        ctx->pc = 0x2B2980u;
            // 0x2b2980: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->pc = 0x2B2984u;
        goto label_2b2984;
    }
    ctx->pc = 0x2B297Cu;
    SET_GPR_U32(ctx, 31, 0x2B2984u);
    ctx->pc = 0x2B2980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B297Cu;
            // 0x2b2980: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF80u;
    if (runtime->hasFunction(0x19BF80u)) {
        auto targetFn = runtime->lookupFunction(0x19BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2984u; }
        if (ctx->pc != 0x2B2984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableCharaChangeFlag__16CUserDataManagerFv_0x19bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2984u; }
        if (ctx->pc != 0x2B2984u) { return; }
    }
    ctx->pc = 0x2B2984u;
label_2b2984:
    // 0x2b2984: 0xae820124  sw          $v0, 0x124($s4)
    ctx->pc = 0x2b2984u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
label_2b2988:
    // 0x2b2988: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b2988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b298c:
    // 0x2b298c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b298cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b2990:
    // 0x2b2990: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b2990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b2994:
    // 0x2b2994: 0xa682024c  sh          $v0, 0x24C($s4)
    ctx->pc = 0x2b2994u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 588), (uint16_t)GPR_U32(ctx, 2));
label_2b2998:
    // 0x2b2998: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2b2998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2b299c:
    // 0x2b299c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b299cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b29a0:
    // 0x2b29a0: 0xc08e898  jal         func_23A260
label_2b29a4:
    if (ctx->pc == 0x2B29A4u) {
        ctx->pc = 0x2B29A4u;
            // 0x2b29a4: 0xa682024e  sh          $v0, 0x24E($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 590), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B29A8u;
        goto label_2b29a8;
    }
    ctx->pc = 0x2B29A0u;
    SET_GPR_U32(ctx, 31, 0x2B29A8u);
    ctx->pc = 0x2B29A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B29A0u;
            // 0x2b29a4: 0xa682024e  sh          $v0, 0x24E($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 590), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B29A8u; }
        if (ctx->pc != 0x2B29A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B29A8u; }
        if (ctx->pc != 0x2B29A8u) { return; }
    }
    ctx->pc = 0x2B29A8u;
label_2b29a8:
    // 0x2b29a8: 0xc094274  jal         func_2509D0
label_2b29ac:
    if (ctx->pc == 0x2B29ACu) {
        ctx->pc = 0x2B29ACu;
            // 0x2b29ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B29B0u;
        goto label_2b29b0;
    }
    ctx->pc = 0x2B29A8u;
    SET_GPR_U32(ctx, 31, 0x2B29B0u);
    ctx->pc = 0x2B29ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B29A8u;
            // 0x2b29ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B29B0u; }
        if (ctx->pc != 0x2B29B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B29B0u; }
        if (ctx->pc != 0x2B29B0u) { return; }
    }
    ctx->pc = 0x2B29B0u;
label_2b29b0:
    // 0x2b29b0: 0x100002b8  b           . + 4 + (0x2B8 << 2)
label_2b29b4:
    if (ctx->pc == 0x2B29B4u) {
        ctx->pc = 0x2B29B8u;
        goto label_2b29b8;
    }
    ctx->pc = 0x2B29B0u;
    {
        const bool branch_taken_0x2b29b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b29b0) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B29B8u;
label_2b29b8:
    // 0x2b29b8: 0xc094274  jal         func_2509D0
label_2b29bc:
    if (ctx->pc == 0x2B29BCu) {
        ctx->pc = 0x2B29C0u;
        goto label_2b29c0;
    }
    ctx->pc = 0x2B29B8u;
    SET_GPR_U32(ctx, 31, 0x2B29C0u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B29C0u; }
        if (ctx->pc != 0x2B29C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B29C0u; }
        if (ctx->pc != 0x2B29C0u) { return; }
    }
    ctx->pc = 0x2B29C0u;
label_2b29c0:
    // 0x2b29c0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b29c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b29c4:
    // 0x2b29c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b29c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b29c8:
    // 0x2b29c8: 0xc08e7cc  jal         func_239F30
label_2b29cc:
    if (ctx->pc == 0x2B29CCu) {
        ctx->pc = 0x2B29CCu;
            // 0x2b29cc: 0x24a5ec80  addiu       $a1, $a1, -0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
        ctx->pc = 0x2B29D0u;
        goto label_2b29d0;
    }
    ctx->pc = 0x2B29C8u;
    SET_GPR_U32(ctx, 31, 0x2B29D0u);
    ctx->pc = 0x2B29CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B29C8u;
            // 0x2b29cc: 0x24a5ec80  addiu       $a1, $a1, -0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B29D0u; }
        if (ctx->pc != 0x2B29D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B29D0u; }
        if (ctx->pc != 0x2B29D0u) { return; }
    }
    ctx->pc = 0x2B29D0u;
label_2b29d0:
    // 0x2b29d0: 0x8e84020c  lw          $a0, 0x20C($s4)
    ctx->pc = 0x2b29d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 524)));
label_2b29d4:
    // 0x2b29d4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2b29d8:
    if (ctx->pc == 0x2B29D8u) {
        ctx->pc = 0x2B29DCu;
        goto label_2b29dc;
    }
    ctx->pc = 0x2B29D4u;
    {
        const bool branch_taken_0x2b29d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b29d4) {
            ctx->pc = 0x2B29F0u;
            goto label_2b29f0;
        }
    }
    ctx->pc = 0x2B29DCu;
label_2b29dc:
    // 0x2b29dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b29dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b29e0:
    // 0x2b29e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b29e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b29e4:
    // 0x2b29e4: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x2b29e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_2b29e8:
    // 0x2b29e8: 0x320f809  jalr        $t9
label_2b29ec:
    if (ctx->pc == 0x2B29ECu) {
        ctx->pc = 0x2B29ECu;
            // 0x2b29ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B29F0u;
        goto label_2b29f0;
    }
    ctx->pc = 0x2B29E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B29F0u);
        ctx->pc = 0x2B29ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B29E8u;
            // 0x2b29ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B29F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B29F0u; }
            if (ctx->pc != 0x2B29F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2B29F0u;
label_2b29f0:
    // 0x2b29f0: 0xc08f014  jal         func_23C050
label_2b29f4:
    if (ctx->pc == 0x2B29F4u) {
        ctx->pc = 0x2B29F4u;
            // 0x2b29f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B29F8u;
        goto label_2b29f8;
    }
    ctx->pc = 0x2B29F0u;
    SET_GPR_U32(ctx, 31, 0x2B29F8u);
    ctx->pc = 0x2B29F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B29F0u;
            // 0x2b29f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C050u;
    if (runtime->hasFunction(0x23C050u)) {
        auto targetFn = runtime->lookupFunction(0x23C050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B29F8u; }
        if (ctx->pc != 0x2B29F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosPlay__12CMenuKeyFuncFv_0x23c050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B29F8u; }
        if (ctx->pc != 0x2B29F8u) { return; }
    }
    ctx->pc = 0x2B29F8u;
label_2b29f8:
    // 0x2b29f8: 0xa6800014  sh          $zero, 0x14($s4)
    ctx->pc = 0x2b29f8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 0));
label_2b29fc:
    // 0x2b29fc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2b29fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b2a00:
    // 0x2b2a00: 0xae800270  sw          $zero, 0x270($s4)
    ctx->pc = 0x2b2a00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 624), GPR_U32(ctx, 0));
label_2b2a04:
    // 0x2b2a04: 0xae820250  sw          $v0, 0x250($s4)
    ctx->pc = 0x2b2a04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 592), GPR_U32(ctx, 2));
label_2b2a08:
    // 0x2b2a08: 0x100002a2  b           . + 4 + (0x2A2 << 2)
label_2b2a0c:
    if (ctx->pc == 0x2B2A0Cu) {
        ctx->pc = 0x2B2A0Cu;
            // 0x2b2a0c: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B2A10u;
        goto label_2b2a10;
    }
    ctx->pc = 0x2B2A08u;
    {
        const bool branch_taken_0x2b2a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2A08u;
            // 0x2b2a0c: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2a08) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2A10u;
label_2b2a10:
    // 0x2b2a10: 0x8e8201f8  lw          $v0, 0x1F8($s4)
    ctx->pc = 0x2b2a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 504)));
label_2b2a14:
    // 0x2b2a14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b2a18:
    if (ctx->pc == 0x2B2A18u) {
        ctx->pc = 0x2B2A18u;
            // 0x2b2a18: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B2A1Cu;
        goto label_2b2a1c;
    }
    ctx->pc = 0x2B2A14u;
    {
        const bool branch_taken_0x2b2a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2A14u;
            // 0x2b2a18: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2a14) {
            ctx->pc = 0x2B2A28u;
            goto label_2b2a28;
        }
    }
    ctx->pc = 0x2B2A1Cu;
label_2b2a1c:
    // 0x2b2a1c: 0x8e8201f4  lw          $v0, 0x1F4($s4)
    ctx->pc = 0x2b2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 500)));
label_2b2a20:
    // 0x2b2a20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b2a24:
    if (ctx->pc == 0x2B2A24u) {
        ctx->pc = 0x2B2A24u;
            // 0x2b2a24: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B2A28u;
        goto label_2b2a28;
    }
    ctx->pc = 0x2B2A20u;
    {
        const bool branch_taken_0x2b2a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2A20u;
            // 0x2b2a24: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2a20) {
            ctx->pc = 0x2B2A38u;
            goto label_2b2a38;
        }
    }
    ctx->pc = 0x2B2A28u;
label_2b2a28:
    // 0x2b2a28: 0xc094274  jal         func_2509D0
label_2b2a2c:
    if (ctx->pc == 0x2B2A2Cu) {
        ctx->pc = 0x2B2A30u;
        goto label_2b2a30;
    }
    ctx->pc = 0x2B2A28u;
    SET_GPR_U32(ctx, 31, 0x2B2A30u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2A30u; }
        if (ctx->pc != 0x2B2A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2A30u; }
        if (ctx->pc != 0x2B2A30u) { return; }
    }
    ctx->pc = 0x2B2A30u;
label_2b2a30:
    // 0x2b2a30: 0x10000298  b           . + 4 + (0x298 << 2)
label_2b2a34:
    if (ctx->pc == 0x2B2A34u) {
        ctx->pc = 0x2B2A38u;
        goto label_2b2a38;
    }
    ctx->pc = 0x2B2A30u;
    {
        const bool branch_taken_0x2b2a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2a30) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2A38u;
label_2b2a38:
    // 0x2b2a38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b2a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b2a3c:
    // 0x2b2a3c: 0x24a5ec98  addiu       $a1, $a1, -0x1368
    ctx->pc = 0x2b2a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962328));
label_2b2a40:
    // 0x2b2a40: 0xc08e7cc  jal         func_239F30
label_2b2a44:
    if (ctx->pc == 0x2B2A44u) {
        ctx->pc = 0x2B2A44u;
            // 0x2b2a44: 0xa280012d  sb          $zero, 0x12D($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 301), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B2A48u;
        goto label_2b2a48;
    }
    ctx->pc = 0x2B2A40u;
    SET_GPR_U32(ctx, 31, 0x2B2A48u);
    ctx->pc = 0x2B2A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2A40u;
            // 0x2b2a44: 0xa280012d  sb          $zero, 0x12D($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 301), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2A48u; }
        if (ctx->pc != 0x2B2A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2A48u; }
        if (ctx->pc != 0x2B2A48u) { return; }
    }
    ctx->pc = 0x2B2A48u;
label_2b2a48:
    // 0x2b2a48: 0x83869b9c  lb          $a2, -0x6464($gp)
    ctx->pc = 0x2b2a48u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941596)));
label_2b2a4c:
    // 0x2b2a4c: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b2a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b2a50:
    // 0x2b2a50: 0x8e85021c  lw          $a1, 0x21C($s4)
    ctx->pc = 0x2b2a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b2a54:
    // 0x2b2a54: 0xc067288  jal         func_19CA20
label_2b2a58:
    if (ctx->pc == 0x2B2A58u) {
        ctx->pc = 0x2B2A58u;
            // 0x2b2a58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2A5Cu;
        goto label_2b2a5c;
    }
    ctx->pc = 0x2B2A54u;
    SET_GPR_U32(ctx, 31, 0x2B2A5Cu);
    ctx->pc = 0x2B2A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2A54u;
            // 0x2b2a58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CA20u;
    if (runtime->hasFunction(0x19CA20u)) {
        auto targetFn = runtime->lookupFunction(0x19CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2A5Cu; }
        if (ctx->pc != 0x2B2A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseNpcAbility__16CUserDataManagerFiii_0x19ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2A5Cu; }
        if (ctx->pc != 0x2B2A5Cu) { return; }
    }
    ctx->pc = 0x2B2A5Cu;
label_2b2a5c:
    // 0x2b2a5c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2b2a60:
    if (ctx->pc == 0x2B2A60u) {
        ctx->pc = 0x2B2A60u;
            // 0x2b2a60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B2A64u;
        goto label_2b2a64;
    }
    ctx->pc = 0x2B2A5Cu;
    {
        const bool branch_taken_0x2b2a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2A5Cu;
            // 0x2b2a60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2a5c) {
            ctx->pc = 0x2B2AB4u;
            goto label_2b2ab4;
        }
    }
    ctx->pc = 0x2B2A64u;
label_2b2a64:
    // 0x2b2a64: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b2a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b2a68:
    // 0x2b2a68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b2a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b2a6c:
    // 0x2b2a6c: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x2b2a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_2b2a70:
    // 0x2b2a70: 0xc08e7cc  jal         func_239F30
label_2b2a74:
    if (ctx->pc == 0x2B2A74u) {
        ctx->pc = 0x2B2A74u;
            // 0x2b2a74: 0x24a5eca8  addiu       $a1, $a1, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962344));
        ctx->pc = 0x2B2A78u;
        goto label_2b2a78;
    }
    ctx->pc = 0x2B2A70u;
    SET_GPR_U32(ctx, 31, 0x2B2A78u);
    ctx->pc = 0x2B2A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2A70u;
            // 0x2b2a74: 0x24a5eca8  addiu       $a1, $a1, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2A78u; }
        if (ctx->pc != 0x2B2A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2A78u; }
        if (ctx->pc != 0x2B2A78u) { return; }
    }
    ctx->pc = 0x2B2A78u;
label_2b2a78:
    // 0x2b2a78: 0x8e84021c  lw          $a0, 0x21C($s4)
    ctx->pc = 0x2b2a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b2a7c:
    // 0x2b2a7c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2b2a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b2a80:
    // 0x2b2a80: 0xc0aacc4  jal         func_2AB310
label_2b2a84:
    if (ctx->pc == 0x2B2A84u) {
        ctx->pc = 0x2B2A84u;
            // 0x2b2a84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2A88u;
        goto label_2b2a88;
    }
    ctx->pc = 0x2B2A80u;
    SET_GPR_U32(ctx, 31, 0x2B2A88u);
    ctx->pc = 0x2B2A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2A80u;
            // 0x2b2a84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2A88u; }
        if (ctx->pc != 0x2B2A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2A88u; }
        if (ctx->pc != 0x2B2A88u) { return; }
    }
    ctx->pc = 0x2B2A88u;
label_2b2a88:
    // 0x2b2a88: 0x83839b9c  lb          $v1, -0x6464($gp)
    ctx->pc = 0x2b2a88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941596)));
label_2b2a8c:
    // 0x2b2a8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b2a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b2a90:
    // 0x2b2a90: 0xc0877e0  jal         func_21DF80
label_2b2a94:
    if (ctx->pc == 0x2B2A94u) {
        ctx->pc = 0x2B2A94u;
            // 0x2b2a94: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x2B2A98u;
        goto label_2b2a98;
    }
    ctx->pc = 0x2B2A90u;
    SET_GPR_U32(ctx, 31, 0x2B2A98u);
    ctx->pc = 0x2B2A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2A90u;
            // 0x2b2a94: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2A98u; }
        if (ctx->pc != 0x2B2A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2A98u; }
        if (ctx->pc != 0x2B2A98u) { return; }
    }
    ctx->pc = 0x2B2A98u;
label_2b2a98:
    // 0x2b2a98: 0xc087898  jal         func_21E260
label_2b2a9c:
    if (ctx->pc == 0x2B2A9Cu) {
        ctx->pc = 0x2B2A9Cu;
            // 0x2b2a9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2AA0u;
        goto label_2b2aa0;
    }
    ctx->pc = 0x2B2A98u;
    SET_GPR_U32(ctx, 31, 0x2B2AA0u);
    ctx->pc = 0x2B2A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2A98u;
            // 0x2b2a9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2AA0u; }
        if (ctx->pc != 0x2B2AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2AA0u; }
        if (ctx->pc != 0x2B2AA0u) { return; }
    }
    ctx->pc = 0x2B2AA0u;
label_2b2aa0:
    // 0x2b2aa0: 0x8e85020c  lw          $a1, 0x20C($s4)
    ctx->pc = 0x2b2aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 524)));
label_2b2aa4:
    // 0x2b2aa4: 0xc0ac0b8  jal         func_2B02E0
label_2b2aa8:
    if (ctx->pc == 0x2B2AA8u) {
        ctx->pc = 0x2B2AA8u;
            // 0x2b2aa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2AACu;
        goto label_2b2aac;
    }
    ctx->pc = 0x2B2AA4u;
    SET_GPR_U32(ctx, 31, 0x2B2AACu);
    ctx->pc = 0x2B2AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2AA4u;
            // 0x2b2aa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B02E0u;
    if (runtime->hasFunction(0x2B02E0u)) {
        auto targetFn = runtime->lookupFunction(0x2B02E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2AACu; }
        if (ctx->pc != 0x2B2AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AdjustNPCTalk__FP7CDC2MesP11CCharacter2_0x2b02e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2AACu; }
        if (ctx->pc != 0x2B2AACu) { return; }
    }
    ctx->pc = 0x2B2AACu;
label_2b2aac:
    // 0x2b2aac: 0x10000279  b           . + 4 + (0x279 << 2)
label_2b2ab0:
    if (ctx->pc == 0x2B2AB0u) {
        ctx->pc = 0x2B2AB4u;
        goto label_2b2ab4;
    }
    ctx->pc = 0x2B2AACu;
    {
        const bool branch_taken_0x2b2aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2aac) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2AB4u;
label_2b2ab4:
    // 0x2b2ab4: 0xc08ca88  jal         func_232A20
label_2b2ab8:
    if (ctx->pc == 0x2B2AB8u) {
        ctx->pc = 0x2B2ABCu;
        goto label_2b2abc;
    }
    ctx->pc = 0x2B2AB4u;
    SET_GPR_U32(ctx, 31, 0x2B2ABCu);
    ctx->pc = 0x232A20u;
    if (runtime->hasFunction(0x232A20u)) {
        auto targetFn = runtime->lookupFunction(0x232A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2ABCu; }
        if (ctx->pc != 0x2B2ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuLoopType__Fv_0x232a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2ABCu; }
        if (ctx->pc != 0x2B2ABCu) { return; }
    }
    ctx->pc = 0x2B2ABCu;
label_2b2abc:
    // 0x2b2abc: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_2b2ac0:
    if (ctx->pc == 0x2B2AC0u) {
        ctx->pc = 0x2B2AC4u;
        goto label_2b2ac4;
    }
    ctx->pc = 0x2B2ABCu;
    {
        const bool branch_taken_0x2b2abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2abc) {
            ctx->pc = 0x2B2B5Cu;
            goto label_2b2b5c;
        }
    }
    ctx->pc = 0x2B2AC4u;
label_2b2ac4:
    // 0x2b2ac4: 0x8e84021c  lw          $a0, 0x21C($s4)
    ctx->pc = 0x2b2ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b2ac8:
    // 0x2b2ac8: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2b2ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2b2acc:
    // 0x2b2acc: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_2b2ad0:
    if (ctx->pc == 0x2B2AD0u) {
        ctx->pc = 0x2B2AD0u;
            // 0x2b2ad0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2AD4u;
        goto label_2b2ad4;
    }
    ctx->pc = 0x2B2ACCu;
    {
        const bool branch_taken_0x2b2acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2ACCu;
            // 0x2b2ad0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2acc) {
            ctx->pc = 0x2B2B10u;
            goto label_2b2b10;
        }
    }
    ctx->pc = 0x2B2AD4u;
label_2b2ad4:
    // 0x2b2ad4: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2b2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2b2ad8:
    // 0x2b2ad8: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
label_2b2adc:
    if (ctx->pc == 0x2B2ADCu) {
        ctx->pc = 0x2B2ADCu;
            // 0x2b2adc: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x2B2AE0u;
        goto label_2b2ae0;
    }
    ctx->pc = 0x2B2AD8u;
    {
        const bool branch_taken_0x2b2ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2AD8u;
            // 0x2b2adc: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ad8) {
            ctx->pc = 0x2B2B10u;
            goto label_2b2b10;
        }
    }
    ctx->pc = 0x2B2AE0u;
label_2b2ae0:
    // 0x2b2ae0: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_2b2ae4:
    if (ctx->pc == 0x2B2AE4u) {
        ctx->pc = 0x2B2AE4u;
            // 0x2b2ae4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x2B2AE8u;
        goto label_2b2ae8;
    }
    ctx->pc = 0x2B2AE0u;
    {
        const bool branch_taken_0x2b2ae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2AE0u;
            // 0x2b2ae4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ae0) {
            ctx->pc = 0x2B2B10u;
            goto label_2b2b10;
        }
    }
    ctx->pc = 0x2B2AE8u;
label_2b2ae8:
    // 0x2b2ae8: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
label_2b2aec:
    if (ctx->pc == 0x2B2AECu) {
        ctx->pc = 0x2B2AECu;
            // 0x2b2aec: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x2B2AF0u;
        goto label_2b2af0;
    }
    ctx->pc = 0x2B2AE8u;
    {
        const bool branch_taken_0x2b2ae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2AE8u;
            // 0x2b2aec: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ae8) {
            ctx->pc = 0x2B2B10u;
            goto label_2b2b10;
        }
    }
    ctx->pc = 0x2B2AF0u;
label_2b2af0:
    // 0x2b2af0: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_2b2af4:
    if (ctx->pc == 0x2B2AF4u) {
        ctx->pc = 0x2B2AF4u;
            // 0x2b2af4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2B2AF8u;
        goto label_2b2af8;
    }
    ctx->pc = 0x2B2AF0u;
    {
        const bool branch_taken_0x2b2af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2AF0u;
            // 0x2b2af4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2af0) {
            ctx->pc = 0x2B2B10u;
            goto label_2b2b10;
        }
    }
    ctx->pc = 0x2B2AF8u;
label_2b2af8:
    // 0x2b2af8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_2b2afc:
    if (ctx->pc == 0x2B2AFCu) {
        ctx->pc = 0x2B2AFCu;
            // 0x2b2afc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B2B00u;
        goto label_2b2b00;
    }
    ctx->pc = 0x2B2AF8u;
    {
        const bool branch_taken_0x2b2af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2AF8u;
            // 0x2b2afc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2af8) {
            ctx->pc = 0x2B2B10u;
            goto label_2b2b10;
        }
    }
    ctx->pc = 0x2B2B00u;
label_2b2b00:
    // 0x2b2b00: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_2b2b04:
    if (ctx->pc == 0x2B2B04u) {
        ctx->pc = 0x2B2B08u;
        goto label_2b2b08;
    }
    ctx->pc = 0x2B2B00u;
    {
        const bool branch_taken_0x2b2b00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b2b00) {
            ctx->pc = 0x2B2B10u;
            goto label_2b2b10;
        }
    }
    ctx->pc = 0x2B2B08u;
label_2b2b08:
    // 0x2b2b08: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b2b0c:
    if (ctx->pc == 0x2B2B0Cu) {
        ctx->pc = 0x2B2B10u;
        goto label_2b2b10;
    }
    ctx->pc = 0x2B2B08u;
    {
        const bool branch_taken_0x2b2b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2b08) {
            ctx->pc = 0x2B2B14u;
            goto label_2b2b14;
        }
    }
    ctx->pc = 0x2B2B10u;
label_2b2b10:
    // 0x2b2b10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b2b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2b14:
    // 0x2b2b14: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_2b2b18:
    if (ctx->pc == 0x2B2B18u) {
        ctx->pc = 0x2B2B18u;
            // 0x2b2b18: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2B2B1Cu;
        goto label_2b2b1c;
    }
    ctx->pc = 0x2B2B14u;
    {
        const bool branch_taken_0x2b2b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2B14u;
            // 0x2b2b18: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b14) {
            ctx->pc = 0x2B2B5Cu;
            goto label_2b2b5c;
        }
    }
    ctx->pc = 0x2B2B1Cu;
label_2b2b1c:
    // 0x2b2b1c: 0xc0aacc4  jal         func_2AB310
label_2b2b20:
    if (ctx->pc == 0x2B2B20u) {
        ctx->pc = 0x2B2B20u;
            // 0x2b2b20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B24u;
        goto label_2b2b24;
    }
    ctx->pc = 0x2B2B1Cu;
    SET_GPR_U32(ctx, 31, 0x2B2B24u);
    ctx->pc = 0x2B2B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2B1Cu;
            // 0x2b2b20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2B24u; }
        if (ctx->pc != 0x2B2B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2B24u; }
        if (ctx->pc != 0x2B2B24u) { return; }
    }
    ctx->pc = 0x2B2B24u;
label_2b2b24:
    // 0x2b2b24: 0x83839b9c  lb          $v1, -0x6464($gp)
    ctx->pc = 0x2b2b24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941596)));
label_2b2b28:
    // 0x2b2b28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b2b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b2b2c:
    // 0x2b2b2c: 0xc0877e0  jal         func_21DF80
label_2b2b30:
    if (ctx->pc == 0x2B2B30u) {
        ctx->pc = 0x2B2B30u;
            // 0x2b2b30: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x2B2B34u;
        goto label_2b2b34;
    }
    ctx->pc = 0x2B2B2Cu;
    SET_GPR_U32(ctx, 31, 0x2B2B34u);
    ctx->pc = 0x2B2B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2B2Cu;
            // 0x2b2b30: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2B34u; }
        if (ctx->pc != 0x2B2B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2B34u; }
        if (ctx->pc != 0x2B2B34u) { return; }
    }
    ctx->pc = 0x2B2B34u;
label_2b2b34:
    // 0x2b2b34: 0xc087898  jal         func_21E260
label_2b2b38:
    if (ctx->pc == 0x2B2B38u) {
        ctx->pc = 0x2B2B38u;
            // 0x2b2b38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B3Cu;
        goto label_2b2b3c;
    }
    ctx->pc = 0x2B2B34u;
    SET_GPR_U32(ctx, 31, 0x2B2B3Cu);
    ctx->pc = 0x2B2B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2B34u;
            // 0x2b2b38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2B3Cu; }
        if (ctx->pc != 0x2B2B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2B3Cu; }
        if (ctx->pc != 0x2B2B3Cu) { return; }
    }
    ctx->pc = 0x2B2B3Cu;
label_2b2b3c:
    // 0x2b2b3c: 0x8e85020c  lw          $a1, 0x20C($s4)
    ctx->pc = 0x2b2b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 524)));
label_2b2b40:
    // 0x2b2b40: 0xc0ac0b8  jal         func_2B02E0
label_2b2b44:
    if (ctx->pc == 0x2B2B44u) {
        ctx->pc = 0x2B2B44u;
            // 0x2b2b44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B48u;
        goto label_2b2b48;
    }
    ctx->pc = 0x2B2B40u;
    SET_GPR_U32(ctx, 31, 0x2B2B48u);
    ctx->pc = 0x2B2B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2B40u;
            // 0x2b2b44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B02E0u;
    if (runtime->hasFunction(0x2B02E0u)) {
        auto targetFn = runtime->lookupFunction(0x2B02E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2B48u; }
        if (ctx->pc != 0x2B2B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AdjustNPCTalk__FP7CDC2MesP11CCharacter2_0x2b02e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2B48u; }
        if (ctx->pc != 0x2B2B48u) { return; }
    }
    ctx->pc = 0x2B2B48u;
label_2b2b48:
    // 0x2b2b48: 0xc094274  jal         func_2509D0
label_2b2b4c:
    if (ctx->pc == 0x2B2B4Cu) {
        ctx->pc = 0x2B2B4Cu;
            // 0x2b2b4c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B2B50u;
        goto label_2b2b50;
    }
    ctx->pc = 0x2B2B48u;
    SET_GPR_U32(ctx, 31, 0x2B2B50u);
    ctx->pc = 0x2B2B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2B48u;
            // 0x2b2b4c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2B50u; }
        if (ctx->pc != 0x2B2B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2B50u; }
        if (ctx->pc != 0x2B2B50u) { return; }
    }
    ctx->pc = 0x2B2B50u;
label_2b2b50:
    // 0x2b2b50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b2b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b2b54:
    // 0x2b2b54: 0x1000024f  b           . + 4 + (0x24F << 2)
label_2b2b58:
    if (ctx->pc == 0x2B2B58u) {
        ctx->pc = 0x2B2B58u;
            // 0x2b2b58: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B2B5Cu;
        goto label_2b2b5c;
    }
    ctx->pc = 0x2B2B54u;
    {
        const bool branch_taken_0x2b2b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2B54u;
            // 0x2b2b58: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b54) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2B5Cu;
label_2b2b5c:
    // 0x2b2b5c: 0x8e84021c  lw          $a0, 0x21C($s4)
    ctx->pc = 0x2b2b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b2b60:
    // 0x2b2b60: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2b2b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2b2b64:
    // 0x2b2b64: 0xc0aacc4  jal         func_2AB310
label_2b2b68:
    if (ctx->pc == 0x2B2B68u) {
        ctx->pc = 0x2B2B68u;
            // 0x2b2b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B6Cu;
        goto label_2b2b6c;
    }
    ctx->pc = 0x2B2B64u;
    SET_GPR_U32(ctx, 31, 0x2B2B6Cu);
    ctx->pc = 0x2B2B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2B64u;
            // 0x2b2b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2B6Cu; }
        if (ctx->pc != 0x2B2B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2B6Cu; }
        if (ctx->pc != 0x2B2B6Cu) { return; }
    }
    ctx->pc = 0x2B2B6Cu;
label_2b2b6c:
    // 0x2b2b6c: 0x83839b9c  lb          $v1, -0x6464($gp)
    ctx->pc = 0x2b2b6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941596)));
label_2b2b70:
    // 0x2b2b70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b2b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b2b74:
    // 0x2b2b74: 0xc0877e0  jal         func_21DF80
label_2b2b78:
    if (ctx->pc == 0x2B2B78u) {
        ctx->pc = 0x2B2B78u;
            // 0x2b2b78: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x2B2B7Cu;
        goto label_2b2b7c;
    }
    ctx->pc = 0x2B2B74u;
    SET_GPR_U32(ctx, 31, 0x2B2B7Cu);
    ctx->pc = 0x2B2B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2B74u;
            // 0x2b2b78: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2B7Cu; }
        if (ctx->pc != 0x2B2B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2B7Cu; }
        if (ctx->pc != 0x2B2B7Cu) { return; }
    }
    ctx->pc = 0x2B2B7Cu;
label_2b2b7c:
    // 0x2b2b7c: 0xc087898  jal         func_21E260
label_2b2b80:
    if (ctx->pc == 0x2B2B80u) {
        ctx->pc = 0x2B2B80u;
            // 0x2b2b80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B84u;
        goto label_2b2b84;
    }
    ctx->pc = 0x2B2B7Cu;
    SET_GPR_U32(ctx, 31, 0x2B2B84u);
    ctx->pc = 0x2B2B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2B7Cu;
            // 0x2b2b80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2B84u; }
        if (ctx->pc != 0x2B2B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2B84u; }
        if (ctx->pc != 0x2B2B84u) { return; }
    }
    ctx->pc = 0x2B2B84u;
label_2b2b84:
    // 0x2b2b84: 0x8e4600e4  lw          $a2, 0xE4($s2)
    ctx->pc = 0x2b2b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_2b2b88:
    // 0x2b2b88: 0x1cc00003  bgtz        $a2, . + 4 + (0x3 << 2)
label_2b2b8c:
    if (ctx->pc == 0x2B2B8Cu) {
        ctx->pc = 0x2B2B8Cu;
            // 0x2b2b8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B90u;
        goto label_2b2b90;
    }
    ctx->pc = 0x2B2B88u;
    {
        const bool branch_taken_0x2b2b88 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2B2B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2B88u;
            // 0x2b2b8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b88) {
            ctx->pc = 0x2B2B98u;
            goto label_2b2b98;
        }
    }
    ctx->pc = 0x2B2B90u;
label_2b2b90:
    // 0x2b2b90: 0x1000000e  b           . + 4 + (0xE << 2)
label_2b2b94:
    if (ctx->pc == 0x2B2B94u) {
        ctx->pc = 0x2B2B94u;
            // 0x2b2b94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B98u;
        goto label_2b2b98;
    }
    ctx->pc = 0x2B2B90u;
    {
        const bool branch_taken_0x2b2b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2B90u;
            // 0x2b2b94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b90) {
            ctx->pc = 0x2B2BCCu;
            goto label_2b2bcc;
        }
    }
    ctx->pc = 0x2B2B98u;
label_2b2b98:
    // 0x2b2b98: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b2b98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2b9c:
    // 0x2b2b9c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2b2ba0:
    if (ctx->pc == 0x2B2BA0u) {
        ctx->pc = 0x2B2BA0u;
            // 0x2b2ba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2BA4u;
        goto label_2b2ba4;
    }
    ctx->pc = 0x2B2B9Cu;
    {
        const bool branch_taken_0x2b2b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2B9Cu;
            // 0x2b2ba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b9c) {
            ctx->pc = 0x2B2BC0u;
            goto label_2b2bc0;
        }
    }
    ctx->pc = 0x2B2BA4u;
label_2b2ba4:
    // 0x2b2ba4: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x2b2ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_2b2ba8:
    // 0x2b2ba8: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x2b2ba8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b2bac:
    // 0x2b2bac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2b2bb0:
    if (ctx->pc == 0x2B2BB0u) {
        ctx->pc = 0x2B2BB4u;
        goto label_2b2bb4;
    }
    ctx->pc = 0x2B2BACu;
    {
        const bool branch_taken_0x2b2bac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2bac) {
            ctx->pc = 0x2B2BB8u;
            goto label_2b2bb8;
        }
    }
    ctx->pc = 0x2B2BB4u;
label_2b2bb4:
    // 0x2b2bb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b2bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2bb8:
    // 0x2b2bb8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2b2bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2b2bbc:
    // 0x2b2bbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b2bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2b2bc0:
    // 0x2b2bc0: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2b2bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2b2bc4:
    // 0x2b2bc4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2b2bc8:
    if (ctx->pc == 0x2B2BC8u) {
        ctx->pc = 0x2B2BC8u;
            // 0x2b2bc8: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->pc = 0x2B2BCCu;
        goto label_2b2bcc;
    }
    ctx->pc = 0x2B2BC4u;
    {
        const bool branch_taken_0x2b2bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2BC4u;
            // 0x2b2bc8: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2bc4) {
            ctx->pc = 0x2B2BA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b2ba4;
        }
    }
    ctx->pc = 0x2B2BCCu;
label_2b2bcc:
    // 0x2b2bcc: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x2b2bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2b2bd0:
    // 0x2b2bd0: 0xc0875b0  jal         func_21D6C0
label_2b2bd4:
    if (ctx->pc == 0x2B2BD4u) {
        ctx->pc = 0x2B2BD4u;
            // 0x2b2bd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2BD8u;
        goto label_2b2bd8;
    }
    ctx->pc = 0x2B2BD0u;
    SET_GPR_U32(ctx, 31, 0x2B2BD8u);
    ctx->pc = 0x2B2BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2BD0u;
            // 0x2b2bd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2BD8u; }
        if (ctx->pc != 0x2B2BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2BD8u; }
        if (ctx->pc != 0x2B2BD8u) { return; }
    }
    ctx->pc = 0x2B2BD8u;
label_2b2bd8:
    // 0x2b2bd8: 0xae4001b8  sw          $zero, 0x1B8($s2)
    ctx->pc = 0x2b2bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 0));
label_2b2bdc:
    // 0x2b2bdc: 0x8e85020c  lw          $a1, 0x20C($s4)
    ctx->pc = 0x2b2bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 524)));
label_2b2be0:
    // 0x2b2be0: 0xc0ac0b8  jal         func_2B02E0
label_2b2be4:
    if (ctx->pc == 0x2B2BE4u) {
        ctx->pc = 0x2B2BE4u;
            // 0x2b2be4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2BE8u;
        goto label_2b2be8;
    }
    ctx->pc = 0x2B2BE0u;
    SET_GPR_U32(ctx, 31, 0x2B2BE8u);
    ctx->pc = 0x2B2BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2BE0u;
            // 0x2b2be4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B02E0u;
    if (runtime->hasFunction(0x2B02E0u)) {
        auto targetFn = runtime->lookupFunction(0x2B02E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2BE8u; }
        if (ctx->pc != 0x2B2BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AdjustNPCTalk__FP7CDC2MesP11CCharacter2_0x2b02e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2BE8u; }
        if (ctx->pc != 0x2B2BE8u) { return; }
    }
    ctx->pc = 0x2B2BE8u;
label_2b2be8:
    // 0x2b2be8: 0xc094274  jal         func_2509D0
label_2b2bec:
    if (ctx->pc == 0x2B2BECu) {
        ctx->pc = 0x2B2BECu;
            // 0x2b2bec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2BF0u;
        goto label_2b2bf0;
    }
    ctx->pc = 0x2B2BE8u;
    SET_GPR_U32(ctx, 31, 0x2B2BF0u);
    ctx->pc = 0x2B2BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2BE8u;
            // 0x2b2bec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2BF0u; }
        if (ctx->pc != 0x2B2BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2BF0u; }
        if (ctx->pc != 0x2B2BF0u) { return; }
    }
    ctx->pc = 0x2B2BF0u;
label_2b2bf0:
    // 0x2b2bf0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2b2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b2bf4:
    // 0x2b2bf4: 0x10000227  b           . + 4 + (0x227 << 2)
label_2b2bf8:
    if (ctx->pc == 0x2B2BF8u) {
        ctx->pc = 0x2B2BF8u;
            // 0x2b2bf8: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B2BFCu;
        goto label_2b2bfc;
    }
    ctx->pc = 0x2B2BF4u;
    {
        const bool branch_taken_0x2b2bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2BF4u;
            // 0x2b2bf8: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2bf4) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2BFCu;
label_2b2bfc:
    // 0x2b2bfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b2bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b2c00:
    // 0x2b2c00: 0x8c22cb48  lw          $v0, -0x34B8($at)
    ctx->pc = 0x2b2c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953800)));
label_2b2c04:
    // 0x2b2c04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2b2c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b2c08:
    // 0x2b2c08: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2b2c08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_2b2c0c:
    // 0x2b2c0c: 0xc0875b0  jal         func_21D6C0
label_2b2c10:
    if (ctx->pc == 0x2B2C10u) {
        ctx->pc = 0x2B2C10u;
            // 0x2b2c10: 0xae4017f4  sw          $zero, 0x17F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 6132), GPR_U32(ctx, 0));
        ctx->pc = 0x2B2C14u;
        goto label_2b2c14;
    }
    ctx->pc = 0x2B2C0Cu;
    SET_GPR_U32(ctx, 31, 0x2B2C14u);
    ctx->pc = 0x2B2C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2C0Cu;
            // 0x2b2c10: 0xae4017f4  sw          $zero, 0x17F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 6132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2C14u; }
        if (ctx->pc != 0x2B2C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2C14u; }
        if (ctx->pc != 0x2B2C14u) { return; }
    }
    ctx->pc = 0x2B2C14u;
label_2b2c14:
    // 0x2b2c14: 0x8e8401f8  lw          $a0, 0x1F8($s4)
    ctx->pc = 0x2b2c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 504)));
label_2b2c18:
    // 0x2b2c18: 0x83839b9c  lb          $v1, -0x6464($gp)
    ctx->pc = 0x2b2c18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941596)));
label_2b2c1c:
    // 0x2b2c1c: 0x8e8201f4  lw          $v0, 0x1F4($s4)
    ctx->pc = 0x2b2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 500)));
label_2b2c20:
    // 0x2b2c20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b2c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b2c24:
    // 0x2b2c24: 0x90630032  lbu         $v1, 0x32($v1)
    ctx->pc = 0x2b2c24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_2b2c28:
    // 0x2b2c28: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x2b2c28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_2b2c2c:
    // 0x2b2c2c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2b2c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b2c30:
    // 0x2b2c30: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
label_2b2c34:
    if (ctx->pc == 0x2B2C34u) {
        ctx->pc = 0x2B2C34u;
            // 0x2b2c34: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2C38u;
        goto label_2b2c38;
    }
    ctx->pc = 0x2B2C30u;
    {
        const bool branch_taken_0x2b2c30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2B2C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2C30u;
            // 0x2b2c34: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c30) {
            ctx->pc = 0x2B2C78u;
            goto label_2b2c78;
        }
    }
    ctx->pc = 0x2B2C38u;
label_2b2c38:
    // 0x2b2c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2c3c:
    // 0x2b2c3c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b2c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b2c40:
    // 0x2b2c40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b2c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b2c44:
    // 0x2b2c44: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x2b2c44u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_2b2c48:
    // 0x2b2c48: 0xc08e7cc  jal         func_239F30
label_2b2c4c:
    if (ctx->pc == 0x2B2C4Cu) {
        ctx->pc = 0x2B2C4Cu;
            // 0x2b2c4c: 0x24a5eca8  addiu       $a1, $a1, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962344));
        ctx->pc = 0x2B2C50u;
        goto label_2b2c50;
    }
    ctx->pc = 0x2B2C48u;
    SET_GPR_U32(ctx, 31, 0x2B2C50u);
    ctx->pc = 0x2B2C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2C48u;
            // 0x2b2c4c: 0x24a5eca8  addiu       $a1, $a1, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2C50u; }
        if (ctx->pc != 0x2B2C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2C50u; }
        if (ctx->pc != 0x2B2C50u) { return; }
    }
    ctx->pc = 0x2B2C50u;
label_2b2c50:
    // 0x2b2c50: 0x8e84021c  lw          $a0, 0x21C($s4)
    ctx->pc = 0x2b2c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b2c54:
    // 0x2b2c54: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2b2c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b2c58:
    // 0x2b2c58: 0xc0aacc4  jal         func_2AB310
label_2b2c5c:
    if (ctx->pc == 0x2B2C5Cu) {
        ctx->pc = 0x2B2C5Cu;
            // 0x2b2c5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2C60u;
        goto label_2b2c60;
    }
    ctx->pc = 0x2B2C58u;
    SET_GPR_U32(ctx, 31, 0x2B2C60u);
    ctx->pc = 0x2B2C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2C58u;
            // 0x2b2c5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2C60u; }
        if (ctx->pc != 0x2B2C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2C60u; }
        if (ctx->pc != 0x2B2C60u) { return; }
    }
    ctx->pc = 0x2B2C60u;
label_2b2c60:
    // 0x2b2c60: 0x83839b9c  lb          $v1, -0x6464($gp)
    ctx->pc = 0x2b2c60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941596)));
label_2b2c64:
    // 0x2b2c64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b2c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b2c68:
    // 0x2b2c68: 0xc0877e0  jal         func_21DF80
label_2b2c6c:
    if (ctx->pc == 0x2B2C6Cu) {
        ctx->pc = 0x2B2C6Cu;
            // 0x2b2c6c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x2B2C70u;
        goto label_2b2c70;
    }
    ctx->pc = 0x2B2C68u;
    SET_GPR_U32(ctx, 31, 0x2B2C70u);
    ctx->pc = 0x2B2C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2C68u;
            // 0x2b2c6c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2C70u; }
        if (ctx->pc != 0x2B2C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2C70u; }
        if (ctx->pc != 0x2B2C70u) { return; }
    }
    ctx->pc = 0x2B2C70u;
label_2b2c70:
    // 0x2b2c70: 0x10000208  b           . + 4 + (0x208 << 2)
label_2b2c74:
    if (ctx->pc == 0x2B2C74u) {
        ctx->pc = 0x2B2C78u;
        goto label_2b2c78;
    }
    ctx->pc = 0x2B2C70u;
    {
        const bool branch_taken_0x2b2c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2c70) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B2C78u;
label_2b2c78:
    // 0x2b2c78: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x2b2c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b2c7c:
    // 0x2b2c7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b2c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2c80:
    // 0x2b2c80: 0xc08ca88  jal         func_232A20
label_2b2c84:
    if (ctx->pc == 0x2B2C84u) {
        ctx->pc = 0x2B2C84u;
            // 0x2b2c84: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2C88u;
        goto label_2b2c88;
    }
    ctx->pc = 0x2B2C80u;
    SET_GPR_U32(ctx, 31, 0x2B2C88u);
    ctx->pc = 0x2B2C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2C80u;
            // 0x2b2c84: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232A20u;
    if (runtime->hasFunction(0x232A20u)) {
        auto targetFn = runtime->lookupFunction(0x232A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2C88u; }
        if (ctx->pc != 0x2B2C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuLoopType__Fv_0x232a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2C88u; }
        if (ctx->pc != 0x2B2C88u) { return; }
    }
    ctx->pc = 0x2B2C88u;
label_2b2c88:
    // 0x2b2c88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b2c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2c8c:
    // 0x2b2c8c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_2b2c90:
    if (ctx->pc == 0x2B2C90u) {
        ctx->pc = 0x2B2C94u;
        goto label_2b2c94;
    }
    ctx->pc = 0x2B2C8Cu;
    {
        const bool branch_taken_0x2b2c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b2c8c) {
            ctx->pc = 0x2B2C98u;
            goto label_2b2c98;
        }
    }
    ctx->pc = 0x2B2C94u;
label_2b2c94:
    // 0x2b2c94: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2b2c94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b2c98:
    // 0x2b2c98: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2b2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2b2c9c:
    // 0x2b2c9c: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x2b2c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
label_2b2ca0:
    // 0x2b2ca0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b2ca4:
    if (ctx->pc == 0x2B2CA4u) {
        ctx->pc = 0x2B2CA4u;
            // 0x2b2ca4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2CA8u;
        goto label_2b2ca8;
    }
    ctx->pc = 0x2B2CA0u;
    {
        const bool branch_taken_0x2b2ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2CA0u;
            // 0x2b2ca4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ca0) {
            ctx->pc = 0x2B2CBCu;
            goto label_2b2cbc;
        }
    }
    ctx->pc = 0x2B2CA8u;
label_2b2ca8:
    // 0x2b2ca8: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x2b2ca8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_2b2cac:
    // 0x2b2cac: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2b2cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2b2cb0:
    // 0x2b2cb0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2b2cb4:
    if (ctx->pc == 0x2B2CB4u) {
        ctx->pc = 0x2B2CB8u;
        goto label_2b2cb8;
    }
    ctx->pc = 0x2B2CB0u;
    {
        const bool branch_taken_0x2b2cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2cb0) {
            ctx->pc = 0x2B2CBCu;
            goto label_2b2cbc;
        }
    }
    ctx->pc = 0x2B2CB8u;
label_2b2cb8:
    // 0x2b2cb8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2b2cb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2cbc:
    // 0x2b2cbc: 0xc064220  jal         func_190880
label_2b2cc0:
    if (ctx->pc == 0x2B2CC0u) {
        ctx->pc = 0x2B2CC4u;
        goto label_2b2cc4;
    }
    ctx->pc = 0x2B2CBCu;
    SET_GPR_U32(ctx, 31, 0x2B2CC4u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2CC4u; }
        if (ctx->pc != 0x2B2CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2CC4u; }
        if (ctx->pc != 0x2B2CC4u) { return; }
    }
    ctx->pc = 0x2B2CC4u;
label_2b2cc4:
    // 0x2b2cc4: 0xc0bda00  jal         func_2F6800
label_2b2cc8:
    if (ctx->pc == 0x2B2CC8u) {
        ctx->pc = 0x2B2CC8u;
            // 0x2b2cc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2CCCu;
        goto label_2b2ccc;
    }
    ctx->pc = 0x2B2CC4u;
    SET_GPR_U32(ctx, 31, 0x2B2CCCu);
    ctx->pc = 0x2B2CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2CC4u;
            // 0x2b2cc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6800u;
    if (runtime->hasFunction(0x2F6800u)) {
        auto targetFn = runtime->lookupFunction(0x2F6800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2CCCu; }
        if (ctx->pc != 0x2B2CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitCtrl__9CSaveDataFv_0x2f6800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2CCCu; }
        if (ctx->pc != 0x2B2CCCu) { return; }
    }
    ctx->pc = 0x2B2CCCu;
label_2b2ccc:
    // 0x2b2ccc: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b2cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b2cd0:
    // 0x2b2cd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b2cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2cd4:
    // 0x2b2cd4: 0xc0670b0  jal         func_19C2C0
label_2b2cd8:
    if (ctx->pc == 0x2B2CD8u) {
        ctx->pc = 0x2B2CD8u;
            // 0x2b2cd8: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x2B2CDCu;
        goto label_2b2cdc;
    }
    ctx->pc = 0x2B2CD4u;
    SET_GPR_U32(ctx, 31, 0x2B2CDCu);
    ctx->pc = 0x2B2CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2CD4u;
            // 0x2b2cd8: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2C0u;
    if (runtime->hasFunction(0x19C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2CDCu; }
        if (ctx->pc != 0x2B2CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaStatusAttirbute__16CUserDataManagerFi_0x19c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2CDCu; }
        if (ctx->pc != 0x2B2CDCu) { return; }
    }
    ctx->pc = 0x2B2CDCu;
label_2b2cdc:
    // 0x2b2cdc: 0xc0683ec  jal         func_1A0FB0
label_2b2ce0:
    if (ctx->pc == 0x2B2CE0u) {
        ctx->pc = 0x2B2CE0u;
            // 0x2b2ce0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2CE4u;
        goto label_2b2ce4;
    }
    ctx->pc = 0x2B2CDCu;
    SET_GPR_U32(ctx, 31, 0x2B2CE4u);
    ctx->pc = 0x2B2CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2CDCu;
            // 0x2b2ce0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FB0u;
    if (runtime->hasFunction(0x1A0FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2CE4u; }
        if (ctx->pc != 0x2B2CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBadStatus__Fi_0x1a0fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2CE4u; }
        if (ctx->pc != 0x2B2CE4u) { return; }
    }
    ctx->pc = 0x2B2CE4u;
label_2b2ce4:
    // 0x2b2ce4: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b2ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b2ce8:
    // 0x2b2ce8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b2ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2cec:
    // 0x2b2cec: 0xc0670b0  jal         func_19C2C0
label_2b2cf0:
    if (ctx->pc == 0x2B2CF0u) {
        ctx->pc = 0x2B2CF0u;
            // 0x2b2cf0: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->pc = 0x2B2CF4u;
        goto label_2b2cf4;
    }
    ctx->pc = 0x2B2CECu;
    SET_GPR_U32(ctx, 31, 0x2B2CF4u);
    ctx->pc = 0x2B2CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2CECu;
            // 0x2b2cf0: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2C0u;
    if (runtime->hasFunction(0x19C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2CF4u; }
        if (ctx->pc != 0x2B2CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaStatusAttirbute__16CUserDataManagerFi_0x19c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2CF4u; }
        if (ctx->pc != 0x2B2CF4u) { return; }
    }
    ctx->pc = 0x2B2CF4u;
label_2b2cf4:
    // 0x2b2cf4: 0xc0683ec  jal         func_1A0FB0
label_2b2cf8:
    if (ctx->pc == 0x2B2CF8u) {
        ctx->pc = 0x2B2CF8u;
            // 0x2b2cf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2CFCu;
        goto label_2b2cfc;
    }
    ctx->pc = 0x2B2CF4u;
    SET_GPR_U32(ctx, 31, 0x2B2CFCu);
    ctx->pc = 0x2B2CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2CF4u;
            // 0x2b2cf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FB0u;
    if (runtime->hasFunction(0x1A0FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2CFCu; }
        if (ctx->pc != 0x2B2CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBadStatus__Fi_0x1a0fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2CFCu; }
        if (ctx->pc != 0x2B2CFCu) { return; }
    }
    ctx->pc = 0x2B2CFCu;
label_2b2cfc:
    // 0x2b2cfc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2b2cfcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2d00:
    // 0x2b2d00: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x2b2d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_2b2d04:
    // 0x2b2d04: 0x8f8294ac  lw          $v0, -0x6B54($gp)
    ctx->pc = 0x2b2d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b2d08:
    // 0x2b2d08: 0xc065b30  jal         func_196CC0
label_2b2d0c:
    if (ctx->pc == 0x2B2D0Cu) {
        ctx->pc = 0x2B2D0Cu;
            // 0x2b2d0c: 0x24443f48  addiu       $a0, $v0, 0x3F48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16200));
        ctx->pc = 0x2B2D10u;
        goto label_2b2d10;
    }
    ctx->pc = 0x2B2D08u;
    SET_GPR_U32(ctx, 31, 0x2B2D10u);
    ctx->pc = 0x2B2D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2D08u;
            // 0x2b2d0c: 0x24443f48  addiu       $a0, $v0, 0x3F48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2D10u; }
        if (ctx->pc != 0x2B2D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2D10u; }
        if (ctx->pc != 0x2B2D10u) { return; }
    }
    ctx->pc = 0x2B2D10u;
label_2b2d10:
    // 0x2b2d10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b2d14:
    // 0x2b2d14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b2d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b2d18:
    // 0x2b2d18: 0x0  nop
    ctx->pc = 0x2b2d18u;
    // NOP
label_2b2d1c:
    // 0x2b2d1c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b2d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b2d20:
    // 0x2b2d20: 0x0  nop
    ctx->pc = 0x2b2d20u;
    // NOP
label_2b2d24:
    // 0x2b2d24: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2b2d28:
    if (ctx->pc == 0x2B2D28u) {
        ctx->pc = 0x2B2D28u;
            // 0x2b2d28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B2D2Cu;
        goto label_2b2d2c;
    }
    ctx->pc = 0x2B2D24u;
    {
        const bool branch_taken_0x2b2d24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B2D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2D24u;
            // 0x2b2d28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2d24) {
            ctx->pc = 0x2B2D30u;
            goto label_2b2d30;
        }
    }
    ctx->pc = 0x2B2D2Cu;
label_2b2d2c:
    // 0x2b2d2c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2b2d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_2b2d30:
    // 0x2b2d30: 0x8f8394ac  lw          $v1, -0x6B54($gp)
    ctx->pc = 0x2b2d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b2d34:
    // 0x2b2d34: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2b2d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_2b2d38:
    // 0x2b2d38: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x2b2d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_2b2d3c:
    // 0x2b2d3c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2b2d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2b2d40:
    // 0x2b2d40: 0x94224d90  lhu         $v0, 0x4D90($at)
    ctx->pc = 0x2b2d40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 19856)));
label_2b2d44:
    // 0x2b2d44: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2b2d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2b2d48:
    // 0x2b2d48: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2b2d4c:
    if (ctx->pc == 0x2B2D4Cu) {
        ctx->pc = 0x2B2D4Cu;
            // 0x2b2d4c: 0x246442d4  addiu       $a0, $v1, 0x42D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 17108));
        ctx->pc = 0x2B2D50u;
        goto label_2b2d50;
    }
    ctx->pc = 0x2B2D48u;
    {
        const bool branch_taken_0x2b2d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2D48u;
            // 0x2b2d4c: 0x246442d4  addiu       $a0, $v1, 0x42D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 17108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2d48) {
            ctx->pc = 0x2B2D7Cu;
            goto label_2b2d7c;
        }
    }
    ctx->pc = 0x2B2D50u;
label_2b2d50:
    // 0x2b2d50: 0xc065b30  jal         func_196CC0
label_2b2d54:
    if (ctx->pc == 0x2B2D54u) {
        ctx->pc = 0x2B2D58u;
        goto label_2b2d58;
    }
    ctx->pc = 0x2B2D50u;
    SET_GPR_U32(ctx, 31, 0x2B2D58u);
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2D58u; }
        if (ctx->pc != 0x2B2D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2D58u; }
        if (ctx->pc != 0x2B2D58u) { return; }
    }
    ctx->pc = 0x2B2D58u;
label_2b2d58:
    // 0x2b2d58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b2d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b2d5c:
    // 0x2b2d5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b2d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b2d60:
    // 0x2b2d60: 0x0  nop
    ctx->pc = 0x2b2d60u;
    // NOP
label_2b2d64:
    // 0x2b2d64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b2d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b2d68:
    // 0x2b2d68: 0x0  nop
    ctx->pc = 0x2b2d68u;
    // NOP
label_2b2d6c:
    // 0x2b2d6c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2b2d70:
    if (ctx->pc == 0x2B2D70u) {
        ctx->pc = 0x2B2D70u;
            // 0x2b2d70: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B2D74u;
        goto label_2b2d74;
    }
    ctx->pc = 0x2B2D6Cu;
    {
        const bool branch_taken_0x2b2d6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B2D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2D6Cu;
            // 0x2b2d70: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2d6c) {
            ctx->pc = 0x2B2D80u;
            goto label_2b2d80;
        }
    }
    ctx->pc = 0x2B2D74u;
label_2b2d74:
    // 0x2b2d74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2d78:
    // 0x2b2d78: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x2b2d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_2b2d7c:
    // 0x2b2d7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b2d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b2d80:
    // 0x2b2d80: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b2d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
label_2b2d84:
    // 0x2b2d84: 0x2442cce0  addiu       $v0, $v0, -0x3320
    ctx->pc = 0x2b2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954208));
label_2b2d88:
    // 0x2b2d88: 0xa6830002  sh          $v1, 0x2($s4)
    ctx->pc = 0x2b2d88u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 3));
label_2b2d8c:
    // 0x2b2d8c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b2d8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2b2d90:
    // 0x2b2d90: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2b2d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2b2d94:
    // 0x2b2d94: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2b2d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2b2d98:
    // 0x2b2d98: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x2b2d98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2b2d9c:
    // 0x2b2d9c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2b2d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_2b2da0:
    // 0x2b2da0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2b2da0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_2b2da4:
    // 0x2b2da4: 0x8e84021c  lw          $a0, 0x21C($s4)
    ctx->pc = 0x2b2da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b2da8:
    // 0x2b2da8: 0xc0aacc4  jal         func_2AB310
label_2b2dac:
    if (ctx->pc == 0x2B2DACu) {
        ctx->pc = 0x2B2DACu;
            // 0x2b2dac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2DB0u;
        goto label_2b2db0;
    }
    ctx->pc = 0x2B2DA8u;
    SET_GPR_U32(ctx, 31, 0x2B2DB0u);
    ctx->pc = 0x2B2DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2DA8u;
            // 0x2b2dac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2DB0u; }
        if (ctx->pc != 0x2B2DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2DB0u; }
        if (ctx->pc != 0x2B2DB0u) { return; }
    }
    ctx->pc = 0x2B2DB0u;
label_2b2db0:
    // 0x2b2db0: 0x83849b9c  lb          $a0, -0x6464($gp)
    ctx->pc = 0x2b2db0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941596)));
label_2b2db4:
    // 0x2b2db4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2b2db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2b2db8:
    // 0x2b2db8: 0x8e83021c  lw          $v1, 0x21C($s4)
    ctx->pc = 0x2b2db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b2dbc:
    // 0x2b2dbc: 0x10650118  beq         $v1, $a1, . + 4 + (0x118 << 2)
label_2b2dc0:
    if (ctx->pc == 0x2B2DC0u) {
        ctx->pc = 0x2B2DC0u;
            // 0x2b2dc0: 0x82a821  addu        $s5, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x2B2DC4u;
        goto label_2b2dc4;
    }
    ctx->pc = 0x2B2DBCu;
    {
        const bool branch_taken_0x2b2dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B2DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2DBCu;
            // 0x2b2dc0: 0x82a821  addu        $s5, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2dbc) {
            ctx->pc = 0x2B3220u;
            goto label_2b3220;
        }
    }
    ctx->pc = 0x2B2DC4u;
label_2b2dc4:
    // 0x2b2dc4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2b2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b2dc8:
    // 0x2b2dc8: 0x10620116  beq         $v1, $v0, . + 4 + (0x116 << 2)
label_2b2dcc:
    if (ctx->pc == 0x2B2DCCu) {
        ctx->pc = 0x2B2DCCu;
            // 0x2b2dcc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B2DD0u;
        goto label_2b2dd0;
    }
    ctx->pc = 0x2B2DC8u;
    {
        const bool branch_taken_0x2b2dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2DC8u;
            // 0x2b2dcc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2dc8) {
            ctx->pc = 0x2B3224u;
            goto label_2b3224;
        }
    }
    ctx->pc = 0x2B2DD0u;
label_2b2dd0:
    // 0x2b2dd0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2b2dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2b2dd4:
    // 0x2b2dd4: 0x10620112  beq         $v1, $v0, . + 4 + (0x112 << 2)
label_2b2dd8:
    if (ctx->pc == 0x2B2DD8u) {
        ctx->pc = 0x2B2DD8u;
            // 0x2b2dd8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x2B2DDCu;
        goto label_2b2ddc;
    }
    ctx->pc = 0x2B2DD4u;
    {
        const bool branch_taken_0x2b2dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2DD4u;
            // 0x2b2dd8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2dd4) {
            ctx->pc = 0x2B3220u;
            goto label_2b3220;
        }
    }
    ctx->pc = 0x2B2DDCu;
label_2b2ddc:
    // 0x2b2ddc: 0x10620110  beq         $v1, $v0, . + 4 + (0x110 << 2)
label_2b2de0:
    if (ctx->pc == 0x2B2DE0u) {
        ctx->pc = 0x2B2DE0u;
            // 0x2b2de0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2B2DE4u;
        goto label_2b2de4;
    }
    ctx->pc = 0x2B2DDCu;
    {
        const bool branch_taken_0x2b2ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2DDCu;
            // 0x2b2de0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ddc) {
            ctx->pc = 0x2B3220u;
            goto label_2b3220;
        }
    }
    ctx->pc = 0x2B2DE4u;
label_2b2de4:
    // 0x2b2de4: 0x1062010e  beq         $v1, $v0, . + 4 + (0x10E << 2)
label_2b2de8:
    if (ctx->pc == 0x2B2DE8u) {
        ctx->pc = 0x2B2DE8u;
            // 0x2b2de8: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x2B2DECu;
        goto label_2b2dec;
    }
    ctx->pc = 0x2B2DE4u;
    {
        const bool branch_taken_0x2b2de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2DE4u;
            // 0x2b2de8: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2de4) {
            ctx->pc = 0x2B3220u;
            goto label_2b3220;
        }
    }
    ctx->pc = 0x2B2DECu;
label_2b2dec:
    // 0x2b2dec: 0x106200e3  beq         $v1, $v0, . + 4 + (0xE3 << 2)
label_2b2df0:
    if (ctx->pc == 0x2B2DF0u) {
        ctx->pc = 0x2B2DF0u;
            // 0x2b2df0: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x2B2DF4u;
        goto label_2b2df4;
    }
    ctx->pc = 0x2B2DECu;
    {
        const bool branch_taken_0x2b2dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2DECu;
            // 0x2b2df0: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2dec) {
            ctx->pc = 0x2B317Cu;
            goto label_2b317c;
        }
    }
    ctx->pc = 0x2B2DF4u;
label_2b2df4:
    // 0x2b2df4: 0x106200b3  beq         $v1, $v0, . + 4 + (0xB3 << 2)
label_2b2df8:
    if (ctx->pc == 0x2B2DF8u) {
        ctx->pc = 0x2B2DF8u;
            // 0x2b2df8: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->pc = 0x2B2DFCu;
        goto label_2b2dfc;
    }
    ctx->pc = 0x2B2DF4u;
    {
        const bool branch_taken_0x2b2df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2DF4u;
            // 0x2b2df8: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2df4) {
            ctx->pc = 0x2B30C4u;
            goto label_2b30c4;
        }
    }
    ctx->pc = 0x2B2DFCu;
label_2b2dfc:
    // 0x2b2dfc: 0x10620085  beq         $v1, $v0, . + 4 + (0x85 << 2)
label_2b2e00:
    if (ctx->pc == 0x2B2E00u) {
        ctx->pc = 0x2B2E00u;
            // 0x2b2e00: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2B2E04u;
        goto label_2b2e04;
    }
    ctx->pc = 0x2B2DFCu;
    {
        const bool branch_taken_0x2b2dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2DFCu;
            // 0x2b2e00: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2dfc) {
            ctx->pc = 0x2B3014u;
            goto label_2b3014;
        }
    }
    ctx->pc = 0x2B2E04u;
label_2b2e04:
    // 0x2b2e04: 0x10620066  beq         $v1, $v0, . + 4 + (0x66 << 2)
label_2b2e08:
    if (ctx->pc == 0x2B2E08u) {
        ctx->pc = 0x2B2E08u;
            // 0x2b2e08: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B2E0Cu;
        goto label_2b2e0c;
    }
    ctx->pc = 0x2B2E04u;
    {
        const bool branch_taken_0x2b2e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2E04u;
            // 0x2b2e08: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e04) {
            ctx->pc = 0x2B2FA0u;
            goto label_2b2fa0;
        }
    }
    ctx->pc = 0x2B2E0Cu;
label_2b2e0c:
    // 0x2b2e0c: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
label_2b2e10:
    if (ctx->pc == 0x2B2E10u) {
        ctx->pc = 0x2B2E10u;
            // 0x2b2e10: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x2B2E14u;
        goto label_2b2e14;
    }
    ctx->pc = 0x2B2E0Cu;
    {
        const bool branch_taken_0x2b2e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2E0Cu;
            // 0x2b2e10: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e0c) {
            ctx->pc = 0x2B2F38u;
            goto label_2b2f38;
        }
    }
    ctx->pc = 0x2B2E14u;
label_2b2e14:
    // 0x2b2e14: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
label_2b2e18:
    if (ctx->pc == 0x2B2E18u) {
        ctx->pc = 0x2B2E18u;
            // 0x2b2e18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B2E1Cu;
        goto label_2b2e1c;
    }
    ctx->pc = 0x2B2E14u;
    {
        const bool branch_taken_0x2b2e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2E14u;
            // 0x2b2e18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e14) {
            ctx->pc = 0x2B2EF4u;
            goto label_2b2ef4;
        }
    }
    ctx->pc = 0x2B2E1Cu;
label_2b2e1c:
    // 0x2b2e1c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2b2e20:
    if (ctx->pc == 0x2B2E20u) {
        ctx->pc = 0x2B2E20u;
            // 0x2b2e20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B2E24u;
        goto label_2b2e24;
    }
    ctx->pc = 0x2B2E1Cu;
    {
        const bool branch_taken_0x2b2e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2E1Cu;
            // 0x2b2e20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e1c) {
            ctx->pc = 0x2B2E2Cu;
            goto label_2b2e2c;
        }
    }
    ctx->pc = 0x2B2E24u;
label_2b2e24:
    // 0x2b2e24: 0x1000014a  b           . + 4 + (0x14A << 2)
label_2b2e28:
    if (ctx->pc == 0x2B2E28u) {
        ctx->pc = 0x2B2E2Cu;
        goto label_2b2e2c;
    }
    ctx->pc = 0x2B2E24u;
    {
        const bool branch_taken_0x2b2e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2e24) {
            ctx->pc = 0x2B3350u;
            goto label_2b3350;
        }
    }
    ctx->pc = 0x2B2E2Cu;
label_2b2e2c:
    // 0x2b2e2c: 0x1482001d  bne         $a0, $v0, . + 4 + (0x1D << 2)
label_2b2e30:
    if (ctx->pc == 0x2B2E30u) {
        ctx->pc = 0x2B2E34u;
        goto label_2b2e34;
    }
    ctx->pc = 0x2B2E2Cu;
    {
        const bool branch_taken_0x2b2e2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b2e2c) {
            ctx->pc = 0x2B2EA4u;
            goto label_2b2ea4;
        }
    }
    ctx->pc = 0x2B2E34u;
label_2b2e34:
    // 0x2b2e34: 0x8f8294ac  lw          $v0, -0x6B54($gp)
    ctx->pc = 0x2b2e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b2e38:
    // 0x2b2e38: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b2e38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b2e3c:
    // 0x2b2e3c: 0xc066a0c  jal         func_19A830
label_2b2e40:
    if (ctx->pc == 0x2B2E40u) {
        ctx->pc = 0x2B2E40u;
            // 0x2b2e40: 0x24444660  addiu       $a0, $v0, 0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18016));
        ctx->pc = 0x2B2E44u;
        goto label_2b2e44;
    }
    ctx->pc = 0x2B2E3Cu;
    SET_GPR_U32(ctx, 31, 0x2B2E44u);
    ctx->pc = 0x2B2E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2E3Cu;
            // 0x2b2e40: 0x24444660  addiu       $a0, $v0, 0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A830u;
    if (runtime->hasFunction(0x19A830u)) {
        auto targetFn = runtime->lookupFunction(0x19A830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2E44u; }
        if (ctx->pc != 0x2B2E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__9ROBO_DATAFf_0x19a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2E44u; }
        if (ctx->pc != 0x2B2E44u) { return; }
    }
    ctx->pc = 0x2B2E44u;
label_2b2e44:
    // 0x2b2e44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b2e48:
    // 0x2b2e48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b2e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b2e4c:
    // 0x2b2e4c: 0x0  nop
    ctx->pc = 0x2b2e4cu;
    // NOP
label_2b2e50:
    // 0x2b2e50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b2e50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b2e54:
    // 0x2b2e54: 0x0  nop
    ctx->pc = 0x2b2e54u;
    // NOP
label_2b2e58:
    // 0x2b2e58: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2b2e5c:
    if (ctx->pc == 0x2B2E5Cu) {
        ctx->pc = 0x2B2E5Cu;
            // 0x2b2e5c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B2E60u;
        goto label_2b2e60;
    }
    ctx->pc = 0x2B2E58u;
    {
        const bool branch_taken_0x2b2e58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B2E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2E58u;
            // 0x2b2e5c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e58) {
            ctx->pc = 0x2B2E78u;
            goto label_2b2e78;
        }
    }
    ctx->pc = 0x2B2E60u;
label_2b2e60:
    // 0x2b2e60: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2b2e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b2e64:
    // 0x2b2e64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b2e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2e68:
    // 0x2b2e68: 0xc0aacc4  jal         func_2AB310
label_2b2e6c:
    if (ctx->pc == 0x2B2E6Cu) {
        ctx->pc = 0x2B2E6Cu;
            // 0x2b2e6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E70u;
        goto label_2b2e70;
    }
    ctx->pc = 0x2B2E68u;
    SET_GPR_U32(ctx, 31, 0x2B2E70u);
    ctx->pc = 0x2B2E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2E68u;
            // 0x2b2e6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2E70u; }
        if (ctx->pc != 0x2B2E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2E70u; }
        if (ctx->pc != 0x2B2E70u) { return; }
    }
    ctx->pc = 0x2B2E70u;
label_2b2e70:
    // 0x2b2e70: 0x10000137  b           . + 4 + (0x137 << 2)
label_2b2e74:
    if (ctx->pc == 0x2B2E74u) {
        ctx->pc = 0x2B2E74u;
            // 0x2b2e74: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E78u;
        goto label_2b2e78;
    }
    ctx->pc = 0x2B2E70u;
    {
        const bool branch_taken_0x2b2e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2E70u;
            // 0x2b2e74: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e70) {
            ctx->pc = 0x2B3350u;
            goto label_2b3350;
        }
    }
    ctx->pc = 0x2B2E78u;
label_2b2e78:
    // 0x2b2e78: 0x8f8394ac  lw          $v1, -0x6B54($gp)
    ctx->pc = 0x2b2e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b2e7c:
    // 0x2b2e7c: 0x3c024479  lui         $v0, 0x4479
    ctx->pc = 0x2b2e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17529 << 16));
label_2b2e80:
    // 0x2b2e80: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x2b2e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_2b2e84:
    // 0x2b2e84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b2e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b2e88:
    // 0x2b2e88: 0xc066a0c  jal         func_19A830
label_2b2e8c:
    if (ctx->pc == 0x2B2E8Cu) {
        ctx->pc = 0x2B2E8Cu;
            // 0x2b2e8c: 0x24644660  addiu       $a0, $v1, 0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 18016));
        ctx->pc = 0x2B2E90u;
        goto label_2b2e90;
    }
    ctx->pc = 0x2B2E88u;
    SET_GPR_U32(ctx, 31, 0x2B2E90u);
    ctx->pc = 0x2B2E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2E88u;
            // 0x2b2e8c: 0x24644660  addiu       $a0, $v1, 0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 18016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A830u;
    if (runtime->hasFunction(0x19A830u)) {
        auto targetFn = runtime->lookupFunction(0x19A830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2E90u; }
        if (ctx->pc != 0x2B2E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__9ROBO_DATAFf_0x19a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2E90u; }
        if (ctx->pc != 0x2B2E90u) { return; }
    }
    ctx->pc = 0x2B2E90u;
label_2b2e90:
    // 0x2b2e90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b2e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b2e94:
    // 0x2b2e94: 0xc0ad178  jal         func_2B45E0
label_2b2e98:
    if (ctx->pc == 0x2B2E98u) {
        ctx->pc = 0x2B2E98u;
            // 0x2b2e98: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2B2E9Cu;
        goto label_2b2e9c;
    }
    ctx->pc = 0x2B2E94u;
    SET_GPR_U32(ctx, 31, 0x2B2E9Cu);
    ctx->pc = 0x2B2E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2E94u;
            // 0x2b2e98: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B45E0u;
    if (runtime->hasFunction(0x2B45E0u)) {
        auto targetFn = runtime->lookupFunction(0x2B45E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2E9Cu; }
        if (ctx->pc != 0x2B2E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdataLife__15CMenuChrCngMenuFv_0x2b45e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2E9Cu; }
        if (ctx->pc != 0x2B2E9Cu) { return; }
    }
    ctx->pc = 0x2B2E9Cu;
label_2b2e9c:
    // 0x2b2e9c: 0x1000012c  b           . + 4 + (0x12C << 2)
label_2b2ea0:
    if (ctx->pc == 0x2B2EA0u) {
        ctx->pc = 0x2B2EA0u;
            // 0x2b2ea0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B2EA4u;
        goto label_2b2ea4;
    }
    ctx->pc = 0x2B2E9Cu;
    {
        const bool branch_taken_0x2b2e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2E9Cu;
            // 0x2b2ea0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e9c) {
            ctx->pc = 0x2B3350u;
            goto label_2b3350;
        }
    }
    ctx->pc = 0x2B2EA4u;
label_2b2ea4:
    // 0x2b2ea4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2b2ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2b2ea8:
    // 0x2b2ea8: 0xc06609c  jal         func_198270
label_2b2eac:
    if (ctx->pc == 0x2B2EACu) {
        ctx->pc = 0x2B2EACu;
            // 0x2b2eac: 0x240503e7  addiu       $a1, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->pc = 0x2B2EB0u;
        goto label_2b2eb0;
    }
    ctx->pc = 0x2B2EA8u;
    SET_GPR_U32(ctx, 31, 0x2B2EB0u);
    ctx->pc = 0x2B2EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2EA8u;
            // 0x2b2eac: 0x240503e7  addiu       $a1, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198270u;
    if (runtime->hasFunction(0x198270u)) {
        auto targetFn = runtime->lookupFunction(0x198270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2EB0u; }
        if (ctx->pc != 0x2B2EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Repair__13CGameDataUsedFi_0x198270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2EB0u; }
        if (ctx->pc != 0x2B2EB0u) { return; }
    }
    ctx->pc = 0x2B2EB0u;
label_2b2eb0:
    // 0x2b2eb0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2b2eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_2b2eb4:
    // 0x2b2eb4: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x2b2eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2b2eb8:
    // 0x2b2eb8: 0x8e860138  lw          $a2, 0x138($s4)
    ctx->pc = 0x2b2eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_2b2ebc:
    // 0x2b2ebc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b2ebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2ec0:
    // 0x2b2ec0: 0xc08b09c  jal         func_22C270
label_2b2ec4:
    if (ctx->pc == 0x2B2EC4u) {
        ctx->pc = 0x2B2EC4u;
            // 0x2b2ec4: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2B2EC8u;
        goto label_2b2ec8;
    }
    ctx->pc = 0x2B2EC0u;
    SET_GPR_U32(ctx, 31, 0x2B2EC8u);
    ctx->pc = 0x2B2EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2EC0u;
            // 0x2b2ec4: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C270u;
    if (runtime->hasFunction(0x22C270u)) {
        auto targetFn = runtime->lookupFunction(0x22C270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2EC8u; }
        if (ctx->pc != 0x2B2EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemBrdKoma__18CMenuPosDataManageFPiii_0x22c270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2EC8u; }
        if (ctx->pc != 0x2B2EC8u) { return; }
    }
    ctx->pc = 0x2B2EC8u;
label_2b2ec8:
    // 0x2b2ec8: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x2b2ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_2b2ecc:
    // 0x2b2ecc: 0x8fa601c4  lw          $a2, 0x1C4($sp)
    ctx->pc = 0x2b2eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_2b2ed0:
    // 0x2b2ed0: 0xc08b794  jal         func_22DE50
label_2b2ed4:
    if (ctx->pc == 0x2B2ED4u) {
        ctx->pc = 0x2B2ED4u;
            // 0x2b2ed4: 0x8f849584  lw          $a0, -0x6A7C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940036)));
        ctx->pc = 0x2B2ED8u;
        goto label_2b2ed8;
    }
    ctx->pc = 0x2B2ED0u;
    SET_GPR_U32(ctx, 31, 0x2B2ED8u);
    ctx->pc = 0x2B2ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2ED0u;
            // 0x2b2ed4: 0x8f849584  lw          $a0, -0x6A7C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940036)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DE50u;
    if (runtime->hasFunction(0x22DE50u)) {
        auto targetFn = runtime->lookupFunction(0x22DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2ED8u; }
        if (ctx->pc != 0x2B2ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Generate__14CRepairManagerFii_0x22de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2ED8u; }
        if (ctx->pc != 0x2B2ED8u) { return; }
    }
    ctx->pc = 0x2B2ED8u;
label_2b2ed8:
    // 0x2b2ed8: 0xc0ad178  jal         func_2B45E0
label_2b2edc:
    if (ctx->pc == 0x2B2EDCu) {
        ctx->pc = 0x2B2EDCu;
            // 0x2b2edc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2EE0u;
        goto label_2b2ee0;
    }
    ctx->pc = 0x2B2ED8u;
    SET_GPR_U32(ctx, 31, 0x2B2EE0u);
    ctx->pc = 0x2B2EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2ED8u;
            // 0x2b2edc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B45E0u;
    if (runtime->hasFunction(0x2B45E0u)) {
        auto targetFn = runtime->lookupFunction(0x2B45E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2EE0u; }
        if (ctx->pc != 0x2B2EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdataLife__15CMenuChrCngMenuFv_0x2b45e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2EE0u; }
        if (ctx->pc != 0x2B2EE0u) { return; }
    }
    ctx->pc = 0x2B2EE0u;
label_2b2ee0:
    // 0x2b2ee0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2b2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b2ee4:
    // 0x2b2ee4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b2ee4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2ee8:
    // 0x2b2ee8: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x2b2ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_2b2eec:
    // 0x2b2eec: 0x10000118  b           . + 4 + (0x118 << 2)
label_2b2ef0:
    if (ctx->pc == 0x2B2EF0u) {
        ctx->pc = 0x2B2EF0u;
            // 0x2b2ef0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2EF4u;
        goto label_2b2ef4;
    }
    ctx->pc = 0x2B2EECu;
    {
        const bool branch_taken_0x2b2eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2EECu;
            // 0x2b2ef0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2eec) {
            ctx->pc = 0x2B3350u;
            goto label_2b3350;
        }
    }
    ctx->pc = 0x2B2EF4u;
label_2b2ef4:
    // 0x2b2ef4: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
label_2b2ef8:
    if (ctx->pc == 0x2B2EF8u) {
        ctx->pc = 0x2B2EF8u;
            // 0x2b2ef8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2EFCu;
        goto label_2b2efc;
    }
    ctx->pc = 0x2B2EF4u;
    {
        const bool branch_taken_0x2b2ef4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2EF4u;
            // 0x2b2ef8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ef4) {
            ctx->pc = 0x2B2F20u;
            goto label_2b2f20;
        }
    }
    ctx->pc = 0x2B2EFCu;
label_2b2efc:
    // 0x2b2efc: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x2b2efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_2b2f00:
    // 0x2b2f00: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2b2f04:
    if (ctx->pc == 0x2B2F04u) {
        ctx->pc = 0x2B2F04u;
            // 0x2b2f04: 0x3c0243af  lui         $v0, 0x43AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
        ctx->pc = 0x2B2F08u;
        goto label_2b2f08;
    }
    ctx->pc = 0x2B2F00u;
    {
        const bool branch_taken_0x2b2f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F00u;
            // 0x2b2f04: 0x3c0243af  lui         $v0, 0x43AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f00) {
            ctx->pc = 0x2B2F20u;
            goto label_2b2f20;
        }
    }
    ctx->pc = 0x2B2F08u;
label_2b2f08:
    // 0x2b2f08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b2f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b2f0c:
    // 0x2b2f0c: 0xc077504  jal         func_1DD410
label_2b2f10:
    if (ctx->pc == 0x2B2F10u) {
        ctx->pc = 0x2B2F14u;
        goto label_2b2f14;
    }
    ctx->pc = 0x2B2F0Cu;
    SET_GPR_U32(ctx, 31, 0x2B2F14u);
    ctx->pc = 0x1DD410u;
    if (runtime->hasFunction(0x1DD410u)) {
        auto targetFn = runtime->lookupFunction(0x1DD410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2F14u; }
        if (ctx->pc != 0x2B2F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNearAreaPiyori__11CMonsterManFf_0x1dd410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2F14u; }
        if (ctx->pc != 0x2B2F14u) { return; }
    }
    ctx->pc = 0x2B2F14u;
label_2b2f14:
    // 0x2b2f14: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x2b2f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b2f18:
    // 0x2b2f18: 0x1000010d  b           . + 4 + (0x10D << 2)
label_2b2f1c:
    if (ctx->pc == 0x2B2F1Cu) {
        ctx->pc = 0x2B2F1Cu;
            // 0x2b2f1c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B2F20u;
        goto label_2b2f20;
    }
    ctx->pc = 0x2B2F18u;
    {
        const bool branch_taken_0x2b2f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F18u;
            // 0x2b2f1c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f18) {
            ctx->pc = 0x2B3350u;
            goto label_2b3350;
        }
    }
    ctx->pc = 0x2B2F20u;
label_2b2f20:
    // 0x2b2f20: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x2b2f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2b2f24:
    // 0x2b2f24: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2b2f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b2f28:
    // 0x2b2f28: 0xc0aacc4  jal         func_2AB310
label_2b2f2c:
    if (ctx->pc == 0x2B2F2Cu) {
        ctx->pc = 0x2B2F2Cu;
            // 0x2b2f2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F30u;
        goto label_2b2f30;
    }
    ctx->pc = 0x2B2F28u;
    SET_GPR_U32(ctx, 31, 0x2B2F30u);
    ctx->pc = 0x2B2F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F28u;
            // 0x2b2f2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2F30u; }
        if (ctx->pc != 0x2B2F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2F30u; }
        if (ctx->pc != 0x2B2F30u) { return; }
    }
    ctx->pc = 0x2B2F30u;
label_2b2f30:
    // 0x2b2f30: 0x10000107  b           . + 4 + (0x107 << 2)
label_2b2f34:
    if (ctx->pc == 0x2B2F34u) {
        ctx->pc = 0x2B2F34u;
            // 0x2b2f34: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F38u;
        goto label_2b2f38;
    }
    ctx->pc = 0x2B2F30u;
    {
        const bool branch_taken_0x2b2f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F30u;
            // 0x2b2f34: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f30) {
            ctx->pc = 0x2B3350u;
            goto label_2b3350;
        }
    }
    ctx->pc = 0x2B2F38u;
label_2b2f38:
    // 0x2b2f38: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_2b2f3c:
    if (ctx->pc == 0x2B2F3Cu) {
        ctx->pc = 0x2B2F3Cu;
            // 0x2b2f3c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F40u;
        goto label_2b2f40;
    }
    ctx->pc = 0x2B2F38u;
    {
        const bool branch_taken_0x2b2f38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F38u;
            // 0x2b2f3c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f38) {
            ctx->pc = 0x2B2F78u;
            goto label_2b2f78;
        }
    }
    ctx->pc = 0x2B2F40u;
label_2b2f40:
    // 0x2b2f40: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2b2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_2b2f44:
    // 0x2b2f44: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b2f44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2f48:
    // 0x2b2f48: 0x8f8394a4  lw          $v1, -0x6B5C($gp)
    ctx->pc = 0x2b2f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2b2f4c:
    // 0x2b2f4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b2f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b2f50:
    // 0x2b2f50: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2b2f54:
    if (ctx->pc == 0x2B2F54u) {
        ctx->pc = 0x2B2F54u;
            // 0x2b2f54: 0x24632f90  addiu       $v1, $v1, 0x2F90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12176));
        ctx->pc = 0x2B2F58u;
        goto label_2b2f58;
    }
    ctx->pc = 0x2B2F50u;
    {
        const bool branch_taken_0x2b2f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F50u;
            // 0x2b2f54: 0x24632f90  addiu       $v1, $v1, 0x2F90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f50) {
            ctx->pc = 0x2B2F5Cu;
            goto label_2b2f5c;
        }
    }
    ctx->pc = 0x2B2F58u;
label_2b2f58:
    // 0x2b2f58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b2f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2f5c:
    // 0x2b2f5c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2b2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2b2f60:
    // 0x2b2f60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b2f64:
    if (ctx->pc == 0x2B2F64u) {
        ctx->pc = 0x2B2F68u;
        goto label_2b2f68;
    }
    ctx->pc = 0x2B2F60u;
    {
        const bool branch_taken_0x2b2f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2f60) {
            ctx->pc = 0x2B2F78u;
            goto label_2b2f78;
        }
    }
    ctx->pc = 0x2B2F68u;
label_2b2f68:
    // 0x2b2f68: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x2b2f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_2b2f6c:
    // 0x2b2f6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2b2f70:
    if (ctx->pc == 0x2B2F70u) {
        ctx->pc = 0x2B2F74u;
        goto label_2b2f74;
    }
    ctx->pc = 0x2B2F6Cu;
    {
        const bool branch_taken_0x2b2f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2f6c) {
            ctx->pc = 0x2B2F78u;
            goto label_2b2f78;
        }
    }
    ctx->pc = 0x2B2F74u;
label_2b2f74:
    // 0x2b2f74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b2f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2f78:
    // 0x2b2f78: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2b2f7c:
    if (ctx->pc == 0x2B2F7Cu) {
        ctx->pc = 0x2B2F7Cu;
            // 0x2b2f7c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B2F80u;
        goto label_2b2f80;
    }
    ctx->pc = 0x2B2F78u;
    {
        const bool branch_taken_0x2b2f78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F78u;
            // 0x2b2f7c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f78) {
            ctx->pc = 0x2B2F8Cu;
            goto label_2b2f8c;
        }
    }
    ctx->pc = 0x2B2F80u;
label_2b2f80:
    // 0x2b2f80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2f84:
    // 0x2b2f84: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_2b2f88:
    if (ctx->pc == 0x2B2F88u) {
        ctx->pc = 0x2B2F88u;
            // 0x2b2f88: 0xa282012c  sb          $v0, 0x12C($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 300), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B2F8Cu;
        goto label_2b2f8c;
    }
    ctx->pc = 0x2B2F84u;
    {
        const bool branch_taken_0x2b2f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F84u;
            // 0x2b2f88: 0xa282012c  sb          $v0, 0x12C($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 300), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f84) {
            ctx->pc = 0x2B3350u;
            goto label_2b3350;
        }
    }
    ctx->pc = 0x2B2F8Cu;
label_2b2f8c:
    // 0x2b2f8c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2b2f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b2f90:
    // 0x2b2f90: 0xc0aacc4  jal         func_2AB310
label_2b2f94:
    if (ctx->pc == 0x2B2F94u) {
        ctx->pc = 0x2B2F94u;
            // 0x2b2f94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F98u;
        goto label_2b2f98;
    }
    ctx->pc = 0x2B2F90u;
    SET_GPR_U32(ctx, 31, 0x2B2F98u);
    ctx->pc = 0x2B2F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F90u;
            // 0x2b2f94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2F98u; }
        if (ctx->pc != 0x2B2F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2F98u; }
        if (ctx->pc != 0x2B2F98u) { return; }
    }
    ctx->pc = 0x2B2F98u;
label_2b2f98:
    // 0x2b2f98: 0x100000ed  b           . + 4 + (0xED << 2)
label_2b2f9c:
    if (ctx->pc == 0x2B2F9Cu) {
        ctx->pc = 0x2B2F9Cu;
            // 0x2b2f9c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2FA0u;
        goto label_2b2fa0;
    }
    ctx->pc = 0x2B2F98u;
    {
        const bool branch_taken_0x2b2f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F98u;
            // 0x2b2f9c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f98) {
            ctx->pc = 0x2B3350u;
            goto label_2b3350;
        }
    }
    ctx->pc = 0x2B2FA0u;
label_2b2fa0:
    // 0x2b2fa0: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
label_2b2fa4:
    if (ctx->pc == 0x2B2FA4u) {
        ctx->pc = 0x2B2FA8u;
        goto label_2b2fa8;
    }
    ctx->pc = 0x2B2FA0u;
    {
        const bool branch_taken_0x2b2fa0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2fa0) {
            ctx->pc = 0x2B2FF8u;
            goto label_2b2ff8;
        }
    }
    ctx->pc = 0x2B2FA8u;
label_2b2fa8:
    // 0x2b2fa8: 0x16c00013  bnez        $s6, . + 4 + (0x13 << 2)
label_2b2fac:
    if (ctx->pc == 0x2B2FACu) {
        ctx->pc = 0x2B2FB0u;
        goto label_2b2fb0;
    }
    ctx->pc = 0x2B2FA8u;
    {
        const bool branch_taken_0x2b2fa8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2fa8) {
            ctx->pc = 0x2B2FF8u;
            goto label_2b2ff8;
        }
    }
    ctx->pc = 0x2B2FB0u;
label_2b2fb0:
    // 0x2b2fb0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2b2fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2b2fb4:
    // 0x2b2fb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b2fb8:
    if (ctx->pc == 0x2B2FB8u) {
        ctx->pc = 0x2B2FBCu;
        goto label_2b2fbc;
    }
    ctx->pc = 0x2B2FB4u;
    {
        const bool branch_taken_0x2b2fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2fb4) {
            ctx->pc = 0x2B2FC4u;
            goto label_2b2fc4;
        }
    }
    ctx->pc = 0x2B2FBCu;
label_2b2fbc:
    // 0x2b2fbc: 0x13c0000e  beqz        $fp, . + 4 + (0xE << 2)
label_2b2fc0:
    if (ctx->pc == 0x2B2FC0u) {
        ctx->pc = 0x2B2FC4u;
        goto label_2b2fc4;
    }
    ctx->pc = 0x2B2FBCu;
    {
        const bool branch_taken_0x2b2fbc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2fbc) {
            ctx->pc = 0x2B2FF8u;
            goto label_2b2ff8;
        }
    }
    ctx->pc = 0x2B2FC4u;
label_2b2fc4:
    // 0x2b2fc4: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b2fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b2fc8:
    // 0x2b2fc8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b2fc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2fcc:
    // 0x2b2fcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b2fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2fd0:
    // 0x2b2fd0: 0x2406006f  addiu       $a2, $zero, 0x6F
    ctx->pc = 0x2b2fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_2b2fd4:
    // 0x2b2fd4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b2fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b2fd8:
    // 0x2b2fd8: 0x24100056  addiu       $s0, $zero, 0x56
    ctx->pc = 0x2b2fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_2b2fdc:
    // 0x2b2fdc: 0xc067030  jal         func_19C0C0
label_2b2fe0:
    if (ctx->pc == 0x2B2FE0u) {
        ctx->pc = 0x2B2FE0u;
            // 0x2b2fe0: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2FE4u;
        goto label_2b2fe4;
    }
    ctx->pc = 0x2B2FDCu;
    SET_GPR_U32(ctx, 31, 0x2B2FE4u);
    ctx->pc = 0x2B2FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2FDCu;
            // 0x2b2fe0: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C0C0u;
    if (runtime->hasFunction(0x19C0C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2FE4u; }
        if (ctx->pc != 0x2B2FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaStatusAttirbute__16CUserDataManagerFiUii_0x19c0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2FE4u; }
        if (ctx->pc != 0x2B2FE4u) { return; }
    }
    ctx->pc = 0x2B2FE4u;
label_2b2fe4:
    // 0x2b2fe4: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b2fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b2fe8:
    // 0x2b2fe8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b2fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b2fec:
    // 0x2b2fec: 0x2406006f  addiu       $a2, $zero, 0x6F
    ctx->pc = 0x2b2fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_2b2ff0:
    // 0x2b2ff0: 0xc067030  jal         func_19C0C0
label_2b2ff4:
    if (ctx->pc == 0x2B2FF4u) {
        ctx->pc = 0x2B2FF4u;
            // 0x2b2ff4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B2FF8u;
        goto label_2b2ff8;
    }
    ctx->pc = 0x2B2FF0u;
    SET_GPR_U32(ctx, 31, 0x2B2FF8u);
    ctx->pc = 0x2B2FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2FF0u;
            // 0x2b2ff4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C0C0u;
    if (runtime->hasFunction(0x19C0C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2FF8u; }
        if (ctx->pc != 0x2B2FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaStatusAttirbute__16CUserDataManagerFiUii_0x19c0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2FF8u; }
        if (ctx->pc != 0x2B2FF8u) { return; }
    }
    ctx->pc = 0x2B2FF8u;
label_2b2ff8:
    // 0x2b2ff8: 0x162000d5  bnez        $s1, . + 4 + (0xD5 << 2)
label_2b2ffc:
    if (ctx->pc == 0x2B2FFCu) {
        ctx->pc = 0x2B2FFCu;
            // 0x2b2ffc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2B3000u;
        goto label_2b3000;
    }
    ctx->pc = 0x2B2FF8u;
    {
        const bool branch_taken_0x2b2ff8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2FF8u;
            // 0x2b2ffc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ff8) {
            ctx->pc = 0x2B3350u;
            goto label_2b3350;
        }
    }
    ctx->pc = 0x2B3000u;
label_2b3000:
    // 0x2b3000: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2b3000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b3004:
    // 0x2b3004: 0xc0aacc4  jal         func_2AB310
label_2b3008:
    if (ctx->pc == 0x2B3008u) {
        ctx->pc = 0x2B3008u;
            // 0x2b3008: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B300Cu;
        goto label_2b300c;
    }
    ctx->pc = 0x2B3004u;
    SET_GPR_U32(ctx, 31, 0x2B300Cu);
    ctx->pc = 0x2B3008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3004u;
            // 0x2b3008: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B300Cu; }
        if (ctx->pc != 0x2B300Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B300Cu; }
        if (ctx->pc != 0x2B300Cu) { return; }
    }
    ctx->pc = 0x2B300Cu;
label_2b300c:
    // 0x2b300c: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_2b3010:
    if (ctx->pc == 0x2B3010u) {
        ctx->pc = 0x2B3010u;
            // 0x2b3010: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3014u;
        goto label_2b3014;
    }
    ctx->pc = 0x2B300Cu;
    {
        const bool branch_taken_0x2b300c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B300Cu;
            // 0x2b3010: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b300c) {
            ctx->pc = 0x2B3350u;
            goto label_2b3350;
        }
    }
    ctx->pc = 0x2B3014u;
label_2b3014:
    // 0x2b3014: 0x12600024  beqz        $s3, . + 4 + (0x24 << 2)
label_2b3018:
    if (ctx->pc == 0x2B3018u) {
        ctx->pc = 0x2B301Cu;
        goto label_2b301c;
    }
    ctx->pc = 0x2B3014u;
    {
        const bool branch_taken_0x2b3014 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3014) {
            ctx->pc = 0x2B30A8u;
            goto label_2b30a8;
        }
    }
    ctx->pc = 0x2B301Cu;
label_2b301c:
    // 0x2b301c: 0x16c00022  bnez        $s6, . + 4 + (0x22 << 2)
label_2b3020:
    if (ctx->pc == 0x2B3020u) {
        ctx->pc = 0x2B3024u;
        goto label_2b3024;
    }
    ctx->pc = 0x2B301Cu;
    {
        const bool branch_taken_0x2b301c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b301c) {
            ctx->pc = 0x2B30A8u;
            goto label_2b30a8;
        }
    }
    ctx->pc = 0x2B3024u;
label_2b3024:
    // 0x2b3024: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2b3024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2b3028:
    // 0x2b3028: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2b302c:
    if (ctx->pc == 0x2B302Cu) {
        ctx->pc = 0x2B3030u;
        goto label_2b3030;
    }
    ctx->pc = 0x2B3028u;
    {
        const bool branch_taken_0x2b3028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3028) {
            ctx->pc = 0x2B3050u;
            goto label_2b3050;
        }
    }
    ctx->pc = 0x2B3030u;
label_2b3030:
    // 0x2b3030: 0x17c00007  bnez        $fp, . + 4 + (0x7 << 2)
label_2b3034:
    if (ctx->pc == 0x2B3034u) {
        ctx->pc = 0x2B3038u;
        goto label_2b3038;
    }
    ctx->pc = 0x2B3030u;
    {
        const bool branch_taken_0x2b3030 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3030) {
            ctx->pc = 0x2B3050u;
            goto label_2b3050;
        }
    }
    ctx->pc = 0x2B3038u;
label_2b3038:
    // 0x2b3038: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b3038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b303c:
    // 0x2b303c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b3040:
    if (ctx->pc == 0x2B3040u) {
        ctx->pc = 0x2B3044u;
        goto label_2b3044;
    }
    ctx->pc = 0x2B303Cu;
    {
        const bool branch_taken_0x2b303c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b303c) {
            ctx->pc = 0x2B3050u;
            goto label_2b3050;
        }
    }
    ctx->pc = 0x2B3044u;
label_2b3044:
    // 0x2b3044: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2b3044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2b3048:
    // 0x2b3048: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2b304c:
    if (ctx->pc == 0x2B304Cu) {
        ctx->pc = 0x2B3050u;
        goto label_2b3050;
    }
    ctx->pc = 0x2B3048u;
    {
        const bool branch_taken_0x2b3048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3048) {
            ctx->pc = 0x2B30A8u;
            goto label_2b30a8;
        }
    }
    ctx->pc = 0x2B3050u;
label_2b3050:
    // 0x2b3050: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b3050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b3054:
    // 0x2b3054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b3054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3058:
    // 0x2b3058: 0x240603e7  addiu       $a2, $zero, 0x3E7
    ctx->pc = 0x2b3058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_2b305c:
    // 0x2b305c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b305cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3060:
    // 0x2b3060: 0xc066d44  jal         func_19B510
label_2b3064:
    if (ctx->pc == 0x2B3064u) {
        ctx->pc = 0x2B3064u;
            // 0x2b3064: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2B3068u;
        goto label_2b3068;
    }
    ctx->pc = 0x2B3060u;
    SET_GPR_U32(ctx, 31, 0x2B3068u);
    ctx->pc = 0x2B3064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3060u;
            // 0x2b3064: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B510u;
    if (runtime->hasFunction(0x19B510u)) {
        auto targetFn = runtime->lookupFunction(0x19B510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3068u; }
        if (ctx->pc != 0x2B3068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHp__16CUserDataManagerFii_0x19b510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3068u; }
        if (ctx->pc != 0x2B3068u) { return; }
    }
    ctx->pc = 0x2B3068u;
label_2b3068:
    // 0x2b3068: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b3068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b306c:
    // 0x2b306c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b306cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b3070:
    // 0x2b3070: 0xc066d44  jal         func_19B510
label_2b3074:
    if (ctx->pc == 0x2B3074u) {
        ctx->pc = 0x2B3074u;
            // 0x2b3074: 0x240603e7  addiu       $a2, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->pc = 0x2B3078u;
        goto label_2b3078;
    }
    ctx->pc = 0x2B3070u;
    SET_GPR_U32(ctx, 31, 0x2B3078u);
    ctx->pc = 0x2B3074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3070u;
            // 0x2b3074: 0x240603e7  addiu       $a2, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B510u;
    if (runtime->hasFunction(0x19B510u)) {
        auto targetFn = runtime->lookupFunction(0x19B510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3078u; }
        if (ctx->pc != 0x2B3078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHp__16CUserDataManagerFii_0x19b510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3078u; }
        if (ctx->pc != 0x2B3078u) { return; }
    }
    ctx->pc = 0x2B3078u;
label_2b3078:
    // 0x2b3078: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b3078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b307c:
    // 0x2b307c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b307cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3080:
    // 0x2b3080: 0x2406006f  addiu       $a2, $zero, 0x6F
    ctx->pc = 0x2b3080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_2b3084:
    // 0x2b3084: 0xc067030  jal         func_19C0C0
label_2b3088:
    if (ctx->pc == 0x2B3088u) {
        ctx->pc = 0x2B3088u;
            // 0x2b3088: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B308Cu;
        goto label_2b308c;
    }
    ctx->pc = 0x2B3084u;
    SET_GPR_U32(ctx, 31, 0x2B308Cu);
    ctx->pc = 0x2B3088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3084u;
            // 0x2b3088: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C0C0u;
    if (runtime->hasFunction(0x19C0C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B308Cu; }
        if (ctx->pc != 0x2B308Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaStatusAttirbute__16CUserDataManagerFiUii_0x19c0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B308Cu; }
        if (ctx->pc != 0x2B308Cu) { return; }
    }
    ctx->pc = 0x2B308Cu;
label_2b308c:
    // 0x2b308c: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b308cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b3090:
    // 0x2b3090: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b3090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b3094:
    // 0x2b3094: 0x2406006f  addiu       $a2, $zero, 0x6F
    ctx->pc = 0x2b3094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_2b3098:
    // 0x2b3098: 0xc067030  jal         func_19C0C0
label_2b309c:
    if (ctx->pc == 0x2B309Cu) {
        ctx->pc = 0x2B309Cu;
            // 0x2b309c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B30A0u;
        goto label_2b30a0;
    }
    ctx->pc = 0x2B3098u;
    SET_GPR_U32(ctx, 31, 0x2B30A0u);
    ctx->pc = 0x2B309Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3098u;
            // 0x2b309c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C0C0u;
    if (runtime->hasFunction(0x19C0C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B30A0u; }
        if (ctx->pc != 0x2B30A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaStatusAttirbute__16CUserDataManagerFiUii_0x19c0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B30A0u; }
        if (ctx->pc != 0x2B30A0u) { return; }
    }
    ctx->pc = 0x2B30A0u;
label_2b30a0:
    // 0x2b30a0: 0xc0ad178  jal         func_2B45E0
label_2b30a4:
    if (ctx->pc == 0x2B30A4u) {
        ctx->pc = 0x2B30A4u;
            // 0x2b30a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B30A8u;
        goto label_2b30a8;
    }
    ctx->pc = 0x2B30A0u;
    SET_GPR_U32(ctx, 31, 0x2B30A8u);
    ctx->pc = 0x2B30A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B30A0u;
            // 0x2b30a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B45E0u;
    if (runtime->hasFunction(0x2B45E0u)) {
        auto targetFn = runtime->lookupFunction(0x2B45E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B30A8u; }
        if (ctx->pc != 0x2B30A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdataLife__15CMenuChrCngMenuFv_0x2b45e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B30A8u; }
        if (ctx->pc != 0x2B30A8u) { return; }
    }
    ctx->pc = 0x2B30A8u;
label_2b30a8:
    // 0x2b30a8: 0x162000a9  bnez        $s1, . + 4 + (0xA9 << 2)
label_2b30ac:
    if (ctx->pc == 0x2B30ACu) {
        ctx->pc = 0x2B30ACu;
            // 0x2b30ac: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->pc = 0x2B30B0u;
        goto label_2b30b0;
    }
    ctx->pc = 0x2B30A8u;
    {
        const bool branch_taken_0x2b30a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B30ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B30A8u;
            // 0x2b30ac: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b30a8) {
            ctx->pc = 0x2B3350u;
            goto label_2b3350;
        }
    }
    ctx->pc = 0x2B30B0u;
label_2b30b0:
    // 0x2b30b0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2b30b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b30b4:
    // 0x2b30b4: 0xc0aacc4  jal         func_2AB310
label_2b30b8:
    if (ctx->pc == 0x2B30B8u) {
        ctx->pc = 0x2B30B8u;
            // 0x2b30b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B30BCu;
        goto label_2b30bc;
    }
    ctx->pc = 0x2B30B4u;
    SET_GPR_U32(ctx, 31, 0x2B30BCu);
    ctx->pc = 0x2B30B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B30B4u;
            // 0x2b30b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B30BCu; }
        if (ctx->pc != 0x2B30BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B30BCu; }
        if (ctx->pc != 0x2B30BCu) { return; }
    }
    ctx->pc = 0x2B30BCu;
label_2b30bc:
    // 0x2b30bc: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_2b30c0:
    if (ctx->pc == 0x2B30C0u) {
        ctx->pc = 0x2B30C0u;
            // 0x2b30c0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B30C4u;
        goto label_2b30c4;
    }
    ctx->pc = 0x2B30BCu;
    {
        const bool branch_taken_0x2b30bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B30C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B30BCu;
            // 0x2b30c0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b30bc) {
            ctx->pc = 0x2B3350u;
            goto label_2b3350;
        }
    }
    ctx->pc = 0x2B30C4u;
label_2b30c4:
    // 0x2b30c4: 0x12600020  beqz        $s3, . + 4 + (0x20 << 2)
label_2b30c8:
    if (ctx->pc == 0x2B30C8u) {
        ctx->pc = 0x2B30CCu;
        goto label_2b30cc;
    }
    ctx->pc = 0x2B30C4u;
    {
        const bool branch_taken_0x2b30c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b30c4) {
            ctx->pc = 0x2B3148u;
            goto label_2b3148;
        }
    }
    ctx->pc = 0x2B30CCu;
label_2b30cc:
    // 0x2b30cc: 0x16c0001e  bnez        $s6, . + 4 + (0x1E << 2)
label_2b30d0:
    if (ctx->pc == 0x2B30D0u) {
        ctx->pc = 0x2B30D4u;
        goto label_2b30d4;
    }
    ctx->pc = 0x2B30CCu;
    {
        const bool branch_taken_0x2b30cc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b30cc) {
            ctx->pc = 0x2B3148u;
            goto label_2b3148;
        }
    }
    ctx->pc = 0x2B30D4u;
label_2b30d4:
    // 0x2b30d4: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b30d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b30d8:
    // 0x2b30d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b30d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b30dc:
    // 0x2b30dc: 0xc066d58  jal         func_19B560
label_2b30e0:
    if (ctx->pc == 0x2B30E0u) {
        ctx->pc = 0x2B30E0u;
            // 0x2b30e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B30E4u;
        goto label_2b30e4;
    }
    ctx->pc = 0x2B30DCu;
    SET_GPR_U32(ctx, 31, 0x2B30E4u);
    ctx->pc = 0x2B30E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B30DCu;
            // 0x2b30e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B560u;
    if (runtime->hasFunction(0x19B560u)) {
        auto targetFn = runtime->lookupFunction(0x19B560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B30E4u; }
        if (ctx->pc != 0x2B30E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHp__16CUserDataManagerFi_0x19b560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B30E4u; }
        if (ctx->pc != 0x2B30E4u) { return; }
    }
    ctx->pc = 0x2B30E4u;
label_2b30e4:
    // 0x2b30e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b30e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b30e8:
    // 0x2b30e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b30e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b30ec:
    // 0x2b30ec: 0x0  nop
    ctx->pc = 0x2b30ecu;
    // NOP
label_2b30f0:
    // 0x2b30f0: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2b30f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b30f4:
    // 0x2b30f4: 0x0  nop
    ctx->pc = 0x2b30f4u;
    // NOP
label_2b30f8:
    // 0x2b30f8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2b30fc:
    if (ctx->pc == 0x2B30FCu) {
        ctx->pc = 0x2B3100u;
        goto label_2b3100;
    }
    ctx->pc = 0x2B30F8u;
    {
        const bool branch_taken_0x2b30f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b30f8) {
            ctx->pc = 0x2B3110u;
            goto label_2b3110;
        }
    }
    ctx->pc = 0x2B3100u;
label_2b3100:
    // 0x2b3100: 0x8f8294ac  lw          $v0, -0x6B54($gp)
    ctx->pc = 0x2b3100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b3104:
    // 0x2b3104: 0xc065b40  jal         func_196D00
label_2b3108:
    if (ctx->pc == 0x2B3108u) {
        ctx->pc = 0x2B3108u;
            // 0x2b3108: 0x24443f48  addiu       $a0, $v0, 0x3F48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16200));
        ctx->pc = 0x2B310Cu;
        goto label_2b310c;
    }
    ctx->pc = 0x2B3104u;
    SET_GPR_U32(ctx, 31, 0x2B310Cu);
    ctx->pc = 0x2B3108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3104u;
            // 0x2b3108: 0x24443f48  addiu       $a0, $v0, 0x3F48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D00u;
    if (runtime->hasFunction(0x196D00u)) {
        auto targetFn = runtime->lookupFunction(0x196D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B310Cu; }
        if (ctx->pc != 0x2B310Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFillRate__11COMMON_GAGEFf_0x196d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B310Cu; }
        if (ctx->pc != 0x2B310Cu) { return; }
    }
    ctx->pc = 0x2B310Cu;
label_2b310c:
    // 0x2b310c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b310cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3110:
    // 0x2b3110: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b3110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b3114:
    // 0x2b3114: 0xc066d58  jal         func_19B560
label_2b3118:
    if (ctx->pc == 0x2B3118u) {
        ctx->pc = 0x2B3118u;
            // 0x2b3118: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B311Cu;
        goto label_2b311c;
    }
    ctx->pc = 0x2B3114u;
    SET_GPR_U32(ctx, 31, 0x2B311Cu);
    ctx->pc = 0x2B3118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3114u;
            // 0x2b3118: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B560u;
    if (runtime->hasFunction(0x19B560u)) {
        auto targetFn = runtime->lookupFunction(0x19B560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B311Cu; }
        if (ctx->pc != 0x2B311Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHp__16CUserDataManagerFi_0x19b560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B311Cu; }
        if (ctx->pc != 0x2B311Cu) { return; }
    }
    ctx->pc = 0x2B311Cu;
label_2b311c:
    // 0x2b311c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b311cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b3120:
    // 0x2b3120: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b3120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b3124:
    // 0x2b3124: 0x0  nop
    ctx->pc = 0x2b3124u;
    // NOP
label_2b3128:
    // 0x2b3128: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2b3128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b312c:
    // 0x2b312c: 0x0  nop
    ctx->pc = 0x2b312cu;
    // NOP
label_2b3130:
    // 0x2b3130: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2b3134:
    if (ctx->pc == 0x2B3134u) {
        ctx->pc = 0x2B3138u;
        goto label_2b3138;
    }
    ctx->pc = 0x2B3130u;
    {
        const bool branch_taken_0x2b3130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3130) {
            ctx->pc = 0x2B3148u;
            goto label_2b3148;
        }
    }
    ctx->pc = 0x2B3138u;
label_2b3138:
    // 0x2b3138: 0x8f8294ac  lw          $v0, -0x6B54($gp)
    ctx->pc = 0x2b3138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b313c:
    // 0x2b313c: 0xc065b40  jal         func_196D00
label_2b3140:
    if (ctx->pc == 0x2B3140u) {
        ctx->pc = 0x2B3140u;
            // 0x2b3140: 0x244442d4  addiu       $a0, $v0, 0x42D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 17108));
        ctx->pc = 0x2B3144u;
        goto label_2b3144;
    }
    ctx->pc = 0x2B313Cu;
    SET_GPR_U32(ctx, 31, 0x2B3144u);
    ctx->pc = 0x2B3140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B313Cu;
            // 0x2b3140: 0x244442d4  addiu       $a0, $v0, 0x42D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 17108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D00u;
    if (runtime->hasFunction(0x196D00u)) {
        auto targetFn = runtime->lookupFunction(0x196D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3144u; }
        if (ctx->pc != 0x2B3144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFillRate__11COMMON_GAGEFf_0x196d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3144u; }
        if (ctx->pc != 0x2B3144u) { return; }
    }
    ctx->pc = 0x2B3144u;
label_2b3144:
    // 0x2b3144: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b3144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3148:
    // 0x2b3148: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_2b314c:
    if (ctx->pc == 0x2B314Cu) {
        ctx->pc = 0x2B314Cu;
            // 0x2b314c: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x2B3150u;
        goto label_2b3150;
    }
    ctx->pc = 0x2B3148u;
    {
        const bool branch_taken_0x2b3148 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B314Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3148u;
            // 0x2b314c: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3148) {
            ctx->pc = 0x2B3168u;
            goto label_2b3168;
        }
    }
    ctx->pc = 0x2B3150u;
label_2b3150:
    // 0x2b3150: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b3150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b3154:
    // 0x2b3154: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2b3154u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3158:
    // 0x2b3158: 0xc0ad178  jal         func_2B45E0
label_2b315c:
    if (ctx->pc == 0x2B315Cu) {
        ctx->pc = 0x2B315Cu;
            // 0x2b315c: 0x24100056  addiu       $s0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->pc = 0x2B3160u;
        goto label_2b3160;
    }
    ctx->pc = 0x2B3158u;
    SET_GPR_U32(ctx, 31, 0x2B3160u);
    ctx->pc = 0x2B315Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3158u;
            // 0x2b315c: 0x24100056  addiu       $s0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B45E0u;
    if (runtime->hasFunction(0x2B45E0u)) {
        auto targetFn = runtime->lookupFunction(0x2B45E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3160u; }
        if (ctx->pc != 0x2B3160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdataLife__15CMenuChrCngMenuFv_0x2b45e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3160u; }
        if (ctx->pc != 0x2B3160u) { return; }
    }
    ctx->pc = 0x2B3160u;
label_2b3160:
    // 0x2b3160: 0x1000007b  b           . + 4 + (0x7B << 2)
label_2b3164:
    if (ctx->pc == 0x2B3164u) {
        ctx->pc = 0x2B3168u;
        goto label_2b3168;
    }
    ctx->pc = 0x2B3160u;
    {
        const bool branch_taken_0x2b3160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3160) {
            ctx->pc = 0x2B3350u;
            goto label_2b3350;
        }
    }
    ctx->pc = 0x2B3168u;
label_2b3168:
    // 0x2b3168: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2b3168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b316c:
    // 0x2b316c: 0xc0aacc4  jal         func_2AB310
label_2b3170:
    if (ctx->pc == 0x2B3170u) {
        ctx->pc = 0x2B3170u;
            // 0x2b3170: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3174u;
        goto label_2b3174;
    }
    ctx->pc = 0x2B316Cu;
    SET_GPR_U32(ctx, 31, 0x2B3174u);
    ctx->pc = 0x2B3170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B316Cu;
            // 0x2b3170: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3174u; }
        if (ctx->pc != 0x2B3174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3174u; }
        if (ctx->pc != 0x2B3174u) { return; }
    }
    ctx->pc = 0x2B3174u;
label_2b3174:
    // 0x2b3174: 0x10000076  b           . + 4 + (0x76 << 2)
label_2b3178:
    if (ctx->pc == 0x2B3178u) {
        ctx->pc = 0x2B3178u;
            // 0x2b3178: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B317Cu;
        goto label_2b317c;
    }
    ctx->pc = 0x2B3174u;
    {
        const bool branch_taken_0x2b3174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3174u;
            // 0x2b3178: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3174) {
            ctx->pc = 0x2B3350u;
            goto label_2b3350;
        }
    }
    ctx->pc = 0x2B317Cu;
label_2b317c:
    // 0x2b317c: 0x1260001e  beqz        $s3, . + 4 + (0x1E << 2)
label_2b3180:
    if (ctx->pc == 0x2B3180u) {
        ctx->pc = 0x2B3184u;
        goto label_2b3184;
    }
    ctx->pc = 0x2B317Cu;
    {
        const bool branch_taken_0x2b317c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b317c) {
            ctx->pc = 0x2B31F8u;
            goto label_2b31f8;
        }
    }
    ctx->pc = 0x2B3184u;
label_2b3184:
    // 0x2b3184: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b3184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3188:
    // 0x2b3188: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b3188u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b318c:
    // 0x2b318c: 0xc066e94  jal         func_19BA50
label_2b3190:
    if (ctx->pc == 0x2B3190u) {
        ctx->pc = 0x2B3190u;
            // 0x2b3190: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->pc = 0x2B3194u;
        goto label_2b3194;
    }
    ctx->pc = 0x2B318Cu;
    SET_GPR_U32(ctx, 31, 0x2B3194u);
    ctx->pc = 0x2B3190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B318Cu;
            // 0x2b3190: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BA50u;
    if (runtime->hasFunction(0x19BA50u)) {
        auto targetFn = runtime->lookupFunction(0x19BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3194u; }
        if (ctx->pc != 0x2B3194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowPartyMember__16CUserDataManagerFv_0x19ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3194u; }
        if (ctx->pc != 0x2B3194u) { return; }
    }
    ctx->pc = 0x2B3194u;
label_2b3194:
    // 0x2b3194: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3198:
    // 0x2b3198: 0x2631804  sllv        $v1, $v1, $s3
    ctx->pc = 0x2b3198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
label_2b319c:
    // 0x2b319c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b319cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2b31a0:
    // 0x2b31a0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2b31a4:
    if (ctx->pc == 0x2B31A4u) {
        ctx->pc = 0x2B31A8u;
        goto label_2b31a8;
    }
    ctx->pc = 0x2B31A0u;
    {
        const bool branch_taken_0x2b31a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b31a0) {
            ctx->pc = 0x2B31E8u;
            goto label_2b31e8;
        }
    }
    ctx->pc = 0x2B31A8u;
label_2b31a8:
    // 0x2b31a8: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b31a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b31ac:
    // 0x2b31ac: 0xc066d58  jal         func_19B560
label_2b31b0:
    if (ctx->pc == 0x2B31B0u) {
        ctx->pc = 0x2B31B0u;
            // 0x2b31b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B31B4u;
        goto label_2b31b4;
    }
    ctx->pc = 0x2B31ACu;
    SET_GPR_U32(ctx, 31, 0x2B31B4u);
    ctx->pc = 0x2B31B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B31ACu;
            // 0x2b31b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B560u;
    if (runtime->hasFunction(0x19B560u)) {
        auto targetFn = runtime->lookupFunction(0x19B560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B31B4u; }
        if (ctx->pc != 0x2B31B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHp__16CUserDataManagerFi_0x19b560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B31B4u; }
        if (ctx->pc != 0x2B31B4u) { return; }
    }
    ctx->pc = 0x2B31B4u;
label_2b31b4:
    // 0x2b31b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b31b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b31b8:
    // 0x2b31b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b31b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b31bc:
    // 0x2b31bc: 0x0  nop
    ctx->pc = 0x2b31bcu;
    // NOP
label_2b31c0:
    // 0x2b31c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b31c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b31c4:
    // 0x2b31c4: 0x0  nop
    ctx->pc = 0x2b31c4u;
    // NOP
label_2b31c8:
    // 0x2b31c8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2b31cc:
    if (ctx->pc == 0x2B31CCu) {
        ctx->pc = 0x2B31D0u;
        goto label_2b31d0;
    }
    ctx->pc = 0x2B31C8u;
    {
        const bool branch_taken_0x2b31c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b31c8) {
            ctx->pc = 0x2B31E8u;
            goto label_2b31e8;
        }
    }
    ctx->pc = 0x2B31D0u;
label_2b31d0:
    // 0x2b31d0: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b31d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b31d4:
    // 0x2b31d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b31d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b31d8:
    // 0x2b31d8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2b31d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2b31dc:
    // 0x2b31dc: 0xc067064  jal         func_19C190
label_2b31e0:
    if (ctx->pc == 0x2B31E0u) {
        ctx->pc = 0x2B31E0u;
            // 0x2b31e0: 0x24070384  addiu       $a3, $zero, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
        ctx->pc = 0x2B31E4u;
        goto label_2b31e4;
    }
    ctx->pc = 0x2B31DCu;
    SET_GPR_U32(ctx, 31, 0x2B31E4u);
    ctx->pc = 0x2B31E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B31DCu;
            // 0x2b31e0: 0x24070384  addiu       $a3, $zero, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C190u;
    if (runtime->hasFunction(0x19C190u)) {
        auto targetFn = runtime->lookupFunction(0x19C190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B31E4u; }
        if (ctx->pc != 0x2B31E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaStatusAttirbuteVol__16CUserDataManagerFiUii_0x19c190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B31E4u; }
        if (ctx->pc != 0x2B31E4u) { return; }
    }
    ctx->pc = 0x2B31E4u;
label_2b31e4:
    // 0x2b31e4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b31e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b31e8:
    // 0x2b31e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2b31e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2b31ec:
    // 0x2b31ec: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x2b31ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_2b31f0:
    // 0x2b31f0: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_2b31f4:
    if (ctx->pc == 0x2B31F4u) {
        ctx->pc = 0x2B31F8u;
        goto label_2b31f8;
    }
    ctx->pc = 0x2B31F0u;
    {
        const bool branch_taken_0x2b31f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b31f0) {
            ctx->pc = 0x2B318Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b318c;
        }
    }
    ctx->pc = 0x2B31F8u;
label_2b31f8:
    // 0x2b31f8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2b31fc:
    if (ctx->pc == 0x2B31FCu) {
        ctx->pc = 0x2B31FCu;
            // 0x2b31fc: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x2B3200u;
        goto label_2b3200;
    }
    ctx->pc = 0x2B31F8u;
    {
        const bool branch_taken_0x2b31f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B31FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B31F8u;
            // 0x2b31fc: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b31f8) {
            ctx->pc = 0x2B320Cu;
            goto label_2b320c;
        }
    }
    ctx->pc = 0x2B3200u;
label_2b3200:
    // 0x2b3200: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2b3200u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3204:
    // 0x2b3204: 0x10000052  b           . + 4 + (0x52 << 2)
label_2b3208:
    if (ctx->pc == 0x2B3208u) {
        ctx->pc = 0x2B3208u;
            // 0x2b3208: 0x24100056  addiu       $s0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->pc = 0x2B320Cu;
        goto label_2b320c;
    }
    ctx->pc = 0x2B3204u;
    {
        const bool branch_taken_0x2b3204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3204u;
            // 0x2b3208: 0x24100056  addiu       $s0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3204) {
            ctx->pc = 0x2B3350u;
            goto label_2b3350;
        }
    }
    ctx->pc = 0x2B320Cu;
label_2b320c:
    // 0x2b320c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2b320cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b3210:
    // 0x2b3210: 0xc0aacc4  jal         func_2AB310
label_2b3214:
    if (ctx->pc == 0x2B3214u) {
        ctx->pc = 0x2B3214u;
            // 0x2b3214: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3218u;
        goto label_2b3218;
    }
    ctx->pc = 0x2B3210u;
    SET_GPR_U32(ctx, 31, 0x2B3218u);
    ctx->pc = 0x2B3214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3210u;
            // 0x2b3214: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3218u; }
        if (ctx->pc != 0x2B3218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3218u; }
        if (ctx->pc != 0x2B3218u) { return; }
    }
    ctx->pc = 0x2B3218u;
label_2b3218:
    // 0x2b3218: 0x1000004d  b           . + 4 + (0x4D << 2)
label_2b321c:
    if (ctx->pc == 0x2B321Cu) {
        ctx->pc = 0x2B321Cu;
            // 0x2b321c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3220u;
        goto label_2b3220;
    }
    ctx->pc = 0x2B3218u;
    {
        const bool branch_taken_0x2b3218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B321Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3218u;
            // 0x2b321c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3218) {
            ctx->pc = 0x2B3350u;
            goto label_2b3350;
        }
    }
    ctx->pc = 0x2B3220u;
label_2b3220:
    // 0x2b3220: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b3220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b3224:
    // 0x2b3224: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3228:
    // 0x2b3228: 0xae820130  sw          $v0, 0x130($s4)
    ctx->pc = 0x2b3228u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 2));
label_2b322c:
    // 0x2b322c: 0xae830134  sw          $v1, 0x134($s4)
    ctx->pc = 0x2b322cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 3));
label_2b3230:
    // 0x2b3230: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2b3230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2b3234:
    // 0x2b3234: 0x8e83021c  lw          $v1, 0x21C($s4)
    ctx->pc = 0x2b3234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b3238:
    // 0x2b3238: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2b323c:
    if (ctx->pc == 0x2B323Cu) {
        ctx->pc = 0x2B323Cu;
            // 0x2b323c: 0x2402010e  addiu       $v0, $zero, 0x10E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
        ctx->pc = 0x2B3240u;
        goto label_2b3240;
    }
    ctx->pc = 0x2B3238u;
    {
        const bool branch_taken_0x2b3238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B323Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3238u;
            // 0x2b323c: 0x2402010e  addiu       $v0, $zero, 0x10E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3238) {
            ctx->pc = 0x2B3244u;
            goto label_2b3244;
        }
    }
    ctx->pc = 0x2B3240u;
label_2b3240:
    // 0x2b3240: 0xae820130  sw          $v0, 0x130($s4)
    ctx->pc = 0x2b3240u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 2));
label_2b3244:
    // 0x2b3244: 0x8e83021c  lw          $v1, 0x21C($s4)
    ctx->pc = 0x2b3244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b3248:
    // 0x2b3248: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2b3248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2b324c:
    // 0x2b324c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2b3250:
    if (ctx->pc == 0x2B3250u) {
        ctx->pc = 0x2B3250u;
            // 0x2b3250: 0x2402010c  addiu       $v0, $zero, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
        ctx->pc = 0x2B3254u;
        goto label_2b3254;
    }
    ctx->pc = 0x2B324Cu;
    {
        const bool branch_taken_0x2b324c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B3250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B324Cu;
            // 0x2b3250: 0x2402010c  addiu       $v0, $zero, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b324c) {
            ctx->pc = 0x2B3258u;
            goto label_2b3258;
        }
    }
    ctx->pc = 0x2B3254u;
label_2b3254:
    // 0x2b3254: 0xae820130  sw          $v0, 0x130($s4)
    ctx->pc = 0x2b3254u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 2));
label_2b3258:
    // 0x2b3258: 0x8e83021c  lw          $v1, 0x21C($s4)
    ctx->pc = 0x2b3258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b325c:
    // 0x2b325c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2b325cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2b3260:
    // 0x2b3260: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2b3264:
    if (ctx->pc == 0x2B3264u) {
        ctx->pc = 0x2B3264u;
            // 0x2b3264: 0x24030186  addiu       $v1, $zero, 0x186 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
        ctx->pc = 0x2B3268u;
        goto label_2b3268;
    }
    ctx->pc = 0x2B3260u;
    {
        const bool branch_taken_0x2b3260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B3264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3260u;
            // 0x2b3264: 0x24030186  addiu       $v1, $zero, 0x186 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3260) {
            ctx->pc = 0x2B3274u;
            goto label_2b3274;
        }
    }
    ctx->pc = 0x2B3268u;
label_2b3268:
    // 0x2b3268: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b3268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b326c:
    // 0x2b326c: 0xae830130  sw          $v1, 0x130($s4)
    ctx->pc = 0x2b326cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 3));
label_2b3270:
    // 0x2b3270: 0xae820134  sw          $v0, 0x134($s4)
    ctx->pc = 0x2b3270u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 2));
label_2b3274:
    // 0x2b3274: 0x8e83021c  lw          $v1, 0x21C($s4)
    ctx->pc = 0x2b3274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b3278:
    // 0x2b3278: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2b3278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b327c:
    // 0x2b327c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_2b3280:
    if (ctx->pc == 0x2B3280u) {
        ctx->pc = 0x2B3280u;
            // 0x2b3280: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x2B3284u;
        goto label_2b3284;
    }
    ctx->pc = 0x2B327Cu;
    {
        const bool branch_taken_0x2b327c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B3280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B327Cu;
            // 0x2b3280: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b327c) {
            ctx->pc = 0x2B32D8u;
            goto label_2b32d8;
        }
    }
    ctx->pc = 0x2B3284u;
label_2b3284:
    // 0x2b3284: 0xc08329c  jal         func_20CA70
label_2b3288:
    if (ctx->pc == 0x2B3288u) {
        ctx->pc = 0x2B328Cu;
        goto label_2b328c;
    }
    ctx->pc = 0x2B3284u;
    SET_GPR_U32(ctx, 31, 0x2B328Cu);
    ctx->pc = 0x20CA70u;
    if (runtime->hasFunction(0x20CA70u)) {
        auto targetFn = runtime->lookupFunction(0x20CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B328Cu; }
        if (ctx->pc != 0x2B328Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUseableEsaNo__FPi_0x20ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B328Cu; }
        if (ctx->pc != 0x2B328Cu) { return; }
    }
    ctx->pc = 0x2B328Cu;
label_2b328c:
    // 0x2b328c: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
label_2b3290:
    if (ctx->pc == 0x2B3290u) {
        ctx->pc = 0x2B3290u;
            // 0x2b3290: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3294u;
        goto label_2b3294;
    }
    ctx->pc = 0x2B328Cu;
    {
        const bool branch_taken_0x2b328c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B3290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B328Cu;
            // 0x2b3290: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b328c) {
            ctx->pc = 0x2B32C8u;
            goto label_2b32c8;
        }
    }
    ctx->pc = 0x2B3294u;
label_2b3294:
    // 0x2b3294: 0xc0941b0  jal         func_2506C0
label_2b3298:
    if (ctx->pc == 0x2B3298u) {
        ctx->pc = 0x2B329Cu;
        goto label_2b329c;
    }
    ctx->pc = 0x2B3294u;
    SET_GPR_U32(ctx, 31, 0x2B329Cu);
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B329Cu; }
        if (ctx->pc != 0x2B329Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B329Cu; }
        if (ctx->pc != 0x2B329Cu) { return; }
    }
    ctx->pc = 0x2B329Cu;
label_2b329c:
    // 0x2b329c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2b329cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2b32a0:
    // 0x2b32a0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2b32a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2b32a4:
    // 0x2b32a4: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x2b32a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_2b32a8:
    // 0x2b32a8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2b32a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_2b32ac:
    // 0x2b32ac: 0xae830130  sw          $v1, 0x130($s4)
    ctx->pc = 0x2b32acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 3));
label_2b32b0:
    // 0x2b32b0: 0x8e830130  lw          $v1, 0x130($s4)
    ctx->pc = 0x2b32b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
label_2b32b4:
    // 0x2b32b4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2b32b8:
    if (ctx->pc == 0x2B32B8u) {
        ctx->pc = 0x2B32B8u;
            // 0x2b32b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B32BCu;
        goto label_2b32bc;
    }
    ctx->pc = 0x2B32B4u;
    {
        const bool branch_taken_0x2b32b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B32B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B32B4u;
            // 0x2b32b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b32b4) {
            ctx->pc = 0x2B32D4u;
            goto label_2b32d4;
        }
    }
    ctx->pc = 0x2B32BCu;
label_2b32bc:
    // 0x2b32bc: 0x24020138  addiu       $v0, $zero, 0x138
    ctx->pc = 0x2b32bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
label_2b32c0:
    // 0x2b32c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2b32c4:
    if (ctx->pc == 0x2B32C4u) {
        ctx->pc = 0x2B32C4u;
            // 0x2b32c4: 0xae820130  sw          $v0, 0x130($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 2));
        ctx->pc = 0x2B32C8u;
        goto label_2b32c8;
    }
    ctx->pc = 0x2B32C0u;
    {
        const bool branch_taken_0x2b32c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B32C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B32C0u;
            // 0x2b32c4: 0xae820130  sw          $v0, 0x130($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b32c0) {
            ctx->pc = 0x2B32D0u;
            goto label_2b32d0;
        }
    }
    ctx->pc = 0x2B32C8u;
label_2b32c8:
    // 0x2b32c8: 0x24020138  addiu       $v0, $zero, 0x138
    ctx->pc = 0x2b32c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
label_2b32cc:
    // 0x2b32cc: 0xae820130  sw          $v0, 0x130($s4)
    ctx->pc = 0x2b32ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 2));
label_2b32d0:
    // 0x2b32d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b32d4:
    // 0x2b32d4: 0xae820134  sw          $v0, 0x134($s4)
    ctx->pc = 0x2b32d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 2));
label_2b32d8:
    // 0x2b32d8: 0x8e83021c  lw          $v1, 0x21C($s4)
    ctx->pc = 0x2b32d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b32dc:
    // 0x2b32dc: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2b32dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2b32e0:
    // 0x2b32e0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2b32e4:
    if (ctx->pc == 0x2B32E4u) {
        ctx->pc = 0x2B32E4u;
            // 0x2b32e4: 0x2403010d  addiu       $v1, $zero, 0x10D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
        ctx->pc = 0x2B32E8u;
        goto label_2b32e8;
    }
    ctx->pc = 0x2B32E0u;
    {
        const bool branch_taken_0x2b32e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B32E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B32E0u;
            // 0x2b32e4: 0x2403010d  addiu       $v1, $zero, 0x10D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b32e0) {
            ctx->pc = 0x2B32F4u;
            goto label_2b32f4;
        }
    }
    ctx->pc = 0x2B32E8u;
label_2b32e8:
    // 0x2b32e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b32e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b32ec:
    // 0x2b32ec: 0xae830130  sw          $v1, 0x130($s4)
    ctx->pc = 0x2b32ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 3));
label_2b32f0:
    // 0x2b32f0: 0xae820134  sw          $v0, 0x134($s4)
    ctx->pc = 0x2b32f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 2));
label_2b32f4:
    // 0x2b32f4: 0x8e850134  lw          $a1, 0x134($s4)
    ctx->pc = 0x2b32f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 308)));
label_2b32f8:
    // 0x2b32f8: 0xc068524  jal         func_1A1490
label_2b32fc:
    if (ctx->pc == 0x2B32FCu) {
        ctx->pc = 0x2B32FCu;
            // 0x2b32fc: 0x8e840130  lw          $a0, 0x130($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
        ctx->pc = 0x2B3300u;
        goto label_2b3300;
    }
    ctx->pc = 0x2B32F8u;
    SET_GPR_U32(ctx, 31, 0x2B3300u);
    ctx->pc = 0x2B32FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B32F8u;
            // 0x2b32fc: 0x8e840130  lw          $a0, 0x130($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1490u;
    if (runtime->hasFunction(0x1A1490u)) {
        auto targetFn = runtime->lookupFunction(0x1A1490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3300u; }
        if (ctx->pc != 0x2B3300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckGetItemLimmitOver__Fii_0x1a1490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3300u; }
        if (ctx->pc != 0x2B3300u) { return; }
    }
    ctx->pc = 0x2B3300u;
label_2b3300:
    // 0x2b3300: 0xae820134  sw          $v0, 0x134($s4)
    ctx->pc = 0x2b3300u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 2));
label_2b3304:
    // 0x2b3304: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2b3304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2b3308:
    // 0x2b3308: 0xc0877b8  jal         func_21DEE0
label_2b330c:
    if (ctx->pc == 0x2B330Cu) {
        ctx->pc = 0x2B330Cu;
            // 0x2b330c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3310u;
        goto label_2b3310;
    }
    ctx->pc = 0x2B3308u;
    SET_GPR_U32(ctx, 31, 0x2B3310u);
    ctx->pc = 0x2B330Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3308u;
            // 0x2b330c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3310u; }
        if (ctx->pc != 0x2B3310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3310u; }
        if (ctx->pc != 0x2B3310u) { return; }
    }
    ctx->pc = 0x2B3310u;
label_2b3310:
    // 0x2b3310: 0x8e820134  lw          $v0, 0x134($s4)
    ctx->pc = 0x2b3310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 308)));
label_2b3314:
    // 0x2b3314: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2b3318:
    if (ctx->pc == 0x2B3318u) {
        ctx->pc = 0x2B331Cu;
        goto label_2b331c;
    }
    ctx->pc = 0x2B3314u;
    {
        const bool branch_taken_0x2b3314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3314) {
            ctx->pc = 0x2B3334u;
            goto label_2b3334;
        }
    }
    ctx->pc = 0x2B331Cu;
label_2b331c:
    // 0x2b331c: 0x8e84021c  lw          $a0, 0x21C($s4)
    ctx->pc = 0x2b331cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b3320:
    // 0x2b3320: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2b3320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2b3324:
    // 0x2b3324: 0xc0aacc4  jal         func_2AB310
label_2b3328:
    if (ctx->pc == 0x2B3328u) {
        ctx->pc = 0x2B3328u;
            // 0x2b3328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B332Cu;
        goto label_2b332c;
    }
    ctx->pc = 0x2B3324u;
    SET_GPR_U32(ctx, 31, 0x2B332Cu);
    ctx->pc = 0x2B3328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3324u;
            // 0x2b3328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B332Cu; }
        if (ctx->pc != 0x2B332Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B332Cu; }
        if (ctx->pc != 0x2B332Cu) { return; }
    }
    ctx->pc = 0x2B332Cu;
label_2b332c:
    // 0x2b332c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2b3330:
    if (ctx->pc == 0x2B3330u) {
        ctx->pc = 0x2B3330u;
            // 0x2b3330: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3334u;
        goto label_2b3334;
    }
    ctx->pc = 0x2B332Cu;
    {
        const bool branch_taken_0x2b332c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B332Cu;
            // 0x2b3330: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b332c) {
            ctx->pc = 0x2B3350u;
            goto label_2b3350;
        }
    }
    ctx->pc = 0x2B3334u;
label_2b3334:
    // 0x2b3334: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b3334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3338:
    // 0x2b3338: 0xa291012d  sb          $s1, 0x12D($s4)
    ctx->pc = 0x2b3338u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 301), (uint8_t)GPR_U32(ctx, 17));
label_2b333c:
    // 0x2b333c: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b333cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b3340:
    // 0x2b3340: 0x8e850130  lw          $a1, 0x130($s4)
    ctx->pc = 0x2b3340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
label_2b3344:
    // 0x2b3344: 0x8e860134  lw          $a2, 0x134($s4)
    ctx->pc = 0x2b3344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 308)));
label_2b3348:
    // 0x2b3348: 0xc0677fc  jal         func_19DFF0
label_2b334c:
    if (ctx->pc == 0x2B334Cu) {
        ctx->pc = 0x2B334Cu;
            // 0x2b334c: 0x24100012  addiu       $s0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x2B3350u;
        goto label_2b3350;
    }
    ctx->pc = 0x2B3348u;
    SET_GPR_U32(ctx, 31, 0x2B3350u);
    ctx->pc = 0x2B334Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3348u;
            // 0x2b334c: 0x24100012  addiu       $s0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3350u; }
        if (ctx->pc != 0x2B3350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3350u; }
        if (ctx->pc != 0x2B3350u) { return; }
    }
    ctx->pc = 0x2B3350u;
label_2b3350:
    // 0x2b3350: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_2b3354:
    if (ctx->pc == 0x2B3354u) {
        ctx->pc = 0x2B3354u;
            // 0x2b3354: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3358u;
        goto label_2b3358;
    }
    ctx->pc = 0x2B3350u;
    {
        const bool branch_taken_0x2b3350 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3350u;
            // 0x2b3354: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3350) {
            ctx->pc = 0x2B3370u;
            goto label_2b3370;
        }
    }
    ctx->pc = 0x2B3358u;
label_2b3358:
    // 0x2b3358: 0x83869b9c  lb          $a2, -0x6464($gp)
    ctx->pc = 0x2b3358u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941596)));
label_2b335c:
    // 0x2b335c: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b335cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b3360:
    // 0x2b3360: 0x8e85021c  lw          $a1, 0x21C($s4)
    ctx->pc = 0x2b3360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b3364:
    // 0x2b3364: 0xc067288  jal         func_19CA20
label_2b3368:
    if (ctx->pc == 0x2B3368u) {
        ctx->pc = 0x2B3368u;
            // 0x2b3368: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B336Cu;
        goto label_2b336c;
    }
    ctx->pc = 0x2B3364u;
    SET_GPR_U32(ctx, 31, 0x2B336Cu);
    ctx->pc = 0x2B3368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3364u;
            // 0x2b3368: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CA20u;
    if (runtime->hasFunction(0x19CA20u)) {
        auto targetFn = runtime->lookupFunction(0x19CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B336Cu; }
        if (ctx->pc != 0x2B336Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseNpcAbility__16CUserDataManagerFiii_0x19ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B336Cu; }
        if (ctx->pc != 0x2B336Cu) { return; }
    }
    ctx->pc = 0x2B336Cu;
label_2b336c:
    // 0x2b336c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b336cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b3370:
    // 0x2b3370: 0xc0877e0  jal         func_21DF80
label_2b3374:
    if (ctx->pc == 0x2B3374u) {
        ctx->pc = 0x2B3374u;
            // 0x2b3374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3378u;
        goto label_2b3378;
    }
    ctx->pc = 0x2B3370u;
    SET_GPR_U32(ctx, 31, 0x2B3378u);
    ctx->pc = 0x2B3374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3370u;
            // 0x2b3374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3378u; }
        if (ctx->pc != 0x2B3378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3378u; }
        if (ctx->pc != 0x2B3378u) { return; }
    }
    ctx->pc = 0x2B3378u;
label_2b3378:
    // 0x2b3378: 0xc087898  jal         func_21E260
label_2b337c:
    if (ctx->pc == 0x2B337Cu) {
        ctx->pc = 0x2B337Cu;
            // 0x2b337c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3380u;
        goto label_2b3380;
    }
    ctx->pc = 0x2B3378u;
    SET_GPR_U32(ctx, 31, 0x2B3380u);
    ctx->pc = 0x2B337Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3378u;
            // 0x2b337c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3380u; }
        if (ctx->pc != 0x2B3380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3380u; }
        if (ctx->pc != 0x2B3380u) { return; }
    }
    ctx->pc = 0x2B3380u;
label_2b3380:
    // 0x2b3380: 0x8e85020c  lw          $a1, 0x20C($s4)
    ctx->pc = 0x2b3380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 524)));
label_2b3384:
    // 0x2b3384: 0xc0ac0b8  jal         func_2B02E0
label_2b3388:
    if (ctx->pc == 0x2B3388u) {
        ctx->pc = 0x2B3388u;
            // 0x2b3388: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B338Cu;
        goto label_2b338c;
    }
    ctx->pc = 0x2B3384u;
    SET_GPR_U32(ctx, 31, 0x2B338Cu);
    ctx->pc = 0x2B3388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3384u;
            // 0x2b3388: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B02E0u;
    if (runtime->hasFunction(0x2B02E0u)) {
        auto targetFn = runtime->lookupFunction(0x2B02E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B338Cu; }
        if (ctx->pc != 0x2B338Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AdjustNPCTalk__FP7CDC2MesP11CCharacter2_0x2b02e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B338Cu; }
        if (ctx->pc != 0x2B338Cu) { return; }
    }
    ctx->pc = 0x2B338Cu;
label_2b338c:
    // 0x2b338c: 0x16e00004  bnez        $s7, . + 4 + (0x4 << 2)
label_2b3390:
    if (ctx->pc == 0x2B3390u) {
        ctx->pc = 0x2B3390u;
            // 0x2b3390: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B3394u;
        goto label_2b3394;
    }
    ctx->pc = 0x2B338Cu;
    {
        const bool branch_taken_0x2b338c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B338Cu;
            // 0x2b3390: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b338c) {
            ctx->pc = 0x2B33A0u;
            goto label_2b33a0;
        }
    }
    ctx->pc = 0x2B3394u;
label_2b3394:
    // 0x2b3394: 0xc094274  jal         func_2509D0
label_2b3398:
    if (ctx->pc == 0x2B3398u) {
        ctx->pc = 0x2B3398u;
            // 0x2b3398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B339Cu;
        goto label_2b339c;
    }
    ctx->pc = 0x2B3394u;
    SET_GPR_U32(ctx, 31, 0x2B339Cu);
    ctx->pc = 0x2B3398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3394u;
            // 0x2b3398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B339Cu; }
        if (ctx->pc != 0x2B339Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B339Cu; }
        if (ctx->pc != 0x2B339Cu) { return; }
    }
    ctx->pc = 0x2B339Cu;
label_2b339c:
    // 0x2b339c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b339cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b33a0:
    // 0x2b33a0: 0x16e2003c  bne         $s7, $v0, . + 4 + (0x3C << 2)
label_2b33a4:
    if (ctx->pc == 0x2B33A4u) {
        ctx->pc = 0x2B33A8u;
        goto label_2b33a8;
    }
    ctx->pc = 0x2B33A0u;
    {
        const bool branch_taken_0x2b33a0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b33a0) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B33A8u;
label_2b33a8:
    // 0x2b33a8: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2b33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2b33ac:
    // 0x2b33ac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2b33acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2b33b0:
    // 0x2b33b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b33b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b33b4:
    // 0x2b33b4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2b33b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2b33b8:
    // 0x2b33b8: 0x8c24c4d0  lw          $a0, -0x3B30($at)
    ctx->pc = 0x2b33b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
label_2b33bc:
    // 0x2b33bc: 0xc063818  jal         func_18E060
label_2b33c0:
    if (ctx->pc == 0x2B33C0u) {
        ctx->pc = 0x2B33C0u;
            // 0x2b33c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B33C4u;
        goto label_2b33c4;
    }
    ctx->pc = 0x2B33BCu;
    SET_GPR_U32(ctx, 31, 0x2B33C4u);
    ctx->pc = 0x2B33C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B33BCu;
            // 0x2b33c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B33C4u; }
        if (ctx->pc != 0x2B33C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B33C4u; }
        if (ctx->pc != 0x2B33C4u) { return; }
    }
    ctx->pc = 0x2B33C4u;
label_2b33c4:
    // 0x2b33c4: 0x10000033  b           . + 4 + (0x33 << 2)
label_2b33c8:
    if (ctx->pc == 0x2B33C8u) {
        ctx->pc = 0x2B33CCu;
        goto label_2b33cc;
    }
    ctx->pc = 0x2B33C4u;
    {
        const bool branch_taken_0x2b33c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b33c4) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B33CCu;
label_2b33cc:
    // 0x2b33cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b33ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b33d0:
    // 0x2b33d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b33d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b33d4:
    // 0x2b33d4: 0x8c23cb48  lw          $v1, -0x34B8($at)
    ctx->pc = 0x2b33d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953800)));
label_2b33d8:
    // 0x2b33d8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2b33d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_2b33dc:
    // 0x2b33dc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b33dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b33e0:
    // 0x2b33e0: 0x8c23cb44  lw          $v1, -0x34BC($at)
    ctx->pc = 0x2b33e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953796)));
label_2b33e4:
    // 0x2b33e4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2b33e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_2b33e8:
    // 0x2b33e8: 0x8e83021c  lw          $v1, 0x21C($s4)
    ctx->pc = 0x2b33e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_2b33ec:
    // 0x2b33ec: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
label_2b33f0:
    if (ctx->pc == 0x2B33F0u) {
        ctx->pc = 0x2B33F0u;
            // 0x2b33f0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2B33F4u;
        goto label_2b33f4;
    }
    ctx->pc = 0x2B33ECu;
    {
        const bool branch_taken_0x2b33ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B33F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B33ECu;
            // 0x2b33f0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b33ec) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B33F4u;
label_2b33f4:
    // 0x2b33f4: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x2b33f4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_2b33f8:
    // 0x2b33f8: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2b33f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2b33fc:
    // 0x2b33fc: 0xc08f02c  jal         func_23C0B0
label_2b3400:
    if (ctx->pc == 0x2B3400u) {
        ctx->pc = 0x2B3400u;
            // 0x2b3400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3404u;
        goto label_2b3404;
    }
    ctx->pc = 0x2B33FCu;
    SET_GPR_U32(ctx, 31, 0x2B3404u);
    ctx->pc = 0x2B3400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B33FCu;
            // 0x2b3400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3404u; }
        if (ctx->pc != 0x2B3404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3404u; }
        if (ctx->pc != 0x2B3404u) { return; }
    }
    ctx->pc = 0x2B3404u;
label_2b3404:
    // 0x2b3404: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b3404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b3408:
    // 0x2b3408: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b3408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b340c:
    // 0x2b340c: 0xc08e7cc  jal         func_239F30
label_2b3410:
    if (ctx->pc == 0x2B3410u) {
        ctx->pc = 0x2B3410u;
            // 0x2b3410: 0x24a5ecb8  addiu       $a1, $a1, -0x1348 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962360));
        ctx->pc = 0x2B3414u;
        goto label_2b3414;
    }
    ctx->pc = 0x2B340Cu;
    SET_GPR_U32(ctx, 31, 0x2B3414u);
    ctx->pc = 0x2B3410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B340Cu;
            // 0x2b3410: 0x24a5ecb8  addiu       $a1, $a1, -0x1348 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3414u; }
        if (ctx->pc != 0x2B3414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3414u; }
        if (ctx->pc != 0x2B3414u) { return; }
    }
    ctx->pc = 0x2B3414u;
label_2b3414:
    // 0x2b3414: 0x240300dc  addiu       $v1, $zero, 0xDC
    ctx->pc = 0x2b3414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_2b3418:
    // 0x2b3418: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x2b3418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_2b341c:
    // 0x2b341c: 0xaee30198  sw          $v1, 0x198($s7)
    ctx->pc = 0x2b341cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 408), GPR_U32(ctx, 3));
label_2b3420:
    // 0x2b3420: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2b3420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b3424:
    // 0x2b3424: 0xaee2019c  sw          $v0, 0x19C($s7)
    ctx->pc = 0x2b3424u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 412), GPR_U32(ctx, 2));
label_2b3428:
    // 0x2b3428: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b342c:
    // 0x2b342c: 0xaee01ac8  sw          $zero, 0x1AC8($s7)
    ctx->pc = 0x2b342cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 6856), GPR_U32(ctx, 0));
label_2b3430:
    // 0x2b3430: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b3430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b3434:
    // 0x2b3434: 0xaee31acc  sw          $v1, 0x1ACC($s7)
    ctx->pc = 0x2b3434u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 6860), GPR_U32(ctx, 3));
label_2b3438:
    // 0x2b3438: 0x240501c3  addiu       $a1, $zero, 0x1C3
    ctx->pc = 0x2b3438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 451));
label_2b343c:
    // 0x2b343c: 0xaee017f4  sw          $zero, 0x17F4($s7)
    ctx->pc = 0x2b343cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 6132), GPR_U32(ctx, 0));
label_2b3440:
    // 0x2b3440: 0xc0877e0  jal         func_21DF80
label_2b3444:
    if (ctx->pc == 0x2B3444u) {
        ctx->pc = 0x2B3444u;
            // 0x2b3444: 0xaee217e4  sw          $v0, 0x17E4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 6116), GPR_U32(ctx, 2));
        ctx->pc = 0x2B3448u;
        goto label_2b3448;
    }
    ctx->pc = 0x2B3440u;
    SET_GPR_U32(ctx, 31, 0x2B3448u);
    ctx->pc = 0x2B3444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3440u;
            // 0x2b3444: 0xaee217e4  sw          $v0, 0x17E4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 6116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3448u; }
        if (ctx->pc != 0x2B3448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3448u; }
        if (ctx->pc != 0x2B3448u) { return; }
    }
    ctx->pc = 0x2B3448u;
label_2b3448:
    // 0x2b3448: 0xae800138  sw          $zero, 0x138($s4)
    ctx->pc = 0x2b3448u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 0));
label_2b344c:
    // 0x2b344c: 0xae80013c  sw          $zero, 0x13C($s4)
    ctx->pc = 0x2b344cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 316), GPR_U32(ctx, 0));
label_2b3450:
    // 0x2b3450: 0x83829b9c  lb          $v0, -0x6464($gp)
    ctx->pc = 0x2b3450u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941596)));
label_2b3454:
    // 0x2b3454: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b3458:
    if (ctx->pc == 0x2B3458u) {
        ctx->pc = 0x2B3458u;
            // 0x2b3458: 0xa38093f8  sb          $zero, -0x6C08($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939640), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B345Cu;
        goto label_2b345c;
    }
    ctx->pc = 0x2B3454u;
    {
        const bool branch_taken_0x2b3454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3454u;
            // 0x2b3458: 0xa38093f8  sb          $zero, -0x6C08($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939640), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3454) {
            ctx->pc = 0x2B3464u;
            goto label_2b3464;
        }
    }
    ctx->pc = 0x2B345Cu;
label_2b345c:
    // 0x2b345c: 0xc088080  jal         func_220200
label_2b3460:
    if (ctx->pc == 0x2B3460u) {
        ctx->pc = 0x2B3460u;
            // 0x2b3460: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B3464u;
        goto label_2b3464;
    }
    ctx->pc = 0x2B345Cu;
    SET_GPR_U32(ctx, 31, 0x2B3464u);
    ctx->pc = 0x2B3460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B345Cu;
            // 0x2b3460: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220200u;
    if (runtime->hasFunction(0x220200u)) {
        auto targetFn = runtime->lookupFunction(0x220200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3464u; }
        if (ctx->pc != 0x2B3464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetModeMenuDrawItemBoard__Fi_0x220200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3464u; }
        if (ctx->pc != 0x2B3464u) { return; }
    }
    ctx->pc = 0x2B3464u;
label_2b3464:
    // 0x2b3464: 0x83839b9c  lb          $v1, -0x6464($gp)
    ctx->pc = 0x2b3464u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941596)));
label_2b3468:
    // 0x2b3468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b3468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b346c:
    // 0x2b346c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2b3470:
    if (ctx->pc == 0x2B3470u) {
        ctx->pc = 0x2B3470u;
            // 0x2b3470: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B3474u;
        goto label_2b3474;
    }
    ctx->pc = 0x2B346Cu;
    {
        const bool branch_taken_0x2b346c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B3470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B346Cu;
            // 0x2b3470: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b346c) {
            ctx->pc = 0x2B347Cu;
            goto label_2b347c;
        }
    }
    ctx->pc = 0x2B3474u;
label_2b3474:
    // 0x2b3474: 0xc088080  jal         func_220200
label_2b3478:
    if (ctx->pc == 0x2B3478u) {
        ctx->pc = 0x2B347Cu;
        goto label_2b347c;
    }
    ctx->pc = 0x2B3474u;
    SET_GPR_U32(ctx, 31, 0x2B347Cu);
    ctx->pc = 0x220200u;
    if (runtime->hasFunction(0x220200u)) {
        auto targetFn = runtime->lookupFunction(0x220200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B347Cu; }
        if (ctx->pc != 0x2B347Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetModeMenuDrawItemBoard__Fi_0x220200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B347Cu; }
        if (ctx->pc != 0x2B347Cu) { return; }
    }
    ctx->pc = 0x2B347Cu;
label_2b347c:
    // 0x2b347c: 0x83839b9c  lb          $v1, -0x6464($gp)
    ctx->pc = 0x2b347cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941596)));
label_2b3480:
    // 0x2b3480: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b3480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b3484:
    // 0x2b3484: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2b3488:
    if (ctx->pc == 0x2B3488u) {
        ctx->pc = 0x2B3488u;
            // 0x2b3488: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B348Cu;
        goto label_2b348c;
    }
    ctx->pc = 0x2B3484u;
    {
        const bool branch_taken_0x2b3484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B3488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3484u;
            // 0x2b3488: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3484) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B348Cu;
label_2b348c:
    // 0x2b348c: 0xc088080  jal         func_220200
label_2b3490:
    if (ctx->pc == 0x2B3490u) {
        ctx->pc = 0x2B3494u;
        goto label_2b3494;
    }
    ctx->pc = 0x2B348Cu;
    SET_GPR_U32(ctx, 31, 0x2B3494u);
    ctx->pc = 0x220200u;
    if (runtime->hasFunction(0x220200u)) {
        auto targetFn = runtime->lookupFunction(0x220200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3494u; }
        if (ctx->pc != 0x2B3494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetModeMenuDrawItemBoard__Fi_0x220200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3494u; }
        if (ctx->pc != 0x2B3494u) { return; }
    }
    ctx->pc = 0x2B3494u;
label_2b3494:
    // 0x2b3494: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b3494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3498:
    // 0x2b3498: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b3498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b349c:
    // 0x2b349c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2b349cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2b34a0:
    // 0x2b34a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2b34a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b34a4:
    // 0x2b34a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2b34a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b34a8:
    // 0x2b34a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b34a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b34ac:
    // 0x2b34ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b34acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b34b0:
    // 0x2b34b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b34b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b34b4:
    // 0x2b34b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b34b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b34b8:
    // 0x2b34b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b34b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b34bc:
    // 0x2b34bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b34bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b34c0:
    // 0x2b34c0: 0x3e00008  jr          $ra
label_2b34c4:
    if (ctx->pc == 0x2B34C4u) {
        ctx->pc = 0x2B34C4u;
            // 0x2b34c4: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x2B34C8u;
        goto label_fallthrough_0x2b34c0;
    }
    ctx->pc = 0x2B34C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B34C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B34C0u;
            // 0x2b34c4: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b34c0:
    ctx->pc = 0x2B34C8u;
}
