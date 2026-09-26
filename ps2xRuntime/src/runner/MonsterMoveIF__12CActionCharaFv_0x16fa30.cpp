#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MonsterMoveIF__12CActionCharaFv
// Address: 0x16fa30 - 0x170100
void MonsterMoveIF__12CActionCharaFv_0x16fa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MonsterMoveIF__12CActionCharaFv_0x16fa30");
#endif

    switch (ctx->pc) {
        case 0x16fa30u: goto label_16fa30;
        case 0x16fa34u: goto label_16fa34;
        case 0x16fa38u: goto label_16fa38;
        case 0x16fa3cu: goto label_16fa3c;
        case 0x16fa40u: goto label_16fa40;
        case 0x16fa44u: goto label_16fa44;
        case 0x16fa48u: goto label_16fa48;
        case 0x16fa4cu: goto label_16fa4c;
        case 0x16fa50u: goto label_16fa50;
        case 0x16fa54u: goto label_16fa54;
        case 0x16fa58u: goto label_16fa58;
        case 0x16fa5cu: goto label_16fa5c;
        case 0x16fa60u: goto label_16fa60;
        case 0x16fa64u: goto label_16fa64;
        case 0x16fa68u: goto label_16fa68;
        case 0x16fa6cu: goto label_16fa6c;
        case 0x16fa70u: goto label_16fa70;
        case 0x16fa74u: goto label_16fa74;
        case 0x16fa78u: goto label_16fa78;
        case 0x16fa7cu: goto label_16fa7c;
        case 0x16fa80u: goto label_16fa80;
        case 0x16fa84u: goto label_16fa84;
        case 0x16fa88u: goto label_16fa88;
        case 0x16fa8cu: goto label_16fa8c;
        case 0x16fa90u: goto label_16fa90;
        case 0x16fa94u: goto label_16fa94;
        case 0x16fa98u: goto label_16fa98;
        case 0x16fa9cu: goto label_16fa9c;
        case 0x16faa0u: goto label_16faa0;
        case 0x16faa4u: goto label_16faa4;
        case 0x16faa8u: goto label_16faa8;
        case 0x16faacu: goto label_16faac;
        case 0x16fab0u: goto label_16fab0;
        case 0x16fab4u: goto label_16fab4;
        case 0x16fab8u: goto label_16fab8;
        case 0x16fabcu: goto label_16fabc;
        case 0x16fac0u: goto label_16fac0;
        case 0x16fac4u: goto label_16fac4;
        case 0x16fac8u: goto label_16fac8;
        case 0x16faccu: goto label_16facc;
        case 0x16fad0u: goto label_16fad0;
        case 0x16fad4u: goto label_16fad4;
        case 0x16fad8u: goto label_16fad8;
        case 0x16fadcu: goto label_16fadc;
        case 0x16fae0u: goto label_16fae0;
        case 0x16fae4u: goto label_16fae4;
        case 0x16fae8u: goto label_16fae8;
        case 0x16faecu: goto label_16faec;
        case 0x16faf0u: goto label_16faf0;
        case 0x16faf4u: goto label_16faf4;
        case 0x16faf8u: goto label_16faf8;
        case 0x16fafcu: goto label_16fafc;
        case 0x16fb00u: goto label_16fb00;
        case 0x16fb04u: goto label_16fb04;
        case 0x16fb08u: goto label_16fb08;
        case 0x16fb0cu: goto label_16fb0c;
        case 0x16fb10u: goto label_16fb10;
        case 0x16fb14u: goto label_16fb14;
        case 0x16fb18u: goto label_16fb18;
        case 0x16fb1cu: goto label_16fb1c;
        case 0x16fb20u: goto label_16fb20;
        case 0x16fb24u: goto label_16fb24;
        case 0x16fb28u: goto label_16fb28;
        case 0x16fb2cu: goto label_16fb2c;
        case 0x16fb30u: goto label_16fb30;
        case 0x16fb34u: goto label_16fb34;
        case 0x16fb38u: goto label_16fb38;
        case 0x16fb3cu: goto label_16fb3c;
        case 0x16fb40u: goto label_16fb40;
        case 0x16fb44u: goto label_16fb44;
        case 0x16fb48u: goto label_16fb48;
        case 0x16fb4cu: goto label_16fb4c;
        case 0x16fb50u: goto label_16fb50;
        case 0x16fb54u: goto label_16fb54;
        case 0x16fb58u: goto label_16fb58;
        case 0x16fb5cu: goto label_16fb5c;
        case 0x16fb60u: goto label_16fb60;
        case 0x16fb64u: goto label_16fb64;
        case 0x16fb68u: goto label_16fb68;
        case 0x16fb6cu: goto label_16fb6c;
        case 0x16fb70u: goto label_16fb70;
        case 0x16fb74u: goto label_16fb74;
        case 0x16fb78u: goto label_16fb78;
        case 0x16fb7cu: goto label_16fb7c;
        case 0x16fb80u: goto label_16fb80;
        case 0x16fb84u: goto label_16fb84;
        case 0x16fb88u: goto label_16fb88;
        case 0x16fb8cu: goto label_16fb8c;
        case 0x16fb90u: goto label_16fb90;
        case 0x16fb94u: goto label_16fb94;
        case 0x16fb98u: goto label_16fb98;
        case 0x16fb9cu: goto label_16fb9c;
        case 0x16fba0u: goto label_16fba0;
        case 0x16fba4u: goto label_16fba4;
        case 0x16fba8u: goto label_16fba8;
        case 0x16fbacu: goto label_16fbac;
        case 0x16fbb0u: goto label_16fbb0;
        case 0x16fbb4u: goto label_16fbb4;
        case 0x16fbb8u: goto label_16fbb8;
        case 0x16fbbcu: goto label_16fbbc;
        case 0x16fbc0u: goto label_16fbc0;
        case 0x16fbc4u: goto label_16fbc4;
        case 0x16fbc8u: goto label_16fbc8;
        case 0x16fbccu: goto label_16fbcc;
        case 0x16fbd0u: goto label_16fbd0;
        case 0x16fbd4u: goto label_16fbd4;
        case 0x16fbd8u: goto label_16fbd8;
        case 0x16fbdcu: goto label_16fbdc;
        case 0x16fbe0u: goto label_16fbe0;
        case 0x16fbe4u: goto label_16fbe4;
        case 0x16fbe8u: goto label_16fbe8;
        case 0x16fbecu: goto label_16fbec;
        case 0x16fbf0u: goto label_16fbf0;
        case 0x16fbf4u: goto label_16fbf4;
        case 0x16fbf8u: goto label_16fbf8;
        case 0x16fbfcu: goto label_16fbfc;
        case 0x16fc00u: goto label_16fc00;
        case 0x16fc04u: goto label_16fc04;
        case 0x16fc08u: goto label_16fc08;
        case 0x16fc0cu: goto label_16fc0c;
        case 0x16fc10u: goto label_16fc10;
        case 0x16fc14u: goto label_16fc14;
        case 0x16fc18u: goto label_16fc18;
        case 0x16fc1cu: goto label_16fc1c;
        case 0x16fc20u: goto label_16fc20;
        case 0x16fc24u: goto label_16fc24;
        case 0x16fc28u: goto label_16fc28;
        case 0x16fc2cu: goto label_16fc2c;
        case 0x16fc30u: goto label_16fc30;
        case 0x16fc34u: goto label_16fc34;
        case 0x16fc38u: goto label_16fc38;
        case 0x16fc3cu: goto label_16fc3c;
        case 0x16fc40u: goto label_16fc40;
        case 0x16fc44u: goto label_16fc44;
        case 0x16fc48u: goto label_16fc48;
        case 0x16fc4cu: goto label_16fc4c;
        case 0x16fc50u: goto label_16fc50;
        case 0x16fc54u: goto label_16fc54;
        case 0x16fc58u: goto label_16fc58;
        case 0x16fc5cu: goto label_16fc5c;
        case 0x16fc60u: goto label_16fc60;
        case 0x16fc64u: goto label_16fc64;
        case 0x16fc68u: goto label_16fc68;
        case 0x16fc6cu: goto label_16fc6c;
        case 0x16fc70u: goto label_16fc70;
        case 0x16fc74u: goto label_16fc74;
        case 0x16fc78u: goto label_16fc78;
        case 0x16fc7cu: goto label_16fc7c;
        case 0x16fc80u: goto label_16fc80;
        case 0x16fc84u: goto label_16fc84;
        case 0x16fc88u: goto label_16fc88;
        case 0x16fc8cu: goto label_16fc8c;
        case 0x16fc90u: goto label_16fc90;
        case 0x16fc94u: goto label_16fc94;
        case 0x16fc98u: goto label_16fc98;
        case 0x16fc9cu: goto label_16fc9c;
        case 0x16fca0u: goto label_16fca0;
        case 0x16fca4u: goto label_16fca4;
        case 0x16fca8u: goto label_16fca8;
        case 0x16fcacu: goto label_16fcac;
        case 0x16fcb0u: goto label_16fcb0;
        case 0x16fcb4u: goto label_16fcb4;
        case 0x16fcb8u: goto label_16fcb8;
        case 0x16fcbcu: goto label_16fcbc;
        case 0x16fcc0u: goto label_16fcc0;
        case 0x16fcc4u: goto label_16fcc4;
        case 0x16fcc8u: goto label_16fcc8;
        case 0x16fcccu: goto label_16fccc;
        case 0x16fcd0u: goto label_16fcd0;
        case 0x16fcd4u: goto label_16fcd4;
        case 0x16fcd8u: goto label_16fcd8;
        case 0x16fcdcu: goto label_16fcdc;
        case 0x16fce0u: goto label_16fce0;
        case 0x16fce4u: goto label_16fce4;
        case 0x16fce8u: goto label_16fce8;
        case 0x16fcecu: goto label_16fcec;
        case 0x16fcf0u: goto label_16fcf0;
        case 0x16fcf4u: goto label_16fcf4;
        case 0x16fcf8u: goto label_16fcf8;
        case 0x16fcfcu: goto label_16fcfc;
        case 0x16fd00u: goto label_16fd00;
        case 0x16fd04u: goto label_16fd04;
        case 0x16fd08u: goto label_16fd08;
        case 0x16fd0cu: goto label_16fd0c;
        case 0x16fd10u: goto label_16fd10;
        case 0x16fd14u: goto label_16fd14;
        case 0x16fd18u: goto label_16fd18;
        case 0x16fd1cu: goto label_16fd1c;
        case 0x16fd20u: goto label_16fd20;
        case 0x16fd24u: goto label_16fd24;
        case 0x16fd28u: goto label_16fd28;
        case 0x16fd2cu: goto label_16fd2c;
        case 0x16fd30u: goto label_16fd30;
        case 0x16fd34u: goto label_16fd34;
        case 0x16fd38u: goto label_16fd38;
        case 0x16fd3cu: goto label_16fd3c;
        case 0x16fd40u: goto label_16fd40;
        case 0x16fd44u: goto label_16fd44;
        case 0x16fd48u: goto label_16fd48;
        case 0x16fd4cu: goto label_16fd4c;
        case 0x16fd50u: goto label_16fd50;
        case 0x16fd54u: goto label_16fd54;
        case 0x16fd58u: goto label_16fd58;
        case 0x16fd5cu: goto label_16fd5c;
        case 0x16fd60u: goto label_16fd60;
        case 0x16fd64u: goto label_16fd64;
        case 0x16fd68u: goto label_16fd68;
        case 0x16fd6cu: goto label_16fd6c;
        case 0x16fd70u: goto label_16fd70;
        case 0x16fd74u: goto label_16fd74;
        case 0x16fd78u: goto label_16fd78;
        case 0x16fd7cu: goto label_16fd7c;
        case 0x16fd80u: goto label_16fd80;
        case 0x16fd84u: goto label_16fd84;
        case 0x16fd88u: goto label_16fd88;
        case 0x16fd8cu: goto label_16fd8c;
        case 0x16fd90u: goto label_16fd90;
        case 0x16fd94u: goto label_16fd94;
        case 0x16fd98u: goto label_16fd98;
        case 0x16fd9cu: goto label_16fd9c;
        case 0x16fda0u: goto label_16fda0;
        case 0x16fda4u: goto label_16fda4;
        case 0x16fda8u: goto label_16fda8;
        case 0x16fdacu: goto label_16fdac;
        case 0x16fdb0u: goto label_16fdb0;
        case 0x16fdb4u: goto label_16fdb4;
        case 0x16fdb8u: goto label_16fdb8;
        case 0x16fdbcu: goto label_16fdbc;
        case 0x16fdc0u: goto label_16fdc0;
        case 0x16fdc4u: goto label_16fdc4;
        case 0x16fdc8u: goto label_16fdc8;
        case 0x16fdccu: goto label_16fdcc;
        case 0x16fdd0u: goto label_16fdd0;
        case 0x16fdd4u: goto label_16fdd4;
        case 0x16fdd8u: goto label_16fdd8;
        case 0x16fddcu: goto label_16fddc;
        case 0x16fde0u: goto label_16fde0;
        case 0x16fde4u: goto label_16fde4;
        case 0x16fde8u: goto label_16fde8;
        case 0x16fdecu: goto label_16fdec;
        case 0x16fdf0u: goto label_16fdf0;
        case 0x16fdf4u: goto label_16fdf4;
        case 0x16fdf8u: goto label_16fdf8;
        case 0x16fdfcu: goto label_16fdfc;
        case 0x16fe00u: goto label_16fe00;
        case 0x16fe04u: goto label_16fe04;
        case 0x16fe08u: goto label_16fe08;
        case 0x16fe0cu: goto label_16fe0c;
        case 0x16fe10u: goto label_16fe10;
        case 0x16fe14u: goto label_16fe14;
        case 0x16fe18u: goto label_16fe18;
        case 0x16fe1cu: goto label_16fe1c;
        case 0x16fe20u: goto label_16fe20;
        case 0x16fe24u: goto label_16fe24;
        case 0x16fe28u: goto label_16fe28;
        case 0x16fe2cu: goto label_16fe2c;
        case 0x16fe30u: goto label_16fe30;
        case 0x16fe34u: goto label_16fe34;
        case 0x16fe38u: goto label_16fe38;
        case 0x16fe3cu: goto label_16fe3c;
        case 0x16fe40u: goto label_16fe40;
        case 0x16fe44u: goto label_16fe44;
        case 0x16fe48u: goto label_16fe48;
        case 0x16fe4cu: goto label_16fe4c;
        case 0x16fe50u: goto label_16fe50;
        case 0x16fe54u: goto label_16fe54;
        case 0x16fe58u: goto label_16fe58;
        case 0x16fe5cu: goto label_16fe5c;
        case 0x16fe60u: goto label_16fe60;
        case 0x16fe64u: goto label_16fe64;
        case 0x16fe68u: goto label_16fe68;
        case 0x16fe6cu: goto label_16fe6c;
        case 0x16fe70u: goto label_16fe70;
        case 0x16fe74u: goto label_16fe74;
        case 0x16fe78u: goto label_16fe78;
        case 0x16fe7cu: goto label_16fe7c;
        case 0x16fe80u: goto label_16fe80;
        case 0x16fe84u: goto label_16fe84;
        case 0x16fe88u: goto label_16fe88;
        case 0x16fe8cu: goto label_16fe8c;
        case 0x16fe90u: goto label_16fe90;
        case 0x16fe94u: goto label_16fe94;
        case 0x16fe98u: goto label_16fe98;
        case 0x16fe9cu: goto label_16fe9c;
        case 0x16fea0u: goto label_16fea0;
        case 0x16fea4u: goto label_16fea4;
        case 0x16fea8u: goto label_16fea8;
        case 0x16feacu: goto label_16feac;
        case 0x16feb0u: goto label_16feb0;
        case 0x16feb4u: goto label_16feb4;
        case 0x16feb8u: goto label_16feb8;
        case 0x16febcu: goto label_16febc;
        case 0x16fec0u: goto label_16fec0;
        case 0x16fec4u: goto label_16fec4;
        case 0x16fec8u: goto label_16fec8;
        case 0x16feccu: goto label_16fecc;
        case 0x16fed0u: goto label_16fed0;
        case 0x16fed4u: goto label_16fed4;
        case 0x16fed8u: goto label_16fed8;
        case 0x16fedcu: goto label_16fedc;
        case 0x16fee0u: goto label_16fee0;
        case 0x16fee4u: goto label_16fee4;
        case 0x16fee8u: goto label_16fee8;
        case 0x16feecu: goto label_16feec;
        case 0x16fef0u: goto label_16fef0;
        case 0x16fef4u: goto label_16fef4;
        case 0x16fef8u: goto label_16fef8;
        case 0x16fefcu: goto label_16fefc;
        case 0x16ff00u: goto label_16ff00;
        case 0x16ff04u: goto label_16ff04;
        case 0x16ff08u: goto label_16ff08;
        case 0x16ff0cu: goto label_16ff0c;
        case 0x16ff10u: goto label_16ff10;
        case 0x16ff14u: goto label_16ff14;
        case 0x16ff18u: goto label_16ff18;
        case 0x16ff1cu: goto label_16ff1c;
        case 0x16ff20u: goto label_16ff20;
        case 0x16ff24u: goto label_16ff24;
        case 0x16ff28u: goto label_16ff28;
        case 0x16ff2cu: goto label_16ff2c;
        case 0x16ff30u: goto label_16ff30;
        case 0x16ff34u: goto label_16ff34;
        case 0x16ff38u: goto label_16ff38;
        case 0x16ff3cu: goto label_16ff3c;
        case 0x16ff40u: goto label_16ff40;
        case 0x16ff44u: goto label_16ff44;
        case 0x16ff48u: goto label_16ff48;
        case 0x16ff4cu: goto label_16ff4c;
        case 0x16ff50u: goto label_16ff50;
        case 0x16ff54u: goto label_16ff54;
        case 0x16ff58u: goto label_16ff58;
        case 0x16ff5cu: goto label_16ff5c;
        case 0x16ff60u: goto label_16ff60;
        case 0x16ff64u: goto label_16ff64;
        case 0x16ff68u: goto label_16ff68;
        case 0x16ff6cu: goto label_16ff6c;
        case 0x16ff70u: goto label_16ff70;
        case 0x16ff74u: goto label_16ff74;
        case 0x16ff78u: goto label_16ff78;
        case 0x16ff7cu: goto label_16ff7c;
        case 0x16ff80u: goto label_16ff80;
        case 0x16ff84u: goto label_16ff84;
        case 0x16ff88u: goto label_16ff88;
        case 0x16ff8cu: goto label_16ff8c;
        case 0x16ff90u: goto label_16ff90;
        case 0x16ff94u: goto label_16ff94;
        case 0x16ff98u: goto label_16ff98;
        case 0x16ff9cu: goto label_16ff9c;
        case 0x16ffa0u: goto label_16ffa0;
        case 0x16ffa4u: goto label_16ffa4;
        case 0x16ffa8u: goto label_16ffa8;
        case 0x16ffacu: goto label_16ffac;
        case 0x16ffb0u: goto label_16ffb0;
        case 0x16ffb4u: goto label_16ffb4;
        case 0x16ffb8u: goto label_16ffb8;
        case 0x16ffbcu: goto label_16ffbc;
        case 0x16ffc0u: goto label_16ffc0;
        case 0x16ffc4u: goto label_16ffc4;
        case 0x16ffc8u: goto label_16ffc8;
        case 0x16ffccu: goto label_16ffcc;
        case 0x16ffd0u: goto label_16ffd0;
        case 0x16ffd4u: goto label_16ffd4;
        case 0x16ffd8u: goto label_16ffd8;
        case 0x16ffdcu: goto label_16ffdc;
        case 0x16ffe0u: goto label_16ffe0;
        case 0x16ffe4u: goto label_16ffe4;
        case 0x16ffe8u: goto label_16ffe8;
        case 0x16ffecu: goto label_16ffec;
        case 0x16fff0u: goto label_16fff0;
        case 0x16fff4u: goto label_16fff4;
        case 0x16fff8u: goto label_16fff8;
        case 0x16fffcu: goto label_16fffc;
        case 0x170000u: goto label_170000;
        case 0x170004u: goto label_170004;
        case 0x170008u: goto label_170008;
        case 0x17000cu: goto label_17000c;
        case 0x170010u: goto label_170010;
        case 0x170014u: goto label_170014;
        case 0x170018u: goto label_170018;
        case 0x17001cu: goto label_17001c;
        case 0x170020u: goto label_170020;
        case 0x170024u: goto label_170024;
        case 0x170028u: goto label_170028;
        case 0x17002cu: goto label_17002c;
        case 0x170030u: goto label_170030;
        case 0x170034u: goto label_170034;
        case 0x170038u: goto label_170038;
        case 0x17003cu: goto label_17003c;
        case 0x170040u: goto label_170040;
        case 0x170044u: goto label_170044;
        case 0x170048u: goto label_170048;
        case 0x17004cu: goto label_17004c;
        case 0x170050u: goto label_170050;
        case 0x170054u: goto label_170054;
        case 0x170058u: goto label_170058;
        case 0x17005cu: goto label_17005c;
        case 0x170060u: goto label_170060;
        case 0x170064u: goto label_170064;
        case 0x170068u: goto label_170068;
        case 0x17006cu: goto label_17006c;
        case 0x170070u: goto label_170070;
        case 0x170074u: goto label_170074;
        case 0x170078u: goto label_170078;
        case 0x17007cu: goto label_17007c;
        case 0x170080u: goto label_170080;
        case 0x170084u: goto label_170084;
        case 0x170088u: goto label_170088;
        case 0x17008cu: goto label_17008c;
        case 0x170090u: goto label_170090;
        case 0x170094u: goto label_170094;
        case 0x170098u: goto label_170098;
        case 0x17009cu: goto label_17009c;
        case 0x1700a0u: goto label_1700a0;
        case 0x1700a4u: goto label_1700a4;
        case 0x1700a8u: goto label_1700a8;
        case 0x1700acu: goto label_1700ac;
        case 0x1700b0u: goto label_1700b0;
        case 0x1700b4u: goto label_1700b4;
        case 0x1700b8u: goto label_1700b8;
        case 0x1700bcu: goto label_1700bc;
        case 0x1700c0u: goto label_1700c0;
        case 0x1700c4u: goto label_1700c4;
        case 0x1700c8u: goto label_1700c8;
        case 0x1700ccu: goto label_1700cc;
        case 0x1700d0u: goto label_1700d0;
        case 0x1700d4u: goto label_1700d4;
        case 0x1700d8u: goto label_1700d8;
        case 0x1700dcu: goto label_1700dc;
        case 0x1700e0u: goto label_1700e0;
        case 0x1700e4u: goto label_1700e4;
        case 0x1700e8u: goto label_1700e8;
        case 0x1700ecu: goto label_1700ec;
        case 0x1700f0u: goto label_1700f0;
        case 0x1700f4u: goto label_1700f4;
        case 0x1700f8u: goto label_1700f8;
        case 0x1700fcu: goto label_1700fc;
        default: break;
    }

    ctx->pc = 0x16fa30u;

label_16fa30:
    // 0x16fa30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16fa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_16fa34:
    // 0x16fa34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16fa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_16fa38:
    // 0x16fa38: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16fa38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_16fa3c:
    // 0x16fa3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16fa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_16fa40:
    // 0x16fa40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16fa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_16fa44:
    // 0x16fa44: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x16fa44u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_16fa48:
    // 0x16fa48: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x16fa48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_16fa4c:
    // 0x16fa4c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16fa4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_16fa50:
    // 0x16fa50: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16fa50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16fa54:
    // 0x16fa54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16fa54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fa58:
    // 0x16fa58: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16fa58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16fa5c:
    // 0x16fa5c: 0x320f809  jalr        $t9
label_16fa60:
    if (ctx->pc == 0x16FA60u) {
        ctx->pc = 0x16FA60u;
            // 0x16fa60: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16FA64u;
        goto label_16fa64;
    }
    ctx->pc = 0x16FA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FA64u);
        ctx->pc = 0x16FA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FA5Cu;
            // 0x16fa60: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16FA64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16FA64u; }
            if (ctx->pc != 0x16FA64u) { return; }
        }
        }
    }
    ctx->pc = 0x16FA64u;
label_16fa64:
    // 0x16fa64: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16fa64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16fa68:
    // 0x16fa68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16fa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16fa6c:
    // 0x16fa6c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x16fa6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_16fa70:
    // 0x16fa70: 0x320f809  jalr        $t9
label_16fa74:
    if (ctx->pc == 0x16FA74u) {
        ctx->pc = 0x16FA74u;
            // 0x16fa74: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x16FA78u;
        goto label_16fa78;
    }
    ctx->pc = 0x16FA70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FA78u);
        ctx->pc = 0x16FA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FA70u;
            // 0x16fa74: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16FA78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16FA78u; }
            if (ctx->pc != 0x16FA78u) { return; }
        }
        }
    }
    ctx->pc = 0x16FA78u;
label_16fa78:
    // 0x16fa78: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x16fa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_16fa7c:
    // 0x16fa7c: 0xc041c5c  jal         func_107170
label_16fa80:
    if (ctx->pc == 0x16FA80u) {
        ctx->pc = 0x16FA80u;
            // 0x16fa80: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x16FA84u;
        goto label_16fa84;
    }
    ctx->pc = 0x16FA7Cu;
    SET_GPR_U32(ctx, 31, 0x16FA84u);
    ctx->pc = 0x16FA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FA7Cu;
            // 0x16fa80: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA84u; }
        if (ctx->pc != 0x16FA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA84u; }
        if (ctx->pc != 0x16FA84u) { return; }
    }
    ctx->pc = 0x16FA84u;
label_16fa84:
    // 0x16fa84: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16fa84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16fa88:
    // 0x16fa88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16fa88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16fa8c:
    // 0x16fa8c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16fa8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16fa90:
    // 0x16fa90: 0x320f809  jalr        $t9
label_16fa94:
    if (ctx->pc == 0x16FA94u) {
        ctx->pc = 0x16FA94u;
            // 0x16fa94: 0x26250660  addiu       $a1, $s1, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
        ctx->pc = 0x16FA98u;
        goto label_16fa98;
    }
    ctx->pc = 0x16FA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FA98u);
        ctx->pc = 0x16FA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FA90u;
            // 0x16fa94: 0x26250660  addiu       $a1, $s1, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16FA98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16FA98u; }
            if (ctx->pc != 0x16FA98u) { return; }
        }
        }
    }
    ctx->pc = 0x16FA98u;
label_16fa98:
    // 0x16fa98: 0xa220076d  sb          $zero, 0x76D($s1)
    ctx->pc = 0x16fa98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1901), (uint8_t)GPR_U32(ctx, 0));
label_16fa9c:
    // 0x16fa9c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x16fa9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_16faa0:
    // 0x16faa0: 0xc04c678  jal         func_1319E0
label_16faa4:
    if (ctx->pc == 0x16FAA4u) {
        ctx->pc = 0x16FAA4u;
            // 0x16faa4: 0x8c24d434  lw          $a0, -0x2BCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956084)));
        ctx->pc = 0x16FAA8u;
        goto label_16faa8;
    }
    ctx->pc = 0x16FAA0u;
    SET_GPR_U32(ctx, 31, 0x16FAA8u);
    ctx->pc = 0x16FAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FAA0u;
            // 0x16faa4: 0x8c24d434  lw          $a0, -0x2BCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956084)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FAA8u; }
        if (ctx->pc != 0x16FAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FAA8u; }
        if (ctx->pc != 0x16FAA8u) { return; }
    }
    ctx->pc = 0x16FAA8u;
label_16faa8:
    // 0x16faa8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16faac:
    // 0x16faac: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x16faacu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_16fab0:
    // 0x16fab0: 0xc052cc0  jal         func_14B300
label_16fab4:
    if (ctx->pc == 0x16FAB4u) {
        ctx->pc = 0x16FAB4u;
            // 0x16fab4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16FAB8u;
        goto label_16fab8;
    }
    ctx->pc = 0x16FAB0u;
    SET_GPR_U32(ctx, 31, 0x16FAB8u);
    ctx->pc = 0x16FAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FAB0u;
            // 0x16fab4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FAB8u; }
        if (ctx->pc != 0x16FAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FAB8u; }
        if (ctx->pc != 0x16FAB8u) { return; }
    }
    ctx->pc = 0x16FAB8u;
label_16fab8:
    // 0x16fab8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16fab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16fabc:
    // 0x16fabc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x16fabcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_16fac0:
    // 0x16fac0: 0xc052cd0  jal         func_14B340
label_16fac4:
    if (ctx->pc == 0x16FAC4u) {
        ctx->pc = 0x16FAC4u;
            // 0x16fac4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16FAC8u;
        goto label_16fac8;
    }
    ctx->pc = 0x16FAC0u;
    SET_GPR_U32(ctx, 31, 0x16FAC8u);
    ctx->pc = 0x16FAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FAC0u;
            // 0x16fac4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FAC8u; }
        if (ctx->pc != 0x16FAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FAC8u; }
        if (ctx->pc != 0x16FAC8u) { return; }
    }
    ctx->pc = 0x16FAC8u;
label_16fac8:
    // 0x16fac8: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x16fac8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_16facc:
    // 0x16facc: 0xc047964  jal         func_11E590
label_16fad0:
    if (ctx->pc == 0x16FAD0u) {
        ctx->pc = 0x16FAD0u;
            // 0x16fad0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16FAD4u;
        goto label_16fad4;
    }
    ctx->pc = 0x16FACCu;
    SET_GPR_U32(ctx, 31, 0x16FAD4u);
    ctx->pc = 0x16FAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FACCu;
            // 0x16fad0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FAD4u; }
        if (ctx->pc != 0x16FAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FAD4u; }
        if (ctx->pc != 0x16FAD4u) { return; }
    }
    ctx->pc = 0x16FAD4u;
label_16fad4:
    // 0x16fad4: 0x4600b502  mul.s       $f20, $f22, $f0
    ctx->pc = 0x16fad4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_16fad8:
    // 0x16fad8: 0xc047a42  jal         func_11E908
label_16fadc:
    if (ctx->pc == 0x16FADCu) {
        ctx->pc = 0x16FADCu;
            // 0x16fadc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16FAE0u;
        goto label_16fae0;
    }
    ctx->pc = 0x16FAD8u;
    SET_GPR_U32(ctx, 31, 0x16FAE0u);
    ctx->pc = 0x16FADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FAD8u;
            // 0x16fadc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FAE0u; }
        if (ctx->pc != 0x16FAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FAE0u; }
        if (ctx->pc != 0x16FAE0u) { return; }
    }
    ctx->pc = 0x16FAE0u;
label_16fae0:
    // 0x16fae0: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x16fae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_16fae4:
    // 0x16fae4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x16fae4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_16fae8:
    // 0x16fae8: 0xc047a42  jal         func_11E908
label_16faec:
    if (ctx->pc == 0x16FAECu) {
        ctx->pc = 0x16FAECu;
            // 0x16faec: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16FAF0u;
        goto label_16faf0;
    }
    ctx->pc = 0x16FAE8u;
    SET_GPR_U32(ctx, 31, 0x16FAF0u);
    ctx->pc = 0x16FAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FAE8u;
            // 0x16faec: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FAF0u; }
        if (ctx->pc != 0x16FAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FAF0u; }
        if (ctx->pc != 0x16FAF0u) { return; }
    }
    ctx->pc = 0x16FAF0u;
label_16faf0:
    // 0x16faf0: 0x4600b047  neg.s       $f1, $f22
    ctx->pc = 0x16faf0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[22]);
label_16faf4:
    // 0x16faf4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16faf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_16faf8:
    // 0x16faf8: 0xc047964  jal         func_11E590
label_16fafc:
    if (ctx->pc == 0x16FAFCu) {
        ctx->pc = 0x16FAFCu;
            // 0x16fafc: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x16FB00u;
        goto label_16fb00;
    }
    ctx->pc = 0x16FAF8u;
    SET_GPR_U32(ctx, 31, 0x16FB00u);
    ctx->pc = 0x16FAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FAF8u;
            // 0x16fafc: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB00u; }
        if (ctx->pc != 0x16FB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB00u; }
        if (ctx->pc != 0x16FB00u) { return; }
    }
    ctx->pc = 0x16FB00u;
label_16fb00:
    // 0x16fb00: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x16fb00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_16fb04:
    // 0x16fb04: 0xc0683a8  jal         func_1A0EA0
label_16fb08:
    if (ctx->pc == 0x16FB08u) {
        ctx->pc = 0x16FB08u;
            // 0x16fb08: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x16FB0Cu;
        goto label_16fb0c;
    }
    ctx->pc = 0x16FB04u;
    SET_GPR_U32(ctx, 31, 0x16FB0Cu);
    ctx->pc = 0x16FB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB04u;
            // 0x16fb08: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB0Cu; }
        if (ctx->pc != 0x16FB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB0Cu; }
        if (ctx->pc != 0x16FB0Cu) { return; }
    }
    ctx->pc = 0x16FB0Cu;
label_16fb0c:
    // 0x16fb0c: 0xc068140  jal         func_1A0500
label_16fb10:
    if (ctx->pc == 0x16FB10u) {
        ctx->pc = 0x16FB10u;
            // 0x16fb10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16FB14u;
        goto label_16fb14;
    }
    ctx->pc = 0x16FB0Cu;
    SET_GPR_U32(ctx, 31, 0x16FB14u);
    ctx->pc = 0x16FB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB0Cu;
            // 0x16fb10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0500u;
    if (runtime->hasFunction(0x1A0500u)) {
        auto targetFn = runtime->lookupFunction(0x1A0500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB14u; }
        if (ctx->pc != 0x16FB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttr__16CBattleCharaInfoFv_0x1a0500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB14u; }
        if (ctx->pc != 0x16FB14u) { return; }
    }
    ctx->pc = 0x16FB14u;
label_16fb14:
    // 0x16fb14: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x16fb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_16fb18:
    // 0x16fb18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_16fb1c:
    if (ctx->pc == 0x16FB1Cu) {
        ctx->pc = 0x16FB20u;
        goto label_16fb20;
    }
    ctx->pc = 0x16FB18u;
    {
        const bool branch_taken_0x16fb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fb18) {
            ctx->pc = 0x16FB34u;
            goto label_16fb34;
        }
    }
    ctx->pc = 0x16FB20u;
label_16fb20:
    // 0x16fb20: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16fb24:
    // 0x16fb24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16fb24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16fb28:
    // 0x16fb28: 0x0  nop
    ctx->pc = 0x16fb28u;
    // NOP
label_16fb2c:
    // 0x16fb2c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x16fb2cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_16fb30:
    // 0x16fb30: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x16fb30u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_16fb34:
    // 0x16fb34: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x16fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_16fb38:
    // 0x16fb38: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x16fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_16fb3c:
    // 0x16fb3c: 0x24424c20  addiu       $v0, $v0, 0x4C20
    ctx->pc = 0x16fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19488));
label_16fb40:
    // 0x16fb40: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x16fb40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_16fb44:
    // 0x16fb44: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16fb44u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_16fb48:
    // 0x16fb48: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x16fb48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_16fb4c:
    // 0x16fb4c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x16fb4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_16fb50:
    // 0x16fb50: 0x86220772  lh          $v0, 0x772($s1)
    ctx->pc = 0x16fb50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1906)));
label_16fb54:
    // 0x16fb54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_16fb58:
    if (ctx->pc == 0x16FB58u) {
        ctx->pc = 0x16FB58u;
            // 0x16fb58: 0xc6360794  lwc1        $f22, 0x794($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->pc = 0x16FB5Cu;
        goto label_16fb5c;
    }
    ctx->pc = 0x16FB54u;
    {
        const bool branch_taken_0x16fb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB54u;
            // 0x16fb58: 0xc6360794  lwc1        $f22, 0x794($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb54) {
            ctx->pc = 0x16FB70u;
            goto label_16fb70;
        }
    }
    ctx->pc = 0x16FB5Cu;
label_16fb5c:
    // 0x16fb5c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x16fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_16fb60:
    // 0x16fb60: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16fb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_16fb64:
    // 0x16fb64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16fb64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16fb68:
    // 0x16fb68: 0x0  nop
    ctx->pc = 0x16fb68u;
    // NOP
label_16fb6c:
    // 0x16fb6c: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x16fb6cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_16fb70:
    // 0x16fb70: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x16fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_16fb74:
    // 0x16fb74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16fb74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16fb78:
    // 0x16fb78: 0xc63700a0  lwc1        $f23, 0xA0($s1)
    ctx->pc = 0x16fb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_16fb7c:
    // 0x16fb7c: 0x4600b003  div.s       $f0, $f22, $f0
    ctx->pc = 0x16fb7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[0]); }
label_16fb80:
    // 0x16fb80: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16fb84:
    // 0x16fb84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16fb84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16fb88:
    // 0x16fb88: 0x0  nop
    ctx->pc = 0x16fb88u;
    // NOP
label_16fb8c:
    // 0x16fb8c: 0x0  nop
    ctx->pc = 0x16fb8cu;
    // NOP
label_16fb90:
    // 0x16fb90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16fb90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16fb94:
    // 0x16fb94: 0x0  nop
    ctx->pc = 0x16fb94u;
    // NOP
label_16fb98:
    // 0x16fb98: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_16fb9c:
    if (ctx->pc == 0x16FB9Cu) {
        ctx->pc = 0x16FBA0u;
        goto label_16fba0;
    }
    ctx->pc = 0x16FB98u;
    {
        const bool branch_taken_0x16fb98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fb98) {
            ctx->pc = 0x16FBA4u;
            goto label_16fba4;
        }
    }
    ctx->pc = 0x16FBA0u;
label_16fba0:
    // 0x16fba0: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x16fba0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_16fba4:
    // 0x16fba4: 0x4600bdc0  add.s       $f23, $f23, $f0
    ctx->pc = 0x16fba4u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_16fba8:
    // 0x16fba8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16fbac:
    // 0x16fbac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16fbacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16fbb0:
    // 0x16fbb0: 0x0  nop
    ctx->pc = 0x16fbb0u;
    // NOP
label_16fbb4:
    // 0x16fbb4: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x16fbb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16fbb8:
    // 0x16fbb8: 0x0  nop
    ctx->pc = 0x16fbb8u;
    // NOP
label_16fbbc:
    // 0x16fbbc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_16fbc0:
    if (ctx->pc == 0x16FBC0u) {
        ctx->pc = 0x16FBC0u;
            // 0x16fbc0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x16FBC4u;
        goto label_16fbc4;
    }
    ctx->pc = 0x16FBBCu;
    {
        const bool branch_taken_0x16fbbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FBBCu;
            // 0x16fbc0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fbbc) {
            ctx->pc = 0x16FBC8u;
            goto label_16fbc8;
        }
    }
    ctx->pc = 0x16FBC4u;
label_16fbc4:
    // 0x16fbc4: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x16fbc4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_16fbc8:
    // 0x16fbc8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x16fbc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_16fbcc:
    // 0x16fbcc: 0xc047c76  jal         func_11F1D8
label_16fbd0:
    if (ctx->pc == 0x16FBD0u) {
        ctx->pc = 0x16FBD0u;
            // 0x16fbd0: 0xe63700a0  swc1        $f23, 0xA0($s1) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
        ctx->pc = 0x16FBD4u;
        goto label_16fbd4;
    }
    ctx->pc = 0x16FBCCu;
    SET_GPR_U32(ctx, 31, 0x16FBD4u);
    ctx->pc = 0x16FBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FBCCu;
            // 0x16fbd0: 0xe63700a0  swc1        $f23, 0xA0($s1) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FBD4u; }
        if (ctx->pc != 0x16FBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FBD4u; }
        if (ctx->pc != 0x16FBD4u) { return; }
    }
    ctx->pc = 0x16FBD4u;
label_16fbd4:
    // 0x16fbd4: 0xc7818990  lwc1        $f1, -0x7670($gp)
    ctx->pc = 0x16fbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16fbd8:
    // 0x16fbd8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x16fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_16fbdc:
    // 0x16fbdc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16fbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16fbe0:
    // 0x16fbe0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16fbe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_16fbe4:
    // 0x16fbe4: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16fbe4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16fbe8:
    // 0x16fbe8: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x16fbe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16fbec:
    // 0x16fbec: 0x0  nop
    ctx->pc = 0x16fbecu;
    // NOP
label_16fbf0:
    // 0x16fbf0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_16fbf4:
    if (ctx->pc == 0x16FBF4u) {
        ctx->pc = 0x16FBF4u;
            // 0x16fbf4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x16FBF8u;
        goto label_16fbf8;
    }
    ctx->pc = 0x16FBF0u;
    {
        const bool branch_taken_0x16fbf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FBF0u;
            // 0x16fbf4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fbf0) {
            ctx->pc = 0x16FC10u;
            goto label_16fc10;
        }
    }
    ctx->pc = 0x16FBF8u;
label_16fbf8:
    // 0x16fbf8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16fbfc:
    // 0x16fbfc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16fbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16fc00:
    // 0x16fc00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16fc00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16fc04:
    // 0x16fc04: 0x0  nop
    ctx->pc = 0x16fc04u;
    // NOP
label_16fc08:
    // 0x16fc08: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x16fc08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_16fc0c:
    // 0x16fc0c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x16fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_16fc10:
    // 0x16fc10: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16fc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16fc14:
    // 0x16fc14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16fc14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16fc18:
    // 0x16fc18: 0x0  nop
    ctx->pc = 0x16fc18u;
    // NOP
label_16fc1c:
    // 0x16fc1c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x16fc1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16fc20:
    // 0x16fc20: 0x0  nop
    ctx->pc = 0x16fc20u;
    // NOP
label_16fc24:
    // 0x16fc24: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16fc28:
    if (ctx->pc == 0x16FC28u) {
        ctx->pc = 0x16FC28u;
            // 0x16fc28: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->pc = 0x16FC2Cu;
        goto label_16fc2c;
    }
    ctx->pc = 0x16FC24u;
    {
        const bool branch_taken_0x16fc24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FC24u;
            // 0x16fc28: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc24) {
            ctx->pc = 0x16FC3Cu;
            goto label_16fc3c;
        }
    }
    ctx->pc = 0x16FC2Cu;
label_16fc2c:
    // 0x16fc2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16fc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16fc30:
    // 0x16fc30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16fc30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16fc34:
    // 0x16fc34: 0x0  nop
    ctx->pc = 0x16fc34u;
    // NOP
label_16fc38:
    // 0x16fc38: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x16fc38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_16fc3c:
    // 0x16fc3c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16fc3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16fc40:
    // 0x16fc40: 0x0  nop
    ctx->pc = 0x16fc40u;
    // NOP
label_16fc44:
    // 0x16fc44: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x16fc44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16fc48:
    // 0x16fc48: 0x0  nop
    ctx->pc = 0x16fc48u;
    // NOP
label_16fc4c:
    // 0x16fc4c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16fc50:
    if (ctx->pc == 0x16FC50u) {
        ctx->pc = 0x16FC54u;
        goto label_16fc54;
    }
    ctx->pc = 0x16FC4Cu;
    {
        const bool branch_taken_0x16fc4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fc4c) {
            ctx->pc = 0x16FC58u;
            goto label_16fc58;
        }
    }
    ctx->pc = 0x16FC54u;
label_16fc54:
    // 0x16fc54: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x16fc54u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_16fc58:
    // 0x16fc58: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x16fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_16fc5c:
    // 0x16fc5c: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x16fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_16fc60:
    // 0x16fc60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16fc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16fc64:
    // 0x16fc64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16fc64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16fc68:
    // 0x16fc68: 0x0  nop
    ctx->pc = 0x16fc68u;
    // NOP
label_16fc6c:
    // 0x16fc6c: 0xe7808990  swc1        $f0, -0x7670($gp)
    ctx->pc = 0x16fc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936976), bits); }
label_16fc70:
    // 0x16fc70: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x16fc70u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_16fc74:
    // 0x16fc74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16fc78:
    // 0x16fc78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16fc78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16fc7c:
    // 0x16fc7c: 0x0  nop
    ctx->pc = 0x16fc7cu;
    // NOP
label_16fc80:
    // 0x16fc80: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x16fc80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16fc84:
    // 0x16fc84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16fc84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16fc88:
    // 0x16fc88: 0x0  nop
    ctx->pc = 0x16fc88u;
    // NOP
label_16fc8c:
    // 0x16fc8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16fc8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16fc90:
    // 0x16fc90: 0x0  nop
    ctx->pc = 0x16fc90u;
    // NOP
label_16fc94:
    // 0x16fc94: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_16fc98:
    if (ctx->pc == 0x16FC98u) {
        ctx->pc = 0x16FC9Cu;
        goto label_16fc9c;
    }
    ctx->pc = 0x16FC94u;
    {
        const bool branch_taken_0x16fc94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fc94) {
            ctx->pc = 0x16FCA0u;
            goto label_16fca0;
        }
    }
    ctx->pc = 0x16FC9Cu;
label_16fc9c:
    // 0x16fc9c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x16fc9cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_16fca0:
    // 0x16fca0: 0x4601bdc1  sub.s       $f23, $f23, $f1
    ctx->pc = 0x16fca0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
label_16fca4:
    // 0x16fca4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16fca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16fca8:
    // 0x16fca8: 0x0  nop
    ctx->pc = 0x16fca8u;
    // NOP
label_16fcac:
    // 0x16fcac: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x16fcacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16fcb0:
    // 0x16fcb0: 0x0  nop
    ctx->pc = 0x16fcb0u;
    // NOP
label_16fcb4:
    // 0x16fcb4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16fcb8:
    if (ctx->pc == 0x16FCB8u) {
        ctx->pc = 0x16FCBCu;
        goto label_16fcbc;
    }
    ctx->pc = 0x16FCB4u;
    {
        const bool branch_taken_0x16fcb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fcb4) {
            ctx->pc = 0x16FCC0u;
            goto label_16fcc0;
        }
    }
    ctx->pc = 0x16FCBCu;
label_16fcbc:
    // 0x16fcbc: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x16fcbcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_16fcc0:
    // 0x16fcc0: 0xe63700a0  swc1        $f23, 0xA0($s1)
    ctx->pc = 0x16fcc0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
label_16fcc4:
    // 0x16fcc4: 0x27b00068  addiu       $s0, $sp, 0x68
    ctx->pc = 0x16fcc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_16fcc8:
    // 0x16fcc8: 0xc7828760  lwc1        $f2, -0x78A0($gp)
    ctx->pc = 0x16fcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16fccc:
    // 0x16fccc: 0x4616a042  mul.s       $f1, $f20, $f22
    ctx->pc = 0x16fcccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_16fcd0:
    // 0x16fcd0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16fcd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_16fcd4:
    // 0x16fcd4: 0x4616a802  mul.s       $f0, $f21, $f22
    ctx->pc = 0x16fcd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
label_16fcd8:
    // 0x16fcd8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x16fcd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_16fcdc:
    // 0x16fcdc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16fcdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_16fce0:
    // 0x16fce0: 0x4601b842  mul.s       $f1, $f23, $f1
    ctx->pc = 0x16fce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
label_16fce4:
    // 0x16fce4: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x16fce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_16fce8:
    // 0x16fce8: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x16fce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_16fcec:
    // 0x16fcec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16fcecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16fcf0:
    // 0x16fcf0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x16fcf0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_16fcf4:
    // 0x16fcf4: 0xc047c76  jal         func_11F1D8
label_16fcf8:
    if (ctx->pc == 0x16FCF8u) {
        ctx->pc = 0x16FCF8u;
            // 0x16fcf8: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x16FCFCu;
        goto label_16fcfc;
    }
    ctx->pc = 0x16FCF4u;
    SET_GPR_U32(ctx, 31, 0x16FCFCu);
    ctx->pc = 0x16FCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FCF4u;
            // 0x16fcf8: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FCFCu; }
        if (ctx->pc != 0x16FCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FCFCu; }
        if (ctx->pc != 0x16FCFCu) { return; }
    }
    ctx->pc = 0x16FCFCu;
label_16fcfc:
    // 0x16fcfc: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x16fcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16fd00:
    // 0x16fd00: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x16fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_16fd04:
    // 0x16fd04: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16fd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16fd08:
    // 0x16fd08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16fd08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16fd0c:
    // 0x16fd0c: 0x0  nop
    ctx->pc = 0x16fd0cu;
    // NOP
label_16fd10:
    // 0x16fd10: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x16fd10u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_16fd14:
    // 0x16fd14: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x16fd14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16fd18:
    // 0x16fd18: 0x0  nop
    ctx->pc = 0x16fd18u;
    // NOP
label_16fd1c:
    // 0x16fd1c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_16fd20:
    if (ctx->pc == 0x16FD20u) {
        ctx->pc = 0x16FD20u;
            // 0x16fd20: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x16FD24u;
        goto label_16fd24;
    }
    ctx->pc = 0x16FD1Cu;
    {
        const bool branch_taken_0x16fd1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FD1Cu;
            // 0x16fd20: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd1c) {
            ctx->pc = 0x16FD3Cu;
            goto label_16fd3c;
        }
    }
    ctx->pc = 0x16FD24u;
label_16fd24:
    // 0x16fd24: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16fd28:
    // 0x16fd28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16fd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16fd2c:
    // 0x16fd2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16fd2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16fd30:
    // 0x16fd30: 0x0  nop
    ctx->pc = 0x16fd30u;
    // NOP
label_16fd34:
    // 0x16fd34: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x16fd34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_16fd38:
    // 0x16fd38: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x16fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_16fd3c:
    // 0x16fd3c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16fd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16fd40:
    // 0x16fd40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16fd40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16fd44:
    // 0x16fd44: 0x0  nop
    ctx->pc = 0x16fd44u;
    // NOP
label_16fd48:
    // 0x16fd48: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16fd48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16fd4c:
    // 0x16fd4c: 0x0  nop
    ctx->pc = 0x16fd4cu;
    // NOP
label_16fd50:
    // 0x16fd50: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16fd54:
    if (ctx->pc == 0x16FD54u) {
        ctx->pc = 0x16FD54u;
            // 0x16fd54: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->pc = 0x16FD58u;
        goto label_16fd58;
    }
    ctx->pc = 0x16FD50u;
    {
        const bool branch_taken_0x16fd50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FD50u;
            // 0x16fd54: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd50) {
            ctx->pc = 0x16FD68u;
            goto label_16fd68;
        }
    }
    ctx->pc = 0x16FD58u;
label_16fd58:
    // 0x16fd58: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16fd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16fd5c:
    // 0x16fd5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16fd5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16fd60:
    // 0x16fd60: 0x0  nop
    ctx->pc = 0x16fd60u;
    // NOP
label_16fd64:
    // 0x16fd64: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x16fd64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_16fd68:
    // 0x16fd68: 0xc62107bc  lwc1        $f1, 0x7BC($s1)
    ctx->pc = 0x16fd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16fd6c:
    // 0x16fd6c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x16fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_16fd70:
    // 0x16fd70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16fd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16fd74:
    // 0x16fd74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16fd74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16fd78:
    // 0x16fd78: 0x0  nop
    ctx->pc = 0x16fd78u;
    // NOP
label_16fd7c:
    // 0x16fd7c: 0x460208c1  sub.s       $f3, $f1, $f2
    ctx->pc = 0x16fd7cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_16fd80:
    // 0x16fd80: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x16fd80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16fd84:
    // 0x16fd84: 0x0  nop
    ctx->pc = 0x16fd84u;
    // NOP
label_16fd88:
    // 0x16fd88: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_16fd8c:
    if (ctx->pc == 0x16FD8Cu) {
        ctx->pc = 0x16FD8Cu;
            // 0x16fd8c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x16FD90u;
        goto label_16fd90;
    }
    ctx->pc = 0x16FD88u;
    {
        const bool branch_taken_0x16fd88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FD88u;
            // 0x16fd8c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd88) {
            ctx->pc = 0x16FDA8u;
            goto label_16fda8;
        }
    }
    ctx->pc = 0x16FD90u;
label_16fd90:
    // 0x16fd90: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16fd94:
    // 0x16fd94: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16fd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16fd98:
    // 0x16fd98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16fd98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16fd9c:
    // 0x16fd9c: 0x0  nop
    ctx->pc = 0x16fd9cu;
    // NOP
label_16fda0:
    // 0x16fda0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x16fda0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_16fda4:
    // 0x16fda4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x16fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_16fda8:
    // 0x16fda8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16fda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16fdac:
    // 0x16fdac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16fdacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16fdb0:
    // 0x16fdb0: 0x0  nop
    ctx->pc = 0x16fdb0u;
    // NOP
label_16fdb4:
    // 0x16fdb4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x16fdb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16fdb8:
    // 0x16fdb8: 0x0  nop
    ctx->pc = 0x16fdb8u;
    // NOP
label_16fdbc:
    // 0x16fdbc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16fdc0:
    if (ctx->pc == 0x16FDC0u) {
        ctx->pc = 0x16FDC0u;
            // 0x16fdc0: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->pc = 0x16FDC4u;
        goto label_16fdc4;
    }
    ctx->pc = 0x16FDBCu;
    {
        const bool branch_taken_0x16fdbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FDBCu;
            // 0x16fdc0: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fdbc) {
            ctx->pc = 0x16FDD4u;
            goto label_16fdd4;
        }
    }
    ctx->pc = 0x16FDC4u;
label_16fdc4:
    // 0x16fdc4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16fdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16fdc8:
    // 0x16fdc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16fdc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16fdcc:
    // 0x16fdcc: 0x0  nop
    ctx->pc = 0x16fdccu;
    // NOP
label_16fdd0:
    // 0x16fdd0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x16fdd0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_16fdd4:
    // 0x16fdd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16fdd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16fdd8:
    // 0x16fdd8: 0x0  nop
    ctx->pc = 0x16fdd8u;
    // NOP
label_16fddc:
    // 0x16fddc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x16fddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16fde0:
    // 0x16fde0: 0x0  nop
    ctx->pc = 0x16fde0u;
    // NOP
label_16fde4:
    // 0x16fde4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16fde8:
    if (ctx->pc == 0x16FDE8u) {
        ctx->pc = 0x16FDECu;
        goto label_16fdec;
    }
    ctx->pc = 0x16FDE4u;
    {
        const bool branch_taken_0x16fde4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fde4) {
            ctx->pc = 0x16FDF0u;
            goto label_16fdf0;
        }
    }
    ctx->pc = 0x16FDECu;
label_16fdec:
    // 0x16fdec: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x16fdecu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_16fdf0:
    // 0x16fdf0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x16fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_16fdf4:
    // 0x16fdf4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x16fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_16fdf8:
    // 0x16fdf8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16fdf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_16fdfc:
    // 0x16fdfc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16fdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_16fe00:
    // 0x16fe00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16fe00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16fe04:
    // 0x16fe04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16fe04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16fe08:
    // 0x16fe08: 0x0  nop
    ctx->pc = 0x16fe08u;
    // NOP
label_16fe0c:
    // 0x16fe0c: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x16fe0cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
label_16fe10:
    // 0x16fe10: 0x0  nop
    ctx->pc = 0x16fe10u;
    // NOP
label_16fe14:
    // 0x16fe14: 0x0  nop
    ctx->pc = 0x16fe14u;
    // NOP
label_16fe18:
    // 0x16fe18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16fe18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16fe1c:
    // 0x16fe1c: 0x0  nop
    ctx->pc = 0x16fe1cu;
    // NOP
label_16fe20:
    // 0x16fe20: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16fe24:
    if (ctx->pc == 0x16FE24u) {
        ctx->pc = 0x16FE28u;
        goto label_16fe28;
    }
    ctx->pc = 0x16FE20u;
    {
        const bool branch_taken_0x16fe20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fe20) {
            ctx->pc = 0x16FE38u;
            goto label_16fe38;
        }
    }
    ctx->pc = 0x16FE28u;
label_16fe28:
    // 0x16fe28: 0x8e2207c0  lw          $v0, 0x7C0($s1)
    ctx->pc = 0x16fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
label_16fe2c:
    // 0x16fe2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16fe30:
    // 0x16fe30: 0x10000003  b           . + 4 + (0x3 << 2)
label_16fe34:
    if (ctx->pc == 0x16FE34u) {
        ctx->pc = 0x16FE34u;
            // 0x16fe34: 0xae2207c0  sw          $v0, 0x7C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1984), GPR_U32(ctx, 2));
        ctx->pc = 0x16FE38u;
        goto label_16fe38;
    }
    ctx->pc = 0x16FE30u;
    {
        const bool branch_taken_0x16fe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FE30u;
            // 0x16fe34: 0xae2207c0  sw          $v0, 0x7C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1984), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe30) {
            ctx->pc = 0x16FE40u;
            goto label_16fe40;
        }
    }
    ctx->pc = 0x16FE38u;
label_16fe38:
    // 0x16fe38: 0xae2007c0  sw          $zero, 0x7C0($s1)
    ctx->pc = 0x16fe38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1984), GPR_U32(ctx, 0));
label_16fe3c:
    // 0x16fe3c: 0xe62207bc  swc1        $f2, 0x7BC($s1)
    ctx->pc = 0x16fe3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1980), bits); }
label_16fe40:
    // 0x16fe40: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16fe40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16fe44:
    // 0x16fe44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16fe44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fe48:
    // 0x16fe48: 0xc052cf0  jal         func_14B3C0
label_16fe4c:
    if (ctx->pc == 0x16FE4Cu) {
        ctx->pc = 0x16FE4Cu;
            // 0x16fe4c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16FE50u;
        goto label_16fe50;
    }
    ctx->pc = 0x16FE48u;
    SET_GPR_U32(ctx, 31, 0x16FE50u);
    ctx->pc = 0x16FE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FE48u;
            // 0x16fe4c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FE50u; }
        if (ctx->pc != 0x16FE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FE50u; }
        if (ctx->pc != 0x16FE50u) { return; }
    }
    ctx->pc = 0x16FE50u;
label_16fe50:
    // 0x16fe50: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_16fe54:
    if (ctx->pc == 0x16FE54u) {
        ctx->pc = 0x16FE54u;
            // 0x16fe54: 0x3c01003e  lui         $at, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
        ctx->pc = 0x16FE58u;
        goto label_16fe58;
    }
    ctx->pc = 0x16FE50u;
    {
        const bool branch_taken_0x16fe50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FE50u;
            // 0x16fe54: 0x3c01003e  lui         $at, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe50) {
            ctx->pc = 0x16FE88u;
            goto label_16fe88;
        }
    }
    ctx->pc = 0x16FE58u;
label_16fe58:
    // 0x16fe58: 0x8c228074  lw          $v0, -0x7F8C($at)
    ctx->pc = 0x16fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934644)));
label_16fe5c:
    // 0x16fe5c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_16fe60:
    if (ctx->pc == 0x16FE60u) {
        ctx->pc = 0x16FE64u;
        goto label_16fe64;
    }
    ctx->pc = 0x16FE5Cu;
    {
        const bool branch_taken_0x16fe5c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16fe5c) {
            ctx->pc = 0x16FE88u;
            goto label_16fe88;
        }
    }
    ctx->pc = 0x16FE64u;
label_16fe64:
    // 0x16fe64: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x16fe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16fe68:
    // 0x16fe68: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_16fe6c:
    // 0x16fe6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16fe6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16fe70:
    // 0x16fe70: 0x0  nop
    ctx->pc = 0x16fe70u;
    // NOP
label_16fe74:
    // 0x16fe74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16fe74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16fe78:
    // 0x16fe78: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x16fe78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_16fe7c:
    // 0x16fe7c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x16fe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16fe80:
    // 0x16fe80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16fe80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16fe84:
    // 0x16fe84: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x16fe84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_16fe88:
    // 0x16fe88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16fe88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16fe8c:
    // 0x16fe8c: 0x0  nop
    ctx->pc = 0x16fe8cu;
    // NOP
label_16fe90:
    // 0x16fe90: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16fe90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16fe94:
    // 0x16fe94: 0x0  nop
    ctx->pc = 0x16fe94u;
    // NOP
label_16fe98:
    // 0x16fe98: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16fe9c:
    if (ctx->pc == 0x16FE9Cu) {
        ctx->pc = 0x16FE9Cu;
            // 0x16fe9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x16FEA0u;
        goto label_16fea0;
    }
    ctx->pc = 0x16FE98u;
    {
        const bool branch_taken_0x16fe98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FE98u;
            // 0x16fe9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe98) {
            ctx->pc = 0x16FEB0u;
            goto label_16feb0;
        }
    }
    ctx->pc = 0x16FEA0u;
label_16fea0:
    // 0x16fea0: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x16fea0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16fea4:
    // 0x16fea4: 0x0  nop
    ctx->pc = 0x16fea4u;
    // NOP
label_16fea8:
    // 0x16fea8: 0x45010042  bc1t        . + 4 + (0x42 << 2)
label_16feac:
    if (ctx->pc == 0x16FEACu) {
        ctx->pc = 0x16FEB0u;
        goto label_16feb0;
    }
    ctx->pc = 0x16FEA8u;
    {
        const bool branch_taken_0x16fea8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fea8) {
            ctx->pc = 0x16FFB4u;
            goto label_16ffb4;
        }
    }
    ctx->pc = 0x16FEB0u;
label_16feb0:
    // 0x16feb0: 0xc047c76  jal         func_11F1D8
label_16feb4:
    if (ctx->pc == 0x16FEB4u) {
        ctx->pc = 0x16FEB4u;
            // 0x16feb4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16FEB8u;
        goto label_16feb8;
    }
    ctx->pc = 0x16FEB0u;
    SET_GPR_U32(ctx, 31, 0x16FEB8u);
    ctx->pc = 0x16FEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FEB0u;
            // 0x16feb4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FEB8u; }
        if (ctx->pc != 0x16FEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FEB8u; }
        if (ctx->pc != 0x16FEB8u) { return; }
    }
    ctx->pc = 0x16FEB8u;
label_16feb8:
    // 0x16feb8: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x16feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_16febc:
    // 0x16febc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x16febcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_16fec0:
    // 0x16fec0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16fec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16fec4:
    // 0x16fec4: 0xc072408  jal         func_1C9020
label_16fec8:
    if (ctx->pc == 0x16FEC8u) {
        ctx->pc = 0x16FEC8u;
            // 0x16fec8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x16FECCu;
        goto label_16fecc;
    }
    ctx->pc = 0x16FEC4u;
    SET_GPR_U32(ctx, 31, 0x16FECCu);
    ctx->pc = 0x16FEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FEC4u;
            // 0x16fec8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FECCu; }
        if (ctx->pc != 0x16FECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FECCu; }
        if (ctx->pc != 0x16FECCu) { return; }
    }
    ctx->pc = 0x16FECCu;
label_16fecc:
    // 0x16fecc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16feccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16fed0:
    // 0x16fed0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16fed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16fed4:
    // 0x16fed4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16fed4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16fed8:
    // 0x16fed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16fed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16fedc:
    // 0x16fedc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16fedcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16fee0:
    // 0x16fee0: 0x320f809  jalr        $t9
label_16fee4:
    if (ctx->pc == 0x16FEE4u) {
        ctx->pc = 0x16FEE4u;
            // 0x16fee4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x16FEE8u;
        goto label_16fee8;
    }
    ctx->pc = 0x16FEE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FEE8u);
        ctx->pc = 0x16FEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FEE0u;
            // 0x16fee4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16FEE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16FEE8u; }
            if (ctx->pc != 0x16FEE8u) { return; }
        }
        }
    }
    ctx->pc = 0x16FEE8u;
label_16fee8:
    // 0x16fee8: 0xc04bff4  jal         func_12FFD0
label_16feec:
    if (ctx->pc == 0x16FEECu) {
        ctx->pc = 0x16FEECu;
            // 0x16feec: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x16FEF0u;
        goto label_16fef0;
    }
    ctx->pc = 0x16FEE8u;
    SET_GPR_U32(ctx, 31, 0x16FEF0u);
    ctx->pc = 0x16FEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FEE8u;
            // 0x16feec: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FEF0u; }
        if (ctx->pc != 0x16FEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FEF0u; }
        if (ctx->pc != 0x16FEF0u) { return; }
    }
    ctx->pc = 0x16FEF0u;
label_16fef0:
    // 0x16fef0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16fef0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16fef4:
    // 0x16fef4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16fef8:
    // 0x16fef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16fef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16fefc:
    // 0x16fefc: 0x0  nop
    ctx->pc = 0x16fefcu;
    // NOP
label_16ff00:
    // 0x16ff00: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x16ff00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16ff04:
    // 0x16ff04: 0x0  nop
    ctx->pc = 0x16ff04u;
    // NOP
label_16ff08:
    // 0x16ff08: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_16ff0c:
    if (ctx->pc == 0x16FF0Cu) {
        ctx->pc = 0x16FF0Cu;
            // 0x16ff0c: 0x3c023ee6  lui         $v0, 0x3EE6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
        ctx->pc = 0x16FF10u;
        goto label_16ff10;
    }
    ctx->pc = 0x16FF08u;
    {
        const bool branch_taken_0x16ff08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FF08u;
            // 0x16ff0c: 0x3c023ee6  lui         $v0, 0x3EE6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff08) {
            ctx->pc = 0x16FF14u;
            goto label_16ff14;
        }
    }
    ctx->pc = 0x16FF10u;
label_16ff10:
    // 0x16ff10: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16ff10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16ff14:
    // 0x16ff14: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x16ff14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_16ff18:
    // 0x16ff18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ff18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16ff1c:
    // 0x16ff1c: 0x0  nop
    ctx->pc = 0x16ff1cu;
    // NOP
label_16ff20:
    // 0x16ff20: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16ff20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16ff24:
    // 0x16ff24: 0x0  nop
    ctx->pc = 0x16ff24u;
    // NOP
label_16ff28:
    // 0x16ff28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16ff2c:
    if (ctx->pc == 0x16FF2Cu) {
        ctx->pc = 0x16FF2Cu;
            // 0x16ff2c: 0x3c023f26  lui         $v0, 0x3F26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
        ctx->pc = 0x16FF30u;
        goto label_16ff30;
    }
    ctx->pc = 0x16FF28u;
    {
        const bool branch_taken_0x16ff28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FF28u;
            // 0x16ff2c: 0x3c023f26  lui         $v0, 0x3F26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff28) {
            ctx->pc = 0x16FF34u;
            goto label_16ff34;
        }
    }
    ctx->pc = 0x16FF30u;
label_16ff30:
    // 0x16ff30: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16ff30u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16ff34:
    // 0x16ff34: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x16ff34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_16ff38:
    // 0x16ff38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ff38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16ff3c:
    // 0x16ff3c: 0x0  nop
    ctx->pc = 0x16ff3cu;
    // NOP
label_16ff40:
    // 0x16ff40: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16ff40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16ff44:
    // 0x16ff44: 0x0  nop
    ctx->pc = 0x16ff44u;
    // NOP
label_16ff48:
    // 0x16ff48: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_16ff4c:
    if (ctx->pc == 0x16FF4Cu) {
        ctx->pc = 0x16FF50u;
        goto label_16ff50;
    }
    ctx->pc = 0x16FF48u;
    {
        const bool branch_taken_0x16ff48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ff48) {
            ctx->pc = 0x16FF78u;
            goto label_16ff78;
        }
    }
    ctx->pc = 0x16FF50u;
label_16ff50:
    // 0x16ff50: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16ff50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16ff54:
    // 0x16ff54: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16ff54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16ff58:
    // 0x16ff58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ff58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16ff5c:
    // 0x16ff5c: 0x24a53608  addiu       $a1, $a1, 0x3608
    ctx->pc = 0x16ff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13832));
label_16ff60:
    // 0x16ff60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16ff60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ff64:
    // 0x16ff64: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16ff64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16ff68:
    // 0x16ff68: 0x320f809  jalr        $t9
label_16ff6c:
    if (ctx->pc == 0x16FF6Cu) {
        ctx->pc = 0x16FF6Cu;
            // 0x16ff6c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16FF70u;
        goto label_16ff70;
    }
    ctx->pc = 0x16FF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FF70u);
        ctx->pc = 0x16FF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FF68u;
            // 0x16ff6c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16FF70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16FF70u; }
            if (ctx->pc != 0x16FF70u) { return; }
        }
        }
    }
    ctx->pc = 0x16FF70u;
label_16ff70:
    // 0x16ff70: 0x10000046  b           . + 4 + (0x46 << 2)
label_16ff74:
    if (ctx->pc == 0x16FF74u) {
        ctx->pc = 0x16FF78u;
        goto label_16ff78;
    }
    ctx->pc = 0x16FF70u;
    {
        const bool branch_taken_0x16ff70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ff70) {
            ctx->pc = 0x17008Cu;
            goto label_17008c;
        }
    }
    ctx->pc = 0x16FF78u;
label_16ff78:
    // 0x16ff78: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16ff78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16ff7c:
    // 0x16ff7c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16ff7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16ff80:
    // 0x16ff80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ff80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16ff84:
    // 0x16ff84: 0x24a53610  addiu       $a1, $a1, 0x3610
    ctx->pc = 0x16ff84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13840));
label_16ff88:
    // 0x16ff88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16ff88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ff8c:
    // 0x16ff8c: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16ff8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16ff90:
    // 0x16ff90: 0x320f809  jalr        $t9
label_16ff94:
    if (ctx->pc == 0x16FF94u) {
        ctx->pc = 0x16FF94u;
            // 0x16ff94: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16FF98u;
        goto label_16ff98;
    }
    ctx->pc = 0x16FF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FF98u);
        ctx->pc = 0x16FF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FF90u;
            // 0x16ff94: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16FF98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16FF98u; }
            if (ctx->pc != 0x16FF98u) { return; }
        }
        }
    }
    ctx->pc = 0x16FF98u;
label_16ff98:
    // 0x16ff98: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16ff98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16ff9c:
    // 0x16ff9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16ff9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16ffa0:
    // 0x16ffa0: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x16ffa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_16ffa4:
    // 0x16ffa4: 0x320f809  jalr        $t9
label_16ffa8:
    if (ctx->pc == 0x16FFA8u) {
        ctx->pc = 0x16FFA8u;
            // 0x16ffa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16FFACu;
        goto label_16ffac;
    }
    ctx->pc = 0x16FFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FFACu);
        ctx->pc = 0x16FFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FFA4u;
            // 0x16ffa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16FFACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16FFACu; }
            if (ctx->pc != 0x16FFACu) { return; }
        }
        }
    }
    ctx->pc = 0x16FFACu;
label_16ffac:
    // 0x16ffac: 0x10000037  b           . + 4 + (0x37 << 2)
label_16ffb0:
    if (ctx->pc == 0x16FFB0u) {
        ctx->pc = 0x16FFB4u;
        goto label_16ffb4;
    }
    ctx->pc = 0x16FFACu;
    {
        const bool branch_taken_0x16ffac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ffac) {
            ctx->pc = 0x17008Cu;
            goto label_17008c;
        }
    }
    ctx->pc = 0x16FFB4u;
label_16ffb4:
    // 0x16ffb4: 0x86220772  lh          $v0, 0x772($s1)
    ctx->pc = 0x16ffb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1906)));
label_16ffb8:
    // 0x16ffb8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_16ffbc:
    if (ctx->pc == 0x16FFBCu) {
        ctx->pc = 0x16FFC0u;
        goto label_16ffc0;
    }
    ctx->pc = 0x16FFB8u;
    {
        const bool branch_taken_0x16ffb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ffb8) {
            ctx->pc = 0x17006Cu;
            goto label_17006c;
        }
    }
    ctx->pc = 0x16FFC0u;
label_16ffc0:
    // 0x16ffc0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16ffc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16ffc4:
    // 0x16ffc4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16ffc8:
    // 0x16ffc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ffc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16ffcc:
    // 0x16ffcc: 0x24a53588  addiu       $a1, $a1, 0x3588
    ctx->pc = 0x16ffccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13704));
label_16ffd0:
    // 0x16ffd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16ffd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ffd4:
    // 0x16ffd4: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16ffd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16ffd8:
    // 0x16ffd8: 0x320f809  jalr        $t9
label_16ffdc:
    if (ctx->pc == 0x16FFDCu) {
        ctx->pc = 0x16FFDCu;
            // 0x16ffdc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16FFE0u;
        goto label_16ffe0;
    }
    ctx->pc = 0x16FFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FFE0u);
        ctx->pc = 0x16FFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FFD8u;
            // 0x16ffdc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16FFE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16FFE0u; }
            if (ctx->pc != 0x16FFE0u) { return; }
        }
        }
    }
    ctx->pc = 0x16FFE0u;
label_16ffe0:
    // 0x16ffe0: 0x8f849da4  lw          $a0, -0x625C($gp)
    ctx->pc = 0x16ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
label_16ffe4:
    // 0x16ffe4: 0xc0a0ed8  jal         func_283B60
label_16ffe8:
    if (ctx->pc == 0x16FFE8u) {
        ctx->pc = 0x16FFE8u;
            // 0x16ffe8: 0x86250770  lh          $a1, 0x770($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
        ctx->pc = 0x16FFECu;
        goto label_16ffec;
    }
    ctx->pc = 0x16FFE4u;
    SET_GPR_U32(ctx, 31, 0x16FFECu);
    ctx->pc = 0x16FFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FFE4u;
            // 0x16ffe8: 0x86250770  lh          $a1, 0x770($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FFECu; }
        if (ctx->pc != 0x16FFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FFECu; }
        if (ctx->pc != 0x16FFECu) { return; }
    }
    ctx->pc = 0x16FFECu;
label_16ffec:
    // 0x16ffec: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_16fff0:
    if (ctx->pc == 0x16FFF0u) {
        ctx->pc = 0x16FFF4u;
        goto label_16fff4;
    }
    ctx->pc = 0x16FFECu;
    {
        const bool branch_taken_0x16ffec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ffec) {
            ctx->pc = 0x17008Cu;
            goto label_17008c;
        }
    }
    ctx->pc = 0x16FFF4u;
label_16fff4:
    // 0x16fff4: 0x8444068a  lh          $a0, 0x68A($v0)
    ctx->pc = 0x16fff4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1674)));
label_16fff8:
    // 0x16fff8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16fffc:
    // 0x16fffc: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
label_170000:
    if (ctx->pc == 0x170000u) {
        ctx->pc = 0x170004u;
        goto label_170004;
    }
    ctx->pc = 0x16FFFCu;
    {
        const bool branch_taken_0x16fffc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16fffc) {
            ctx->pc = 0x17008Cu;
            goto label_17008c;
        }
    }
    ctx->pc = 0x170004u;
label_170004:
    // 0x170004: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170008:
    // 0x170008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17000c:
    // 0x17000c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17000cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170010:
    // 0x170010: 0xc05d420  jal         func_175080
label_170014:
    if (ctx->pc == 0x170014u) {
        ctx->pc = 0x170014u;
            // 0x170014: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x170018u;
        goto label_170018;
    }
    ctx->pc = 0x170010u;
    SET_GPR_U32(ctx, 31, 0x170018u);
    ctx->pc = 0x170014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170010u;
            // 0x170014: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170018u; }
        if (ctx->pc != 0x170018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170018u; }
        if (ctx->pc != 0x170018u) { return; }
    }
    ctx->pc = 0x170018u;
label_170018:
    // 0x170018: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x170018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17001c:
    // 0x17001c: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x17001cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_170020:
    // 0x170020: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x170020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170024:
    // 0x170024: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x170024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170028:
    // 0x170028: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x170028u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_17002c:
    // 0x17002c: 0xc047c76  jal         func_11F1D8
label_170030:
    if (ctx->pc == 0x170030u) {
        ctx->pc = 0x170030u;
            // 0x170030: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x170034u;
        goto label_170034;
    }
    ctx->pc = 0x17002Cu;
    SET_GPR_U32(ctx, 31, 0x170034u);
    ctx->pc = 0x170030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17002Cu;
            // 0x170030: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170034u; }
        if (ctx->pc != 0x170034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170034u; }
        if (ctx->pc != 0x170034u) { return; }
    }
    ctx->pc = 0x170034u;
label_170034:
    // 0x170034: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x170034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_170038:
    // 0x170038: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x170038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_17003c:
    // 0x17003c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x17003cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_170040:
    // 0x170040: 0xc072408  jal         func_1C9020
label_170044:
    if (ctx->pc == 0x170044u) {
        ctx->pc = 0x170044u;
            // 0x170044: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x170048u;
        goto label_170048;
    }
    ctx->pc = 0x170040u;
    SET_GPR_U32(ctx, 31, 0x170048u);
    ctx->pc = 0x170044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170040u;
            // 0x170044: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170048u; }
        if (ctx->pc != 0x170048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170048u; }
        if (ctx->pc != 0x170048u) { return; }
    }
    ctx->pc = 0x170048u;
label_170048:
    // 0x170048: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x170048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17004c:
    // 0x17004c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17004cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_170050:
    // 0x170050: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x170050u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_170054:
    // 0x170054: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x170054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_170058:
    // 0x170058: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x170058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_17005c:
    // 0x17005c: 0x320f809  jalr        $t9
label_170060:
    if (ctx->pc == 0x170060u) {
        ctx->pc = 0x170060u;
            // 0x170060: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x170064u;
        goto label_170064;
    }
    ctx->pc = 0x17005Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x170064u);
        ctx->pc = 0x170060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17005Cu;
            // 0x170060: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x170064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x170064u; }
            if (ctx->pc != 0x170064u) { return; }
        }
        }
    }
    ctx->pc = 0x170064u;
label_170064:
    // 0x170064: 0x10000009  b           . + 4 + (0x9 << 2)
label_170068:
    if (ctx->pc == 0x170068u) {
        ctx->pc = 0x17006Cu;
        goto label_17006c;
    }
    ctx->pc = 0x170064u;
    {
        const bool branch_taken_0x170064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170064) {
            ctx->pc = 0x17008Cu;
            goto label_17008c;
        }
    }
    ctx->pc = 0x17006Cu;
label_17006c:
    // 0x17006c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x17006cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_170070:
    // 0x170070: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x170070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_170074:
    // 0x170074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x170074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_170078:
    // 0x170078: 0x24a53588  addiu       $a1, $a1, 0x3588
    ctx->pc = 0x170078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13704));
label_17007c:
    // 0x17007c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17007cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170080:
    // 0x170080: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x170080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_170084:
    // 0x170084: 0x320f809  jalr        $t9
label_170088:
    if (ctx->pc == 0x170088u) {
        ctx->pc = 0x170088u;
            // 0x170088: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17008Cu;
        goto label_17008c;
    }
    ctx->pc = 0x170084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17008Cu);
        ctx->pc = 0x170088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170084u;
            // 0x170088: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17008Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17008Cu; }
            if (ctx->pc != 0x17008Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17008Cu;
label_17008c:
    // 0x17008c: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x17008cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_170090:
    // 0x170090: 0x8c228074  lw          $v0, -0x7F8C($at)
    ctx->pc = 0x170090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934644)));
label_170094:
    // 0x170094: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x170094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_170098:
    // 0x170098: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_17009c:
    if (ctx->pc == 0x17009Cu) {
        ctx->pc = 0x17009Cu;
            // 0x17009c: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x1700A0u;
        goto label_1700a0;
    }
    ctx->pc = 0x170098u;
    {
        const bool branch_taken_0x170098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17009Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170098u;
            // 0x17009c: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170098) {
            ctx->pc = 0x1700C0u;
            goto label_1700c0;
        }
    }
    ctx->pc = 0x1700A0u;
label_1700a0:
    // 0x1700a0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1700a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1700a4:
    // 0x1700a4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1700a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1700a8:
    // 0x1700a8: 0xc052d0c  jal         func_14B430
label_1700ac:
    if (ctx->pc == 0x1700ACu) {
        ctx->pc = 0x1700ACu;
            // 0x1700ac: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1700B0u;
        goto label_1700b0;
    }
    ctx->pc = 0x1700A8u;
    SET_GPR_U32(ctx, 31, 0x1700B0u);
    ctx->pc = 0x1700ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1700A8u;
            // 0x1700ac: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1700B0u; }
        if (ctx->pc != 0x1700B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1700B0u; }
        if (ctx->pc != 0x1700B0u) { return; }
    }
    ctx->pc = 0x1700B0u;
label_1700b0:
    // 0x1700b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1700b4:
    if (ctx->pc == 0x1700B4u) {
        ctx->pc = 0x1700B4u;
            // 0x1700b4: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->pc = 0x1700B8u;
        goto label_1700b8;
    }
    ctx->pc = 0x1700B0u;
    {
        const bool branch_taken_0x1700b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1700B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1700B0u;
            // 0x1700b4: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1700b0) {
            ctx->pc = 0x1700BCu;
            goto label_1700bc;
        }
    }
    ctx->pc = 0x1700B8u;
label_1700b8:
    // 0x1700b8: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1700b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_1700bc:
    // 0x1700bc: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x1700bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1700c0:
    // 0x1700c0: 0xc041c5c  jal         func_107170
label_1700c4:
    if (ctx->pc == 0x1700C4u) {
        ctx->pc = 0x1700C4u;
            // 0x1700c4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1700C8u;
        goto label_1700c8;
    }
    ctx->pc = 0x1700C0u;
    SET_GPR_U32(ctx, 31, 0x1700C8u);
    ctx->pc = 0x1700C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1700C0u;
            // 0x1700c4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1700C8u; }
        if (ctx->pc != 0x1700C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1700C8u; }
        if (ctx->pc != 0x1700C8u) { return; }
    }
    ctx->pc = 0x1700C8u;
label_1700c8:
    // 0x1700c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1700c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1700cc:
    // 0x1700cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1700ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1700d0:
    // 0x1700d0: 0xc05b1e8  jal         func_16C7A0
label_1700d4:
    if (ctx->pc == 0x1700D4u) {
        ctx->pc = 0x1700D4u;
            // 0x1700d4: 0xa222076c  sb          $v0, 0x76C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1900), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1700D8u;
        goto label_1700d8;
    }
    ctx->pc = 0x1700D0u;
    SET_GPR_U32(ctx, 31, 0x1700D8u);
    ctx->pc = 0x1700D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1700D0u;
            // 0x1700d4: 0xa222076c  sb          $v0, 0x76C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1900), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C7A0u;
    if (runtime->hasFunction(0x16C7A0u)) {
        auto targetFn = runtime->lookupFunction(0x16C7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1700D8u; }
        if (ctx->pc != 0x1700D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RockOn__12CActionCharaFv_0x16c7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1700D8u; }
        if (ctx->pc != 0x1700D8u) { return; }
    }
    ctx->pc = 0x1700D8u;
label_1700d8:
    // 0x1700d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1700d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1700dc:
    // 0x1700dc: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1700dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1700e0:
    // 0x1700e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1700e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1700e4:
    // 0x1700e4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1700e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1700e8:
    // 0x1700e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1700e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1700ec:
    // 0x1700ec: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1700ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1700f0:
    // 0x1700f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1700f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1700f4:
    // 0x1700f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1700f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1700f8:
    // 0x1700f8: 0x3e00008  jr          $ra
label_1700fc:
    if (ctx->pc == 0x1700FCu) {
        ctx->pc = 0x1700FCu;
            // 0x1700fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x170100u;
        goto label_fallthrough_0x1700f8;
    }
    ctx->pc = 0x1700F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1700FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1700F8u;
            // 0x1700fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1700f8:
    ctx->pc = 0x170100u;
}
