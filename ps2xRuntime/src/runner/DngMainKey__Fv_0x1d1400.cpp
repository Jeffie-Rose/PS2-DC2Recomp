#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DngMainKey__Fv
// Address: 0x1d1400 - 0x1d324c
void DngMainKey__Fv_0x1d1400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DngMainKey__Fv_0x1d1400");
#endif

    switch (ctx->pc) {
        case 0x1d1400u: goto label_1d1400;
        case 0x1d1404u: goto label_1d1404;
        case 0x1d1408u: goto label_1d1408;
        case 0x1d140cu: goto label_1d140c;
        case 0x1d1410u: goto label_1d1410;
        case 0x1d1414u: goto label_1d1414;
        case 0x1d1418u: goto label_1d1418;
        case 0x1d141cu: goto label_1d141c;
        case 0x1d1420u: goto label_1d1420;
        case 0x1d1424u: goto label_1d1424;
        case 0x1d1428u: goto label_1d1428;
        case 0x1d142cu: goto label_1d142c;
        case 0x1d1430u: goto label_1d1430;
        case 0x1d1434u: goto label_1d1434;
        case 0x1d1438u: goto label_1d1438;
        case 0x1d143cu: goto label_1d143c;
        case 0x1d1440u: goto label_1d1440;
        case 0x1d1444u: goto label_1d1444;
        case 0x1d1448u: goto label_1d1448;
        case 0x1d144cu: goto label_1d144c;
        case 0x1d1450u: goto label_1d1450;
        case 0x1d1454u: goto label_1d1454;
        case 0x1d1458u: goto label_1d1458;
        case 0x1d145cu: goto label_1d145c;
        case 0x1d1460u: goto label_1d1460;
        case 0x1d1464u: goto label_1d1464;
        case 0x1d1468u: goto label_1d1468;
        case 0x1d146cu: goto label_1d146c;
        case 0x1d1470u: goto label_1d1470;
        case 0x1d1474u: goto label_1d1474;
        case 0x1d1478u: goto label_1d1478;
        case 0x1d147cu: goto label_1d147c;
        case 0x1d1480u: goto label_1d1480;
        case 0x1d1484u: goto label_1d1484;
        case 0x1d1488u: goto label_1d1488;
        case 0x1d148cu: goto label_1d148c;
        case 0x1d1490u: goto label_1d1490;
        case 0x1d1494u: goto label_1d1494;
        case 0x1d1498u: goto label_1d1498;
        case 0x1d149cu: goto label_1d149c;
        case 0x1d14a0u: goto label_1d14a0;
        case 0x1d14a4u: goto label_1d14a4;
        case 0x1d14a8u: goto label_1d14a8;
        case 0x1d14acu: goto label_1d14ac;
        case 0x1d14b0u: goto label_1d14b0;
        case 0x1d14b4u: goto label_1d14b4;
        case 0x1d14b8u: goto label_1d14b8;
        case 0x1d14bcu: goto label_1d14bc;
        case 0x1d14c0u: goto label_1d14c0;
        case 0x1d14c4u: goto label_1d14c4;
        case 0x1d14c8u: goto label_1d14c8;
        case 0x1d14ccu: goto label_1d14cc;
        case 0x1d14d0u: goto label_1d14d0;
        case 0x1d14d4u: goto label_1d14d4;
        case 0x1d14d8u: goto label_1d14d8;
        case 0x1d14dcu: goto label_1d14dc;
        case 0x1d14e0u: goto label_1d14e0;
        case 0x1d14e4u: goto label_1d14e4;
        case 0x1d14e8u: goto label_1d14e8;
        case 0x1d14ecu: goto label_1d14ec;
        case 0x1d14f0u: goto label_1d14f0;
        case 0x1d14f4u: goto label_1d14f4;
        case 0x1d14f8u: goto label_1d14f8;
        case 0x1d14fcu: goto label_1d14fc;
        case 0x1d1500u: goto label_1d1500;
        case 0x1d1504u: goto label_1d1504;
        case 0x1d1508u: goto label_1d1508;
        case 0x1d150cu: goto label_1d150c;
        case 0x1d1510u: goto label_1d1510;
        case 0x1d1514u: goto label_1d1514;
        case 0x1d1518u: goto label_1d1518;
        case 0x1d151cu: goto label_1d151c;
        case 0x1d1520u: goto label_1d1520;
        case 0x1d1524u: goto label_1d1524;
        case 0x1d1528u: goto label_1d1528;
        case 0x1d152cu: goto label_1d152c;
        case 0x1d1530u: goto label_1d1530;
        case 0x1d1534u: goto label_1d1534;
        case 0x1d1538u: goto label_1d1538;
        case 0x1d153cu: goto label_1d153c;
        case 0x1d1540u: goto label_1d1540;
        case 0x1d1544u: goto label_1d1544;
        case 0x1d1548u: goto label_1d1548;
        case 0x1d154cu: goto label_1d154c;
        case 0x1d1550u: goto label_1d1550;
        case 0x1d1554u: goto label_1d1554;
        case 0x1d1558u: goto label_1d1558;
        case 0x1d155cu: goto label_1d155c;
        case 0x1d1560u: goto label_1d1560;
        case 0x1d1564u: goto label_1d1564;
        case 0x1d1568u: goto label_1d1568;
        case 0x1d156cu: goto label_1d156c;
        case 0x1d1570u: goto label_1d1570;
        case 0x1d1574u: goto label_1d1574;
        case 0x1d1578u: goto label_1d1578;
        case 0x1d157cu: goto label_1d157c;
        case 0x1d1580u: goto label_1d1580;
        case 0x1d1584u: goto label_1d1584;
        case 0x1d1588u: goto label_1d1588;
        case 0x1d158cu: goto label_1d158c;
        case 0x1d1590u: goto label_1d1590;
        case 0x1d1594u: goto label_1d1594;
        case 0x1d1598u: goto label_1d1598;
        case 0x1d159cu: goto label_1d159c;
        case 0x1d15a0u: goto label_1d15a0;
        case 0x1d15a4u: goto label_1d15a4;
        case 0x1d15a8u: goto label_1d15a8;
        case 0x1d15acu: goto label_1d15ac;
        case 0x1d15b0u: goto label_1d15b0;
        case 0x1d15b4u: goto label_1d15b4;
        case 0x1d15b8u: goto label_1d15b8;
        case 0x1d15bcu: goto label_1d15bc;
        case 0x1d15c0u: goto label_1d15c0;
        case 0x1d15c4u: goto label_1d15c4;
        case 0x1d15c8u: goto label_1d15c8;
        case 0x1d15ccu: goto label_1d15cc;
        case 0x1d15d0u: goto label_1d15d0;
        case 0x1d15d4u: goto label_1d15d4;
        case 0x1d15d8u: goto label_1d15d8;
        case 0x1d15dcu: goto label_1d15dc;
        case 0x1d15e0u: goto label_1d15e0;
        case 0x1d15e4u: goto label_1d15e4;
        case 0x1d15e8u: goto label_1d15e8;
        case 0x1d15ecu: goto label_1d15ec;
        case 0x1d15f0u: goto label_1d15f0;
        case 0x1d15f4u: goto label_1d15f4;
        case 0x1d15f8u: goto label_1d15f8;
        case 0x1d15fcu: goto label_1d15fc;
        case 0x1d1600u: goto label_1d1600;
        case 0x1d1604u: goto label_1d1604;
        case 0x1d1608u: goto label_1d1608;
        case 0x1d160cu: goto label_1d160c;
        case 0x1d1610u: goto label_1d1610;
        case 0x1d1614u: goto label_1d1614;
        case 0x1d1618u: goto label_1d1618;
        case 0x1d161cu: goto label_1d161c;
        case 0x1d1620u: goto label_1d1620;
        case 0x1d1624u: goto label_1d1624;
        case 0x1d1628u: goto label_1d1628;
        case 0x1d162cu: goto label_1d162c;
        case 0x1d1630u: goto label_1d1630;
        case 0x1d1634u: goto label_1d1634;
        case 0x1d1638u: goto label_1d1638;
        case 0x1d163cu: goto label_1d163c;
        case 0x1d1640u: goto label_1d1640;
        case 0x1d1644u: goto label_1d1644;
        case 0x1d1648u: goto label_1d1648;
        case 0x1d164cu: goto label_1d164c;
        case 0x1d1650u: goto label_1d1650;
        case 0x1d1654u: goto label_1d1654;
        case 0x1d1658u: goto label_1d1658;
        case 0x1d165cu: goto label_1d165c;
        case 0x1d1660u: goto label_1d1660;
        case 0x1d1664u: goto label_1d1664;
        case 0x1d1668u: goto label_1d1668;
        case 0x1d166cu: goto label_1d166c;
        case 0x1d1670u: goto label_1d1670;
        case 0x1d1674u: goto label_1d1674;
        case 0x1d1678u: goto label_1d1678;
        case 0x1d167cu: goto label_1d167c;
        case 0x1d1680u: goto label_1d1680;
        case 0x1d1684u: goto label_1d1684;
        case 0x1d1688u: goto label_1d1688;
        case 0x1d168cu: goto label_1d168c;
        case 0x1d1690u: goto label_1d1690;
        case 0x1d1694u: goto label_1d1694;
        case 0x1d1698u: goto label_1d1698;
        case 0x1d169cu: goto label_1d169c;
        case 0x1d16a0u: goto label_1d16a0;
        case 0x1d16a4u: goto label_1d16a4;
        case 0x1d16a8u: goto label_1d16a8;
        case 0x1d16acu: goto label_1d16ac;
        case 0x1d16b0u: goto label_1d16b0;
        case 0x1d16b4u: goto label_1d16b4;
        case 0x1d16b8u: goto label_1d16b8;
        case 0x1d16bcu: goto label_1d16bc;
        case 0x1d16c0u: goto label_1d16c0;
        case 0x1d16c4u: goto label_1d16c4;
        case 0x1d16c8u: goto label_1d16c8;
        case 0x1d16ccu: goto label_1d16cc;
        case 0x1d16d0u: goto label_1d16d0;
        case 0x1d16d4u: goto label_1d16d4;
        case 0x1d16d8u: goto label_1d16d8;
        case 0x1d16dcu: goto label_1d16dc;
        case 0x1d16e0u: goto label_1d16e0;
        case 0x1d16e4u: goto label_1d16e4;
        case 0x1d16e8u: goto label_1d16e8;
        case 0x1d16ecu: goto label_1d16ec;
        case 0x1d16f0u: goto label_1d16f0;
        case 0x1d16f4u: goto label_1d16f4;
        case 0x1d16f8u: goto label_1d16f8;
        case 0x1d16fcu: goto label_1d16fc;
        case 0x1d1700u: goto label_1d1700;
        case 0x1d1704u: goto label_1d1704;
        case 0x1d1708u: goto label_1d1708;
        case 0x1d170cu: goto label_1d170c;
        case 0x1d1710u: goto label_1d1710;
        case 0x1d1714u: goto label_1d1714;
        case 0x1d1718u: goto label_1d1718;
        case 0x1d171cu: goto label_1d171c;
        case 0x1d1720u: goto label_1d1720;
        case 0x1d1724u: goto label_1d1724;
        case 0x1d1728u: goto label_1d1728;
        case 0x1d172cu: goto label_1d172c;
        case 0x1d1730u: goto label_1d1730;
        case 0x1d1734u: goto label_1d1734;
        case 0x1d1738u: goto label_1d1738;
        case 0x1d173cu: goto label_1d173c;
        case 0x1d1740u: goto label_1d1740;
        case 0x1d1744u: goto label_1d1744;
        case 0x1d1748u: goto label_1d1748;
        case 0x1d174cu: goto label_1d174c;
        case 0x1d1750u: goto label_1d1750;
        case 0x1d1754u: goto label_1d1754;
        case 0x1d1758u: goto label_1d1758;
        case 0x1d175cu: goto label_1d175c;
        case 0x1d1760u: goto label_1d1760;
        case 0x1d1764u: goto label_1d1764;
        case 0x1d1768u: goto label_1d1768;
        case 0x1d176cu: goto label_1d176c;
        case 0x1d1770u: goto label_1d1770;
        case 0x1d1774u: goto label_1d1774;
        case 0x1d1778u: goto label_1d1778;
        case 0x1d177cu: goto label_1d177c;
        case 0x1d1780u: goto label_1d1780;
        case 0x1d1784u: goto label_1d1784;
        case 0x1d1788u: goto label_1d1788;
        case 0x1d178cu: goto label_1d178c;
        case 0x1d1790u: goto label_1d1790;
        case 0x1d1794u: goto label_1d1794;
        case 0x1d1798u: goto label_1d1798;
        case 0x1d179cu: goto label_1d179c;
        case 0x1d17a0u: goto label_1d17a0;
        case 0x1d17a4u: goto label_1d17a4;
        case 0x1d17a8u: goto label_1d17a8;
        case 0x1d17acu: goto label_1d17ac;
        case 0x1d17b0u: goto label_1d17b0;
        case 0x1d17b4u: goto label_1d17b4;
        case 0x1d17b8u: goto label_1d17b8;
        case 0x1d17bcu: goto label_1d17bc;
        case 0x1d17c0u: goto label_1d17c0;
        case 0x1d17c4u: goto label_1d17c4;
        case 0x1d17c8u: goto label_1d17c8;
        case 0x1d17ccu: goto label_1d17cc;
        case 0x1d17d0u: goto label_1d17d0;
        case 0x1d17d4u: goto label_1d17d4;
        case 0x1d17d8u: goto label_1d17d8;
        case 0x1d17dcu: goto label_1d17dc;
        case 0x1d17e0u: goto label_1d17e0;
        case 0x1d17e4u: goto label_1d17e4;
        case 0x1d17e8u: goto label_1d17e8;
        case 0x1d17ecu: goto label_1d17ec;
        case 0x1d17f0u: goto label_1d17f0;
        case 0x1d17f4u: goto label_1d17f4;
        case 0x1d17f8u: goto label_1d17f8;
        case 0x1d17fcu: goto label_1d17fc;
        case 0x1d1800u: goto label_1d1800;
        case 0x1d1804u: goto label_1d1804;
        case 0x1d1808u: goto label_1d1808;
        case 0x1d180cu: goto label_1d180c;
        case 0x1d1810u: goto label_1d1810;
        case 0x1d1814u: goto label_1d1814;
        case 0x1d1818u: goto label_1d1818;
        case 0x1d181cu: goto label_1d181c;
        case 0x1d1820u: goto label_1d1820;
        case 0x1d1824u: goto label_1d1824;
        case 0x1d1828u: goto label_1d1828;
        case 0x1d182cu: goto label_1d182c;
        case 0x1d1830u: goto label_1d1830;
        case 0x1d1834u: goto label_1d1834;
        case 0x1d1838u: goto label_1d1838;
        case 0x1d183cu: goto label_1d183c;
        case 0x1d1840u: goto label_1d1840;
        case 0x1d1844u: goto label_1d1844;
        case 0x1d1848u: goto label_1d1848;
        case 0x1d184cu: goto label_1d184c;
        case 0x1d1850u: goto label_1d1850;
        case 0x1d1854u: goto label_1d1854;
        case 0x1d1858u: goto label_1d1858;
        case 0x1d185cu: goto label_1d185c;
        case 0x1d1860u: goto label_1d1860;
        case 0x1d1864u: goto label_1d1864;
        case 0x1d1868u: goto label_1d1868;
        case 0x1d186cu: goto label_1d186c;
        case 0x1d1870u: goto label_1d1870;
        case 0x1d1874u: goto label_1d1874;
        case 0x1d1878u: goto label_1d1878;
        case 0x1d187cu: goto label_1d187c;
        case 0x1d1880u: goto label_1d1880;
        case 0x1d1884u: goto label_1d1884;
        case 0x1d1888u: goto label_1d1888;
        case 0x1d188cu: goto label_1d188c;
        case 0x1d1890u: goto label_1d1890;
        case 0x1d1894u: goto label_1d1894;
        case 0x1d1898u: goto label_1d1898;
        case 0x1d189cu: goto label_1d189c;
        case 0x1d18a0u: goto label_1d18a0;
        case 0x1d18a4u: goto label_1d18a4;
        case 0x1d18a8u: goto label_1d18a8;
        case 0x1d18acu: goto label_1d18ac;
        case 0x1d18b0u: goto label_1d18b0;
        case 0x1d18b4u: goto label_1d18b4;
        case 0x1d18b8u: goto label_1d18b8;
        case 0x1d18bcu: goto label_1d18bc;
        case 0x1d18c0u: goto label_1d18c0;
        case 0x1d18c4u: goto label_1d18c4;
        case 0x1d18c8u: goto label_1d18c8;
        case 0x1d18ccu: goto label_1d18cc;
        case 0x1d18d0u: goto label_1d18d0;
        case 0x1d18d4u: goto label_1d18d4;
        case 0x1d18d8u: goto label_1d18d8;
        case 0x1d18dcu: goto label_1d18dc;
        case 0x1d18e0u: goto label_1d18e0;
        case 0x1d18e4u: goto label_1d18e4;
        case 0x1d18e8u: goto label_1d18e8;
        case 0x1d18ecu: goto label_1d18ec;
        case 0x1d18f0u: goto label_1d18f0;
        case 0x1d18f4u: goto label_1d18f4;
        case 0x1d18f8u: goto label_1d18f8;
        case 0x1d18fcu: goto label_1d18fc;
        case 0x1d1900u: goto label_1d1900;
        case 0x1d1904u: goto label_1d1904;
        case 0x1d1908u: goto label_1d1908;
        case 0x1d190cu: goto label_1d190c;
        case 0x1d1910u: goto label_1d1910;
        case 0x1d1914u: goto label_1d1914;
        case 0x1d1918u: goto label_1d1918;
        case 0x1d191cu: goto label_1d191c;
        case 0x1d1920u: goto label_1d1920;
        case 0x1d1924u: goto label_1d1924;
        case 0x1d1928u: goto label_1d1928;
        case 0x1d192cu: goto label_1d192c;
        case 0x1d1930u: goto label_1d1930;
        case 0x1d1934u: goto label_1d1934;
        case 0x1d1938u: goto label_1d1938;
        case 0x1d193cu: goto label_1d193c;
        case 0x1d1940u: goto label_1d1940;
        case 0x1d1944u: goto label_1d1944;
        case 0x1d1948u: goto label_1d1948;
        case 0x1d194cu: goto label_1d194c;
        case 0x1d1950u: goto label_1d1950;
        case 0x1d1954u: goto label_1d1954;
        case 0x1d1958u: goto label_1d1958;
        case 0x1d195cu: goto label_1d195c;
        case 0x1d1960u: goto label_1d1960;
        case 0x1d1964u: goto label_1d1964;
        case 0x1d1968u: goto label_1d1968;
        case 0x1d196cu: goto label_1d196c;
        case 0x1d1970u: goto label_1d1970;
        case 0x1d1974u: goto label_1d1974;
        case 0x1d1978u: goto label_1d1978;
        case 0x1d197cu: goto label_1d197c;
        case 0x1d1980u: goto label_1d1980;
        case 0x1d1984u: goto label_1d1984;
        case 0x1d1988u: goto label_1d1988;
        case 0x1d198cu: goto label_1d198c;
        case 0x1d1990u: goto label_1d1990;
        case 0x1d1994u: goto label_1d1994;
        case 0x1d1998u: goto label_1d1998;
        case 0x1d199cu: goto label_1d199c;
        case 0x1d19a0u: goto label_1d19a0;
        case 0x1d19a4u: goto label_1d19a4;
        case 0x1d19a8u: goto label_1d19a8;
        case 0x1d19acu: goto label_1d19ac;
        case 0x1d19b0u: goto label_1d19b0;
        case 0x1d19b4u: goto label_1d19b4;
        case 0x1d19b8u: goto label_1d19b8;
        case 0x1d19bcu: goto label_1d19bc;
        case 0x1d19c0u: goto label_1d19c0;
        case 0x1d19c4u: goto label_1d19c4;
        case 0x1d19c8u: goto label_1d19c8;
        case 0x1d19ccu: goto label_1d19cc;
        case 0x1d19d0u: goto label_1d19d0;
        case 0x1d19d4u: goto label_1d19d4;
        case 0x1d19d8u: goto label_1d19d8;
        case 0x1d19dcu: goto label_1d19dc;
        case 0x1d19e0u: goto label_1d19e0;
        case 0x1d19e4u: goto label_1d19e4;
        case 0x1d19e8u: goto label_1d19e8;
        case 0x1d19ecu: goto label_1d19ec;
        case 0x1d19f0u: goto label_1d19f0;
        case 0x1d19f4u: goto label_1d19f4;
        case 0x1d19f8u: goto label_1d19f8;
        case 0x1d19fcu: goto label_1d19fc;
        case 0x1d1a00u: goto label_1d1a00;
        case 0x1d1a04u: goto label_1d1a04;
        case 0x1d1a08u: goto label_1d1a08;
        case 0x1d1a0cu: goto label_1d1a0c;
        case 0x1d1a10u: goto label_1d1a10;
        case 0x1d1a14u: goto label_1d1a14;
        case 0x1d1a18u: goto label_1d1a18;
        case 0x1d1a1cu: goto label_1d1a1c;
        case 0x1d1a20u: goto label_1d1a20;
        case 0x1d1a24u: goto label_1d1a24;
        case 0x1d1a28u: goto label_1d1a28;
        case 0x1d1a2cu: goto label_1d1a2c;
        case 0x1d1a30u: goto label_1d1a30;
        case 0x1d1a34u: goto label_1d1a34;
        case 0x1d1a38u: goto label_1d1a38;
        case 0x1d1a3cu: goto label_1d1a3c;
        case 0x1d1a40u: goto label_1d1a40;
        case 0x1d1a44u: goto label_1d1a44;
        case 0x1d1a48u: goto label_1d1a48;
        case 0x1d1a4cu: goto label_1d1a4c;
        case 0x1d1a50u: goto label_1d1a50;
        case 0x1d1a54u: goto label_1d1a54;
        case 0x1d1a58u: goto label_1d1a58;
        case 0x1d1a5cu: goto label_1d1a5c;
        case 0x1d1a60u: goto label_1d1a60;
        case 0x1d1a64u: goto label_1d1a64;
        case 0x1d1a68u: goto label_1d1a68;
        case 0x1d1a6cu: goto label_1d1a6c;
        case 0x1d1a70u: goto label_1d1a70;
        case 0x1d1a74u: goto label_1d1a74;
        case 0x1d1a78u: goto label_1d1a78;
        case 0x1d1a7cu: goto label_1d1a7c;
        case 0x1d1a80u: goto label_1d1a80;
        case 0x1d1a84u: goto label_1d1a84;
        case 0x1d1a88u: goto label_1d1a88;
        case 0x1d1a8cu: goto label_1d1a8c;
        case 0x1d1a90u: goto label_1d1a90;
        case 0x1d1a94u: goto label_1d1a94;
        case 0x1d1a98u: goto label_1d1a98;
        case 0x1d1a9cu: goto label_1d1a9c;
        case 0x1d1aa0u: goto label_1d1aa0;
        case 0x1d1aa4u: goto label_1d1aa4;
        case 0x1d1aa8u: goto label_1d1aa8;
        case 0x1d1aacu: goto label_1d1aac;
        case 0x1d1ab0u: goto label_1d1ab0;
        case 0x1d1ab4u: goto label_1d1ab4;
        case 0x1d1ab8u: goto label_1d1ab8;
        case 0x1d1abcu: goto label_1d1abc;
        case 0x1d1ac0u: goto label_1d1ac0;
        case 0x1d1ac4u: goto label_1d1ac4;
        case 0x1d1ac8u: goto label_1d1ac8;
        case 0x1d1accu: goto label_1d1acc;
        case 0x1d1ad0u: goto label_1d1ad0;
        case 0x1d1ad4u: goto label_1d1ad4;
        case 0x1d1ad8u: goto label_1d1ad8;
        case 0x1d1adcu: goto label_1d1adc;
        case 0x1d1ae0u: goto label_1d1ae0;
        case 0x1d1ae4u: goto label_1d1ae4;
        case 0x1d1ae8u: goto label_1d1ae8;
        case 0x1d1aecu: goto label_1d1aec;
        case 0x1d1af0u: goto label_1d1af0;
        case 0x1d1af4u: goto label_1d1af4;
        case 0x1d1af8u: goto label_1d1af8;
        case 0x1d1afcu: goto label_1d1afc;
        case 0x1d1b00u: goto label_1d1b00;
        case 0x1d1b04u: goto label_1d1b04;
        case 0x1d1b08u: goto label_1d1b08;
        case 0x1d1b0cu: goto label_1d1b0c;
        case 0x1d1b10u: goto label_1d1b10;
        case 0x1d1b14u: goto label_1d1b14;
        case 0x1d1b18u: goto label_1d1b18;
        case 0x1d1b1cu: goto label_1d1b1c;
        case 0x1d1b20u: goto label_1d1b20;
        case 0x1d1b24u: goto label_1d1b24;
        case 0x1d1b28u: goto label_1d1b28;
        case 0x1d1b2cu: goto label_1d1b2c;
        case 0x1d1b30u: goto label_1d1b30;
        case 0x1d1b34u: goto label_1d1b34;
        case 0x1d1b38u: goto label_1d1b38;
        case 0x1d1b3cu: goto label_1d1b3c;
        case 0x1d1b40u: goto label_1d1b40;
        case 0x1d1b44u: goto label_1d1b44;
        case 0x1d1b48u: goto label_1d1b48;
        case 0x1d1b4cu: goto label_1d1b4c;
        case 0x1d1b50u: goto label_1d1b50;
        case 0x1d1b54u: goto label_1d1b54;
        case 0x1d1b58u: goto label_1d1b58;
        case 0x1d1b5cu: goto label_1d1b5c;
        case 0x1d1b60u: goto label_1d1b60;
        case 0x1d1b64u: goto label_1d1b64;
        case 0x1d1b68u: goto label_1d1b68;
        case 0x1d1b6cu: goto label_1d1b6c;
        case 0x1d1b70u: goto label_1d1b70;
        case 0x1d1b74u: goto label_1d1b74;
        case 0x1d1b78u: goto label_1d1b78;
        case 0x1d1b7cu: goto label_1d1b7c;
        case 0x1d1b80u: goto label_1d1b80;
        case 0x1d1b84u: goto label_1d1b84;
        case 0x1d1b88u: goto label_1d1b88;
        case 0x1d1b8cu: goto label_1d1b8c;
        case 0x1d1b90u: goto label_1d1b90;
        case 0x1d1b94u: goto label_1d1b94;
        case 0x1d1b98u: goto label_1d1b98;
        case 0x1d1b9cu: goto label_1d1b9c;
        case 0x1d1ba0u: goto label_1d1ba0;
        case 0x1d1ba4u: goto label_1d1ba4;
        case 0x1d1ba8u: goto label_1d1ba8;
        case 0x1d1bacu: goto label_1d1bac;
        case 0x1d1bb0u: goto label_1d1bb0;
        case 0x1d1bb4u: goto label_1d1bb4;
        case 0x1d1bb8u: goto label_1d1bb8;
        case 0x1d1bbcu: goto label_1d1bbc;
        case 0x1d1bc0u: goto label_1d1bc0;
        case 0x1d1bc4u: goto label_1d1bc4;
        case 0x1d1bc8u: goto label_1d1bc8;
        case 0x1d1bccu: goto label_1d1bcc;
        case 0x1d1bd0u: goto label_1d1bd0;
        case 0x1d1bd4u: goto label_1d1bd4;
        case 0x1d1bd8u: goto label_1d1bd8;
        case 0x1d1bdcu: goto label_1d1bdc;
        case 0x1d1be0u: goto label_1d1be0;
        case 0x1d1be4u: goto label_1d1be4;
        case 0x1d1be8u: goto label_1d1be8;
        case 0x1d1becu: goto label_1d1bec;
        case 0x1d1bf0u: goto label_1d1bf0;
        case 0x1d1bf4u: goto label_1d1bf4;
        case 0x1d1bf8u: goto label_1d1bf8;
        case 0x1d1bfcu: goto label_1d1bfc;
        case 0x1d1c00u: goto label_1d1c00;
        case 0x1d1c04u: goto label_1d1c04;
        case 0x1d1c08u: goto label_1d1c08;
        case 0x1d1c0cu: goto label_1d1c0c;
        case 0x1d1c10u: goto label_1d1c10;
        case 0x1d1c14u: goto label_1d1c14;
        case 0x1d1c18u: goto label_1d1c18;
        case 0x1d1c1cu: goto label_1d1c1c;
        case 0x1d1c20u: goto label_1d1c20;
        case 0x1d1c24u: goto label_1d1c24;
        case 0x1d1c28u: goto label_1d1c28;
        case 0x1d1c2cu: goto label_1d1c2c;
        case 0x1d1c30u: goto label_1d1c30;
        case 0x1d1c34u: goto label_1d1c34;
        case 0x1d1c38u: goto label_1d1c38;
        case 0x1d1c3cu: goto label_1d1c3c;
        case 0x1d1c40u: goto label_1d1c40;
        case 0x1d1c44u: goto label_1d1c44;
        case 0x1d1c48u: goto label_1d1c48;
        case 0x1d1c4cu: goto label_1d1c4c;
        case 0x1d1c50u: goto label_1d1c50;
        case 0x1d1c54u: goto label_1d1c54;
        case 0x1d1c58u: goto label_1d1c58;
        case 0x1d1c5cu: goto label_1d1c5c;
        case 0x1d1c60u: goto label_1d1c60;
        case 0x1d1c64u: goto label_1d1c64;
        case 0x1d1c68u: goto label_1d1c68;
        case 0x1d1c6cu: goto label_1d1c6c;
        case 0x1d1c70u: goto label_1d1c70;
        case 0x1d1c74u: goto label_1d1c74;
        case 0x1d1c78u: goto label_1d1c78;
        case 0x1d1c7cu: goto label_1d1c7c;
        case 0x1d1c80u: goto label_1d1c80;
        case 0x1d1c84u: goto label_1d1c84;
        case 0x1d1c88u: goto label_1d1c88;
        case 0x1d1c8cu: goto label_1d1c8c;
        case 0x1d1c90u: goto label_1d1c90;
        case 0x1d1c94u: goto label_1d1c94;
        case 0x1d1c98u: goto label_1d1c98;
        case 0x1d1c9cu: goto label_1d1c9c;
        case 0x1d1ca0u: goto label_1d1ca0;
        case 0x1d1ca4u: goto label_1d1ca4;
        case 0x1d1ca8u: goto label_1d1ca8;
        case 0x1d1cacu: goto label_1d1cac;
        case 0x1d1cb0u: goto label_1d1cb0;
        case 0x1d1cb4u: goto label_1d1cb4;
        case 0x1d1cb8u: goto label_1d1cb8;
        case 0x1d1cbcu: goto label_1d1cbc;
        case 0x1d1cc0u: goto label_1d1cc0;
        case 0x1d1cc4u: goto label_1d1cc4;
        case 0x1d1cc8u: goto label_1d1cc8;
        case 0x1d1cccu: goto label_1d1ccc;
        case 0x1d1cd0u: goto label_1d1cd0;
        case 0x1d1cd4u: goto label_1d1cd4;
        case 0x1d1cd8u: goto label_1d1cd8;
        case 0x1d1cdcu: goto label_1d1cdc;
        case 0x1d1ce0u: goto label_1d1ce0;
        case 0x1d1ce4u: goto label_1d1ce4;
        case 0x1d1ce8u: goto label_1d1ce8;
        case 0x1d1cecu: goto label_1d1cec;
        case 0x1d1cf0u: goto label_1d1cf0;
        case 0x1d1cf4u: goto label_1d1cf4;
        case 0x1d1cf8u: goto label_1d1cf8;
        case 0x1d1cfcu: goto label_1d1cfc;
        case 0x1d1d00u: goto label_1d1d00;
        case 0x1d1d04u: goto label_1d1d04;
        case 0x1d1d08u: goto label_1d1d08;
        case 0x1d1d0cu: goto label_1d1d0c;
        case 0x1d1d10u: goto label_1d1d10;
        case 0x1d1d14u: goto label_1d1d14;
        case 0x1d1d18u: goto label_1d1d18;
        case 0x1d1d1cu: goto label_1d1d1c;
        case 0x1d1d20u: goto label_1d1d20;
        case 0x1d1d24u: goto label_1d1d24;
        case 0x1d1d28u: goto label_1d1d28;
        case 0x1d1d2cu: goto label_1d1d2c;
        case 0x1d1d30u: goto label_1d1d30;
        case 0x1d1d34u: goto label_1d1d34;
        case 0x1d1d38u: goto label_1d1d38;
        case 0x1d1d3cu: goto label_1d1d3c;
        case 0x1d1d40u: goto label_1d1d40;
        case 0x1d1d44u: goto label_1d1d44;
        case 0x1d1d48u: goto label_1d1d48;
        case 0x1d1d4cu: goto label_1d1d4c;
        case 0x1d1d50u: goto label_1d1d50;
        case 0x1d1d54u: goto label_1d1d54;
        case 0x1d1d58u: goto label_1d1d58;
        case 0x1d1d5cu: goto label_1d1d5c;
        case 0x1d1d60u: goto label_1d1d60;
        case 0x1d1d64u: goto label_1d1d64;
        case 0x1d1d68u: goto label_1d1d68;
        case 0x1d1d6cu: goto label_1d1d6c;
        case 0x1d1d70u: goto label_1d1d70;
        case 0x1d1d74u: goto label_1d1d74;
        case 0x1d1d78u: goto label_1d1d78;
        case 0x1d1d7cu: goto label_1d1d7c;
        case 0x1d1d80u: goto label_1d1d80;
        case 0x1d1d84u: goto label_1d1d84;
        case 0x1d1d88u: goto label_1d1d88;
        case 0x1d1d8cu: goto label_1d1d8c;
        case 0x1d1d90u: goto label_1d1d90;
        case 0x1d1d94u: goto label_1d1d94;
        case 0x1d1d98u: goto label_1d1d98;
        case 0x1d1d9cu: goto label_1d1d9c;
        case 0x1d1da0u: goto label_1d1da0;
        case 0x1d1da4u: goto label_1d1da4;
        case 0x1d1da8u: goto label_1d1da8;
        case 0x1d1dacu: goto label_1d1dac;
        case 0x1d1db0u: goto label_1d1db0;
        case 0x1d1db4u: goto label_1d1db4;
        case 0x1d1db8u: goto label_1d1db8;
        case 0x1d1dbcu: goto label_1d1dbc;
        case 0x1d1dc0u: goto label_1d1dc0;
        case 0x1d1dc4u: goto label_1d1dc4;
        case 0x1d1dc8u: goto label_1d1dc8;
        case 0x1d1dccu: goto label_1d1dcc;
        case 0x1d1dd0u: goto label_1d1dd0;
        case 0x1d1dd4u: goto label_1d1dd4;
        case 0x1d1dd8u: goto label_1d1dd8;
        case 0x1d1ddcu: goto label_1d1ddc;
        case 0x1d1de0u: goto label_1d1de0;
        case 0x1d1de4u: goto label_1d1de4;
        case 0x1d1de8u: goto label_1d1de8;
        case 0x1d1decu: goto label_1d1dec;
        case 0x1d1df0u: goto label_1d1df0;
        case 0x1d1df4u: goto label_1d1df4;
        case 0x1d1df8u: goto label_1d1df8;
        case 0x1d1dfcu: goto label_1d1dfc;
        case 0x1d1e00u: goto label_1d1e00;
        case 0x1d1e04u: goto label_1d1e04;
        case 0x1d1e08u: goto label_1d1e08;
        case 0x1d1e0cu: goto label_1d1e0c;
        case 0x1d1e10u: goto label_1d1e10;
        case 0x1d1e14u: goto label_1d1e14;
        case 0x1d1e18u: goto label_1d1e18;
        case 0x1d1e1cu: goto label_1d1e1c;
        case 0x1d1e20u: goto label_1d1e20;
        case 0x1d1e24u: goto label_1d1e24;
        case 0x1d1e28u: goto label_1d1e28;
        case 0x1d1e2cu: goto label_1d1e2c;
        case 0x1d1e30u: goto label_1d1e30;
        case 0x1d1e34u: goto label_1d1e34;
        case 0x1d1e38u: goto label_1d1e38;
        case 0x1d1e3cu: goto label_1d1e3c;
        case 0x1d1e40u: goto label_1d1e40;
        case 0x1d1e44u: goto label_1d1e44;
        case 0x1d1e48u: goto label_1d1e48;
        case 0x1d1e4cu: goto label_1d1e4c;
        case 0x1d1e50u: goto label_1d1e50;
        case 0x1d1e54u: goto label_1d1e54;
        case 0x1d1e58u: goto label_1d1e58;
        case 0x1d1e5cu: goto label_1d1e5c;
        case 0x1d1e60u: goto label_1d1e60;
        case 0x1d1e64u: goto label_1d1e64;
        case 0x1d1e68u: goto label_1d1e68;
        case 0x1d1e6cu: goto label_1d1e6c;
        case 0x1d1e70u: goto label_1d1e70;
        case 0x1d1e74u: goto label_1d1e74;
        case 0x1d1e78u: goto label_1d1e78;
        case 0x1d1e7cu: goto label_1d1e7c;
        case 0x1d1e80u: goto label_1d1e80;
        case 0x1d1e84u: goto label_1d1e84;
        case 0x1d1e88u: goto label_1d1e88;
        case 0x1d1e8cu: goto label_1d1e8c;
        case 0x1d1e90u: goto label_1d1e90;
        case 0x1d1e94u: goto label_1d1e94;
        case 0x1d1e98u: goto label_1d1e98;
        case 0x1d1e9cu: goto label_1d1e9c;
        case 0x1d1ea0u: goto label_1d1ea0;
        case 0x1d1ea4u: goto label_1d1ea4;
        case 0x1d1ea8u: goto label_1d1ea8;
        case 0x1d1eacu: goto label_1d1eac;
        case 0x1d1eb0u: goto label_1d1eb0;
        case 0x1d1eb4u: goto label_1d1eb4;
        case 0x1d1eb8u: goto label_1d1eb8;
        case 0x1d1ebcu: goto label_1d1ebc;
        case 0x1d1ec0u: goto label_1d1ec0;
        case 0x1d1ec4u: goto label_1d1ec4;
        case 0x1d1ec8u: goto label_1d1ec8;
        case 0x1d1eccu: goto label_1d1ecc;
        case 0x1d1ed0u: goto label_1d1ed0;
        case 0x1d1ed4u: goto label_1d1ed4;
        case 0x1d1ed8u: goto label_1d1ed8;
        case 0x1d1edcu: goto label_1d1edc;
        case 0x1d1ee0u: goto label_1d1ee0;
        case 0x1d1ee4u: goto label_1d1ee4;
        case 0x1d1ee8u: goto label_1d1ee8;
        case 0x1d1eecu: goto label_1d1eec;
        case 0x1d1ef0u: goto label_1d1ef0;
        case 0x1d1ef4u: goto label_1d1ef4;
        case 0x1d1ef8u: goto label_1d1ef8;
        case 0x1d1efcu: goto label_1d1efc;
        case 0x1d1f00u: goto label_1d1f00;
        case 0x1d1f04u: goto label_1d1f04;
        case 0x1d1f08u: goto label_1d1f08;
        case 0x1d1f0cu: goto label_1d1f0c;
        case 0x1d1f10u: goto label_1d1f10;
        case 0x1d1f14u: goto label_1d1f14;
        case 0x1d1f18u: goto label_1d1f18;
        case 0x1d1f1cu: goto label_1d1f1c;
        case 0x1d1f20u: goto label_1d1f20;
        case 0x1d1f24u: goto label_1d1f24;
        case 0x1d1f28u: goto label_1d1f28;
        case 0x1d1f2cu: goto label_1d1f2c;
        case 0x1d1f30u: goto label_1d1f30;
        case 0x1d1f34u: goto label_1d1f34;
        case 0x1d1f38u: goto label_1d1f38;
        case 0x1d1f3cu: goto label_1d1f3c;
        case 0x1d1f40u: goto label_1d1f40;
        case 0x1d1f44u: goto label_1d1f44;
        case 0x1d1f48u: goto label_1d1f48;
        case 0x1d1f4cu: goto label_1d1f4c;
        case 0x1d1f50u: goto label_1d1f50;
        case 0x1d1f54u: goto label_1d1f54;
        case 0x1d1f58u: goto label_1d1f58;
        case 0x1d1f5cu: goto label_1d1f5c;
        case 0x1d1f60u: goto label_1d1f60;
        case 0x1d1f64u: goto label_1d1f64;
        case 0x1d1f68u: goto label_1d1f68;
        case 0x1d1f6cu: goto label_1d1f6c;
        case 0x1d1f70u: goto label_1d1f70;
        case 0x1d1f74u: goto label_1d1f74;
        case 0x1d1f78u: goto label_1d1f78;
        case 0x1d1f7cu: goto label_1d1f7c;
        case 0x1d1f80u: goto label_1d1f80;
        case 0x1d1f84u: goto label_1d1f84;
        case 0x1d1f88u: goto label_1d1f88;
        case 0x1d1f8cu: goto label_1d1f8c;
        case 0x1d1f90u: goto label_1d1f90;
        case 0x1d1f94u: goto label_1d1f94;
        case 0x1d1f98u: goto label_1d1f98;
        case 0x1d1f9cu: goto label_1d1f9c;
        case 0x1d1fa0u: goto label_1d1fa0;
        case 0x1d1fa4u: goto label_1d1fa4;
        case 0x1d1fa8u: goto label_1d1fa8;
        case 0x1d1facu: goto label_1d1fac;
        case 0x1d1fb0u: goto label_1d1fb0;
        case 0x1d1fb4u: goto label_1d1fb4;
        case 0x1d1fb8u: goto label_1d1fb8;
        case 0x1d1fbcu: goto label_1d1fbc;
        case 0x1d1fc0u: goto label_1d1fc0;
        case 0x1d1fc4u: goto label_1d1fc4;
        case 0x1d1fc8u: goto label_1d1fc8;
        case 0x1d1fccu: goto label_1d1fcc;
        case 0x1d1fd0u: goto label_1d1fd0;
        case 0x1d1fd4u: goto label_1d1fd4;
        case 0x1d1fd8u: goto label_1d1fd8;
        case 0x1d1fdcu: goto label_1d1fdc;
        case 0x1d1fe0u: goto label_1d1fe0;
        case 0x1d1fe4u: goto label_1d1fe4;
        case 0x1d1fe8u: goto label_1d1fe8;
        case 0x1d1fecu: goto label_1d1fec;
        case 0x1d1ff0u: goto label_1d1ff0;
        case 0x1d1ff4u: goto label_1d1ff4;
        case 0x1d1ff8u: goto label_1d1ff8;
        case 0x1d1ffcu: goto label_1d1ffc;
        case 0x1d2000u: goto label_1d2000;
        case 0x1d2004u: goto label_1d2004;
        case 0x1d2008u: goto label_1d2008;
        case 0x1d200cu: goto label_1d200c;
        case 0x1d2010u: goto label_1d2010;
        case 0x1d2014u: goto label_1d2014;
        case 0x1d2018u: goto label_1d2018;
        case 0x1d201cu: goto label_1d201c;
        case 0x1d2020u: goto label_1d2020;
        case 0x1d2024u: goto label_1d2024;
        case 0x1d2028u: goto label_1d2028;
        case 0x1d202cu: goto label_1d202c;
        case 0x1d2030u: goto label_1d2030;
        case 0x1d2034u: goto label_1d2034;
        case 0x1d2038u: goto label_1d2038;
        case 0x1d203cu: goto label_1d203c;
        case 0x1d2040u: goto label_1d2040;
        case 0x1d2044u: goto label_1d2044;
        case 0x1d2048u: goto label_1d2048;
        case 0x1d204cu: goto label_1d204c;
        case 0x1d2050u: goto label_1d2050;
        case 0x1d2054u: goto label_1d2054;
        case 0x1d2058u: goto label_1d2058;
        case 0x1d205cu: goto label_1d205c;
        case 0x1d2060u: goto label_1d2060;
        case 0x1d2064u: goto label_1d2064;
        case 0x1d2068u: goto label_1d2068;
        case 0x1d206cu: goto label_1d206c;
        case 0x1d2070u: goto label_1d2070;
        case 0x1d2074u: goto label_1d2074;
        case 0x1d2078u: goto label_1d2078;
        case 0x1d207cu: goto label_1d207c;
        case 0x1d2080u: goto label_1d2080;
        case 0x1d2084u: goto label_1d2084;
        case 0x1d2088u: goto label_1d2088;
        case 0x1d208cu: goto label_1d208c;
        case 0x1d2090u: goto label_1d2090;
        case 0x1d2094u: goto label_1d2094;
        case 0x1d2098u: goto label_1d2098;
        case 0x1d209cu: goto label_1d209c;
        case 0x1d20a0u: goto label_1d20a0;
        case 0x1d20a4u: goto label_1d20a4;
        case 0x1d20a8u: goto label_1d20a8;
        case 0x1d20acu: goto label_1d20ac;
        case 0x1d20b0u: goto label_1d20b0;
        case 0x1d20b4u: goto label_1d20b4;
        case 0x1d20b8u: goto label_1d20b8;
        case 0x1d20bcu: goto label_1d20bc;
        case 0x1d20c0u: goto label_1d20c0;
        case 0x1d20c4u: goto label_1d20c4;
        case 0x1d20c8u: goto label_1d20c8;
        case 0x1d20ccu: goto label_1d20cc;
        case 0x1d20d0u: goto label_1d20d0;
        case 0x1d20d4u: goto label_1d20d4;
        case 0x1d20d8u: goto label_1d20d8;
        case 0x1d20dcu: goto label_1d20dc;
        case 0x1d20e0u: goto label_1d20e0;
        case 0x1d20e4u: goto label_1d20e4;
        case 0x1d20e8u: goto label_1d20e8;
        case 0x1d20ecu: goto label_1d20ec;
        case 0x1d20f0u: goto label_1d20f0;
        case 0x1d20f4u: goto label_1d20f4;
        case 0x1d20f8u: goto label_1d20f8;
        case 0x1d20fcu: goto label_1d20fc;
        case 0x1d2100u: goto label_1d2100;
        case 0x1d2104u: goto label_1d2104;
        case 0x1d2108u: goto label_1d2108;
        case 0x1d210cu: goto label_1d210c;
        case 0x1d2110u: goto label_1d2110;
        case 0x1d2114u: goto label_1d2114;
        case 0x1d2118u: goto label_1d2118;
        case 0x1d211cu: goto label_1d211c;
        case 0x1d2120u: goto label_1d2120;
        case 0x1d2124u: goto label_1d2124;
        case 0x1d2128u: goto label_1d2128;
        case 0x1d212cu: goto label_1d212c;
        case 0x1d2130u: goto label_1d2130;
        case 0x1d2134u: goto label_1d2134;
        case 0x1d2138u: goto label_1d2138;
        case 0x1d213cu: goto label_1d213c;
        case 0x1d2140u: goto label_1d2140;
        case 0x1d2144u: goto label_1d2144;
        case 0x1d2148u: goto label_1d2148;
        case 0x1d214cu: goto label_1d214c;
        case 0x1d2150u: goto label_1d2150;
        case 0x1d2154u: goto label_1d2154;
        case 0x1d2158u: goto label_1d2158;
        case 0x1d215cu: goto label_1d215c;
        case 0x1d2160u: goto label_1d2160;
        case 0x1d2164u: goto label_1d2164;
        case 0x1d2168u: goto label_1d2168;
        case 0x1d216cu: goto label_1d216c;
        case 0x1d2170u: goto label_1d2170;
        case 0x1d2174u: goto label_1d2174;
        case 0x1d2178u: goto label_1d2178;
        case 0x1d217cu: goto label_1d217c;
        case 0x1d2180u: goto label_1d2180;
        case 0x1d2184u: goto label_1d2184;
        case 0x1d2188u: goto label_1d2188;
        case 0x1d218cu: goto label_1d218c;
        case 0x1d2190u: goto label_1d2190;
        case 0x1d2194u: goto label_1d2194;
        case 0x1d2198u: goto label_1d2198;
        case 0x1d219cu: goto label_1d219c;
        case 0x1d21a0u: goto label_1d21a0;
        case 0x1d21a4u: goto label_1d21a4;
        case 0x1d21a8u: goto label_1d21a8;
        case 0x1d21acu: goto label_1d21ac;
        case 0x1d21b0u: goto label_1d21b0;
        case 0x1d21b4u: goto label_1d21b4;
        case 0x1d21b8u: goto label_1d21b8;
        case 0x1d21bcu: goto label_1d21bc;
        case 0x1d21c0u: goto label_1d21c0;
        case 0x1d21c4u: goto label_1d21c4;
        case 0x1d21c8u: goto label_1d21c8;
        case 0x1d21ccu: goto label_1d21cc;
        case 0x1d21d0u: goto label_1d21d0;
        case 0x1d21d4u: goto label_1d21d4;
        case 0x1d21d8u: goto label_1d21d8;
        case 0x1d21dcu: goto label_1d21dc;
        case 0x1d21e0u: goto label_1d21e0;
        case 0x1d21e4u: goto label_1d21e4;
        case 0x1d21e8u: goto label_1d21e8;
        case 0x1d21ecu: goto label_1d21ec;
        case 0x1d21f0u: goto label_1d21f0;
        case 0x1d21f4u: goto label_1d21f4;
        case 0x1d21f8u: goto label_1d21f8;
        case 0x1d21fcu: goto label_1d21fc;
        case 0x1d2200u: goto label_1d2200;
        case 0x1d2204u: goto label_1d2204;
        case 0x1d2208u: goto label_1d2208;
        case 0x1d220cu: goto label_1d220c;
        case 0x1d2210u: goto label_1d2210;
        case 0x1d2214u: goto label_1d2214;
        case 0x1d2218u: goto label_1d2218;
        case 0x1d221cu: goto label_1d221c;
        case 0x1d2220u: goto label_1d2220;
        case 0x1d2224u: goto label_1d2224;
        case 0x1d2228u: goto label_1d2228;
        case 0x1d222cu: goto label_1d222c;
        case 0x1d2230u: goto label_1d2230;
        case 0x1d2234u: goto label_1d2234;
        case 0x1d2238u: goto label_1d2238;
        case 0x1d223cu: goto label_1d223c;
        case 0x1d2240u: goto label_1d2240;
        case 0x1d2244u: goto label_1d2244;
        case 0x1d2248u: goto label_1d2248;
        case 0x1d224cu: goto label_1d224c;
        case 0x1d2250u: goto label_1d2250;
        case 0x1d2254u: goto label_1d2254;
        case 0x1d2258u: goto label_1d2258;
        case 0x1d225cu: goto label_1d225c;
        case 0x1d2260u: goto label_1d2260;
        case 0x1d2264u: goto label_1d2264;
        case 0x1d2268u: goto label_1d2268;
        case 0x1d226cu: goto label_1d226c;
        case 0x1d2270u: goto label_1d2270;
        case 0x1d2274u: goto label_1d2274;
        case 0x1d2278u: goto label_1d2278;
        case 0x1d227cu: goto label_1d227c;
        case 0x1d2280u: goto label_1d2280;
        case 0x1d2284u: goto label_1d2284;
        case 0x1d2288u: goto label_1d2288;
        case 0x1d228cu: goto label_1d228c;
        case 0x1d2290u: goto label_1d2290;
        case 0x1d2294u: goto label_1d2294;
        case 0x1d2298u: goto label_1d2298;
        case 0x1d229cu: goto label_1d229c;
        case 0x1d22a0u: goto label_1d22a0;
        case 0x1d22a4u: goto label_1d22a4;
        case 0x1d22a8u: goto label_1d22a8;
        case 0x1d22acu: goto label_1d22ac;
        case 0x1d22b0u: goto label_1d22b0;
        case 0x1d22b4u: goto label_1d22b4;
        case 0x1d22b8u: goto label_1d22b8;
        case 0x1d22bcu: goto label_1d22bc;
        case 0x1d22c0u: goto label_1d22c0;
        case 0x1d22c4u: goto label_1d22c4;
        case 0x1d22c8u: goto label_1d22c8;
        case 0x1d22ccu: goto label_1d22cc;
        case 0x1d22d0u: goto label_1d22d0;
        case 0x1d22d4u: goto label_1d22d4;
        case 0x1d22d8u: goto label_1d22d8;
        case 0x1d22dcu: goto label_1d22dc;
        case 0x1d22e0u: goto label_1d22e0;
        case 0x1d22e4u: goto label_1d22e4;
        case 0x1d22e8u: goto label_1d22e8;
        case 0x1d22ecu: goto label_1d22ec;
        case 0x1d22f0u: goto label_1d22f0;
        case 0x1d22f4u: goto label_1d22f4;
        case 0x1d22f8u: goto label_1d22f8;
        case 0x1d22fcu: goto label_1d22fc;
        case 0x1d2300u: goto label_1d2300;
        case 0x1d2304u: goto label_1d2304;
        case 0x1d2308u: goto label_1d2308;
        case 0x1d230cu: goto label_1d230c;
        case 0x1d2310u: goto label_1d2310;
        case 0x1d2314u: goto label_1d2314;
        case 0x1d2318u: goto label_1d2318;
        case 0x1d231cu: goto label_1d231c;
        case 0x1d2320u: goto label_1d2320;
        case 0x1d2324u: goto label_1d2324;
        case 0x1d2328u: goto label_1d2328;
        case 0x1d232cu: goto label_1d232c;
        case 0x1d2330u: goto label_1d2330;
        case 0x1d2334u: goto label_1d2334;
        case 0x1d2338u: goto label_1d2338;
        case 0x1d233cu: goto label_1d233c;
        case 0x1d2340u: goto label_1d2340;
        case 0x1d2344u: goto label_1d2344;
        case 0x1d2348u: goto label_1d2348;
        case 0x1d234cu: goto label_1d234c;
        case 0x1d2350u: goto label_1d2350;
        case 0x1d2354u: goto label_1d2354;
        case 0x1d2358u: goto label_1d2358;
        case 0x1d235cu: goto label_1d235c;
        case 0x1d2360u: goto label_1d2360;
        case 0x1d2364u: goto label_1d2364;
        case 0x1d2368u: goto label_1d2368;
        case 0x1d236cu: goto label_1d236c;
        case 0x1d2370u: goto label_1d2370;
        case 0x1d2374u: goto label_1d2374;
        case 0x1d2378u: goto label_1d2378;
        case 0x1d237cu: goto label_1d237c;
        case 0x1d2380u: goto label_1d2380;
        case 0x1d2384u: goto label_1d2384;
        case 0x1d2388u: goto label_1d2388;
        case 0x1d238cu: goto label_1d238c;
        case 0x1d2390u: goto label_1d2390;
        case 0x1d2394u: goto label_1d2394;
        case 0x1d2398u: goto label_1d2398;
        case 0x1d239cu: goto label_1d239c;
        case 0x1d23a0u: goto label_1d23a0;
        case 0x1d23a4u: goto label_1d23a4;
        case 0x1d23a8u: goto label_1d23a8;
        case 0x1d23acu: goto label_1d23ac;
        case 0x1d23b0u: goto label_1d23b0;
        case 0x1d23b4u: goto label_1d23b4;
        case 0x1d23b8u: goto label_1d23b8;
        case 0x1d23bcu: goto label_1d23bc;
        case 0x1d23c0u: goto label_1d23c0;
        case 0x1d23c4u: goto label_1d23c4;
        case 0x1d23c8u: goto label_1d23c8;
        case 0x1d23ccu: goto label_1d23cc;
        case 0x1d23d0u: goto label_1d23d0;
        case 0x1d23d4u: goto label_1d23d4;
        case 0x1d23d8u: goto label_1d23d8;
        case 0x1d23dcu: goto label_1d23dc;
        case 0x1d23e0u: goto label_1d23e0;
        case 0x1d23e4u: goto label_1d23e4;
        case 0x1d23e8u: goto label_1d23e8;
        case 0x1d23ecu: goto label_1d23ec;
        case 0x1d23f0u: goto label_1d23f0;
        case 0x1d23f4u: goto label_1d23f4;
        case 0x1d23f8u: goto label_1d23f8;
        case 0x1d23fcu: goto label_1d23fc;
        case 0x1d2400u: goto label_1d2400;
        case 0x1d2404u: goto label_1d2404;
        case 0x1d2408u: goto label_1d2408;
        case 0x1d240cu: goto label_1d240c;
        case 0x1d2410u: goto label_1d2410;
        case 0x1d2414u: goto label_1d2414;
        case 0x1d2418u: goto label_1d2418;
        case 0x1d241cu: goto label_1d241c;
        case 0x1d2420u: goto label_1d2420;
        case 0x1d2424u: goto label_1d2424;
        case 0x1d2428u: goto label_1d2428;
        case 0x1d242cu: goto label_1d242c;
        case 0x1d2430u: goto label_1d2430;
        case 0x1d2434u: goto label_1d2434;
        case 0x1d2438u: goto label_1d2438;
        case 0x1d243cu: goto label_1d243c;
        case 0x1d2440u: goto label_1d2440;
        case 0x1d2444u: goto label_1d2444;
        case 0x1d2448u: goto label_1d2448;
        case 0x1d244cu: goto label_1d244c;
        case 0x1d2450u: goto label_1d2450;
        case 0x1d2454u: goto label_1d2454;
        case 0x1d2458u: goto label_1d2458;
        case 0x1d245cu: goto label_1d245c;
        case 0x1d2460u: goto label_1d2460;
        case 0x1d2464u: goto label_1d2464;
        case 0x1d2468u: goto label_1d2468;
        case 0x1d246cu: goto label_1d246c;
        case 0x1d2470u: goto label_1d2470;
        case 0x1d2474u: goto label_1d2474;
        case 0x1d2478u: goto label_1d2478;
        case 0x1d247cu: goto label_1d247c;
        case 0x1d2480u: goto label_1d2480;
        case 0x1d2484u: goto label_1d2484;
        case 0x1d2488u: goto label_1d2488;
        case 0x1d248cu: goto label_1d248c;
        case 0x1d2490u: goto label_1d2490;
        case 0x1d2494u: goto label_1d2494;
        case 0x1d2498u: goto label_1d2498;
        case 0x1d249cu: goto label_1d249c;
        case 0x1d24a0u: goto label_1d24a0;
        case 0x1d24a4u: goto label_1d24a4;
        case 0x1d24a8u: goto label_1d24a8;
        case 0x1d24acu: goto label_1d24ac;
        case 0x1d24b0u: goto label_1d24b0;
        case 0x1d24b4u: goto label_1d24b4;
        case 0x1d24b8u: goto label_1d24b8;
        case 0x1d24bcu: goto label_1d24bc;
        case 0x1d24c0u: goto label_1d24c0;
        case 0x1d24c4u: goto label_1d24c4;
        case 0x1d24c8u: goto label_1d24c8;
        case 0x1d24ccu: goto label_1d24cc;
        case 0x1d24d0u: goto label_1d24d0;
        case 0x1d24d4u: goto label_1d24d4;
        case 0x1d24d8u: goto label_1d24d8;
        case 0x1d24dcu: goto label_1d24dc;
        case 0x1d24e0u: goto label_1d24e0;
        case 0x1d24e4u: goto label_1d24e4;
        case 0x1d24e8u: goto label_1d24e8;
        case 0x1d24ecu: goto label_1d24ec;
        case 0x1d24f0u: goto label_1d24f0;
        case 0x1d24f4u: goto label_1d24f4;
        case 0x1d24f8u: goto label_1d24f8;
        case 0x1d24fcu: goto label_1d24fc;
        case 0x1d2500u: goto label_1d2500;
        case 0x1d2504u: goto label_1d2504;
        case 0x1d2508u: goto label_1d2508;
        case 0x1d250cu: goto label_1d250c;
        case 0x1d2510u: goto label_1d2510;
        case 0x1d2514u: goto label_1d2514;
        case 0x1d2518u: goto label_1d2518;
        case 0x1d251cu: goto label_1d251c;
        case 0x1d2520u: goto label_1d2520;
        case 0x1d2524u: goto label_1d2524;
        case 0x1d2528u: goto label_1d2528;
        case 0x1d252cu: goto label_1d252c;
        case 0x1d2530u: goto label_1d2530;
        case 0x1d2534u: goto label_1d2534;
        case 0x1d2538u: goto label_1d2538;
        case 0x1d253cu: goto label_1d253c;
        case 0x1d2540u: goto label_1d2540;
        case 0x1d2544u: goto label_1d2544;
        case 0x1d2548u: goto label_1d2548;
        case 0x1d254cu: goto label_1d254c;
        case 0x1d2550u: goto label_1d2550;
        case 0x1d2554u: goto label_1d2554;
        case 0x1d2558u: goto label_1d2558;
        case 0x1d255cu: goto label_1d255c;
        case 0x1d2560u: goto label_1d2560;
        case 0x1d2564u: goto label_1d2564;
        case 0x1d2568u: goto label_1d2568;
        case 0x1d256cu: goto label_1d256c;
        case 0x1d2570u: goto label_1d2570;
        case 0x1d2574u: goto label_1d2574;
        case 0x1d2578u: goto label_1d2578;
        case 0x1d257cu: goto label_1d257c;
        case 0x1d2580u: goto label_1d2580;
        case 0x1d2584u: goto label_1d2584;
        case 0x1d2588u: goto label_1d2588;
        case 0x1d258cu: goto label_1d258c;
        case 0x1d2590u: goto label_1d2590;
        case 0x1d2594u: goto label_1d2594;
        case 0x1d2598u: goto label_1d2598;
        case 0x1d259cu: goto label_1d259c;
        case 0x1d25a0u: goto label_1d25a0;
        case 0x1d25a4u: goto label_1d25a4;
        case 0x1d25a8u: goto label_1d25a8;
        case 0x1d25acu: goto label_1d25ac;
        case 0x1d25b0u: goto label_1d25b0;
        case 0x1d25b4u: goto label_1d25b4;
        case 0x1d25b8u: goto label_1d25b8;
        case 0x1d25bcu: goto label_1d25bc;
        case 0x1d25c0u: goto label_1d25c0;
        case 0x1d25c4u: goto label_1d25c4;
        case 0x1d25c8u: goto label_1d25c8;
        case 0x1d25ccu: goto label_1d25cc;
        case 0x1d25d0u: goto label_1d25d0;
        case 0x1d25d4u: goto label_1d25d4;
        case 0x1d25d8u: goto label_1d25d8;
        case 0x1d25dcu: goto label_1d25dc;
        case 0x1d25e0u: goto label_1d25e0;
        case 0x1d25e4u: goto label_1d25e4;
        case 0x1d25e8u: goto label_1d25e8;
        case 0x1d25ecu: goto label_1d25ec;
        case 0x1d25f0u: goto label_1d25f0;
        case 0x1d25f4u: goto label_1d25f4;
        case 0x1d25f8u: goto label_1d25f8;
        case 0x1d25fcu: goto label_1d25fc;
        case 0x1d2600u: goto label_1d2600;
        case 0x1d2604u: goto label_1d2604;
        case 0x1d2608u: goto label_1d2608;
        case 0x1d260cu: goto label_1d260c;
        case 0x1d2610u: goto label_1d2610;
        case 0x1d2614u: goto label_1d2614;
        case 0x1d2618u: goto label_1d2618;
        case 0x1d261cu: goto label_1d261c;
        case 0x1d2620u: goto label_1d2620;
        case 0x1d2624u: goto label_1d2624;
        case 0x1d2628u: goto label_1d2628;
        case 0x1d262cu: goto label_1d262c;
        case 0x1d2630u: goto label_1d2630;
        case 0x1d2634u: goto label_1d2634;
        case 0x1d2638u: goto label_1d2638;
        case 0x1d263cu: goto label_1d263c;
        case 0x1d2640u: goto label_1d2640;
        case 0x1d2644u: goto label_1d2644;
        case 0x1d2648u: goto label_1d2648;
        case 0x1d264cu: goto label_1d264c;
        case 0x1d2650u: goto label_1d2650;
        case 0x1d2654u: goto label_1d2654;
        case 0x1d2658u: goto label_1d2658;
        case 0x1d265cu: goto label_1d265c;
        case 0x1d2660u: goto label_1d2660;
        case 0x1d2664u: goto label_1d2664;
        case 0x1d2668u: goto label_1d2668;
        case 0x1d266cu: goto label_1d266c;
        case 0x1d2670u: goto label_1d2670;
        case 0x1d2674u: goto label_1d2674;
        case 0x1d2678u: goto label_1d2678;
        case 0x1d267cu: goto label_1d267c;
        case 0x1d2680u: goto label_1d2680;
        case 0x1d2684u: goto label_1d2684;
        case 0x1d2688u: goto label_1d2688;
        case 0x1d268cu: goto label_1d268c;
        case 0x1d2690u: goto label_1d2690;
        case 0x1d2694u: goto label_1d2694;
        case 0x1d2698u: goto label_1d2698;
        case 0x1d269cu: goto label_1d269c;
        case 0x1d26a0u: goto label_1d26a0;
        case 0x1d26a4u: goto label_1d26a4;
        case 0x1d26a8u: goto label_1d26a8;
        case 0x1d26acu: goto label_1d26ac;
        case 0x1d26b0u: goto label_1d26b0;
        case 0x1d26b4u: goto label_1d26b4;
        case 0x1d26b8u: goto label_1d26b8;
        case 0x1d26bcu: goto label_1d26bc;
        case 0x1d26c0u: goto label_1d26c0;
        case 0x1d26c4u: goto label_1d26c4;
        case 0x1d26c8u: goto label_1d26c8;
        case 0x1d26ccu: goto label_1d26cc;
        case 0x1d26d0u: goto label_1d26d0;
        case 0x1d26d4u: goto label_1d26d4;
        case 0x1d26d8u: goto label_1d26d8;
        case 0x1d26dcu: goto label_1d26dc;
        case 0x1d26e0u: goto label_1d26e0;
        case 0x1d26e4u: goto label_1d26e4;
        case 0x1d26e8u: goto label_1d26e8;
        case 0x1d26ecu: goto label_1d26ec;
        case 0x1d26f0u: goto label_1d26f0;
        case 0x1d26f4u: goto label_1d26f4;
        case 0x1d26f8u: goto label_1d26f8;
        case 0x1d26fcu: goto label_1d26fc;
        case 0x1d2700u: goto label_1d2700;
        case 0x1d2704u: goto label_1d2704;
        case 0x1d2708u: goto label_1d2708;
        case 0x1d270cu: goto label_1d270c;
        case 0x1d2710u: goto label_1d2710;
        case 0x1d2714u: goto label_1d2714;
        case 0x1d2718u: goto label_1d2718;
        case 0x1d271cu: goto label_1d271c;
        case 0x1d2720u: goto label_1d2720;
        case 0x1d2724u: goto label_1d2724;
        case 0x1d2728u: goto label_1d2728;
        case 0x1d272cu: goto label_1d272c;
        case 0x1d2730u: goto label_1d2730;
        case 0x1d2734u: goto label_1d2734;
        case 0x1d2738u: goto label_1d2738;
        case 0x1d273cu: goto label_1d273c;
        case 0x1d2740u: goto label_1d2740;
        case 0x1d2744u: goto label_1d2744;
        case 0x1d2748u: goto label_1d2748;
        case 0x1d274cu: goto label_1d274c;
        case 0x1d2750u: goto label_1d2750;
        case 0x1d2754u: goto label_1d2754;
        case 0x1d2758u: goto label_1d2758;
        case 0x1d275cu: goto label_1d275c;
        case 0x1d2760u: goto label_1d2760;
        case 0x1d2764u: goto label_1d2764;
        case 0x1d2768u: goto label_1d2768;
        case 0x1d276cu: goto label_1d276c;
        case 0x1d2770u: goto label_1d2770;
        case 0x1d2774u: goto label_1d2774;
        case 0x1d2778u: goto label_1d2778;
        case 0x1d277cu: goto label_1d277c;
        case 0x1d2780u: goto label_1d2780;
        case 0x1d2784u: goto label_1d2784;
        case 0x1d2788u: goto label_1d2788;
        case 0x1d278cu: goto label_1d278c;
        case 0x1d2790u: goto label_1d2790;
        case 0x1d2794u: goto label_1d2794;
        case 0x1d2798u: goto label_1d2798;
        case 0x1d279cu: goto label_1d279c;
        case 0x1d27a0u: goto label_1d27a0;
        case 0x1d27a4u: goto label_1d27a4;
        case 0x1d27a8u: goto label_1d27a8;
        case 0x1d27acu: goto label_1d27ac;
        case 0x1d27b0u: goto label_1d27b0;
        case 0x1d27b4u: goto label_1d27b4;
        case 0x1d27b8u: goto label_1d27b8;
        case 0x1d27bcu: goto label_1d27bc;
        case 0x1d27c0u: goto label_1d27c0;
        case 0x1d27c4u: goto label_1d27c4;
        case 0x1d27c8u: goto label_1d27c8;
        case 0x1d27ccu: goto label_1d27cc;
        case 0x1d27d0u: goto label_1d27d0;
        case 0x1d27d4u: goto label_1d27d4;
        case 0x1d27d8u: goto label_1d27d8;
        case 0x1d27dcu: goto label_1d27dc;
        case 0x1d27e0u: goto label_1d27e0;
        case 0x1d27e4u: goto label_1d27e4;
        case 0x1d27e8u: goto label_1d27e8;
        case 0x1d27ecu: goto label_1d27ec;
        case 0x1d27f0u: goto label_1d27f0;
        case 0x1d27f4u: goto label_1d27f4;
        case 0x1d27f8u: goto label_1d27f8;
        case 0x1d27fcu: goto label_1d27fc;
        case 0x1d2800u: goto label_1d2800;
        case 0x1d2804u: goto label_1d2804;
        case 0x1d2808u: goto label_1d2808;
        case 0x1d280cu: goto label_1d280c;
        case 0x1d2810u: goto label_1d2810;
        case 0x1d2814u: goto label_1d2814;
        case 0x1d2818u: goto label_1d2818;
        case 0x1d281cu: goto label_1d281c;
        case 0x1d2820u: goto label_1d2820;
        case 0x1d2824u: goto label_1d2824;
        case 0x1d2828u: goto label_1d2828;
        case 0x1d282cu: goto label_1d282c;
        case 0x1d2830u: goto label_1d2830;
        case 0x1d2834u: goto label_1d2834;
        case 0x1d2838u: goto label_1d2838;
        case 0x1d283cu: goto label_1d283c;
        case 0x1d2840u: goto label_1d2840;
        case 0x1d2844u: goto label_1d2844;
        case 0x1d2848u: goto label_1d2848;
        case 0x1d284cu: goto label_1d284c;
        case 0x1d2850u: goto label_1d2850;
        case 0x1d2854u: goto label_1d2854;
        case 0x1d2858u: goto label_1d2858;
        case 0x1d285cu: goto label_1d285c;
        case 0x1d2860u: goto label_1d2860;
        case 0x1d2864u: goto label_1d2864;
        case 0x1d2868u: goto label_1d2868;
        case 0x1d286cu: goto label_1d286c;
        case 0x1d2870u: goto label_1d2870;
        case 0x1d2874u: goto label_1d2874;
        case 0x1d2878u: goto label_1d2878;
        case 0x1d287cu: goto label_1d287c;
        case 0x1d2880u: goto label_1d2880;
        case 0x1d2884u: goto label_1d2884;
        case 0x1d2888u: goto label_1d2888;
        case 0x1d288cu: goto label_1d288c;
        case 0x1d2890u: goto label_1d2890;
        case 0x1d2894u: goto label_1d2894;
        case 0x1d2898u: goto label_1d2898;
        case 0x1d289cu: goto label_1d289c;
        case 0x1d28a0u: goto label_1d28a0;
        case 0x1d28a4u: goto label_1d28a4;
        case 0x1d28a8u: goto label_1d28a8;
        case 0x1d28acu: goto label_1d28ac;
        case 0x1d28b0u: goto label_1d28b0;
        case 0x1d28b4u: goto label_1d28b4;
        case 0x1d28b8u: goto label_1d28b8;
        case 0x1d28bcu: goto label_1d28bc;
        case 0x1d28c0u: goto label_1d28c0;
        case 0x1d28c4u: goto label_1d28c4;
        case 0x1d28c8u: goto label_1d28c8;
        case 0x1d28ccu: goto label_1d28cc;
        case 0x1d28d0u: goto label_1d28d0;
        case 0x1d28d4u: goto label_1d28d4;
        case 0x1d28d8u: goto label_1d28d8;
        case 0x1d28dcu: goto label_1d28dc;
        case 0x1d28e0u: goto label_1d28e0;
        case 0x1d28e4u: goto label_1d28e4;
        case 0x1d28e8u: goto label_1d28e8;
        case 0x1d28ecu: goto label_1d28ec;
        case 0x1d28f0u: goto label_1d28f0;
        case 0x1d28f4u: goto label_1d28f4;
        case 0x1d28f8u: goto label_1d28f8;
        case 0x1d28fcu: goto label_1d28fc;
        case 0x1d2900u: goto label_1d2900;
        case 0x1d2904u: goto label_1d2904;
        case 0x1d2908u: goto label_1d2908;
        case 0x1d290cu: goto label_1d290c;
        case 0x1d2910u: goto label_1d2910;
        case 0x1d2914u: goto label_1d2914;
        case 0x1d2918u: goto label_1d2918;
        case 0x1d291cu: goto label_1d291c;
        case 0x1d2920u: goto label_1d2920;
        case 0x1d2924u: goto label_1d2924;
        case 0x1d2928u: goto label_1d2928;
        case 0x1d292cu: goto label_1d292c;
        case 0x1d2930u: goto label_1d2930;
        case 0x1d2934u: goto label_1d2934;
        case 0x1d2938u: goto label_1d2938;
        case 0x1d293cu: goto label_1d293c;
        case 0x1d2940u: goto label_1d2940;
        case 0x1d2944u: goto label_1d2944;
        case 0x1d2948u: goto label_1d2948;
        case 0x1d294cu: goto label_1d294c;
        case 0x1d2950u: goto label_1d2950;
        case 0x1d2954u: goto label_1d2954;
        case 0x1d2958u: goto label_1d2958;
        case 0x1d295cu: goto label_1d295c;
        case 0x1d2960u: goto label_1d2960;
        case 0x1d2964u: goto label_1d2964;
        case 0x1d2968u: goto label_1d2968;
        case 0x1d296cu: goto label_1d296c;
        case 0x1d2970u: goto label_1d2970;
        case 0x1d2974u: goto label_1d2974;
        case 0x1d2978u: goto label_1d2978;
        case 0x1d297cu: goto label_1d297c;
        case 0x1d2980u: goto label_1d2980;
        case 0x1d2984u: goto label_1d2984;
        case 0x1d2988u: goto label_1d2988;
        case 0x1d298cu: goto label_1d298c;
        case 0x1d2990u: goto label_1d2990;
        case 0x1d2994u: goto label_1d2994;
        case 0x1d2998u: goto label_1d2998;
        case 0x1d299cu: goto label_1d299c;
        case 0x1d29a0u: goto label_1d29a0;
        case 0x1d29a4u: goto label_1d29a4;
        case 0x1d29a8u: goto label_1d29a8;
        case 0x1d29acu: goto label_1d29ac;
        case 0x1d29b0u: goto label_1d29b0;
        case 0x1d29b4u: goto label_1d29b4;
        case 0x1d29b8u: goto label_1d29b8;
        case 0x1d29bcu: goto label_1d29bc;
        case 0x1d29c0u: goto label_1d29c0;
        case 0x1d29c4u: goto label_1d29c4;
        case 0x1d29c8u: goto label_1d29c8;
        case 0x1d29ccu: goto label_1d29cc;
        case 0x1d29d0u: goto label_1d29d0;
        case 0x1d29d4u: goto label_1d29d4;
        case 0x1d29d8u: goto label_1d29d8;
        case 0x1d29dcu: goto label_1d29dc;
        case 0x1d29e0u: goto label_1d29e0;
        case 0x1d29e4u: goto label_1d29e4;
        case 0x1d29e8u: goto label_1d29e8;
        case 0x1d29ecu: goto label_1d29ec;
        case 0x1d29f0u: goto label_1d29f0;
        case 0x1d29f4u: goto label_1d29f4;
        case 0x1d29f8u: goto label_1d29f8;
        case 0x1d29fcu: goto label_1d29fc;
        case 0x1d2a00u: goto label_1d2a00;
        case 0x1d2a04u: goto label_1d2a04;
        case 0x1d2a08u: goto label_1d2a08;
        case 0x1d2a0cu: goto label_1d2a0c;
        case 0x1d2a10u: goto label_1d2a10;
        case 0x1d2a14u: goto label_1d2a14;
        case 0x1d2a18u: goto label_1d2a18;
        case 0x1d2a1cu: goto label_1d2a1c;
        case 0x1d2a20u: goto label_1d2a20;
        case 0x1d2a24u: goto label_1d2a24;
        case 0x1d2a28u: goto label_1d2a28;
        case 0x1d2a2cu: goto label_1d2a2c;
        case 0x1d2a30u: goto label_1d2a30;
        case 0x1d2a34u: goto label_1d2a34;
        case 0x1d2a38u: goto label_1d2a38;
        case 0x1d2a3cu: goto label_1d2a3c;
        case 0x1d2a40u: goto label_1d2a40;
        case 0x1d2a44u: goto label_1d2a44;
        case 0x1d2a48u: goto label_1d2a48;
        case 0x1d2a4cu: goto label_1d2a4c;
        case 0x1d2a50u: goto label_1d2a50;
        case 0x1d2a54u: goto label_1d2a54;
        case 0x1d2a58u: goto label_1d2a58;
        case 0x1d2a5cu: goto label_1d2a5c;
        case 0x1d2a60u: goto label_1d2a60;
        case 0x1d2a64u: goto label_1d2a64;
        case 0x1d2a68u: goto label_1d2a68;
        case 0x1d2a6cu: goto label_1d2a6c;
        case 0x1d2a70u: goto label_1d2a70;
        case 0x1d2a74u: goto label_1d2a74;
        case 0x1d2a78u: goto label_1d2a78;
        case 0x1d2a7cu: goto label_1d2a7c;
        case 0x1d2a80u: goto label_1d2a80;
        case 0x1d2a84u: goto label_1d2a84;
        case 0x1d2a88u: goto label_1d2a88;
        case 0x1d2a8cu: goto label_1d2a8c;
        case 0x1d2a90u: goto label_1d2a90;
        case 0x1d2a94u: goto label_1d2a94;
        case 0x1d2a98u: goto label_1d2a98;
        case 0x1d2a9cu: goto label_1d2a9c;
        case 0x1d2aa0u: goto label_1d2aa0;
        case 0x1d2aa4u: goto label_1d2aa4;
        case 0x1d2aa8u: goto label_1d2aa8;
        case 0x1d2aacu: goto label_1d2aac;
        case 0x1d2ab0u: goto label_1d2ab0;
        case 0x1d2ab4u: goto label_1d2ab4;
        case 0x1d2ab8u: goto label_1d2ab8;
        case 0x1d2abcu: goto label_1d2abc;
        case 0x1d2ac0u: goto label_1d2ac0;
        case 0x1d2ac4u: goto label_1d2ac4;
        case 0x1d2ac8u: goto label_1d2ac8;
        case 0x1d2accu: goto label_1d2acc;
        case 0x1d2ad0u: goto label_1d2ad0;
        case 0x1d2ad4u: goto label_1d2ad4;
        case 0x1d2ad8u: goto label_1d2ad8;
        case 0x1d2adcu: goto label_1d2adc;
        case 0x1d2ae0u: goto label_1d2ae0;
        case 0x1d2ae4u: goto label_1d2ae4;
        case 0x1d2ae8u: goto label_1d2ae8;
        case 0x1d2aecu: goto label_1d2aec;
        case 0x1d2af0u: goto label_1d2af0;
        case 0x1d2af4u: goto label_1d2af4;
        case 0x1d2af8u: goto label_1d2af8;
        case 0x1d2afcu: goto label_1d2afc;
        case 0x1d2b00u: goto label_1d2b00;
        case 0x1d2b04u: goto label_1d2b04;
        case 0x1d2b08u: goto label_1d2b08;
        case 0x1d2b0cu: goto label_1d2b0c;
        case 0x1d2b10u: goto label_1d2b10;
        case 0x1d2b14u: goto label_1d2b14;
        case 0x1d2b18u: goto label_1d2b18;
        case 0x1d2b1cu: goto label_1d2b1c;
        case 0x1d2b20u: goto label_1d2b20;
        case 0x1d2b24u: goto label_1d2b24;
        case 0x1d2b28u: goto label_1d2b28;
        case 0x1d2b2cu: goto label_1d2b2c;
        case 0x1d2b30u: goto label_1d2b30;
        case 0x1d2b34u: goto label_1d2b34;
        case 0x1d2b38u: goto label_1d2b38;
        case 0x1d2b3cu: goto label_1d2b3c;
        case 0x1d2b40u: goto label_1d2b40;
        case 0x1d2b44u: goto label_1d2b44;
        case 0x1d2b48u: goto label_1d2b48;
        case 0x1d2b4cu: goto label_1d2b4c;
        case 0x1d2b50u: goto label_1d2b50;
        case 0x1d2b54u: goto label_1d2b54;
        case 0x1d2b58u: goto label_1d2b58;
        case 0x1d2b5cu: goto label_1d2b5c;
        case 0x1d2b60u: goto label_1d2b60;
        case 0x1d2b64u: goto label_1d2b64;
        case 0x1d2b68u: goto label_1d2b68;
        case 0x1d2b6cu: goto label_1d2b6c;
        case 0x1d2b70u: goto label_1d2b70;
        case 0x1d2b74u: goto label_1d2b74;
        case 0x1d2b78u: goto label_1d2b78;
        case 0x1d2b7cu: goto label_1d2b7c;
        case 0x1d2b80u: goto label_1d2b80;
        case 0x1d2b84u: goto label_1d2b84;
        case 0x1d2b88u: goto label_1d2b88;
        case 0x1d2b8cu: goto label_1d2b8c;
        case 0x1d2b90u: goto label_1d2b90;
        case 0x1d2b94u: goto label_1d2b94;
        case 0x1d2b98u: goto label_1d2b98;
        case 0x1d2b9cu: goto label_1d2b9c;
        case 0x1d2ba0u: goto label_1d2ba0;
        case 0x1d2ba4u: goto label_1d2ba4;
        case 0x1d2ba8u: goto label_1d2ba8;
        case 0x1d2bacu: goto label_1d2bac;
        case 0x1d2bb0u: goto label_1d2bb0;
        case 0x1d2bb4u: goto label_1d2bb4;
        case 0x1d2bb8u: goto label_1d2bb8;
        case 0x1d2bbcu: goto label_1d2bbc;
        case 0x1d2bc0u: goto label_1d2bc0;
        case 0x1d2bc4u: goto label_1d2bc4;
        case 0x1d2bc8u: goto label_1d2bc8;
        case 0x1d2bccu: goto label_1d2bcc;
        case 0x1d2bd0u: goto label_1d2bd0;
        case 0x1d2bd4u: goto label_1d2bd4;
        case 0x1d2bd8u: goto label_1d2bd8;
        case 0x1d2bdcu: goto label_1d2bdc;
        case 0x1d2be0u: goto label_1d2be0;
        case 0x1d2be4u: goto label_1d2be4;
        case 0x1d2be8u: goto label_1d2be8;
        case 0x1d2becu: goto label_1d2bec;
        case 0x1d2bf0u: goto label_1d2bf0;
        case 0x1d2bf4u: goto label_1d2bf4;
        case 0x1d2bf8u: goto label_1d2bf8;
        case 0x1d2bfcu: goto label_1d2bfc;
        case 0x1d2c00u: goto label_1d2c00;
        case 0x1d2c04u: goto label_1d2c04;
        case 0x1d2c08u: goto label_1d2c08;
        case 0x1d2c0cu: goto label_1d2c0c;
        case 0x1d2c10u: goto label_1d2c10;
        case 0x1d2c14u: goto label_1d2c14;
        case 0x1d2c18u: goto label_1d2c18;
        case 0x1d2c1cu: goto label_1d2c1c;
        case 0x1d2c20u: goto label_1d2c20;
        case 0x1d2c24u: goto label_1d2c24;
        case 0x1d2c28u: goto label_1d2c28;
        case 0x1d2c2cu: goto label_1d2c2c;
        case 0x1d2c30u: goto label_1d2c30;
        case 0x1d2c34u: goto label_1d2c34;
        case 0x1d2c38u: goto label_1d2c38;
        case 0x1d2c3cu: goto label_1d2c3c;
        case 0x1d2c40u: goto label_1d2c40;
        case 0x1d2c44u: goto label_1d2c44;
        case 0x1d2c48u: goto label_1d2c48;
        case 0x1d2c4cu: goto label_1d2c4c;
        case 0x1d2c50u: goto label_1d2c50;
        case 0x1d2c54u: goto label_1d2c54;
        case 0x1d2c58u: goto label_1d2c58;
        case 0x1d2c5cu: goto label_1d2c5c;
        case 0x1d2c60u: goto label_1d2c60;
        case 0x1d2c64u: goto label_1d2c64;
        case 0x1d2c68u: goto label_1d2c68;
        case 0x1d2c6cu: goto label_1d2c6c;
        case 0x1d2c70u: goto label_1d2c70;
        case 0x1d2c74u: goto label_1d2c74;
        case 0x1d2c78u: goto label_1d2c78;
        case 0x1d2c7cu: goto label_1d2c7c;
        case 0x1d2c80u: goto label_1d2c80;
        case 0x1d2c84u: goto label_1d2c84;
        case 0x1d2c88u: goto label_1d2c88;
        case 0x1d2c8cu: goto label_1d2c8c;
        case 0x1d2c90u: goto label_1d2c90;
        case 0x1d2c94u: goto label_1d2c94;
        case 0x1d2c98u: goto label_1d2c98;
        case 0x1d2c9cu: goto label_1d2c9c;
        case 0x1d2ca0u: goto label_1d2ca0;
        case 0x1d2ca4u: goto label_1d2ca4;
        case 0x1d2ca8u: goto label_1d2ca8;
        case 0x1d2cacu: goto label_1d2cac;
        case 0x1d2cb0u: goto label_1d2cb0;
        case 0x1d2cb4u: goto label_1d2cb4;
        case 0x1d2cb8u: goto label_1d2cb8;
        case 0x1d2cbcu: goto label_1d2cbc;
        case 0x1d2cc0u: goto label_1d2cc0;
        case 0x1d2cc4u: goto label_1d2cc4;
        case 0x1d2cc8u: goto label_1d2cc8;
        case 0x1d2cccu: goto label_1d2ccc;
        case 0x1d2cd0u: goto label_1d2cd0;
        case 0x1d2cd4u: goto label_1d2cd4;
        case 0x1d2cd8u: goto label_1d2cd8;
        case 0x1d2cdcu: goto label_1d2cdc;
        case 0x1d2ce0u: goto label_1d2ce0;
        case 0x1d2ce4u: goto label_1d2ce4;
        case 0x1d2ce8u: goto label_1d2ce8;
        case 0x1d2cecu: goto label_1d2cec;
        case 0x1d2cf0u: goto label_1d2cf0;
        case 0x1d2cf4u: goto label_1d2cf4;
        case 0x1d2cf8u: goto label_1d2cf8;
        case 0x1d2cfcu: goto label_1d2cfc;
        case 0x1d2d00u: goto label_1d2d00;
        case 0x1d2d04u: goto label_1d2d04;
        case 0x1d2d08u: goto label_1d2d08;
        case 0x1d2d0cu: goto label_1d2d0c;
        case 0x1d2d10u: goto label_1d2d10;
        case 0x1d2d14u: goto label_1d2d14;
        case 0x1d2d18u: goto label_1d2d18;
        case 0x1d2d1cu: goto label_1d2d1c;
        case 0x1d2d20u: goto label_1d2d20;
        case 0x1d2d24u: goto label_1d2d24;
        case 0x1d2d28u: goto label_1d2d28;
        case 0x1d2d2cu: goto label_1d2d2c;
        case 0x1d2d30u: goto label_1d2d30;
        case 0x1d2d34u: goto label_1d2d34;
        case 0x1d2d38u: goto label_1d2d38;
        case 0x1d2d3cu: goto label_1d2d3c;
        case 0x1d2d40u: goto label_1d2d40;
        case 0x1d2d44u: goto label_1d2d44;
        case 0x1d2d48u: goto label_1d2d48;
        case 0x1d2d4cu: goto label_1d2d4c;
        case 0x1d2d50u: goto label_1d2d50;
        case 0x1d2d54u: goto label_1d2d54;
        case 0x1d2d58u: goto label_1d2d58;
        case 0x1d2d5cu: goto label_1d2d5c;
        case 0x1d2d60u: goto label_1d2d60;
        case 0x1d2d64u: goto label_1d2d64;
        case 0x1d2d68u: goto label_1d2d68;
        case 0x1d2d6cu: goto label_1d2d6c;
        case 0x1d2d70u: goto label_1d2d70;
        case 0x1d2d74u: goto label_1d2d74;
        case 0x1d2d78u: goto label_1d2d78;
        case 0x1d2d7cu: goto label_1d2d7c;
        case 0x1d2d80u: goto label_1d2d80;
        case 0x1d2d84u: goto label_1d2d84;
        case 0x1d2d88u: goto label_1d2d88;
        case 0x1d2d8cu: goto label_1d2d8c;
        case 0x1d2d90u: goto label_1d2d90;
        case 0x1d2d94u: goto label_1d2d94;
        case 0x1d2d98u: goto label_1d2d98;
        case 0x1d2d9cu: goto label_1d2d9c;
        case 0x1d2da0u: goto label_1d2da0;
        case 0x1d2da4u: goto label_1d2da4;
        case 0x1d2da8u: goto label_1d2da8;
        case 0x1d2dacu: goto label_1d2dac;
        case 0x1d2db0u: goto label_1d2db0;
        case 0x1d2db4u: goto label_1d2db4;
        case 0x1d2db8u: goto label_1d2db8;
        case 0x1d2dbcu: goto label_1d2dbc;
        case 0x1d2dc0u: goto label_1d2dc0;
        case 0x1d2dc4u: goto label_1d2dc4;
        case 0x1d2dc8u: goto label_1d2dc8;
        case 0x1d2dccu: goto label_1d2dcc;
        case 0x1d2dd0u: goto label_1d2dd0;
        case 0x1d2dd4u: goto label_1d2dd4;
        case 0x1d2dd8u: goto label_1d2dd8;
        case 0x1d2ddcu: goto label_1d2ddc;
        case 0x1d2de0u: goto label_1d2de0;
        case 0x1d2de4u: goto label_1d2de4;
        case 0x1d2de8u: goto label_1d2de8;
        case 0x1d2decu: goto label_1d2dec;
        case 0x1d2df0u: goto label_1d2df0;
        case 0x1d2df4u: goto label_1d2df4;
        case 0x1d2df8u: goto label_1d2df8;
        case 0x1d2dfcu: goto label_1d2dfc;
        case 0x1d2e00u: goto label_1d2e00;
        case 0x1d2e04u: goto label_1d2e04;
        case 0x1d2e08u: goto label_1d2e08;
        case 0x1d2e0cu: goto label_1d2e0c;
        case 0x1d2e10u: goto label_1d2e10;
        case 0x1d2e14u: goto label_1d2e14;
        case 0x1d2e18u: goto label_1d2e18;
        case 0x1d2e1cu: goto label_1d2e1c;
        case 0x1d2e20u: goto label_1d2e20;
        case 0x1d2e24u: goto label_1d2e24;
        case 0x1d2e28u: goto label_1d2e28;
        case 0x1d2e2cu: goto label_1d2e2c;
        case 0x1d2e30u: goto label_1d2e30;
        case 0x1d2e34u: goto label_1d2e34;
        case 0x1d2e38u: goto label_1d2e38;
        case 0x1d2e3cu: goto label_1d2e3c;
        case 0x1d2e40u: goto label_1d2e40;
        case 0x1d2e44u: goto label_1d2e44;
        case 0x1d2e48u: goto label_1d2e48;
        case 0x1d2e4cu: goto label_1d2e4c;
        case 0x1d2e50u: goto label_1d2e50;
        case 0x1d2e54u: goto label_1d2e54;
        case 0x1d2e58u: goto label_1d2e58;
        case 0x1d2e5cu: goto label_1d2e5c;
        case 0x1d2e60u: goto label_1d2e60;
        case 0x1d2e64u: goto label_1d2e64;
        case 0x1d2e68u: goto label_1d2e68;
        case 0x1d2e6cu: goto label_1d2e6c;
        case 0x1d2e70u: goto label_1d2e70;
        case 0x1d2e74u: goto label_1d2e74;
        case 0x1d2e78u: goto label_1d2e78;
        case 0x1d2e7cu: goto label_1d2e7c;
        case 0x1d2e80u: goto label_1d2e80;
        case 0x1d2e84u: goto label_1d2e84;
        case 0x1d2e88u: goto label_1d2e88;
        case 0x1d2e8cu: goto label_1d2e8c;
        case 0x1d2e90u: goto label_1d2e90;
        case 0x1d2e94u: goto label_1d2e94;
        case 0x1d2e98u: goto label_1d2e98;
        case 0x1d2e9cu: goto label_1d2e9c;
        case 0x1d2ea0u: goto label_1d2ea0;
        case 0x1d2ea4u: goto label_1d2ea4;
        case 0x1d2ea8u: goto label_1d2ea8;
        case 0x1d2eacu: goto label_1d2eac;
        case 0x1d2eb0u: goto label_1d2eb0;
        case 0x1d2eb4u: goto label_1d2eb4;
        case 0x1d2eb8u: goto label_1d2eb8;
        case 0x1d2ebcu: goto label_1d2ebc;
        case 0x1d2ec0u: goto label_1d2ec0;
        case 0x1d2ec4u: goto label_1d2ec4;
        case 0x1d2ec8u: goto label_1d2ec8;
        case 0x1d2eccu: goto label_1d2ecc;
        case 0x1d2ed0u: goto label_1d2ed0;
        case 0x1d2ed4u: goto label_1d2ed4;
        case 0x1d2ed8u: goto label_1d2ed8;
        case 0x1d2edcu: goto label_1d2edc;
        case 0x1d2ee0u: goto label_1d2ee0;
        case 0x1d2ee4u: goto label_1d2ee4;
        case 0x1d2ee8u: goto label_1d2ee8;
        case 0x1d2eecu: goto label_1d2eec;
        case 0x1d2ef0u: goto label_1d2ef0;
        case 0x1d2ef4u: goto label_1d2ef4;
        case 0x1d2ef8u: goto label_1d2ef8;
        case 0x1d2efcu: goto label_1d2efc;
        case 0x1d2f00u: goto label_1d2f00;
        case 0x1d2f04u: goto label_1d2f04;
        case 0x1d2f08u: goto label_1d2f08;
        case 0x1d2f0cu: goto label_1d2f0c;
        case 0x1d2f10u: goto label_1d2f10;
        case 0x1d2f14u: goto label_1d2f14;
        case 0x1d2f18u: goto label_1d2f18;
        case 0x1d2f1cu: goto label_1d2f1c;
        case 0x1d2f20u: goto label_1d2f20;
        case 0x1d2f24u: goto label_1d2f24;
        case 0x1d2f28u: goto label_1d2f28;
        case 0x1d2f2cu: goto label_1d2f2c;
        case 0x1d2f30u: goto label_1d2f30;
        case 0x1d2f34u: goto label_1d2f34;
        case 0x1d2f38u: goto label_1d2f38;
        case 0x1d2f3cu: goto label_1d2f3c;
        case 0x1d2f40u: goto label_1d2f40;
        case 0x1d2f44u: goto label_1d2f44;
        case 0x1d2f48u: goto label_1d2f48;
        case 0x1d2f4cu: goto label_1d2f4c;
        case 0x1d2f50u: goto label_1d2f50;
        case 0x1d2f54u: goto label_1d2f54;
        case 0x1d2f58u: goto label_1d2f58;
        case 0x1d2f5cu: goto label_1d2f5c;
        case 0x1d2f60u: goto label_1d2f60;
        case 0x1d2f64u: goto label_1d2f64;
        case 0x1d2f68u: goto label_1d2f68;
        case 0x1d2f6cu: goto label_1d2f6c;
        case 0x1d2f70u: goto label_1d2f70;
        case 0x1d2f74u: goto label_1d2f74;
        case 0x1d2f78u: goto label_1d2f78;
        case 0x1d2f7cu: goto label_1d2f7c;
        case 0x1d2f80u: goto label_1d2f80;
        case 0x1d2f84u: goto label_1d2f84;
        case 0x1d2f88u: goto label_1d2f88;
        case 0x1d2f8cu: goto label_1d2f8c;
        case 0x1d2f90u: goto label_1d2f90;
        case 0x1d2f94u: goto label_1d2f94;
        case 0x1d2f98u: goto label_1d2f98;
        case 0x1d2f9cu: goto label_1d2f9c;
        case 0x1d2fa0u: goto label_1d2fa0;
        case 0x1d2fa4u: goto label_1d2fa4;
        case 0x1d2fa8u: goto label_1d2fa8;
        case 0x1d2facu: goto label_1d2fac;
        case 0x1d2fb0u: goto label_1d2fb0;
        case 0x1d2fb4u: goto label_1d2fb4;
        case 0x1d2fb8u: goto label_1d2fb8;
        case 0x1d2fbcu: goto label_1d2fbc;
        case 0x1d2fc0u: goto label_1d2fc0;
        case 0x1d2fc4u: goto label_1d2fc4;
        case 0x1d2fc8u: goto label_1d2fc8;
        case 0x1d2fccu: goto label_1d2fcc;
        case 0x1d2fd0u: goto label_1d2fd0;
        case 0x1d2fd4u: goto label_1d2fd4;
        case 0x1d2fd8u: goto label_1d2fd8;
        case 0x1d2fdcu: goto label_1d2fdc;
        case 0x1d2fe0u: goto label_1d2fe0;
        case 0x1d2fe4u: goto label_1d2fe4;
        case 0x1d2fe8u: goto label_1d2fe8;
        case 0x1d2fecu: goto label_1d2fec;
        case 0x1d2ff0u: goto label_1d2ff0;
        case 0x1d2ff4u: goto label_1d2ff4;
        case 0x1d2ff8u: goto label_1d2ff8;
        case 0x1d2ffcu: goto label_1d2ffc;
        case 0x1d3000u: goto label_1d3000;
        case 0x1d3004u: goto label_1d3004;
        case 0x1d3008u: goto label_1d3008;
        case 0x1d300cu: goto label_1d300c;
        case 0x1d3010u: goto label_1d3010;
        case 0x1d3014u: goto label_1d3014;
        case 0x1d3018u: goto label_1d3018;
        case 0x1d301cu: goto label_1d301c;
        case 0x1d3020u: goto label_1d3020;
        case 0x1d3024u: goto label_1d3024;
        case 0x1d3028u: goto label_1d3028;
        case 0x1d302cu: goto label_1d302c;
        case 0x1d3030u: goto label_1d3030;
        case 0x1d3034u: goto label_1d3034;
        case 0x1d3038u: goto label_1d3038;
        case 0x1d303cu: goto label_1d303c;
        case 0x1d3040u: goto label_1d3040;
        case 0x1d3044u: goto label_1d3044;
        case 0x1d3048u: goto label_1d3048;
        case 0x1d304cu: goto label_1d304c;
        case 0x1d3050u: goto label_1d3050;
        case 0x1d3054u: goto label_1d3054;
        case 0x1d3058u: goto label_1d3058;
        case 0x1d305cu: goto label_1d305c;
        case 0x1d3060u: goto label_1d3060;
        case 0x1d3064u: goto label_1d3064;
        case 0x1d3068u: goto label_1d3068;
        case 0x1d306cu: goto label_1d306c;
        case 0x1d3070u: goto label_1d3070;
        case 0x1d3074u: goto label_1d3074;
        case 0x1d3078u: goto label_1d3078;
        case 0x1d307cu: goto label_1d307c;
        case 0x1d3080u: goto label_1d3080;
        case 0x1d3084u: goto label_1d3084;
        case 0x1d3088u: goto label_1d3088;
        case 0x1d308cu: goto label_1d308c;
        case 0x1d3090u: goto label_1d3090;
        case 0x1d3094u: goto label_1d3094;
        case 0x1d3098u: goto label_1d3098;
        case 0x1d309cu: goto label_1d309c;
        case 0x1d30a0u: goto label_1d30a0;
        case 0x1d30a4u: goto label_1d30a4;
        case 0x1d30a8u: goto label_1d30a8;
        case 0x1d30acu: goto label_1d30ac;
        case 0x1d30b0u: goto label_1d30b0;
        case 0x1d30b4u: goto label_1d30b4;
        case 0x1d30b8u: goto label_1d30b8;
        case 0x1d30bcu: goto label_1d30bc;
        case 0x1d30c0u: goto label_1d30c0;
        case 0x1d30c4u: goto label_1d30c4;
        case 0x1d30c8u: goto label_1d30c8;
        case 0x1d30ccu: goto label_1d30cc;
        case 0x1d30d0u: goto label_1d30d0;
        case 0x1d30d4u: goto label_1d30d4;
        case 0x1d30d8u: goto label_1d30d8;
        case 0x1d30dcu: goto label_1d30dc;
        case 0x1d30e0u: goto label_1d30e0;
        case 0x1d30e4u: goto label_1d30e4;
        case 0x1d30e8u: goto label_1d30e8;
        case 0x1d30ecu: goto label_1d30ec;
        case 0x1d30f0u: goto label_1d30f0;
        case 0x1d30f4u: goto label_1d30f4;
        case 0x1d30f8u: goto label_1d30f8;
        case 0x1d30fcu: goto label_1d30fc;
        case 0x1d3100u: goto label_1d3100;
        case 0x1d3104u: goto label_1d3104;
        case 0x1d3108u: goto label_1d3108;
        case 0x1d310cu: goto label_1d310c;
        case 0x1d3110u: goto label_1d3110;
        case 0x1d3114u: goto label_1d3114;
        case 0x1d3118u: goto label_1d3118;
        case 0x1d311cu: goto label_1d311c;
        case 0x1d3120u: goto label_1d3120;
        case 0x1d3124u: goto label_1d3124;
        case 0x1d3128u: goto label_1d3128;
        case 0x1d312cu: goto label_1d312c;
        case 0x1d3130u: goto label_1d3130;
        case 0x1d3134u: goto label_1d3134;
        case 0x1d3138u: goto label_1d3138;
        case 0x1d313cu: goto label_1d313c;
        case 0x1d3140u: goto label_1d3140;
        case 0x1d3144u: goto label_1d3144;
        case 0x1d3148u: goto label_1d3148;
        case 0x1d314cu: goto label_1d314c;
        case 0x1d3150u: goto label_1d3150;
        case 0x1d3154u: goto label_1d3154;
        case 0x1d3158u: goto label_1d3158;
        case 0x1d315cu: goto label_1d315c;
        case 0x1d3160u: goto label_1d3160;
        case 0x1d3164u: goto label_1d3164;
        case 0x1d3168u: goto label_1d3168;
        case 0x1d316cu: goto label_1d316c;
        case 0x1d3170u: goto label_1d3170;
        case 0x1d3174u: goto label_1d3174;
        case 0x1d3178u: goto label_1d3178;
        case 0x1d317cu: goto label_1d317c;
        case 0x1d3180u: goto label_1d3180;
        case 0x1d3184u: goto label_1d3184;
        case 0x1d3188u: goto label_1d3188;
        case 0x1d318cu: goto label_1d318c;
        case 0x1d3190u: goto label_1d3190;
        case 0x1d3194u: goto label_1d3194;
        case 0x1d3198u: goto label_1d3198;
        case 0x1d319cu: goto label_1d319c;
        case 0x1d31a0u: goto label_1d31a0;
        case 0x1d31a4u: goto label_1d31a4;
        case 0x1d31a8u: goto label_1d31a8;
        case 0x1d31acu: goto label_1d31ac;
        case 0x1d31b0u: goto label_1d31b0;
        case 0x1d31b4u: goto label_1d31b4;
        case 0x1d31b8u: goto label_1d31b8;
        case 0x1d31bcu: goto label_1d31bc;
        case 0x1d31c0u: goto label_1d31c0;
        case 0x1d31c4u: goto label_1d31c4;
        case 0x1d31c8u: goto label_1d31c8;
        case 0x1d31ccu: goto label_1d31cc;
        case 0x1d31d0u: goto label_1d31d0;
        case 0x1d31d4u: goto label_1d31d4;
        case 0x1d31d8u: goto label_1d31d8;
        case 0x1d31dcu: goto label_1d31dc;
        case 0x1d31e0u: goto label_1d31e0;
        case 0x1d31e4u: goto label_1d31e4;
        case 0x1d31e8u: goto label_1d31e8;
        case 0x1d31ecu: goto label_1d31ec;
        case 0x1d31f0u: goto label_1d31f0;
        case 0x1d31f4u: goto label_1d31f4;
        case 0x1d31f8u: goto label_1d31f8;
        case 0x1d31fcu: goto label_1d31fc;
        case 0x1d3200u: goto label_1d3200;
        case 0x1d3204u: goto label_1d3204;
        case 0x1d3208u: goto label_1d3208;
        case 0x1d320cu: goto label_1d320c;
        case 0x1d3210u: goto label_1d3210;
        case 0x1d3214u: goto label_1d3214;
        case 0x1d3218u: goto label_1d3218;
        case 0x1d321cu: goto label_1d321c;
        case 0x1d3220u: goto label_1d3220;
        case 0x1d3224u: goto label_1d3224;
        case 0x1d3228u: goto label_1d3228;
        case 0x1d322cu: goto label_1d322c;
        case 0x1d3230u: goto label_1d3230;
        case 0x1d3234u: goto label_1d3234;
        case 0x1d3238u: goto label_1d3238;
        case 0x1d323cu: goto label_1d323c;
        case 0x1d3240u: goto label_1d3240;
        case 0x1d3244u: goto label_1d3244;
        case 0x1d3248u: goto label_1d3248;
        default: break;
    }

    ctx->pc = 0x1d1400u;

label_1d1400:
    // 0x1d1400: 0x3c01fffe  lui         $at, 0xFFFE
    ctx->pc = 0x1d1400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65534 << 16));
label_1d1404:
    // 0x1d1404: 0x3421bd90  ori         $at, $at, 0xBD90
    ctx->pc = 0x1d1404u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48528);
label_1d1408:
    // 0x1d1408: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x1d1408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d140c:
    // 0x1d140c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1d140cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1d1410:
    // 0x1d1410: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d1410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1d1414:
    // 0x1d1414: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d1414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1d1418:
    // 0x1d1418: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d1418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1d141c:
    // 0x1d141c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d141cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1d1420:
    // 0x1d1420: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d1420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1d1424:
    // 0x1d1424: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1d1424u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d1428:
    // 0x1d1428: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d1428u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1d142c:
    // 0x1d142c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d142cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d1430:
    // 0x1d1430: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d1430u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d1434:
    // 0x1d1434: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d1434u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d1438:
    // 0x1d1438: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d1438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d143c:
    // 0x1d143c: 0xc0a0e30  jal         func_2838C0
label_1d1440:
    if (ctx->pc == 0x1D1440u) {
        ctx->pc = 0x1D1440u;
            // 0x1d1440: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->pc = 0x1D1444u;
        goto label_1d1444;
    }
    ctx->pc = 0x1D143Cu;
    SET_GPR_U32(ctx, 31, 0x1D1444u);
    ctx->pc = 0x1D1440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D143Cu;
            // 0x1d1440: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1444u; }
        if (ctx->pc != 0x1D1444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1444u; }
        if (ctx->pc != 0x1D1444u) { return; }
    }
    ctx->pc = 0x1D1444u;
label_1d1444:
    // 0x1d1444: 0x8f828d98  lw          $v0, -0x7268($gp)
    ctx->pc = 0x1d1444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938008)));
label_1d1448:
    // 0x1d1448: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d144c:
    if (ctx->pc == 0x1D144Cu) {
        ctx->pc = 0x1D1450u;
        goto label_1d1450;
    }
    ctx->pc = 0x1D1448u;
    {
        const bool branch_taken_0x1d1448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1448) {
            ctx->pc = 0x1D1464u;
            goto label_1d1464;
        }
    }
    ctx->pc = 0x1D1450u;
label_1d1450:
    // 0x1d1450: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x1d1450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_1d1454:
    // 0x1d1454: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d1458:
    if (ctx->pc == 0x1D1458u) {
        ctx->pc = 0x1D1458u;
            // 0x1d1458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D145Cu;
        goto label_1d145c;
    }
    ctx->pc = 0x1D1454u;
    {
        const bool branch_taken_0x1d1454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1454u;
            // 0x1d1458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1454) {
            ctx->pc = 0x1D1464u;
            goto label_1d1464;
        }
    }
    ctx->pc = 0x1D145Cu;
label_1d145c:
    // 0x1d145c: 0x1000076d  b           . + 4 + (0x76D << 2)
label_1d1460:
    if (ctx->pc == 0x1D1460u) {
        ctx->pc = 0x1D1460u;
            // 0x1d1460: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x1D1464u;
        goto label_1d1464;
    }
    ctx->pc = 0x1D145Cu;
    {
        const bool branch_taken_0x1d145c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D145Cu;
            // 0x1d1460: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d145c) {
            ctx->pc = 0x1D3214u;
            goto label_1d3214;
        }
    }
    ctx->pc = 0x1D1464u;
label_1d1464:
    // 0x1d1464: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x1d1464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_1d1468:
    // 0x1d1468: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
label_1d146c:
    if (ctx->pc == 0x1D146Cu) {
        ctx->pc = 0x1D1470u;
        goto label_1d1470;
    }
    ctx->pc = 0x1D1468u;
    {
        const bool branch_taken_0x1d1468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1468) {
            ctx->pc = 0x1D1688u;
            goto label_1d1688;
        }
    }
    ctx->pc = 0x1D1470u;
label_1d1470:
    // 0x1d1470: 0xc06ebdc  jal         func_1BAF70
label_1d1474:
    if (ctx->pc == 0x1D1474u) {
        ctx->pc = 0x1D1478u;
        goto label_1d1478;
    }
    ctx->pc = 0x1D1470u;
    SET_GPR_U32(ctx, 31, 0x1D1478u);
    ctx->pc = 0x1BAF70u;
    if (runtime->hasFunction(0x1BAF70u)) {
        auto targetFn = runtime->lookupFunction(0x1BAF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1478u; }
        if (ctx->pc != 0x1D1478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dngDebugKey__Fv_0x1baf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1478u; }
        if (ctx->pc != 0x1D1478u) { return; }
    }
    ctx->pc = 0x1D1478u;
label_1d1478:
    // 0x1d1478: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1d147c:
    if (ctx->pc == 0x1D147Cu) {
        ctx->pc = 0x1D1480u;
        goto label_1d1480;
    }
    ctx->pc = 0x1D1478u;
    {
        const bool branch_taken_0x1d1478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1478) {
            ctx->pc = 0x1D14CCu;
            goto label_1d14cc;
        }
    }
    ctx->pc = 0x1D1480u;
label_1d1480:
    // 0x1d1480: 0xc06ea8c  jal         func_1BAA30
label_1d1484:
    if (ctx->pc == 0x1D1484u) {
        ctx->pc = 0x1D1488u;
        goto label_1d1488;
    }
    ctx->pc = 0x1D1480u;
    SET_GPR_U32(ctx, 31, 0x1D1488u);
    ctx->pc = 0x1BAA30u;
    if (runtime->hasFunction(0x1BAA30u)) {
        auto targetFn = runtime->lookupFunction(0x1BAA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1488u; }
        if (ctx->pc != 0x1D1488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dngGetDebugInfo__Fv_0x1baa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1488u; }
        if (ctx->pc != 0x1D1488u) { return; }
    }
    ctx->pc = 0x1D1488u;
label_1d1488:
    // 0x1d1488: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x1d1488u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_1d148c:
    // 0x1d148c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1d1490:
    if (ctx->pc == 0x1D1490u) {
        ctx->pc = 0x1D1494u;
        goto label_1d1494;
    }
    ctx->pc = 0x1D148Cu;
    {
        const bool branch_taken_0x1d148c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1d148c) {
            ctx->pc = 0x1D149Cu;
            goto label_1d149c;
        }
    }
    ctx->pc = 0x1D1494u;
label_1d1494:
    // 0x1d1494: 0x1000075e  b           . + 4 + (0x75E << 2)
label_1d1498:
    if (ctx->pc == 0x1D1498u) {
        ctx->pc = 0x1D1498u;
            // 0x1d1498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D149Cu;
        goto label_1d149c;
    }
    ctx->pc = 0x1D1494u;
    {
        const bool branch_taken_0x1d1494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1494u;
            // 0x1d1498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1494) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D149Cu;
label_1d149c:
    // 0x1d149c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1d14a0:
    if (ctx->pc == 0x1D14A0u) {
        ctx->pc = 0x1D14A4u;
        goto label_1d14a4;
    }
    ctx->pc = 0x1D149Cu;
    {
        const bool branch_taken_0x1d149c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d149c) {
            ctx->pc = 0x1D14B4u;
            goto label_1d14b4;
        }
    }
    ctx->pc = 0x1D14A4u;
label_1d14a4:
    // 0x1d14a4: 0xc0751e8  jal         func_1D47A0
label_1d14a8:
    if (ctx->pc == 0x1D14A8u) {
        ctx->pc = 0x1D14A8u;
            // 0x1d14a8: 0x84440006  lh          $a0, 0x6($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
        ctx->pc = 0x1D14ACu;
        goto label_1d14ac;
    }
    ctx->pc = 0x1D14A4u;
    SET_GPR_U32(ctx, 31, 0x1D14ACu);
    ctx->pc = 0x1D14A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D14A4u;
            // 0x1d14a8: 0x84440006  lh          $a0, 0x6($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D47A0u;
    if (runtime->hasFunction(0x1D47A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D47A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D14ACu; }
        if (ctx->pc != 0x1D14ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DBGCMD_RunScript__Fi_0x1d47a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D14ACu; }
        if (ctx->pc != 0x1D14ACu) { return; }
    }
    ctx->pc = 0x1D14ACu;
label_1d14ac:
    // 0x1d14ac: 0x10000758  b           . + 4 + (0x758 << 2)
label_1d14b0:
    if (ctx->pc == 0x1D14B0u) {
        ctx->pc = 0x1D14B0u;
            // 0x1d14b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D14B4u;
        goto label_1d14b4;
    }
    ctx->pc = 0x1D14ACu;
    {
        const bool branch_taken_0x1d14ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D14ACu;
            // 0x1d14b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14ac) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D14B4u;
label_1d14b4:
    // 0x1d14b4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1d14b8:
    if (ctx->pc == 0x1D14B8u) {
        ctx->pc = 0x1D14BCu;
        goto label_1d14bc;
    }
    ctx->pc = 0x1D14B4u;
    {
        const bool branch_taken_0x1d14b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d14b4) {
            ctx->pc = 0x1D14CCu;
            goto label_1d14cc;
        }
    }
    ctx->pc = 0x1D14BCu;
label_1d14bc:
    // 0x1d14bc: 0xc0751e8  jal         func_1D47A0
label_1d14c0:
    if (ctx->pc == 0x1D14C0u) {
        ctx->pc = 0x1D14C0u;
            // 0x1d14c0: 0x84440006  lh          $a0, 0x6($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
        ctx->pc = 0x1D14C4u;
        goto label_1d14c4;
    }
    ctx->pc = 0x1D14BCu;
    SET_GPR_U32(ctx, 31, 0x1D14C4u);
    ctx->pc = 0x1D14C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D14BCu;
            // 0x1d14c0: 0x84440006  lh          $a0, 0x6($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D47A0u;
    if (runtime->hasFunction(0x1D47A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D47A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D14C4u; }
        if (ctx->pc != 0x1D14C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DBGCMD_RunScript__Fi_0x1d47a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D14C4u; }
        if (ctx->pc != 0x1D14C4u) { return; }
    }
    ctx->pc = 0x1D14C4u;
label_1d14c4:
    // 0x1d14c4: 0x10000752  b           . + 4 + (0x752 << 2)
label_1d14c8:
    if (ctx->pc == 0x1D14C8u) {
        ctx->pc = 0x1D14C8u;
            // 0x1d14c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D14CCu;
        goto label_1d14cc;
    }
    ctx->pc = 0x1D14C4u;
    {
        const bool branch_taken_0x1d14c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D14C4u;
            // 0x1d14c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14c4) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D14CCu;
label_1d14cc:
    // 0x1d14cc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d14ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d14d0:
    // 0x1d14d0: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x1d14d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1d14d4:
    // 0x1d14d4: 0xc052d0c  jal         func_14B430
label_1d14d8:
    if (ctx->pc == 0x1D14D8u) {
        ctx->pc = 0x1D14D8u;
            // 0x1d14d8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D14DCu;
        goto label_1d14dc;
    }
    ctx->pc = 0x1D14D4u;
    SET_GPR_U32(ctx, 31, 0x1D14DCu);
    ctx->pc = 0x1D14D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D14D4u;
            // 0x1d14d8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D14DCu; }
        if (ctx->pc != 0x1D14DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D14DCu; }
        if (ctx->pc != 0x1D14DCu) { return; }
    }
    ctx->pc = 0x1D14DCu;
label_1d14dc:
    // 0x1d14dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d14e0:
    if (ctx->pc == 0x1D14E0u) {
        ctx->pc = 0x1D14E0u;
            // 0x1d14e0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1D14E4u;
        goto label_1d14e4;
    }
    ctx->pc = 0x1D14DCu;
    {
        const bool branch_taken_0x1d14dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D14DCu;
            // 0x1d14e0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14dc) {
            ctx->pc = 0x1D14F4u;
            goto label_1d14f4;
        }
    }
    ctx->pc = 0x1D14E4u;
label_1d14e4:
    // 0x1d14e4: 0xc06eaac  jal         func_1BAAB0
label_1d14e8:
    if (ctx->pc == 0x1D14E8u) {
        ctx->pc = 0x1D14ECu;
        goto label_1d14ec;
    }
    ctx->pc = 0x1D14E4u;
    SET_GPR_U32(ctx, 31, 0x1D14ECu);
    ctx->pc = 0x1BAAB0u;
    if (runtime->hasFunction(0x1BAAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1BAAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D14ECu; }
        if (ctx->pc != 0x1D14ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dngDebugStart__Fv_0x1baab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D14ECu; }
        if (ctx->pc != 0x1D14ECu) { return; }
    }
    ctx->pc = 0x1D14ECu;
label_1d14ec:
    // 0x1d14ec: 0x10000748  b           . + 4 + (0x748 << 2)
label_1d14f0:
    if (ctx->pc == 0x1D14F0u) {
        ctx->pc = 0x1D14F0u;
            // 0x1d14f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D14F4u;
        goto label_1d14f4;
    }
    ctx->pc = 0x1D14ECu;
    {
        const bool branch_taken_0x1d14ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D14ECu;
            // 0x1d14f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14ec) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D14F4u;
label_1d14f4:
    // 0x1d14f4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1d14f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d14f8:
    // 0x1d14f8: 0xc052d1c  jal         func_14B470
label_1d14fc:
    if (ctx->pc == 0x1D14FCu) {
        ctx->pc = 0x1D14FCu;
            // 0x1d14fc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D1500u;
        goto label_1d1500;
    }
    ctx->pc = 0x1D14F8u;
    SET_GPR_U32(ctx, 31, 0x1D1500u);
    ctx->pc = 0x1D14FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D14F8u;
            // 0x1d14fc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1500u; }
        if (ctx->pc != 0x1D1500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1500u; }
        if (ctx->pc != 0x1D1500u) { return; }
    }
    ctx->pc = 0x1D1500u;
label_1d1500:
    // 0x1d1500: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d1504:
    if (ctx->pc == 0x1D1504u) {
        ctx->pc = 0x1D1504u;
            // 0x1d1504: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1D1508u;
        goto label_1d1508;
    }
    ctx->pc = 0x1D1500u;
    {
        const bool branch_taken_0x1d1500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1500u;
            // 0x1d1504: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1500) {
            ctx->pc = 0x1D1514u;
            goto label_1d1514;
        }
    }
    ctx->pc = 0x1D1508u;
label_1d1508:
    // 0x1d1508: 0x8f828d78  lw          $v0, -0x7288($gp)
    ctx->pc = 0x1d1508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937976)));
label_1d150c:
    // 0x1d150c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d150cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1d1510:
    // 0x1d1510: 0xaf828d78  sw          $v0, -0x7288($gp)
    ctx->pc = 0x1d1510u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937976), GPR_U32(ctx, 2));
label_1d1514:
    // 0x1d1514: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1d1514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d1518:
    // 0x1d1518: 0xc052d1c  jal         func_14B470
label_1d151c:
    if (ctx->pc == 0x1D151Cu) {
        ctx->pc = 0x1D151Cu;
            // 0x1d151c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D1520u;
        goto label_1d1520;
    }
    ctx->pc = 0x1D1518u;
    SET_GPR_U32(ctx, 31, 0x1D1520u);
    ctx->pc = 0x1D151Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1518u;
            // 0x1d151c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1520u; }
        if (ctx->pc != 0x1D1520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1520u; }
        if (ctx->pc != 0x1D1520u) { return; }
    }
    ctx->pc = 0x1D1520u;
label_1d1520:
    // 0x1d1520: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1d1524:
    if (ctx->pc == 0x1D1524u) {
        ctx->pc = 0x1D1528u;
        goto label_1d1528;
    }
    ctx->pc = 0x1D1520u;
    {
        const bool branch_taken_0x1d1520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1520) {
            ctx->pc = 0x1D15B4u;
            goto label_1d15b4;
        }
    }
    ctx->pc = 0x1D1528u;
label_1d1528:
    // 0x1d1528: 0x83828e14  lb          $v0, -0x71EC($gp)
    ctx->pc = 0x1d1528u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938132)));
label_1d152c:
    // 0x1d152c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1d1530:
    if (ctx->pc == 0x1D1530u) {
        ctx->pc = 0x1D1530u;
            // 0x1d1530: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x1D1534u;
        goto label_1d1534;
    }
    ctx->pc = 0x1D152Cu;
    {
        const bool branch_taken_0x1d152c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D152Cu;
            // 0x1d1530: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d152c) {
            ctx->pc = 0x1D1540u;
            goto label_1d1540;
        }
    }
    ctx->pc = 0x1D1534u;
label_1d1534:
    // 0x1d1534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1538:
    // 0x1d1538: 0xaf838e10  sw          $v1, -0x71F0($gp)
    ctx->pc = 0x1d1538u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938128), GPR_U32(ctx, 3));
label_1d153c:
    // 0x1d153c: 0xa3828e14  sb          $v0, -0x71EC($gp)
    ctx->pc = 0x1d153cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938132), (uint8_t)GPR_U32(ctx, 2));
label_1d1540:
    // 0x1d1540: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d1540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d1544:
    // 0x1d1544: 0x3c0701ed  lui         $a3, 0x1ED
    ctx->pc = 0x1d1544u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)493 << 16));
label_1d1548:
    // 0x1d1548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d154c:
    // 0x1d154c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d154cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1550:
    // 0x1d1550: 0xc05d420  jal         func_175080
label_1d1554:
    if (ctx->pc == 0x1D1554u) {
        ctx->pc = 0x1D1554u;
            // 0x1d1554: 0x24e788e0  addiu       $a3, $a3, -0x7720 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936800));
        ctx->pc = 0x1D1558u;
        goto label_1d1558;
    }
    ctx->pc = 0x1D1550u;
    SET_GPR_U32(ctx, 31, 0x1D1558u);
    ctx->pc = 0x1D1554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1550u;
            // 0x1d1554: 0x24e788e0  addiu       $a3, $a3, -0x7720 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1558u; }
        if (ctx->pc != 0x1D1558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1558u; }
        if (ctx->pc != 0x1D1558u) { return; }
    }
    ctx->pc = 0x1D1558u;
label_1d1558:
    // 0x1d1558: 0xc78c8e10  lwc1        $f12, -0x71F0($gp)
    ctx->pc = 0x1d1558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d155c:
    // 0x1d155c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1d155cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1d1560:
    // 0x1d1560: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x1d1560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_1d1564:
    // 0x1d1564: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1d1564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1d1568:
    // 0x1d1568: 0x24a588e0  addiu       $a1, $a1, -0x7720
    ctx->pc = 0x1d1568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936800));
label_1d156c:
    // 0x1d156c: 0x24847980  addiu       $a0, $a0, 0x7980
    ctx->pc = 0x1d156cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31104));
label_1d1570:
    // 0x1d1570: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d1570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d1574:
    // 0x1d1574: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d1574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d1578:
    // 0x1d1578: 0xc071718  jal         func_1C5C60
label_1d157c:
    if (ctx->pc == 0x1D157Cu) {
        ctx->pc = 0x1D157Cu;
            // 0x1d157c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1D1580u;
        goto label_1d1580;
    }
    ctx->pc = 0x1D1578u;
    SET_GPR_U32(ctx, 31, 0x1D1580u);
    ctx->pc = 0x1D157Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1578u;
            // 0x1d157c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5C60u;
    if (runtime->hasFunction(0x1C5C60u)) {
        auto targetFn = runtime->lookupFunction(0x1C5C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1580u; }
        if (ctx->pc != 0x1D1580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__14CWeaponElementFPA4_fPffif_0x1c5c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1580u; }
        if (ctx->pc != 0x1D1580u) { return; }
    }
    ctx->pc = 0x1D1580u;
label_1d1580:
    // 0x1d1580: 0xc7828e10  lwc1        $f2, -0x71F0($gp)
    ctx->pc = 0x1d1580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d1584:
    // 0x1d1584: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1d1584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_1d1588:
    // 0x1d1588: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d1588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d158c:
    // 0x1d158c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1d158cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_1d1590:
    // 0x1d1590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1594:
    // 0x1d1594: 0x0  nop
    ctx->pc = 0x1d1594u;
    // NOP
label_1d1598:
    // 0x1d1598: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1d1598u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1d159c:
    // 0x1d159c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d159cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d15a0:
    // 0x1d15a0: 0x0  nop
    ctx->pc = 0x1d15a0u;
    // NOP
label_1d15a4:
    // 0x1d15a4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1d15a8:
    if (ctx->pc == 0x1D15A8u) {
        ctx->pc = 0x1D15A8u;
            // 0x1d15a8: 0xe7818e10  swc1        $f1, -0x71F0($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938128), bits); }
        ctx->pc = 0x1D15ACu;
        goto label_1d15ac;
    }
    ctx->pc = 0x1D15A4u;
    {
        const bool branch_taken_0x1d15a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D15A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D15A4u;
            // 0x1d15a8: 0xe7818e10  swc1        $f1, -0x71F0($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15a4) {
            ctx->pc = 0x1D15B4u;
            goto label_1d15b4;
        }
    }
    ctx->pc = 0x1D15ACu;
label_1d15ac:
    // 0x1d15ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d15acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d15b0:
    // 0x1d15b0: 0xaf828e10  sw          $v0, -0x71F0($gp)
    ctx->pc = 0x1d15b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938128), GPR_U32(ctx, 2));
label_1d15b4:
    // 0x1d15b4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d15b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d15b8:
    // 0x1d15b8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d15b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d15bc:
    // 0x1d15bc: 0xc052d1c  jal         func_14B470
label_1d15c0:
    if (ctx->pc == 0x1D15C0u) {
        ctx->pc = 0x1D15C0u;
            // 0x1d15c0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D15C4u;
        goto label_1d15c4;
    }
    ctx->pc = 0x1D15BCu;
    SET_GPR_U32(ctx, 31, 0x1D15C4u);
    ctx->pc = 0x1D15C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D15BCu;
            // 0x1d15c0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D15C4u; }
        if (ctx->pc != 0x1D15C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D15C4u; }
        if (ctx->pc != 0x1D15C4u) { return; }
    }
    ctx->pc = 0x1D15C4u;
label_1d15c4:
    // 0x1d15c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1d15c8:
    if (ctx->pc == 0x1D15C8u) {
        ctx->pc = 0x1D15CCu;
        goto label_1d15cc;
    }
    ctx->pc = 0x1D15C4u;
    {
        const bool branch_taken_0x1d15c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d15c4) {
            ctx->pc = 0x1D1610u;
            goto label_1d1610;
        }
    }
    ctx->pc = 0x1D15CCu;
label_1d15cc:
    // 0x1d15cc: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d15ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d15d0:
    // 0x1d15d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d15d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d15d4:
    // 0x1d15d4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d15d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d15d8:
    // 0x1d15d8: 0x320f809  jalr        $t9
label_1d15dc:
    if (ctx->pc == 0x1D15DCu) {
        ctx->pc = 0x1D15DCu;
            // 0x1d15dc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1D15E0u;
        goto label_1d15e0;
    }
    ctx->pc = 0x1D15D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D15E0u);
        ctx->pc = 0x1D15DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D15D8u;
            // 0x1d15dc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D15E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D15E0u; }
            if (ctx->pc != 0x1D15E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D15E0u;
label_1d15e0:
    // 0x1d15e0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1d15e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_1d15e4:
    // 0x1d15e4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1d15e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1d15e8:
    // 0x1d15e8: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x1d15e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d15ec:
    // 0x1d15ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d15ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d15f0:
    // 0x1d15f0: 0xc0724bc  jal         func_1C92F0
label_1d15f4:
    if (ctx->pc == 0x1D15F4u) {
        ctx->pc = 0x1D15F8u;
        goto label_1d15f8;
    }
    ctx->pc = 0x1D15F0u;
    SET_GPR_U32(ctx, 31, 0x1D15F8u);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D15F8u; }
        if (ctx->pc != 0x1D15F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D15F8u; }
        if (ctx->pc != 0x1D15F8u) { return; }
    }
    ctx->pc = 0x1D15F8u;
label_1d15f8:
    // 0x1d15f8: 0x3c0401ec  lui         $a0, 0x1EC
    ctx->pc = 0x1d15f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)492 << 16));
label_1d15fc:
    // 0x1d15fc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1d15fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d1600:
    // 0x1d1600: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d1600u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d1604:
    // 0x1d1604: 0x24840e20  addiu       $a0, $a0, 0xE20
    ctx->pc = 0x1d1604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3616));
label_1d1608:
    // 0x1d1608: 0xc06ffbc  jal         func_1BFEF0
label_1d160c:
    if (ctx->pc == 0x1D160Cu) {
        ctx->pc = 0x1D160Cu;
            // 0x1d160c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1D1610u;
        goto label_1d1610;
    }
    ctx->pc = 0x1D1608u;
    SET_GPR_U32(ctx, 31, 0x1D1610u);
    ctx->pc = 0x1D160Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1608u;
            // 0x1d160c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFEF0u;
    if (runtime->hasFunction(0x1BFEF0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1610u; }
        if (ctx->pc != 0x1D1610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__8CTornadoFPfff_0x1bfef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1610u; }
        if (ctx->pc != 0x1D1610u) { return; }
    }
    ctx->pc = 0x1D1610u;
label_1d1610:
    // 0x1d1610: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d1610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d1614:
    // 0x1d1614: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d1614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d1618:
    // 0x1d1618: 0xc052cfc  jal         func_14B3F0
label_1d161c:
    if (ctx->pc == 0x1D161Cu) {
        ctx->pc = 0x1D161Cu;
            // 0x1d161c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D1620u;
        goto label_1d1620;
    }
    ctx->pc = 0x1D1618u;
    SET_GPR_U32(ctx, 31, 0x1D1620u);
    ctx->pc = 0x1D161Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1618u;
            // 0x1d161c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3F0u;
    if (runtime->hasFunction(0x14B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1620u; }
        if (ctx->pc != 0x1D1620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On2__8CGamePadFi_0x14b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1620u; }
        if (ctx->pc != 0x1D1620u) { return; }
    }
    ctx->pc = 0x1D1620u;
label_1d1620:
    // 0x1d1620: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1d1624:
    if (ctx->pc == 0x1D1624u) {
        ctx->pc = 0x1D1628u;
        goto label_1d1628;
    }
    ctx->pc = 0x1D1620u;
    {
        const bool branch_taken_0x1d1620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1620) {
            ctx->pc = 0x1D164Cu;
            goto label_1d164c;
        }
    }
    ctx->pc = 0x1D1628u;
label_1d1628:
    // 0x1d1628: 0x8f858db0  lw          $a1, -0x7250($gp)
    ctx->pc = 0x1d1628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d162c:
    // 0x1d162c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1d162cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_1d1630:
    // 0x1d1630: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1634:
    // 0x1d1634: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d1634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1d1638:
    // 0x1d1638: 0x80a40048  lb          $a0, 0x48($a1)
    ctx->pc = 0x1d1638u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 72)));
label_1d163c:
    // 0x1d163c: 0xa0a40049  sb          $a0, 0x49($a1)
    ctx->pc = 0x1d163cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 73), (uint8_t)GPR_U32(ctx, 4));
label_1d1640:
    // 0x1d1640: 0xa0a30048  sb          $v1, 0x48($a1)
    ctx->pc = 0x1d1640u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 72), (uint8_t)GPR_U32(ctx, 3));
label_1d1644:
    // 0x1d1644: 0xaca0004c  sw          $zero, 0x4C($a1)
    ctx->pc = 0x1d1644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
label_1d1648:
    // 0x1d1648: 0xaca20050  sw          $v0, 0x50($a1)
    ctx->pc = 0x1d1648u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 2));
label_1d164c:
    // 0x1d164c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d164cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d1650:
    // 0x1d1650: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d1650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1654:
    // 0x1d1654: 0xc052cfc  jal         func_14B3F0
label_1d1658:
    if (ctx->pc == 0x1D1658u) {
        ctx->pc = 0x1D1658u;
            // 0x1d1658: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D165Cu;
        goto label_1d165c;
    }
    ctx->pc = 0x1D1654u;
    SET_GPR_U32(ctx, 31, 0x1D165Cu);
    ctx->pc = 0x1D1658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1654u;
            // 0x1d1658: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3F0u;
    if (runtime->hasFunction(0x14B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D165Cu; }
        if (ctx->pc != 0x1D165Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On2__8CGamePadFi_0x14b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D165Cu; }
        if (ctx->pc != 0x1D165Cu) { return; }
    }
    ctx->pc = 0x1D165Cu;
label_1d165c:
    // 0x1d165c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1d1660:
    if (ctx->pc == 0x1D1660u) {
        ctx->pc = 0x1D1664u;
        goto label_1d1664;
    }
    ctx->pc = 0x1D165Cu;
    {
        const bool branch_taken_0x1d165c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d165c) {
            ctx->pc = 0x1D1688u;
            goto label_1d1688;
        }
    }
    ctx->pc = 0x1D1664u;
label_1d1664:
    // 0x1d1664: 0x8f858db0  lw          $a1, -0x7250($gp)
    ctx->pc = 0x1d1664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d1668:
    // 0x1d1668: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1d1668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_1d166c:
    // 0x1d166c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d166cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d1670:
    // 0x1d1670: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d1670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1d1674:
    // 0x1d1674: 0x80a40048  lb          $a0, 0x48($a1)
    ctx->pc = 0x1d1674u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 72)));
label_1d1678:
    // 0x1d1678: 0xa0a40049  sb          $a0, 0x49($a1)
    ctx->pc = 0x1d1678u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 73), (uint8_t)GPR_U32(ctx, 4));
label_1d167c:
    // 0x1d167c: 0xa0a00048  sb          $zero, 0x48($a1)
    ctx->pc = 0x1d167cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 72), (uint8_t)GPR_U32(ctx, 0));
label_1d1680:
    // 0x1d1680: 0xaca3004c  sw          $v1, 0x4C($a1)
    ctx->pc = 0x1d1680u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 3));
label_1d1684:
    // 0x1d1684: 0xaca20050  sw          $v0, 0x50($a1)
    ctx->pc = 0x1d1684u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 2));
label_1d1688:
    // 0x1d1688: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d1688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d168c:
    // 0x1d168c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1d168cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1d1690:
    // 0x1d1690: 0xc052d0c  jal         func_14B430
label_1d1694:
    if (ctx->pc == 0x1D1694u) {
        ctx->pc = 0x1D1694u;
            // 0x1d1694: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D1698u;
        goto label_1d1698;
    }
    ctx->pc = 0x1D1690u;
    SET_GPR_U32(ctx, 31, 0x1D1698u);
    ctx->pc = 0x1D1694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1690u;
            // 0x1d1694: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1698u; }
        if (ctx->pc != 0x1D1698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1698u; }
        if (ctx->pc != 0x1D1698u) { return; }
    }
    ctx->pc = 0x1D1698u;
label_1d1698:
    // 0x1d1698: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1d169c:
    if (ctx->pc == 0x1D169Cu) {
        ctx->pc = 0x1D169Cu;
            // 0x1d169c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D16A0u;
        goto label_1d16a0;
    }
    ctx->pc = 0x1D1698u;
    {
        const bool branch_taken_0x1d1698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D169Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1698u;
            // 0x1d169c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1698) {
            ctx->pc = 0x1D16DCu;
            goto label_1d16dc;
        }
    }
    ctx->pc = 0x1D16A0u;
label_1d16a0:
    // 0x1d16a0: 0x8f828da4  lw          $v0, -0x725C($gp)
    ctx->pc = 0x1d16a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938020)));
label_1d16a4:
    // 0x1d16a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d16a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d16a8:
    // 0x1d16a8: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x1d16a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
label_1d16ac:
    // 0x1d16ac: 0x411821  addu        $v1, $v0, $at
    ctx->pc = 0x1d16acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1d16b0:
    // 0x1d16b0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1d16b4:
    if (ctx->pc == 0x1D16B4u) {
        ctx->pc = 0x1D16B8u;
        goto label_1d16b8;
    }
    ctx->pc = 0x1D16B0u;
    {
        const bool branch_taken_0x1d16b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d16b0) {
            ctx->pc = 0x1D16D8u;
            goto label_1d16d8;
        }
    }
    ctx->pc = 0x1D16B8u;
label_1d16b8:
    // 0x1d16b8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d16b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d16bc:
    // 0x1d16bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d16c0:
    // 0x1d16c0: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x1d16c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_1d16c4:
    // 0x1d16c4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d16c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d16c8:
    // 0x1d16c8: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1d16c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1d16cc:
    // 0x1d16cc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1d16d0:
    if (ctx->pc == 0x1D16D0u) {
        ctx->pc = 0x1D16D4u;
        goto label_1d16d4;
    }
    ctx->pc = 0x1D16CCu;
    {
        const bool branch_taken_0x1d16cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d16cc) {
            ctx->pc = 0x1D16D8u;
            goto label_1d16d8;
        }
    }
    ctx->pc = 0x1D16D4u;
label_1d16d4:
    // 0x1d16d4: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1d16d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_1d16d8:
    // 0x1d16d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d16d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d16dc:
    // 0x1d16dc: 0xc0683a8  jal         func_1A0EA0
label_1d16e0:
    if (ctx->pc == 0x1D16E0u) {
        ctx->pc = 0x1D16E4u;
        goto label_1d16e4;
    }
    ctx->pc = 0x1D16DCu;
    SET_GPR_U32(ctx, 31, 0x1D16E4u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D16E4u; }
        if (ctx->pc != 0x1D16E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D16E4u; }
        if (ctx->pc != 0x1D16E4u) { return; }
    }
    ctx->pc = 0x1D16E4u;
label_1d16e4:
    // 0x1d16e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d16e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d16e8:
    // 0x1d16e8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1d16ec:
    if (ctx->pc == 0x1D16ECu) {
        ctx->pc = 0x1D16ECu;
            // 0x1d16ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D16F0u;
        goto label_1d16f0;
    }
    ctx->pc = 0x1D16E8u;
    {
        const bool branch_taken_0x1d16e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D16ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D16E8u;
            // 0x1d16ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16e8) {
            ctx->pc = 0x1D1704u;
            goto label_1d1704;
        }
    }
    ctx->pc = 0x1D16F0u;
label_1d16f0:
    // 0x1d16f0: 0xc0680f8  jal         func_1A03E0
label_1d16f4:
    if (ctx->pc == 0x1D16F4u) {
        ctx->pc = 0x1D16F8u;
        goto label_1d16f8;
    }
    ctx->pc = 0x1D16F0u;
    SET_GPR_U32(ctx, 31, 0x1D16F8u);
    ctx->pc = 0x1A03E0u;
    if (runtime->hasFunction(0x1A03E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D16F8u; }
        if (ctx->pc != 0x1D16F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHp_i__16CBattleCharaInfoFv_0x1a03e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D16F8u; }
        if (ctx->pc != 0x1D16F8u) { return; }
    }
    ctx->pc = 0x1D16F8u;
label_1d16f8:
    // 0x1d16f8: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_1d16fc:
    if (ctx->pc == 0x1D16FCu) {
        ctx->pc = 0x1D1700u;
        goto label_1d1700;
    }
    ctx->pc = 0x1D16F8u;
    {
        const bool branch_taken_0x1d16f8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d16f8) {
            ctx->pc = 0x1D1704u;
            goto label_1d1704;
        }
    }
    ctx->pc = 0x1D1700u;
label_1d1700:
    // 0x1d1700: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1d1700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1704:
    // 0x1d1704: 0xc0c0fc8  jal         func_303F20
label_1d1708:
    if (ctx->pc == 0x1D1708u) {
        ctx->pc = 0x1D170Cu;
        goto label_1d170c;
    }
    ctx->pc = 0x1D1704u;
    SET_GPR_U32(ctx, 31, 0x1D170Cu);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D170Cu; }
        if (ctx->pc != 0x1D170Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D170Cu; }
        if (ctx->pc != 0x1D170Cu) { return; }
    }
    ctx->pc = 0x1D170Cu;
label_1d170c:
    // 0x1d170c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_1d1710:
    if (ctx->pc == 0x1D1710u) {
        ctx->pc = 0x1D1710u;
            // 0x1d1710: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1D1714u;
        goto label_1d1714;
    }
    ctx->pc = 0x1D170Cu;
    {
        const bool branch_taken_0x1d170c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D170Cu;
            // 0x1d1710: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d170c) {
            ctx->pc = 0x1D17C4u;
            goto label_1d17c4;
        }
    }
    ctx->pc = 0x1D1714u;
label_1d1714:
    // 0x1d1714: 0xc0c1048  jal         func_304120
label_1d1718:
    if (ctx->pc == 0x1D1718u) {
        ctx->pc = 0x1D171Cu;
        goto label_1d171c;
    }
    ctx->pc = 0x1D1714u;
    SET_GPR_U32(ctx, 31, 0x1D171Cu);
    ctx->pc = 0x304120u;
    if (runtime->hasFunction(0x304120u)) {
        auto targetFn = runtime->lookupFunction(0x304120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D171Cu; }
        if (ctx->pc != 0x1D171Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgLoopSubGame__Fv_0x304120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D171Cu; }
        if (ctx->pc != 0x1D171Cu) { return; }
    }
    ctx->pc = 0x1D171Cu;
label_1d171c:
    // 0x1d171c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d171cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d1720:
    // 0x1d1720: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d1720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d1724:
    // 0x1d1724: 0xc052d0c  jal         func_14B430
label_1d1728:
    if (ctx->pc == 0x1D1728u) {
        ctx->pc = 0x1D1728u;
            // 0x1d1728: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D172Cu;
        goto label_1d172c;
    }
    ctx->pc = 0x1D1724u;
    SET_GPR_U32(ctx, 31, 0x1D172Cu);
    ctx->pc = 0x1D1728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1724u;
            // 0x1d1728: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D172Cu; }
        if (ctx->pc != 0x1D172Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D172Cu; }
        if (ctx->pc != 0x1D172Cu) { return; }
    }
    ctx->pc = 0x1D172Cu;
label_1d172c:
    // 0x1d172c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1d1730:
    if (ctx->pc == 0x1D1730u) {
        ctx->pc = 0x1D1730u;
            // 0x1d1730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1734u;
        goto label_1d1734;
    }
    ctx->pc = 0x1D172Cu;
    {
        const bool branch_taken_0x1d172c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D172Cu;
            // 0x1d1730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d172c) {
            ctx->pc = 0x1D17BCu;
            goto label_1d17bc;
        }
    }
    ctx->pc = 0x1D1734u;
label_1d1734:
    // 0x1d1734: 0xc0c0fd4  jal         func_303F50
label_1d1738:
    if (ctx->pc == 0x1D1738u) {
        ctx->pc = 0x1D173Cu;
        goto label_1d173c;
    }
    ctx->pc = 0x1D1734u;
    SET_GPR_U32(ctx, 31, 0x1D173Cu);
    ctx->pc = 0x303F50u;
    if (runtime->hasFunction(0x303F50u)) {
        auto targetFn = runtime->lookupFunction(0x303F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D173Cu; }
        if (ctx->pc != 0x1D173Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgMenuOpenEnable__Fv_0x303f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D173Cu; }
        if (ctx->pc != 0x1D173Cu) { return; }
    }
    ctx->pc = 0x1D173Cu;
label_1d173c:
    // 0x1d173c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1d1740:
    if (ctx->pc == 0x1D1740u) {
        ctx->pc = 0x1D1740u;
            // 0x1d1740: 0x3c0401eb  lui         $a0, 0x1EB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
        ctx->pc = 0x1D1744u;
        goto label_1d1744;
    }
    ctx->pc = 0x1D173Cu;
    {
        const bool branch_taken_0x1d173c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D173Cu;
            // 0x1d1740: 0x3c0401eb  lui         $a0, 0x1EB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d173c) {
            ctx->pc = 0x1D17B8u;
            goto label_1d17b8;
        }
    }
    ctx->pc = 0x1D1744u;
label_1d1744:
    // 0x1d1744: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d1744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d1748:
    // 0x1d1748: 0xc06e5c4  jal         func_1B9710
label_1d174c:
    if (ctx->pc == 0x1D174Cu) {
        ctx->pc = 0x1D174Cu;
            // 0x1d174c: 0x2484f390  addiu       $a0, $a0, -0xC70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964112));
        ctx->pc = 0x1D1750u;
        goto label_1d1750;
    }
    ctx->pc = 0x1D1748u;
    SET_GPR_U32(ctx, 31, 0x1D1750u);
    ctx->pc = 0x1D174Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1748u;
            // 0x1d174c: 0x2484f390  addiu       $a0, $a0, -0xC70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9710u;
    if (runtime->hasFunction(0x1B9710u)) {
        auto targetFn = runtime->lookupFunction(0x1B9710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1750u; }
        if (ctx->pc != 0x1D1750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopVoice__16CRoboVoiceSystemFi_0x1b9710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1750u; }
        if (ctx->pc != 0x1D1750u) { return; }
    }
    ctx->pc = 0x1D1750u;
label_1d1750:
    // 0x1d1750: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1d1750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d1754:
    // 0x1d1754: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1758:
    // 0x1d1758: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1d1758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1d175c:
    // 0x1d175c: 0xac23d618  sw          $v1, -0x29E8($at)
    ctx->pc = 0x1d175cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956568), GPR_U32(ctx, 3));
label_1d1760:
    // 0x1d1760: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1764:
    // 0x1d1764: 0xac23f6e0  sw          $v1, -0x920($at)
    ctx->pc = 0x1d1764u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 3));
label_1d1768:
    // 0x1d1768: 0xc05f5e0  jal         func_17D780
label_1d176c:
    if (ctx->pc == 0x1D176Cu) {
        ctx->pc = 0x1D176Cu;
            // 0x1d176c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x1D1770u;
        goto label_1d1770;
    }
    ctx->pc = 0x1D1768u;
    SET_GPR_U32(ctx, 31, 0x1D1770u);
    ctx->pc = 0x1D176Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1768u;
            // 0x1d176c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D780u;
    if (runtime->hasFunction(0x17D780u)) {
        auto targetFn = runtime->lookupFunction(0x17D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1770u; }
        if (ctx->pc != 0x1D1770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetFade__10CFadeInOutFv_0x17d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1770u; }
        if (ctx->pc != 0x1D1770u) { return; }
    }
    ctx->pc = 0x1D1770u;
label_1d1770:
    // 0x1d1770: 0x8f858db0  lw          $a1, -0x7250($gp)
    ctx->pc = 0x1d1770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d1774:
    // 0x1d1774: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d1774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d1778:
    // 0x1d1778: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d177c:
    // 0x1d177c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d177cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1780:
    // 0x1d1780: 0x80a40048  lb          $a0, 0x48($a1)
    ctx->pc = 0x1d1780u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 72)));
label_1d1784:
    // 0x1d1784: 0xa0a40049  sb          $a0, 0x49($a1)
    ctx->pc = 0x1d1784u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 73), (uint8_t)GPR_U32(ctx, 4));
label_1d1788:
    // 0x1d1788: 0xa0a00048  sb          $zero, 0x48($a1)
    ctx->pc = 0x1d1788u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 72), (uint8_t)GPR_U32(ctx, 0));
label_1d178c:
    // 0x1d178c: 0xaca3004c  sw          $v1, 0x4C($a1)
    ctx->pc = 0x1d178cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 3));
label_1d1790:
    // 0x1d1790: 0xaca30050  sw          $v1, 0x50($a1)
    ctx->pc = 0x1d1790u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 3));
label_1d1794:
    // 0x1d1794: 0xaca0004c  sw          $zero, 0x4C($a1)
    ctx->pc = 0x1d1794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
label_1d1798:
    // 0x1d1798: 0xac200460  sw          $zero, 0x460($at)
    ctx->pc = 0x1d1798u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1120), GPR_U32(ctx, 0));
label_1d179c:
    // 0x1d179c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d179cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d17a0:
    // 0x1d17a0: 0xac200464  sw          $zero, 0x464($at)
    ctx->pc = 0x1d17a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1124), GPR_U32(ctx, 0));
label_1d17a4:
    // 0x1d17a4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d17a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d17a8:
    // 0x1d17a8: 0xac200468  sw          $zero, 0x468($at)
    ctx->pc = 0x1d17a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1128), GPR_U32(ctx, 0));
label_1d17ac:
    // 0x1d17ac: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d17acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d17b0:
    // 0x1d17b0: 0x10000697  b           . + 4 + (0x697 << 2)
label_1d17b4:
    if (ctx->pc == 0x1D17B4u) {
        ctx->pc = 0x1D17B4u;
            // 0x1d17b4: 0xac20045c  sw          $zero, 0x45C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1116), GPR_U32(ctx, 0));
        ctx->pc = 0x1D17B8u;
        goto label_1d17b8;
    }
    ctx->pc = 0x1D17B0u;
    {
        const bool branch_taken_0x1d17b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D17B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D17B0u;
            // 0x1d17b4: 0xac20045c  sw          $zero, 0x45C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17b0) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D17B8u;
label_1d17b8:
    // 0x1d17b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d17b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d17bc:
    // 0x1d17bc: 0x10000694  b           . + 4 + (0x694 << 2)
label_1d17c0:
    if (ctx->pc == 0x1D17C0u) {
        ctx->pc = 0x1D17C4u;
        goto label_1d17c4;
    }
    ctx->pc = 0x1D17BCu;
    {
        const bool branch_taken_0x1d17bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d17bc) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D17C4u;
label_1d17c4:
    // 0x1d17c4: 0x8c22f6e8  lw          $v0, -0x918($at)
    ctx->pc = 0x1d17c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964968)));
label_1d17c8:
    // 0x1d17c8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1d17cc:
    if (ctx->pc == 0x1D17CCu) {
        ctx->pc = 0x1D17D0u;
        goto label_1d17d0;
    }
    ctx->pc = 0x1D17C8u;
    {
        const bool branch_taken_0x1d17c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d17c8) {
            ctx->pc = 0x1D1810u;
            goto label_1d1810;
        }
    }
    ctx->pc = 0x1D17D0u;
label_1d17d0:
    // 0x1d17d0: 0xc0c39a0  jal         func_30E680
label_1d17d4:
    if (ctx->pc == 0x1D17D4u) {
        ctx->pc = 0x1D17D8u;
        goto label_1d17d8;
    }
    ctx->pc = 0x1D17D0u;
    SET_GPR_U32(ctx, 31, 0x1D17D8u);
    ctx->pc = 0x30E680u;
    if (runtime->hasFunction(0x30E680u)) {
        auto targetFn = runtime->lookupFunction(0x30E680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D17D8u; }
        if (ctx->pc != 0x1D17D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowTakePhoto__Fv_0x30e680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D17D8u; }
        if (ctx->pc != 0x1D17D8u) { return; }
    }
    ctx->pc = 0x1D17D8u;
label_1d17d8:
    // 0x1d17d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1d17dc:
    if (ctx->pc == 0x1D17DCu) {
        ctx->pc = 0x1D17E0u;
        goto label_1d17e0;
    }
    ctx->pc = 0x1D17D8u;
    {
        const bool branch_taken_0x1d17d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d17d8) {
            ctx->pc = 0x1D1810u;
            goto label_1d1810;
        }
    }
    ctx->pc = 0x1D17E0u;
label_1d17e0:
    // 0x1d17e0: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d17e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d17e4:
    // 0x1d17e4: 0xc0a0e30  jal         func_2838C0
label_1d17e8:
    if (ctx->pc == 0x1D17E8u) {
        ctx->pc = 0x1D17E8u;
            // 0x1d17e8: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->pc = 0x1D17ECu;
        goto label_1d17ec;
    }
    ctx->pc = 0x1D17E4u;
    SET_GPR_U32(ctx, 31, 0x1D17ECu);
    ctx->pc = 0x1D17E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D17E4u;
            // 0x1d17e8: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D17ECu; }
        if (ctx->pc != 0x1D17ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D17ECu; }
        if (ctx->pc != 0x1D17ECu) { return; }
    }
    ctx->pc = 0x1D17ECu;
label_1d17ec:
    // 0x1d17ec: 0x8f858dd8  lw          $a1, -0x7228($gp)
    ctx->pc = 0x1d17ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d17f0:
    // 0x1d17f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d17f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d17f4:
    // 0x1d17f4: 0xc074fe0  jal         func_1D3F80
label_1d17f8:
    if (ctx->pc == 0x1D17F8u) {
        ctx->pc = 0x1D17F8u;
            // 0x1d17f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D17FCu;
        goto label_1d17fc;
    }
    ctx->pc = 0x1D17F4u;
    SET_GPR_U32(ctx, 31, 0x1D17FCu);
    ctx->pc = 0x1D17F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D17F4u;
            // 0x1d17f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3F80u;
    if (runtime->hasFunction(0x1D3F80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D17FCu; }
        if (ctx->pc != 0x1D17FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EyeCamera__FP9mgCCameraP11CCharacter2i_0x1d3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D17FCu; }
        if (ctx->pc != 0x1D17FCu) { return; }
    }
    ctx->pc = 0x1D17FCu;
label_1d17fc:
    // 0x1d17fc: 0x8f828da0  lw          $v0, -0x7260($gp)
    ctx->pc = 0x1d17fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1d1800:
    // 0x1d1800: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d1800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d1804:
    // 0x1d1804: 0x24847b60  addiu       $a0, $a0, 0x7B60
    ctx->pc = 0x1d1804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
label_1d1808:
    // 0x1d1808: 0xc0c39b8  jal         func_30E6E0
label_1d180c:
    if (ctx->pc == 0x1D180Cu) {
        ctx->pc = 0x1D180Cu;
            // 0x1d180c: 0x24457f30  addiu       $a1, $v0, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32560));
        ctx->pc = 0x1D1810u;
        goto label_1d1810;
    }
    ctx->pc = 0x1D1808u;
    SET_GPR_U32(ctx, 31, 0x1D1810u);
    ctx->pc = 0x1D180Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1808u;
            // 0x1d180c: 0x24457f30  addiu       $a1, $v0, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E6E0u;
    if (runtime->hasFunction(0x30E6E0u)) {
        auto targetFn = runtime->lookupFunction(0x30E6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1810u; }
        if (ctx->pc != 0x1D1810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoopTakePhoto__FP11CPadControlP15CInventUserData_0x30e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1810u; }
        if (ctx->pc != 0x1D1810u) { return; }
    }
    ctx->pc = 0x1D1810u;
label_1d1810:
    // 0x1d1810: 0xc074c94  jal         func_1D3250
label_1d1814:
    if (ctx->pc == 0x1D1814u) {
        ctx->pc = 0x1D1818u;
        goto label_1d1818;
    }
    ctx->pc = 0x1D1810u;
    SET_GPR_U32(ctx, 31, 0x1D1818u);
    ctx->pc = 0x1D3250u;
    if (runtime->hasFunction(0x1D3250u)) {
        auto targetFn = runtime->lookupFunction(0x1D3250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1818u; }
        if (ctx->pc != 0x1D1818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsEventRun__Fv_0x1d3250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1818u; }
        if (ctx->pc != 0x1D1818u) { return; }
    }
    ctx->pc = 0x1D1818u;
label_1d1818:
    // 0x1d1818: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d1818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d181c:
    // 0x1d181c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d181cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d1820:
    // 0x1d1820: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d1820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d1824:
    // 0x1d1824: 0x320f809  jalr        $t9
label_1d1828:
    if (ctx->pc == 0x1D1828u) {
        ctx->pc = 0x1D1828u;
            // 0x1d1828: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1D182Cu;
        goto label_1d182c;
    }
    ctx->pc = 0x1D1824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D182Cu);
        ctx->pc = 0x1D1828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1824u;
            // 0x1d1828: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D182Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D182Cu; }
            if (ctx->pc != 0x1D182Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D182Cu;
label_1d182c:
    // 0x1d182c: 0x8f838dd8  lw          $v1, -0x7228($gp)
    ctx->pc = 0x1d182cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d1830:
    // 0x1d1830: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1d1830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
label_1d1834:
    // 0x1d1834: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1d1834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_1d1838:
    // 0x1d1838: 0x8f848dcc  lw          $a0, -0x7234($gp)
    ctx->pc = 0x1d1838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1d183c:
    // 0x1d183c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d183cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1840:
    // 0x1d1840: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1d1840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1844:
    // 0x1d1844: 0xc4620110  lwc1        $f2, 0x110($v1)
    ctx->pc = 0x1d1844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d1848:
    // 0x1d1848: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d1848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1d184c:
    // 0x1d184c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d184cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d1850:
    // 0x1d1850: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1d1850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1d1854:
    // 0x1d1854: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d1854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d1858:
    // 0x1d1858: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d1858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d185c:
    // 0x1d185c: 0x320f809  jalr        $t9
label_1d1860:
    if (ctx->pc == 0x1D1860u) {
        ctx->pc = 0x1D1860u;
            // 0x1d1860: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1D1864u;
        goto label_1d1864;
    }
    ctx->pc = 0x1D185Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D1864u);
        ctx->pc = 0x1D1860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D185Cu;
            // 0x1d1860: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D1864u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D1864u; }
            if (ctx->pc != 0x1D1864u) { return; }
        }
        }
    }
    ctx->pc = 0x1D1864u;
label_1d1864:
    // 0x1d1864: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1d1864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d1868:
    // 0x1d1868: 0x24432e88  addiu       $v1, $v0, 0x2E88
    ctx->pc = 0x1d1868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 11912));
label_1d186c:
    // 0x1d186c: 0x8c422e88  lw          $v0, 0x2E88($v0)
    ctx->pc = 0x1d186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11912)));
label_1d1870:
    // 0x1d1870: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d1874:
    if (ctx->pc == 0x1D1874u) {
        ctx->pc = 0x1D1878u;
        goto label_1d1878;
    }
    ctx->pc = 0x1D1870u;
    {
        const bool branch_taken_0x1d1870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1870) {
            ctx->pc = 0x1D188Cu;
            goto label_1d188c;
        }
    }
    ctx->pc = 0x1D1878u;
label_1d1878:
    // 0x1d1878: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1d1878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1d187c:
    // 0x1d187c: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1d187cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d1880:
    // 0x1d1880: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1d1880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d1884:
    // 0x1d1884: 0x8c422e8c  lw          $v0, 0x2E8C($v0)
    ctx->pc = 0x1d1884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11916)));
label_1d1888:
    // 0x1d1888: 0xa4620044  sh          $v0, 0x44($v1)
    ctx->pc = 0x1d1888u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 2));
label_1d188c:
    // 0x1d188c: 0xc0ba55c  jal         func_2E9570
label_1d1890:
    if (ctx->pc == 0x1D1890u) {
        ctx->pc = 0x1D1894u;
        goto label_1d1894;
    }
    ctx->pc = 0x1D188Cu;
    SET_GPR_U32(ctx, 31, 0x1D1894u);
    ctx->pc = 0x2E9570u;
    if (runtime->hasFunction(0x2E9570u)) {
        auto targetFn = runtime->lookupFunction(0x2E9570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1894u; }
        if (ctx->pc != 0x1D1894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSphidaPtr__Fv_0x2e9570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1894u; }
        if (ctx->pc != 0x1D1894u) { return; }
    }
    ctx->pc = 0x1D1894u;
label_1d1894:
    // 0x1d1894: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d1894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1898:
    // 0x1d1898: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
label_1d189c:
    if (ctx->pc == 0x1D189Cu) {
        ctx->pc = 0x1D18A0u;
        goto label_1d18a0;
    }
    ctx->pc = 0x1D1898u;
    {
        const bool branch_taken_0x1d1898 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1898) {
            ctx->pc = 0x1D1950u;
            goto label_1d1950;
        }
    }
    ctx->pc = 0x1D18A0u;
label_1d18a0:
    // 0x1d18a0: 0x8f828ad4  lw          $v0, -0x752C($gp)
    ctx->pc = 0x1d18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
label_1d18a4:
    // 0x1d18a4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1d18a8:
    if (ctx->pc == 0x1D18A8u) {
        ctx->pc = 0x1D18A8u;
            // 0x1d18a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D18ACu;
        goto label_1d18ac;
    }
    ctx->pc = 0x1D18A4u;
    {
        const bool branch_taken_0x1d18a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D18A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D18A4u;
            // 0x1d18a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18a4) {
            ctx->pc = 0x1D1938u;
            goto label_1d1938;
        }
    }
    ctx->pc = 0x1D18ACu;
label_1d18ac:
    // 0x1d18ac: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d18acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d18b0:
    // 0x1d18b0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1d18b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1d18b4:
    // 0x1d18b4: 0xc0bb538  jal         func_2ED4E0
label_1d18b8:
    if (ctx->pc == 0x1D18B8u) {
        ctx->pc = 0x1D18B8u;
            // 0x1d18b8: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->pc = 0x1D18BCu;
        goto label_1d18bc;
    }
    ctx->pc = 0x1D18B4u;
    SET_GPR_U32(ctx, 31, 0x1D18BCu);
    ctx->pc = 0x1D18B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D18B4u;
            // 0x1d18b8: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D18BCu; }
        if (ctx->pc != 0x1D18BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D18BCu; }
        if (ctx->pc != 0x1D18BCu) { return; }
    }
    ctx->pc = 0x1D18BCu;
label_1d18bc:
    // 0x1d18bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1d18c0:
    if (ctx->pc == 0x1D18C0u) {
        ctx->pc = 0x1D18C4u;
        goto label_1d18c4;
    }
    ctx->pc = 0x1D18BCu;
    {
        const bool branch_taken_0x1d18bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d18bc) {
            ctx->pc = 0x1D18D8u;
            goto label_1d18d8;
        }
    }
    ctx->pc = 0x1D18C4u;
label_1d18c4:
    // 0x1d18c4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d18c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d18c8:
    // 0x1d18c8: 0xc052a3c  jal         func_14A8F0
label_1d18cc:
    if (ctx->pc == 0x1D18CCu) {
        ctx->pc = 0x1D18CCu;
            // 0x1d18cc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D18D0u;
        goto label_1d18d0;
    }
    ctx->pc = 0x1D18C8u;
    SET_GPR_U32(ctx, 31, 0x1D18D0u);
    ctx->pc = 0x1D18CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D18C8u;
            // 0x1d18cc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A8F0u;
    if (runtime->hasFunction(0x14A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x14A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D18D0u; }
        if (ctx->pc != 0x1D18D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Connect__8CGamePadFv_0x14a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D18D0u; }
        if (ctx->pc != 0x1D18D0u) { return; }
    }
    ctx->pc = 0x1D18D0u;
label_1d18d0:
    // 0x1d18d0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1d18d4:
    if (ctx->pc == 0x1D18D4u) {
        ctx->pc = 0x1D18D8u;
        goto label_1d18d8;
    }
    ctx->pc = 0x1D18D0u;
    {
        const bool branch_taken_0x1d18d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d18d0) {
            ctx->pc = 0x1D1934u;
            goto label_1d1934;
        }
    }
    ctx->pc = 0x1D18D8u;
label_1d18d8:
    // 0x1d18d8: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1d18d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1d18dc:
    // 0x1d18dc: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1d18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1d18e0:
    // 0x1d18e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1d18e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1d18e4:
    // 0x1d18e4: 0x2484f390  addiu       $a0, $a0, -0xC70
    ctx->pc = 0x1d18e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964112));
label_1d18e8:
    // 0x1d18e8: 0xac22d618  sw          $v0, -0x29E8($at)
    ctx->pc = 0x1d18e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956568), GPR_U32(ctx, 2));
label_1d18ec:
    // 0x1d18ec: 0xc06e5c4  jal         func_1B9710
label_1d18f0:
    if (ctx->pc == 0x1D18F0u) {
        ctx->pc = 0x1D18F0u;
            // 0x1d18f0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x1D18F4u;
        goto label_1d18f4;
    }
    ctx->pc = 0x1D18ECu;
    SET_GPR_U32(ctx, 31, 0x1D18F4u);
    ctx->pc = 0x1D18F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D18ECu;
            // 0x1d18f0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9710u;
    if (runtime->hasFunction(0x1B9710u)) {
        auto targetFn = runtime->lookupFunction(0x1B9710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D18F4u; }
        if (ctx->pc != 0x1D18F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopVoice__16CRoboVoiceSystemFi_0x1b9710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D18F4u; }
        if (ctx->pc != 0x1D18F4u) { return; }
    }
    ctx->pc = 0x1D18F4u;
label_1d18f4:
    // 0x1d18f4: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1d18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d18f8:
    // 0x1d18f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d18f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d18fc:
    // 0x1d18fc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d18fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1900:
    // 0x1d1900: 0xac23f6e0  sw          $v1, -0x920($at)
    ctx->pc = 0x1d1900u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 3));
label_1d1904:
    // 0x1d1904: 0xc05f5e0  jal         func_17D780
label_1d1908:
    if (ctx->pc == 0x1D1908u) {
        ctx->pc = 0x1D1908u;
            // 0x1d1908: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x1D190Cu;
        goto label_1d190c;
    }
    ctx->pc = 0x1D1904u;
    SET_GPR_U32(ctx, 31, 0x1D190Cu);
    ctx->pc = 0x1D1908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1904u;
            // 0x1d1908: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D780u;
    if (runtime->hasFunction(0x17D780u)) {
        auto targetFn = runtime->lookupFunction(0x17D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D190Cu; }
        if (ctx->pc != 0x1D190Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetFade__10CFadeInOutFv_0x17d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D190Cu; }
        if (ctx->pc != 0x1D190Cu) { return; }
    }
    ctx->pc = 0x1D190Cu;
label_1d190c:
    // 0x1d190c: 0x8f858db0  lw          $a1, -0x7250($gp)
    ctx->pc = 0x1d190cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d1910:
    // 0x1d1910: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d1910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d1914:
    // 0x1d1914: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d1914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1918:
    // 0x1d1918: 0x80a40048  lb          $a0, 0x48($a1)
    ctx->pc = 0x1d1918u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 72)));
label_1d191c:
    // 0x1d191c: 0xa0a40049  sb          $a0, 0x49($a1)
    ctx->pc = 0x1d191cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 73), (uint8_t)GPR_U32(ctx, 4));
label_1d1920:
    // 0x1d1920: 0xa0a00048  sb          $zero, 0x48($a1)
    ctx->pc = 0x1d1920u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 72), (uint8_t)GPR_U32(ctx, 0));
label_1d1924:
    // 0x1d1924: 0xaca3004c  sw          $v1, 0x4C($a1)
    ctx->pc = 0x1d1924u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 3));
label_1d1928:
    // 0x1d1928: 0xaca30050  sw          $v1, 0x50($a1)
    ctx->pc = 0x1d1928u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 3));
label_1d192c:
    // 0x1d192c: 0x10000638  b           . + 4 + (0x638 << 2)
label_1d1930:
    if (ctx->pc == 0x1D1930u) {
        ctx->pc = 0x1D1930u;
            // 0x1d1930: 0xaca0004c  sw          $zero, 0x4C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x1D1934u;
        goto label_1d1934;
    }
    ctx->pc = 0x1D192Cu;
    {
        const bool branch_taken_0x1d192c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D192Cu;
            // 0x1d1930: 0xaca0004c  sw          $zero, 0x4C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d192c) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D1934u;
label_1d1934:
    // 0x1d1934: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d1934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d1938:
    // 0x1d1938: 0xc0ba808  jal         func_2EA020
label_1d193c:
    if (ctx->pc == 0x1D193Cu) {
        ctx->pc = 0x1D1940u;
        goto label_1d1940;
    }
    ctx->pc = 0x1D1938u;
    SET_GPR_U32(ctx, 31, 0x1D1940u);
    ctx->pc = 0x2EA020u;
    if (runtime->hasFunction(0x2EA020u)) {
        auto targetFn = runtime->lookupFunction(0x2EA020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1940u; }
        if (ctx->pc != 0x1D1940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__7CSphidaFv_0x2ea020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1940u; }
        if (ctx->pc != 0x1D1940u) { return; }
    }
    ctx->pc = 0x1D1940u;
label_1d1940:
    // 0x1d1940: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d1944:
    if (ctx->pc == 0x1D1944u) {
        ctx->pc = 0x1D1944u;
            // 0x1d1944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1948u;
        goto label_1d1948;
    }
    ctx->pc = 0x1D1940u;
    {
        const bool branch_taken_0x1d1940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1940u;
            // 0x1d1944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1940) {
            ctx->pc = 0x1D1950u;
            goto label_1d1950;
        }
    }
    ctx->pc = 0x1D1948u;
label_1d1948:
    // 0x1d1948: 0x10000631  b           . + 4 + (0x631 << 2)
label_1d194c:
    if (ctx->pc == 0x1D194Cu) {
        ctx->pc = 0x1D1950u;
        goto label_1d1950;
    }
    ctx->pc = 0x1D1948u;
    {
        const bool branch_taken_0x1d1948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1948) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D1950u;
label_1d1950:
    // 0x1d1950: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d1950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d1954:
    // 0x1d1954: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1d1954u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d1958:
    // 0x1d1958: 0x24530044  addiu       $s3, $v0, 0x44
    ctx->pc = 0x1d1958u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_1d195c:
    // 0x1d195c: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x1d195cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
label_1d1960:
    // 0x1d1960: 0x1052000b  beq         $v0, $s2, . + 4 + (0xB << 2)
label_1d1964:
    if (ctx->pc == 0x1D1964u) {
        ctx->pc = 0x1D1964u;
            // 0x1d1964: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1D1968u;
        goto label_1d1968;
    }
    ctx->pc = 0x1D1960u;
    {
        const bool branch_taken_0x1d1960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1D1964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1960u;
            // 0x1d1964: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1960) {
            ctx->pc = 0x1D1990u;
            goto label_1d1990;
        }
    }
    ctx->pc = 0x1D1968u;
label_1d1968:
    // 0x1d1968: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d1968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d196c:
    // 0x1d196c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d196cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1970:
    // 0x1d1970: 0xc0a2c7c  jal         func_28B1F0
label_1d1974:
    if (ctx->pc == 0x1D1974u) {
        ctx->pc = 0x1D1974u;
            // 0x1d1974: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
        ctx->pc = 0x1D1978u;
        goto label_1d1978;
    }
    ctx->pc = 0x1D1970u;
    SET_GPR_U32(ctx, 31, 0x1D1978u);
    ctx->pc = 0x1D1974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1970u;
            // 0x1d1974: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B1F0u;
    if (runtime->hasFunction(0x28B1F0u)) {
        auto targetFn = runtime->lookupFunction(0x28B1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1978u; }
        if (ctx->pc != 0x1D1978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Switch__20CStartupEpisodeTitleFi_0x28b1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1978u; }
        if (ctx->pc != 0x1D1978u) { return; }
    }
    ctx->pc = 0x1D1978u;
label_1d1978:
    // 0x1d1978: 0xc074e0c  jal         func_1D3830
label_1d197c:
    if (ctx->pc == 0x1D197Cu) {
        ctx->pc = 0x1D197Cu;
            // 0x1d197c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1980u;
        goto label_1d1980;
    }
    ctx->pc = 0x1D1978u;
    SET_GPR_U32(ctx, 31, 0x1D1980u);
    ctx->pc = 0x1D197Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1978u;
            // 0x1d197c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3830u;
    if (runtime->hasFunction(0x1D3830u)) {
        auto targetFn = runtime->lookupFunction(0x1D3830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1980u; }
        if (ctx->pc != 0x1D1980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EventScriptSetup__FP18SYSTEM_SCRIPT_INFO_0x1d3830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1980u; }
        if (ctx->pc != 0x1D1980u) { return; }
    }
    ctx->pc = 0x1D1980u;
label_1d1980:
    // 0x1d1980: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x1d1980u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d1984:
    // 0x1d1984: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d1984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1988:
    // 0x1d1988: 0x10000621  b           . + 4 + (0x621 << 2)
label_1d198c:
    if (ctx->pc == 0x1D198Cu) {
        ctx->pc = 0x1D198Cu;
            // 0x1d198c: 0xa6630000  sh          $v1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D1990u;
        goto label_1d1990;
    }
    ctx->pc = 0x1D1988u;
    {
        const bool branch_taken_0x1d1988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D198Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1988u;
            // 0x1d198c: 0xa6630000  sh          $v1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1988) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D1990u;
label_1d1990:
    // 0x1d1990: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1d1990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1d1994:
    // 0x1d1994: 0xc052d0c  jal         func_14B430
label_1d1998:
    if (ctx->pc == 0x1D1998u) {
        ctx->pc = 0x1D1998u;
            // 0x1d1998: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D199Cu;
        goto label_1d199c;
    }
    ctx->pc = 0x1D1994u;
    SET_GPR_U32(ctx, 31, 0x1D199Cu);
    ctx->pc = 0x1D1998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1994u;
            // 0x1d1998: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D199Cu; }
        if (ctx->pc != 0x1D199Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D199Cu; }
        if (ctx->pc != 0x1D199Cu) { return; }
    }
    ctx->pc = 0x1D199Cu;
label_1d199c:
    // 0x1d199c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1d19a0:
    if (ctx->pc == 0x1D19A0u) {
        ctx->pc = 0x1D19A0u;
            // 0x1d19a0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1D19A4u;
        goto label_1d19a4;
    }
    ctx->pc = 0x1D199Cu;
    {
        const bool branch_taken_0x1d199c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D199Cu;
            // 0x1d19a0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d199c) {
            ctx->pc = 0x1D19A8u;
            goto label_1d19a8;
        }
    }
    ctx->pc = 0x1D19A4u;
label_1d19a4:
    // 0x1d19a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d19a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d19a8:
    // 0x1d19a8: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x1d19a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1d19ac:
    // 0x1d19ac: 0xc052d0c  jal         func_14B430
label_1d19b0:
    if (ctx->pc == 0x1D19B0u) {
        ctx->pc = 0x1D19B0u;
            // 0x1d19b0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D19B4u;
        goto label_1d19b4;
    }
    ctx->pc = 0x1D19ACu;
    SET_GPR_U32(ctx, 31, 0x1D19B4u);
    ctx->pc = 0x1D19B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D19ACu;
            // 0x1d19b0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D19B4u; }
        if (ctx->pc != 0x1D19B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D19B4u; }
        if (ctx->pc != 0x1D19B4u) { return; }
    }
    ctx->pc = 0x1D19B4u;
label_1d19b4:
    // 0x1d19b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1d19b8:
    if (ctx->pc == 0x1D19B8u) {
        ctx->pc = 0x1D19BCu;
        goto label_1d19bc;
    }
    ctx->pc = 0x1D19B4u;
    {
        const bool branch_taken_0x1d19b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d19b4) {
            ctx->pc = 0x1D19C0u;
            goto label_1d19c0;
        }
    }
    ctx->pc = 0x1D19BCu;
label_1d19bc:
    // 0x1d19bc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d19bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d19c0:
    // 0x1d19c0: 0xc05a930  jal         func_16A4C0
label_1d19c4:
    if (ctx->pc == 0x1D19C4u) {
        ctx->pc = 0x1D19C4u;
            // 0x1d19c4: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1D19C8u;
        goto label_1d19c8;
    }
    ctx->pc = 0x1D19C0u;
    SET_GPR_U32(ctx, 31, 0x1D19C8u);
    ctx->pc = 0x1D19C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D19C0u;
            // 0x1d19c4: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A4C0u;
    if (runtime->hasFunction(0x16A4C0u)) {
        auto targetFn = runtime->lookupFunction(0x16A4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D19C8u; }
        if (ctx->pc != 0x1D19C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRunEvent__12CActionCharaFv_0x16a4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D19C8u; }
        if (ctx->pc != 0x1D19C8u) { return; }
    }
    ctx->pc = 0x1D19C8u;
label_1d19c8:
    // 0x1d19c8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_1d19cc:
    if (ctx->pc == 0x1D19CCu) {
        ctx->pc = 0x1D19D0u;
        goto label_1d19d0;
    }
    ctx->pc = 0x1D19C8u;
    {
        const bool branch_taken_0x1d19c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d19c8) {
            ctx->pc = 0x1D1A80u;
            goto label_1d1a80;
        }
    }
    ctx->pc = 0x1D19D0u;
label_1d19d0:
    // 0x1d19d0: 0x640002b  bltz        $s2, . + 4 + (0x2B << 2)
label_1d19d4:
    if (ctx->pc == 0x1D19D4u) {
        ctx->pc = 0x1D19D8u;
        goto label_1d19d8;
    }
    ctx->pc = 0x1D19D0u;
    {
        const bool branch_taken_0x1d19d0 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1d19d0) {
            ctx->pc = 0x1D1A80u;
            goto label_1d1a80;
        }
    }
    ctx->pc = 0x1D19D8u;
label_1d19d8:
    // 0x1d19d8: 0x16000029  bnez        $s0, . + 4 + (0x29 << 2)
label_1d19dc:
    if (ctx->pc == 0x1D19DCu) {
        ctx->pc = 0x1D19E0u;
        goto label_1d19e0;
    }
    ctx->pc = 0x1D19D8u;
    {
        const bool branch_taken_0x1d19d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d19d8) {
            ctx->pc = 0x1D1A80u;
            goto label_1d1a80;
        }
    }
    ctx->pc = 0x1D19E0u;
label_1d19e0:
    // 0x1d19e0: 0xc074e74  jal         func_1D39D0
label_1d19e4:
    if (ctx->pc == 0x1D19E4u) {
        ctx->pc = 0x1D19E4u;
            // 0x1d19e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D19E8u;
        goto label_1d19e8;
    }
    ctx->pc = 0x1D19E0u;
    SET_GPR_U32(ctx, 31, 0x1D19E8u);
    ctx->pc = 0x1D19E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D19E0u;
            // 0x1d19e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D39D0u;
    if (runtime->hasFunction(0x1D39D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D39D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D19E8u; }
        if (ctx->pc != 0x1D19E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeSetUnit__Fi_0x1d39d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D19E8u; }
        if (ctx->pc != 0x1D19E8u) { return; }
    }
    ctx->pc = 0x1D19E8u;
label_1d19e8:
    // 0x1d19e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d19e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d19ec:
    // 0x1d19ec: 0x6400024  bltz        $s2, . + 4 + (0x24 << 2)
label_1d19f0:
    if (ctx->pc == 0x1D19F0u) {
        ctx->pc = 0x1D19F4u;
        goto label_1d19f4;
    }
    ctx->pc = 0x1D19ECu;
    {
        const bool branch_taken_0x1d19ec = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1d19ec) {
            ctx->pc = 0x1D1A80u;
            goto label_1d1a80;
        }
    }
    ctx->pc = 0x1D19F4u;
label_1d19f4:
    // 0x1d19f4: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1d19f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1d19f8:
    // 0x1d19f8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d19f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d19fc:
    // 0x1d19fc: 0xc06e5c4  jal         func_1B9710
label_1d1a00:
    if (ctx->pc == 0x1D1A00u) {
        ctx->pc = 0x1D1A00u;
            // 0x1d1a00: 0x2484f390  addiu       $a0, $a0, -0xC70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964112));
        ctx->pc = 0x1D1A04u;
        goto label_1d1a04;
    }
    ctx->pc = 0x1D19FCu;
    SET_GPR_U32(ctx, 31, 0x1D1A04u);
    ctx->pc = 0x1D1A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D19FCu;
            // 0x1d1a00: 0x2484f390  addiu       $a0, $a0, -0xC70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9710u;
    if (runtime->hasFunction(0x1B9710u)) {
        auto targetFn = runtime->lookupFunction(0x1B9710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A04u; }
        if (ctx->pc != 0x1D1A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopVoice__16CRoboVoiceSystemFi_0x1b9710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A04u; }
        if (ctx->pc != 0x1D1A04u) { return; }
    }
    ctx->pc = 0x1D1A04u;
label_1d1a04:
    // 0x1d1a04: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1d1a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1d1a08:
    // 0x1d1a08: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1d1a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1d1a0c:
    // 0x1d1a0c: 0xac32d648  sw          $s2, -0x29B8($at)
    ctx->pc = 0x1d1a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956616), GPR_U32(ctx, 18));
label_1d1a10:
    // 0x1d1a10: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1d1a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1d1a14:
    // 0x1d1a14: 0xac22d618  sw          $v0, -0x29E8($at)
    ctx->pc = 0x1d1a14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956568), GPR_U32(ctx, 2));
label_1d1a18:
    // 0x1d1a18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1a1c:
    // 0x1d1a1c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1a20:
    // 0x1d1a20: 0xac22f6e0  sw          $v0, -0x920($at)
    ctx->pc = 0x1d1a20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 2));
label_1d1a24:
    // 0x1d1a24: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1d1a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d1a28:
    // 0x1d1a28: 0xc05f5e0  jal         func_17D780
label_1d1a2c:
    if (ctx->pc == 0x1D1A2Cu) {
        ctx->pc = 0x1D1A2Cu;
            // 0x1d1a2c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x1D1A30u;
        goto label_1d1a30;
    }
    ctx->pc = 0x1D1A28u;
    SET_GPR_U32(ctx, 31, 0x1D1A30u);
    ctx->pc = 0x1D1A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A28u;
            // 0x1d1a2c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D780u;
    if (runtime->hasFunction(0x17D780u)) {
        auto targetFn = runtime->lookupFunction(0x17D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A30u; }
        if (ctx->pc != 0x1D1A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetFade__10CFadeInOutFv_0x17d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A30u; }
        if (ctx->pc != 0x1D1A30u) { return; }
    }
    ctx->pc = 0x1D1A30u;
label_1d1a30:
    // 0x1d1a30: 0x8f848db0  lw          $a0, -0x7250($gp)
    ctx->pc = 0x1d1a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d1a34:
    // 0x1d1a34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d1a38:
    // 0x1d1a38: 0x80830048  lb          $v1, 0x48($a0)
    ctx->pc = 0x1d1a38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
label_1d1a3c:
    // 0x1d1a3c: 0xa0830049  sb          $v1, 0x49($a0)
    ctx->pc = 0x1d1a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 73), (uint8_t)GPR_U32(ctx, 3));
label_1d1a40:
    // 0x1d1a40: 0xa0800048  sb          $zero, 0x48($a0)
    ctx->pc = 0x1d1a40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 0));
label_1d1a44:
    // 0x1d1a44: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x1d1a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
label_1d1a48:
    // 0x1d1a48: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x1d1a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
label_1d1a4c:
    // 0x1d1a4c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x1d1a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
label_1d1a50:
    // 0x1d1a50: 0xc05acf0  jal         func_16B3C0
label_1d1a54:
    if (ctx->pc == 0x1D1A54u) {
        ctx->pc = 0x1D1A54u;
            // 0x1d1a54: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1D1A58u;
        goto label_1d1a58;
    }
    ctx->pc = 0x1D1A50u;
    SET_GPR_U32(ctx, 31, 0x1D1A58u);
    ctx->pc = 0x1D1A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A50u;
            // 0x1d1a54: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B3C0u;
    if (runtime->hasFunction(0x16B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x16B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A58u; }
        if (ctx->pc != 0x1D1A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveThrowItem__12CActionCharaFv_0x16b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A58u; }
        if (ctx->pc != 0x1D1A58u) { return; }
    }
    ctx->pc = 0x1D1A58u;
label_1d1a58:
    // 0x1d1a58: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1a5c:
    // 0x1d1a5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d1a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1a60:
    // 0x1d1a60: 0xac200460  sw          $zero, 0x460($at)
    ctx->pc = 0x1d1a60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1120), GPR_U32(ctx, 0));
label_1d1a64:
    // 0x1d1a64: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1a68:
    // 0x1d1a68: 0xac200464  sw          $zero, 0x464($at)
    ctx->pc = 0x1d1a68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1124), GPR_U32(ctx, 0));
label_1d1a6c:
    // 0x1d1a6c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1a70:
    // 0x1d1a70: 0xac200468  sw          $zero, 0x468($at)
    ctx->pc = 0x1d1a70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1128), GPR_U32(ctx, 0));
label_1d1a74:
    // 0x1d1a74: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1a78:
    // 0x1d1a78: 0x100005e5  b           . + 4 + (0x5E5 << 2)
label_1d1a7c:
    if (ctx->pc == 0x1D1A7Cu) {
        ctx->pc = 0x1D1A7Cu;
            // 0x1d1a7c: 0xac20045c  sw          $zero, 0x45C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1116), GPR_U32(ctx, 0));
        ctx->pc = 0x1D1A80u;
        goto label_1d1a80;
    }
    ctx->pc = 0x1D1A78u;
    {
        const bool branch_taken_0x1d1a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A78u;
            // 0x1d1a7c: 0xac20045c  sw          $zero, 0x45C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a78) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D1A80u;
label_1d1a80:
    // 0x1d1a80: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d1a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d1a84:
    // 0x1d1a84: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d1a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d1a88:
    // 0x1d1a88: 0xc052cf0  jal         func_14B3C0
label_1d1a8c:
    if (ctx->pc == 0x1D1A8Cu) {
        ctx->pc = 0x1D1A8Cu;
            // 0x1d1a8c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D1A90u;
        goto label_1d1a90;
    }
    ctx->pc = 0x1D1A88u;
    SET_GPR_U32(ctx, 31, 0x1D1A90u);
    ctx->pc = 0x1D1A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A88u;
            // 0x1d1a8c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A90u; }
        if (ctx->pc != 0x1D1A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A90u; }
        if (ctx->pc != 0x1D1A90u) { return; }
    }
    ctx->pc = 0x1D1A90u;
label_1d1a90:
    // 0x1d1a90: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_1d1a94:
    if (ctx->pc == 0x1D1A94u) {
        ctx->pc = 0x1D1A98u;
        goto label_1d1a98;
    }
    ctx->pc = 0x1D1A90u;
    {
        const bool branch_taken_0x1d1a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1a90) {
            ctx->pc = 0x1D1B50u;
            goto label_1d1b50;
        }
    }
    ctx->pc = 0x1D1A98u;
label_1d1a98:
    // 0x1d1a98: 0xc05a930  jal         func_16A4C0
label_1d1a9c:
    if (ctx->pc == 0x1D1A9Cu) {
        ctx->pc = 0x1D1A9Cu;
            // 0x1d1a9c: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1D1AA0u;
        goto label_1d1aa0;
    }
    ctx->pc = 0x1D1A98u;
    SET_GPR_U32(ctx, 31, 0x1D1AA0u);
    ctx->pc = 0x1D1A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A98u;
            // 0x1d1a9c: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A4C0u;
    if (runtime->hasFunction(0x16A4C0u)) {
        auto targetFn = runtime->lookupFunction(0x16A4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AA0u; }
        if (ctx->pc != 0x1D1AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRunEvent__12CActionCharaFv_0x16a4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AA0u; }
        if (ctx->pc != 0x1D1AA0u) { return; }
    }
    ctx->pc = 0x1D1AA0u;
label_1d1aa0:
    // 0x1d1aa0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_1d1aa4:
    if (ctx->pc == 0x1D1AA4u) {
        ctx->pc = 0x1D1AA8u;
        goto label_1d1aa8;
    }
    ctx->pc = 0x1D1AA0u;
    {
        const bool branch_taken_0x1d1aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1aa0) {
            ctx->pc = 0x1D1B50u;
            goto label_1d1b50;
        }
    }
    ctx->pc = 0x1D1AA8u;
label_1d1aa8:
    // 0x1d1aa8: 0x16000029  bnez        $s0, . + 4 + (0x29 << 2)
label_1d1aac:
    if (ctx->pc == 0x1D1AACu) {
        ctx->pc = 0x1D1AB0u;
        goto label_1d1ab0;
    }
    ctx->pc = 0x1D1AA8u;
    {
        const bool branch_taken_0x1d1aa8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1aa8) {
            ctx->pc = 0x1D1B50u;
            goto label_1d1b50;
        }
    }
    ctx->pc = 0x1D1AB0u;
label_1d1ab0:
    // 0x1d1ab0: 0xc0c39a0  jal         func_30E680
label_1d1ab4:
    if (ctx->pc == 0x1D1AB4u) {
        ctx->pc = 0x1D1AB8u;
        goto label_1d1ab8;
    }
    ctx->pc = 0x1D1AB0u;
    SET_GPR_U32(ctx, 31, 0x1D1AB8u);
    ctx->pc = 0x30E680u;
    if (runtime->hasFunction(0x30E680u)) {
        auto targetFn = runtime->lookupFunction(0x30E680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AB8u; }
        if (ctx->pc != 0x1D1AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowTakePhoto__Fv_0x30e680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AB8u; }
        if (ctx->pc != 0x1D1AB8u) { return; }
    }
    ctx->pc = 0x1D1AB8u;
label_1d1ab8:
    // 0x1d1ab8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d1abc:
    if (ctx->pc == 0x1D1ABCu) {
        ctx->pc = 0x1D1ABCu;
            // 0x1d1abc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D1AC0u;
        goto label_1d1ac0;
    }
    ctx->pc = 0x1D1AB8u;
    {
        const bool branch_taken_0x1d1ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1AB8u;
            // 0x1d1abc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ab8) {
            ctx->pc = 0x1D1AD0u;
            goto label_1d1ad0;
        }
    }
    ctx->pc = 0x1D1AC0u;
label_1d1ac0:
    // 0x1d1ac0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d1ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d1ac4:
    // 0x1d1ac4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1d1ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1d1ac8:
    // 0x1d1ac8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d1acc:
    if (ctx->pc == 0x1D1ACCu) {
        ctx->pc = 0x1D1ACCu;
            // 0x1d1acc: 0xac22d618  sw          $v0, -0x29E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956568), GPR_U32(ctx, 2));
        ctx->pc = 0x1D1AD0u;
        goto label_1d1ad0;
    }
    ctx->pc = 0x1D1AC8u;
    {
        const bool branch_taken_0x1d1ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1AC8u;
            // 0x1d1acc: 0xac22d618  sw          $v0, -0x29E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ac8) {
            ctx->pc = 0x1D1AD8u;
            goto label_1d1ad8;
        }
    }
    ctx->pc = 0x1D1AD0u;
label_1d1ad0:
    // 0x1d1ad0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1d1ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1d1ad4:
    // 0x1d1ad4: 0xac22d618  sw          $v0, -0x29E8($at)
    ctx->pc = 0x1d1ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956568), GPR_U32(ctx, 2));
label_1d1ad8:
    // 0x1d1ad8: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1d1ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1d1adc:
    // 0x1d1adc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d1adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d1ae0:
    // 0x1d1ae0: 0xc06e5c4  jal         func_1B9710
label_1d1ae4:
    if (ctx->pc == 0x1D1AE4u) {
        ctx->pc = 0x1D1AE4u;
            // 0x1d1ae4: 0x2484f390  addiu       $a0, $a0, -0xC70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964112));
        ctx->pc = 0x1D1AE8u;
        goto label_1d1ae8;
    }
    ctx->pc = 0x1D1AE0u;
    SET_GPR_U32(ctx, 31, 0x1D1AE8u);
    ctx->pc = 0x1D1AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1AE0u;
            // 0x1d1ae4: 0x2484f390  addiu       $a0, $a0, -0xC70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9710u;
    if (runtime->hasFunction(0x1B9710u)) {
        auto targetFn = runtime->lookupFunction(0x1B9710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AE8u; }
        if (ctx->pc != 0x1D1AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopVoice__16CRoboVoiceSystemFi_0x1b9710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AE8u; }
        if (ctx->pc != 0x1D1AE8u) { return; }
    }
    ctx->pc = 0x1D1AE8u;
label_1d1ae8:
    // 0x1d1ae8: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1d1ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d1aec:
    // 0x1d1aec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1af0:
    // 0x1d1af0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1af4:
    // 0x1d1af4: 0xac23f6e0  sw          $v1, -0x920($at)
    ctx->pc = 0x1d1af4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 3));
label_1d1af8:
    // 0x1d1af8: 0xc05f5e0  jal         func_17D780
label_1d1afc:
    if (ctx->pc == 0x1D1AFCu) {
        ctx->pc = 0x1D1AFCu;
            // 0x1d1afc: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x1D1B00u;
        goto label_1d1b00;
    }
    ctx->pc = 0x1D1AF8u;
    SET_GPR_U32(ctx, 31, 0x1D1B00u);
    ctx->pc = 0x1D1AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1AF8u;
            // 0x1d1afc: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D780u;
    if (runtime->hasFunction(0x17D780u)) {
        auto targetFn = runtime->lookupFunction(0x17D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B00u; }
        if (ctx->pc != 0x1D1B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetFade__10CFadeInOutFv_0x17d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B00u; }
        if (ctx->pc != 0x1D1B00u) { return; }
    }
    ctx->pc = 0x1D1B00u;
label_1d1b00:
    // 0x1d1b00: 0x8f848db0  lw          $a0, -0x7250($gp)
    ctx->pc = 0x1d1b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d1b04:
    // 0x1d1b04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d1b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d1b08:
    // 0x1d1b08: 0x80830048  lb          $v1, 0x48($a0)
    ctx->pc = 0x1d1b08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
label_1d1b0c:
    // 0x1d1b0c: 0xa0830049  sb          $v1, 0x49($a0)
    ctx->pc = 0x1d1b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 73), (uint8_t)GPR_U32(ctx, 3));
label_1d1b10:
    // 0x1d1b10: 0xa0800048  sb          $zero, 0x48($a0)
    ctx->pc = 0x1d1b10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 0));
label_1d1b14:
    // 0x1d1b14: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x1d1b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
label_1d1b18:
    // 0x1d1b18: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x1d1b18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
label_1d1b1c:
    // 0x1d1b1c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x1d1b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
label_1d1b20:
    // 0x1d1b20: 0xc05acf0  jal         func_16B3C0
label_1d1b24:
    if (ctx->pc == 0x1D1B24u) {
        ctx->pc = 0x1D1B24u;
            // 0x1d1b24: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1D1B28u;
        goto label_1d1b28;
    }
    ctx->pc = 0x1D1B20u;
    SET_GPR_U32(ctx, 31, 0x1D1B28u);
    ctx->pc = 0x1D1B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B20u;
            // 0x1d1b24: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B3C0u;
    if (runtime->hasFunction(0x16B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x16B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B28u; }
        if (ctx->pc != 0x1D1B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveThrowItem__12CActionCharaFv_0x16b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B28u; }
        if (ctx->pc != 0x1D1B28u) { return; }
    }
    ctx->pc = 0x1D1B28u;
label_1d1b28:
    // 0x1d1b28: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1b2c:
    // 0x1d1b2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d1b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b30:
    // 0x1d1b30: 0xac200460  sw          $zero, 0x460($at)
    ctx->pc = 0x1d1b30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1120), GPR_U32(ctx, 0));
label_1d1b34:
    // 0x1d1b34: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1b38:
    // 0x1d1b38: 0xac200464  sw          $zero, 0x464($at)
    ctx->pc = 0x1d1b38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1124), GPR_U32(ctx, 0));
label_1d1b3c:
    // 0x1d1b3c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1b40:
    // 0x1d1b40: 0xac200468  sw          $zero, 0x468($at)
    ctx->pc = 0x1d1b40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1128), GPR_U32(ctx, 0));
label_1d1b44:
    // 0x1d1b44: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1b48:
    // 0x1d1b48: 0x100005b1  b           . + 4 + (0x5B1 << 2)
label_1d1b4c:
    if (ctx->pc == 0x1D1B4Cu) {
        ctx->pc = 0x1D1B4Cu;
            // 0x1d1b4c: 0xac20045c  sw          $zero, 0x45C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1116), GPR_U32(ctx, 0));
        ctx->pc = 0x1D1B50u;
        goto label_1d1b50;
    }
    ctx->pc = 0x1D1B48u;
    {
        const bool branch_taken_0x1d1b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B48u;
            // 0x1d1b4c: 0xac20045c  sw          $zero, 0x45C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b48) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D1B50u;
label_1d1b50:
    // 0x1d1b50: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d1b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d1b54:
    // 0x1d1b54: 0x8c852e54  lw          $a1, 0x2E54($a0)
    ctx->pc = 0x1d1b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
label_1d1b58:
    // 0x1d1b58: 0xc0a0e30  jal         func_2838C0
label_1d1b5c:
    if (ctx->pc == 0x1D1B5Cu) {
        ctx->pc = 0x1D1B5Cu;
            // 0x1d1b5c: 0x8f908dd8  lw          $s0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1D1B60u;
        goto label_1d1b60;
    }
    ctx->pc = 0x1D1B58u;
    SET_GPR_U32(ctx, 31, 0x1D1B60u);
    ctx->pc = 0x1D1B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B58u;
            // 0x1d1b5c: 0x8f908dd8  lw          $s0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B60u; }
        if (ctx->pc != 0x1D1B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B60u; }
        if (ctx->pc != 0x1D1B60u) { return; }
    }
    ctx->pc = 0x1D1B60u;
label_1d1b60:
    // 0x1d1b60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d1b60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b64:
    // 0x1d1b64: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1b68:
    // 0x1d1b68: 0x8c22f6e8  lw          $v0, -0x918($at)
    ctx->pc = 0x1d1b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964968)));
label_1d1b6c:
    // 0x1d1b6c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1d1b70:
    if (ctx->pc == 0x1D1B70u) {
        ctx->pc = 0x1D1B70u;
            // 0x1d1b70: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1D1B74u;
        goto label_1d1b74;
    }
    ctx->pc = 0x1D1B6Cu;
    {
        const bool branch_taken_0x1d1b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B6Cu;
            // 0x1d1b70: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b6c) {
            ctx->pc = 0x1D1BB0u;
            goto label_1d1bb0;
        }
    }
    ctx->pc = 0x1D1B74u;
label_1d1b74:
    // 0x1d1b74: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d1b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d1b78:
    // 0x1d1b78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d1b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d1b7c:
    // 0x1d1b7c: 0xc052d0c  jal         func_14B430
label_1d1b80:
    if (ctx->pc == 0x1D1B80u) {
        ctx->pc = 0x1D1B80u;
            // 0x1d1b80: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D1B84u;
        goto label_1d1b84;
    }
    ctx->pc = 0x1D1B7Cu;
    SET_GPR_U32(ctx, 31, 0x1D1B84u);
    ctx->pc = 0x1D1B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B7Cu;
            // 0x1d1b80: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B84u; }
        if (ctx->pc != 0x1D1B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B84u; }
        if (ctx->pc != 0x1D1B84u) { return; }
    }
    ctx->pc = 0x1D1B84u;
label_1d1b84:
    // 0x1d1b84: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1d1b88:
    if (ctx->pc == 0x1D1B88u) {
        ctx->pc = 0x1D1B88u;
            // 0x1d1b88: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1D1B8Cu;
        goto label_1d1b8c;
    }
    ctx->pc = 0x1D1B84u;
    {
        const bool branch_taken_0x1d1b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B84u;
            // 0x1d1b88: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b84) {
            ctx->pc = 0x1D1BA0u;
            goto label_1d1ba0;
        }
    }
    ctx->pc = 0x1D1B8Cu;
label_1d1b8c:
    // 0x1d1b8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d1b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1b90:
    // 0x1d1b90: 0xc0bb538  jal         func_2ED4E0
label_1d1b94:
    if (ctx->pc == 0x1D1B94u) {
        ctx->pc = 0x1D1B94u;
            // 0x1d1b94: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->pc = 0x1D1B98u;
        goto label_1d1b98;
    }
    ctx->pc = 0x1D1B90u;
    SET_GPR_U32(ctx, 31, 0x1D1B98u);
    ctx->pc = 0x1D1B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B90u;
            // 0x1d1b94: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B98u; }
        if (ctx->pc != 0x1D1B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B98u; }
        if (ctx->pc != 0x1D1B98u) { return; }
    }
    ctx->pc = 0x1D1B98u;
label_1d1b98:
    // 0x1d1b98: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1d1b9c:
    if (ctx->pc == 0x1D1B9Cu) {
        ctx->pc = 0x1D1BA0u;
        goto label_1d1ba0;
    }
    ctx->pc = 0x1D1B98u;
    {
        const bool branch_taken_0x1d1b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1b98) {
            ctx->pc = 0x1D1BF4u;
            goto label_1d1bf4;
        }
    }
    ctx->pc = 0x1D1BA0u;
label_1d1ba0:
    // 0x1d1ba0: 0xc074fb0  jal         func_1D3EC0
label_1d1ba4:
    if (ctx->pc == 0x1D1BA4u) {
        ctx->pc = 0x1D1BA4u;
            // 0x1d1ba4: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1D1BA8u;
        goto label_1d1ba8;
    }
    ctx->pc = 0x1D1BA0u;
    SET_GPR_U32(ctx, 31, 0x1D1BA8u);
    ctx->pc = 0x1D1BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1BA0u;
            // 0x1d1ba4: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EC0u;
    if (runtime->hasFunction(0x1D3EC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BA8u; }
        if (ctx->pc != 0x1D1BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetEyeView__FP12CActionChara_0x1d3ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BA8u; }
        if (ctx->pc != 0x1D1BA8u) { return; }
    }
    ctx->pc = 0x1D1BA8u;
label_1d1ba8:
    // 0x1d1ba8: 0x10000599  b           . + 4 + (0x599 << 2)
label_1d1bac:
    if (ctx->pc == 0x1D1BACu) {
        ctx->pc = 0x1D1BACu;
            // 0x1d1bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BB0u;
        goto label_1d1bb0;
    }
    ctx->pc = 0x1D1BA8u;
    {
        const bool branch_taken_0x1d1ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1BA8u;
            // 0x1d1bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ba8) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D1BB0u;
label_1d1bb0:
    // 0x1d1bb0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d1bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d1bb4:
    // 0x1d1bb4: 0xc052d0c  jal         func_14B430
label_1d1bb8:
    if (ctx->pc == 0x1D1BB8u) {
        ctx->pc = 0x1D1BB8u;
            // 0x1d1bb8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D1BBCu;
        goto label_1d1bbc;
    }
    ctx->pc = 0x1D1BB4u;
    SET_GPR_U32(ctx, 31, 0x1D1BBCu);
    ctx->pc = 0x1D1BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1BB4u;
            // 0x1d1bb8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BBCu; }
        if (ctx->pc != 0x1D1BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BBCu; }
        if (ctx->pc != 0x1D1BBCu) { return; }
    }
    ctx->pc = 0x1D1BBCu;
label_1d1bbc:
    // 0x1d1bbc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1d1bc0:
    if (ctx->pc == 0x1D1BC0u) {
        ctx->pc = 0x1D1BC4u;
        goto label_1d1bc4;
    }
    ctx->pc = 0x1D1BBCu;
    {
        const bool branch_taken_0x1d1bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1bbc) {
            ctx->pc = 0x1D1BF4u;
            goto label_1d1bf4;
        }
    }
    ctx->pc = 0x1D1BC4u;
label_1d1bc4:
    // 0x1d1bc4: 0xc0c0fc8  jal         func_303F20
label_1d1bc8:
    if (ctx->pc == 0x1D1BC8u) {
        ctx->pc = 0x1D1BCCu;
        goto label_1d1bcc;
    }
    ctx->pc = 0x1D1BC4u;
    SET_GPR_U32(ctx, 31, 0x1D1BCCu);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BCCu; }
        if (ctx->pc != 0x1D1BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BCCu; }
        if (ctx->pc != 0x1D1BCCu) { return; }
    }
    ctx->pc = 0x1D1BCCu;
label_1d1bcc:
    // 0x1d1bcc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1d1bd0:
    if (ctx->pc == 0x1D1BD0u) {
        ctx->pc = 0x1D1BD4u;
        goto label_1d1bd4;
    }
    ctx->pc = 0x1D1BCCu;
    {
        const bool branch_taken_0x1d1bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1bcc) {
            ctx->pc = 0x1D1BF4u;
            goto label_1d1bf4;
        }
    }
    ctx->pc = 0x1D1BD4u;
label_1d1bd4:
    // 0x1d1bd4: 0xc05a930  jal         func_16A4C0
label_1d1bd8:
    if (ctx->pc == 0x1D1BD8u) {
        ctx->pc = 0x1D1BD8u;
            // 0x1d1bd8: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1D1BDCu;
        goto label_1d1bdc;
    }
    ctx->pc = 0x1D1BD4u;
    SET_GPR_U32(ctx, 31, 0x1D1BDCu);
    ctx->pc = 0x1D1BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1BD4u;
            // 0x1d1bd8: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A4C0u;
    if (runtime->hasFunction(0x16A4C0u)) {
        auto targetFn = runtime->lookupFunction(0x16A4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BDCu; }
        if (ctx->pc != 0x1D1BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRunEvent__12CActionCharaFv_0x16a4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BDCu; }
        if (ctx->pc != 0x1D1BDCu) { return; }
    }
    ctx->pc = 0x1D1BDCu;
label_1d1bdc:
    // 0x1d1bdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d1be0:
    if (ctx->pc == 0x1D1BE0u) {
        ctx->pc = 0x1D1BE4u;
        goto label_1d1be4;
    }
    ctx->pc = 0x1D1BDCu;
    {
        const bool branch_taken_0x1d1bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1bdc) {
            ctx->pc = 0x1D1BF4u;
            goto label_1d1bf4;
        }
    }
    ctx->pc = 0x1D1BE4u;
label_1d1be4:
    // 0x1d1be4: 0xc074f44  jal         func_1D3D10
label_1d1be8:
    if (ctx->pc == 0x1D1BE8u) {
        ctx->pc = 0x1D1BE8u;
            // 0x1d1be8: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1D1BECu;
        goto label_1d1bec;
    }
    ctx->pc = 0x1D1BE4u;
    SET_GPR_U32(ctx, 31, 0x1D1BECu);
    ctx->pc = 0x1D1BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1BE4u;
            // 0x1d1be8: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3D10u;
    if (runtime->hasFunction(0x1D3D10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BECu; }
        if (ctx->pc != 0x1D1BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEyeCamera__FP12CActionChara_0x1d3d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BECu; }
        if (ctx->pc != 0x1D1BECu) { return; }
    }
    ctx->pc = 0x1D1BECu;
label_1d1bec:
    // 0x1d1bec: 0x10000588  b           . + 4 + (0x588 << 2)
label_1d1bf0:
    if (ctx->pc == 0x1D1BF0u) {
        ctx->pc = 0x1D1BF0u;
            // 0x1d1bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BF4u;
        goto label_1d1bf4;
    }
    ctx->pc = 0x1D1BECu;
    {
        const bool branch_taken_0x1d1bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1BECu;
            // 0x1d1bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bec) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D1BF4u;
label_1d1bf4:
    // 0x1d1bf4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1bf8:
    // 0x1d1bf8: 0x8c22f6e8  lw          $v0, -0x918($at)
    ctx->pc = 0x1d1bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964968)));
label_1d1bfc:
    // 0x1d1bfc: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
label_1d1c00:
    if (ctx->pc == 0x1D1C00u) {
        ctx->pc = 0x1D1C00u;
            // 0x1d1c00: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1D1C04u;
        goto label_1d1c04;
    }
    ctx->pc = 0x1D1BFCu;
    {
        const bool branch_taken_0x1d1bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1BFCu;
            // 0x1d1c00: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bfc) {
            ctx->pc = 0x1D1CF0u;
            goto label_1d1cf0;
        }
    }
    ctx->pc = 0x1D1C04u;
label_1d1c04:
    // 0x1d1c04: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1d1c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d1c08:
    // 0x1d1c08: 0xc052d0c  jal         func_14B430
label_1d1c0c:
    if (ctx->pc == 0x1D1C0Cu) {
        ctx->pc = 0x1D1C0Cu;
            // 0x1d1c0c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D1C10u;
        goto label_1d1c10;
    }
    ctx->pc = 0x1D1C08u;
    SET_GPR_U32(ctx, 31, 0x1D1C10u);
    ctx->pc = 0x1D1C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C08u;
            // 0x1d1c0c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C10u; }
        if (ctx->pc != 0x1D1C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C10u; }
        if (ctx->pc != 0x1D1C10u) { return; }
    }
    ctx->pc = 0x1D1C10u;
label_1d1c10:
    // 0x1d1c10: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_1d1c14:
    if (ctx->pc == 0x1D1C14u) {
        ctx->pc = 0x1D1C18u;
        goto label_1d1c18;
    }
    ctx->pc = 0x1D1C10u;
    {
        const bool branch_taken_0x1d1c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c10) {
            ctx->pc = 0x1D1CF0u;
            goto label_1d1cf0;
        }
    }
    ctx->pc = 0x1D1C18u;
label_1d1c18:
    // 0x1d1c18: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d1c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d1c1c:
    // 0x1d1c1c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d1c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d1c20:
    // 0x1d1c20: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d1c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1d1c24:
    // 0x1d1c24: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_1d1c28:
    if (ctx->pc == 0x1D1C28u) {
        ctx->pc = 0x1D1C2Cu;
        goto label_1d1c2c;
    }
    ctx->pc = 0x1D1C24u;
    {
        const bool branch_taken_0x1d1c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c24) {
            ctx->pc = 0x1D1CF0u;
            goto label_1d1cf0;
        }
    }
    ctx->pc = 0x1D1C2Cu;
label_1d1c2c:
    // 0x1d1c2c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x1d1c2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1d1c30:
    // 0x1d1c30: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_1d1c34:
    if (ctx->pc == 0x1D1C34u) {
        ctx->pc = 0x1D1C38u;
        goto label_1d1c38;
    }
    ctx->pc = 0x1D1C30u;
    {
        const bool branch_taken_0x1d1c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c30) {
            ctx->pc = 0x1D1CF0u;
            goto label_1d1cf0;
        }
    }
    ctx->pc = 0x1D1C38u;
label_1d1c38:
    // 0x1d1c38: 0xc05a930  jal         func_16A4C0
label_1d1c3c:
    if (ctx->pc == 0x1D1C3Cu) {
        ctx->pc = 0x1D1C3Cu;
            // 0x1d1c3c: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1D1C40u;
        goto label_1d1c40;
    }
    ctx->pc = 0x1D1C38u;
    SET_GPR_U32(ctx, 31, 0x1D1C40u);
    ctx->pc = 0x1D1C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C38u;
            // 0x1d1c3c: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A4C0u;
    if (runtime->hasFunction(0x16A4C0u)) {
        auto targetFn = runtime->lookupFunction(0x16A4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C40u; }
        if (ctx->pc != 0x1D1C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRunEvent__12CActionCharaFv_0x16a4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C40u; }
        if (ctx->pc != 0x1D1C40u) { return; }
    }
    ctx->pc = 0x1D1C40u;
label_1d1c40:
    // 0x1d1c40: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_1d1c44:
    if (ctx->pc == 0x1D1C44u) {
        ctx->pc = 0x1D1C44u;
            // 0x1d1c44: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C48u;
        goto label_1d1c48;
    }
    ctx->pc = 0x1D1C40u;
    {
        const bool branch_taken_0x1d1c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C40u;
            // 0x1d1c44: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c40) {
            ctx->pc = 0x1D1CF0u;
            goto label_1d1cf0;
        }
    }
    ctx->pc = 0x1D1C48u;
label_1d1c48:
    // 0x1d1c48: 0xc0683a8  jal         func_1A0EA0
label_1d1c4c:
    if (ctx->pc == 0x1D1C4Cu) {
        ctx->pc = 0x1D1C50u;
        goto label_1d1c50;
    }
    ctx->pc = 0x1D1C48u;
    SET_GPR_U32(ctx, 31, 0x1D1C50u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C50u; }
        if (ctx->pc != 0x1D1C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C50u; }
        if (ctx->pc != 0x1D1C50u) { return; }
    }
    ctx->pc = 0x1D1C50u;
label_1d1c50:
    // 0x1d1c50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d1c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1c54:
    // 0x1d1c54: 0xc067ce0  jal         func_19F380
label_1d1c58:
    if (ctx->pc == 0x1D1C58u) {
        ctx->pc = 0x1D1C58u;
            // 0x1d1c58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C5Cu;
        goto label_1d1c5c;
    }
    ctx->pc = 0x1D1C54u;
    SET_GPR_U32(ctx, 31, 0x1D1C5Cu);
    ctx->pc = 0x1D1C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C54u;
            // 0x1d1c58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F380u;
    if (runtime->hasFunction(0x19F380u)) {
        auto targetFn = runtime->lookupFunction(0x19F380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C5Cu; }
        if (ctx->pc != 0x1D1C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveItemInfo__16CBattleCharaInfoFi_0x19f380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C5Cu; }
        if (ctx->pc != 0x1D1C5Cu) { return; }
    }
    ctx->pc = 0x1D1C5Cu;
label_1d1c5c:
    // 0x1d1c5c: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1d1c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d1c60:
    // 0x1d1c60: 0x80630048  lb          $v1, 0x48($v1)
    ctx->pc = 0x1d1c60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 72)));
label_1d1c64:
    // 0x1d1c64: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1d1c68:
    if (ctx->pc == 0x1D1C68u) {
        ctx->pc = 0x1D1C68u;
            // 0x1d1c68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C6Cu;
        goto label_1d1c6c;
    }
    ctx->pc = 0x1D1C64u;
    {
        const bool branch_taken_0x1d1c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C64u;
            // 0x1d1c68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c64) {
            ctx->pc = 0x1D1CA4u;
            goto label_1d1ca4;
        }
    }
    ctx->pc = 0x1D1C6Cu;
label_1d1c6c:
    // 0x1d1c6c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1c70:
    // 0x1d1c70: 0x24030171  addiu       $v1, $zero, 0x171
    ctx->pc = 0x1d1c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 369));
label_1d1c74:
    // 0x1d1c74: 0x8c25f6ec  lw          $a1, -0x914($at)
    ctx->pc = 0x1d1c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964972)));
label_1d1c78:
    // 0x1d1c78: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d1c78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1d1c7c:
    // 0x1d1c7c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1d1c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d1c80:
    // 0x1d1c80: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1d1c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d1c84:
    // 0x1d1c84: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d1c84u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d1c88:
    // 0x1d1c88: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d1c88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d1c8c:
    // 0x1d1c8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d1c90:
    // 0x1d1c90: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x1d1c90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_1d1c94:
    // 0x1d1c94: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_1d1c98:
    if (ctx->pc == 0x1D1C98u) {
        ctx->pc = 0x1D1C9Cu;
        goto label_1d1c9c;
    }
    ctx->pc = 0x1D1C94u;
    {
        const bool branch_taken_0x1d1c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d1c94) {
            ctx->pc = 0x1D1CD0u;
            goto label_1d1cd0;
        }
    }
    ctx->pc = 0x1D1C9Cu;
label_1d1c9c:
    // 0x1d1c9c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1d1ca0:
    if (ctx->pc == 0x1D1CA0u) {
        ctx->pc = 0x1D1CA0u;
            // 0x1d1ca0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D1CA4u;
        goto label_1d1ca4;
    }
    ctx->pc = 0x1D1C9Cu;
    {
        const bool branch_taken_0x1d1c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C9Cu;
            // 0x1d1ca0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c9c) {
            ctx->pc = 0x1D1CD0u;
            goto label_1d1cd0;
        }
    }
    ctx->pc = 0x1D1CA4u;
label_1d1ca4:
    // 0x1d1ca4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ca8:
    // 0x1d1ca8: 0x24040171  addiu       $a0, $zero, 0x171
    ctx->pc = 0x1d1ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 369));
label_1d1cac:
    // 0x1d1cac: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1d1cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1d1cb0:
    // 0x1d1cb0: 0x84630002  lh          $v1, 0x2($v1)
    ctx->pc = 0x1d1cb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_1d1cb4:
    // 0x1d1cb4: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
label_1d1cb8:
    if (ctx->pc == 0x1D1CB8u) {
        ctx->pc = 0x1D1CBCu;
        goto label_1d1cbc;
    }
    ctx->pc = 0x1D1CB4u;
    {
        const bool branch_taken_0x1d1cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d1cb4) {
            ctx->pc = 0x1D1CC0u;
            goto label_1d1cc0;
        }
    }
    ctx->pc = 0x1D1CBCu;
label_1d1cbc:
    // 0x1d1cbc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1d1cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1cc0:
    // 0x1d1cc0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d1cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d1cc4:
    // 0x1d1cc4: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x1d1cc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_1d1cc8:
    // 0x1d1cc8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_1d1ccc:
    if (ctx->pc == 0x1D1CCCu) {
        ctx->pc = 0x1D1CCCu;
            // 0x1d1ccc: 0x24c6006c  addiu       $a2, $a2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 108));
        ctx->pc = 0x1D1CD0u;
        goto label_1d1cd0;
    }
    ctx->pc = 0x1D1CC8u;
    {
        const bool branch_taken_0x1d1cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1CC8u;
            // 0x1d1ccc: 0x24c6006c  addiu       $a2, $a2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1cc8) {
            ctx->pc = 0x1D1CACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d1cac;
        }
    }
    ctx->pc = 0x1D1CD0u;
label_1d1cd0:
    // 0x1d1cd0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_1d1cd4:
    if (ctx->pc == 0x1D1CD4u) {
        ctx->pc = 0x1D1CD8u;
        goto label_1d1cd8;
    }
    ctx->pc = 0x1D1CD0u;
    {
        const bool branch_taken_0x1d1cd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1cd0) {
            ctx->pc = 0x1D1CF0u;
            goto label_1d1cf0;
        }
    }
    ctx->pc = 0x1D1CD8u;
label_1d1cd8:
    // 0x1d1cd8: 0xc0c3990  jal         func_30E640
label_1d1cdc:
    if (ctx->pc == 0x1D1CDCu) {
        ctx->pc = 0x1D1CE0u;
        goto label_1d1ce0;
    }
    ctx->pc = 0x1D1CD8u;
    SET_GPR_U32(ctx, 31, 0x1D1CE0u);
    ctx->pc = 0x30E640u;
    if (runtime->hasFunction(0x30E640u)) {
        auto targetFn = runtime->lookupFunction(0x30E640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1CE0u; }
        if (ctx->pc != 0x1D1CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartTakePhoto__Fv_0x30e640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1CE0u; }
        if (ctx->pc != 0x1D1CE0u) { return; }
    }
    ctx->pc = 0x1D1CE0u;
label_1d1ce0:
    // 0x1d1ce0: 0xc074f44  jal         func_1D3D10
label_1d1ce4:
    if (ctx->pc == 0x1D1CE4u) {
        ctx->pc = 0x1D1CE4u;
            // 0x1d1ce4: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1D1CE8u;
        goto label_1d1ce8;
    }
    ctx->pc = 0x1D1CE0u;
    SET_GPR_U32(ctx, 31, 0x1D1CE8u);
    ctx->pc = 0x1D1CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1CE0u;
            // 0x1d1ce4: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3D10u;
    if (runtime->hasFunction(0x1D3D10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1CE8u; }
        if (ctx->pc != 0x1D1CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEyeCamera__FP12CActionChara_0x1d3d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1CE8u; }
        if (ctx->pc != 0x1D1CE8u) { return; }
    }
    ctx->pc = 0x1D1CE8u;
label_1d1ce8:
    // 0x1d1ce8: 0x10000549  b           . + 4 + (0x549 << 2)
label_1d1cec:
    if (ctx->pc == 0x1D1CECu) {
        ctx->pc = 0x1D1CECu;
            // 0x1d1cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CF0u;
        goto label_1d1cf0;
    }
    ctx->pc = 0x1D1CE8u;
    {
        const bool branch_taken_0x1d1ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1CE8u;
            // 0x1d1cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ce8) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D1CF0u;
label_1d1cf0:
    // 0x1d1cf0: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d1cf4:
    // 0x1d1cf4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d1cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d1cf8:
    // 0x1d1cf8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d1cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1d1cfc:
    // 0x1d1cfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d1d00:
    if (ctx->pc == 0x1D1D00u) {
        ctx->pc = 0x1D1D04u;
        goto label_1d1d04;
    }
    ctx->pc = 0x1D1CFCu;
    {
        const bool branch_taken_0x1d1cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1cfc) {
            ctx->pc = 0x1D1D0Cu;
            goto label_1d1d0c;
        }
    }
    ctx->pc = 0x1D1D04u;
label_1d1d04:
    // 0x1d1d04: 0xc074fb0  jal         func_1D3EC0
label_1d1d08:
    if (ctx->pc == 0x1D1D08u) {
        ctx->pc = 0x1D1D08u;
            // 0x1d1d08: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1D1D0Cu;
        goto label_1d1d0c;
    }
    ctx->pc = 0x1D1D04u;
    SET_GPR_U32(ctx, 31, 0x1D1D0Cu);
    ctx->pc = 0x1D1D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D04u;
            // 0x1d1d08: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EC0u;
    if (runtime->hasFunction(0x1D3EC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D0Cu; }
        if (ctx->pc != 0x1D1D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetEyeView__FP12CActionChara_0x1d3ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D0Cu; }
        if (ctx->pc != 0x1D1D0Cu) { return; }
    }
    ctx->pc = 0x1D1D0Cu;
label_1d1d0c:
    // 0x1d1d0c: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x1d1d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1d1d10:
    // 0x1d1d10: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1d1d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_1d1d14:
    // 0x1d1d14: 0x34434d96  ori         $v1, $v0, 0x4D96
    ctx->pc = 0x1d1d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19862);
label_1d1d18:
    // 0x1d1d18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d1d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d1d1c:
    // 0x1d1d1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d1d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1d1d20:
    // 0x1d1d20: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1d1d20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1d1d24:
    // 0x1d1d24: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_1d1d28:
    if (ctx->pc == 0x1D1D28u) {
        ctx->pc = 0x1D1D2Cu;
        goto label_1d1d2c;
    }
    ctx->pc = 0x1D1D24u;
    {
        const bool branch_taken_0x1d1d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d1d24) {
            ctx->pc = 0x1D1D50u;
            goto label_1d1d50;
        }
    }
    ctx->pc = 0x1D1D2Cu;
label_1d1d2c:
    // 0x1d1d2c: 0xc067138  jal         func_19C4E0
label_1d1d30:
    if (ctx->pc == 0x1D1D30u) {
        ctx->pc = 0x1D1D34u;
        goto label_1d1d34;
    }
    ctx->pc = 0x1D1D2Cu;
    SET_GPR_U32(ctx, 31, 0x1D1D34u);
    ctx->pc = 0x19C4E0u;
    if (runtime->hasFunction(0x19C4E0u)) {
        auto targetFn = runtime->lookupFunction(0x19C4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D34u; }
        if (ctx->pc != 0x1D1D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRoboVoiceFlag__16CUserDataManagerFv_0x19c4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D34u; }
        if (ctx->pc != 0x1D1D34u) { return; }
    }
    ctx->pc = 0x1D1D34u;
label_1d1d34:
    // 0x1d1d34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d1d38:
    if (ctx->pc == 0x1D1D38u) {
        ctx->pc = 0x1D1D38u;
            // 0x1d1d38: 0x3c0101eb  lui         $at, 0x1EB (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
        ctx->pc = 0x1D1D3Cu;
        goto label_1d1d3c;
    }
    ctx->pc = 0x1D1D34u;
    {
        const bool branch_taken_0x1d1d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D34u;
            // 0x1d1d38: 0x3c0101eb  lui         $at, 0x1EB (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d34) {
            ctx->pc = 0x1D1D50u;
            goto label_1d1d50;
        }
    }
    ctx->pc = 0x1D1D3Cu;
label_1d1d3c:
    // 0x1d1d3c: 0x8422f390  lh          $v0, -0xC70($at)
    ctx->pc = 0x1d1d3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294964112)));
label_1d1d40:
    // 0x1d1d40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d1d44:
    if (ctx->pc == 0x1D1D44u) {
        ctx->pc = 0x1D1D44u;
            // 0x1d1d44: 0x3c0401eb  lui         $a0, 0x1EB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
        ctx->pc = 0x1D1D48u;
        goto label_1d1d48;
    }
    ctx->pc = 0x1D1D40u;
    {
        const bool branch_taken_0x1d1d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D40u;
            // 0x1d1d44: 0x3c0401eb  lui         $a0, 0x1EB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d40) {
            ctx->pc = 0x1D1D50u;
            goto label_1d1d50;
        }
    }
    ctx->pc = 0x1D1D48u;
label_1d1d48:
    // 0x1d1d48: 0xc06e5b0  jal         func_1B96C0
label_1d1d4c:
    if (ctx->pc == 0x1D1D4Cu) {
        ctx->pc = 0x1D1D4Cu;
            // 0x1d1d4c: 0x2484f390  addiu       $a0, $a0, -0xC70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964112));
        ctx->pc = 0x1D1D50u;
        goto label_1d1d50;
    }
    ctx->pc = 0x1D1D48u;
    SET_GPR_U32(ctx, 31, 0x1D1D50u);
    ctx->pc = 0x1D1D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D48u;
            // 0x1d1d4c: 0x2484f390  addiu       $a0, $a0, -0xC70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B96C0u;
    if (runtime->hasFunction(0x1B96C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B96C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D50u; }
        if (ctx->pc != 0x1D1D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartVoiceSystem__16CRoboVoiceSystemFv_0x1b96c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D50u; }
        if (ctx->pc != 0x1D1D50u) { return; }
    }
    ctx->pc = 0x1D1D50u;
label_1d1d50:
    // 0x1d1d50: 0xc074e4c  jal         func_1D3930
label_1d1d54:
    if (ctx->pc == 0x1D1D54u) {
        ctx->pc = 0x1D1D54u;
            // 0x1d1d54: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1D1D58u;
        goto label_1d1d58;
    }
    ctx->pc = 0x1D1D50u;
    SET_GPR_U32(ctx, 31, 0x1D1D58u);
    ctx->pc = 0x1D1D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D50u;
            // 0x1d1d54: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3930u;
    if (runtime->hasFunction(0x1D3930u)) {
        auto targetFn = runtime->lookupFunction(0x1D3930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D58u; }
        if (ctx->pc != 0x1D1D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRunDeadEvent__FP12CActionChara_0x1d3930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D58u; }
        if (ctx->pc != 0x1D1D58u) { return; }
    }
    ctx->pc = 0x1D1D58u;
label_1d1d58:
    // 0x1d1d58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d1d5c:
    if (ctx->pc == 0x1D1D5Cu) {
        ctx->pc = 0x1D1D60u;
        goto label_1d1d60;
    }
    ctx->pc = 0x1D1D58u;
    {
        const bool branch_taken_0x1d1d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1d58) {
            ctx->pc = 0x1D1D68u;
            goto label_1d1d68;
        }
    }
    ctx->pc = 0x1D1D60u;
label_1d1d60:
    // 0x1d1d60: 0xc074fb0  jal         func_1D3EC0
label_1d1d64:
    if (ctx->pc == 0x1D1D64u) {
        ctx->pc = 0x1D1D64u;
            // 0x1d1d64: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1D1D68u;
        goto label_1d1d68;
    }
    ctx->pc = 0x1D1D60u;
    SET_GPR_U32(ctx, 31, 0x1D1D68u);
    ctx->pc = 0x1D1D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D60u;
            // 0x1d1d64: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EC0u;
    if (runtime->hasFunction(0x1D3EC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D68u; }
        if (ctx->pc != 0x1D1D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetEyeView__FP12CActionChara_0x1d3ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D68u; }
        if (ctx->pc != 0x1D1D68u) { return; }
    }
    ctx->pc = 0x1D1D68u;
label_1d1d68:
    // 0x1d1d68: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1d6c:
    // 0x1d1d6c: 0x8c22f6e8  lw          $v0, -0x918($at)
    ctx->pc = 0x1d1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964968)));
label_1d1d70:
    // 0x1d1d70: 0x144004d5  bnez        $v0, . + 4 + (0x4D5 << 2)
label_1d1d74:
    if (ctx->pc == 0x1D1D74u) {
        ctx->pc = 0x1D1D74u;
            // 0x1d1d74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D78u;
        goto label_1d1d78;
    }
    ctx->pc = 0x1D1D70u;
    {
        const bool branch_taken_0x1d1d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D70u;
            // 0x1d1d74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d70) {
            ctx->pc = 0x1D30C8u;
            goto label_1d30c8;
        }
    }
    ctx->pc = 0x1D1D78u;
label_1d1d78:
    // 0x1d1d78: 0x8f828d98  lw          $v0, -0x7268($gp)
    ctx->pc = 0x1d1d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938008)));
label_1d1d7c:
    // 0x1d1d7c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1d1d80:
    if (ctx->pc == 0x1D1D80u) {
        ctx->pc = 0x1D1D84u;
        goto label_1d1d84;
    }
    ctx->pc = 0x1D1D7Cu;
    {
        const bool branch_taken_0x1d1d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1d7c) {
            ctx->pc = 0x1D1DA8u;
            goto label_1d1da8;
        }
    }
    ctx->pc = 0x1D1D84u;
label_1d1d84:
    // 0x1d1d84: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d1d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d1d88:
    // 0x1d1d88: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d1d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d1d8c:
    // 0x1d1d8c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d1d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1d1d90:
    // 0x1d1d90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1d1d94:
    if (ctx->pc == 0x1D1D94u) {
        ctx->pc = 0x1D1D98u;
        goto label_1d1d98;
    }
    ctx->pc = 0x1D1D90u;
    {
        const bool branch_taken_0x1d1d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1d90) {
            ctx->pc = 0x1D1DA8u;
            goto label_1d1da8;
        }
    }
    ctx->pc = 0x1D1D98u;
label_1d1d98:
    // 0x1d1d98: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d1d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d1d9c:
    // 0x1d1d9c: 0x8f858dac  lw          $a1, -0x7254($gp)
    ctx->pc = 0x1d1d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d1da0:
    // 0x1d1da0: 0xc05c484  jal         func_171210
label_1d1da4:
    if (ctx->pc == 0x1D1DA4u) {
        ctx->pc = 0x1D1DA4u;
            // 0x1d1da4: 0x27868d90  addiu       $a2, $gp, -0x7270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938000));
        ctx->pc = 0x1D1DA8u;
        goto label_1d1da8;
    }
    ctx->pc = 0x1D1DA0u;
    SET_GPR_U32(ctx, 31, 0x1D1DA8u);
    ctx->pc = 0x1D1DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DA0u;
            // 0x1d1da4: 0x27868d90  addiu       $a2, $gp, -0x7270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171210u;
    if (runtime->hasFunction(0x171210u)) {
        auto targetFn = runtime->lookupFunction(0x171210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1DA8u; }
        if (ctx->pc != 0x1D1DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunScript__12CActionCharaFP6CSceneP14RUN_SCRIPT_ENV_0x171210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1DA8u; }
        if (ctx->pc != 0x1D1DA8u) { return; }
    }
    ctx->pc = 0x1D1DA8u;
label_1d1da8:
    // 0x1d1da8: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d1da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d1dac:
    // 0x1d1dac: 0xc05c670  jal         func_1719C0
label_1d1db0:
    if (ctx->pc == 0x1D1DB0u) {
        ctx->pc = 0x1D1DB0u;
            // 0x1d1db0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1D1DB4u;
        goto label_1d1db4;
    }
    ctx->pc = 0x1D1DACu;
    SET_GPR_U32(ctx, 31, 0x1D1DB4u);
    ctx->pc = 0x1D1DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DACu;
            // 0x1d1db0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1719C0u;
    if (runtime->hasFunction(0x1719C0u)) {
        auto targetFn = runtime->lookupFunction(0x1719C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1DB4u; }
        if (ctx->pc != 0x1D1DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckReleaseTimming__12CActionCharaFi_0x1719c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1DB4u; }
        if (ctx->pc != 0x1D1DB4u) { return; }
    }
    ctx->pc = 0x1D1DB4u;
label_1d1db4:
    // 0x1d1db4: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_1d1db8:
    if (ctx->pc == 0x1D1DB8u) {
        ctx->pc = 0x1D1DBCu;
        goto label_1d1dbc;
    }
    ctx->pc = 0x1D1DB4u;
    {
        const bool branch_taken_0x1d1db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1db4) {
            ctx->pc = 0x1D1EE0u;
            goto label_1d1ee0;
        }
    }
    ctx->pc = 0x1D1DBCu;
label_1d1dbc:
    // 0x1d1dbc: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d1dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d1dc0:
    // 0x1d1dc0: 0xc05c670  jal         func_1719C0
label_1d1dc4:
    if (ctx->pc == 0x1D1DC4u) {
        ctx->pc = 0x1D1DC4u;
            // 0x1d1dc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1D1DC8u;
        goto label_1d1dc8;
    }
    ctx->pc = 0x1D1DC0u;
    SET_GPR_U32(ctx, 31, 0x1D1DC8u);
    ctx->pc = 0x1D1DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DC0u;
            // 0x1d1dc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1719C0u;
    if (runtime->hasFunction(0x1719C0u)) {
        auto targetFn = runtime->lookupFunction(0x1719C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1DC8u; }
        if (ctx->pc != 0x1D1DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckReleaseTimming__12CActionCharaFi_0x1719c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1DC8u; }
        if (ctx->pc != 0x1D1DC8u) { return; }
    }
    ctx->pc = 0x1D1DC8u;
label_1d1dc8:
    // 0x1d1dc8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d1dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d1dcc:
    // 0x1d1dcc: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
label_1d1dd0:
    if (ctx->pc == 0x1D1DD0u) {
        ctx->pc = 0x1D1DD4u;
        goto label_1d1dd4;
    }
    ctx->pc = 0x1D1DCCu;
    {
        const bool branch_taken_0x1d1dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d1dcc) {
            ctx->pc = 0x1D1E38u;
            goto label_1d1e38;
        }
    }
    ctx->pc = 0x1D1DD4u;
label_1d1dd4:
    // 0x1d1dd4: 0x8f828dd8  lw          $v0, -0x7228($gp)
    ctx->pc = 0x1d1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d1dd8:
    // 0x1d1dd8: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1d1dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1d1ddc:
    // 0x1d1ddc: 0x8c450720  lw          $a1, 0x720($v0)
    ctx->pc = 0x1d1ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1824)));
label_1d1de0:
    // 0x1d1de0: 0xc0b3400  jal         func_2CD000
label_1d1de4:
    if (ctx->pc == 0x1D1DE4u) {
        ctx->pc = 0x1D1DE4u;
            // 0x1d1de4: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->pc = 0x1D1DE8u;
        goto label_1d1de8;
    }
    ctx->pc = 0x1D1DE0u;
    SET_GPR_U32(ctx, 31, 0x1D1DE8u);
    ctx->pc = 0x1D1DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DE0u;
            // 0x1d1de4: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD000u;
    if (runtime->hasFunction(0x2CD000u)) {
        auto targetFn = runtime->lookupFunction(0x2CD000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1DE8u; }
        if (ctx->pc != 0x1D1DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Hold__4CPotFP9CMapParts_0x2cd000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1DE8u; }
        if (ctx->pc != 0x1D1DE8u) { return; }
    }
    ctx->pc = 0x1D1DE8u;
label_1d1de8:
    // 0x1d1de8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1dec:
    // 0x1d1dec: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1d1decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1d1df0:
    // 0x1d1df0: 0x8c25f6e4  lw          $a1, -0x91C($at)
    ctx->pc = 0x1d1df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964964)));
label_1d1df4:
    // 0x1d1df4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1df8:
    // 0x1d1df8: 0x8c2604b4  lw          $a2, 0x4B4($at)
    ctx->pc = 0x1d1df8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1204)));
label_1d1dfc:
    // 0x1d1dfc: 0xc0b316c  jal         func_2CC5B0
label_1d1e00:
    if (ctx->pc == 0x1D1E00u) {
        ctx->pc = 0x1D1E00u;
            // 0x1d1e00: 0x2484f430  addiu       $a0, $a0, -0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964272));
        ctx->pc = 0x1D1E04u;
        goto label_1d1e04;
    }
    ctx->pc = 0x1D1DFCu;
    SET_GPR_U32(ctx, 31, 0x1D1E04u);
    ctx->pc = 0x1D1E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DFCu;
            // 0x1d1e00: 0x2484f430  addiu       $a0, $a0, -0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC5B0u;
    if (runtime->hasFunction(0x2CC5B0u)) {
        auto targetFn = runtime->lookupFunction(0x2CC5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E04u; }
        if (ctx->pc != 0x1D1E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetObject2__5CBPotFiP9CMapParts_0x2cc5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E04u; }
        if (ctx->pc != 0x1D1E04u) { return; }
    }
    ctx->pc = 0x1D1E04u;
label_1d1e04:
    // 0x1d1e04: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1d1e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1d1e08:
    // 0x1d1e08: 0xc0b33bc  jal         func_2CCEF0
label_1d1e0c:
    if (ctx->pc == 0x1D1E0Cu) {
        ctx->pc = 0x1D1E0Cu;
            // 0x1d1e0c: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->pc = 0x1D1E10u;
        goto label_1d1e10;
    }
    ctx->pc = 0x1D1E08u;
    SET_GPR_U32(ctx, 31, 0x1D1E10u);
    ctx->pc = 0x1D1E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E08u;
            // 0x1d1e0c: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CCEF0u;
    if (runtime->hasFunction(0x2CCEF0u)) {
        auto targetFn = runtime->lookupFunction(0x2CCEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E10u; }
        if (ctx->pc != 0x1D1E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Throw__4CPotFv_0x2ccef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E10u; }
        if (ctx->pc != 0x1D1E10u) { return; }
    }
    ctx->pc = 0x1D1E10u;
label_1d1e10:
    // 0x1d1e10: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d1e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d1e14:
    // 0x1d1e14: 0xc06e9c0  jal         func_1BA700
label_1d1e18:
    if (ctx->pc == 0x1D1E18u) {
        ctx->pc = 0x1D1E18u;
            // 0x1d1e18: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->pc = 0x1D1E1Cu;
        goto label_1d1e1c;
    }
    ctx->pc = 0x1D1E14u;
    SET_GPR_U32(ctx, 31, 0x1D1E1Cu);
    ctx->pc = 0x1D1E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E14u;
            // 0x1d1e18: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA700u;
    if (runtime->hasFunction(0x1BA700u)) {
        auto targetFn = runtime->lookupFunction(0x1BA700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E1Cu; }
        if (ctx->pc != 0x1D1E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrim__11CColPrimManFv_0x1ba700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E1Cu; }
        if (ctx->pc != 0x1D1E1Cu) { return; }
    }
    ctx->pc = 0x1D1E1Cu;
label_1d1e1c:
    // 0x1d1e1c: 0xaf828de0  sw          $v0, -0x7220($gp)
    ctx->pc = 0x1d1e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938080), GPR_U32(ctx, 2));
label_1d1e20:
    // 0x1d1e20: 0x8f848de0  lw          $a0, -0x7220($gp)
    ctx->pc = 0x1d1e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938080)));
label_1d1e24:
    // 0x1d1e24: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d1e28:
    if (ctx->pc == 0x1D1E28u) {
        ctx->pc = 0x1D1E28u;
            // 0x1d1e28: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1D1E2Cu;
        goto label_1d1e2c;
    }
    ctx->pc = 0x1D1E24u;
    {
        const bool branch_taken_0x1d1e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E24u;
            // 0x1d1e28: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e24) {
            ctx->pc = 0x1D1E38u;
            goto label_1d1e38;
        }
    }
    ctx->pc = 0x1D1E2Cu;
label_1d1e2c:
    // 0x1d1e2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e30:
    // 0x1d1e30: 0xc06e718  jal         func_1B9C60
label_1d1e34:
    if (ctx->pc == 0x1D1E34u) {
        ctx->pc = 0x1D1E34u;
            // 0x1d1e34: 0x24a572b8  addiu       $a1, $a1, 0x72B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29368));
        ctx->pc = 0x1D1E38u;
        goto label_1d1e38;
    }
    ctx->pc = 0x1D1E30u;
    SET_GPR_U32(ctx, 31, 0x1D1E38u);
    ctx->pc = 0x1D1E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E30u;
            // 0x1d1e34: 0x24a572b8  addiu       $a1, $a1, 0x72B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9C60u;
    if (runtime->hasFunction(0x1B9C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E38u; }
        if (ctx->pc != 0x1D1E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamage__8CColPrimFPci_0x1b9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E38u; }
        if (ctx->pc != 0x1D1E38u) { return; }
    }
    ctx->pc = 0x1D1E38u;
label_1d1e38:
    // 0x1d1e38: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d1e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d1e3c:
    // 0x1d1e3c: 0xc05c670  jal         func_1719C0
label_1d1e40:
    if (ctx->pc == 0x1D1E40u) {
        ctx->pc = 0x1D1E40u;
            // 0x1d1e40: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1D1E44u;
        goto label_1d1e44;
    }
    ctx->pc = 0x1D1E3Cu;
    SET_GPR_U32(ctx, 31, 0x1D1E44u);
    ctx->pc = 0x1D1E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E3Cu;
            // 0x1d1e40: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1719C0u;
    if (runtime->hasFunction(0x1719C0u)) {
        auto targetFn = runtime->lookupFunction(0x1719C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E44u; }
        if (ctx->pc != 0x1D1E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckReleaseTimming__12CActionCharaFi_0x1719c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E44u; }
        if (ctx->pc != 0x1D1E44u) { return; }
    }
    ctx->pc = 0x1D1E44u;
label_1d1e44:
    // 0x1d1e44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1e48:
    // 0x1d1e48: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_1d1e4c:
    if (ctx->pc == 0x1D1E4Cu) {
        ctx->pc = 0x1D1E50u;
        goto label_1d1e50;
    }
    ctx->pc = 0x1D1E48u;
    {
        const bool branch_taken_0x1d1e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d1e48) {
            ctx->pc = 0x1D1E80u;
            goto label_1d1e80;
        }
    }
    ctx->pc = 0x1D1E50u;
label_1d1e50:
    // 0x1d1e50: 0x8f828dd8  lw          $v0, -0x7228($gp)
    ctx->pc = 0x1d1e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d1e54:
    // 0x1d1e54: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1d1e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1d1e58:
    // 0x1d1e58: 0x8c450720  lw          $a1, 0x720($v0)
    ctx->pc = 0x1d1e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1824)));
label_1d1e5c:
    // 0x1d1e5c: 0xc0b3400  jal         func_2CD000
label_1d1e60:
    if (ctx->pc == 0x1D1E60u) {
        ctx->pc = 0x1D1E60u;
            // 0x1d1e60: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->pc = 0x1D1E64u;
        goto label_1d1e64;
    }
    ctx->pc = 0x1D1E5Cu;
    SET_GPR_U32(ctx, 31, 0x1D1E64u);
    ctx->pc = 0x1D1E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E5Cu;
            // 0x1d1e60: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD000u;
    if (runtime->hasFunction(0x2CD000u)) {
        auto targetFn = runtime->lookupFunction(0x2CD000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E64u; }
        if (ctx->pc != 0x1D1E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Hold__4CPotFP9CMapParts_0x2cd000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E64u; }
        if (ctx->pc != 0x1D1E64u) { return; }
    }
    ctx->pc = 0x1D1E64u;
label_1d1e64:
    // 0x1d1e64: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1e68:
    // 0x1d1e68: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1d1e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1d1e6c:
    // 0x1d1e6c: 0x8c25f6e4  lw          $a1, -0x91C($at)
    ctx->pc = 0x1d1e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964964)));
label_1d1e70:
    // 0x1d1e70: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1e74:
    // 0x1d1e74: 0x8c2604b4  lw          $a2, 0x4B4($at)
    ctx->pc = 0x1d1e74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1204)));
label_1d1e78:
    // 0x1d1e78: 0xc0b316c  jal         func_2CC5B0
label_1d1e7c:
    if (ctx->pc == 0x1D1E7Cu) {
        ctx->pc = 0x1D1E7Cu;
            // 0x1d1e7c: 0x2484f430  addiu       $a0, $a0, -0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964272));
        ctx->pc = 0x1D1E80u;
        goto label_1d1e80;
    }
    ctx->pc = 0x1D1E78u;
    SET_GPR_U32(ctx, 31, 0x1D1E80u);
    ctx->pc = 0x1D1E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E78u;
            // 0x1d1e7c: 0x2484f430  addiu       $a0, $a0, -0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC5B0u;
    if (runtime->hasFunction(0x2CC5B0u)) {
        auto targetFn = runtime->lookupFunction(0x2CC5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E80u; }
        if (ctx->pc != 0x1D1E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetObject2__5CBPotFiP9CMapParts_0x2cc5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E80u; }
        if (ctx->pc != 0x1D1E80u) { return; }
    }
    ctx->pc = 0x1D1E80u;
label_1d1e80:
    // 0x1d1e80: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d1e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d1e84:
    // 0x1d1e84: 0xc05c670  jal         func_1719C0
label_1d1e88:
    if (ctx->pc == 0x1D1E88u) {
        ctx->pc = 0x1D1E88u;
            // 0x1d1e88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1D1E8Cu;
        goto label_1d1e8c;
    }
    ctx->pc = 0x1D1E84u;
    SET_GPR_U32(ctx, 31, 0x1D1E8Cu);
    ctx->pc = 0x1D1E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E84u;
            // 0x1d1e88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1719C0u;
    if (runtime->hasFunction(0x1719C0u)) {
        auto targetFn = runtime->lookupFunction(0x1719C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E8Cu; }
        if (ctx->pc != 0x1D1E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckReleaseTimming__12CActionCharaFi_0x1719c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E8Cu; }
        if (ctx->pc != 0x1D1E8Cu) { return; }
    }
    ctx->pc = 0x1D1E8Cu;
label_1d1e8c:
    // 0x1d1e8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d1e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d1e90:
    // 0x1d1e90: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_1d1e94:
    if (ctx->pc == 0x1D1E94u) {
        ctx->pc = 0x1D1E98u;
        goto label_1d1e98;
    }
    ctx->pc = 0x1D1E90u;
    {
        const bool branch_taken_0x1d1e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d1e90) {
            ctx->pc = 0x1D1EE0u;
            goto label_1d1ee0;
        }
    }
    ctx->pc = 0x1D1E98u;
label_1d1e98:
    // 0x1d1e98: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d1e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d1e9c:
    // 0x1d1e9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d1e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d1ea0:
    // 0x1d1ea0: 0x8f390108  lw          $t9, 0x108($t9)
    ctx->pc = 0x1d1ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 264)));
label_1d1ea4:
    // 0x1d1ea4: 0x320f809  jalr        $t9
label_1d1ea8:
    if (ctx->pc == 0x1D1EA8u) {
        ctx->pc = 0x1D1EA8u;
            // 0x1d1ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1EACu;
        goto label_1d1eac;
    }
    ctx->pc = 0x1D1EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D1EACu);
        ctx->pc = 0x1D1EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1EA4u;
            // 0x1d1ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D1EACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D1EACu; }
            if (ctx->pc != 0x1D1EACu) { return; }
        }
        }
    }
    ctx->pc = 0x1D1EACu;
label_1d1eac:
    // 0x1d1eac: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1d1eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1d1eb0:
    // 0x1d1eb0: 0xc0b33bc  jal         func_2CCEF0
label_1d1eb4:
    if (ctx->pc == 0x1D1EB4u) {
        ctx->pc = 0x1D1EB4u;
            // 0x1d1eb4: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->pc = 0x1D1EB8u;
        goto label_1d1eb8;
    }
    ctx->pc = 0x1D1EB0u;
    SET_GPR_U32(ctx, 31, 0x1D1EB8u);
    ctx->pc = 0x1D1EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1EB0u;
            // 0x1d1eb4: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CCEF0u;
    if (runtime->hasFunction(0x2CCEF0u)) {
        auto targetFn = runtime->lookupFunction(0x2CCEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1EB8u; }
        if (ctx->pc != 0x1D1EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Throw__4CPotFv_0x2ccef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1EB8u; }
        if (ctx->pc != 0x1D1EB8u) { return; }
    }
    ctx->pc = 0x1D1EB8u;
label_1d1eb8:
    // 0x1d1eb8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d1eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d1ebc:
    // 0x1d1ebc: 0xc06e9c0  jal         func_1BA700
label_1d1ec0:
    if (ctx->pc == 0x1D1EC0u) {
        ctx->pc = 0x1D1EC0u;
            // 0x1d1ec0: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->pc = 0x1D1EC4u;
        goto label_1d1ec4;
    }
    ctx->pc = 0x1D1EBCu;
    SET_GPR_U32(ctx, 31, 0x1D1EC4u);
    ctx->pc = 0x1D1EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1EBCu;
            // 0x1d1ec0: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA700u;
    if (runtime->hasFunction(0x1BA700u)) {
        auto targetFn = runtime->lookupFunction(0x1BA700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1EC4u; }
        if (ctx->pc != 0x1D1EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrim__11CColPrimManFv_0x1ba700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1EC4u; }
        if (ctx->pc != 0x1D1EC4u) { return; }
    }
    ctx->pc = 0x1D1EC4u;
label_1d1ec4:
    // 0x1d1ec4: 0xaf828de0  sw          $v0, -0x7220($gp)
    ctx->pc = 0x1d1ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938080), GPR_U32(ctx, 2));
label_1d1ec8:
    // 0x1d1ec8: 0x8f848de0  lw          $a0, -0x7220($gp)
    ctx->pc = 0x1d1ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938080)));
label_1d1ecc:
    // 0x1d1ecc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d1ed0:
    if (ctx->pc == 0x1D1ED0u) {
        ctx->pc = 0x1D1ED0u;
            // 0x1d1ed0: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1D1ED4u;
        goto label_1d1ed4;
    }
    ctx->pc = 0x1D1ECCu;
    {
        const bool branch_taken_0x1d1ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1ECCu;
            // 0x1d1ed0: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ecc) {
            ctx->pc = 0x1D1EE0u;
            goto label_1d1ee0;
        }
    }
    ctx->pc = 0x1D1ED4u;
label_1d1ed4:
    // 0x1d1ed4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ed8:
    // 0x1d1ed8: 0xc06e718  jal         func_1B9C60
label_1d1edc:
    if (ctx->pc == 0x1D1EDCu) {
        ctx->pc = 0x1D1EDCu;
            // 0x1d1edc: 0x24a572b8  addiu       $a1, $a1, 0x72B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29368));
        ctx->pc = 0x1D1EE0u;
        goto label_1d1ee0;
    }
    ctx->pc = 0x1D1ED8u;
    SET_GPR_U32(ctx, 31, 0x1D1EE0u);
    ctx->pc = 0x1D1EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1ED8u;
            // 0x1d1edc: 0x24a572b8  addiu       $a1, $a1, 0x72B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9C60u;
    if (runtime->hasFunction(0x1B9C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1EE0u; }
        if (ctx->pc != 0x1D1EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamage__8CColPrimFPci_0x1b9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1EE0u; }
        if (ctx->pc != 0x1D1EE0u) { return; }
    }
    ctx->pc = 0x1D1EE0u;
label_1d1ee0:
    // 0x1d1ee0: 0x8f838da4  lw          $v1, -0x725C($gp)
    ctx->pc = 0x1d1ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938020)));
label_1d1ee4:
    // 0x1d1ee4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d1ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d1ee8:
    // 0x1d1ee8: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x1d1ee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
label_1d1eec:
    // 0x1d1eec: 0x83828e1c  lb          $v0, -0x71E4($gp)
    ctx->pc = 0x1d1eecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938140)));
label_1d1ef0:
    // 0x1d1ef0: 0x611821  addu        $v1, $v1, $at
    ctx->pc = 0x1d1ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1d1ef4:
    // 0x1d1ef4: 0x80630037  lb          $v1, 0x37($v1)
    ctx->pc = 0x1d1ef4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 55)));
label_1d1ef8:
    // 0x1d1ef8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d1efc:
    // 0x1d1efc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d1efcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1d1f00:
    // 0x1d1f00: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1d1f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1d1f04:
    // 0x1d1f04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d1f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1d1f08:
    // 0x1d1f08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1d1f0c:
    if (ctx->pc == 0x1D1F0Cu) {
        ctx->pc = 0x1D1F0Cu;
            // 0x1d1f0c: 0xac235900  sw          $v1, 0x5900($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 22784), GPR_U32(ctx, 3));
        ctx->pc = 0x1D1F10u;
        goto label_1d1f10;
    }
    ctx->pc = 0x1D1F08u;
    {
        const bool branch_taken_0x1d1f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F08u;
            // 0x1d1f0c: 0xac235900  sw          $v1, 0x5900($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 22784), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f08) {
            ctx->pc = 0x1D1F1Cu;
            goto label_1d1f1c;
        }
    }
    ctx->pc = 0x1D1F10u;
label_1d1f10:
    // 0x1d1f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1f14:
    // 0x1d1f14: 0xaf828e18  sw          $v0, -0x71E8($gp)
    ctx->pc = 0x1d1f14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938136), GPR_U32(ctx, 2));
label_1d1f18:
    // 0x1d1f18: 0xa3828e1c  sb          $v0, -0x71E4($gp)
    ctx->pc = 0x1d1f18u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938140), (uint8_t)GPR_U32(ctx, 2));
label_1d1f1c:
    // 0x1d1f1c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1d1f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_1d1f20:
    // 0x1d1f20: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d1f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d1f24:
    // 0x1d1f24: 0x24a59000  addiu       $a1, $a1, -0x7000
    ctx->pc = 0x1d1f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938624));
label_1d1f28:
    // 0x1d1f28: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1d1f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d1f2c:
    // 0x1d1f2c: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1d1f2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_1d1f30:
    // 0x1d1f30: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1d1f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1f34:
    // 0x1d1f34: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1d1f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_1d1f38:
    // 0x1d1f38: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1d1f38u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1d1f3c:
    // 0x1d1f3c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1d1f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1d1f40:
    // 0x1d1f40: 0xc052d1c  jal         func_14B470
label_1d1f44:
    if (ctx->pc == 0x1D1F44u) {
        ctx->pc = 0x1D1F44u;
            // 0x1d1f44: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->pc = 0x1D1F48u;
        goto label_1d1f48;
    }
    ctx->pc = 0x1D1F40u;
    SET_GPR_U32(ctx, 31, 0x1D1F48u);
    ctx->pc = 0x1D1F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F40u;
            // 0x1d1f44: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1F48u; }
        if (ctx->pc != 0x1D1F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1F48u; }
        if (ctx->pc != 0x1D1F48u) { return; }
    }
    ctx->pc = 0x1D1F48u;
label_1d1f48:
    // 0x1d1f48: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1d1f4c:
    if (ctx->pc == 0x1D1F4Cu) {
        ctx->pc = 0x1D1F4Cu;
            // 0x1d1f4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F50u;
        goto label_1d1f50;
    }
    ctx->pc = 0x1D1F48u;
    {
        const bool branch_taken_0x1d1f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F48u;
            // 0x1d1f4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f48) {
            ctx->pc = 0x1D1FA0u;
            goto label_1d1fa0;
        }
    }
    ctx->pc = 0x1D1F50u;
label_1d1f50:
    // 0x1d1f50: 0x8f838e18  lw          $v1, -0x71E8($gp)
    ctx->pc = 0x1d1f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938136)));
label_1d1f54:
    // 0x1d1f54: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1d1f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d1f58:
    // 0x1d1f58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d1f5c:
    if (ctx->pc == 0x1D1F5Cu) {
        ctx->pc = 0x1D1F5Cu;
            // 0x1d1f5c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x1D1F60u;
        goto label_1d1f60;
    }
    ctx->pc = 0x1D1F58u;
    {
        const bool branch_taken_0x1d1f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F58u;
            // 0x1d1f5c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f58) {
            ctx->pc = 0x1D1F68u;
            goto label_1d1f68;
        }
    }
    ctx->pc = 0x1D1F60u;
label_1d1f60:
    // 0x1d1f60: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d1f64:
    if (ctx->pc == 0x1D1F64u) {
        ctx->pc = 0x1D1F64u;
            // 0x1d1f64: 0xaf808e18  sw          $zero, -0x71E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938136), GPR_U32(ctx, 0));
        ctx->pc = 0x1D1F68u;
        goto label_1d1f68;
    }
    ctx->pc = 0x1D1F60u;
    {
        const bool branch_taken_0x1d1f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F60u;
            // 0x1d1f64: 0xaf808e18  sw          $zero, -0x71E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f60) {
            ctx->pc = 0x1D1F6Cu;
            goto label_1d1f6c;
        }
    }
    ctx->pc = 0x1D1F68u;
label_1d1f68:
    // 0x1d1f68: 0xaf828e18  sw          $v0, -0x71E8($gp)
    ctx->pc = 0x1d1f68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938136), GPR_U32(ctx, 2));
label_1d1f6c:
    // 0x1d1f6c: 0x8f828e18  lw          $v0, -0x71E8($gp)
    ctx->pc = 0x1d1f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938136)));
label_1d1f70:
    // 0x1d1f70: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d1f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d1f74:
    // 0x1d1f74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d1f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d1f78:
    // 0x1d1f78: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1d1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1d1f7c:
    // 0x1d1f7c: 0xc44c00a0  lwc1        $f12, 0xA0($v0)
    ctx->pc = 0x1d1f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d1f80:
    // 0x1d1f80: 0xc04c680  jal         func_131A00
label_1d1f84:
    if (ctx->pc == 0x1D1F84u) {
        ctx->pc = 0x1D1F84u;
            // 0x1d1f84: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->pc = 0x1D1F88u;
        goto label_1d1f88;
    }
    ctx->pc = 0x1D1F80u;
    SET_GPR_U32(ctx, 31, 0x1D1F88u);
    ctx->pc = 0x1D1F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F80u;
            // 0x1d1f84: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1F88u; }
        if (ctx->pc != 0x1D1F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1F88u; }
        if (ctx->pc != 0x1D1F88u) { return; }
    }
    ctx->pc = 0x1D1F88u;
label_1d1f88:
    // 0x1d1f88: 0x8f828e18  lw          $v0, -0x71E8($gp)
    ctx->pc = 0x1d1f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938136)));
label_1d1f8c:
    // 0x1d1f8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d1f90:
    // 0x1d1f90: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1d1f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1d1f94:
    // 0x1d1f94: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x1d1f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1f98:
    // 0x1d1f98: 0xe7808d9c  swc1        $f0, -0x7264($gp)
    ctx->pc = 0x1d1f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938012), bits); }
label_1d1f9c:
    // 0x1d1f9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1fa0:
    // 0x1d1fa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1fa4:
    // 0x1d1fa4: 0x8f828da0  lw          $v0, -0x7260($gp)
    ctx->pc = 0x1d1fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1d1fa8:
    // 0x1d1fa8: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1d1fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_1d1fac:
    // 0x1d1fac: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d1facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d1fb0:
    // 0x1d1fb0: 0x24639010  addiu       $v1, $v1, -0x6FF0
    ctx->pc = 0x1d1fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938640));
label_1d1fb4:
    // 0x1d1fb4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1d1fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1d1fb8:
    // 0x1d1fb8: 0x84244d96  lh          $a0, 0x4D96($at)
    ctx->pc = 0x1d1fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
label_1d1fbc:
    // 0x1d1fbc: 0x0  nop
    ctx->pc = 0x1d1fbcu;
    // NOP
label_1d1fc0:
    // 0x1d1fc0: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1d1fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d1fc4:
    // 0x1d1fc4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d1fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d1fc8:
    // 0x1d1fc8: 0x14440010  bne         $v0, $a0, . + 4 + (0x10 << 2)
label_1d1fcc:
    if (ctx->pc == 0x1D1FCCu) {
        ctx->pc = 0x1D1FCCu;
            // 0x1d1fcc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->pc = 0x1D1FD0u;
        goto label_1d1fd0;
    }
    ctx->pc = 0x1D1FC8u;
    {
        const bool branch_taken_0x1d1fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D1FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1FC8u;
            // 0x1d1fcc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1fc8) {
            ctx->pc = 0x1D200Cu;
            goto label_1d200c;
        }
    }
    ctx->pc = 0x1D1FD0u;
label_1d1fd0:
    // 0x1d1fd0: 0x588c0  sll         $s1, $a1, 3
    ctx->pc = 0x1d1fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1d1fd4:
    // 0x1d1fd4: 0x24429020  addiu       $v0, $v0, -0x6FE0
    ctx->pc = 0x1d1fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938656));
label_1d1fd8:
    // 0x1d1fd8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d1fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1d1fdc:
    // 0x1d1fdc: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x1d1fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d1fe0:
    // 0x1d1fe0: 0xc0bafe8  jal         func_2EBFA0
label_1d1fe4:
    if (ctx->pc == 0x1D1FE4u) {
        ctx->pc = 0x1D1FE4u;
            // 0x1d1fe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1FE8u;
        goto label_1d1fe8;
    }
    ctx->pc = 0x1D1FE0u;
    SET_GPR_U32(ctx, 31, 0x1D1FE8u);
    ctx->pc = 0x1D1FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1FE0u;
            // 0x1d1fe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FE8u; }
        if (ctx->pc != 0x1D1FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FE8u; }
        if (ctx->pc != 0x1D1FE8u) { return; }
    }
    ctx->pc = 0x1D1FE8u;
label_1d1fe8:
    // 0x1d1fe8: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1d1fe8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d1fec:
    // 0x1d1fec: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d1ff0:
    // 0x1d1ff0: 0x24429024  addiu       $v0, $v0, -0x6FDC
    ctx->pc = 0x1d1ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938660));
label_1d1ff4:
    // 0x1d1ff4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d1ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1d1ff8:
    // 0x1d1ff8: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x1d1ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d1ffc:
    // 0x1d1ffc: 0xc0bafe8  jal         func_2EBFA0
label_1d2000:
    if (ctx->pc == 0x1D2000u) {
        ctx->pc = 0x1D2000u;
            // 0x1d2000: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2004u;
        goto label_1d2004;
    }
    ctx->pc = 0x1D1FFCu;
    SET_GPR_U32(ctx, 31, 0x1D2004u);
    ctx->pc = 0x1D2000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1FFCu;
            // 0x1d2000: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2004u; }
        if (ctx->pc != 0x1D2004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2004u; }
        if (ctx->pc != 0x1D2004u) { return; }
    }
    ctx->pc = 0x1D2004u;
label_1d2004:
    // 0x1d2004: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d2008:
    if (ctx->pc == 0x1D2008u) {
        ctx->pc = 0x1D2008u;
            // 0x1d2008: 0xe4540004  swc1        $f20, 0x4($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->pc = 0x1D200Cu;
        goto label_1d200c;
    }
    ctx->pc = 0x1D2004u;
    {
        const bool branch_taken_0x1d2004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2004u;
            // 0x1d2008: 0xe4540004  swc1        $f20, 0x4($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2004) {
            ctx->pc = 0x1D2018u;
            goto label_1d2018;
        }
    }
    ctx->pc = 0x1D200Cu;
label_1d200c:
    // 0x1d200c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1d200cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1d2010:
    // 0x1d2010: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
label_1d2014:
    if (ctx->pc == 0x1D2014u) {
        ctx->pc = 0x1D2014u;
            // 0x1d2014: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x1D2018u;
        goto label_1d2018;
    }
    ctx->pc = 0x1D2010u;
    {
        const bool branch_taken_0x1d2010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2010u;
            // 0x1d2014: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2010) {
            ctx->pc = 0x1D1FC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d1fc0;
        }
    }
    ctx->pc = 0x1D2018u;
label_1d2018:
    // 0x1d2018: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1d2018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d201c:
    // 0x1d201c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d201cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2020:
    // 0x1d2020: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d2020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d2024:
    // 0x1d2024: 0x320f809  jalr        $t9
label_1d2028:
    if (ctx->pc == 0x1D2028u) {
        ctx->pc = 0x1D2028u;
            // 0x1d2028: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1D202Cu;
        goto label_1d202c;
    }
    ctx->pc = 0x1D2024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D202Cu);
        ctx->pc = 0x1D2028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2024u;
            // 0x1d2028: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D202Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D202Cu; }
            if (ctx->pc != 0x1D202Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D202Cu;
label_1d202c:
    // 0x1d202c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d202cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d2030:
    // 0x1d2030: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1d2030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1d2034:
    // 0x1d2034: 0xc0bb22c  jal         func_2EC8B0
label_1d2038:
    if (ctx->pc == 0x1D2038u) {
        ctx->pc = 0x1D2038u;
            // 0x1d2038: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->pc = 0x1D203Cu;
        goto label_1d203c;
    }
    ctx->pc = 0x1D2034u;
    SET_GPR_U32(ctx, 31, 0x1D203Cu);
    ctx->pc = 0x1D2038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2034u;
            // 0x1d2038: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC8B0u;
    if (runtime->hasFunction(0x2EC8B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D203Cu; }
        if (ctx->pc != 0x1D203Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCheckRef__14CCameraControlFPf_0x2ec8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D203Cu; }
        if (ctx->pc != 0x1D203Cu) { return; }
    }
    ctx->pc = 0x1D203Cu;
label_1d203c:
    // 0x1d203c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d203cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d2040:
    // 0x1d2040: 0xc041c5c  jal         func_107170
label_1d2044:
    if (ctx->pc == 0x1D2044u) {
        ctx->pc = 0x1D2044u;
            // 0x1d2044: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x1D2048u;
        goto label_1d2048;
    }
    ctx->pc = 0x1D2040u;
    SET_GPR_U32(ctx, 31, 0x1D2048u);
    ctx->pc = 0x1D2044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2040u;
            // 0x1d2044: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2048u; }
        if (ctx->pc != 0x1D2048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2048u; }
        if (ctx->pc != 0x1D2048u) { return; }
    }
    ctx->pc = 0x1D2048u;
label_1d2048:
    // 0x1d2048: 0x83828e24  lb          $v0, -0x71DC($gp)
    ctx->pc = 0x1d2048u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938148)));
label_1d204c:
    // 0x1d204c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d2050:
    if (ctx->pc == 0x1D2050u) {
        ctx->pc = 0x1D2050u;
            // 0x1d2050: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D2054u;
        goto label_1d2054;
    }
    ctx->pc = 0x1D204Cu;
    {
        const bool branch_taken_0x1d204c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D204Cu;
            // 0x1d2050: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d204c) {
            ctx->pc = 0x1D205Cu;
            goto label_1d205c;
        }
    }
    ctx->pc = 0x1D2054u;
label_1d2054:
    // 0x1d2054: 0xaf808e20  sw          $zero, -0x71E0($gp)
    ctx->pc = 0x1d2054u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938144), GPR_U32(ctx, 0));
label_1d2058:
    // 0x1d2058: 0xa3828e24  sb          $v0, -0x71DC($gp)
    ctx->pc = 0x1d2058u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938148), (uint8_t)GPR_U32(ctx, 2));
label_1d205c:
    // 0x1d205c: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x1d205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d2060:
    // 0x1d2060: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1d2060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1d2064:
    // 0x1d2064: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1d2064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1d2068:
    // 0x1d2068: 0x27b300b4  addiu       $s3, $sp, 0xB4
    ctx->pc = 0x1d2068u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_1d206c:
    // 0x1d206c: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x1d206cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d2070:
    // 0x1d2070: 0x27b400b8  addiu       $s4, $sp, 0xB8
    ctx->pc = 0x1d2070u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d2074:
    // 0x1d2074: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d2074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d2078:
    // 0x1d2078: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1d2078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d207c:
    // 0x1d207c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1d207cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1d2080:
    // 0x1d2080: 0x0  nop
    ctx->pc = 0x1d2080u;
    // NOP
label_1d2084:
    // 0x1d2084: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1d2084u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_1d2088:
    // 0x1d2088: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1d2088u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1d208c:
    // 0x1d208c: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x1d208cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_1d2090:
    // 0x1d2090: 0xc7818e20  lwc1        $f1, -0x71E0($gp)
    ctx->pc = 0x1d2090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2094:
    // 0x1d2094: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x1d2094u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1d2098:
    // 0x1d2098: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1d2098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d209c:
    // 0x1d209c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1d209cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1d20a0:
    // 0x1d20a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d20a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d20a4:
    // 0x1d20a4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1d20a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d20a8:
    // 0x1d20a8: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d20a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d20ac:
    // 0x1d20ac: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x1d20acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d20b0:
    // 0x1d20b0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1d20b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1d20b4:
    // 0x1d20b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d20b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d20b8:
    // 0x1d20b8: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1d20b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_1d20bc:
    // 0x1d20bc: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d20c0:
    // 0x1d20c0: 0x84430078  lh          $v1, 0x78($v0)
    ctx->pc = 0x1d20c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1d20c4:
    // 0x1d20c4: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
label_1d20c8:
    if (ctx->pc == 0x1D20C8u) {
        ctx->pc = 0x1D20C8u;
            // 0x1d20c8: 0x24440070  addiu       $a0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->pc = 0x1D20CCu;
        goto label_1d20cc;
    }
    ctx->pc = 0x1D20C4u;
    {
        const bool branch_taken_0x1d20c4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D20C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D20C4u;
            // 0x1d20c8: 0x24440070  addiu       $a0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20c4) {
            ctx->pc = 0x1D210Cu;
            goto label_1d210c;
        }
    }
    ctx->pc = 0x1D20CCu;
label_1d20cc:
    // 0x1d20cc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1d20d0:
    if (ctx->pc == 0x1D20D0u) {
        ctx->pc = 0x1D20D0u;
            // 0x1d20d0: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x1D20D4u;
        goto label_1d20d4;
    }
    ctx->pc = 0x1D20CCu;
    {
        const bool branch_taken_0x1d20cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D20D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D20CCu;
            // 0x1d20d0: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20cc) {
            ctx->pc = 0x1D20E0u;
            goto label_1d20e0;
        }
    }
    ctx->pc = 0x1D20D4u;
label_1d20d4:
    // 0x1d20d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1d20d8:
    if (ctx->pc == 0x1D20D8u) {
        ctx->pc = 0x1D20DCu;
        goto label_1d20dc;
    }
    ctx->pc = 0x1D20D4u;
    {
        const bool branch_taken_0x1d20d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d20d4) {
            ctx->pc = 0x1D20E0u;
            goto label_1d20e0;
        }
    }
    ctx->pc = 0x1D20DCu;
label_1d20dc:
    // 0x1d20dc: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1d20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1d20e0:
    // 0x1d20e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d20e4:
    if (ctx->pc == 0x1D20E4u) {
        ctx->pc = 0x1D20E8u;
        goto label_1d20e8;
    }
    ctx->pc = 0x1D20E0u;
    {
        const bool branch_taken_0x1d20e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d20e0) {
            ctx->pc = 0x1D20FCu;
            goto label_1d20fc;
        }
    }
    ctx->pc = 0x1D20E8u;
label_1d20e8:
    // 0x1d20e8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d20e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d20ec:
    // 0x1d20ec: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1d20ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d20f0:
    // 0x1d20f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d20f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d20f4:
    // 0x1d20f4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d20f8:
    if (ctx->pc == 0x1D20F8u) {
        ctx->pc = 0x1D20F8u;
            // 0x1d20f8: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->pc = 0x1D20FCu;
        goto label_1d20fc;
    }
    ctx->pc = 0x1D20F4u;
    {
        const bool branch_taken_0x1d20f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D20F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D20F4u;
            // 0x1d20f8: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20f4) {
            ctx->pc = 0x1D210Cu;
            goto label_1d210c;
        }
    }
    ctx->pc = 0x1D20FCu;
label_1d20fc:
    // 0x1d20fc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d20fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2100:
    // 0x1d2100: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1d2100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2104:
    // 0x1d2104: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d2104u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d2108:
    // 0x1d2108: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1d2108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d210c:
    // 0x1d210c: 0x8e590060  lw          $t9, 0x60($s2)
    ctx->pc = 0x1d210cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1d2110:
    // 0x1d2110: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x1d2110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d2114:
    // 0x1d2114: 0xc66d0000  lwc1        $f13, 0x0($s3)
    ctx->pc = 0x1d2114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d2118:
    // 0x1d2118: 0xc68e0000  lwc1        $f14, 0x0($s4)
    ctx->pc = 0x1d2118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1d211c:
    // 0x1d211c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1d211cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1d2120:
    // 0x1d2120: 0x320f809  jalr        $t9
label_1d2124:
    if (ctx->pc == 0x1D2124u) {
        ctx->pc = 0x1D2124u;
            // 0x1d2124: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2128u;
        goto label_1d2128;
    }
    ctx->pc = 0x1D2120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D2128u);
        ctx->pc = 0x1D2124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2120u;
            // 0x1d2124: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2128u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2128u; }
            if (ctx->pc != 0x1D2128u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2128u;
label_1d2128:
    // 0x1d2128: 0x86020772  lh          $v0, 0x772($s0)
    ctx->pc = 0x1d2128u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1906)));
label_1d212c:
    // 0x1d212c: 0x104000ba  beqz        $v0, . + 4 + (0xBA << 2)
label_1d2130:
    if (ctx->pc == 0x1D2130u) {
        ctx->pc = 0x1D2134u;
        goto label_1d2134;
    }
    ctx->pc = 0x1D212Cu;
    {
        const bool branch_taken_0x1d212c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d212c) {
            ctx->pc = 0x1D2418u;
            goto label_1d2418;
        }
    }
    ctx->pc = 0x1D2134u;
label_1d2134:
    // 0x1d2134: 0x86020770  lh          $v0, 0x770($s0)
    ctx->pc = 0x1d2134u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1904)));
label_1d2138:
    // 0x1d2138: 0x44000b7  bltz        $v0, . + 4 + (0xB7 << 2)
label_1d213c:
    if (ctx->pc == 0x1D213Cu) {
        ctx->pc = 0x1D2140u;
        goto label_1d2140;
    }
    ctx->pc = 0x1D2138u;
    {
        const bool branch_taken_0x1d2138 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d2138) {
            ctx->pc = 0x1D2418u;
            goto label_1d2418;
        }
    }
    ctx->pc = 0x1D2140u;
label_1d2140:
    // 0x1d2140: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1d2140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1d2144:
    // 0x1d2144: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1d2144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_1d2148:
    // 0x1d2148: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d2148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d214c:
    // 0x1d214c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d214cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d2150:
    // 0x1d2150: 0x8c510484  lw          $s1, 0x484($v0)
    ctx->pc = 0x1d2150u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
label_1d2154:
    // 0x1d2154: 0x122000b0  beqz        $s1, . + 4 + (0xB0 << 2)
label_1d2158:
    if (ctx->pc == 0x1D2158u) {
        ctx->pc = 0x1D215Cu;
        goto label_1d215c;
    }
    ctx->pc = 0x1D2154u;
    {
        const bool branch_taken_0x1d2154 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2154) {
            ctx->pc = 0x1D2418u;
            goto label_1d2418;
        }
    }
    ctx->pc = 0x1D215Cu;
label_1d215c:
    // 0x1d215c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d215cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d2160:
    // 0x1d2160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2164:
    // 0x1d2164: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d2164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d2168:
    // 0x1d2168: 0x320f809  jalr        $t9
label_1d216c:
    if (ctx->pc == 0x1D216Cu) {
        ctx->pc = 0x1D216Cu;
            // 0x1d216c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1D2170u;
        goto label_1d2170;
    }
    ctx->pc = 0x1D2168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D2170u);
        ctx->pc = 0x1D216Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2168u;
            // 0x1d216c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2170u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2170u; }
            if (ctx->pc != 0x1D2170u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2170u;
label_1d2170:
    // 0x1d2170: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d2170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d2174:
    // 0x1d2174: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1d2174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1d2178:
    // 0x1d2178: 0xc041c3e  jal         func_1070F8
label_1d217c:
    if (ctx->pc == 0x1D217Cu) {
        ctx->pc = 0x1D217Cu;
            // 0x1d217c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2180u;
        goto label_1d2180;
    }
    ctx->pc = 0x1D2178u;
    SET_GPR_U32(ctx, 31, 0x1D2180u);
    ctx->pc = 0x1D217Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2178u;
            // 0x1d217c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2180u; }
        if (ctx->pc != 0x1D2180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2180u; }
        if (ctx->pc != 0x1D2180u) { return; }
    }
    ctx->pc = 0x1D2180u;
label_1d2180:
    // 0x1d2180: 0xc04bff4  jal         func_12FFD0
label_1d2184:
    if (ctx->pc == 0x1D2184u) {
        ctx->pc = 0x1D2184u;
            // 0x1d2184: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1D2188u;
        goto label_1d2188;
    }
    ctx->pc = 0x1D2180u;
    SET_GPR_U32(ctx, 31, 0x1D2188u);
    ctx->pc = 0x1D2184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2180u;
            // 0x1d2184: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2188u; }
        if (ctx->pc != 0x1D2188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2188u; }
        if (ctx->pc != 0x1D2188u) { return; }
    }
    ctx->pc = 0x1D2188u;
label_1d2188:
    // 0x1d2188: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d2188u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1d218c:
    // 0x1d218c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1d218cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1d2190:
    // 0x1d2190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2194:
    // 0x1d2194: 0x0  nop
    ctx->pc = 0x1d2194u;
    // NOP
label_1d2198:
    // 0x1d2198: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1d2198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d219c:
    // 0x1d219c: 0x0  nop
    ctx->pc = 0x1d219cu;
    // NOP
label_1d21a0:
    // 0x1d21a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1d21a4:
    if (ctx->pc == 0x1D21A4u) {
        ctx->pc = 0x1D21A4u;
            // 0x1d21a4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1D21A8u;
        goto label_1d21a8;
    }
    ctx->pc = 0x1D21A0u;
    {
        const bool branch_taken_0x1d21a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D21A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21A0u;
            // 0x1d21a4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21a0) {
            ctx->pc = 0x1D21ACu;
            goto label_1d21ac;
        }
    }
    ctx->pc = 0x1D21A8u;
label_1d21a8:
    // 0x1d21a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d21a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1d21ac:
    // 0x1d21ac: 0xc041be0  jal         func_106F80
label_1d21b0:
    if (ctx->pc == 0x1D21B0u) {
        ctx->pc = 0x1D21B0u;
            // 0x1d21b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D21B4u;
        goto label_1d21b4;
    }
    ctx->pc = 0x1D21ACu;
    SET_GPR_U32(ctx, 31, 0x1D21B4u);
    ctx->pc = 0x1D21B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21ACu;
            // 0x1d21b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D21B4u; }
        if (ctx->pc != 0x1D21B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D21B4u; }
        if (ctx->pc != 0x1D21B4u) { return; }
    }
    ctx->pc = 0x1D21B4u;
label_1d21b4:
    // 0x1d21b4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d21b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d21b8:
    // 0x1d21b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d21b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d21bc:
    // 0x1d21bc: 0xc041c4a  jal         func_107128
label_1d21c0:
    if (ctx->pc == 0x1D21C0u) {
        ctx->pc = 0x1D21C0u;
            // 0x1d21c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D21C4u;
        goto label_1d21c4;
    }
    ctx->pc = 0x1D21BCu;
    SET_GPR_U32(ctx, 31, 0x1D21C4u);
    ctx->pc = 0x1D21C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21BCu;
            // 0x1d21c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D21C4u; }
        if (ctx->pc != 0x1D21C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D21C4u; }
        if (ctx->pc != 0x1D21C4u) { return; }
    }
    ctx->pc = 0x1D21C4u;
label_1d21c4:
    // 0x1d21c4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1d21c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1d21c8:
    // 0x1d21c8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1d21c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d21cc:
    // 0x1d21cc: 0xc041c38  jal         func_1070E0
label_1d21d0:
    if (ctx->pc == 0x1D21D0u) {
        ctx->pc = 0x1D21D0u;
            // 0x1d21d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D21D4u;
        goto label_1d21d4;
    }
    ctx->pc = 0x1D21CCu;
    SET_GPR_U32(ctx, 31, 0x1D21D4u);
    ctx->pc = 0x1D21D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21CCu;
            // 0x1d21d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D21D4u; }
        if (ctx->pc != 0x1D21D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D21D4u; }
        if (ctx->pc != 0x1D21D4u) { return; }
    }
    ctx->pc = 0x1D21D4u;
label_1d21d4:
    // 0x1d21d4: 0x8e590060  lw          $t9, 0x60($s2)
    ctx->pc = 0x1d21d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1d21d8:
    // 0x1d21d8: 0xc66d0000  lwc1        $f13, 0x0($s3)
    ctx->pc = 0x1d21d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d21dc:
    // 0x1d21dc: 0xc68e0000  lwc1        $f14, 0x0($s4)
    ctx->pc = 0x1d21dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1d21e0:
    // 0x1d21e0: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x1d21e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d21e4:
    // 0x1d21e4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1d21e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1d21e8:
    // 0x1d21e8: 0x320f809  jalr        $t9
label_1d21ec:
    if (ctx->pc == 0x1D21ECu) {
        ctx->pc = 0x1D21ECu;
            // 0x1d21ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D21F0u;
        goto label_1d21f0;
    }
    ctx->pc = 0x1D21E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D21F0u);
        ctx->pc = 0x1D21ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21E8u;
            // 0x1d21ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D21F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D21F0u; }
            if (ctx->pc != 0x1D21F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D21F0u;
label_1d21f0:
    // 0x1d21f0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d21f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d21f4:
    // 0x1d21f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d21f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d21f8:
    // 0x1d21f8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d21f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d21fc:
    // 0x1d21fc: 0x320f809  jalr        $t9
label_1d2200:
    if (ctx->pc == 0x1D2200u) {
        ctx->pc = 0x1D2200u;
            // 0x1d2200: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1D2204u;
        goto label_1d2204;
    }
    ctx->pc = 0x1D21FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D2204u);
        ctx->pc = 0x1D2200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21FCu;
            // 0x1d2200: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2204u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2204u; }
            if (ctx->pc != 0x1D2204u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2204u;
label_1d2204:
    // 0x1d2204: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d2204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1d2208:
    // 0x1d2208: 0xc05166c  jal         func_1459B0
label_1d220c:
    if (ctx->pc == 0x1D220Cu) {
        ctx->pc = 0x1D220Cu;
            // 0x1d220c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1D2210u;
        goto label_1d2210;
    }
    ctx->pc = 0x1D2208u;
    SET_GPR_U32(ctx, 31, 0x1D2210u);
    ctx->pc = 0x1D220Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2208u;
            // 0x1d220c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2210u; }
        if (ctx->pc != 0x1D2210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2210u; }
        if (ctx->pc != 0x1D2210u) { return; }
    }
    ctx->pc = 0x1D2210u;
label_1d2210:
    // 0x1d2210: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_1d2214:
    if (ctx->pc == 0x1D2214u) {
        ctx->pc = 0x1D2218u;
        goto label_1d2218;
    }
    ctx->pc = 0x1D2210u;
    {
        const bool branch_taken_0x1d2210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2210) {
            ctx->pc = 0x1D2304u;
            goto label_1d2304;
        }
    }
    ctx->pc = 0x1D2218u;
label_1d2218:
    // 0x1d2218: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d2218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1d221c:
    // 0x1d221c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d221cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1d2220:
    // 0x1d2220: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1d2220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1d2224:
    // 0x1d2224: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d2224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1d2228:
    // 0x1d2228: 0x284101e1  slti        $at, $v0, 0x1E1
    ctx->pc = 0x1d2228u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)481) ? 1 : 0);
label_1d222c:
    // 0x1d222c: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
label_1d2230:
    if (ctx->pc == 0x1D2230u) {
        ctx->pc = 0x1D2234u;
        goto label_1d2234;
    }
    ctx->pc = 0x1D222Cu;
    {
        const bool branch_taken_0x1d222c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d222c) {
            ctx->pc = 0x1D22A0u;
            goto label_1d22a0;
        }
    }
    ctx->pc = 0x1D2234u;
label_1d2234:
    // 0x1d2234: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d2234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2238:
    // 0x1d2238: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1d2238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_1d223c:
    // 0x1d223c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d223cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d2240:
    // 0x1d2240: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x1d2240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
label_1d2244:
    // 0x1d2244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2248:
    // 0x1d2248: 0x0  nop
    ctx->pc = 0x1d2248u;
    // NOP
label_1d224c:
    // 0x1d224c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d224cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d2250:
    // 0x1d2250: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d2250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d2254:
    // 0x1d2254: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d2254u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2258:
    // 0x1d2258: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d2258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d225c:
    // 0x1d225c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d225cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d2260:
    // 0x1d2260: 0x0  nop
    ctx->pc = 0x1d2260u;
    // NOP
label_1d2264:
    // 0x1d2264: 0x0  nop
    ctx->pc = 0x1d2264u;
    // NOP
label_1d2268:
    // 0x1d2268: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1d2268u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d226c:
    // 0x1d226c: 0x0  nop
    ctx->pc = 0x1d226cu;
    // NOP
label_1d2270:
    // 0x1d2270: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1d2274:
    if (ctx->pc == 0x1D2274u) {
        ctx->pc = 0x1D2274u;
            // 0x1d2274: 0x3c023e06  lui         $v0, 0x3E06 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15878 << 16));
        ctx->pc = 0x1D2278u;
        goto label_1d2278;
    }
    ctx->pc = 0x1D2270u;
    {
        const bool branch_taken_0x1d2270 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D2274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2270u;
            // 0x1d2274: 0x3c023e06  lui         $v0, 0x3E06 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15878 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2270) {
            ctx->pc = 0x1D2280u;
            goto label_1d2280;
        }
    }
    ctx->pc = 0x1D2278u;
label_1d2278:
    // 0x1d2278: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x1d2278u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_1d227c:
    // 0x1d227c: 0x3c023e06  lui         $v0, 0x3E06
    ctx->pc = 0x1d227cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15878 << 16));
label_1d2280:
    // 0x1d2280: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d2280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d2284:
    // 0x1d2284: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1d2284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_1d2288:
    // 0x1d2288: 0x24845830  addiu       $a0, $a0, 0x5830
    ctx->pc = 0x1d2288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
label_1d228c:
    // 0x1d228c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d228cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2290:
    // 0x1d2290: 0x0  nop
    ctx->pc = 0x1d2290u;
    // NOP
label_1d2294:
    // 0x1d2294: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d2294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d2298:
    // 0x1d2298: 0xc0bb1c4  jal         func_2EC710
label_1d229c:
    if (ctx->pc == 0x1D229Cu) {
        ctx->pc = 0x1D229Cu;
            // 0x1d229c: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x1D22A0u;
        goto label_1d22a0;
    }
    ctx->pc = 0x1D2298u;
    SET_GPR_U32(ctx, 31, 0x1D22A0u);
    ctx->pc = 0x1D229Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2298u;
            // 0x1d229c: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC710u;
    if (runtime->hasFunction(0x2EC710u)) {
        auto targetFn = runtime->lookupFunction(0x2EC710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D22A0u; }
        if (ctx->pc != 0x1D22A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Rotate__14CCameraControlFf_0x2ec710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D22A0u; }
        if (ctx->pc != 0x1D22A0u) { return; }
    }
    ctx->pc = 0x1D22A0u;
label_1d22a0:
    // 0x1d22a0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d22a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1d22a4:
    // 0x1d22a4: 0x28410020  slti        $at, $v0, 0x20
    ctx->pc = 0x1d22a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
label_1d22a8:
    // 0x1d22a8: 0x1020005b  beqz        $at, . + 4 + (0x5B << 2)
label_1d22ac:
    if (ctx->pc == 0x1D22ACu) {
        ctx->pc = 0x1D22B0u;
        goto label_1d22b0;
    }
    ctx->pc = 0x1D22A8u;
    {
        const bool branch_taken_0x1d22a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d22a8) {
            ctx->pc = 0x1D2418u;
            goto label_1d2418;
        }
    }
    ctx->pc = 0x1D22B0u;
label_1d22b0:
    // 0x1d22b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d22b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d22b4:
    // 0x1d22b4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d22b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d22b8:
    // 0x1d22b8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1d22b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_1d22bc:
    // 0x1d22bc: 0x24845830  addiu       $a0, $a0, 0x5830
    ctx->pc = 0x1d22bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
label_1d22c0:
    // 0x1d22c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d22c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d22c4:
    // 0x1d22c4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1d22c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_1d22c8:
    // 0x1d22c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d22c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d22cc:
    // 0x1d22cc: 0x0  nop
    ctx->pc = 0x1d22ccu;
    // NOP
label_1d22d0:
    // 0x1d22d0: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1d22d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d22d4:
    // 0x1d22d4: 0x3c023e06  lui         $v0, 0x3E06
    ctx->pc = 0x1d22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15878 << 16));
label_1d22d8:
    // 0x1d22d8: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1d22d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_1d22dc:
    // 0x1d22dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d22dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d22e0:
    // 0x1d22e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d22e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d22e4:
    // 0x1d22e4: 0x0  nop
    ctx->pc = 0x1d22e4u;
    // NOP
label_1d22e8:
    // 0x1d22e8: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x1d22e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_1d22ec:
    // 0x1d22ec: 0x0  nop
    ctx->pc = 0x1d22ecu;
    // NOP
label_1d22f0:
    // 0x1d22f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d22f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1d22f4:
    // 0x1d22f4: 0xc0bb1c4  jal         func_2EC710
label_1d22f8:
    if (ctx->pc == 0x1D22F8u) {
        ctx->pc = 0x1D22F8u;
            // 0x1d22f8: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x1D22FCu;
        goto label_1d22fc;
    }
    ctx->pc = 0x1D22F4u;
    SET_GPR_U32(ctx, 31, 0x1D22FCu);
    ctx->pc = 0x1D22F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D22F4u;
            // 0x1d22f8: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC710u;
    if (runtime->hasFunction(0x2EC710u)) {
        auto targetFn = runtime->lookupFunction(0x2EC710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D22FCu; }
        if (ctx->pc != 0x1D22FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Rotate__14CCameraControlFf_0x2ec710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D22FCu; }
        if (ctx->pc != 0x1D22FCu) { return; }
    }
    ctx->pc = 0x1D22FCu;
label_1d22fc:
    // 0x1d22fc: 0x10000047  b           . + 4 + (0x47 << 2)
label_1d2300:
    if (ctx->pc == 0x1D2300u) {
        ctx->pc = 0x1D2300u;
            // 0x1d2300: 0x8f828db0  lw          $v0, -0x7250($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
        ctx->pc = 0x1D2304u;
        goto label_1d2304;
    }
    ctx->pc = 0x1D22FCu;
    {
        const bool branch_taken_0x1d22fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D22FCu;
            // 0x1d2300: 0x8f828db0  lw          $v0, -0x7250($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22fc) {
            ctx->pc = 0x1D241Cu;
            goto label_1d241c;
        }
    }
    ctx->pc = 0x1D2304u;
label_1d2304:
    // 0x1d2304: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d2304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d2308:
    // 0x1d2308: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d2308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d230c:
    // 0x1d230c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d230cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d2310:
    // 0x1d2310: 0x320f809  jalr        $t9
label_1d2314:
    if (ctx->pc == 0x1D2314u) {
        ctx->pc = 0x1D2314u;
            // 0x1d2314: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x1D2318u;
        goto label_1d2318;
    }
    ctx->pc = 0x1D2310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D2318u);
        ctx->pc = 0x1D2314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2310u;
            // 0x1d2314: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2318u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2318u; }
            if (ctx->pc != 0x1D2318u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2318u;
label_1d2318:
    // 0x1d2318: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d2318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d231c:
    // 0x1d231c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d231cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2320:
    // 0x1d2320: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d2320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d2324:
    // 0x1d2324: 0x320f809  jalr        $t9
label_1d2328:
    if (ctx->pc == 0x1D2328u) {
        ctx->pc = 0x1D2328u;
            // 0x1d2328: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1D232Cu;
        goto label_1d232c;
    }
    ctx->pc = 0x1D2324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D232Cu);
        ctx->pc = 0x1D2328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2324u;
            // 0x1d2328: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D232Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D232Cu; }
            if (ctx->pc != 0x1D232Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D232Cu;
label_1d232c:
    // 0x1d232c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1d232cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1d2330:
    // 0x1d2330: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1d2330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1d2334:
    // 0x1d2334: 0xc041c3e  jal         func_1070F8
label_1d2338:
    if (ctx->pc == 0x1D2338u) {
        ctx->pc = 0x1D2338u;
            // 0x1d2338: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x1D233Cu;
        goto label_1d233c;
    }
    ctx->pc = 0x1D2334u;
    SET_GPR_U32(ctx, 31, 0x1D233Cu);
    ctx->pc = 0x1D2338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2334u;
            // 0x1d2338: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D233Cu; }
        if (ctx->pc != 0x1D233Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D233Cu; }
        if (ctx->pc != 0x1D233Cu) { return; }
    }
    ctx->pc = 0x1D233Cu;
label_1d233c:
    // 0x1d233c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d233cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d2340:
    // 0x1d2340: 0xc04c678  jal         func_1319E0
label_1d2344:
    if (ctx->pc == 0x1D2344u) {
        ctx->pc = 0x1D2344u;
            // 0x1d2344: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->pc = 0x1D2348u;
        goto label_1d2348;
    }
    ctx->pc = 0x1D2340u;
    SET_GPR_U32(ctx, 31, 0x1D2348u);
    ctx->pc = 0x1D2344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2340u;
            // 0x1d2344: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2348u; }
        if (ctx->pc != 0x1D2348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2348u; }
        if (ctx->pc != 0x1D2348u) { return; }
    }
    ctx->pc = 0x1D2348u;
label_1d2348:
    // 0x1d2348: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x1d2348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d234c:
    // 0x1d234c: 0xc7ad00f8  lwc1        $f13, 0xF8($sp)
    ctx->pc = 0x1d234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d2350:
    // 0x1d2350: 0xc047c76  jal         func_11F1D8
label_1d2354:
    if (ctx->pc == 0x1D2354u) {
        ctx->pc = 0x1D2354u;
            // 0x1d2354: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1D2358u;
        goto label_1d2358;
    }
    ctx->pc = 0x1D2350u;
    SET_GPR_U32(ctx, 31, 0x1D2358u);
    ctx->pc = 0x1D2354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2350u;
            // 0x1d2354: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2358u; }
        if (ctx->pc != 0x1D2358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2358u; }
        if (ctx->pc != 0x1D2358u) { return; }
    }
    ctx->pc = 0x1D2358u;
label_1d2358:
    // 0x1d2358: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x1d2358u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1d235c:
    // 0x1d235c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d235cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1d2360:
    // 0x1d2360: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d2360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d2364:
    // 0x1d2364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2368:
    // 0x1d2368: 0x0  nop
    ctx->pc = 0x1d2368u;
    // NOP
label_1d236c:
    // 0x1d236c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1d236cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2370:
    // 0x1d2370: 0x0  nop
    ctx->pc = 0x1d2370u;
    // NOP
label_1d2374:
    // 0x1d2374: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1d2378:
    if (ctx->pc == 0x1D2378u) {
        ctx->pc = 0x1D2378u;
            // 0x1d2378: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x1D237Cu;
        goto label_1d237c;
    }
    ctx->pc = 0x1D2374u;
    {
        const bool branch_taken_0x1d2374 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D2378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2374u;
            // 0x1d2378: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2374) {
            ctx->pc = 0x1D2394u;
            goto label_1d2394;
        }
    }
    ctx->pc = 0x1D237Cu;
label_1d237c:
    // 0x1d237c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d237cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d2380:
    // 0x1d2380: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d2380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d2384:
    // 0x1d2384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2388:
    // 0x1d2388: 0x0  nop
    ctx->pc = 0x1d2388u;
    // NOP
label_1d238c:
    // 0x1d238c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1d238cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1d2390:
    // 0x1d2390: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d2390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1d2394:
    // 0x1d2394: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d2394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d2398:
    // 0x1d2398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d239c:
    // 0x1d239c: 0x0  nop
    ctx->pc = 0x1d239cu;
    // NOP
label_1d23a0:
    // 0x1d23a0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1d23a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d23a4:
    // 0x1d23a4: 0x0  nop
    ctx->pc = 0x1d23a4u;
    // NOP
label_1d23a8:
    // 0x1d23a8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1d23ac:
    if (ctx->pc == 0x1D23ACu) {
        ctx->pc = 0x1D23ACu;
            // 0x1d23ac: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->pc = 0x1D23B0u;
        goto label_1d23b0;
    }
    ctx->pc = 0x1D23A8u;
    {
        const bool branch_taken_0x1d23a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D23ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D23A8u;
            // 0x1d23ac: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23a8) {
            ctx->pc = 0x1D23C0u;
            goto label_1d23c0;
        }
    }
    ctx->pc = 0x1D23B0u;
label_1d23b0:
    // 0x1d23b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d23b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d23b4:
    // 0x1d23b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d23b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d23b8:
    // 0x1d23b8: 0x0  nop
    ctx->pc = 0x1d23b8u;
    // NOP
label_1d23bc:
    // 0x1d23bc: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1d23bcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1d23c0:
    // 0x1d23c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d23c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d23c4:
    // 0x1d23c4: 0x0  nop
    ctx->pc = 0x1d23c4u;
    // NOP
label_1d23c8:
    // 0x1d23c8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1d23c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d23cc:
    // 0x1d23cc: 0x0  nop
    ctx->pc = 0x1d23ccu;
    // NOP
label_1d23d0:
    // 0x1d23d0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1d23d4:
    if (ctx->pc == 0x1D23D4u) {
        ctx->pc = 0x1D23D4u;
            // 0x1d23d4: 0x3c02bdc9  lui         $v0, 0xBDC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48585 << 16));
        ctx->pc = 0x1D23D8u;
        goto label_1d23d8;
    }
    ctx->pc = 0x1D23D0u;
    {
        const bool branch_taken_0x1d23d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D23D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D23D0u;
            // 0x1d23d4: 0x3c02bdc9  lui         $v0, 0xBDC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23d0) {
            ctx->pc = 0x1D23ECu;
            goto label_1d23ec;
        }
    }
    ctx->pc = 0x1D23D8u;
label_1d23d8:
    // 0x1d23d8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d23d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d23dc:
    // 0x1d23dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d23dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d23e0:
    // 0x1d23e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d23e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d23e4:
    // 0x1d23e4: 0xc0bb1c4  jal         func_2EC710
label_1d23e8:
    if (ctx->pc == 0x1D23E8u) {
        ctx->pc = 0x1D23E8u;
            // 0x1d23e8: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->pc = 0x1D23ECu;
        goto label_1d23ec;
    }
    ctx->pc = 0x1D23E4u;
    SET_GPR_U32(ctx, 31, 0x1D23ECu);
    ctx->pc = 0x1D23E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D23E4u;
            // 0x1d23e8: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC710u;
    if (runtime->hasFunction(0x2EC710u)) {
        auto targetFn = runtime->lookupFunction(0x2EC710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D23ECu; }
        if (ctx->pc != 0x1D23ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Rotate__14CCameraControlFf_0x2ec710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D23ECu; }
        if (ctx->pc != 0x1D23ECu) { return; }
    }
    ctx->pc = 0x1D23ECu;
label_1d23ec:
    // 0x1d23ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d23ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d23f0:
    // 0x1d23f0: 0x0  nop
    ctx->pc = 0x1d23f0u;
    // NOP
label_1d23f4:
    // 0x1d23f4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1d23f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d23f8:
    // 0x1d23f8: 0x0  nop
    ctx->pc = 0x1d23f8u;
    // NOP
label_1d23fc:
    // 0x1d23fc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1d2400:
    if (ctx->pc == 0x1D2400u) {
        ctx->pc = 0x1D2400u;
            // 0x1d2400: 0x3c023dc9  lui         $v0, 0x3DC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
        ctx->pc = 0x1D2404u;
        goto label_1d2404;
    }
    ctx->pc = 0x1D23FCu;
    {
        const bool branch_taken_0x1d23fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D2400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D23FCu;
            // 0x1d2400: 0x3c023dc9  lui         $v0, 0x3DC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23fc) {
            ctx->pc = 0x1D2418u;
            goto label_1d2418;
        }
    }
    ctx->pc = 0x1D2404u;
label_1d2404:
    // 0x1d2404: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d2404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d2408:
    // 0x1d2408: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d2408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d240c:
    // 0x1d240c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d240cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d2410:
    // 0x1d2410: 0xc0bb1c4  jal         func_2EC710
label_1d2414:
    if (ctx->pc == 0x1D2414u) {
        ctx->pc = 0x1D2414u;
            // 0x1d2414: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->pc = 0x1D2418u;
        goto label_1d2418;
    }
    ctx->pc = 0x1D2410u;
    SET_GPR_U32(ctx, 31, 0x1D2418u);
    ctx->pc = 0x1D2414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2410u;
            // 0x1d2414: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC710u;
    if (runtime->hasFunction(0x2EC710u)) {
        auto targetFn = runtime->lookupFunction(0x2EC710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2418u; }
        if (ctx->pc != 0x1D2418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Rotate__14CCameraControlFf_0x2ec710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2418u; }
        if (ctx->pc != 0x1D2418u) { return; }
    }
    ctx->pc = 0x1D2418u;
label_1d2418:
    // 0x1d2418: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d2418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d241c:
    // 0x1d241c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1d241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1d2420:
    // 0x1d2420: 0x144000fd  bnez        $v0, . + 4 + (0xFD << 2)
label_1d2424:
    if (ctx->pc == 0x1D2424u) {
        ctx->pc = 0x1D2424u;
            // 0x1d2424: 0x3c01003e  lui         $at, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
        ctx->pc = 0x1D2428u;
        goto label_1d2428;
    }
    ctx->pc = 0x1D2420u;
    {
        const bool branch_taken_0x1d2420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2420u;
            // 0x1d2424: 0x3c01003e  lui         $at, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2420) {
            ctx->pc = 0x1D2818u;
            goto label_1d2818;
        }
    }
    ctx->pc = 0x1D2428u;
label_1d2428:
    // 0x1d2428: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x1d2428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934640)));
label_1d242c:
    // 0x1d242c: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
label_1d2430:
    if (ctx->pc == 0x1D2430u) {
        ctx->pc = 0x1D2434u;
        goto label_1d2434;
    }
    ctx->pc = 0x1D242Cu;
    {
        const bool branch_taken_0x1d242c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d242c) {
            ctx->pc = 0x1D2620u;
            goto label_1d2620;
        }
    }
    ctx->pc = 0x1D2434u;
label_1d2434:
    // 0x1d2434: 0xc0bb00c  jal         func_2EC030
label_1d2438:
    if (ctx->pc == 0x1D2438u) {
        ctx->pc = 0x1D2438u;
            // 0x1d2438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D243Cu;
        goto label_1d243c;
    }
    ctx->pc = 0x1D2434u;
    SET_GPR_U32(ctx, 31, 0x1D243Cu);
    ctx->pc = 0x1D2438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2434u;
            // 0x1d2438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC030u;
    if (runtime->hasFunction(0x2EC030u)) {
        auto targetFn = runtime->lookupFunction(0x2EC030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D243Cu; }
        if (ctx->pc != 0x1D243Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ControlOn__14CCameraControlFv_0x2ec030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D243Cu; }
        if (ctx->pc != 0x1D243Cu) { return; }
    }
    ctx->pc = 0x1D243Cu;
label_1d243c:
    // 0x1d243c: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d243cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d2440:
    // 0x1d2440: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d2440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d2444:
    // 0x1d2444: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1d2444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1d2448:
    // 0x1d2448: 0x320f809  jalr        $t9
label_1d244c:
    if (ctx->pc == 0x1D244Cu) {
        ctx->pc = 0x1D244Cu;
            // 0x1d244c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x1D2450u;
        goto label_1d2450;
    }
    ctx->pc = 0x1D2448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D2450u);
        ctx->pc = 0x1D244Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2448u;
            // 0x1d244c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2450u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2450u; }
            if (ctx->pc != 0x1D2450u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2450u;
label_1d2450:
    // 0x1d2450: 0xc04c684  jal         func_131A10
label_1d2454:
    if (ctx->pc == 0x1D2454u) {
        ctx->pc = 0x1D2454u;
            // 0x1d2454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2458u;
        goto label_1d2458;
    }
    ctx->pc = 0x1D2450u;
    SET_GPR_U32(ctx, 31, 0x1D2458u);
    ctx->pc = 0x1D2454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2450u;
            // 0x1d2454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A10u;
    if (runtime->hasFunction(0x131A10u)) {
        auto targetFn = runtime->lookupFunction(0x131A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2458u; }
        if (ctx->pc != 0x1D2458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDistance__15mgCCameraFollowFv_0x131a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2458u; }
        if (ctx->pc != 0x1D2458u) { return; }
    }
    ctx->pc = 0x1D2458u;
label_1d2458:
    // 0x1d2458: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d2458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d245c:
    // 0x1d245c: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x1d245cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
label_1d2460:
    // 0x1d2460: 0xc0a0f58  jal         func_283D60
label_1d2464:
    if (ctx->pc == 0x1D2464u) {
        ctx->pc = 0x1D2464u;
            // 0x1d2464: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1D2468u;
        goto label_1d2468;
    }
    ctx->pc = 0x1D2460u;
    SET_GPR_U32(ctx, 31, 0x1D2468u);
    ctx->pc = 0x1D2464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2460u;
            // 0x1d2464: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2468u; }
        if (ctx->pc != 0x1D2468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2468u; }
        if (ctx->pc != 0x1D2468u) { return; }
    }
    ctx->pc = 0x1D2468u;
label_1d2468:
    // 0x1d2468: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d2468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d246c:
    // 0x1d246c: 0x3401a150  ori         $at, $zero, 0xA150
    ctx->pc = 0x1d246cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41296);
label_1d2470:
    // 0x1d2470: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d2470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2474:
    // 0x1d2474: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d2474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d2478:
    // 0x1d2478: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d2478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d247c:
    // 0x1d247c: 0x320f809  jalr        $t9
label_1d2480:
    if (ctx->pc == 0x1D2480u) {
        ctx->pc = 0x1D2480u;
            // 0x1d2480: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D2484u;
        goto label_1d2484;
    }
    ctx->pc = 0x1D247Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D2484u);
        ctx->pc = 0x1D2480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D247Cu;
            // 0x1d2480: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2484u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2484u; }
            if (ctx->pc != 0x1D2484u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2484u;
label_1d2484:
    // 0x1d2484: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2488:
    // 0x1d2488: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2488u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d248c:
    // 0x1d248c: 0xc435a150  lwc1        $f21, -0x5EB0($at)
    ctx->pc = 0x1d248cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d2490:
    // 0x1d2490: 0xc0a24f0  jal         func_2893C0
label_1d2494:
    if (ctx->pc == 0x1D2494u) {
        ctx->pc = 0x1D2494u;
            // 0x1d2494: 0x4614ab00  add.s       $f12, $f21, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->pc = 0x1D2498u;
        goto label_1d2498;
    }
    ctx->pc = 0x1D2490u;
    SET_GPR_U32(ctx, 31, 0x1D2498u);
    ctx->pc = 0x1D2494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2490u;
            // 0x1d2494: 0x4614ab00  add.s       $f12, $f21, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2498u; }
        if (ctx->pc != 0x1D2498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2498u; }
        if (ctx->pc != 0x1D2498u) { return; }
    }
    ctx->pc = 0x1D2498u;
label_1d2498:
    // 0x1d2498: 0x3c034024  lui         $v1, 0x4024
    ctx->pc = 0x1d2498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16420 << 16));
label_1d249c:
    // 0x1d249c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d249cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d24a0:
    // 0x1d24a0: 0xc0a1fce  jal         func_287F38
label_1d24a4:
    if (ctx->pc == 0x1D24A4u) {
        ctx->pc = 0x1D24A4u;
            // 0x1d24a4: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x1D24A8u;
        goto label_1d24a8;
    }
    ctx->pc = 0x1D24A0u;
    SET_GPR_U32(ctx, 31, 0x1D24A8u);
    ctx->pc = 0x1D24A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D24A0u;
            // 0x1d24a4: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D24A8u; }
        if (ctx->pc != 0x1D24A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D24A8u; }
        if (ctx->pc != 0x1D24A8u) { return; }
    }
    ctx->pc = 0x1D24A8u;
label_1d24a8:
    // 0x1d24a8: 0xc0a21f2  jal         func_2887C8
label_1d24ac:
    if (ctx->pc == 0x1D24ACu) {
        ctx->pc = 0x1D24ACu;
            // 0x1d24ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D24B0u;
        goto label_1d24b0;
    }
    ctx->pc = 0x1D24A8u;
    SET_GPR_U32(ctx, 31, 0x1D24B0u);
    ctx->pc = 0x1D24ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D24A8u;
            // 0x1d24ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D24B0u; }
        if (ctx->pc != 0x1D24B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D24B0u; }
        if (ctx->pc != 0x1D24B0u) { return; }
    }
    ctx->pc = 0x1D24B0u;
label_1d24b0:
    // 0x1d24b0: 0x4614ab01  sub.s       $f12, $f21, $f20
    ctx->pc = 0x1d24b0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_1d24b4:
    // 0x1d24b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d24b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d24b8:
    // 0x1d24b8: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d24b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d24bc:
    // 0x1d24bc: 0xc0a24f0  jal         func_2893C0
label_1d24c0:
    if (ctx->pc == 0x1D24C0u) {
        ctx->pc = 0x1D24C0u;
            // 0x1d24c0: 0xe420a130  swc1        $f0, -0x5ED0($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943024), bits); }
        ctx->pc = 0x1D24C4u;
        goto label_1d24c4;
    }
    ctx->pc = 0x1D24BCu;
    SET_GPR_U32(ctx, 31, 0x1D24C4u);
    ctx->pc = 0x1D24C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D24BCu;
            // 0x1d24c0: 0xe420a130  swc1        $f0, -0x5ED0($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943024), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D24C4u; }
        if (ctx->pc != 0x1D24C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D24C4u; }
        if (ctx->pc != 0x1D24C4u) { return; }
    }
    ctx->pc = 0x1D24C4u;
label_1d24c4:
    // 0x1d24c4: 0x3c034024  lui         $v1, 0x4024
    ctx->pc = 0x1d24c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16420 << 16));
label_1d24c8:
    // 0x1d24c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d24c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d24cc:
    // 0x1d24cc: 0xc0a1fe4  jal         func_287F90
label_1d24d0:
    if (ctx->pc == 0x1D24D0u) {
        ctx->pc = 0x1D24D0u;
            // 0x1d24d0: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x1D24D4u;
        goto label_1d24d4;
    }
    ctx->pc = 0x1D24CCu;
    SET_GPR_U32(ctx, 31, 0x1D24D4u);
    ctx->pc = 0x1D24D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D24CCu;
            // 0x1d24d0: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D24D4u; }
        if (ctx->pc != 0x1D24D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D24D4u; }
        if (ctx->pc != 0x1D24D4u) { return; }
    }
    ctx->pc = 0x1D24D4u;
label_1d24d4:
    // 0x1d24d4: 0xc0a21f2  jal         func_2887C8
label_1d24d8:
    if (ctx->pc == 0x1D24D8u) {
        ctx->pc = 0x1D24D8u;
            // 0x1d24d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D24DCu;
        goto label_1d24dc;
    }
    ctx->pc = 0x1D24D4u;
    SET_GPR_U32(ctx, 31, 0x1D24DCu);
    ctx->pc = 0x1D24D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D24D4u;
            // 0x1d24d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D24DCu; }
        if (ctx->pc != 0x1D24DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D24DCu; }
        if (ctx->pc != 0x1D24DCu) { return; }
    }
    ctx->pc = 0x1D24DCu;
label_1d24dc:
    // 0x1d24dc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d24dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d24e0:
    // 0x1d24e0: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d24e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d24e4:
    // 0x1d24e4: 0xe420a140  swc1        $f0, -0x5EC0($at)
    ctx->pc = 0x1d24e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943040), bits); }
label_1d24e8:
    // 0x1d24e8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d24e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d24ec:
    // 0x1d24ec: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d24ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d24f0:
    // 0x1d24f0: 0xc435a154  lwc1        $f21, -0x5EAC($at)
    ctx->pc = 0x1d24f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d24f4:
    // 0x1d24f4: 0xc0a24f0  jal         func_2893C0
label_1d24f8:
    if (ctx->pc == 0x1D24F8u) {
        ctx->pc = 0x1D24F8u;
            // 0x1d24f8: 0x4614ab00  add.s       $f12, $f21, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->pc = 0x1D24FCu;
        goto label_1d24fc;
    }
    ctx->pc = 0x1D24F4u;
    SET_GPR_U32(ctx, 31, 0x1D24FCu);
    ctx->pc = 0x1D24F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D24F4u;
            // 0x1d24f8: 0x4614ab00  add.s       $f12, $f21, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D24FCu; }
        if (ctx->pc != 0x1D24FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D24FCu; }
        if (ctx->pc != 0x1D24FCu) { return; }
    }
    ctx->pc = 0x1D24FCu;
label_1d24fc:
    // 0x1d24fc: 0x3c034024  lui         $v1, 0x4024
    ctx->pc = 0x1d24fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16420 << 16));
label_1d2500:
    // 0x1d2500: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2504:
    // 0x1d2504: 0xc0a1fce  jal         func_287F38
label_1d2508:
    if (ctx->pc == 0x1D2508u) {
        ctx->pc = 0x1D2508u;
            // 0x1d2508: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x1D250Cu;
        goto label_1d250c;
    }
    ctx->pc = 0x1D2504u;
    SET_GPR_U32(ctx, 31, 0x1D250Cu);
    ctx->pc = 0x1D2508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2504u;
            // 0x1d2508: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D250Cu; }
        if (ctx->pc != 0x1D250Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D250Cu; }
        if (ctx->pc != 0x1D250Cu) { return; }
    }
    ctx->pc = 0x1D250Cu;
label_1d250c:
    // 0x1d250c: 0xc0a21f2  jal         func_2887C8
label_1d2510:
    if (ctx->pc == 0x1D2510u) {
        ctx->pc = 0x1D2510u;
            // 0x1d2510: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2514u;
        goto label_1d2514;
    }
    ctx->pc = 0x1D250Cu;
    SET_GPR_U32(ctx, 31, 0x1D2514u);
    ctx->pc = 0x1D2510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D250Cu;
            // 0x1d2510: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2514u; }
        if (ctx->pc != 0x1D2514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2514u; }
        if (ctx->pc != 0x1D2514u) { return; }
    }
    ctx->pc = 0x1D2514u;
label_1d2514:
    // 0x1d2514: 0x4614ab01  sub.s       $f12, $f21, $f20
    ctx->pc = 0x1d2514u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_1d2518:
    // 0x1d2518: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d251c:
    // 0x1d251c: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d251cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2520:
    // 0x1d2520: 0xc0a24f0  jal         func_2893C0
label_1d2524:
    if (ctx->pc == 0x1D2524u) {
        ctx->pc = 0x1D2524u;
            // 0x1d2524: 0xe420a134  swc1        $f0, -0x5ECC($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943028), bits); }
        ctx->pc = 0x1D2528u;
        goto label_1d2528;
    }
    ctx->pc = 0x1D2520u;
    SET_GPR_U32(ctx, 31, 0x1D2528u);
    ctx->pc = 0x1D2524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2520u;
            // 0x1d2524: 0xe420a134  swc1        $f0, -0x5ECC($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943028), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2528u; }
        if (ctx->pc != 0x1D2528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2528u; }
        if (ctx->pc != 0x1D2528u) { return; }
    }
    ctx->pc = 0x1D2528u;
label_1d2528:
    // 0x1d2528: 0x3c034024  lui         $v1, 0x4024
    ctx->pc = 0x1d2528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16420 << 16));
label_1d252c:
    // 0x1d252c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d252cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2530:
    // 0x1d2530: 0xc0a1fe4  jal         func_287F90
label_1d2534:
    if (ctx->pc == 0x1D2534u) {
        ctx->pc = 0x1D2534u;
            // 0x1d2534: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x1D2538u;
        goto label_1d2538;
    }
    ctx->pc = 0x1D2530u;
    SET_GPR_U32(ctx, 31, 0x1D2538u);
    ctx->pc = 0x1D2534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2530u;
            // 0x1d2534: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2538u; }
        if (ctx->pc != 0x1D2538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2538u; }
        if (ctx->pc != 0x1D2538u) { return; }
    }
    ctx->pc = 0x1D2538u;
label_1d2538:
    // 0x1d2538: 0xc0a21f2  jal         func_2887C8
label_1d253c:
    if (ctx->pc == 0x1D253Cu) {
        ctx->pc = 0x1D253Cu;
            // 0x1d253c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2540u;
        goto label_1d2540;
    }
    ctx->pc = 0x1D2538u;
    SET_GPR_U32(ctx, 31, 0x1D2540u);
    ctx->pc = 0x1D253Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2538u;
            // 0x1d253c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2540u; }
        if (ctx->pc != 0x1D2540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2540u; }
        if (ctx->pc != 0x1D2540u) { return; }
    }
    ctx->pc = 0x1D2540u;
label_1d2540:
    // 0x1d2540: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2544:
    // 0x1d2544: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2544u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2548:
    // 0x1d2548: 0xe420a144  swc1        $f0, -0x5EBC($at)
    ctx->pc = 0x1d2548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943044), bits); }
label_1d254c:
    // 0x1d254c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d254cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2550:
    // 0x1d2550: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2550u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2554:
    // 0x1d2554: 0xc435a158  lwc1        $f21, -0x5EA8($at)
    ctx->pc = 0x1d2554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d2558:
    // 0x1d2558: 0xc0a24f0  jal         func_2893C0
label_1d255c:
    if (ctx->pc == 0x1D255Cu) {
        ctx->pc = 0x1D255Cu;
            // 0x1d255c: 0x4614ab00  add.s       $f12, $f21, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->pc = 0x1D2560u;
        goto label_1d2560;
    }
    ctx->pc = 0x1D2558u;
    SET_GPR_U32(ctx, 31, 0x1D2560u);
    ctx->pc = 0x1D255Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2558u;
            // 0x1d255c: 0x4614ab00  add.s       $f12, $f21, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2560u; }
        if (ctx->pc != 0x1D2560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2560u; }
        if (ctx->pc != 0x1D2560u) { return; }
    }
    ctx->pc = 0x1D2560u;
label_1d2560:
    // 0x1d2560: 0x3c034024  lui         $v1, 0x4024
    ctx->pc = 0x1d2560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16420 << 16));
label_1d2564:
    // 0x1d2564: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2568:
    // 0x1d2568: 0xc0a1fce  jal         func_287F38
label_1d256c:
    if (ctx->pc == 0x1D256Cu) {
        ctx->pc = 0x1D256Cu;
            // 0x1d256c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x1D2570u;
        goto label_1d2570;
    }
    ctx->pc = 0x1D2568u;
    SET_GPR_U32(ctx, 31, 0x1D2570u);
    ctx->pc = 0x1D256Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2568u;
            // 0x1d256c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2570u; }
        if (ctx->pc != 0x1D2570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2570u; }
        if (ctx->pc != 0x1D2570u) { return; }
    }
    ctx->pc = 0x1D2570u;
label_1d2570:
    // 0x1d2570: 0xc0a21f2  jal         func_2887C8
label_1d2574:
    if (ctx->pc == 0x1D2574u) {
        ctx->pc = 0x1D2574u;
            // 0x1d2574: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2578u;
        goto label_1d2578;
    }
    ctx->pc = 0x1D2570u;
    SET_GPR_U32(ctx, 31, 0x1D2578u);
    ctx->pc = 0x1D2574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2570u;
            // 0x1d2574: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2578u; }
        if (ctx->pc != 0x1D2578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2578u; }
        if (ctx->pc != 0x1D2578u) { return; }
    }
    ctx->pc = 0x1D2578u;
label_1d2578:
    // 0x1d2578: 0x4614ab01  sub.s       $f12, $f21, $f20
    ctx->pc = 0x1d2578u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_1d257c:
    // 0x1d257c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d257cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2580:
    // 0x1d2580: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2580u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2584:
    // 0x1d2584: 0xc0a24f0  jal         func_2893C0
label_1d2588:
    if (ctx->pc == 0x1D2588u) {
        ctx->pc = 0x1D2588u;
            // 0x1d2588: 0xe420a138  swc1        $f0, -0x5EC8($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943032), bits); }
        ctx->pc = 0x1D258Cu;
        goto label_1d258c;
    }
    ctx->pc = 0x1D2584u;
    SET_GPR_U32(ctx, 31, 0x1D258Cu);
    ctx->pc = 0x1D2588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2584u;
            // 0x1d2588: 0xe420a138  swc1        $f0, -0x5EC8($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943032), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D258Cu; }
        if (ctx->pc != 0x1D258Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D258Cu; }
        if (ctx->pc != 0x1D258Cu) { return; }
    }
    ctx->pc = 0x1D258Cu;
label_1d258c:
    // 0x1d258c: 0x3c034024  lui         $v1, 0x4024
    ctx->pc = 0x1d258cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16420 << 16));
label_1d2590:
    // 0x1d2590: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d2590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2594:
    // 0x1d2594: 0xc0a1fe4  jal         func_287F90
label_1d2598:
    if (ctx->pc == 0x1D2598u) {
        ctx->pc = 0x1D2598u;
            // 0x1d2598: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x1D259Cu;
        goto label_1d259c;
    }
    ctx->pc = 0x1D2594u;
    SET_GPR_U32(ctx, 31, 0x1D259Cu);
    ctx->pc = 0x1D2598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2594u;
            // 0x1d2598: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D259Cu; }
        if (ctx->pc != 0x1D259Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D259Cu; }
        if (ctx->pc != 0x1D259Cu) { return; }
    }
    ctx->pc = 0x1D259Cu;
label_1d259c:
    // 0x1d259c: 0xc0a21f2  jal         func_2887C8
label_1d25a0:
    if (ctx->pc == 0x1D25A0u) {
        ctx->pc = 0x1D25A0u;
            // 0x1d25a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D25A4u;
        goto label_1d25a4;
    }
    ctx->pc = 0x1D259Cu;
    SET_GPR_U32(ctx, 31, 0x1D25A4u);
    ctx->pc = 0x1D25A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D259Cu;
            // 0x1d25a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D25A4u; }
        if (ctx->pc != 0x1D25A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D25A4u; }
        if (ctx->pc != 0x1D25A4u) { return; }
    }
    ctx->pc = 0x1D25A4u;
label_1d25a4:
    // 0x1d25a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d25a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d25a8:
    // 0x1d25a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d25a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d25ac:
    // 0x1d25ac: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d25acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d25b0:
    // 0x1d25b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d25b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d25b4:
    // 0x1d25b4: 0xe420a148  swc1        $f0, -0x5EB8($at)
    ctx->pc = 0x1d25b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943048), bits); }
label_1d25b8:
    // 0x1d25b8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1d25b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1d25bc:
    // 0x1d25bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d25bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d25c0:
    // 0x1d25c0: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1d25c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1d25c4:
    // 0x1d25c4: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d25c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d25c8:
    // 0x1d25c8: 0xac22a13c  sw          $v0, -0x5EC4($at)
    ctx->pc = 0x1d25c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943036), GPR_U32(ctx, 2));
label_1d25cc:
    // 0x1d25cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d25ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d25d0:
    // 0x1d25d0: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d25d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d25d4:
    // 0x1d25d4: 0xac22a14c  sw          $v0, -0x5EB4($at)
    ctx->pc = 0x1d25d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943052), GPR_U32(ctx, 2));
label_1d25d8:
    // 0x1d25d8: 0x8e390d00  lw          $t9, 0xD00($s1)
    ctx->pc = 0x1d25d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3328)));
label_1d25dc:
    // 0x1d25dc: 0x3401a130  ori         $at, $zero, 0xA130
    ctx->pc = 0x1d25dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41264);
label_1d25e0:
    // 0x1d25e0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1d25e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1d25e4:
    // 0x1d25e4: 0x320f809  jalr        $t9
label_1d25e8:
    if (ctx->pc == 0x1D25E8u) {
        ctx->pc = 0x1D25E8u;
            // 0x1d25e8: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D25ECu;
        goto label_1d25ec;
    }
    ctx->pc = 0x1D25E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D25ECu);
        ctx->pc = 0x1D25E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D25E4u;
            // 0x1d25e8: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D25ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D25ECu; }
            if (ctx->pc != 0x1D25ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1D25ECu;
label_1d25ec:
    // 0x1d25ec: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_1d25f0:
    if (ctx->pc == 0x1D25F0u) {
        ctx->pc = 0x1D25F0u;
            // 0x1d25f0: 0x3c05003d  lui         $a1, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1D25F4u;
        goto label_1d25f4;
    }
    ctx->pc = 0x1D25ECu;
    {
        const bool branch_taken_0x1d25ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D25F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D25ECu;
            // 0x1d25f0: 0x3c05003d  lui         $a1, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25ec) {
            ctx->pc = 0x1D2608u;
            goto label_1d2608;
        }
    }
    ctx->pc = 0x1D25F4u;
label_1d25f4:
    // 0x1d25f4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1d25f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1d25f8:
    // 0x1d25f8: 0xc04a0d2  jal         func_128348
label_1d25fc:
    if (ctx->pc == 0x1D25FCu) {
        ctx->pc = 0x1D25FCu;
            // 0x1d25fc: 0x248472c0  addiu       $a0, $a0, 0x72C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29376));
        ctx->pc = 0x1D2600u;
        goto label_1d2600;
    }
    ctx->pc = 0x1D25F8u;
    SET_GPR_U32(ctx, 31, 0x1D2600u);
    ctx->pc = 0x1D25FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D25F8u;
            // 0x1d25fc: 0x248472c0  addiu       $a0, $a0, 0x72C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2600u; }
        if (ctx->pc != 0x1D2600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2600u; }
        if (ctx->pc != 0x1D2600u) { return; }
    }
    ctx->pc = 0x1D2600u;
label_1d2600:
    // 0x1d2600: 0x10000303  b           . + 4 + (0x303 << 2)
label_1d2604:
    if (ctx->pc == 0x1D2604u) {
        ctx->pc = 0x1D2604u;
            // 0x1d2604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2608u;
        goto label_1d2608;
    }
    ctx->pc = 0x1D2600u;
    {
        const bool branch_taken_0x1d2600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2600u;
            // 0x1d2604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2600) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D2608u;
label_1d2608:
    // 0x1d2608: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1d2608u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d260c:
    // 0x1d260c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d260cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d2610:
    // 0x1d2610: 0x24a57b60  addiu       $a1, $a1, 0x7B60
    ctx->pc = 0x1d2610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31584));
label_1d2614:
    // 0x1d2614: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1d2614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1d2618:
    // 0x1d2618: 0xc0bb07c  jal         func_2EC1F0
label_1d261c:
    if (ctx->pc == 0x1D261Cu) {
        ctx->pc = 0x1D261Cu;
            // 0x1d261c: 0x27a70130  addiu       $a3, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x1D2620u;
        goto label_1d2620;
    }
    ctx->pc = 0x1D2618u;
    SET_GPR_U32(ctx, 31, 0x1D2620u);
    ctx->pc = 0x1D261Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2618u;
            // 0x1d261c: 0x27a70130  addiu       $a3, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC1F0u;
    if (runtime->hasFunction(0x2EC1F0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2620u; }
        if (ctx->pc != 0x1D2620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveCamera__14CCameraControlFP11CPadControlPfP6CCPolyi_0x2ec1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2620u; }
        if (ctx->pc != 0x1D2620u) { return; }
    }
    ctx->pc = 0x1D2620u;
label_1d2620:
    // 0x1d2620: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1d2620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1d2624:
    // 0x1d2624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d2624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2628:
    // 0x1d2628: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x1d2628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934640)));
label_1d262c:
    // 0x1d262c: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
label_1d2630:
    if (ctx->pc == 0x1D2630u) {
        ctx->pc = 0x1D2634u;
        goto label_1d2634;
    }
    ctx->pc = 0x1D262Cu;
    {
        const bool branch_taken_0x1d262c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d262c) {
            ctx->pc = 0x1D2704u;
            goto label_1d2704;
        }
    }
    ctx->pc = 0x1D2634u;
label_1d2634:
    // 0x1d2634: 0xc0bb030  jal         func_2EC0C0
label_1d2638:
    if (ctx->pc == 0x1D2638u) {
        ctx->pc = 0x1D2638u;
            // 0x1d2638: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D263Cu;
        goto label_1d263c;
    }
    ctx->pc = 0x1D2634u;
    SET_GPR_U32(ctx, 31, 0x1D263Cu);
    ctx->pc = 0x1D2638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2634u;
            // 0x1d2638: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC0C0u;
    if (runtime->hasFunction(0x2EC0C0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D263Cu; }
        if (ctx->pc != 0x1D263Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ControlOff__14CCameraControlFv_0x2ec0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D263Cu; }
        if (ctx->pc != 0x1D263Cu) { return; }
    }
    ctx->pc = 0x1D263Cu;
label_1d263c:
    // 0x1d263c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d263cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d2640:
    // 0x1d2640: 0xc052ca0  jal         func_14B280
label_1d2644:
    if (ctx->pc == 0x1D2644u) {
        ctx->pc = 0x1D2644u;
            // 0x1d2644: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D2648u;
        goto label_1d2648;
    }
    ctx->pc = 0x1D2640u;
    SET_GPR_U32(ctx, 31, 0x1D2648u);
    ctx->pc = 0x1D2644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2640u;
            // 0x1d2644: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B280u;
    if (runtime->hasFunction(0x14B280u)) {
        auto targetFn = runtime->lookupFunction(0x14B280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2648u; }
        if (ctx->pc != 0x1D2648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRXf__8CGamePadFv_0x14b280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2648u; }
        if (ctx->pc != 0x1D2648u) { return; }
    }
    ctx->pc = 0x1D2648u;
label_1d2648:
    // 0x1d2648: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x1d2648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
label_1d264c:
    // 0x1d264c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d264cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d2650:
    // 0x1d2650: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1d2650u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1d2654:
    // 0x1d2654: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1d2654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_1d2658:
    // 0x1d2658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d265c:
    // 0x1d265c: 0xc04c67c  jal         func_1319F0
label_1d2660:
    if (ctx->pc == 0x1D2660u) {
        ctx->pc = 0x1D2660u;
            // 0x1d2660: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1D2664u;
        goto label_1d2664;
    }
    ctx->pc = 0x1D265Cu;
    SET_GPR_U32(ctx, 31, 0x1D2664u);
    ctx->pc = 0x1D2660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D265Cu;
            // 0x1d2660: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319F0u;
    if (runtime->hasFunction(0x1319F0u)) {
        auto targetFn = runtime->lookupFunction(0x1319F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2664u; }
        if (ctx->pc != 0x1D2664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAngle__15mgCCameraFollowFf_0x1319f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2664u; }
        if (ctx->pc != 0x1D2664u) { return; }
    }
    ctx->pc = 0x1D2664u;
label_1d2664:
    // 0x1d2664: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d2664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d2668:
    // 0x1d2668: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1d2668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1d266c:
    // 0x1d266c: 0xc052cf0  jal         func_14B3C0
label_1d2670:
    if (ctx->pc == 0x1D2670u) {
        ctx->pc = 0x1D2670u;
            // 0x1d2670: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D2674u;
        goto label_1d2674;
    }
    ctx->pc = 0x1D266Cu;
    SET_GPR_U32(ctx, 31, 0x1D2674u);
    ctx->pc = 0x1D2670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D266Cu;
            // 0x1d2670: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2674u; }
        if (ctx->pc != 0x1D2674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2674u; }
        if (ctx->pc != 0x1D2674u) { return; }
    }
    ctx->pc = 0x1D2674u;
label_1d2674:
    // 0x1d2674: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1d2678:
    if (ctx->pc == 0x1D2678u) {
        ctx->pc = 0x1D2678u;
            // 0x1d2678: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1D267Cu;
        goto label_1d267c;
    }
    ctx->pc = 0x1D2674u;
    {
        const bool branch_taken_0x1d2674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2674u;
            // 0x1d2678: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2674) {
            ctx->pc = 0x1D26A4u;
            goto label_1d26a4;
        }
    }
    ctx->pc = 0x1D267Cu;
label_1d267c:
    // 0x1d267c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d267cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d2680:
    // 0x1d2680: 0xc052cb0  jal         func_14B2C0
label_1d2684:
    if (ctx->pc == 0x1D2684u) {
        ctx->pc = 0x1D2684u;
            // 0x1d2684: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D2688u;
        goto label_1d2688;
    }
    ctx->pc = 0x1D2680u;
    SET_GPR_U32(ctx, 31, 0x1D2688u);
    ctx->pc = 0x1D2684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2680u;
            // 0x1d2684: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2688u; }
        if (ctx->pc != 0x1D2688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRYf__8CGamePadFv_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2688u; }
        if (ctx->pc != 0x1D2688u) { return; }
    }
    ctx->pc = 0x1D2688u;
label_1d2688:
    // 0x1d2688: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1d2688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1d268c:
    // 0x1d268c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d268cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d2690:
    // 0x1d2690: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d2690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2694:
    // 0x1d2694: 0xc04c688  jal         func_131A20
label_1d2698:
    if (ctx->pc == 0x1D2698u) {
        ctx->pc = 0x1D2698u;
            // 0x1d2698: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1D269Cu;
        goto label_1d269c;
    }
    ctx->pc = 0x1D2694u;
    SET_GPR_U32(ctx, 31, 0x1D269Cu);
    ctx->pc = 0x1D2698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2694u;
            // 0x1d2698: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A20u;
    if (runtime->hasFunction(0x131A20u)) {
        auto targetFn = runtime->lookupFunction(0x131A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D269Cu; }
        if (ctx->pc != 0x1D269Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddDistance__15mgCCameraFollowFf_0x131a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D269Cu; }
        if (ctx->pc != 0x1D269Cu) { return; }
    }
    ctx->pc = 0x1D269Cu;
label_1d269c:
    // 0x1d269c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d26a0:
    if (ctx->pc == 0x1D26A0u) {
        ctx->pc = 0x1D26A4u;
        goto label_1d26a4;
    }
    ctx->pc = 0x1D269Cu;
    {
        const bool branch_taken_0x1d269c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d269c) {
            ctx->pc = 0x1D26C4u;
            goto label_1d26c4;
        }
    }
    ctx->pc = 0x1D26A4u;
label_1d26a4:
    // 0x1d26a4: 0xc052cb0  jal         func_14B2C0
label_1d26a8:
    if (ctx->pc == 0x1D26A8u) {
        ctx->pc = 0x1D26A8u;
            // 0x1d26a8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D26ACu;
        goto label_1d26ac;
    }
    ctx->pc = 0x1D26A4u;
    SET_GPR_U32(ctx, 31, 0x1D26ACu);
    ctx->pc = 0x1D26A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D26A4u;
            // 0x1d26a8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D26ACu; }
        if (ctx->pc != 0x1D26ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRYf__8CGamePadFv_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D26ACu; }
        if (ctx->pc != 0x1D26ACu) { return; }
    }
    ctx->pc = 0x1D26ACu;
label_1d26ac:
    // 0x1d26ac: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1d26acu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1d26b0:
    // 0x1d26b0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1d26b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1d26b4:
    // 0x1d26b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d26b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d26b8:
    // 0x1d26b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d26b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d26bc:
    // 0x1d26bc: 0xc04c694  jal         func_131A50
label_1d26c0:
    if (ctx->pc == 0x1D26C0u) {
        ctx->pc = 0x1D26C0u;
            // 0x1d26c0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1D26C4u;
        goto label_1d26c4;
    }
    ctx->pc = 0x1D26BCu;
    SET_GPR_U32(ctx, 31, 0x1D26C4u);
    ctx->pc = 0x1D26C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D26BCu;
            // 0x1d26c0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A50u;
    if (runtime->hasFunction(0x131A50u)) {
        auto targetFn = runtime->lookupFunction(0x131A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D26C4u; }
        if (ctx->pc != 0x1D26C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHeight__15mgCCameraFollowFf_0x131a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D26C4u; }
        if (ctx->pc != 0x1D26C4u) { return; }
    }
    ctx->pc = 0x1D26C4u;
label_1d26c4:
    // 0x1d26c4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d26c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d26c8:
    // 0x1d26c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d26c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d26cc:
    // 0x1d26cc: 0xc052cf0  jal         func_14B3C0
label_1d26d0:
    if (ctx->pc == 0x1D26D0u) {
        ctx->pc = 0x1D26D0u;
            // 0x1d26d0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D26D4u;
        goto label_1d26d4;
    }
    ctx->pc = 0x1D26CCu;
    SET_GPR_U32(ctx, 31, 0x1D26D4u);
    ctx->pc = 0x1D26D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D26CCu;
            // 0x1d26d0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D26D4u; }
        if (ctx->pc != 0x1D26D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D26D4u; }
        if (ctx->pc != 0x1D26D4u) { return; }
    }
    ctx->pc = 0x1D26D4u;
label_1d26d4:
    // 0x1d26d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1d26d8:
    if (ctx->pc == 0x1D26D8u) {
        ctx->pc = 0x1D26DCu;
        goto label_1d26dc;
    }
    ctx->pc = 0x1D26D4u;
    {
        const bool branch_taken_0x1d26d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d26d4) {
            ctx->pc = 0x1D2704u;
            goto label_1d2704;
        }
    }
    ctx->pc = 0x1D26DCu;
label_1d26dc:
    // 0x1d26dc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d26dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d26e0:
    // 0x1d26e0: 0xc052cb0  jal         func_14B2C0
label_1d26e4:
    if (ctx->pc == 0x1D26E4u) {
        ctx->pc = 0x1D26E4u;
            // 0x1d26e4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D26E8u;
        goto label_1d26e8;
    }
    ctx->pc = 0x1D26E0u;
    SET_GPR_U32(ctx, 31, 0x1D26E8u);
    ctx->pc = 0x1D26E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D26E0u;
            // 0x1d26e4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D26E8u; }
        if (ctx->pc != 0x1D26E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRYf__8CGamePadFv_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D26E8u; }
        if (ctx->pc != 0x1D26E8u) { return; }
    }
    ctx->pc = 0x1D26E8u;
label_1d26e8:
    // 0x1d26e8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1d26e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1d26ec:
    // 0x1d26ec: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x1d26ecu;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
label_1d26f0:
    // 0x1d26f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d26f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d26f4:
    // 0x1d26f4: 0xc7808e20  lwc1        $f0, -0x71E0($gp)
    ctx->pc = 0x1d26f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d26f8:
    // 0x1d26f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1d26f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1d26fc:
    // 0x1d26fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d26fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d2700:
    // 0x1d2700: 0xe7808e20  swc1        $f0, -0x71E0($gp)
    ctx->pc = 0x1d2700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938144), bits); }
label_1d2704:
    // 0x1d2704: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d2704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d2708:
    // 0x1d2708: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x1d2708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1d270c:
    // 0x1d270c: 0xc0bb538  jal         func_2ED4E0
label_1d2710:
    if (ctx->pc == 0x1D2710u) {
        ctx->pc = 0x1D2710u;
            // 0x1d2710: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->pc = 0x1D2714u;
        goto label_1d2714;
    }
    ctx->pc = 0x1D270Cu;
    SET_GPR_U32(ctx, 31, 0x1D2714u);
    ctx->pc = 0x1D2710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D270Cu;
            // 0x1d2710: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2714u; }
        if (ctx->pc != 0x1D2714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2714u; }
        if (ctx->pc != 0x1D2714u) { return; }
    }
    ctx->pc = 0x1D2714u;
label_1d2714:
    // 0x1d2714: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_1d2718:
    if (ctx->pc == 0x1D2718u) {
        ctx->pc = 0x1D271Cu;
        goto label_1d271c;
    }
    ctx->pc = 0x1D2714u;
    {
        const bool branch_taken_0x1d2714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2714) {
            ctx->pc = 0x1D2818u;
            goto label_1d2818;
        }
    }
    ctx->pc = 0x1D271Cu;
label_1d271c:
    // 0x1d271c: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d271cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d2720:
    // 0x1d2720: 0x3401a160  ori         $at, $zero, 0xA160
    ctx->pc = 0x1d2720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41312);
label_1d2724:
    // 0x1d2724: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d2724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d2728:
    // 0x1d2728: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1d2728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1d272c:
    // 0x1d272c: 0x320f809  jalr        $t9
label_1d2730:
    if (ctx->pc == 0x1D2730u) {
        ctx->pc = 0x1D2730u;
            // 0x1d2730: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D2734u;
        goto label_1d2734;
    }
    ctx->pc = 0x1D272Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D2734u);
        ctx->pc = 0x1D2730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D272Cu;
            // 0x1d2730: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2734u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2734u; }
            if (ctx->pc != 0x1D2734u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2734u;
label_1d2734:
    // 0x1d2734: 0x8f828dd8  lw          $v0, -0x7228($gp)
    ctx->pc = 0x1d2734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d2738:
    // 0x1d2738: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d273c:
    // 0x1d273c: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d273cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2740:
    // 0x1d2740: 0x84420772  lh          $v0, 0x772($v0)
    ctx->pc = 0x1d2740u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1906)));
label_1d2744:
    // 0x1d2744: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1d2748:
    if (ctx->pc == 0x1D2748u) {
        ctx->pc = 0x1D2748u;
            // 0x1d2748: 0xc420a164  lwc1        $f0, -0x5E9C($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1D274Cu;
        goto label_1d274c;
    }
    ctx->pc = 0x1D2744u;
    {
        const bool branch_taken_0x1d2744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2744u;
            // 0x1d2748: 0xc420a164  lwc1        $f0, -0x5E9C($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2744) {
            ctx->pc = 0x1D27D4u;
            goto label_1d27d4;
        }
    }
    ctx->pc = 0x1D274Cu;
label_1d274c:
    // 0x1d274c: 0x86020770  lh          $v0, 0x770($s0)
    ctx->pc = 0x1d274cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1904)));
label_1d2750:
    // 0x1d2750: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
label_1d2754:
    if (ctx->pc == 0x1D2754u) {
        ctx->pc = 0x1D2758u;
        goto label_1d2758;
    }
    ctx->pc = 0x1D2750u;
    {
        const bool branch_taken_0x1d2750 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d2750) {
            ctx->pc = 0x1D27D4u;
            goto label_1d27d4;
        }
    }
    ctx->pc = 0x1D2758u;
label_1d2758:
    // 0x1d2758: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1d2758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1d275c:
    // 0x1d275c: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1d275cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_1d2760:
    // 0x1d2760: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d2760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d2764:
    // 0x1d2764: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d2764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d2768:
    // 0x1d2768: 0x8c440484  lw          $a0, 0x484($v0)
    ctx->pc = 0x1d2768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
label_1d276c:
    // 0x1d276c: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_1d2770:
    if (ctx->pc == 0x1D2770u) {
        ctx->pc = 0x1D2770u;
            // 0x1d2770: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->pc = 0x1D2774u;
        goto label_1d2774;
    }
    ctx->pc = 0x1D276Cu;
    {
        const bool branch_taken_0x1d276c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D276Cu;
            // 0x1d2770: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d276c) {
            ctx->pc = 0x1D27D8u;
            goto label_1d27d8;
        }
    }
    ctx->pc = 0x1D2774u;
label_1d2774:
    // 0x1d2774: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d2774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d2778:
    // 0x1d2778: 0x3401a180  ori         $at, $zero, 0xA180
    ctx->pc = 0x1d2778u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41344);
label_1d277c:
    // 0x1d277c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d277cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d2780:
    // 0x1d2780: 0x320f809  jalr        $t9
label_1d2784:
    if (ctx->pc == 0x1D2784u) {
        ctx->pc = 0x1D2784u;
            // 0x1d2784: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D2788u;
        goto label_1d2788;
    }
    ctx->pc = 0x1D2780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D2788u);
        ctx->pc = 0x1D2784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2780u;
            // 0x1d2784: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2788u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2788u; }
            if (ctx->pc != 0x1D2788u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2788u;
label_1d2788:
    // 0x1d2788: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d2788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d278c:
    // 0x1d278c: 0x3401a170  ori         $at, $zero, 0xA170
    ctx->pc = 0x1d278cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41328);
label_1d2790:
    // 0x1d2790: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d2790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d2794:
    // 0x1d2794: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d2794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d2798:
    // 0x1d2798: 0x320f809  jalr        $t9
label_1d279c:
    if (ctx->pc == 0x1D279Cu) {
        ctx->pc = 0x1D279Cu;
            // 0x1d279c: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D27A0u;
        goto label_1d27a0;
    }
    ctx->pc = 0x1D2798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D27A0u);
        ctx->pc = 0x1D279Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2798u;
            // 0x1d279c: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D27A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D27A0u; }
            if (ctx->pc != 0x1D27A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D27A0u;
label_1d27a0:
    // 0x1d27a0: 0x3401a180  ori         $at, $zero, 0xA180
    ctx->pc = 0x1d27a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41344);
label_1d27a4:
    // 0x1d27a4: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x1d27a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d27a8:
    // 0x1d27a8: 0x3401a170  ori         $at, $zero, 0xA170
    ctx->pc = 0x1d27a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41328);
label_1d27ac:
    // 0x1d27ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d27acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d27b0:
    // 0x1d27b0: 0xc041c3e  jal         func_1070F8
label_1d27b4:
    if (ctx->pc == 0x1D27B4u) {
        ctx->pc = 0x1D27B4u;
            // 0x1d27b4: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D27B8u;
        goto label_1d27b8;
    }
    ctx->pc = 0x1D27B0u;
    SET_GPR_U32(ctx, 31, 0x1D27B8u);
    ctx->pc = 0x1D27B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D27B0u;
            // 0x1d27b4: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D27B8u; }
        if (ctx->pc != 0x1D27B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D27B8u; }
        if (ctx->pc != 0x1D27B8u) { return; }
    }
    ctx->pc = 0x1D27B8u;
label_1d27b8:
    // 0x1d27b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d27b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d27bc:
    // 0x1d27bc: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d27bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d27c0:
    // 0x1d27c0: 0xc42ca180  lwc1        $f12, -0x5E80($at)
    ctx->pc = 0x1d27c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d27c4:
    // 0x1d27c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d27c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d27c8:
    // 0x1d27c8: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d27c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d27cc:
    // 0x1d27cc: 0xc047c76  jal         func_11F1D8
label_1d27d0:
    if (ctx->pc == 0x1D27D0u) {
        ctx->pc = 0x1D27D0u;
            // 0x1d27d0: 0xc42da188  lwc1        $f13, -0x5E78($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x1D27D4u;
        goto label_1d27d4;
    }
    ctx->pc = 0x1D27CCu;
    SET_GPR_U32(ctx, 31, 0x1D27D4u);
    ctx->pc = 0x1D27D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D27CCu;
            // 0x1d27d0: 0xc42da188  lwc1        $f13, -0x5E78($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D27D4u; }
        if (ctx->pc != 0x1D27D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D27D4u; }
        if (ctx->pc != 0x1D27D4u) { return; }
    }
    ctx->pc = 0x1D27D4u;
label_1d27d4:
    // 0x1d27d4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d27d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1d27d8:
    // 0x1d27d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d27d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d27dc:
    // 0x1d27dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d27dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d27e0:
    // 0x1d27e0: 0x0  nop
    ctx->pc = 0x1d27e0u;
    // NOP
label_1d27e4:
    // 0x1d27e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d27e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d27e8:
    // 0x1d27e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d27e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d27ec:
    // 0x1d27ec: 0x0  nop
    ctx->pc = 0x1d27ecu;
    // NOP
label_1d27f0:
    // 0x1d27f0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1d27f4:
    if (ctx->pc == 0x1D27F4u) {
        ctx->pc = 0x1D27F4u;
            // 0x1d27f4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1D27F8u;
        goto label_1d27f8;
    }
    ctx->pc = 0x1D27F0u;
    {
        const bool branch_taken_0x1d27f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D27F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D27F0u;
            // 0x1d27f4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27f0) {
            ctx->pc = 0x1D2810u;
            goto label_1d2810;
        }
    }
    ctx->pc = 0x1D27F8u;
label_1d27f8:
    // 0x1d27f8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d27f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d27fc:
    // 0x1d27fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d27fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d2800:
    // 0x1d2800: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d2800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2804:
    // 0x1d2804: 0x0  nop
    ctx->pc = 0x1d2804u;
    // NOP
label_1d2808:
    // 0x1d2808: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d2808u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d280c:
    // 0x1d280c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1d280cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1d2810:
    // 0x1d2810: 0xc0bb224  jal         func_2EC890
label_1d2814:
    if (ctx->pc == 0x1D2814u) {
        ctx->pc = 0x1D2814u;
            // 0x1d2814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2818u;
        goto label_1d2818;
    }
    ctx->pc = 0x1D2810u;
    SET_GPR_U32(ctx, 31, 0x1D2818u);
    ctx->pc = 0x1D2814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2810u;
            // 0x1d2814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC890u;
    if (runtime->hasFunction(0x2EC890u)) {
        auto targetFn = runtime->lookupFunction(0x2EC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2818u; }
        if (ctx->pc != 0x1D2818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotBack__14CCameraControlFf_0x2ec890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2818u; }
        if (ctx->pc != 0x1D2818u) { return; }
    }
    ctx->pc = 0x1D2818u;
label_1d2818:
    // 0x1d2818: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1d2818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d281c:
    // 0x1d281c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d281cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2820:
    // 0x1d2820: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1d2820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1d2824:
    // 0x1d2824: 0x146200a3  bne         $v1, $v0, . + 4 + (0xA3 << 2)
label_1d2828:
    if (ctx->pc == 0x1D2828u) {
        ctx->pc = 0x1D2828u;
            // 0x1d2828: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1D282Cu;
        goto label_1d282c;
    }
    ctx->pc = 0x1D2824u;
    {
        const bool branch_taken_0x1d2824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D2828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2824u;
            // 0x1d2828: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2824) {
            ctx->pc = 0x1D2AB4u;
            goto label_1d2ab4;
        }
    }
    ctx->pc = 0x1D282Cu;
label_1d282c:
    // 0x1d282c: 0xc04c66c  jal         func_1319B0
label_1d2830:
    if (ctx->pc == 0x1D2830u) {
        ctx->pc = 0x1D2830u;
            // 0x1d2830: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->pc = 0x1D2834u;
        goto label_1d2834;
    }
    ctx->pc = 0x1D282Cu;
    SET_GPR_U32(ctx, 31, 0x1D2834u);
    ctx->pc = 0x1D2830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D282Cu;
            // 0x1d2830: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319B0u;
    if (runtime->hasFunction(0x1319B0u)) {
        auto targetFn = runtime->lookupFunction(0x1319B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2834u; }
        if (ctx->pc != 0x1D2834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOff__15mgCCameraFollowFv_0x1319b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2834u; }
        if (ctx->pc != 0x1D2834u) { return; }
    }
    ctx->pc = 0x1D2834u;
label_1d2834:
    // 0x1d2834: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d2834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d2838:
    // 0x1d2838: 0xc0a0ed8  jal         func_283B60
label_1d283c:
    if (ctx->pc == 0x1D283Cu) {
        ctx->pc = 0x1D283Cu;
            // 0x1d283c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x1D2840u;
        goto label_1d2840;
    }
    ctx->pc = 0x1D2838u;
    SET_GPR_U32(ctx, 31, 0x1D2840u);
    ctx->pc = 0x1D283Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2838u;
            // 0x1d283c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2840u; }
        if (ctx->pc != 0x1D2840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2840u; }
        if (ctx->pc != 0x1D2840u) { return; }
    }
    ctx->pc = 0x1D2840u;
label_1d2840:
    // 0x1d2840: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d2840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d2844:
    // 0x1d2844: 0x3401a190  ori         $at, $zero, 0xA190
    ctx->pc = 0x1d2844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41360);
label_1d2848:
    // 0x1d2848: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d2848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d284c:
    // 0x1d284c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d284cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d2850:
    // 0x1d2850: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d2850u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d2854:
    // 0x1d2854: 0x320f809  jalr        $t9
label_1d2858:
    if (ctx->pc == 0x1D2858u) {
        ctx->pc = 0x1D2858u;
            // 0x1d2858: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D285Cu;
        goto label_1d285c;
    }
    ctx->pc = 0x1D2854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D285Cu);
        ctx->pc = 0x1D2858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2854u;
            // 0x1d2858: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D285Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D285Cu; }
            if (ctx->pc != 0x1D285Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D285Cu;
label_1d285c:
    // 0x1d285c: 0x8f838dd8  lw          $v1, -0x7228($gp)
    ctx->pc = 0x1d285cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d2860:
    // 0x1d2860: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2864:
    // 0x1d2864: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d2864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d2868:
    // 0x1d2868: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2868u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d286c:
    // 0x1d286c: 0xc421a194  lwc1        $f1, -0x5E6C($at)
    ctx->pc = 0x1d286cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2870:
    // 0x1d2870: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2874:
    // 0x1d2874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2878:
    // 0x1d2878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d287c:
    // 0x1d287c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d287cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2880:
    // 0x1d2880: 0xc4620110  lwc1        $f2, 0x110($v1)
    ctx->pc = 0x1d2880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d2884:
    // 0x1d2884: 0x3401a1a0  ori         $at, $zero, 0xA1A0
    ctx->pc = 0x1d2884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41376);
label_1d2888:
    // 0x1d2888: 0x3a13821  addu        $a3, $sp, $at
    ctx->pc = 0x1d2888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d288c:
    // 0x1d288c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d288cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2890:
    // 0x1d2890: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2890u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2894:
    // 0x1d2894: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d2894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1d2898:
    // 0x1d2898: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d2898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d289c:
    // 0x1d289c: 0xc05d420  jal         func_175080
label_1d28a0:
    if (ctx->pc == 0x1D28A0u) {
        ctx->pc = 0x1D28A0u;
            // 0x1d28a0: 0xe420a194  swc1        $f0, -0x5E6C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943124), bits); }
        ctx->pc = 0x1D28A4u;
        goto label_1d28a4;
    }
    ctx->pc = 0x1D289Cu;
    SET_GPR_U32(ctx, 31, 0x1D28A4u);
    ctx->pc = 0x1D28A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D289Cu;
            // 0x1d28a0: 0xe420a194  swc1        $f0, -0x5E6C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943124), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28A4u; }
        if (ctx->pc != 0x1D28A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28A4u; }
        if (ctx->pc != 0x1D28A4u) { return; }
    }
    ctx->pc = 0x1D28A4u;
label_1d28a4:
    // 0x1d28a4: 0x3401a1a4  ori         $at, $zero, 0xA1A4
    ctx->pc = 0x1d28a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41380);
label_1d28a8:
    // 0x1d28a8: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1d28a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_1d28ac:
    // 0x1d28ac: 0x3a11821  addu        $v1, $sp, $at
    ctx->pc = 0x1d28acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d28b0:
    // 0x1d28b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1d28b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d28b4:
    // 0x1d28b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d28b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d28b8:
    // 0x1d28b8: 0x0  nop
    ctx->pc = 0x1d28b8u;
    // NOP
label_1d28bc:
    // 0x1d28bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d28bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d28c0:
    // 0x1d28c0: 0x0  nop
    ctx->pc = 0x1d28c0u;
    // NOP
label_1d28c4:
    // 0x1d28c4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1d28c8:
    if (ctx->pc == 0x1D28C8u) {
        ctx->pc = 0x1D28C8u;
            // 0x1d28c8: 0x3401a1b0  ori         $at, $zero, 0xA1B0 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41392);
        ctx->pc = 0x1D28CCu;
        goto label_1d28cc;
    }
    ctx->pc = 0x1D28C4u;
    {
        const bool branch_taken_0x1d28c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D28C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28C4u;
            // 0x1d28c8: 0x3401a1b0  ori         $at, $zero, 0xA1B0 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41392);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28c4) {
            ctx->pc = 0x1D28D4u;
            goto label_1d28d4;
        }
    }
    ctx->pc = 0x1D28CCu;
label_1d28cc:
    // 0x1d28cc: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1d28ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1d28d0:
    // 0x1d28d0: 0x3401a1b0  ori         $at, $zero, 0xA1B0
    ctx->pc = 0x1d28d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41392);
label_1d28d4:
    // 0x1d28d4: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x1d28d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d28d8:
    // 0x1d28d8: 0x3401a190  ori         $at, $zero, 0xA190
    ctx->pc = 0x1d28d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41360);
label_1d28dc:
    // 0x1d28dc: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x1d28dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d28e0:
    // 0x1d28e0: 0x3401a1a0  ori         $at, $zero, 0xA1A0
    ctx->pc = 0x1d28e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41376);
label_1d28e4:
    // 0x1d28e4: 0xc041c3e  jal         func_1070F8
label_1d28e8:
    if (ctx->pc == 0x1D28E8u) {
        ctx->pc = 0x1D28E8u;
            // 0x1d28e8: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D28ECu;
        goto label_1d28ec;
    }
    ctx->pc = 0x1D28E4u;
    SET_GPR_U32(ctx, 31, 0x1D28ECu);
    ctx->pc = 0x1D28E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28E4u;
            // 0x1d28e8: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28ECu; }
        if (ctx->pc != 0x1D28ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28ECu; }
        if (ctx->pc != 0x1D28ECu) { return; }
    }
    ctx->pc = 0x1D28ECu;
label_1d28ec:
    // 0x1d28ec: 0x3401a1b0  ori         $at, $zero, 0xA1B0
    ctx->pc = 0x1d28ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41392);
label_1d28f0:
    // 0x1d28f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d28f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d28f4:
    // 0x1d28f4: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x1d28f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d28f8:
    // 0x1d28f8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d28f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d28fc:
    // 0x1d28fc: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d28fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2900:
    // 0x1d2900: 0xc04bff4  jal         func_12FFD0
label_1d2904:
    if (ctx->pc == 0x1D2904u) {
        ctx->pc = 0x1D2904u;
            // 0x1d2904: 0xac22a1bc  sw          $v0, -0x5E44($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943164), GPR_U32(ctx, 2));
        ctx->pc = 0x1D2908u;
        goto label_1d2908;
    }
    ctx->pc = 0x1D2900u;
    SET_GPR_U32(ctx, 31, 0x1D2908u);
    ctx->pc = 0x1D2904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2900u;
            // 0x1d2904: 0xac22a1bc  sw          $v0, -0x5E44($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2908u; }
        if (ctx->pc != 0x1D2908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2908u; }
        if (ctx->pc != 0x1D2908u) { return; }
    }
    ctx->pc = 0x1D2908u;
label_1d2908:
    // 0x1d2908: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d290c:
    // 0x1d290c: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d290cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2910:
    // 0x1d2910: 0xc421a1b0  lwc1        $f1, -0x5E50($at)
    ctx->pc = 0x1d2910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2914:
    // 0x1d2914: 0x3401a1b8  ori         $at, $zero, 0xA1B8
    ctx->pc = 0x1d2914u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41400);
label_1d2918:
    // 0x1d2918: 0x3a19821  addu        $s3, $sp, $at
    ctx->pc = 0x1d2918u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d291c:
    // 0x1d291c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1d291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2920:
    // 0x1d2920: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x1d2920u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1d2924:
    // 0x1d2924: 0xc0a24f0  jal         func_2893C0
label_1d2928:
    if (ctx->pc == 0x1D2928u) {
        ctx->pc = 0x1D2928u;
            // 0x1d2928: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->pc = 0x1D292Cu;
        goto label_1d292c;
    }
    ctx->pc = 0x1D2924u;
    SET_GPR_U32(ctx, 31, 0x1D292Cu);
    ctx->pc = 0x1D2928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2924u;
            // 0x1d2928: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D292Cu; }
        if (ctx->pc != 0x1D292Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D292Cu; }
        if (ctx->pc != 0x1D292Cu) { return; }
    }
    ctx->pc = 0x1D292Cu;
label_1d292c:
    // 0x1d292c: 0xc047bf2  jal         func_11EFC8
label_1d2930:
    if (ctx->pc == 0x1D2930u) {
        ctx->pc = 0x1D2930u;
            // 0x1d2930: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2934u;
        goto label_1d2934;
    }
    ctx->pc = 0x1D292Cu;
    SET_GPR_U32(ctx, 31, 0x1D2934u);
    ctx->pc = 0x1D2930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D292Cu;
            // 0x1d2930: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EFC8u;
    if (runtime->hasFunction(0x11EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x11EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2934u; }
        if (ctx->pc != 0x1D2934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrt_0x11efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2934u; }
        if (ctx->pc != 0x1D2934u) { return; }
    }
    ctx->pc = 0x1D2934u;
label_1d2934:
    // 0x1d2934: 0xc0a21f2  jal         func_2887C8
label_1d2938:
    if (ctx->pc == 0x1D2938u) {
        ctx->pc = 0x1D2938u;
            // 0x1d2938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D293Cu;
        goto label_1d293c;
    }
    ctx->pc = 0x1D2934u;
    SET_GPR_U32(ctx, 31, 0x1D293Cu);
    ctx->pc = 0x1D2938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2934u;
            // 0x1d2938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D293Cu; }
        if (ctx->pc != 0x1D293Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D293Cu; }
        if (ctx->pc != 0x1D293Cu) { return; }
    }
    ctx->pc = 0x1D293Cu;
label_1d293c:
    // 0x1d293c: 0x3401a1b4  ori         $at, $zero, 0xA1B4
    ctx->pc = 0x1d293cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41396);
label_1d2940:
    // 0x1d2940: 0x3a18821  addu        $s1, $sp, $at
    ctx->pc = 0x1d2940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2944:
    // 0x1d2944: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x1d2944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d2948:
    // 0x1d2948: 0xc047c76  jal         func_11F1D8
label_1d294c:
    if (ctx->pc == 0x1D294Cu) {
        ctx->pc = 0x1D294Cu;
            // 0x1d294c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1D2950u;
        goto label_1d2950;
    }
    ctx->pc = 0x1D2948u;
    SET_GPR_U32(ctx, 31, 0x1D2950u);
    ctx->pc = 0x1D294Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2948u;
            // 0x1d294c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2950u; }
        if (ctx->pc != 0x1D2950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2950u; }
        if (ctx->pc != 0x1D2950u) { return; }
    }
    ctx->pc = 0x1D2950u;
label_1d2950:
    // 0x1d2950: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d2950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1d2954:
    // 0x1d2954: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2958:
    // 0x1d2958: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1d2958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d295c:
    // 0x1d295c: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d295cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2960:
    // 0x1d2960: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d2960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d2964:
    // 0x1d2964: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d2964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d2968:
    // 0x1d2968: 0xc424a1b0  lwc1        $f4, -0x5E50($at)
    ctx->pc = 0x1d2968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d296c:
    // 0x1d296c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1d296cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_1d2970:
    // 0x1d2970: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d2970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2974:
    // 0x1d2974: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x1d2974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d2978:
    // 0x1d2978: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1d2978u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1d297c:
    // 0x1d297c: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x1d297cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_1d2980:
    // 0x1d2980: 0x0  nop
    ctx->pc = 0x1d2980u;
    // NOP
label_1d2984:
    // 0x1d2984: 0x0  nop
    ctx->pc = 0x1d2984u;
    // NOP
label_1d2988:
    // 0x1d2988: 0xc0a24f0  jal         func_2893C0
label_1d298c:
    if (ctx->pc == 0x1D298Cu) {
        ctx->pc = 0x1D298Cu;
            // 0x1d298c: 0x46031b1c  madd.s      $f12, $f3, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
        ctx->pc = 0x1D2990u;
        goto label_1d2990;
    }
    ctx->pc = 0x1D2988u;
    SET_GPR_U32(ctx, 31, 0x1D2990u);
    ctx->pc = 0x1D298Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2988u;
            // 0x1d298c: 0x46031b1c  madd.s      $f12, $f3, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2990u; }
        if (ctx->pc != 0x1D2990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2990u; }
        if (ctx->pc != 0x1D2990u) { return; }
    }
    ctx->pc = 0x1D2990u;
label_1d2990:
    // 0x1d2990: 0xc047bf2  jal         func_11EFC8
label_1d2994:
    if (ctx->pc == 0x1D2994u) {
        ctx->pc = 0x1D2994u;
            // 0x1d2994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2998u;
        goto label_1d2998;
    }
    ctx->pc = 0x1D2990u;
    SET_GPR_U32(ctx, 31, 0x1D2998u);
    ctx->pc = 0x1D2994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2990u;
            // 0x1d2994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EFC8u;
    if (runtime->hasFunction(0x11EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x11EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2998u; }
        if (ctx->pc != 0x1D2998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrt_0x11efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2998u; }
        if (ctx->pc != 0x1D2998u) { return; }
    }
    ctx->pc = 0x1D2998u;
label_1d2998:
    // 0x1d2998: 0x3c034034  lui         $v1, 0x4034
    ctx->pc = 0x1d2998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16436 << 16));
label_1d299c:
    // 0x1d299c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d299cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d29a0:
    // 0x1d29a0: 0xc04003c  jal         func_1000F0
label_1d29a4:
    if (ctx->pc == 0x1D29A4u) {
        ctx->pc = 0x1D29A4u;
            // 0x1d29a4: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x1D29A8u;
        goto label_1d29a8;
    }
    ctx->pc = 0x1D29A0u;
    SET_GPR_U32(ctx, 31, 0x1D29A8u);
    ctx->pc = 0x1D29A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29A0u;
            // 0x1d29a4: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000F0u;
    if (runtime->hasFunction(0x1000F0u)) {
        auto targetFn = runtime->lookupFunction(0x1000F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D29A8u; }
        if (ctx->pc != 0x1D29A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x1000f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D29A8u; }
        if (ctx->pc != 0x1D29A8u) { return; }
    }
    ctx->pc = 0x1D29A8u;
label_1d29a8:
    // 0x1d29a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d29ac:
    if (ctx->pc == 0x1D29ACu) {
        ctx->pc = 0x1D29ACu;
            // 0x1d29ac: 0x3401a1b0  ori         $at, $zero, 0xA1B0 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41392);
        ctx->pc = 0x1D29B0u;
        goto label_1d29b0;
    }
    ctx->pc = 0x1D29A8u;
    {
        const bool branch_taken_0x1d29a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29A8u;
            // 0x1d29ac: 0x3401a1b0  ori         $at, $zero, 0xA1B0 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41392);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29a8) {
            ctx->pc = 0x1D29CCu;
            goto label_1d29cc;
        }
    }
    ctx->pc = 0x1D29B0u;
label_1d29b0:
    // 0x1d29b0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d29b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d29b4:
    // 0x1d29b4: 0x3401a1b0  ori         $at, $zero, 0xA1B0
    ctx->pc = 0x1d29b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41392);
label_1d29b8:
    // 0x1d29b8: 0x24845830  addiu       $a0, $a0, 0x5830
    ctx->pc = 0x1d29b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
label_1d29bc:
    // 0x1d29bc: 0xc04c574  jal         func_1315D0
label_1d29c0:
    if (ctx->pc == 0x1D29C0u) {
        ctx->pc = 0x1D29C0u;
            // 0x1d29c0: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D29C4u;
        goto label_1d29c4;
    }
    ctx->pc = 0x1D29BCu;
    SET_GPR_U32(ctx, 31, 0x1D29C4u);
    ctx->pc = 0x1D29C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29BCu;
            // 0x1d29c0: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D29C4u; }
        if (ctx->pc != 0x1D29C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D29C4u; }
        if (ctx->pc != 0x1D29C4u) { return; }
    }
    ctx->pc = 0x1D29C4u;
label_1d29c4:
    // 0x1d29c4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1d29c8:
    if (ctx->pc == 0x1D29C8u) {
        ctx->pc = 0x1D29C8u;
            // 0x1d29c8: 0x8f828db0  lw          $v0, -0x7250($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
        ctx->pc = 0x1D29CCu;
        goto label_1d29cc;
    }
    ctx->pc = 0x1D29C4u;
    {
        const bool branch_taken_0x1d29c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29C4u;
            // 0x1d29c8: 0x8f828db0  lw          $v0, -0x7250($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29c4) {
            ctx->pc = 0x1D2A40u;
            goto label_1d2a40;
        }
    }
    ctx->pc = 0x1D29CCu;
label_1d29cc:
    // 0x1d29cc: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x1d29ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d29d0:
    // 0x1d29d0: 0xc041be0  jal         func_106F80
label_1d29d4:
    if (ctx->pc == 0x1D29D4u) {
        ctx->pc = 0x1D29D4u;
            // 0x1d29d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D29D8u;
        goto label_1d29d8;
    }
    ctx->pc = 0x1D29D0u;
    SET_GPR_U32(ctx, 31, 0x1D29D8u);
    ctx->pc = 0x1D29D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29D0u;
            // 0x1d29d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D29D8u; }
        if (ctx->pc != 0x1D29D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D29D8u; }
        if (ctx->pc != 0x1D29D8u) { return; }
    }
    ctx->pc = 0x1D29D8u;
label_1d29d8:
    // 0x1d29d8: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x1d29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
label_1d29dc:
    // 0x1d29dc: 0x3401a1b0  ori         $at, $zero, 0xA1B0
    ctx->pc = 0x1d29dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41392);
label_1d29e0:
    // 0x1d29e0: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x1d29e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d29e4:
    // 0x1d29e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d29e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d29e8:
    // 0x1d29e8: 0xc041e96  jal         func_107A58
label_1d29ec:
    if (ctx->pc == 0x1D29ECu) {
        ctx->pc = 0x1D29ECu;
            // 0x1d29ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D29F0u;
        goto label_1d29f0;
    }
    ctx->pc = 0x1D29E8u;
    SET_GPR_U32(ctx, 31, 0x1D29F0u);
    ctx->pc = 0x1D29ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29E8u;
            // 0x1d29ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D29F0u; }
        if (ctx->pc != 0x1D29F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D29F0u; }
        if (ctx->pc != 0x1D29F0u) { return; }
    }
    ctx->pc = 0x1D29F0u;
label_1d29f0:
    // 0x1d29f0: 0x3401a1b0  ori         $at, $zero, 0xA1B0
    ctx->pc = 0x1d29f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41392);
label_1d29f4:
    // 0x1d29f4: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x1d29f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d29f8:
    // 0x1d29f8: 0x3401a190  ori         $at, $zero, 0xA190
    ctx->pc = 0x1d29f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41360);
label_1d29fc:
    // 0x1d29fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d29fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d2a00:
    // 0x1d2a00: 0xc041c38  jal         func_1070E0
label_1d2a04:
    if (ctx->pc == 0x1D2A04u) {
        ctx->pc = 0x1D2A04u;
            // 0x1d2a04: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D2A08u;
        goto label_1d2a08;
    }
    ctx->pc = 0x1D2A00u;
    SET_GPR_U32(ctx, 31, 0x1D2A08u);
    ctx->pc = 0x1D2A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A00u;
            // 0x1d2a04: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2A08u; }
        if (ctx->pc != 0x1D2A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2A08u; }
        if (ctx->pc != 0x1D2A08u) { return; }
    }
    ctx->pc = 0x1D2A08u;
label_1d2a08:
    // 0x1d2a08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d2a0c:
    // 0x1d2a0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d2a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2a10:
    // 0x1d2a10: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1d2a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d2a14:
    // 0x1d2a14: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1d2a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1d2a18:
    // 0x1d2a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2a1c:
    // 0x1d2a1c: 0x0  nop
    ctx->pc = 0x1d2a1cu;
    // NOP
label_1d2a20:
    // 0x1d2a20: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1d2a20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1d2a24:
    // 0x1d2a24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d2a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d2a28:
    // 0x1d2a28: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1d2a28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2a2c:
    // 0x1d2a2c: 0x0  nop
    ctx->pc = 0x1d2a2cu;
    // NOP
label_1d2a30:
    // 0x1d2a30: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1d2a34:
    if (ctx->pc == 0x1D2A34u) {
        ctx->pc = 0x1D2A38u;
        goto label_1d2a38;
    }
    ctx->pc = 0x1D2A30u;
    {
        const bool branch_taken_0x1d2a30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d2a30) {
            ctx->pc = 0x1D2A3Cu;
            goto label_1d2a3c;
        }
    }
    ctx->pc = 0x1D2A38u;
label_1d2a38:
    // 0x1d2a38: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1d2a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1d2a3c:
    // 0x1d2a3c: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d2a40:
    // 0x1d2a40: 0x84430078  lh          $v1, 0x78($v0)
    ctx->pc = 0x1d2a40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1d2a44:
    // 0x1d2a44: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
label_1d2a48:
    if (ctx->pc == 0x1D2A48u) {
        ctx->pc = 0x1D2A48u;
            // 0x1d2a48: 0x24440070  addiu       $a0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->pc = 0x1D2A4Cu;
        goto label_1d2a4c;
    }
    ctx->pc = 0x1D2A44u;
    {
        const bool branch_taken_0x1d2a44 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D2A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A44u;
            // 0x1d2a48: 0x24440070  addiu       $a0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a44) {
            ctx->pc = 0x1D2A8Cu;
            goto label_1d2a8c;
        }
    }
    ctx->pc = 0x1D2A4Cu;
label_1d2a4c:
    // 0x1d2a4c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1d2a50:
    if (ctx->pc == 0x1D2A50u) {
        ctx->pc = 0x1D2A50u;
            // 0x1d2a50: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x1D2A54u;
        goto label_1d2a54;
    }
    ctx->pc = 0x1D2A4Cu;
    {
        const bool branch_taken_0x1d2a4c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D2A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A4Cu;
            // 0x1d2a50: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a4c) {
            ctx->pc = 0x1D2A60u;
            goto label_1d2a60;
        }
    }
    ctx->pc = 0x1D2A54u;
label_1d2a54:
    // 0x1d2a54: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1d2a58:
    if (ctx->pc == 0x1D2A58u) {
        ctx->pc = 0x1D2A5Cu;
        goto label_1d2a5c;
    }
    ctx->pc = 0x1D2A54u;
    {
        const bool branch_taken_0x1d2a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2a54) {
            ctx->pc = 0x1D2A60u;
            goto label_1d2a60;
        }
    }
    ctx->pc = 0x1D2A5Cu;
label_1d2a5c:
    // 0x1d2a5c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1d2a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1d2a60:
    // 0x1d2a60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d2a64:
    if (ctx->pc == 0x1D2A64u) {
        ctx->pc = 0x1D2A68u;
        goto label_1d2a68;
    }
    ctx->pc = 0x1D2A60u;
    {
        const bool branch_taken_0x1d2a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2a60) {
            ctx->pc = 0x1D2A7Cu;
            goto label_1d2a7c;
        }
    }
    ctx->pc = 0x1D2A68u;
label_1d2a68:
    // 0x1d2a68: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d2a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2a6c:
    // 0x1d2a6c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1d2a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2a70:
    // 0x1d2a70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d2a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d2a74:
    // 0x1d2a74: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d2a78:
    if (ctx->pc == 0x1D2A78u) {
        ctx->pc = 0x1D2A78u;
            // 0x1d2a78: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x1D2A7Cu;
        goto label_1d2a7c;
    }
    ctx->pc = 0x1D2A74u;
    {
        const bool branch_taken_0x1d2a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A74u;
            // 0x1d2a78: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a74) {
            ctx->pc = 0x1D2A8Cu;
            goto label_1d2a8c;
        }
    }
    ctx->pc = 0x1D2A7Cu;
label_1d2a7c:
    // 0x1d2a7c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d2a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2a80:
    // 0x1d2a80: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1d2a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2a84:
    // 0x1d2a84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d2a84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d2a88:
    // 0x1d2a88: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1d2a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1d2a8c:
    // 0x1d2a8c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d2a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d2a90:
    // 0x1d2a90: 0x3401a1b0  ori         $at, $zero, 0xA1B0
    ctx->pc = 0x1d2a90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41392);
label_1d2a94:
    // 0x1d2a94: 0x24845830  addiu       $a0, $a0, 0x5830
    ctx->pc = 0x1d2a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
label_1d2a98:
    // 0x1d2a98: 0xc04c504  jal         func_131410
label_1d2a9c:
    if (ctx->pc == 0x1D2A9Cu) {
        ctx->pc = 0x1D2A9Cu;
            // 0x1d2a9c: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D2AA0u;
        goto label_1d2aa0;
    }
    ctx->pc = 0x1D2A98u;
    SET_GPR_U32(ctx, 31, 0x1D2AA0u);
    ctx->pc = 0x1D2A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A98u;
            // 0x1d2a9c: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2AA0u; }
        if (ctx->pc != 0x1D2AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2AA0u; }
        if (ctx->pc != 0x1D2AA0u) { return; }
    }
    ctx->pc = 0x1D2AA0u;
label_1d2aa0:
    // 0x1d2aa0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d2aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d2aa4:
    // 0x1d2aa4: 0x3401a1a0  ori         $at, $zero, 0xA1A0
    ctx->pc = 0x1d2aa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41376);
label_1d2aa8:
    // 0x1d2aa8: 0x24845830  addiu       $a0, $a0, 0x5830
    ctx->pc = 0x1d2aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
label_1d2aac:
    // 0x1d2aac: 0xc04c518  jal         func_131460
label_1d2ab0:
    if (ctx->pc == 0x1D2AB0u) {
        ctx->pc = 0x1D2AB0u;
            // 0x1d2ab0: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D2AB4u;
        goto label_1d2ab4;
    }
    ctx->pc = 0x1D2AACu;
    SET_GPR_U32(ctx, 31, 0x1D2AB4u);
    ctx->pc = 0x1D2AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2AACu;
            // 0x1d2ab0: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2AB4u; }
        if (ctx->pc != 0x1D2AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2AB4u; }
        if (ctx->pc != 0x1D2AB4u) { return; }
    }
    ctx->pc = 0x1D2AB4u;
label_1d2ab4:
    // 0x1d2ab4: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1d2ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d2ab8:
    // 0x1d2ab8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d2abc:
    // 0x1d2abc: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1d2abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1d2ac0:
    // 0x1d2ac0: 0x146200ac  bne         $v1, $v0, . + 4 + (0xAC << 2)
label_1d2ac4:
    if (ctx->pc == 0x1D2AC4u) {
        ctx->pc = 0x1D2AC4u;
            // 0x1d2ac4: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1D2AC8u;
        goto label_1d2ac8;
    }
    ctx->pc = 0x1D2AC0u;
    {
        const bool branch_taken_0x1d2ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D2AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2AC0u;
            // 0x1d2ac4: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ac0) {
            ctx->pc = 0x1D2D74u;
            goto label_1d2d74;
        }
    }
    ctx->pc = 0x1D2AC8u;
label_1d2ac8:
    // 0x1d2ac8: 0xc04c66c  jal         func_1319B0
label_1d2acc:
    if (ctx->pc == 0x1D2ACCu) {
        ctx->pc = 0x1D2ACCu;
            // 0x1d2acc: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->pc = 0x1D2AD0u;
        goto label_1d2ad0;
    }
    ctx->pc = 0x1D2AC8u;
    SET_GPR_U32(ctx, 31, 0x1D2AD0u);
    ctx->pc = 0x1D2ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2AC8u;
            // 0x1d2acc: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319B0u;
    if (runtime->hasFunction(0x1319B0u)) {
        auto targetFn = runtime->lookupFunction(0x1319B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2AD0u; }
        if (ctx->pc != 0x1D2AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOff__15mgCCameraFollowFv_0x1319b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2AD0u; }
        if (ctx->pc != 0x1D2AD0u) { return; }
    }
    ctx->pc = 0x1D2AD0u;
label_1d2ad0:
    // 0x1d2ad0: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d2ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d2ad4:
    // 0x1d2ad4: 0x3401a1c0  ori         $at, $zero, 0xA1C0
    ctx->pc = 0x1d2ad4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41408);
label_1d2ad8:
    // 0x1d2ad8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d2ad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d2adc:
    // 0x1d2adc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d2adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d2ae0:
    // 0x1d2ae0: 0x320f809  jalr        $t9
label_1d2ae4:
    if (ctx->pc == 0x1D2AE4u) {
        ctx->pc = 0x1D2AE4u;
            // 0x1d2ae4: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D2AE8u;
        goto label_1d2ae8;
    }
    ctx->pc = 0x1D2AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D2AE8u);
        ctx->pc = 0x1D2AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2AE0u;
            // 0x1d2ae4: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2AE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2AE8u; }
            if (ctx->pc != 0x1D2AE8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2AE8u;
label_1d2ae8:
    // 0x1d2ae8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2aec:
    // 0x1d2aec: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2aecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2af0:
    // 0x1d2af0: 0xc0a24f0  jal         func_2893C0
label_1d2af4:
    if (ctx->pc == 0x1D2AF4u) {
        ctx->pc = 0x1D2AF4u;
            // 0x1d2af4: 0xc42ca1c0  lwc1        $f12, -0x5E40($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1D2AF8u;
        goto label_1d2af8;
    }
    ctx->pc = 0x1D2AF0u;
    SET_GPR_U32(ctx, 31, 0x1D2AF8u);
    ctx->pc = 0x1D2AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2AF0u;
            // 0x1d2af4: 0xc42ca1c0  lwc1        $f12, -0x5E40($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2AF8u; }
        if (ctx->pc != 0x1D2AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2AF8u; }
        if (ctx->pc != 0x1D2AF8u) { return; }
    }
    ctx->pc = 0x1D2AF8u;
label_1d2af8:
    // 0x1d2af8: 0x3c044070  lui         $a0, 0x4070
    ctx->pc = 0x1d2af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16496 << 16));
label_1d2afc:
    // 0x1d2afc: 0x3403cccc  ori         $v1, $zero, 0xCCCC
    ctx->pc = 0x1d2afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52428);
label_1d2b00:
    // 0x1d2b00: 0x3484cccc  ori         $a0, $a0, 0xCCCC
    ctx->pc = 0x1d2b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52428);
label_1d2b04:
    // 0x1d2b04: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d2b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1d2b08:
    // 0x1d2b08: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d2b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d2b0c:
    // 0x1d2b0c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1d2b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1d2b10:
    // 0x1d2b10: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1d2b10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1d2b14:
    // 0x1d2b14: 0xc0a1fe4  jal         func_287F90
label_1d2b18:
    if (ctx->pc == 0x1D2B18u) {
        ctx->pc = 0x1D2B18u;
            // 0x1d2b18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B1Cu;
        goto label_1d2b1c;
    }
    ctx->pc = 0x1D2B14u;
    SET_GPR_U32(ctx, 31, 0x1D2B1Cu);
    ctx->pc = 0x1D2B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B14u;
            // 0x1d2b18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B1Cu; }
        if (ctx->pc != 0x1D2B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B1Cu; }
        if (ctx->pc != 0x1D2B1Cu) { return; }
    }
    ctx->pc = 0x1D2B1Cu;
label_1d2b1c:
    // 0x1d2b1c: 0xc0a21f2  jal         func_2887C8
label_1d2b20:
    if (ctx->pc == 0x1D2B20u) {
        ctx->pc = 0x1D2B20u;
            // 0x1d2b20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B24u;
        goto label_1d2b24;
    }
    ctx->pc = 0x1D2B1Cu;
    SET_GPR_U32(ctx, 31, 0x1D2B24u);
    ctx->pc = 0x1D2B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B1Cu;
            // 0x1d2b20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B24u; }
        if (ctx->pc != 0x1D2B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B24u; }
        if (ctx->pc != 0x1D2B24u) { return; }
    }
    ctx->pc = 0x1D2B24u;
label_1d2b24:
    // 0x1d2b24: 0x3401a1c8  ori         $at, $zero, 0xA1C8
    ctx->pc = 0x1d2b24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41416);
label_1d2b28:
    // 0x1d2b28: 0x3a18821  addu        $s1, $sp, $at
    ctx->pc = 0x1d2b28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2b2c:
    // 0x1d2b2c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x1d2b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d2b30:
    // 0x1d2b30: 0xc0a24f0  jal         func_2893C0
label_1d2b34:
    if (ctx->pc == 0x1D2B34u) {
        ctx->pc = 0x1D2B34u;
            // 0x1d2b34: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1D2B38u;
        goto label_1d2b38;
    }
    ctx->pc = 0x1D2B30u;
    SET_GPR_U32(ctx, 31, 0x1D2B38u);
    ctx->pc = 0x1D2B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B30u;
            // 0x1d2b34: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B38u; }
        if (ctx->pc != 0x1D2B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B38u; }
        if (ctx->pc != 0x1D2B38u) { return; }
    }
    ctx->pc = 0x1D2B38u;
label_1d2b38:
    // 0x1d2b38: 0x3c04c074  lui         $a0, 0xC074
    ctx->pc = 0x1d2b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49268 << 16));
label_1d2b3c:
    // 0x1d2b3c: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x1d2b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_1d2b40:
    // 0x1d2b40: 0x34842666  ori         $a0, $a0, 0x2666
    ctx->pc = 0x1d2b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9830);
label_1d2b44:
    // 0x1d2b44: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1d2b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1d2b48:
    // 0x1d2b48: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1d2b48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_1d2b4c:
    // 0x1d2b4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d2b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2b50:
    // 0x1d2b50: 0xc0a1fe4  jal         func_287F90
label_1d2b54:
    if (ctx->pc == 0x1D2B54u) {
        ctx->pc = 0x1D2B54u;
            // 0x1d2b54: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->pc = 0x1D2B58u;
        goto label_1d2b58;
    }
    ctx->pc = 0x1D2B50u;
    SET_GPR_U32(ctx, 31, 0x1D2B58u);
    ctx->pc = 0x1D2B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B50u;
            // 0x1d2b54: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B58u; }
        if (ctx->pc != 0x1D2B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B58u; }
        if (ctx->pc != 0x1D2B58u) { return; }
    }
    ctx->pc = 0x1D2B58u;
label_1d2b58:
    // 0x1d2b58: 0xc0a21f2  jal         func_2887C8
label_1d2b5c:
    if (ctx->pc == 0x1D2B5Cu) {
        ctx->pc = 0x1D2B5Cu;
            // 0x1d2b5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B60u;
        goto label_1d2b60;
    }
    ctx->pc = 0x1D2B58u;
    SET_GPR_U32(ctx, 31, 0x1D2B60u);
    ctx->pc = 0x1D2B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B58u;
            // 0x1d2b5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B60u; }
        if (ctx->pc != 0x1D2B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B60u; }
        if (ctx->pc != 0x1D2B60u) { return; }
    }
    ctx->pc = 0x1D2B60u;
label_1d2b60:
    // 0x1d2b60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d2b60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d2b64:
    // 0x1d2b64: 0xc047c76  jal         func_11F1D8
label_1d2b68:
    if (ctx->pc == 0x1D2B68u) {
        ctx->pc = 0x1D2B68u;
            // 0x1d2b68: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1D2B6Cu;
        goto label_1d2b6c;
    }
    ctx->pc = 0x1D2B64u;
    SET_GPR_U32(ctx, 31, 0x1D2B6Cu);
    ctx->pc = 0x1D2B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B64u;
            // 0x1d2b68: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B6Cu; }
        if (ctx->pc != 0x1D2B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B6Cu; }
        if (ctx->pc != 0x1D2B6Cu) { return; }
    }
    ctx->pc = 0x1D2B6Cu;
label_1d2b6c:
    // 0x1d2b6c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2b70:
    // 0x1d2b70: 0x3c034386  lui         $v1, 0x4386
    ctx->pc = 0x1d2b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17286 << 16));
label_1d2b74:
    // 0x1d2b74: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2b74u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2b78:
    // 0x1d2b78: 0x3c02c3a1  lui         $v0, 0xC3A1
    ctx->pc = 0x1d2b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50081 << 16));
label_1d2b7c:
    // 0x1d2b7c: 0xac20a1d4  sw          $zero, -0x5E2C($at)
    ctx->pc = 0x1d2b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943188), GPR_U32(ctx, 0));
label_1d2b80:
    // 0x1d2b80: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d2b80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1d2b84:
    // 0x1d2b84: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2b88:
    // 0x1d2b88: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1d2b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1d2b8c:
    // 0x1d2b8c: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2b90:
    // 0x1d2b90: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1d2b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_1d2b94:
    // 0x1d2b94: 0xc420a1c0  lwc1        $f0, -0x5E40($at)
    ctx->pc = 0x1d2b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2b98:
    // 0x1d2b98: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1d2b98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_1d2b9c:
    // 0x1d2b9c: 0x3401a1d0  ori         $at, $zero, 0xA1D0
    ctx->pc = 0x1d2b9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41424);
label_1d2ba0:
    // 0x1d2ba0: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x1d2ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2ba4:
    // 0x1d2ba4: 0x3401a1e0  ori         $at, $zero, 0xA1E0
    ctx->pc = 0x1d2ba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41440);
label_1d2ba8:
    // 0x1d2ba8: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x1d2ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2bac:
    // 0x1d2bac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2bb0:
    // 0x1d2bb0: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2bb4:
    // 0x1d2bb4: 0xe420a1d0  swc1        $f0, -0x5E30($at)
    ctx->pc = 0x1d2bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943184), bits); }
label_1d2bb8:
    // 0x1d2bb8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d2bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2bbc:
    // 0x1d2bbc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2bc0:
    // 0x1d2bc0: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2bc4:
    // 0x1d2bc4: 0xe420a1d8  swc1        $f0, -0x5E28($at)
    ctx->pc = 0x1d2bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943192), bits); }
label_1d2bc8:
    // 0x1d2bc8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2bcc:
    // 0x1d2bcc: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2bccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2bd0:
    // 0x1d2bd0: 0xac23a1e0  sw          $v1, -0x5E20($at)
    ctx->pc = 0x1d2bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943200), GPR_U32(ctx, 3));
label_1d2bd4:
    // 0x1d2bd4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2bd8:
    // 0x1d2bd8: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2bdc:
    // 0x1d2bdc: 0xac22a1e8  sw          $v0, -0x5E18($at)
    ctx->pc = 0x1d2bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943208), GPR_U32(ctx, 2));
label_1d2be0:
    // 0x1d2be0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2be4:
    // 0x1d2be4: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2be4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2be8:
    // 0x1d2be8: 0xac26a1dc  sw          $a2, -0x5E24($at)
    ctx->pc = 0x1d2be8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943196), GPR_U32(ctx, 6));
label_1d2bec:
    // 0x1d2bec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2bf0:
    // 0x1d2bf0: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2bf4:
    // 0x1d2bf4: 0xac26a1ec  sw          $a2, -0x5E14($at)
    ctx->pc = 0x1d2bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943212), GPR_U32(ctx, 6));
label_1d2bf8:
    // 0x1d2bf8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2bfc:
    // 0x1d2bfc: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2c00:
    // 0x1d2c00: 0xc04c018  jal         func_130060
label_1d2c04:
    if (ctx->pc == 0x1D2C04u) {
        ctx->pc = 0x1D2C04u;
            // 0x1d2c04: 0xac20a1e4  sw          $zero, -0x5E1C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943204), GPR_U32(ctx, 0));
        ctx->pc = 0x1D2C08u;
        goto label_1d2c08;
    }
    ctx->pc = 0x1D2C00u;
    SET_GPR_U32(ctx, 31, 0x1D2C08u);
    ctx->pc = 0x1D2C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C00u;
            // 0x1d2c04: 0xac20a1e4  sw          $zero, -0x5E1C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C08u; }
        if (ctx->pc != 0x1D2C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C08u; }
        if (ctx->pc != 0x1D2C08u) { return; }
    }
    ctx->pc = 0x1D2C08u;
label_1d2c08:
    // 0x1d2c08: 0xc0a24f0  jal         func_2893C0
label_1d2c0c:
    if (ctx->pc == 0x1D2C0Cu) {
        ctx->pc = 0x1D2C0Cu;
            // 0x1d2c0c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1D2C10u;
        goto label_1d2c10;
    }
    ctx->pc = 0x1D2C08u;
    SET_GPR_U32(ctx, 31, 0x1D2C10u);
    ctx->pc = 0x1D2C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C08u;
            // 0x1d2c0c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C10u; }
        if (ctx->pc != 0x1D2C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C10u; }
        if (ctx->pc != 0x1D2C10u) { return; }
    }
    ctx->pc = 0x1D2C10u;
label_1d2c10:
    // 0x1d2c10: 0x3c034065  lui         $v1, 0x4065
    ctx->pc = 0x1d2c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16485 << 16));
label_1d2c14:
    // 0x1d2c14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d2c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2c18:
    // 0x1d2c18: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x1d2c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1d2c1c:
    // 0x1d2c1c: 0xc0a1fe4  jal         func_287F90
label_1d2c20:
    if (ctx->pc == 0x1D2C20u) {
        ctx->pc = 0x1D2C20u;
            // 0x1d2c20: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->pc = 0x1D2C24u;
        goto label_1d2c24;
    }
    ctx->pc = 0x1D2C1Cu;
    SET_GPR_U32(ctx, 31, 0x1D2C24u);
    ctx->pc = 0x1D2C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C1Cu;
            // 0x1d2c20: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C24u; }
        if (ctx->pc != 0x1D2C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C24u; }
        if (ctx->pc != 0x1D2C24u) { return; }
    }
    ctx->pc = 0x1D2C24u;
label_1d2c24:
    // 0x1d2c24: 0x3c03407f  lui         $v1, 0x407F
    ctx->pc = 0x1d2c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16511 << 16));
label_1d2c28:
    // 0x1d2c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d2c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2c2c:
    // 0x1d2c2c: 0x34621000  ori         $v0, $v1, 0x1000
    ctx->pc = 0x1d2c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_1d2c30:
    // 0x1d2c30: 0xc0a20a8  jal         func_2882A0
label_1d2c34:
    if (ctx->pc == 0x1D2C34u) {
        ctx->pc = 0x1D2C34u;
            // 0x1d2c34: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->pc = 0x1D2C38u;
        goto label_1d2c38;
    }
    ctx->pc = 0x1D2C30u;
    SET_GPR_U32(ctx, 31, 0x1D2C38u);
    ctx->pc = 0x1D2C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C30u;
            // 0x1d2c34: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2882A0u;
    if (runtime->hasFunction(0x2882A0u)) {
        auto targetFn = runtime->lookupFunction(0x2882A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C38u; }
        if (ctx->pc != 0x1D2C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2882a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C38u; }
        if (ctx->pc != 0x1D2C38u) { return; }
    }
    ctx->pc = 0x1D2C38u;
label_1d2c38:
    // 0x1d2c38: 0xc0a21f2  jal         func_2887C8
label_1d2c3c:
    if (ctx->pc == 0x1D2C3Cu) {
        ctx->pc = 0x1D2C3Cu;
            // 0x1d2c3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C40u;
        goto label_1d2c40;
    }
    ctx->pc = 0x1D2C38u;
    SET_GPR_U32(ctx, 31, 0x1D2C40u);
    ctx->pc = 0x1D2C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C38u;
            // 0x1d2c3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C40u; }
        if (ctx->pc != 0x1D2C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C40u; }
        if (ctx->pc != 0x1D2C40u) { return; }
    }
    ctx->pc = 0x1D2C40u;
label_1d2c40:
    // 0x1d2c40: 0x3c0343e1  lui         $v1, 0x43E1
    ctx->pc = 0x1d2c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17377 << 16));
label_1d2c44:
    // 0x1d2c44: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x1d2c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
label_1d2c48:
    // 0x1d2c48: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d2c48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d2c4c:
    // 0x1d2c4c: 0x3c074248  lui         $a3, 0x4248
    ctx->pc = 0x1d2c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16968 << 16));
label_1d2c50:
    // 0x1d2c50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d2c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2c54:
    // 0x1d2c54: 0x3c064448  lui         $a2, 0x4448
    ctx->pc = 0x1d2c54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17480 << 16));
label_1d2c58:
    // 0x1d2c58: 0x46020542  mul.s       $f21, $f0, $f2
    ctx->pc = 0x1d2c58u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1d2c5c:
    // 0x1d2c5c: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x1d2c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
label_1d2c60:
    // 0x1d2c60: 0x3c024454  lui         $v0, 0x4454
    ctx->pc = 0x1d2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17492 << 16));
label_1d2c64:
    // 0x1d2c64: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1d2c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1d2c68:
    // 0x1d2c68: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1d2c68u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d2c6c:
    // 0x1d2c6c: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x1d2c6cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_1d2c70:
    // 0x1d2c70: 0x46020582  mul.s       $f22, $f0, $f2
    ctx->pc = 0x1d2c70u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1d2c74:
    // 0x1d2c74: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1d2c74u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2c78:
    // 0x1d2c78: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d2c78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d2c7c:
    // 0x1d2c7c: 0x4601b580  add.s       $f22, $f22, $f1
    ctx->pc = 0x1d2c7cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
label_1d2c80:
    // 0x1d2c80: 0x460205c2  mul.s       $f23, $f0, $f2
    ctx->pc = 0x1d2c80u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1d2c84:
    // 0x1d2c84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d2c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2c88:
    // 0x1d2c88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d2c88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d2c8c:
    // 0x1d2c8c: 0xc0a24f0  jal         func_2893C0
label_1d2c90:
    if (ctx->pc == 0x1D2C90u) {
        ctx->pc = 0x1D2C90u;
            // 0x1d2c90: 0x4601bdc0  add.s       $f23, $f23, $f1 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
        ctx->pc = 0x1D2C94u;
        goto label_1d2c94;
    }
    ctx->pc = 0x1D2C8Cu;
    SET_GPR_U32(ctx, 31, 0x1D2C94u);
    ctx->pc = 0x1D2C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C8Cu;
            // 0x1d2c90: 0x4601bdc0  add.s       $f23, $f23, $f1 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C94u; }
        if (ctx->pc != 0x1D2C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C94u; }
        if (ctx->pc != 0x1D2C94u) { return; }
    }
    ctx->pc = 0x1D2C94u;
label_1d2c94:
    // 0x1d2c94: 0xc047870  jal         func_11E1C0
label_1d2c98:
    if (ctx->pc == 0x1D2C98u) {
        ctx->pc = 0x1D2C98u;
            // 0x1d2c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C9Cu;
        goto label_1d2c9c;
    }
    ctx->pc = 0x1D2C94u;
    SET_GPR_U32(ctx, 31, 0x1D2C9Cu);
    ctx->pc = 0x1D2C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C94u;
            // 0x1d2c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E1C0u;
    if (runtime->hasFunction(0x11E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x11E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C9Cu; }
        if (ctx->pc != 0x1D2C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sin_0x11e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C9Cu; }
        if (ctx->pc != 0x1D2C9Cu) { return; }
    }
    ctx->pc = 0x1D2C9Cu;
label_1d2c9c:
    // 0x1d2c9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d2c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2ca0:
    // 0x1d2ca0: 0xc0a24f0  jal         func_2893C0
label_1d2ca4:
    if (ctx->pc == 0x1D2CA4u) {
        ctx->pc = 0x1D2CA4u;
            // 0x1d2ca4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x1D2CA8u;
        goto label_1d2ca8;
    }
    ctx->pc = 0x1D2CA0u;
    SET_GPR_U32(ctx, 31, 0x1D2CA8u);
    ctx->pc = 0x1D2CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CA0u;
            // 0x1d2ca4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CA8u; }
        if (ctx->pc != 0x1D2CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CA8u; }
        if (ctx->pc != 0x1D2CA8u) { return; }
    }
    ctx->pc = 0x1D2CA8u;
label_1d2ca8:
    // 0x1d2ca8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d2ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2cac:
    // 0x1d2cac: 0xc0a1ffe  jal         func_287FF8
label_1d2cb0:
    if (ctx->pc == 0x1D2CB0u) {
        ctx->pc = 0x1D2CB0u;
            // 0x1d2cb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CB4u;
        goto label_1d2cb4;
    }
    ctx->pc = 0x1D2CACu;
    SET_GPR_U32(ctx, 31, 0x1D2CB4u);
    ctx->pc = 0x1D2CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CACu;
            // 0x1d2cb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CB4u; }
        if (ctx->pc != 0x1D2CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CB4u; }
        if (ctx->pc != 0x1D2CB4u) { return; }
    }
    ctx->pc = 0x1D2CB4u;
label_1d2cb4:
    // 0x1d2cb4: 0x3c044070  lui         $a0, 0x4070
    ctx->pc = 0x1d2cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16496 << 16));
label_1d2cb8:
    // 0x1d2cb8: 0x3403cccc  ori         $v1, $zero, 0xCCCC
    ctx->pc = 0x1d2cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52428);
label_1d2cbc:
    // 0x1d2cbc: 0x3484cccc  ori         $a0, $a0, 0xCCCC
    ctx->pc = 0x1d2cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52428);
label_1d2cc0:
    // 0x1d2cc0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d2cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1d2cc4:
    // 0x1d2cc4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d2cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d2cc8:
    // 0x1d2cc8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1d2cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1d2ccc:
    // 0x1d2ccc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1d2cd0:
    // 0x1d2cd0: 0xc0a1fce  jal         func_287F38
label_1d2cd4:
    if (ctx->pc == 0x1D2CD4u) {
        ctx->pc = 0x1D2CD4u;
            // 0x1d2cd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CD8u;
        goto label_1d2cd8;
    }
    ctx->pc = 0x1D2CD0u;
    SET_GPR_U32(ctx, 31, 0x1D2CD8u);
    ctx->pc = 0x1D2CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CD0u;
            // 0x1d2cd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CD8u; }
        if (ctx->pc != 0x1D2CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CD8u; }
        if (ctx->pc != 0x1D2CD8u) { return; }
    }
    ctx->pc = 0x1D2CD8u;
label_1d2cd8:
    // 0x1d2cd8: 0xc0a21f2  jal         func_2887C8
label_1d2cdc:
    if (ctx->pc == 0x1D2CDCu) {
        ctx->pc = 0x1D2CDCu;
            // 0x1d2cdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CE0u;
        goto label_1d2ce0;
    }
    ctx->pc = 0x1D2CD8u;
    SET_GPR_U32(ctx, 31, 0x1D2CE0u);
    ctx->pc = 0x1D2CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CD8u;
            // 0x1d2cdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CE0u; }
        if (ctx->pc != 0x1D2CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CE0u; }
        if (ctx->pc != 0x1D2CE0u) { return; }
    }
    ctx->pc = 0x1D2CE0u;
label_1d2ce0:
    // 0x1d2ce0: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x1d2ce0u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_1d2ce4:
    // 0x1d2ce4: 0xc0a24f0  jal         func_2893C0
label_1d2ce8:
    if (ctx->pc == 0x1D2CE8u) {
        ctx->pc = 0x1D2CE8u;
            // 0x1d2ce8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1D2CECu;
        goto label_1d2cec;
    }
    ctx->pc = 0x1D2CE4u;
    SET_GPR_U32(ctx, 31, 0x1D2CECu);
    ctx->pc = 0x1D2CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CE4u;
            // 0x1d2ce8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CECu; }
        if (ctx->pc != 0x1D2CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CECu; }
        if (ctx->pc != 0x1D2CECu) { return; }
    }
    ctx->pc = 0x1D2CECu;
label_1d2cec:
    // 0x1d2cec: 0xc04768a  jal         func_11DA28
label_1d2cf0:
    if (ctx->pc == 0x1D2CF0u) {
        ctx->pc = 0x1D2CF0u;
            // 0x1d2cf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CF4u;
        goto label_1d2cf4;
    }
    ctx->pc = 0x1D2CECu;
    SET_GPR_U32(ctx, 31, 0x1D2CF4u);
    ctx->pc = 0x1D2CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CECu;
            // 0x1d2cf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DA28u;
    if (runtime->hasFunction(0x11DA28u)) {
        auto targetFn = runtime->lookupFunction(0x11DA28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CF4u; }
        if (ctx->pc != 0x1D2CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cos_0x11da28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2CF4u; }
        if (ctx->pc != 0x1D2CF4u) { return; }
    }
    ctx->pc = 0x1D2CF4u;
label_1d2cf4:
    // 0x1d2cf4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1d2cf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1d2cf8:
    // 0x1d2cf8: 0xc0a24f0  jal         func_2893C0
label_1d2cfc:
    if (ctx->pc == 0x1D2CFCu) {
        ctx->pc = 0x1D2CFCu;
            // 0x1d2cfc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D00u;
        goto label_1d2d00;
    }
    ctx->pc = 0x1D2CF8u;
    SET_GPR_U32(ctx, 31, 0x1D2D00u);
    ctx->pc = 0x1D2CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CF8u;
            // 0x1d2cfc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D00u; }
        if (ctx->pc != 0x1D2D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D00u; }
        if (ctx->pc != 0x1D2D00u) { return; }
    }
    ctx->pc = 0x1D2D00u;
label_1d2d00:
    // 0x1d2d00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d2d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2d04:
    // 0x1d2d04: 0xc0a1ffe  jal         func_287FF8
label_1d2d08:
    if (ctx->pc == 0x1D2D08u) {
        ctx->pc = 0x1D2D08u;
            // 0x1d2d08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D0Cu;
        goto label_1d2d0c;
    }
    ctx->pc = 0x1D2D04u;
    SET_GPR_U32(ctx, 31, 0x1D2D0Cu);
    ctx->pc = 0x1D2D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D04u;
            // 0x1d2d08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D0Cu; }
        if (ctx->pc != 0x1D2D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D0Cu; }
        if (ctx->pc != 0x1D2D0Cu) { return; }
    }
    ctx->pc = 0x1D2D0Cu;
label_1d2d0c:
    // 0x1d2d0c: 0x3c04c074  lui         $a0, 0xC074
    ctx->pc = 0x1d2d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49268 << 16));
label_1d2d10:
    // 0x1d2d10: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x1d2d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_1d2d14:
    // 0x1d2d14: 0x34842666  ori         $a0, $a0, 0x2666
    ctx->pc = 0x1d2d14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9830);
label_1d2d18:
    // 0x1d2d18: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1d2d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1d2d1c:
    // 0x1d2d1c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d2d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d2d20:
    // 0x1d2d20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2d24:
    // 0x1d2d24: 0xc0a1fce  jal         func_287F38
label_1d2d28:
    if (ctx->pc == 0x1D2D28u) {
        ctx->pc = 0x1D2D28u;
            // 0x1d2d28: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->pc = 0x1D2D2Cu;
        goto label_1d2d2c;
    }
    ctx->pc = 0x1D2D24u;
    SET_GPR_U32(ctx, 31, 0x1D2D2Cu);
    ctx->pc = 0x1D2D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D24u;
            // 0x1d2d28: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D2Cu; }
        if (ctx->pc != 0x1D2D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D2Cu; }
        if (ctx->pc != 0x1D2D2Cu) { return; }
    }
    ctx->pc = 0x1D2D2Cu;
label_1d2d2c:
    // 0x1d2d2c: 0xc0a21f2  jal         func_2887C8
label_1d2d30:
    if (ctx->pc == 0x1D2D30u) {
        ctx->pc = 0x1D2D30u;
            // 0x1d2d30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D34u;
        goto label_1d2d34;
    }
    ctx->pc = 0x1D2D2Cu;
    SET_GPR_U32(ctx, 31, 0x1D2D34u);
    ctx->pc = 0x1D2D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D2Cu;
            // 0x1d2d30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D34u; }
        if (ctx->pc != 0x1D2D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D34u; }
        if (ctx->pc != 0x1D2D34u) { return; }
    }
    ctx->pc = 0x1D2D34u;
label_1d2d34:
    // 0x1d2d34: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d2d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d2d38:
    // 0x1d2d38: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1d2d38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_1d2d3c:
    // 0x1d2d3c: 0x24845830  addiu       $a0, $a0, 0x5830
    ctx->pc = 0x1d2d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
label_1d2d40:
    // 0x1d2d40: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1d2d40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_1d2d44:
    // 0x1d2d44: 0xc04c508  jal         func_131420
label_1d2d48:
    if (ctx->pc == 0x1D2D48u) {
        ctx->pc = 0x1D2D48u;
            // 0x1d2d48: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1D2D4Cu;
        goto label_1d2d4c;
    }
    ctx->pc = 0x1D2D44u;
    SET_GPR_U32(ctx, 31, 0x1D2D4Cu);
    ctx->pc = 0x1D2D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D44u;
            // 0x1d2d48: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131420u;
    if (runtime->hasFunction(0x131420u)) {
        auto targetFn = runtime->lookupFunction(0x131420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D4Cu; }
        if (ctx->pc != 0x1D2D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextPos__9mgCCameraFfff_0x131420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D4Cu; }
        if (ctx->pc != 0x1D2D4Cu) { return; }
    }
    ctx->pc = 0x1D2D4Cu;
label_1d2d4c:
    // 0x1d2d4c: 0x3c024386  lui         $v0, 0x4386
    ctx->pc = 0x1d2d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17286 << 16));
label_1d2d50:
    // 0x1d2d50: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d2d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d2d54:
    // 0x1d2d54: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x1d2d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_1d2d58:
    // 0x1d2d58: 0x24845830  addiu       $a0, $a0, 0x5830
    ctx->pc = 0x1d2d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
label_1d2d5c:
    // 0x1d2d5c: 0x3c02c3a1  lui         $v0, 0xC3A1
    ctx->pc = 0x1d2d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50081 << 16));
label_1d2d60:
    // 0x1d2d60: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1d2d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_1d2d64:
    // 0x1d2d64: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d2d64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d2d68:
    // 0x1d2d68: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1d2d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1d2d6c:
    // 0x1d2d6c: 0xc04c51c  jal         func_131470
label_1d2d70:
    if (ctx->pc == 0x1D2D70u) {
        ctx->pc = 0x1D2D70u;
            // 0x1d2d70: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x1D2D74u;
        goto label_1d2d74;
    }
    ctx->pc = 0x1D2D6Cu;
    SET_GPR_U32(ctx, 31, 0x1D2D74u);
    ctx->pc = 0x1D2D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D6Cu;
            // 0x1d2d70: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131470u;
    if (runtime->hasFunction(0x131470u)) {
        auto targetFn = runtime->lookupFunction(0x131470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D74u; }
        if (ctx->pc != 0x1D2D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextRef__9mgCCameraFfff_0x131470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D74u; }
        if (ctx->pc != 0x1D2D74u) { return; }
    }
    ctx->pc = 0x1D2D74u;
label_1d2d74:
    // 0x1d2d74: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1d2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d2d78:
    // 0x1d2d78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d2d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d2d7c:
    // 0x1d2d7c: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1d2d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1d2d80:
    // 0x1d2d80: 0x146200d4  bne         $v1, $v0, . + 4 + (0xD4 << 2)
label_1d2d84:
    if (ctx->pc == 0x1D2D84u) {
        ctx->pc = 0x1D2D84u;
            // 0x1d2d84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D88u;
        goto label_1d2d88;
    }
    ctx->pc = 0x1D2D80u;
    {
        const bool branch_taken_0x1d2d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D2D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D80u;
            // 0x1d2d84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d80) {
            ctx->pc = 0x1D30D4u;
            goto label_1d30d4;
        }
    }
    ctx->pc = 0x1D2D88u;
label_1d2d88:
    // 0x1d2d88: 0xc0bb00c  jal         func_2EC030
label_1d2d8c:
    if (ctx->pc == 0x1D2D8Cu) {
        ctx->pc = 0x1D2D90u;
        goto label_1d2d90;
    }
    ctx->pc = 0x1D2D88u;
    SET_GPR_U32(ctx, 31, 0x1D2D90u);
    ctx->pc = 0x2EC030u;
    if (runtime->hasFunction(0x2EC030u)) {
        auto targetFn = runtime->lookupFunction(0x2EC030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D90u; }
        if (ctx->pc != 0x1D2D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ControlOn__14CCameraControlFv_0x2ec030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D90u; }
        if (ctx->pc != 0x1D2D90u) { return; }
    }
    ctx->pc = 0x1D2D90u;
label_1d2d90:
    // 0x1d2d90: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d2d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d2d94:
    // 0x1d2d94: 0x3401a1f0  ori         $at, $zero, 0xA1F0
    ctx->pc = 0x1d2d94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41456);
label_1d2d98:
    // 0x1d2d98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d2d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d2d9c:
    // 0x1d2d9c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1d2d9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1d2da0:
    // 0x1d2da0: 0x320f809  jalr        $t9
label_1d2da4:
    if (ctx->pc == 0x1D2DA4u) {
        ctx->pc = 0x1D2DA4u;
            // 0x1d2da4: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D2DA8u;
        goto label_1d2da8;
    }
    ctx->pc = 0x1D2DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D2DA8u);
        ctx->pc = 0x1D2DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2DA0u;
            // 0x1d2da4: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2DA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2DA8u; }
            if (ctx->pc != 0x1D2DA8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2DA8u;
label_1d2da8:
    // 0x1d2da8: 0xc04c684  jal         func_131A10
label_1d2dac:
    if (ctx->pc == 0x1D2DACu) {
        ctx->pc = 0x1D2DACu;
            // 0x1d2dac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2DB0u;
        goto label_1d2db0;
    }
    ctx->pc = 0x1D2DA8u;
    SET_GPR_U32(ctx, 31, 0x1D2DB0u);
    ctx->pc = 0x1D2DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2DA8u;
            // 0x1d2dac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A10u;
    if (runtime->hasFunction(0x131A10u)) {
        auto targetFn = runtime->lookupFunction(0x131A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2DB0u; }
        if (ctx->pc != 0x1D2DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDistance__15mgCCameraFollowFv_0x131a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2DB0u; }
        if (ctx->pc != 0x1D2DB0u) { return; }
    }
    ctx->pc = 0x1D2DB0u;
label_1d2db0:
    // 0x1d2db0: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d2db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d2db4:
    // 0x1d2db4: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x1d2db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
label_1d2db8:
    // 0x1d2db8: 0xc0a0f58  jal         func_283D60
label_1d2dbc:
    if (ctx->pc == 0x1D2DBCu) {
        ctx->pc = 0x1D2DBCu;
            // 0x1d2dbc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1D2DC0u;
        goto label_1d2dc0;
    }
    ctx->pc = 0x1D2DB8u;
    SET_GPR_U32(ctx, 31, 0x1D2DC0u);
    ctx->pc = 0x1D2DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2DB8u;
            // 0x1d2dbc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2DC0u; }
        if (ctx->pc != 0x1D2DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2DC0u; }
        if (ctx->pc != 0x1D2DC0u) { return; }
    }
    ctx->pc = 0x1D2DC0u;
label_1d2dc0:
    // 0x1d2dc0: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d2dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d2dc4:
    // 0x1d2dc4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2dc8:
    // 0x1d2dc8: 0x34214220  ori         $at, $at, 0x4220
    ctx->pc = 0x1d2dc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16928);
label_1d2dcc:
    // 0x1d2dcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d2dccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2dd0:
    // 0x1d2dd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d2dd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d2dd4:
    // 0x1d2dd4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d2dd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d2dd8:
    // 0x1d2dd8: 0x320f809  jalr        $t9
label_1d2ddc:
    if (ctx->pc == 0x1D2DDCu) {
        ctx->pc = 0x1D2DDCu;
            // 0x1d2ddc: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D2DE0u;
        goto label_1d2de0;
    }
    ctx->pc = 0x1D2DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D2DE0u);
        ctx->pc = 0x1D2DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2DD8u;
            // 0x1d2ddc: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2DE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2DE0u; }
            if (ctx->pc != 0x1D2DE0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2DE0u;
label_1d2de0:
    // 0x1d2de0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2de4:
    // 0x1d2de4: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2de4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2de8:
    // 0x1d2de8: 0xc4354220  lwc1        $f21, 0x4220($at)
    ctx->pc = 0x1d2de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d2dec:
    // 0x1d2dec: 0xc0a24f0  jal         func_2893C0
label_1d2df0:
    if (ctx->pc == 0x1D2DF0u) {
        ctx->pc = 0x1D2DF0u;
            // 0x1d2df0: 0x4614ab00  add.s       $f12, $f21, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->pc = 0x1D2DF4u;
        goto label_1d2df4;
    }
    ctx->pc = 0x1D2DECu;
    SET_GPR_U32(ctx, 31, 0x1D2DF4u);
    ctx->pc = 0x1D2DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2DECu;
            // 0x1d2df0: 0x4614ab00  add.s       $f12, $f21, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2DF4u; }
        if (ctx->pc != 0x1D2DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2DF4u; }
        if (ctx->pc != 0x1D2DF4u) { return; }
    }
    ctx->pc = 0x1D2DF4u;
label_1d2df4:
    // 0x1d2df4: 0x3c034024  lui         $v1, 0x4024
    ctx->pc = 0x1d2df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16420 << 16));
label_1d2df8:
    // 0x1d2df8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2dfc:
    // 0x1d2dfc: 0xc0a1fce  jal         func_287F38
label_1d2e00:
    if (ctx->pc == 0x1D2E00u) {
        ctx->pc = 0x1D2E00u;
            // 0x1d2e00: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x1D2E04u;
        goto label_1d2e04;
    }
    ctx->pc = 0x1D2DFCu;
    SET_GPR_U32(ctx, 31, 0x1D2E04u);
    ctx->pc = 0x1D2E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2DFCu;
            // 0x1d2e00: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E04u; }
        if (ctx->pc != 0x1D2E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E04u; }
        if (ctx->pc != 0x1D2E04u) { return; }
    }
    ctx->pc = 0x1D2E04u;
label_1d2e04:
    // 0x1d2e04: 0xc0a21f2  jal         func_2887C8
label_1d2e08:
    if (ctx->pc == 0x1D2E08u) {
        ctx->pc = 0x1D2E08u;
            // 0x1d2e08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E0Cu;
        goto label_1d2e0c;
    }
    ctx->pc = 0x1D2E04u;
    SET_GPR_U32(ctx, 31, 0x1D2E0Cu);
    ctx->pc = 0x1D2E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2E04u;
            // 0x1d2e08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E0Cu; }
        if (ctx->pc != 0x1D2E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E0Cu; }
        if (ctx->pc != 0x1D2E0Cu) { return; }
    }
    ctx->pc = 0x1D2E0Cu;
label_1d2e0c:
    // 0x1d2e0c: 0x4614ab01  sub.s       $f12, $f21, $f20
    ctx->pc = 0x1d2e0cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_1d2e10:
    // 0x1d2e10: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2e14:
    // 0x1d2e14: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2e14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2e18:
    // 0x1d2e18: 0xc0a24f0  jal         func_2893C0
label_1d2e1c:
    if (ctx->pc == 0x1D2E1Cu) {
        ctx->pc = 0x1D2E1Cu;
            // 0x1d2e1c: 0xe4204200  swc1        $f0, 0x4200($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16896), bits); }
        ctx->pc = 0x1D2E20u;
        goto label_1d2e20;
    }
    ctx->pc = 0x1D2E18u;
    SET_GPR_U32(ctx, 31, 0x1D2E20u);
    ctx->pc = 0x1D2E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2E18u;
            // 0x1d2e1c: 0xe4204200  swc1        $f0, 0x4200($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16896), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E20u; }
        if (ctx->pc != 0x1D2E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E20u; }
        if (ctx->pc != 0x1D2E20u) { return; }
    }
    ctx->pc = 0x1D2E20u;
label_1d2e20:
    // 0x1d2e20: 0x3c034024  lui         $v1, 0x4024
    ctx->pc = 0x1d2e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16420 << 16));
label_1d2e24:
    // 0x1d2e24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d2e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2e28:
    // 0x1d2e28: 0xc0a1fe4  jal         func_287F90
label_1d2e2c:
    if (ctx->pc == 0x1D2E2Cu) {
        ctx->pc = 0x1D2E2Cu;
            // 0x1d2e2c: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x1D2E30u;
        goto label_1d2e30;
    }
    ctx->pc = 0x1D2E28u;
    SET_GPR_U32(ctx, 31, 0x1D2E30u);
    ctx->pc = 0x1D2E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2E28u;
            // 0x1d2e2c: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E30u; }
        if (ctx->pc != 0x1D2E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E30u; }
        if (ctx->pc != 0x1D2E30u) { return; }
    }
    ctx->pc = 0x1D2E30u;
label_1d2e30:
    // 0x1d2e30: 0xc0a21f2  jal         func_2887C8
label_1d2e34:
    if (ctx->pc == 0x1D2E34u) {
        ctx->pc = 0x1D2E34u;
            // 0x1d2e34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E38u;
        goto label_1d2e38;
    }
    ctx->pc = 0x1D2E30u;
    SET_GPR_U32(ctx, 31, 0x1D2E38u);
    ctx->pc = 0x1D2E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2E30u;
            // 0x1d2e34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E38u; }
        if (ctx->pc != 0x1D2E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E38u; }
        if (ctx->pc != 0x1D2E38u) { return; }
    }
    ctx->pc = 0x1D2E38u;
label_1d2e38:
    // 0x1d2e38: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2e3c:
    // 0x1d2e3c: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2e40:
    // 0x1d2e40: 0xe4204210  swc1        $f0, 0x4210($at)
    ctx->pc = 0x1d2e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16912), bits); }
label_1d2e44:
    // 0x1d2e44: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2e48:
    // 0x1d2e48: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2e48u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2e4c:
    // 0x1d2e4c: 0xc4354224  lwc1        $f21, 0x4224($at)
    ctx->pc = 0x1d2e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d2e50:
    // 0x1d2e50: 0xc0a24f0  jal         func_2893C0
label_1d2e54:
    if (ctx->pc == 0x1D2E54u) {
        ctx->pc = 0x1D2E54u;
            // 0x1d2e54: 0x4614ab00  add.s       $f12, $f21, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->pc = 0x1D2E58u;
        goto label_1d2e58;
    }
    ctx->pc = 0x1D2E50u;
    SET_GPR_U32(ctx, 31, 0x1D2E58u);
    ctx->pc = 0x1D2E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2E50u;
            // 0x1d2e54: 0x4614ab00  add.s       $f12, $f21, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E58u; }
        if (ctx->pc != 0x1D2E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E58u; }
        if (ctx->pc != 0x1D2E58u) { return; }
    }
    ctx->pc = 0x1D2E58u;
label_1d2e58:
    // 0x1d2e58: 0x3c034024  lui         $v1, 0x4024
    ctx->pc = 0x1d2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16420 << 16));
label_1d2e5c:
    // 0x1d2e5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2e60:
    // 0x1d2e60: 0xc0a1fce  jal         func_287F38
label_1d2e64:
    if (ctx->pc == 0x1D2E64u) {
        ctx->pc = 0x1D2E64u;
            // 0x1d2e64: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x1D2E68u;
        goto label_1d2e68;
    }
    ctx->pc = 0x1D2E60u;
    SET_GPR_U32(ctx, 31, 0x1D2E68u);
    ctx->pc = 0x1D2E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2E60u;
            // 0x1d2e64: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E68u; }
        if (ctx->pc != 0x1D2E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E68u; }
        if (ctx->pc != 0x1D2E68u) { return; }
    }
    ctx->pc = 0x1D2E68u;
label_1d2e68:
    // 0x1d2e68: 0xc0a21f2  jal         func_2887C8
label_1d2e6c:
    if (ctx->pc == 0x1D2E6Cu) {
        ctx->pc = 0x1D2E6Cu;
            // 0x1d2e6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E70u;
        goto label_1d2e70;
    }
    ctx->pc = 0x1D2E68u;
    SET_GPR_U32(ctx, 31, 0x1D2E70u);
    ctx->pc = 0x1D2E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2E68u;
            // 0x1d2e6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E70u; }
        if (ctx->pc != 0x1D2E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E70u; }
        if (ctx->pc != 0x1D2E70u) { return; }
    }
    ctx->pc = 0x1D2E70u;
label_1d2e70:
    // 0x1d2e70: 0x4614ab01  sub.s       $f12, $f21, $f20
    ctx->pc = 0x1d2e70u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_1d2e74:
    // 0x1d2e74: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2e78:
    // 0x1d2e78: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2e78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2e7c:
    // 0x1d2e7c: 0xc0a24f0  jal         func_2893C0
label_1d2e80:
    if (ctx->pc == 0x1D2E80u) {
        ctx->pc = 0x1D2E80u;
            // 0x1d2e80: 0xe4204204  swc1        $f0, 0x4204($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16900), bits); }
        ctx->pc = 0x1D2E84u;
        goto label_1d2e84;
    }
    ctx->pc = 0x1D2E7Cu;
    SET_GPR_U32(ctx, 31, 0x1D2E84u);
    ctx->pc = 0x1D2E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2E7Cu;
            // 0x1d2e80: 0xe4204204  swc1        $f0, 0x4204($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16900), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E84u; }
        if (ctx->pc != 0x1D2E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E84u; }
        if (ctx->pc != 0x1D2E84u) { return; }
    }
    ctx->pc = 0x1D2E84u;
label_1d2e84:
    // 0x1d2e84: 0x3c034024  lui         $v1, 0x4024
    ctx->pc = 0x1d2e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16420 << 16));
label_1d2e88:
    // 0x1d2e88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d2e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2e8c:
    // 0x1d2e8c: 0xc0a1fe4  jal         func_287F90
label_1d2e90:
    if (ctx->pc == 0x1D2E90u) {
        ctx->pc = 0x1D2E90u;
            // 0x1d2e90: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x1D2E94u;
        goto label_1d2e94;
    }
    ctx->pc = 0x1D2E8Cu;
    SET_GPR_U32(ctx, 31, 0x1D2E94u);
    ctx->pc = 0x1D2E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2E8Cu;
            // 0x1d2e90: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E94u; }
        if (ctx->pc != 0x1D2E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E94u; }
        if (ctx->pc != 0x1D2E94u) { return; }
    }
    ctx->pc = 0x1D2E94u;
label_1d2e94:
    // 0x1d2e94: 0xc0a21f2  jal         func_2887C8
label_1d2e98:
    if (ctx->pc == 0x1D2E98u) {
        ctx->pc = 0x1D2E98u;
            // 0x1d2e98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E9Cu;
        goto label_1d2e9c;
    }
    ctx->pc = 0x1D2E94u;
    SET_GPR_U32(ctx, 31, 0x1D2E9Cu);
    ctx->pc = 0x1D2E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2E94u;
            // 0x1d2e98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E9Cu; }
        if (ctx->pc != 0x1D2E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E9Cu; }
        if (ctx->pc != 0x1D2E9Cu) { return; }
    }
    ctx->pc = 0x1D2E9Cu;
label_1d2e9c:
    // 0x1d2e9c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2ea0:
    // 0x1d2ea0: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2ea4:
    // 0x1d2ea4: 0xe4204214  swc1        $f0, 0x4214($at)
    ctx->pc = 0x1d2ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16916), bits); }
label_1d2ea8:
    // 0x1d2ea8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2eac:
    // 0x1d2eac: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2eacu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2eb0:
    // 0x1d2eb0: 0xc4354228  lwc1        $f21, 0x4228($at)
    ctx->pc = 0x1d2eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d2eb4:
    // 0x1d2eb4: 0xc0a24f0  jal         func_2893C0
label_1d2eb8:
    if (ctx->pc == 0x1D2EB8u) {
        ctx->pc = 0x1D2EB8u;
            // 0x1d2eb8: 0x4614ab00  add.s       $f12, $f21, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->pc = 0x1D2EBCu;
        goto label_1d2ebc;
    }
    ctx->pc = 0x1D2EB4u;
    SET_GPR_U32(ctx, 31, 0x1D2EBCu);
    ctx->pc = 0x1D2EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2EB4u;
            // 0x1d2eb8: 0x4614ab00  add.s       $f12, $f21, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2EBCu; }
        if (ctx->pc != 0x1D2EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2EBCu; }
        if (ctx->pc != 0x1D2EBCu) { return; }
    }
    ctx->pc = 0x1D2EBCu;
label_1d2ebc:
    // 0x1d2ebc: 0x3c034024  lui         $v1, 0x4024
    ctx->pc = 0x1d2ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16420 << 16));
label_1d2ec0:
    // 0x1d2ec0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2ec4:
    // 0x1d2ec4: 0xc0a1fce  jal         func_287F38
label_1d2ec8:
    if (ctx->pc == 0x1D2EC8u) {
        ctx->pc = 0x1D2EC8u;
            // 0x1d2ec8: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x1D2ECCu;
        goto label_1d2ecc;
    }
    ctx->pc = 0x1D2EC4u;
    SET_GPR_U32(ctx, 31, 0x1D2ECCu);
    ctx->pc = 0x1D2EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2EC4u;
            // 0x1d2ec8: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2ECCu; }
        if (ctx->pc != 0x1D2ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2ECCu; }
        if (ctx->pc != 0x1D2ECCu) { return; }
    }
    ctx->pc = 0x1D2ECCu;
label_1d2ecc:
    // 0x1d2ecc: 0xc0a21f2  jal         func_2887C8
label_1d2ed0:
    if (ctx->pc == 0x1D2ED0u) {
        ctx->pc = 0x1D2ED0u;
            // 0x1d2ed0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2ED4u;
        goto label_1d2ed4;
    }
    ctx->pc = 0x1D2ECCu;
    SET_GPR_U32(ctx, 31, 0x1D2ED4u);
    ctx->pc = 0x1D2ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2ECCu;
            // 0x1d2ed0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2ED4u; }
        if (ctx->pc != 0x1D2ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2ED4u; }
        if (ctx->pc != 0x1D2ED4u) { return; }
    }
    ctx->pc = 0x1D2ED4u;
label_1d2ed4:
    // 0x1d2ed4: 0x4614ab01  sub.s       $f12, $f21, $f20
    ctx->pc = 0x1d2ed4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_1d2ed8:
    // 0x1d2ed8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2edc:
    // 0x1d2edc: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2edcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2ee0:
    // 0x1d2ee0: 0xc0a24f0  jal         func_2893C0
label_1d2ee4:
    if (ctx->pc == 0x1D2EE4u) {
        ctx->pc = 0x1D2EE4u;
            // 0x1d2ee4: 0xe4204208  swc1        $f0, 0x4208($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16904), bits); }
        ctx->pc = 0x1D2EE8u;
        goto label_1d2ee8;
    }
    ctx->pc = 0x1D2EE0u;
    SET_GPR_U32(ctx, 31, 0x1D2EE8u);
    ctx->pc = 0x1D2EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2EE0u;
            // 0x1d2ee4: 0xe4204208  swc1        $f0, 0x4208($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16904), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2EE8u; }
        if (ctx->pc != 0x1D2EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2EE8u; }
        if (ctx->pc != 0x1D2EE8u) { return; }
    }
    ctx->pc = 0x1D2EE8u;
label_1d2ee8:
    // 0x1d2ee8: 0x3c034024  lui         $v1, 0x4024
    ctx->pc = 0x1d2ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16420 << 16));
label_1d2eec:
    // 0x1d2eec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d2eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2ef0:
    // 0x1d2ef0: 0xc0a1fe4  jal         func_287F90
label_1d2ef4:
    if (ctx->pc == 0x1D2EF4u) {
        ctx->pc = 0x1D2EF4u;
            // 0x1d2ef4: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x1D2EF8u;
        goto label_1d2ef8;
    }
    ctx->pc = 0x1D2EF0u;
    SET_GPR_U32(ctx, 31, 0x1D2EF8u);
    ctx->pc = 0x1D2EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2EF0u;
            // 0x1d2ef4: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2EF8u; }
        if (ctx->pc != 0x1D2EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2EF8u; }
        if (ctx->pc != 0x1D2EF8u) { return; }
    }
    ctx->pc = 0x1D2EF8u;
label_1d2ef8:
    // 0x1d2ef8: 0xc0a21f2  jal         func_2887C8
label_1d2efc:
    if (ctx->pc == 0x1D2EFCu) {
        ctx->pc = 0x1D2EFCu;
            // 0x1d2efc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F00u;
        goto label_1d2f00;
    }
    ctx->pc = 0x1D2EF8u;
    SET_GPR_U32(ctx, 31, 0x1D2F00u);
    ctx->pc = 0x1D2EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2EF8u;
            // 0x1d2efc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F00u; }
        if (ctx->pc != 0x1D2F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F00u; }
        if (ctx->pc != 0x1D2F00u) { return; }
    }
    ctx->pc = 0x1D2F00u;
label_1d2f00:
    // 0x1d2f00: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2f04:
    // 0x1d2f04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d2f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d2f08:
    // 0x1d2f08: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2f08u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2f0c:
    // 0x1d2f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2f10:
    // 0x1d2f10: 0xe4204218  swc1        $f0, 0x4218($at)
    ctx->pc = 0x1d2f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16920), bits); }
label_1d2f14:
    // 0x1d2f14: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1d2f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1d2f18:
    // 0x1d2f18: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2f1c:
    // 0x1d2f1c: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2f20:
    // 0x1d2f20: 0xac22420c  sw          $v0, 0x420C($at)
    ctx->pc = 0x1d2f20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16908), GPR_U32(ctx, 2));
label_1d2f24:
    // 0x1d2f24: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2f28:
    // 0x1d2f28: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2f28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2f2c:
    // 0x1d2f2c: 0xac22421c  sw          $v0, 0x421C($at)
    ctx->pc = 0x1d2f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16924), GPR_U32(ctx, 2));
label_1d2f30:
    // 0x1d2f30: 0x8e390d00  lw          $t9, 0xD00($s1)
    ctx->pc = 0x1d2f30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3328)));
label_1d2f34:
    // 0x1d2f34: 0x3401a200  ori         $at, $zero, 0xA200
    ctx->pc = 0x1d2f34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41472);
label_1d2f38:
    // 0x1d2f38: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x1d2f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2f3c:
    // 0x1d2f3c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2f40:
    // 0x1d2f40: 0x34214200  ori         $at, $at, 0x4200
    ctx->pc = 0x1d2f40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16896);
label_1d2f44:
    // 0x1d2f44: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1d2f44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1d2f48:
    // 0x1d2f48: 0x320f809  jalr        $t9
label_1d2f4c:
    if (ctx->pc == 0x1D2F4Cu) {
        ctx->pc = 0x1D2F4Cu;
            // 0x1d2f4c: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D2F50u;
        goto label_1d2f50;
    }
    ctx->pc = 0x1D2F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D2F50u);
        ctx->pc = 0x1D2F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F48u;
            // 0x1d2f4c: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2F50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F50u; }
            if (ctx->pc != 0x1D2F50u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2F50u;
label_1d2f50:
    // 0x1d2f50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d2f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2f54:
    // 0x1d2f54: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
label_1d2f58:
    if (ctx->pc == 0x1D2F58u) {
        ctx->pc = 0x1D2F58u;
            // 0x1d2f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F5Cu;
        goto label_1d2f5c;
    }
    ctx->pc = 0x1D2F54u;
    {
        const bool branch_taken_0x1d2f54 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1D2F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F54u;
            // 0x1d2f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f54) {
            ctx->pc = 0x1D2F64u;
            goto label_1d2f64;
        }
    }
    ctx->pc = 0x1D2F5Cu;
label_1d2f5c:
    // 0x1d2f5c: 0x100000ac  b           . + 4 + (0xAC << 2)
label_1d2f60:
    if (ctx->pc == 0x1D2F60u) {
        ctx->pc = 0x1D2F60u;
            // 0x1d2f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F64u;
        goto label_1d2f64;
    }
    ctx->pc = 0x1D2F5Cu;
    {
        const bool branch_taken_0x1d2f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F5Cu;
            // 0x1d2f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f5c) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D2F64u;
label_1d2f64:
    // 0x1d2f64: 0xc0bafe8  jal         func_2EBFA0
label_1d2f68:
    if (ctx->pc == 0x1D2F68u) {
        ctx->pc = 0x1D2F6Cu;
        goto label_1d2f6c;
    }
    ctx->pc = 0x1D2F64u;
    SET_GPR_U32(ctx, 31, 0x1D2F6Cu);
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F6Cu; }
        if (ctx->pc != 0x1D2F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F6Cu; }
        if (ctx->pc != 0x1D2F6Cu) { return; }
    }
    ctx->pc = 0x1D2F6Cu;
label_1d2f6c:
    // 0x1d2f6c: 0x3401a1f0  ori         $at, $zero, 0xA1F0
    ctx->pc = 0x1d2f6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41456);
label_1d2f70:
    // 0x1d2f70: 0x3c03c214  lui         $v1, 0xC214
    ctx->pc = 0x1d2f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49684 << 16));
label_1d2f74:
    // 0x1d2f74: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x1d2f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2f78:
    // 0x1d2f78: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1d2f78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_1d2f7c:
    // 0x1d2f7c: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x1d2f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
label_1d2f80:
    // 0x1d2f80: 0x3401a200  ori         $at, $zero, 0xA200
    ctx->pc = 0x1d2f80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41472);
label_1d2f84:
    // 0x1d2f84: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1d2f84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2f88:
    // 0x1d2f88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d2f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d2f8c:
    // 0x1d2f8c: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1d2f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_1d2f90:
    // 0x1d2f90: 0x24a57b60  addiu       $a1, $a1, 0x7B60
    ctx->pc = 0x1d2f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31584));
label_1d2f94:
    // 0x1d2f94: 0xc0bb07c  jal         func_2EC1F0
label_1d2f98:
    if (ctx->pc == 0x1D2F98u) {
        ctx->pc = 0x1D2F98u;
            // 0x1d2f98: 0x3a13821  addu        $a3, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D2F9Cu;
        goto label_1d2f9c;
    }
    ctx->pc = 0x1D2F94u;
    SET_GPR_U32(ctx, 31, 0x1D2F9Cu);
    ctx->pc = 0x1D2F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F94u;
            // 0x1d2f98: 0x3a13821  addu        $a3, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC1F0u;
    if (runtime->hasFunction(0x2EC1F0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F9Cu; }
        if (ctx->pc != 0x1D2F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveCamera__14CCameraControlFP11CPadControlPfP6CCPolyi_0x2ec1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F9Cu; }
        if (ctx->pc != 0x1D2F9Cu) { return; }
    }
    ctx->pc = 0x1D2F9Cu;
label_1d2f9c:
    // 0x1d2f9c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d2f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d2fa0:
    // 0x1d2fa0: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x1d2fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1d2fa4:
    // 0x1d2fa4: 0xc0bb538  jal         func_2ED4E0
label_1d2fa8:
    if (ctx->pc == 0x1D2FA8u) {
        ctx->pc = 0x1D2FA8u;
            // 0x1d2fa8: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->pc = 0x1D2FACu;
        goto label_1d2fac;
    }
    ctx->pc = 0x1D2FA4u;
    SET_GPR_U32(ctx, 31, 0x1D2FACu);
    ctx->pc = 0x1D2FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2FA4u;
            // 0x1d2fa8: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2FACu; }
        if (ctx->pc != 0x1D2FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2FACu; }
        if (ctx->pc != 0x1D2FACu) { return; }
    }
    ctx->pc = 0x1D2FACu;
label_1d2fac:
    // 0x1d2fac: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_1d2fb0:
    if (ctx->pc == 0x1D2FB0u) {
        ctx->pc = 0x1D2FB4u;
        goto label_1d2fb4;
    }
    ctx->pc = 0x1D2FACu;
    {
        const bool branch_taken_0x1d2fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2fac) {
            ctx->pc = 0x1D30D4u;
            goto label_1d30d4;
        }
    }
    ctx->pc = 0x1D2FB4u;
label_1d2fb4:
    // 0x1d2fb4: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d2fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d2fb8:
    // 0x1d2fb8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2fbc:
    // 0x1d2fbc: 0x34214230  ori         $at, $at, 0x4230
    ctx->pc = 0x1d2fbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16944);
label_1d2fc0:
    // 0x1d2fc0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d2fc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d2fc4:
    // 0x1d2fc4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1d2fc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1d2fc8:
    // 0x1d2fc8: 0x320f809  jalr        $t9
label_1d2fcc:
    if (ctx->pc == 0x1D2FCCu) {
        ctx->pc = 0x1D2FCCu;
            // 0x1d2fcc: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D2FD0u;
        goto label_1d2fd0;
    }
    ctx->pc = 0x1D2FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D2FD0u);
        ctx->pc = 0x1D2FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2FC8u;
            // 0x1d2fcc: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2FD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2FD0u; }
            if (ctx->pc != 0x1D2FD0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2FD0u;
label_1d2fd0:
    // 0x1d2fd0: 0x8f828dd8  lw          $v0, -0x7228($gp)
    ctx->pc = 0x1d2fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d2fd4:
    // 0x1d2fd4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d2fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2fd8:
    // 0x1d2fd8: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d2fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d2fdc:
    // 0x1d2fdc: 0x84420772  lh          $v0, 0x772($v0)
    ctx->pc = 0x1d2fdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1906)));
label_1d2fe0:
    // 0x1d2fe0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_1d2fe4:
    if (ctx->pc == 0x1D2FE4u) {
        ctx->pc = 0x1D2FE4u;
            // 0x1d2fe4: 0xc4204234  lwc1        $f0, 0x4234($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1D2FE8u;
        goto label_1d2fe8;
    }
    ctx->pc = 0x1D2FE0u;
    {
        const bool branch_taken_0x1d2fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2FE0u;
            // 0x1d2fe4: 0xc4204234  lwc1        $f0, 0x4234($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2fe0) {
            ctx->pc = 0x1D3080u;
            goto label_1d3080;
        }
    }
    ctx->pc = 0x1D2FE8u;
label_1d2fe8:
    // 0x1d2fe8: 0x86020770  lh          $v0, 0x770($s0)
    ctx->pc = 0x1d2fe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1904)));
label_1d2fec:
    // 0x1d2fec: 0x4400024  bltz        $v0, . + 4 + (0x24 << 2)
label_1d2ff0:
    if (ctx->pc == 0x1D2FF0u) {
        ctx->pc = 0x1D2FF4u;
        goto label_1d2ff4;
    }
    ctx->pc = 0x1D2FECu;
    {
        const bool branch_taken_0x1d2fec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d2fec) {
            ctx->pc = 0x1D3080u;
            goto label_1d3080;
        }
    }
    ctx->pc = 0x1D2FF4u;
label_1d2ff4:
    // 0x1d2ff4: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1d2ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1d2ff8:
    // 0x1d2ff8: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1d2ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_1d2ffc:
    // 0x1d2ffc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d2ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d3000:
    // 0x1d3000: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d3004:
    // 0x1d3004: 0x8c440484  lw          $a0, 0x484($v0)
    ctx->pc = 0x1d3004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
label_1d3008:
    // 0x1d3008: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_1d300c:
    if (ctx->pc == 0x1D300Cu) {
        ctx->pc = 0x1D300Cu;
            // 0x1d300c: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->pc = 0x1D3010u;
        goto label_1d3010;
    }
    ctx->pc = 0x1D3008u;
    {
        const bool branch_taken_0x1d3008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D300Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3008u;
            // 0x1d300c: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3008) {
            ctx->pc = 0x1D3084u;
            goto label_1d3084;
        }
    }
    ctx->pc = 0x1D3010u;
label_1d3010:
    // 0x1d3010: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d3010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d3014:
    // 0x1d3014: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d3014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d3018:
    // 0x1d3018: 0x34214250  ori         $at, $at, 0x4250
    ctx->pc = 0x1d3018u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16976);
label_1d301c:
    // 0x1d301c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d301cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d3020:
    // 0x1d3020: 0x320f809  jalr        $t9
label_1d3024:
    if (ctx->pc == 0x1D3024u) {
        ctx->pc = 0x1D3024u;
            // 0x1d3024: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D3028u;
        goto label_1d3028;
    }
    ctx->pc = 0x1D3020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D3028u);
        ctx->pc = 0x1D3024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3020u;
            // 0x1d3024: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D3028u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D3028u; }
            if (ctx->pc != 0x1D3028u) { return; }
        }
        }
    }
    ctx->pc = 0x1D3028u;
label_1d3028:
    // 0x1d3028: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d3028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d302c:
    // 0x1d302c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d302cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d3030:
    // 0x1d3030: 0x34214240  ori         $at, $at, 0x4240
    ctx->pc = 0x1d3030u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16960);
label_1d3034:
    // 0x1d3034: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d3034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d3038:
    // 0x1d3038: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d3038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d303c:
    // 0x1d303c: 0x320f809  jalr        $t9
label_1d3040:
    if (ctx->pc == 0x1D3040u) {
        ctx->pc = 0x1D3040u;
            // 0x1d3040: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D3044u;
        goto label_1d3044;
    }
    ctx->pc = 0x1D303Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D3044u);
        ctx->pc = 0x1D3040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D303Cu;
            // 0x1d3040: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D3044u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D3044u; }
            if (ctx->pc != 0x1D3044u) { return; }
        }
        }
    }
    ctx->pc = 0x1D3044u;
label_1d3044:
    // 0x1d3044: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d3044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d3048:
    // 0x1d3048: 0x34214250  ori         $at, $at, 0x4250
    ctx->pc = 0x1d3048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16976);
label_1d304c:
    // 0x1d304c: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x1d304cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d3050:
    // 0x1d3050: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d3050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d3054:
    // 0x1d3054: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d3054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3058:
    // 0x1d3058: 0x34214240  ori         $at, $at, 0x4240
    ctx->pc = 0x1d3058u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16960);
label_1d305c:
    // 0x1d305c: 0xc041c3e  jal         func_1070F8
label_1d3060:
    if (ctx->pc == 0x1D3060u) {
        ctx->pc = 0x1D3060u;
            // 0x1d3060: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D3064u;
        goto label_1d3064;
    }
    ctx->pc = 0x1D305Cu;
    SET_GPR_U32(ctx, 31, 0x1D3064u);
    ctx->pc = 0x1D3060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D305Cu;
            // 0x1d3060: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3064u; }
        if (ctx->pc != 0x1D3064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3064u; }
        if (ctx->pc != 0x1D3064u) { return; }
    }
    ctx->pc = 0x1D3064u;
label_1d3064:
    // 0x1d3064: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d3064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d3068:
    // 0x1d3068: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d3068u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d306c:
    // 0x1d306c: 0xc42c4250  lwc1        $f12, 0x4250($at)
    ctx->pc = 0x1d306cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d3070:
    // 0x1d3070: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d3070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d3074:
    // 0x1d3074: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d3074u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1d3078:
    // 0x1d3078: 0xc047c76  jal         func_11F1D8
label_1d307c:
    if (ctx->pc == 0x1D307Cu) {
        ctx->pc = 0x1D307Cu;
            // 0x1d307c: 0xc42d4258  lwc1        $f13, 0x4258($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x1D3080u;
        goto label_1d3080;
    }
    ctx->pc = 0x1D3078u;
    SET_GPR_U32(ctx, 31, 0x1D3080u);
    ctx->pc = 0x1D307Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3078u;
            // 0x1d307c: 0xc42d4258  lwc1        $f13, 0x4258($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3080u; }
        if (ctx->pc != 0x1D3080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3080u; }
        if (ctx->pc != 0x1D3080u) { return; }
    }
    ctx->pc = 0x1D3080u;
label_1d3080:
    // 0x1d3080: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d3080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1d3084:
    // 0x1d3084: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d3084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d3088:
    // 0x1d3088: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d3088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d308c:
    // 0x1d308c: 0x0  nop
    ctx->pc = 0x1d308cu;
    // NOP
label_1d3090:
    // 0x1d3090: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d3090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d3094:
    // 0x1d3094: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d3094u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d3098:
    // 0x1d3098: 0x0  nop
    ctx->pc = 0x1d3098u;
    // NOP
label_1d309c:
    // 0x1d309c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1d30a0:
    if (ctx->pc == 0x1D30A0u) {
        ctx->pc = 0x1D30A0u;
            // 0x1d30a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D30A4u;
        goto label_1d30a4;
    }
    ctx->pc = 0x1D309Cu;
    {
        const bool branch_taken_0x1d309c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D30A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D309Cu;
            // 0x1d30a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d309c) {
            ctx->pc = 0x1D30B8u;
            goto label_1d30b8;
        }
    }
    ctx->pc = 0x1D30A4u;
label_1d30a4:
    // 0x1d30a4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d30a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d30a8:
    // 0x1d30a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d30a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d30ac:
    // 0x1d30ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d30acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d30b0:
    // 0x1d30b0: 0x0  nop
    ctx->pc = 0x1d30b0u;
    // NOP
label_1d30b4:
    // 0x1d30b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d30b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d30b8:
    // 0x1d30b8: 0xc0bb224  jal         func_2EC890
label_1d30bc:
    if (ctx->pc == 0x1D30BCu) {
        ctx->pc = 0x1D30BCu;
            // 0x1d30bc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1D30C0u;
        goto label_1d30c0;
    }
    ctx->pc = 0x1D30B8u;
    SET_GPR_U32(ctx, 31, 0x1D30C0u);
    ctx->pc = 0x1D30BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D30B8u;
            // 0x1d30bc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC890u;
    if (runtime->hasFunction(0x2EC890u)) {
        auto targetFn = runtime->lookupFunction(0x2EC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30C0u; }
        if (ctx->pc != 0x1D30C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotBack__14CCameraControlFf_0x2ec890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30C0u; }
        if (ctx->pc != 0x1D30C0u) { return; }
    }
    ctx->pc = 0x1D30C0u;
label_1d30c0:
    // 0x1d30c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d30c4:
    if (ctx->pc == 0x1D30C4u) {
        ctx->pc = 0x1D30C4u;
            // 0x1d30c4: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1D30C8u;
        goto label_1d30c8;
    }
    ctx->pc = 0x1D30C0u;
    {
        const bool branch_taken_0x1d30c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D30C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D30C0u;
            // 0x1d30c4: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30c0) {
            ctx->pc = 0x1D30D8u;
            goto label_1d30d8;
        }
    }
    ctx->pc = 0x1D30C8u;
label_1d30c8:
    // 0x1d30c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d30c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d30cc:
    // 0x1d30cc: 0xc074fe0  jal         func_1D3F80
label_1d30d0:
    if (ctx->pc == 0x1D30D0u) {
        ctx->pc = 0x1D30D0u;
            // 0x1d30d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D30D4u;
        goto label_1d30d4;
    }
    ctx->pc = 0x1D30CCu;
    SET_GPR_U32(ctx, 31, 0x1D30D4u);
    ctx->pc = 0x1D30D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D30CCu;
            // 0x1d30d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3F80u;
    if (runtime->hasFunction(0x1D3F80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30D4u; }
        if (ctx->pc != 0x1D30D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EyeCamera__FP9mgCCameraP11CCharacter2i_0x1d3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30D4u; }
        if (ctx->pc != 0x1D30D4u) { return; }
    }
    ctx->pc = 0x1D30D4u;
label_1d30d4:
    // 0x1d30d4: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d30d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d30d8:
    // 0x1d30d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d30d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d30dc:
    // 0x1d30dc: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x1d30dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
label_1d30e0:
    // 0x1d30e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d30e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d30e4:
    // 0x1d30e4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d30e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d30e8:
    // 0x1d30e8: 0x320f809  jalr        $t9
label_1d30ec:
    if (ctx->pc == 0x1D30ECu) {
        ctx->pc = 0x1D30ECu;
            // 0x1d30ec: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D30F0u;
        goto label_1d30f0;
    }
    ctx->pc = 0x1D30E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D30F0u);
        ctx->pc = 0x1D30ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D30E8u;
            // 0x1d30ec: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D30F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D30F0u; }
            if (ctx->pc != 0x1D30F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D30F0u;
label_1d30f0:
    // 0x1d30f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d30f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d30f4:
    // 0x1d30f4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d30f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d30f8:
    // 0x1d30f8: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x1d30f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
label_1d30fc:
    // 0x1d30fc: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1d30fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_1d3100:
    // 0x1d3100: 0xc0763f8  jal         func_1D8FE0
label_1d3104:
    if (ctx->pc == 0x1D3104u) {
        ctx->pc = 0x1D3104u;
            // 0x1d3104: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D3108u;
        goto label_1d3108;
    }
    ctx->pc = 0x1D3100u;
    SET_GPR_U32(ctx, 31, 0x1D3108u);
    ctx->pc = 0x1D3104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3100u;
            // 0x1d3104: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FE0u;
    if (runtime->hasFunction(0x1D8FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3108u; }
        if (ctx->pc != 0x1D3108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MinimapVisTest__11CAutoMapGenFPf_0x1d8fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3108u; }
        if (ctx->pc != 0x1D3108u) { return; }
    }
    ctx->pc = 0x1D3108u;
label_1d3108:
    // 0x1d3108: 0x83828e2c  lb          $v0, -0x71D4($gp)
    ctx->pc = 0x1d3108u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938156)));
label_1d310c:
    // 0x1d310c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1d3110:
    if (ctx->pc == 0x1D3110u) {
        ctx->pc = 0x1D3110u;
            // 0x1d3110: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1D3114u;
        goto label_1d3114;
    }
    ctx->pc = 0x1D310Cu;
    {
        const bool branch_taken_0x1d310c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D310Cu;
            // 0x1d3110: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d310c) {
            ctx->pc = 0x1D3120u;
            goto label_1d3120;
        }
    }
    ctx->pc = 0x1D3114u;
label_1d3114:
    // 0x1d3114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3118:
    // 0x1d3118: 0xaf808e28  sw          $zero, -0x71D8($gp)
    ctx->pc = 0x1d3118u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938152), GPR_U32(ctx, 0));
label_1d311c:
    // 0x1d311c: 0xa3828e2c  sb          $v0, -0x71D4($gp)
    ctx->pc = 0x1d311cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938156), (uint8_t)GPR_U32(ctx, 2));
label_1d3120:
    // 0x1d3120: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x1d3120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_1d3124:
    // 0x1d3124: 0xc052cfc  jal         func_14B3F0
label_1d3128:
    if (ctx->pc == 0x1D3128u) {
        ctx->pc = 0x1D3128u;
            // 0x1d3128: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D312Cu;
        goto label_1d312c;
    }
    ctx->pc = 0x1D3124u;
    SET_GPR_U32(ctx, 31, 0x1D312Cu);
    ctx->pc = 0x1D3128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3124u;
            // 0x1d3128: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3F0u;
    if (runtime->hasFunction(0x14B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D312Cu; }
        if (ctx->pc != 0x1D312Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On2__8CGamePadFi_0x14b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D312Cu; }
        if (ctx->pc != 0x1D312Cu) { return; }
    }
    ctx->pc = 0x1D312Cu;
label_1d312c:
    // 0x1d312c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d3130:
    if (ctx->pc == 0x1D3130u) {
        ctx->pc = 0x1D3134u;
        goto label_1d3134;
    }
    ctx->pc = 0x1D312Cu;
    {
        const bool branch_taken_0x1d312c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d312c) {
            ctx->pc = 0x1D3148u;
            goto label_1d3148;
        }
    }
    ctx->pc = 0x1D3134u;
label_1d3134:
    // 0x1d3134: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1d3134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1d3138:
    // 0x1d3138: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1d3138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1d313c:
    // 0x1d313c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d313cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3140:
    // 0x1d3140: 0xc0a1298  jal         func_284A60
label_1d3144:
    if (ctx->pc == 0x1D3144u) {
        ctx->pc = 0x1D3144u;
            // 0x1d3144: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x1D3148u;
        goto label_1d3148;
    }
    ctx->pc = 0x1D3140u;
    SET_GPR_U32(ctx, 31, 0x1D3148u);
    ctx->pc = 0x1D3144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3140u;
            // 0x1d3144: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284A60u;
    if (runtime->hasFunction(0x284A60u)) {
        auto targetFn = runtime->lookupFunction(0x284A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3148u; }
        if (ctx->pc != 0x1D3148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddTime__6CSceneFf_0x284a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3148u; }
        if (ctx->pc != 0x1D3148u) { return; }
    }
    ctx->pc = 0x1D3148u;
label_1d3148:
    // 0x1d3148: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d3148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d314c:
    // 0x1d314c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1d314cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1d3150:
    // 0x1d3150: 0xc052cfc  jal         func_14B3F0
label_1d3154:
    if (ctx->pc == 0x1D3154u) {
        ctx->pc = 0x1D3154u;
            // 0x1d3154: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D3158u;
        goto label_1d3158;
    }
    ctx->pc = 0x1D3150u;
    SET_GPR_U32(ctx, 31, 0x1D3158u);
    ctx->pc = 0x1D3154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3150u;
            // 0x1d3154: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3F0u;
    if (runtime->hasFunction(0x14B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3158u; }
        if (ctx->pc != 0x1D3158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On2__8CGamePadFi_0x14b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3158u; }
        if (ctx->pc != 0x1D3158u) { return; }
    }
    ctx->pc = 0x1D3158u;
label_1d3158:
    // 0x1d3158: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d315c:
    if (ctx->pc == 0x1D315Cu) {
        ctx->pc = 0x1D3160u;
        goto label_1d3160;
    }
    ctx->pc = 0x1D3158u;
    {
        const bool branch_taken_0x1d3158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3158) {
            ctx->pc = 0x1D3174u;
            goto label_1d3174;
        }
    }
    ctx->pc = 0x1D3160u;
label_1d3160:
    // 0x1d3160: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1d3160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
label_1d3164:
    // 0x1d3164: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1d3164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1d3168:
    // 0x1d3168: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d3168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d316c:
    // 0x1d316c: 0xc0a1298  jal         func_284A60
label_1d3170:
    if (ctx->pc == 0x1D3170u) {
        ctx->pc = 0x1D3170u;
            // 0x1d3170: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x1D3174u;
        goto label_1d3174;
    }
    ctx->pc = 0x1D316Cu;
    SET_GPR_U32(ctx, 31, 0x1D3174u);
    ctx->pc = 0x1D3170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D316Cu;
            // 0x1d3170: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284A60u;
    if (runtime->hasFunction(0x284A60u)) {
        auto targetFn = runtime->lookupFunction(0x284A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3174u; }
        if (ctx->pc != 0x1D3174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddTime__6CSceneFf_0x284a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3174u; }
        if (ctx->pc != 0x1D3174u) { return; }
    }
    ctx->pc = 0x1D3174u;
label_1d3174:
    // 0x1d3174: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d3174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d3178:
    // 0x1d3178: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x1d3178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1d317c:
    // 0x1d317c: 0xc052d1c  jal         func_14B470
label_1d3180:
    if (ctx->pc == 0x1D3180u) {
        ctx->pc = 0x1D3180u;
            // 0x1d3180: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D3184u;
        goto label_1d3184;
    }
    ctx->pc = 0x1D317Cu;
    SET_GPR_U32(ctx, 31, 0x1D3184u);
    ctx->pc = 0x1D3180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D317Cu;
            // 0x1d3180: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3184u; }
        if (ctx->pc != 0x1D3184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3184u; }
        if (ctx->pc != 0x1D3184u) { return; }
    }
    ctx->pc = 0x1D3184u;
label_1d3184:
    // 0x1d3184: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1d3188:
    if (ctx->pc == 0x1D3188u) {
        ctx->pc = 0x1D318Cu;
        goto label_1d318c;
    }
    ctx->pc = 0x1D3184u;
    {
        const bool branch_taken_0x1d3184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3184) {
            ctx->pc = 0x1D31C0u;
            goto label_1d31c0;
        }
    }
    ctx->pc = 0x1D318Cu;
label_1d318c:
    // 0x1d318c: 0x8f908dac  lw          $s0, -0x7254($gp)
    ctx->pc = 0x1d318cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d3190:
    // 0x1d3190: 0xc0a248c  jal         func_289230
label_1d3194:
    if (ctx->pc == 0x1D3194u) {
        ctx->pc = 0x1D3194u;
            // 0x1d3194: 0xc60c2f6c  lwc1        $f12, 0x2F6C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1D3198u;
        goto label_1d3198;
    }
    ctx->pc = 0x1D3190u;
    SET_GPR_U32(ctx, 31, 0x1D3198u);
    ctx->pc = 0x1D3194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3190u;
            // 0x1d3194: 0xc60c2f6c  lwc1        $f12, 0x2F6C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3198u; }
        if (ctx->pc != 0x1D3198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3198u; }
        if (ctx->pc != 0x1D3198u) { return; }
    }
    ctx->pc = 0x1D3198u;
label_1d3198:
    // 0x1d3198: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1d319c:
    if (ctx->pc == 0x1D319Cu) {
        ctx->pc = 0x1D319Cu;
            // 0x1d319c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->pc = 0x1D31A0u;
        goto label_1d31a0;
    }
    ctx->pc = 0x1D3198u;
    {
        const bool branch_taken_0x1d3198 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D319Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3198u;
            // 0x1d319c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3198) {
            ctx->pc = 0x1D31A8u;
            goto label_1d31a8;
        }
    }
    ctx->pc = 0x1D31A0u;
label_1d31a0:
    // 0x1d31a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d31a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d31a4:
    // 0x1d31a4: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1d31a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_1d31a8:
    // 0x1d31a8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d31a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1d31ac:
    // 0x1d31ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d31acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d31b0:
    // 0x1d31b0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1d31b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1d31b4:
    // 0x1d31b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d31b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d31b8:
    // 0x1d31b8: 0xc0a1270  jal         func_2849C0
label_1d31bc:
    if (ctx->pc == 0x1D31BCu) {
        ctx->pc = 0x1D31BCu;
            // 0x1d31bc: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D31C0u;
        goto label_1d31c0;
    }
    ctx->pc = 0x1D31B8u;
    SET_GPR_U32(ctx, 31, 0x1D31C0u);
    ctx->pc = 0x1D31BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D31B8u;
            // 0x1d31bc: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849C0u;
    if (runtime->hasFunction(0x2849C0u)) {
        auto targetFn = runtime->lookupFunction(0x2849C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D31C0u; }
        if (ctx->pc != 0x1D31C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTime__6CSceneFf_0x2849c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D31C0u; }
        if (ctx->pc != 0x1D31C0u) { return; }
    }
    ctx->pc = 0x1D31C0u;
label_1d31c0:
    // 0x1d31c0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d31c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d31c4:
    // 0x1d31c4: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x1d31c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1d31c8:
    // 0x1d31c8: 0xc052d1c  jal         func_14B470
label_1d31cc:
    if (ctx->pc == 0x1D31CCu) {
        ctx->pc = 0x1D31CCu;
            // 0x1d31cc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D31D0u;
        goto label_1d31d0;
    }
    ctx->pc = 0x1D31C8u;
    SET_GPR_U32(ctx, 31, 0x1D31D0u);
    ctx->pc = 0x1D31CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D31C8u;
            // 0x1d31cc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D31D0u; }
        if (ctx->pc != 0x1D31D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D31D0u; }
        if (ctx->pc != 0x1D31D0u) { return; }
    }
    ctx->pc = 0x1D31D0u;
label_1d31d0:
    // 0x1d31d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d31d4:
    if (ctx->pc == 0x1D31D4u) {
        ctx->pc = 0x1D31D8u;
        goto label_1d31d8;
    }
    ctx->pc = 0x1D31D0u;
    {
        const bool branch_taken_0x1d31d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d31d0) {
            ctx->pc = 0x1D31ECu;
            goto label_1d31ec;
        }
    }
    ctx->pc = 0x1D31D8u;
label_1d31d8:
    // 0x1d31d8: 0x8f828e28  lw          $v0, -0x71D8($gp)
    ctx->pc = 0x1d31d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938152)));
label_1d31dc:
    // 0x1d31dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d31dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d31e0:
    // 0x1d31e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d31e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1d31e4:
    // 0x1d31e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d31e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1d31e8:
    // 0x1d31e8: 0xaf828e28  sw          $v0, -0x71D8($gp)
    ctx->pc = 0x1d31e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938152), GPR_U32(ctx, 2));
label_1d31ec:
    // 0x1d31ec: 0x8f828e28  lw          $v0, -0x71D8($gp)
    ctx->pc = 0x1d31ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938152)));
label_1d31f0:
    // 0x1d31f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d31f4:
    if (ctx->pc == 0x1D31F4u) {
        ctx->pc = 0x1D31F4u;
            // 0x1d31f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D31F8u;
        goto label_1d31f8;
    }
    ctx->pc = 0x1D31F0u;
    {
        const bool branch_taken_0x1d31f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D31F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D31F0u;
            // 0x1d31f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d31f0) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D31F8u;
label_1d31f8:
    // 0x1d31f8: 0x3c023b44  lui         $v0, 0x3B44
    ctx->pc = 0x1d31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
label_1d31fc:
    // 0x1d31fc: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x1d31fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
label_1d3200:
    // 0x1d3200: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d3200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3204:
    // 0x1d3204: 0xc0a1298  jal         func_284A60
label_1d3208:
    if (ctx->pc == 0x1D3208u) {
        ctx->pc = 0x1D3208u;
            // 0x1d3208: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x1D320Cu;
        goto label_1d320c;
    }
    ctx->pc = 0x1D3204u;
    SET_GPR_U32(ctx, 31, 0x1D320Cu);
    ctx->pc = 0x1D3208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3204u;
            // 0x1d3208: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284A60u;
    if (runtime->hasFunction(0x284A60u)) {
        auto targetFn = runtime->lookupFunction(0x284A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D320Cu; }
        if (ctx->pc != 0x1D320Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddTime__6CSceneFf_0x284a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D320Cu; }
        if (ctx->pc != 0x1D320Cu) { return; }
    }
    ctx->pc = 0x1D320Cu;
label_1d320c:
    // 0x1d320c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d320cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3210:
    // 0x1d3210: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1d3210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1d3214:
    // 0x1d3214: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1d3214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1d3218:
    // 0x1d3218: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d3218u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d321c:
    // 0x1d321c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1d3220:
    // 0x1d3220: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d3220u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d3224:
    // 0x1d3224: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d3224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1d3228:
    // 0x1d3228: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d3228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d322c:
    // 0x1d322c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d3230:
    // 0x1d3230: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d3230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d3234:
    // 0x1d3234: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d3234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d3238:
    // 0x1d3238: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d3238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d323c:
    // 0x1d323c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d323cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d3240:
    // 0x1d3240: 0x34214270  ori         $at, $at, 0x4270
    ctx->pc = 0x1d3240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17008);
label_1d3244:
    // 0x1d3244: 0x3e00008  jr          $ra
label_1d3248:
    if (ctx->pc == 0x1D3248u) {
        ctx->pc = 0x1D3248u;
            // 0x1d3248: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D324Cu;
        goto label_fallthrough_0x1d3244;
    }
    ctx->pc = 0x1D3244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3244u;
            // 0x1d3248: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d3244:
    ctx->pc = 0x1D324Cu;
}
