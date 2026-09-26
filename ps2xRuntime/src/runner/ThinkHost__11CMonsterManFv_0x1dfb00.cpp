#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ThinkHost__11CMonsterManFv
// Address: 0x1dfb00 - 0x1e04b8
void ThinkHost__11CMonsterManFv_0x1dfb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ThinkHost__11CMonsterManFv_0x1dfb00");
#endif

    switch (ctx->pc) {
        case 0x1dfb00u: goto label_1dfb00;
        case 0x1dfb04u: goto label_1dfb04;
        case 0x1dfb08u: goto label_1dfb08;
        case 0x1dfb0cu: goto label_1dfb0c;
        case 0x1dfb10u: goto label_1dfb10;
        case 0x1dfb14u: goto label_1dfb14;
        case 0x1dfb18u: goto label_1dfb18;
        case 0x1dfb1cu: goto label_1dfb1c;
        case 0x1dfb20u: goto label_1dfb20;
        case 0x1dfb24u: goto label_1dfb24;
        case 0x1dfb28u: goto label_1dfb28;
        case 0x1dfb2cu: goto label_1dfb2c;
        case 0x1dfb30u: goto label_1dfb30;
        case 0x1dfb34u: goto label_1dfb34;
        case 0x1dfb38u: goto label_1dfb38;
        case 0x1dfb3cu: goto label_1dfb3c;
        case 0x1dfb40u: goto label_1dfb40;
        case 0x1dfb44u: goto label_1dfb44;
        case 0x1dfb48u: goto label_1dfb48;
        case 0x1dfb4cu: goto label_1dfb4c;
        case 0x1dfb50u: goto label_1dfb50;
        case 0x1dfb54u: goto label_1dfb54;
        case 0x1dfb58u: goto label_1dfb58;
        case 0x1dfb5cu: goto label_1dfb5c;
        case 0x1dfb60u: goto label_1dfb60;
        case 0x1dfb64u: goto label_1dfb64;
        case 0x1dfb68u: goto label_1dfb68;
        case 0x1dfb6cu: goto label_1dfb6c;
        case 0x1dfb70u: goto label_1dfb70;
        case 0x1dfb74u: goto label_1dfb74;
        case 0x1dfb78u: goto label_1dfb78;
        case 0x1dfb7cu: goto label_1dfb7c;
        case 0x1dfb80u: goto label_1dfb80;
        case 0x1dfb84u: goto label_1dfb84;
        case 0x1dfb88u: goto label_1dfb88;
        case 0x1dfb8cu: goto label_1dfb8c;
        case 0x1dfb90u: goto label_1dfb90;
        case 0x1dfb94u: goto label_1dfb94;
        case 0x1dfb98u: goto label_1dfb98;
        case 0x1dfb9cu: goto label_1dfb9c;
        case 0x1dfba0u: goto label_1dfba0;
        case 0x1dfba4u: goto label_1dfba4;
        case 0x1dfba8u: goto label_1dfba8;
        case 0x1dfbacu: goto label_1dfbac;
        case 0x1dfbb0u: goto label_1dfbb0;
        case 0x1dfbb4u: goto label_1dfbb4;
        case 0x1dfbb8u: goto label_1dfbb8;
        case 0x1dfbbcu: goto label_1dfbbc;
        case 0x1dfbc0u: goto label_1dfbc0;
        case 0x1dfbc4u: goto label_1dfbc4;
        case 0x1dfbc8u: goto label_1dfbc8;
        case 0x1dfbccu: goto label_1dfbcc;
        case 0x1dfbd0u: goto label_1dfbd0;
        case 0x1dfbd4u: goto label_1dfbd4;
        case 0x1dfbd8u: goto label_1dfbd8;
        case 0x1dfbdcu: goto label_1dfbdc;
        case 0x1dfbe0u: goto label_1dfbe0;
        case 0x1dfbe4u: goto label_1dfbe4;
        case 0x1dfbe8u: goto label_1dfbe8;
        case 0x1dfbecu: goto label_1dfbec;
        case 0x1dfbf0u: goto label_1dfbf0;
        case 0x1dfbf4u: goto label_1dfbf4;
        case 0x1dfbf8u: goto label_1dfbf8;
        case 0x1dfbfcu: goto label_1dfbfc;
        case 0x1dfc00u: goto label_1dfc00;
        case 0x1dfc04u: goto label_1dfc04;
        case 0x1dfc08u: goto label_1dfc08;
        case 0x1dfc0cu: goto label_1dfc0c;
        case 0x1dfc10u: goto label_1dfc10;
        case 0x1dfc14u: goto label_1dfc14;
        case 0x1dfc18u: goto label_1dfc18;
        case 0x1dfc1cu: goto label_1dfc1c;
        case 0x1dfc20u: goto label_1dfc20;
        case 0x1dfc24u: goto label_1dfc24;
        case 0x1dfc28u: goto label_1dfc28;
        case 0x1dfc2cu: goto label_1dfc2c;
        case 0x1dfc30u: goto label_1dfc30;
        case 0x1dfc34u: goto label_1dfc34;
        case 0x1dfc38u: goto label_1dfc38;
        case 0x1dfc3cu: goto label_1dfc3c;
        case 0x1dfc40u: goto label_1dfc40;
        case 0x1dfc44u: goto label_1dfc44;
        case 0x1dfc48u: goto label_1dfc48;
        case 0x1dfc4cu: goto label_1dfc4c;
        case 0x1dfc50u: goto label_1dfc50;
        case 0x1dfc54u: goto label_1dfc54;
        case 0x1dfc58u: goto label_1dfc58;
        case 0x1dfc5cu: goto label_1dfc5c;
        case 0x1dfc60u: goto label_1dfc60;
        case 0x1dfc64u: goto label_1dfc64;
        case 0x1dfc68u: goto label_1dfc68;
        case 0x1dfc6cu: goto label_1dfc6c;
        case 0x1dfc70u: goto label_1dfc70;
        case 0x1dfc74u: goto label_1dfc74;
        case 0x1dfc78u: goto label_1dfc78;
        case 0x1dfc7cu: goto label_1dfc7c;
        case 0x1dfc80u: goto label_1dfc80;
        case 0x1dfc84u: goto label_1dfc84;
        case 0x1dfc88u: goto label_1dfc88;
        case 0x1dfc8cu: goto label_1dfc8c;
        case 0x1dfc90u: goto label_1dfc90;
        case 0x1dfc94u: goto label_1dfc94;
        case 0x1dfc98u: goto label_1dfc98;
        case 0x1dfc9cu: goto label_1dfc9c;
        case 0x1dfca0u: goto label_1dfca0;
        case 0x1dfca4u: goto label_1dfca4;
        case 0x1dfca8u: goto label_1dfca8;
        case 0x1dfcacu: goto label_1dfcac;
        case 0x1dfcb0u: goto label_1dfcb0;
        case 0x1dfcb4u: goto label_1dfcb4;
        case 0x1dfcb8u: goto label_1dfcb8;
        case 0x1dfcbcu: goto label_1dfcbc;
        case 0x1dfcc0u: goto label_1dfcc0;
        case 0x1dfcc4u: goto label_1dfcc4;
        case 0x1dfcc8u: goto label_1dfcc8;
        case 0x1dfcccu: goto label_1dfccc;
        case 0x1dfcd0u: goto label_1dfcd0;
        case 0x1dfcd4u: goto label_1dfcd4;
        case 0x1dfcd8u: goto label_1dfcd8;
        case 0x1dfcdcu: goto label_1dfcdc;
        case 0x1dfce0u: goto label_1dfce0;
        case 0x1dfce4u: goto label_1dfce4;
        case 0x1dfce8u: goto label_1dfce8;
        case 0x1dfcecu: goto label_1dfcec;
        case 0x1dfcf0u: goto label_1dfcf0;
        case 0x1dfcf4u: goto label_1dfcf4;
        case 0x1dfcf8u: goto label_1dfcf8;
        case 0x1dfcfcu: goto label_1dfcfc;
        case 0x1dfd00u: goto label_1dfd00;
        case 0x1dfd04u: goto label_1dfd04;
        case 0x1dfd08u: goto label_1dfd08;
        case 0x1dfd0cu: goto label_1dfd0c;
        case 0x1dfd10u: goto label_1dfd10;
        case 0x1dfd14u: goto label_1dfd14;
        case 0x1dfd18u: goto label_1dfd18;
        case 0x1dfd1cu: goto label_1dfd1c;
        case 0x1dfd20u: goto label_1dfd20;
        case 0x1dfd24u: goto label_1dfd24;
        case 0x1dfd28u: goto label_1dfd28;
        case 0x1dfd2cu: goto label_1dfd2c;
        case 0x1dfd30u: goto label_1dfd30;
        case 0x1dfd34u: goto label_1dfd34;
        case 0x1dfd38u: goto label_1dfd38;
        case 0x1dfd3cu: goto label_1dfd3c;
        case 0x1dfd40u: goto label_1dfd40;
        case 0x1dfd44u: goto label_1dfd44;
        case 0x1dfd48u: goto label_1dfd48;
        case 0x1dfd4cu: goto label_1dfd4c;
        case 0x1dfd50u: goto label_1dfd50;
        case 0x1dfd54u: goto label_1dfd54;
        case 0x1dfd58u: goto label_1dfd58;
        case 0x1dfd5cu: goto label_1dfd5c;
        case 0x1dfd60u: goto label_1dfd60;
        case 0x1dfd64u: goto label_1dfd64;
        case 0x1dfd68u: goto label_1dfd68;
        case 0x1dfd6cu: goto label_1dfd6c;
        case 0x1dfd70u: goto label_1dfd70;
        case 0x1dfd74u: goto label_1dfd74;
        case 0x1dfd78u: goto label_1dfd78;
        case 0x1dfd7cu: goto label_1dfd7c;
        case 0x1dfd80u: goto label_1dfd80;
        case 0x1dfd84u: goto label_1dfd84;
        case 0x1dfd88u: goto label_1dfd88;
        case 0x1dfd8cu: goto label_1dfd8c;
        case 0x1dfd90u: goto label_1dfd90;
        case 0x1dfd94u: goto label_1dfd94;
        case 0x1dfd98u: goto label_1dfd98;
        case 0x1dfd9cu: goto label_1dfd9c;
        case 0x1dfda0u: goto label_1dfda0;
        case 0x1dfda4u: goto label_1dfda4;
        case 0x1dfda8u: goto label_1dfda8;
        case 0x1dfdacu: goto label_1dfdac;
        case 0x1dfdb0u: goto label_1dfdb0;
        case 0x1dfdb4u: goto label_1dfdb4;
        case 0x1dfdb8u: goto label_1dfdb8;
        case 0x1dfdbcu: goto label_1dfdbc;
        case 0x1dfdc0u: goto label_1dfdc0;
        case 0x1dfdc4u: goto label_1dfdc4;
        case 0x1dfdc8u: goto label_1dfdc8;
        case 0x1dfdccu: goto label_1dfdcc;
        case 0x1dfdd0u: goto label_1dfdd0;
        case 0x1dfdd4u: goto label_1dfdd4;
        case 0x1dfdd8u: goto label_1dfdd8;
        case 0x1dfddcu: goto label_1dfddc;
        case 0x1dfde0u: goto label_1dfde0;
        case 0x1dfde4u: goto label_1dfde4;
        case 0x1dfde8u: goto label_1dfde8;
        case 0x1dfdecu: goto label_1dfdec;
        case 0x1dfdf0u: goto label_1dfdf0;
        case 0x1dfdf4u: goto label_1dfdf4;
        case 0x1dfdf8u: goto label_1dfdf8;
        case 0x1dfdfcu: goto label_1dfdfc;
        case 0x1dfe00u: goto label_1dfe00;
        case 0x1dfe04u: goto label_1dfe04;
        case 0x1dfe08u: goto label_1dfe08;
        case 0x1dfe0cu: goto label_1dfe0c;
        case 0x1dfe10u: goto label_1dfe10;
        case 0x1dfe14u: goto label_1dfe14;
        case 0x1dfe18u: goto label_1dfe18;
        case 0x1dfe1cu: goto label_1dfe1c;
        case 0x1dfe20u: goto label_1dfe20;
        case 0x1dfe24u: goto label_1dfe24;
        case 0x1dfe28u: goto label_1dfe28;
        case 0x1dfe2cu: goto label_1dfe2c;
        case 0x1dfe30u: goto label_1dfe30;
        case 0x1dfe34u: goto label_1dfe34;
        case 0x1dfe38u: goto label_1dfe38;
        case 0x1dfe3cu: goto label_1dfe3c;
        case 0x1dfe40u: goto label_1dfe40;
        case 0x1dfe44u: goto label_1dfe44;
        case 0x1dfe48u: goto label_1dfe48;
        case 0x1dfe4cu: goto label_1dfe4c;
        case 0x1dfe50u: goto label_1dfe50;
        case 0x1dfe54u: goto label_1dfe54;
        case 0x1dfe58u: goto label_1dfe58;
        case 0x1dfe5cu: goto label_1dfe5c;
        case 0x1dfe60u: goto label_1dfe60;
        case 0x1dfe64u: goto label_1dfe64;
        case 0x1dfe68u: goto label_1dfe68;
        case 0x1dfe6cu: goto label_1dfe6c;
        case 0x1dfe70u: goto label_1dfe70;
        case 0x1dfe74u: goto label_1dfe74;
        case 0x1dfe78u: goto label_1dfe78;
        case 0x1dfe7cu: goto label_1dfe7c;
        case 0x1dfe80u: goto label_1dfe80;
        case 0x1dfe84u: goto label_1dfe84;
        case 0x1dfe88u: goto label_1dfe88;
        case 0x1dfe8cu: goto label_1dfe8c;
        case 0x1dfe90u: goto label_1dfe90;
        case 0x1dfe94u: goto label_1dfe94;
        case 0x1dfe98u: goto label_1dfe98;
        case 0x1dfe9cu: goto label_1dfe9c;
        case 0x1dfea0u: goto label_1dfea0;
        case 0x1dfea4u: goto label_1dfea4;
        case 0x1dfea8u: goto label_1dfea8;
        case 0x1dfeacu: goto label_1dfeac;
        case 0x1dfeb0u: goto label_1dfeb0;
        case 0x1dfeb4u: goto label_1dfeb4;
        case 0x1dfeb8u: goto label_1dfeb8;
        case 0x1dfebcu: goto label_1dfebc;
        case 0x1dfec0u: goto label_1dfec0;
        case 0x1dfec4u: goto label_1dfec4;
        case 0x1dfec8u: goto label_1dfec8;
        case 0x1dfeccu: goto label_1dfecc;
        case 0x1dfed0u: goto label_1dfed0;
        case 0x1dfed4u: goto label_1dfed4;
        case 0x1dfed8u: goto label_1dfed8;
        case 0x1dfedcu: goto label_1dfedc;
        case 0x1dfee0u: goto label_1dfee0;
        case 0x1dfee4u: goto label_1dfee4;
        case 0x1dfee8u: goto label_1dfee8;
        case 0x1dfeecu: goto label_1dfeec;
        case 0x1dfef0u: goto label_1dfef0;
        case 0x1dfef4u: goto label_1dfef4;
        case 0x1dfef8u: goto label_1dfef8;
        case 0x1dfefcu: goto label_1dfefc;
        case 0x1dff00u: goto label_1dff00;
        case 0x1dff04u: goto label_1dff04;
        case 0x1dff08u: goto label_1dff08;
        case 0x1dff0cu: goto label_1dff0c;
        case 0x1dff10u: goto label_1dff10;
        case 0x1dff14u: goto label_1dff14;
        case 0x1dff18u: goto label_1dff18;
        case 0x1dff1cu: goto label_1dff1c;
        case 0x1dff20u: goto label_1dff20;
        case 0x1dff24u: goto label_1dff24;
        case 0x1dff28u: goto label_1dff28;
        case 0x1dff2cu: goto label_1dff2c;
        case 0x1dff30u: goto label_1dff30;
        case 0x1dff34u: goto label_1dff34;
        case 0x1dff38u: goto label_1dff38;
        case 0x1dff3cu: goto label_1dff3c;
        case 0x1dff40u: goto label_1dff40;
        case 0x1dff44u: goto label_1dff44;
        case 0x1dff48u: goto label_1dff48;
        case 0x1dff4cu: goto label_1dff4c;
        case 0x1dff50u: goto label_1dff50;
        case 0x1dff54u: goto label_1dff54;
        case 0x1dff58u: goto label_1dff58;
        case 0x1dff5cu: goto label_1dff5c;
        case 0x1dff60u: goto label_1dff60;
        case 0x1dff64u: goto label_1dff64;
        case 0x1dff68u: goto label_1dff68;
        case 0x1dff6cu: goto label_1dff6c;
        case 0x1dff70u: goto label_1dff70;
        case 0x1dff74u: goto label_1dff74;
        case 0x1dff78u: goto label_1dff78;
        case 0x1dff7cu: goto label_1dff7c;
        case 0x1dff80u: goto label_1dff80;
        case 0x1dff84u: goto label_1dff84;
        case 0x1dff88u: goto label_1dff88;
        case 0x1dff8cu: goto label_1dff8c;
        case 0x1dff90u: goto label_1dff90;
        case 0x1dff94u: goto label_1dff94;
        case 0x1dff98u: goto label_1dff98;
        case 0x1dff9cu: goto label_1dff9c;
        case 0x1dffa0u: goto label_1dffa0;
        case 0x1dffa4u: goto label_1dffa4;
        case 0x1dffa8u: goto label_1dffa8;
        case 0x1dffacu: goto label_1dffac;
        case 0x1dffb0u: goto label_1dffb0;
        case 0x1dffb4u: goto label_1dffb4;
        case 0x1dffb8u: goto label_1dffb8;
        case 0x1dffbcu: goto label_1dffbc;
        case 0x1dffc0u: goto label_1dffc0;
        case 0x1dffc4u: goto label_1dffc4;
        case 0x1dffc8u: goto label_1dffc8;
        case 0x1dffccu: goto label_1dffcc;
        case 0x1dffd0u: goto label_1dffd0;
        case 0x1dffd4u: goto label_1dffd4;
        case 0x1dffd8u: goto label_1dffd8;
        case 0x1dffdcu: goto label_1dffdc;
        case 0x1dffe0u: goto label_1dffe0;
        case 0x1dffe4u: goto label_1dffe4;
        case 0x1dffe8u: goto label_1dffe8;
        case 0x1dffecu: goto label_1dffec;
        case 0x1dfff0u: goto label_1dfff0;
        case 0x1dfff4u: goto label_1dfff4;
        case 0x1dfff8u: goto label_1dfff8;
        case 0x1dfffcu: goto label_1dfffc;
        case 0x1e0000u: goto label_1e0000;
        case 0x1e0004u: goto label_1e0004;
        case 0x1e0008u: goto label_1e0008;
        case 0x1e000cu: goto label_1e000c;
        case 0x1e0010u: goto label_1e0010;
        case 0x1e0014u: goto label_1e0014;
        case 0x1e0018u: goto label_1e0018;
        case 0x1e001cu: goto label_1e001c;
        case 0x1e0020u: goto label_1e0020;
        case 0x1e0024u: goto label_1e0024;
        case 0x1e0028u: goto label_1e0028;
        case 0x1e002cu: goto label_1e002c;
        case 0x1e0030u: goto label_1e0030;
        case 0x1e0034u: goto label_1e0034;
        case 0x1e0038u: goto label_1e0038;
        case 0x1e003cu: goto label_1e003c;
        case 0x1e0040u: goto label_1e0040;
        case 0x1e0044u: goto label_1e0044;
        case 0x1e0048u: goto label_1e0048;
        case 0x1e004cu: goto label_1e004c;
        case 0x1e0050u: goto label_1e0050;
        case 0x1e0054u: goto label_1e0054;
        case 0x1e0058u: goto label_1e0058;
        case 0x1e005cu: goto label_1e005c;
        case 0x1e0060u: goto label_1e0060;
        case 0x1e0064u: goto label_1e0064;
        case 0x1e0068u: goto label_1e0068;
        case 0x1e006cu: goto label_1e006c;
        case 0x1e0070u: goto label_1e0070;
        case 0x1e0074u: goto label_1e0074;
        case 0x1e0078u: goto label_1e0078;
        case 0x1e007cu: goto label_1e007c;
        case 0x1e0080u: goto label_1e0080;
        case 0x1e0084u: goto label_1e0084;
        case 0x1e0088u: goto label_1e0088;
        case 0x1e008cu: goto label_1e008c;
        case 0x1e0090u: goto label_1e0090;
        case 0x1e0094u: goto label_1e0094;
        case 0x1e0098u: goto label_1e0098;
        case 0x1e009cu: goto label_1e009c;
        case 0x1e00a0u: goto label_1e00a0;
        case 0x1e00a4u: goto label_1e00a4;
        case 0x1e00a8u: goto label_1e00a8;
        case 0x1e00acu: goto label_1e00ac;
        case 0x1e00b0u: goto label_1e00b0;
        case 0x1e00b4u: goto label_1e00b4;
        case 0x1e00b8u: goto label_1e00b8;
        case 0x1e00bcu: goto label_1e00bc;
        case 0x1e00c0u: goto label_1e00c0;
        case 0x1e00c4u: goto label_1e00c4;
        case 0x1e00c8u: goto label_1e00c8;
        case 0x1e00ccu: goto label_1e00cc;
        case 0x1e00d0u: goto label_1e00d0;
        case 0x1e00d4u: goto label_1e00d4;
        case 0x1e00d8u: goto label_1e00d8;
        case 0x1e00dcu: goto label_1e00dc;
        case 0x1e00e0u: goto label_1e00e0;
        case 0x1e00e4u: goto label_1e00e4;
        case 0x1e00e8u: goto label_1e00e8;
        case 0x1e00ecu: goto label_1e00ec;
        case 0x1e00f0u: goto label_1e00f0;
        case 0x1e00f4u: goto label_1e00f4;
        case 0x1e00f8u: goto label_1e00f8;
        case 0x1e00fcu: goto label_1e00fc;
        case 0x1e0100u: goto label_1e0100;
        case 0x1e0104u: goto label_1e0104;
        case 0x1e0108u: goto label_1e0108;
        case 0x1e010cu: goto label_1e010c;
        case 0x1e0110u: goto label_1e0110;
        case 0x1e0114u: goto label_1e0114;
        case 0x1e0118u: goto label_1e0118;
        case 0x1e011cu: goto label_1e011c;
        case 0x1e0120u: goto label_1e0120;
        case 0x1e0124u: goto label_1e0124;
        case 0x1e0128u: goto label_1e0128;
        case 0x1e012cu: goto label_1e012c;
        case 0x1e0130u: goto label_1e0130;
        case 0x1e0134u: goto label_1e0134;
        case 0x1e0138u: goto label_1e0138;
        case 0x1e013cu: goto label_1e013c;
        case 0x1e0140u: goto label_1e0140;
        case 0x1e0144u: goto label_1e0144;
        case 0x1e0148u: goto label_1e0148;
        case 0x1e014cu: goto label_1e014c;
        case 0x1e0150u: goto label_1e0150;
        case 0x1e0154u: goto label_1e0154;
        case 0x1e0158u: goto label_1e0158;
        case 0x1e015cu: goto label_1e015c;
        case 0x1e0160u: goto label_1e0160;
        case 0x1e0164u: goto label_1e0164;
        case 0x1e0168u: goto label_1e0168;
        case 0x1e016cu: goto label_1e016c;
        case 0x1e0170u: goto label_1e0170;
        case 0x1e0174u: goto label_1e0174;
        case 0x1e0178u: goto label_1e0178;
        case 0x1e017cu: goto label_1e017c;
        case 0x1e0180u: goto label_1e0180;
        case 0x1e0184u: goto label_1e0184;
        case 0x1e0188u: goto label_1e0188;
        case 0x1e018cu: goto label_1e018c;
        case 0x1e0190u: goto label_1e0190;
        case 0x1e0194u: goto label_1e0194;
        case 0x1e0198u: goto label_1e0198;
        case 0x1e019cu: goto label_1e019c;
        case 0x1e01a0u: goto label_1e01a0;
        case 0x1e01a4u: goto label_1e01a4;
        case 0x1e01a8u: goto label_1e01a8;
        case 0x1e01acu: goto label_1e01ac;
        case 0x1e01b0u: goto label_1e01b0;
        case 0x1e01b4u: goto label_1e01b4;
        case 0x1e01b8u: goto label_1e01b8;
        case 0x1e01bcu: goto label_1e01bc;
        case 0x1e01c0u: goto label_1e01c0;
        case 0x1e01c4u: goto label_1e01c4;
        case 0x1e01c8u: goto label_1e01c8;
        case 0x1e01ccu: goto label_1e01cc;
        case 0x1e01d0u: goto label_1e01d0;
        case 0x1e01d4u: goto label_1e01d4;
        case 0x1e01d8u: goto label_1e01d8;
        case 0x1e01dcu: goto label_1e01dc;
        case 0x1e01e0u: goto label_1e01e0;
        case 0x1e01e4u: goto label_1e01e4;
        case 0x1e01e8u: goto label_1e01e8;
        case 0x1e01ecu: goto label_1e01ec;
        case 0x1e01f0u: goto label_1e01f0;
        case 0x1e01f4u: goto label_1e01f4;
        case 0x1e01f8u: goto label_1e01f8;
        case 0x1e01fcu: goto label_1e01fc;
        case 0x1e0200u: goto label_1e0200;
        case 0x1e0204u: goto label_1e0204;
        case 0x1e0208u: goto label_1e0208;
        case 0x1e020cu: goto label_1e020c;
        case 0x1e0210u: goto label_1e0210;
        case 0x1e0214u: goto label_1e0214;
        case 0x1e0218u: goto label_1e0218;
        case 0x1e021cu: goto label_1e021c;
        case 0x1e0220u: goto label_1e0220;
        case 0x1e0224u: goto label_1e0224;
        case 0x1e0228u: goto label_1e0228;
        case 0x1e022cu: goto label_1e022c;
        case 0x1e0230u: goto label_1e0230;
        case 0x1e0234u: goto label_1e0234;
        case 0x1e0238u: goto label_1e0238;
        case 0x1e023cu: goto label_1e023c;
        case 0x1e0240u: goto label_1e0240;
        case 0x1e0244u: goto label_1e0244;
        case 0x1e0248u: goto label_1e0248;
        case 0x1e024cu: goto label_1e024c;
        case 0x1e0250u: goto label_1e0250;
        case 0x1e0254u: goto label_1e0254;
        case 0x1e0258u: goto label_1e0258;
        case 0x1e025cu: goto label_1e025c;
        case 0x1e0260u: goto label_1e0260;
        case 0x1e0264u: goto label_1e0264;
        case 0x1e0268u: goto label_1e0268;
        case 0x1e026cu: goto label_1e026c;
        case 0x1e0270u: goto label_1e0270;
        case 0x1e0274u: goto label_1e0274;
        case 0x1e0278u: goto label_1e0278;
        case 0x1e027cu: goto label_1e027c;
        case 0x1e0280u: goto label_1e0280;
        case 0x1e0284u: goto label_1e0284;
        case 0x1e0288u: goto label_1e0288;
        case 0x1e028cu: goto label_1e028c;
        case 0x1e0290u: goto label_1e0290;
        case 0x1e0294u: goto label_1e0294;
        case 0x1e0298u: goto label_1e0298;
        case 0x1e029cu: goto label_1e029c;
        case 0x1e02a0u: goto label_1e02a0;
        case 0x1e02a4u: goto label_1e02a4;
        case 0x1e02a8u: goto label_1e02a8;
        case 0x1e02acu: goto label_1e02ac;
        case 0x1e02b0u: goto label_1e02b0;
        case 0x1e02b4u: goto label_1e02b4;
        case 0x1e02b8u: goto label_1e02b8;
        case 0x1e02bcu: goto label_1e02bc;
        case 0x1e02c0u: goto label_1e02c0;
        case 0x1e02c4u: goto label_1e02c4;
        case 0x1e02c8u: goto label_1e02c8;
        case 0x1e02ccu: goto label_1e02cc;
        case 0x1e02d0u: goto label_1e02d0;
        case 0x1e02d4u: goto label_1e02d4;
        case 0x1e02d8u: goto label_1e02d8;
        case 0x1e02dcu: goto label_1e02dc;
        case 0x1e02e0u: goto label_1e02e0;
        case 0x1e02e4u: goto label_1e02e4;
        case 0x1e02e8u: goto label_1e02e8;
        case 0x1e02ecu: goto label_1e02ec;
        case 0x1e02f0u: goto label_1e02f0;
        case 0x1e02f4u: goto label_1e02f4;
        case 0x1e02f8u: goto label_1e02f8;
        case 0x1e02fcu: goto label_1e02fc;
        case 0x1e0300u: goto label_1e0300;
        case 0x1e0304u: goto label_1e0304;
        case 0x1e0308u: goto label_1e0308;
        case 0x1e030cu: goto label_1e030c;
        case 0x1e0310u: goto label_1e0310;
        case 0x1e0314u: goto label_1e0314;
        case 0x1e0318u: goto label_1e0318;
        case 0x1e031cu: goto label_1e031c;
        case 0x1e0320u: goto label_1e0320;
        case 0x1e0324u: goto label_1e0324;
        case 0x1e0328u: goto label_1e0328;
        case 0x1e032cu: goto label_1e032c;
        case 0x1e0330u: goto label_1e0330;
        case 0x1e0334u: goto label_1e0334;
        case 0x1e0338u: goto label_1e0338;
        case 0x1e033cu: goto label_1e033c;
        case 0x1e0340u: goto label_1e0340;
        case 0x1e0344u: goto label_1e0344;
        case 0x1e0348u: goto label_1e0348;
        case 0x1e034cu: goto label_1e034c;
        case 0x1e0350u: goto label_1e0350;
        case 0x1e0354u: goto label_1e0354;
        case 0x1e0358u: goto label_1e0358;
        case 0x1e035cu: goto label_1e035c;
        case 0x1e0360u: goto label_1e0360;
        case 0x1e0364u: goto label_1e0364;
        case 0x1e0368u: goto label_1e0368;
        case 0x1e036cu: goto label_1e036c;
        case 0x1e0370u: goto label_1e0370;
        case 0x1e0374u: goto label_1e0374;
        case 0x1e0378u: goto label_1e0378;
        case 0x1e037cu: goto label_1e037c;
        case 0x1e0380u: goto label_1e0380;
        case 0x1e0384u: goto label_1e0384;
        case 0x1e0388u: goto label_1e0388;
        case 0x1e038cu: goto label_1e038c;
        case 0x1e0390u: goto label_1e0390;
        case 0x1e0394u: goto label_1e0394;
        case 0x1e0398u: goto label_1e0398;
        case 0x1e039cu: goto label_1e039c;
        case 0x1e03a0u: goto label_1e03a0;
        case 0x1e03a4u: goto label_1e03a4;
        case 0x1e03a8u: goto label_1e03a8;
        case 0x1e03acu: goto label_1e03ac;
        case 0x1e03b0u: goto label_1e03b0;
        case 0x1e03b4u: goto label_1e03b4;
        case 0x1e03b8u: goto label_1e03b8;
        case 0x1e03bcu: goto label_1e03bc;
        case 0x1e03c0u: goto label_1e03c0;
        case 0x1e03c4u: goto label_1e03c4;
        case 0x1e03c8u: goto label_1e03c8;
        case 0x1e03ccu: goto label_1e03cc;
        case 0x1e03d0u: goto label_1e03d0;
        case 0x1e03d4u: goto label_1e03d4;
        case 0x1e03d8u: goto label_1e03d8;
        case 0x1e03dcu: goto label_1e03dc;
        case 0x1e03e0u: goto label_1e03e0;
        case 0x1e03e4u: goto label_1e03e4;
        case 0x1e03e8u: goto label_1e03e8;
        case 0x1e03ecu: goto label_1e03ec;
        case 0x1e03f0u: goto label_1e03f0;
        case 0x1e03f4u: goto label_1e03f4;
        case 0x1e03f8u: goto label_1e03f8;
        case 0x1e03fcu: goto label_1e03fc;
        case 0x1e0400u: goto label_1e0400;
        case 0x1e0404u: goto label_1e0404;
        case 0x1e0408u: goto label_1e0408;
        case 0x1e040cu: goto label_1e040c;
        case 0x1e0410u: goto label_1e0410;
        case 0x1e0414u: goto label_1e0414;
        case 0x1e0418u: goto label_1e0418;
        case 0x1e041cu: goto label_1e041c;
        case 0x1e0420u: goto label_1e0420;
        case 0x1e0424u: goto label_1e0424;
        case 0x1e0428u: goto label_1e0428;
        case 0x1e042cu: goto label_1e042c;
        case 0x1e0430u: goto label_1e0430;
        case 0x1e0434u: goto label_1e0434;
        case 0x1e0438u: goto label_1e0438;
        case 0x1e043cu: goto label_1e043c;
        case 0x1e0440u: goto label_1e0440;
        case 0x1e0444u: goto label_1e0444;
        case 0x1e0448u: goto label_1e0448;
        case 0x1e044cu: goto label_1e044c;
        case 0x1e0450u: goto label_1e0450;
        case 0x1e0454u: goto label_1e0454;
        case 0x1e0458u: goto label_1e0458;
        case 0x1e045cu: goto label_1e045c;
        case 0x1e0460u: goto label_1e0460;
        case 0x1e0464u: goto label_1e0464;
        case 0x1e0468u: goto label_1e0468;
        case 0x1e046cu: goto label_1e046c;
        case 0x1e0470u: goto label_1e0470;
        case 0x1e0474u: goto label_1e0474;
        case 0x1e0478u: goto label_1e0478;
        case 0x1e047cu: goto label_1e047c;
        case 0x1e0480u: goto label_1e0480;
        case 0x1e0484u: goto label_1e0484;
        case 0x1e0488u: goto label_1e0488;
        case 0x1e048cu: goto label_1e048c;
        case 0x1e0490u: goto label_1e0490;
        case 0x1e0494u: goto label_1e0494;
        case 0x1e0498u: goto label_1e0498;
        case 0x1e049cu: goto label_1e049c;
        case 0x1e04a0u: goto label_1e04a0;
        case 0x1e04a4u: goto label_1e04a4;
        case 0x1e04a8u: goto label_1e04a8;
        case 0x1e04acu: goto label_1e04ac;
        case 0x1e04b0u: goto label_1e04b0;
        case 0x1e04b4u: goto label_1e04b4;
        default: break;
    }

    ctx->pc = 0x1dfb00u;

label_1dfb00:
    // 0x1dfb00: 0x27bdd6c0  addiu       $sp, $sp, -0x2940
    ctx->pc = 0x1dfb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294956736));
label_1dfb04:
    // 0x1dfb04: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1dfb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1dfb08:
    // 0x1dfb08: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1dfb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1dfb0c:
    // 0x1dfb0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1dfb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1dfb10:
    // 0x1dfb10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1dfb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1dfb14:
    // 0x1dfb14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1dfb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1dfb18:
    // 0x1dfb18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dfb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1dfb1c:
    // 0x1dfb1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dfb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1dfb20:
    // 0x1dfb20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1dfb20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dfb24:
    // 0x1dfb24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dfb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1dfb28:
    // 0x1dfb28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dfb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dfb2c:
    // 0x1dfb2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dfb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dfb30:
    // 0x1dfb30: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1dfb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dfb34:
    // 0x1dfb34: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x1dfb34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
label_1dfb38:
    // 0x1dfb38: 0xc0a0f58  jal         func_283D60
label_1dfb3c:
    if (ctx->pc == 0x1DFB3Cu) {
        ctx->pc = 0x1DFB3Cu;
            // 0x1dfb3c: 0x249e2f90  addiu       $fp, $a0, 0x2F90 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 12176));
        ctx->pc = 0x1DFB40u;
        goto label_1dfb40;
    }
    ctx->pc = 0x1DFB38u;
    SET_GPR_U32(ctx, 31, 0x1DFB40u);
    ctx->pc = 0x1DFB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB38u;
            // 0x1dfb3c: 0x249e2f90  addiu       $fp, $a0, 0x2F90 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 12176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB40u; }
        if (ctx->pc != 0x1DFB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB40u; }
        if (ctx->pc != 0x1DFB40u) { return; }
    }
    ctx->pc = 0x1DFB40u;
label_1dfb40:
    // 0x1dfb40: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1dfb40u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dfb44:
    // 0x1dfb44: 0x12e00250  beqz        $s7, . + 4 + (0x250 << 2)
label_1dfb48:
    if (ctx->pc == 0x1DFB48u) {
        ctx->pc = 0x1DFB4Cu;
        goto label_1dfb4c;
    }
    ctx->pc = 0x1DFB44u;
    {
        const bool branch_taken_0x1dfb44 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfb44) {
            ctx->pc = 0x1E0488u;
            goto label_1e0488;
        }
    }
    ctx->pc = 0x1DFB4Cu;
label_1dfb4c:
    // 0x1dfb4c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1dfb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1dfb50:
    // 0x1dfb50: 0xc0a0e30  jal         func_2838C0
label_1dfb54:
    if (ctx->pc == 0x1DFB54u) {
        ctx->pc = 0x1DFB54u;
            // 0x1dfb54: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->pc = 0x1DFB58u;
        goto label_1dfb58;
    }
    ctx->pc = 0x1DFB50u;
    SET_GPR_U32(ctx, 31, 0x1DFB58u);
    ctx->pc = 0x1DFB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB50u;
            // 0x1dfb54: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB58u; }
        if (ctx->pc != 0x1DFB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB58u; }
        if (ctx->pc != 0x1DFB58u) { return; }
    }
    ctx->pc = 0x1DFB58u;
label_1dfb58:
    // 0x1dfb58: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1dfb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_1dfb5c:
    // 0x1dfb5c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1dfb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1dfb60:
    // 0x1dfb60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dfb64:
    if (ctx->pc == 0x1DFB64u) {
        ctx->pc = 0x1DFB64u;
            // 0x1dfb64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB68u;
        goto label_1dfb68;
    }
    ctx->pc = 0x1DFB60u;
    {
        const bool branch_taken_0x1dfb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB60u;
            // 0x1dfb64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb60) {
            ctx->pc = 0x1DFB70u;
            goto label_1dfb70;
        }
    }
    ctx->pc = 0x1DFB68u;
label_1dfb68:
    // 0x1dfb68: 0xc04c574  jal         func_1315D0
label_1dfb6c:
    if (ctx->pc == 0x1DFB6Cu) {
        ctx->pc = 0x1DFB6Cu;
            // 0x1dfb6c: 0x27a528d0  addiu       $a1, $sp, 0x28D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10448));
        ctx->pc = 0x1DFB70u;
        goto label_1dfb70;
    }
    ctx->pc = 0x1DFB68u;
    SET_GPR_U32(ctx, 31, 0x1DFB70u);
    ctx->pc = 0x1DFB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB68u;
            // 0x1dfb6c: 0x27a528d0  addiu       $a1, $sp, 0x28D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB70u; }
        if (ctx->pc != 0x1DFB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB70u; }
        if (ctx->pc != 0x1DFB70u) { return; }
    }
    ctx->pc = 0x1DFB70u;
label_1dfb70:
    // 0x1dfb70: 0x8f838da0  lw          $v1, -0x7260($gp)
    ctx->pc = 0x1dfb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1dfb74:
    // 0x1dfb74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dfb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1dfb78:
    // 0x1dfb78: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1dfb78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_1dfb7c:
    // 0x1dfb7c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1dfb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1dfb80:
    // 0x1dfb80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dfb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dfb84:
    // 0x1dfb84: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1dfb84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1dfb88:
    // 0x1dfb88: 0x84234d96  lh          $v1, 0x4D96($at)
    ctx->pc = 0x1dfb88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
label_1dfb8c:
    // 0x1dfb8c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1dfb90:
    if (ctx->pc == 0x1DFB90u) {
        ctx->pc = 0x1DFB90u;
            // 0x1dfb90: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB94u;
        goto label_1dfb94;
    }
    ctx->pc = 0x1DFB8Cu;
    {
        const bool branch_taken_0x1dfb8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DFB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB8Cu;
            // 0x1dfb90: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb8c) {
            ctx->pc = 0x1DFBA8u;
            goto label_1dfba8;
        }
    }
    ctx->pc = 0x1DFB94u;
label_1dfb94:
    // 0x1dfb94: 0xc0683a8  jal         func_1A0EA0
label_1dfb98:
    if (ctx->pc == 0x1DFB98u) {
        ctx->pc = 0x1DFB9Cu;
        goto label_1dfb9c;
    }
    ctx->pc = 0x1DFB94u;
    SET_GPR_U32(ctx, 31, 0x1DFB9Cu);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB9Cu; }
        if (ctx->pc != 0x1DFB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB9Cu; }
        if (ctx->pc != 0x1DFB9Cu) { return; }
    }
    ctx->pc = 0x1DFB9Cu;
label_1dfb9c:
    // 0x1dfb9c: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x1dfb9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_1dfba0:
    // 0x1dfba0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1dfba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1dfba4:
    // 0x1dfba4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1dfba4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfba8:
    // 0x1dfba8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1dfba8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfbac:
    // 0x1dfbac: 0x2961021  addu        $v0, $s4, $s6
    ctx->pc = 0x1dfbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_1dfbb0:
    // 0x1dfbb0: 0x8c500484  lw          $s0, 0x484($v0)
    ctx->pc = 0x1dfbb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
label_1dfbb4:
    // 0x1dfbb4: 0x1200022e  beqz        $s0, . + 4 + (0x22E << 2)
label_1dfbb8:
    if (ctx->pc == 0x1DFBB8u) {
        ctx->pc = 0x1DFBBCu;
        goto label_1dfbbc;
    }
    ctx->pc = 0x1DFBB4u;
    {
        const bool branch_taken_0x1dfbb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfbb4) {
            ctx->pc = 0x1E0470u;
            goto label_1e0470;
        }
    }
    ctx->pc = 0x1DFBBCu;
label_1dfbbc:
    // 0x1dfbbc: 0x8e021330  lw          $v0, 0x1330($s0)
    ctx->pc = 0x1dfbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
label_1dfbc0:
    // 0x1dfbc0: 0x1040022b  beqz        $v0, . + 4 + (0x22B << 2)
label_1dfbc4:
    if (ctx->pc == 0x1DFBC4u) {
        ctx->pc = 0x1DFBC4u;
            // 0x1dfbc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBC8u;
        goto label_1dfbc8;
    }
    ctx->pc = 0x1DFBC0u;
    {
        const bool branch_taken_0x1dfbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFBC0u;
            // 0x1dfbc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbc0) {
            ctx->pc = 0x1E0470u;
            goto label_1e0470;
        }
    }
    ctx->pc = 0x1DFBC8u;
label_1dfbc8:
    // 0x1dfbc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dfbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfbcc:
    // 0x1dfbcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dfbccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfbd0:
    // 0x1dfbd0: 0xc05d420  jal         func_175080
label_1dfbd4:
    if (ctx->pc == 0x1DFBD4u) {
        ctx->pc = 0x1DFBD4u;
            // 0x1dfbd4: 0x260712d0  addiu       $a3, $s0, 0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4816));
        ctx->pc = 0x1DFBD8u;
        goto label_1dfbd8;
    }
    ctx->pc = 0x1DFBD0u;
    SET_GPR_U32(ctx, 31, 0x1DFBD8u);
    ctx->pc = 0x1DFBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFBD0u;
            // 0x1dfbd4: 0x260712d0  addiu       $a3, $s0, 0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBD8u; }
        if (ctx->pc != 0x1DFBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBD8u; }
        if (ctx->pc != 0x1DFBD8u) { return; }
    }
    ctx->pc = 0x1DFBD8u;
label_1dfbd8:
    // 0x1dfbd8: 0xae0012bc  sw          $zero, 0x12BC($s0)
    ctx->pc = 0x1dfbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 0));
label_1dfbdc:
    // 0x1dfbdc: 0x8e0212a8  lw          $v0, 0x12A8($s0)
    ctx->pc = 0x1dfbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4776)));
label_1dfbe0:
    // 0x1dfbe0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1dfbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1dfbe4:
    // 0x1dfbe4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dfbe8:
    if (ctx->pc == 0x1DFBE8u) {
        ctx->pc = 0x1DFBE8u;
            // 0x1dfbe8: 0x261112a8  addiu       $s1, $s0, 0x12A8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4776));
        ctx->pc = 0x1DFBECu;
        goto label_1dfbec;
    }
    ctx->pc = 0x1DFBE4u;
    {
        const bool branch_taken_0x1dfbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFBE4u;
            // 0x1dfbe8: 0x261112a8  addiu       $s1, $s0, 0x12A8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbe4) {
            ctx->pc = 0x1DFBF4u;
            goto label_1dfbf4;
        }
    }
    ctx->pc = 0x1DFBECu;
label_1dfbec:
    // 0x1dfbec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dfbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dfbf0:
    // 0x1dfbf0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1dfbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_1dfbf4:
    // 0x1dfbf4: 0x0  nop
    ctx->pc = 0x1dfbf4u;
    // NOP
label_1dfbf8:
    // 0x1dfbf8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1dfbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1dfbfc:
    // 0x1dfbfc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1dfc00:
    if (ctx->pc == 0x1DFC00u) {
        ctx->pc = 0x1DFC04u;
        goto label_1dfc04;
    }
    ctx->pc = 0x1DFBFCu;
    {
        const bool branch_taken_0x1dfbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfbfc) {
            ctx->pc = 0x1DFC7Cu;
            goto label_1dfc7c;
        }
    }
    ctx->pc = 0x1DFC04u;
label_1dfc04:
    // 0x1dfc04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dfc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dfc08:
    // 0x1dfc08: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1dfc0c:
    if (ctx->pc == 0x1DFC0Cu) {
        ctx->pc = 0x1DFC10u;
        goto label_1dfc10;
    }
    ctx->pc = 0x1DFC08u;
    {
        const bool branch_taken_0x1dfc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfc08) {
            ctx->pc = 0x1DFC7Cu;
            goto label_1dfc7c;
        }
    }
    ctx->pc = 0x1DFC10u;
label_1dfc10:
    // 0x1dfc10: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1dfc10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dfc14:
    // 0x1dfc14: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x1dfc14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_1dfc18:
    // 0x1dfc18: 0x320f809  jalr        $t9
label_1dfc1c:
    if (ctx->pc == 0x1DFC1Cu) {
        ctx->pc = 0x1DFC1Cu;
            // 0x1dfc1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC20u;
        goto label_1dfc20;
    }
    ctx->pc = 0x1DFC18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFC20u);
        ctx->pc = 0x1DFC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC18u;
            // 0x1dfc1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFC20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC20u; }
            if (ctx->pc != 0x1DFC20u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFC20u;
label_1dfc20:
    // 0x1dfc20: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1dfc24:
    if (ctx->pc == 0x1DFC24u) {
        ctx->pc = 0x1DFC28u;
        goto label_1dfc28;
    }
    ctx->pc = 0x1DFC20u;
    {
        const bool branch_taken_0x1dfc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfc20) {
            ctx->pc = 0x1DFC7Cu;
            goto label_1dfc7c;
        }
    }
    ctx->pc = 0x1DFC28u;
label_1dfc28:
    // 0x1dfc28: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1dfc28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dfc2c:
    // 0x1dfc2c: 0xc04a38a  jal         func_128E28
label_1dfc30:
    if (ctx->pc == 0x1DFC30u) {
        ctx->pc = 0x1DFC30u;
            // 0x1dfc30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC34u;
        goto label_1dfc34;
    }
    ctx->pc = 0x1DFC2Cu;
    SET_GPR_U32(ctx, 31, 0x1DFC34u);
    ctx->pc = 0x1DFC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC2Cu;
            // 0x1dfc30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC34u; }
        if (ctx->pc != 0x1DFC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC34u; }
        if (ctx->pc != 0x1DFC34u) { return; }
    }
    ctx->pc = 0x1DFC34u;
label_1dfc34:
    // 0x1dfc34: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_1dfc38:
    if (ctx->pc == 0x1DFC38u) {
        ctx->pc = 0x1DFC3Cu;
        goto label_1dfc3c;
    }
    ctx->pc = 0x1DFC34u;
    {
        const bool branch_taken_0x1dfc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfc34) {
            ctx->pc = 0x1DFC7Cu;
            goto label_1dfc7c;
        }
    }
    ctx->pc = 0x1DFC3Cu;
label_1dfc3c:
    // 0x1dfc3c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1dfc3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dfc40:
    // 0x1dfc40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dfc44:
    // 0x1dfc44: 0x8f390104  lw          $t9, 0x104($t9)
    ctx->pc = 0x1dfc44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 260)));
label_1dfc48:
    // 0x1dfc48: 0x320f809  jalr        $t9
label_1dfc4c:
    if (ctx->pc == 0x1DFC4Cu) {
        ctx->pc = 0x1DFC4Cu;
            // 0x1dfc4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC50u;
        goto label_1dfc50;
    }
    ctx->pc = 0x1DFC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFC50u);
        ctx->pc = 0x1DFC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC48u;
            // 0x1dfc4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFC50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC50u; }
            if (ctx->pc != 0x1DFC50u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFC50u;
label_1dfc50:
    // 0x1dfc50: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1dfc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dfc54:
    // 0x1dfc54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dfc54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dfc58:
    // 0x1dfc58: 0x0  nop
    ctx->pc = 0x1dfc58u;
    // NOP
label_1dfc5c:
    // 0x1dfc5c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1dfc60:
    if (ctx->pc == 0x1DFC60u) {
        ctx->pc = 0x1DFC64u;
        goto label_1dfc64;
    }
    ctx->pc = 0x1DFC5Cu;
    {
        const bool branch_taken_0x1dfc5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dfc5c) {
            ctx->pc = 0x1DFC7Cu;
            goto label_1dfc7c;
        }
    }
    ctx->pc = 0x1DFC64u;
label_1dfc64:
    // 0x1dfc64: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1dfc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dfc68:
    // 0x1dfc68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dfc68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dfc6c:
    // 0x1dfc6c: 0x0  nop
    ctx->pc = 0x1dfc6cu;
    // NOP
label_1dfc70:
    // 0x1dfc70: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dfc74:
    if (ctx->pc == 0x1DFC74u) {
        ctx->pc = 0x1DFC74u;
            // 0x1dfc74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DFC78u;
        goto label_1dfc78;
    }
    ctx->pc = 0x1DFC70u;
    {
        const bool branch_taken_0x1dfc70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DFC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC70u;
            // 0x1dfc74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc70) {
            ctx->pc = 0x1DFC7Cu;
            goto label_1dfc7c;
        }
    }
    ctx->pc = 0x1DFC78u;
label_1dfc78:
    // 0x1dfc78: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1dfc78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_1dfc7c:
    // 0x1dfc7c: 0x0  nop
    ctx->pc = 0x1dfc7cu;
    // NOP
label_1dfc80:
    // 0x1dfc80: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x1dfc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1dfc84:
    // 0x1dfc84: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1dfc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_1dfc88:
    // 0x1dfc88: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1dfc8c:
    if (ctx->pc == 0x1DFC8Cu) {
        ctx->pc = 0x1DFC90u;
        goto label_1dfc90;
    }
    ctx->pc = 0x1DFC88u;
    {
        const bool branch_taken_0x1dfc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfc88) {
            ctx->pc = 0x1DFCBCu;
            goto label_1dfcbc;
        }
    }
    ctx->pc = 0x1DFC90u;
label_1dfc90:
    // 0x1dfc90: 0x8e021150  lw          $v0, 0x1150($s0)
    ctx->pc = 0x1dfc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1dfc94:
    // 0x1dfc94: 0x80430054  lb          $v1, 0x54($v0)
    ctx->pc = 0x1dfc94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
label_1dfc98:
    // 0x1dfc98: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dfc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1dfc9c:
    // 0x1dfc9c: 0x146201f4  bne         $v1, $v0, . + 4 + (0x1F4 << 2)
label_1dfca0:
    if (ctx->pc == 0x1DFCA0u) {
        ctx->pc = 0x1DFCA4u;
        goto label_1dfca4;
    }
    ctx->pc = 0x1DFC9Cu;
    {
        const bool branch_taken_0x1dfc9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dfc9c) {
            ctx->pc = 0x1E0470u;
            goto label_1e0470;
        }
    }
    ctx->pc = 0x1DFCA4u;
label_1dfca4:
    // 0x1dfca4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1dfca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dfca8:
    // 0x1dfca8: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1dfca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1dfcac:
    // 0x1dfcac: 0x320f809  jalr        $t9
label_1dfcb0:
    if (ctx->pc == 0x1DFCB0u) {
        ctx->pc = 0x1DFCB0u;
            // 0x1dfcb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFCB4u;
        goto label_1dfcb4;
    }
    ctx->pc = 0x1DFCACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFCB4u);
        ctx->pc = 0x1DFCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFCACu;
            // 0x1dfcb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFCB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFCB4u; }
            if (ctx->pc != 0x1DFCB4u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFCB4u;
label_1dfcb4:
    // 0x1dfcb4: 0x100001ee  b           . + 4 + (0x1EE << 2)
label_1dfcb8:
    if (ctx->pc == 0x1DFCB8u) {
        ctx->pc = 0x1DFCBCu;
        goto label_1dfcbc;
    }
    ctx->pc = 0x1DFCB4u;
    {
        const bool branch_taken_0x1dfcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfcb4) {
            ctx->pc = 0x1E0470u;
            goto label_1e0470;
        }
    }
    ctx->pc = 0x1DFCBCu;
label_1dfcbc:
    // 0x1dfcbc: 0x0  nop
    ctx->pc = 0x1dfcbcu;
    // NOP
label_1dfcc0:
    // 0x1dfcc0: 0x86030730  lh          $v1, 0x730($s0)
    ctx->pc = 0x1dfcc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1840)));
label_1dfcc4:
    // 0x1dfcc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dfcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dfcc8:
    // 0x1dfcc8: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_1dfccc:
    if (ctx->pc == 0x1DFCCCu) {
        ctx->pc = 0x1DFCCCu;
            // 0x1dfccc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFCD0u;
        goto label_1dfcd0;
    }
    ctx->pc = 0x1DFCC8u;
    {
        const bool branch_taken_0x1dfcc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DFCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFCC8u;
            // 0x1dfccc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfcc8) {
            ctx->pc = 0x1DFD58u;
            goto label_1dfd58;
        }
    }
    ctx->pc = 0x1DFCD0u;
label_1dfcd0:
    // 0x1dfcd0: 0xc078170  jal         func_1E05C0
label_1dfcd4:
    if (ctx->pc == 0x1DFCD4u) {
        ctx->pc = 0x1DFCD4u;
            // 0x1dfcd4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFCD8u;
        goto label_1dfcd8;
    }
    ctx->pc = 0x1DFCD0u;
    SET_GPR_U32(ctx, 31, 0x1DFCD8u);
    ctx->pc = 0x1DFCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFCD0u;
            // 0x1dfcd4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E05C0u;
    if (runtime->hasFunction(0x1E05C0u)) {
        auto targetFn = runtime->lookupFunction(0x1E05C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFCD8u; }
        if (ctx->pc != 0x1DFCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunScript__11CMonsterManFi_0x1e05c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFCD8u; }
        if (ctx->pc != 0x1DFCD8u) { return; }
    }
    ctx->pc = 0x1DFCD8u;
label_1dfcd8:
    // 0x1dfcd8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1dfcd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dfcdc:
    // 0x1dfcdc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dfcdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dfce0:
    // 0x1dfce0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1dfce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1dfce4:
    // 0x1dfce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dfce8:
    // 0x1dfce8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1dfce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1dfcec:
    // 0x1dfcec: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1dfcecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1dfcf0:
    // 0x1dfcf0: 0x320f809  jalr        $t9
label_1dfcf4:
    if (ctx->pc == 0x1DFCF4u) {
        ctx->pc = 0x1DFCF4u;
            // 0x1dfcf4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1DFCF8u;
        goto label_1dfcf8;
    }
    ctx->pc = 0x1DFCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFCF8u);
        ctx->pc = 0x1DFCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFCF0u;
            // 0x1dfcf4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFCF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFCF8u; }
            if (ctx->pc != 0x1DFCF8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFCF8u;
label_1dfcf8:
    // 0x1dfcf8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1dfcf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dfcfc:
    // 0x1dfcfc: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1dfcfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1dfd00:
    // 0x1dfd00: 0x320f809  jalr        $t9
label_1dfd04:
    if (ctx->pc == 0x1DFD04u) {
        ctx->pc = 0x1DFD04u;
            // 0x1dfd04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD08u;
        goto label_1dfd08;
    }
    ctx->pc = 0x1DFD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFD08u);
        ctx->pc = 0x1DFD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD00u;
            // 0x1dfd04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFD08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD08u; }
            if (ctx->pc != 0x1DFD08u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFD08u;
label_1dfd08:
    // 0x1dfd08: 0x26100a20  addiu       $s0, $s0, 0xA20
    ctx->pc = 0x1dfd08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2592));
label_1dfd0c:
    // 0x1dfd0c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dfd0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfd10:
    // 0x1dfd10: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1dfd10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1dfd14:
    // 0x1dfd14: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1dfd18:
    if (ctx->pc == 0x1DFD18u) {
        ctx->pc = 0x1DFD1Cu;
        goto label_1dfd1c;
    }
    ctx->pc = 0x1DFD14u;
    {
        const bool branch_taken_0x1dfd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfd14) {
            ctx->pc = 0x1DFD3Cu;
            goto label_1dfd3c;
        }
    }
    ctx->pc = 0x1DFD1Cu;
label_1dfd1c:
    // 0x1dfd1c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1dfd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1dfd20:
    // 0x1dfd20: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1dfd24:
    if (ctx->pc == 0x1DFD24u) {
        ctx->pc = 0x1DFD24u;
            // 0x1dfd24: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1DFD28u;
        goto label_1dfd28;
    }
    ctx->pc = 0x1DFD20u;
    {
        const bool branch_taken_0x1dfd20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD20u;
            // 0x1dfd24: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd20) {
            ctx->pc = 0x1DFD34u;
            goto label_1dfd34;
        }
    }
    ctx->pc = 0x1DFD28u;
label_1dfd28:
    // 0x1dfd28: 0xc06e9a0  jal         func_1BA680
label_1dfd2c:
    if (ctx->pc == 0x1DFD2Cu) {
        ctx->pc = 0x1DFD30u;
        goto label_1dfd30;
    }
    ctx->pc = 0x1DFD28u;
    SET_GPR_U32(ctx, 31, 0x1DFD30u);
    ctx->pc = 0x1BA680u;
    if (runtime->hasFunction(0x1BA680u)) {
        auto targetFn = runtime->lookupFunction(0x1BA680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD30u; }
        if (ctx->pc != 0x1DFD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Delete__8CColPrimFi_0x1ba680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD30u; }
        if (ctx->pc != 0x1DFD30u) { return; }
    }
    ctx->pc = 0x1DFD30u;
label_1dfd30:
    // 0x1dfd30: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1dfd30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1dfd34:
    // 0x1dfd34: 0x0  nop
    ctx->pc = 0x1dfd34u;
    // NOP
label_1dfd38:
    // 0x1dfd38: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x1dfd38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_1dfd3c:
    // 0x1dfd3c: 0x0  nop
    ctx->pc = 0x1dfd3cu;
    // NOP
label_1dfd40:
    // 0x1dfd40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1dfd40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1dfd44:
    // 0x1dfd44: 0x2a22000b  slti        $v0, $s1, 0xB
    ctx->pc = 0x1dfd44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)11) ? 1 : 0);
label_1dfd48:
    // 0x1dfd48: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1dfd4c:
    if (ctx->pc == 0x1DFD4Cu) {
        ctx->pc = 0x1DFD50u;
        goto label_1dfd50;
    }
    ctx->pc = 0x1DFD48u;
    {
        const bool branch_taken_0x1dfd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfd48) {
            ctx->pc = 0x1DFD10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dfd10;
        }
    }
    ctx->pc = 0x1DFD50u;
label_1dfd50:
    // 0x1dfd50: 0x100001c7  b           . + 4 + (0x1C7 << 2)
label_1dfd54:
    if (ctx->pc == 0x1DFD54u) {
        ctx->pc = 0x1DFD58u;
        goto label_1dfd58;
    }
    ctx->pc = 0x1DFD50u;
    {
        const bool branch_taken_0x1dfd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfd50) {
            ctx->pc = 0x1E0470u;
            goto label_1e0470;
        }
    }
    ctx->pc = 0x1DFD58u;
label_1dfd58:
    // 0x1dfd58: 0xc0766e0  jal         func_1D9B80
label_1dfd5c:
    if (ctx->pc == 0x1DFD5Cu) {
        ctx->pc = 0x1DFD5Cu;
            // 0x1dfd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD60u;
        goto label_1dfd60;
    }
    ctx->pc = 0x1DFD58u;
    SET_GPR_U32(ctx, 31, 0x1DFD60u);
    ctx->pc = 0x1DFD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD58u;
            // 0x1dfd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B80u;
    if (runtime->hasFunction(0x1D9B80u)) {
        auto targetFn = runtime->lookupFunction(0x1D9B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD60u; }
        if (ctx->pc != 0x1DFD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckStatusAttr__14CActiveMonsterFv_0x1d9b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD60u; }
        if (ctx->pc != 0x1DFD60u) { return; }
    }
    ctx->pc = 0x1DFD60u;
label_1dfd60:
    // 0x1dfd60: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1dfd60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dfd64:
    // 0x1dfd64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dfd68:
    // 0x1dfd68: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1dfd68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1dfd6c:
    // 0x1dfd6c: 0x320f809  jalr        $t9
label_1dfd70:
    if (ctx->pc == 0x1DFD70u) {
        ctx->pc = 0x1DFD70u;
            // 0x1dfd70: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1DFD74u;
        goto label_1dfd74;
    }
    ctx->pc = 0x1DFD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFD74u);
        ctx->pc = 0x1DFD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD6Cu;
            // 0x1dfd70: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFD74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD74u; }
            if (ctx->pc != 0x1DFD74u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFD74u;
label_1dfd74:
    // 0x1dfd74: 0x860512e2  lh          $a1, 0x12E2($s0)
    ctx->pc = 0x1dfd74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4834)));
label_1dfd78:
    // 0x1dfd78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dfd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1dfd7c:
    // 0x1dfd7c: 0x8e131150  lw          $s3, 0x1150($s0)
    ctx->pc = 0x1dfd7cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1dfd80:
    // 0x1dfd80: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
label_1dfd84:
    if (ctx->pc == 0x1DFD84u) {
        ctx->pc = 0x1DFD84u;
            // 0x1dfd84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD88u;
        goto label_1dfd88;
    }
    ctx->pc = 0x1DFD80u;
    {
        const bool branch_taken_0x1dfd80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DFD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD80u;
            // 0x1dfd84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd80) {
            ctx->pc = 0x1DFD94u;
            goto label_1dfd94;
        }
    }
    ctx->pc = 0x1DFD88u;
label_1dfd88:
    // 0x1dfd88: 0xc0a0ed8  jal         func_283B60
label_1dfd8c:
    if (ctx->pc == 0x1DFD8Cu) {
        ctx->pc = 0x1DFD8Cu;
            // 0x1dfd8c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x1DFD90u;
        goto label_1dfd90;
    }
    ctx->pc = 0x1DFD88u;
    SET_GPR_U32(ctx, 31, 0x1DFD90u);
    ctx->pc = 0x1DFD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD88u;
            // 0x1dfd8c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD90u; }
        if (ctx->pc != 0x1DFD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD90u; }
        if (ctx->pc != 0x1DFD90u) { return; }
    }
    ctx->pc = 0x1DFD90u;
label_1dfd90:
    // 0x1dfd90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dfd90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dfd94:
    // 0x1dfd94: 0x0  nop
    ctx->pc = 0x1dfd94u;
    // NOP
label_1dfd98:
    // 0x1dfd98: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
label_1dfd9c:
    if (ctx->pc == 0x1DFD9Cu) {
        ctx->pc = 0x1DFDA0u;
        goto label_1dfda0;
    }
    ctx->pc = 0x1DFD98u;
    {
        const bool branch_taken_0x1dfd98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfd98) {
            ctx->pc = 0x1DFE4Cu;
            goto label_1dfe4c;
        }
    }
    ctx->pc = 0x1DFDA0u;
label_1dfda0:
    // 0x1dfda0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1dfda0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1dfda4:
    // 0x1dfda4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dfda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dfda8:
    // 0x1dfda8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1dfda8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1dfdac:
    // 0x1dfdac: 0x320f809  jalr        $t9
label_1dfdb0:
    if (ctx->pc == 0x1DFDB0u) {
        ctx->pc = 0x1DFDB0u;
            // 0x1dfdb0: 0x27a528e0  addiu       $a1, $sp, 0x28E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10464));
        ctx->pc = 0x1DFDB4u;
        goto label_1dfdb4;
    }
    ctx->pc = 0x1DFDACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFDB4u);
        ctx->pc = 0x1DFDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFDACu;
            // 0x1dfdb0: 0x27a528e0  addiu       $a1, $sp, 0x28E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10464));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFDB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDB4u; }
            if (ctx->pc != 0x1DFDB4u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFDB4u;
label_1dfdb4:
    // 0x1dfdb4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1dfdb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dfdb8:
    // 0x1dfdb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dfdbc:
    // 0x1dfdbc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1dfdbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1dfdc0:
    // 0x1dfdc0: 0x320f809  jalr        $t9
label_1dfdc4:
    if (ctx->pc == 0x1DFDC4u) {
        ctx->pc = 0x1DFDC4u;
            // 0x1dfdc4: 0x27a528f0  addiu       $a1, $sp, 0x28F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10480));
        ctx->pc = 0x1DFDC8u;
        goto label_1dfdc8;
    }
    ctx->pc = 0x1DFDC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFDC8u);
        ctx->pc = 0x1DFDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFDC0u;
            // 0x1dfdc4: 0x27a528f0  addiu       $a1, $sp, 0x28F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10480));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFDC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDC8u; }
            if (ctx->pc != 0x1DFDC8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFDC8u;
label_1dfdc8:
    // 0x1dfdc8: 0x27a428e0  addiu       $a0, $sp, 0x28E0
    ctx->pc = 0x1dfdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10464));
label_1dfdcc:
    // 0x1dfdcc: 0xc04c018  jal         func_130060
label_1dfdd0:
    if (ctx->pc == 0x1DFDD0u) {
        ctx->pc = 0x1DFDD0u;
            // 0x1dfdd0: 0x27a528f0  addiu       $a1, $sp, 0x28F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10480));
        ctx->pc = 0x1DFDD4u;
        goto label_1dfdd4;
    }
    ctx->pc = 0x1DFDCCu;
    SET_GPR_U32(ctx, 31, 0x1DFDD4u);
    ctx->pc = 0x1DFDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFDCCu;
            // 0x1dfdd0: 0x27a528f0  addiu       $a1, $sp, 0x28F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDD4u; }
        if (ctx->pc != 0x1DFDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDD4u; }
        if (ctx->pc != 0x1DFDD4u) { return; }
    }
    ctx->pc = 0x1DFDD4u;
label_1dfdd4:
    // 0x1dfdd4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1dfdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1dfdd8:
    // 0x1dfdd8: 0x27a528f0  addiu       $a1, $sp, 0x28F0
    ctx->pc = 0x1dfdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10480));
label_1dfddc:
    // 0x1dfddc: 0xe60012f4  swc1        $f0, 0x12F4($s0)
    ctx->pc = 0x1dfddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4852), bits); }
label_1dfde0:
    // 0x1dfde0: 0xc0765b0  jal         func_1D96C0
label_1dfde4:
    if (ctx->pc == 0x1DFDE4u) {
        ctx->pc = 0x1DFDE4u;
            // 0x1dfde4: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->pc = 0x1DFDE8u;
        goto label_1dfde8;
    }
    ctx->pc = 0x1DFDE0u;
    SET_GPR_U32(ctx, 31, 0x1DFDE8u);
    ctx->pc = 0x1DFDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFDE0u;
            // 0x1dfde4: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D96C0u;
    if (runtime->hasFunction(0x1D96C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D96C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDE8u; }
        if (ctx->pc != 0x1DFDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNaviDistance__11CAutoMapGenFPf_0x1d96c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDE8u; }
        if (ctx->pc != 0x1DFDE8u) { return; }
    }
    ctx->pc = 0x1DFDE8u;
label_1dfde8:
    // 0x1dfde8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dfde8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dfdec:
    // 0x1dfdec: 0x0  nop
    ctx->pc = 0x1dfdecu;
    // NOP
label_1dfdf0:
    // 0x1dfdf0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dfdf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dfdf4:
    // 0x1dfdf4: 0x0  nop
    ctx->pc = 0x1dfdf4u;
    // NOP
label_1dfdf8:
    // 0x1dfdf8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1dfdfc:
    if (ctx->pc == 0x1DFDFCu) {
        ctx->pc = 0x1DFDFCu;
            // 0x1dfdfc: 0x3c024b18  lui         $v0, 0x4B18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19224 << 16));
        ctx->pc = 0x1DFE00u;
        goto label_1dfe00;
    }
    ctx->pc = 0x1DFDF8u;
    {
        const bool branch_taken_0x1dfdf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DFDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFDF8u;
            // 0x1dfdfc: 0x3c024b18  lui         $v0, 0x4B18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfdf8) {
            ctx->pc = 0x1DFE08u;
            goto label_1dfe08;
        }
    }
    ctx->pc = 0x1DFE00u;
label_1dfe00:
    // 0x1dfe00: 0x3442967f  ori         $v0, $v0, 0x967F
    ctx->pc = 0x1dfe00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38527);
label_1dfe04:
    // 0x1dfe04: 0xae0212f4  sw          $v0, 0x12F4($s0)
    ctx->pc = 0x1dfe04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4852), GPR_U32(ctx, 2));
label_1dfe08:
    // 0x1dfe08: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1dfe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1dfe0c:
    // 0x1dfe0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dfe10:
    if (ctx->pc == 0x1DFE10u) {
        ctx->pc = 0x1DFE10u;
            // 0x1dfe10: 0x27a428d0  addiu       $a0, $sp, 0x28D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10448));
        ctx->pc = 0x1DFE14u;
        goto label_1dfe14;
    }
    ctx->pc = 0x1DFE0Cu;
    {
        const bool branch_taken_0x1dfe0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE0Cu;
            // 0x1dfe10: 0x27a428d0  addiu       $a0, $sp, 0x28D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe0c) {
            ctx->pc = 0x1DFE20u;
            goto label_1dfe20;
        }
    }
    ctx->pc = 0x1DFE14u;
label_1dfe14:
    // 0x1dfe14: 0xc04c018  jal         func_130060
label_1dfe18:
    if (ctx->pc == 0x1DFE18u) {
        ctx->pc = 0x1DFE18u;
            // 0x1dfe18: 0x27a528f0  addiu       $a1, $sp, 0x28F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10480));
        ctx->pc = 0x1DFE1Cu;
        goto label_1dfe1c;
    }
    ctx->pc = 0x1DFE14u;
    SET_GPR_U32(ctx, 31, 0x1DFE1Cu);
    ctx->pc = 0x1DFE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE14u;
            // 0x1dfe18: 0x27a528f0  addiu       $a1, $sp, 0x28F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE1Cu; }
        if (ctx->pc != 0x1DFE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE1Cu; }
        if (ctx->pc != 0x1DFE1Cu) { return; }
    }
    ctx->pc = 0x1DFE1Cu;
label_1dfe1c:
    // 0x1dfe1c: 0xe60012f8  swc1        $f0, 0x12F8($s0)
    ctx->pc = 0x1dfe1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4856), bits); }
label_1dfe20:
    // 0x1dfe20: 0x8e031330  lw          $v1, 0x1330($s0)
    ctx->pc = 0x1dfe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
label_1dfe24:
    // 0x1dfe24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dfe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dfe28:
    // 0x1dfe28: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1dfe2c:
    if (ctx->pc == 0x1DFE2Cu) {
        ctx->pc = 0x1DFE2Cu;
            // 0x1dfe2c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1DFE30u;
        goto label_1dfe30;
    }
    ctx->pc = 0x1DFE28u;
    {
        const bool branch_taken_0x1dfe28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DFE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE28u;
            // 0x1dfe2c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe28) {
            ctx->pc = 0x1DFE4Cu;
            goto label_1dfe4c;
        }
    }
    ctx->pc = 0x1DFE30u;
label_1dfe30:
    // 0x1dfe30: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1dfe30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
label_1dfe34:
    // 0x1dfe34: 0x84250080  lh          $a1, 0x80($at)
    ctx->pc = 0x1dfe34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 128)));
label_1dfe38:
    // 0x1dfe38: 0xc07675c  jal         func_1D9D70
label_1dfe3c:
    if (ctx->pc == 0x1DFE3Cu) {
        ctx->pc = 0x1DFE3Cu;
            // 0x1dfe3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE40u;
        goto label_1dfe40;
    }
    ctx->pc = 0x1DFE38u;
    SET_GPR_U32(ctx, 31, 0x1DFE40u);
    ctx->pc = 0x1DFE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE38u;
            // 0x1dfe3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9D70u;
    if (runtime->hasFunction(0x1D9D70u)) {
        auto targetFn = runtime->lookupFunction(0x1D9D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE40u; }
        if (ctx->pc != 0x1DFE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckView__14CActiveMonsterFi_0x1d9d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE40u; }
        if (ctx->pc != 0x1DFE40u) { return; }
    }
    ctx->pc = 0x1DFE40u;
label_1dfe40:
    // 0x1dfe40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dfe40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dfe44:
    // 0x1dfe44: 0x1043018a  beq         $v0, $v1, . + 4 + (0x18A << 2)
label_1dfe48:
    if (ctx->pc == 0x1DFE48u) {
        ctx->pc = 0x1DFE4Cu;
        goto label_1dfe4c;
    }
    ctx->pc = 0x1DFE44u;
    {
        const bool branch_taken_0x1dfe44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dfe44) {
            ctx->pc = 0x1E0470u;
            goto label_1e0470;
        }
    }
    ctx->pc = 0x1DFE4Cu;
label_1dfe4c:
    // 0x1dfe4c: 0x0  nop
    ctx->pc = 0x1dfe4cu;
    // NOP
label_1dfe50:
    // 0x1dfe50: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1dfe50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1dfe54:
    // 0x1dfe54: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1dfe54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dfe58:
    // 0x1dfe58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1dfe58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1dfe5c:
    // 0x1dfe5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1dfe5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1dfe60:
    // 0x1dfe60: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1dfe60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1dfe64:
    // 0x1dfe64: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x1dfe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1dfe68:
    // 0x1dfe68: 0x27a62900  addiu       $a2, $sp, 0x2900
    ctx->pc = 0x1dfe68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10496));
label_1dfe6c:
    // 0x1dfe6c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1dfe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_1dfe70:
    // 0x1dfe70: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1dfe70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1dfe74:
    // 0x1dfe74: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x1dfe74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1dfe78:
    // 0x1dfe78: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x1dfe78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1dfe7c:
    // 0x1dfe7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dfe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1dfe80:
    // 0x1dfe80: 0xafa2290c  sw          $v0, 0x290C($sp)
    ctx->pc = 0x1dfe80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10508), GPR_U32(ctx, 2));
label_1dfe84:
    // 0x1dfe84: 0xafa2291c  sw          $v0, 0x291C($sp)
    ctx->pc = 0x1dfe84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10524), GPR_U32(ctx, 2));
label_1dfe88:
    // 0x1dfe88: 0xe7a02900  swc1        $f0, 0x2900($sp)
    ctx->pc = 0x1dfe88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10496), bits); }
label_1dfe8c:
    // 0x1dfe8c: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x1dfe8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1dfe90:
    // 0x1dfe90: 0xe7a02910  swc1        $f0, 0x2910($sp)
    ctx->pc = 0x1dfe90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10512), bits); }
label_1dfe94:
    // 0x1dfe94: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x1dfe94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1dfe98:
    // 0x1dfe98: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x1dfe98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1dfe9c:
    // 0x1dfe9c: 0xe7a12908  swc1        $f1, 0x2908($sp)
    ctx->pc = 0x1dfe9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10504), bits); }
label_1dfea0:
    // 0x1dfea0: 0xe7a02918  swc1        $f0, 0x2918($sp)
    ctx->pc = 0x1dfea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10520), bits); }
label_1dfea4:
    // 0x1dfea4: 0x46042840  add.s       $f1, $f5, $f4
    ctx->pc = 0x1dfea4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_1dfea8:
    // 0x1dfea8: 0x46052001  sub.s       $f0, $f4, $f5
    ctx->pc = 0x1dfea8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
label_1dfeac:
    // 0x1dfeac: 0xe7a12904  swc1        $f1, 0x2904($sp)
    ctx->pc = 0x1dfeacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10500), bits); }
label_1dfeb0:
    // 0x1dfeb0: 0xe7a02914  swc1        $f0, 0x2914($sp)
    ctx->pc = 0x1dfeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10516), bits); }
label_1dfeb4:
    // 0x1dfeb4: 0x8ef90d00  lw          $t9, 0xD00($s7)
    ctx->pc = 0x1dfeb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 3328)));
label_1dfeb8:
    // 0x1dfeb8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1dfeb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1dfebc:
    // 0x1dfebc: 0x320f809  jalr        $t9
label_1dfec0:
    if (ctx->pc == 0x1DFEC0u) {
        ctx->pc = 0x1DFEC0u;
            // 0x1dfec0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1DFEC4u;
        goto label_1dfec4;
    }
    ctx->pc = 0x1DFEBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFEC4u);
        ctx->pc = 0x1DFEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFEBCu;
            // 0x1dfec0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFEC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFEC4u; }
            if (ctx->pc != 0x1DFEC4u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFEC4u;
label_1dfec4:
    // 0x1dfec4: 0x8fc4007c  lw          $a0, 0x7C($fp)
    ctx->pc = 0x1dfec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 124)));
label_1dfec8:
    // 0x1dfec8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1dfecc:
    if (ctx->pc == 0x1DFECCu) {
        ctx->pc = 0x1DFECCu;
            // 0x1dfecc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFED0u;
        goto label_1dfed0;
    }
    ctx->pc = 0x1DFEC8u;
    {
        const bool branch_taken_0x1dfec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFEC8u;
            // 0x1dfecc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfec8) {
            ctx->pc = 0x1DFEFCu;
            goto label_1dfefc;
        }
    }
    ctx->pc = 0x1DFED0u;
label_1dfed0:
    // 0x1dfed0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1dfed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1dfed4:
    // 0x1dfed4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1dfed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1dfed8:
    // 0x1dfed8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1dfed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1dfedc:
    // 0x1dfedc: 0x524023  subu        $t0, $v0, $s2
    ctx->pc = 0x1dfedcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1dfee0:
    // 0x1dfee0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1dfee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1dfee4:
    // 0x1dfee4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1dfee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1dfee8:
    // 0x1dfee8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1dfee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1dfeec:
    // 0x1dfeec: 0x27a72900  addiu       $a3, $sp, 0x2900
    ctx->pc = 0x1dfeecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 10496));
label_1dfef0:
    // 0x1dfef0: 0xc0a3248  jal         func_28C920
label_1dfef4:
    if (ctx->pc == 0x1DFEF4u) {
        ctx->pc = 0x1DFEF4u;
            // 0x1dfef4: 0x244600d0  addiu       $a2, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->pc = 0x1DFEF8u;
        goto label_1dfef8;
    }
    ctx->pc = 0x1DFEF0u;
    SET_GPR_U32(ctx, 31, 0x1DFEF8u);
    ctx->pc = 0x1DFEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFEF0u;
            // 0x1dfef4: 0x244600d0  addiu       $a2, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C920u;
    if (runtime->hasFunction(0x28C920u)) {
        auto targetFn = runtime->lookupFunction(0x28C920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFEF8u; }
        if (ctx->pc != 0x1DFEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PickupCollision__19CTreasureBoxManagerFPfP6CCPoly9mgVu0FBOXi_0x28c920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFEF8u; }
        if (ctx->pc != 0x1DFEF8u) { return; }
    }
    ctx->pc = 0x1DFEF8u;
label_1dfef8:
    // 0x1dfef8: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1dfef8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1dfefc:
    // 0x1dfefc: 0x0  nop
    ctx->pc = 0x1dfefcu;
    // NOP
label_1dff00:
    // 0x1dff00: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
label_1dff04:
    if (ctx->pc == 0x1DFF04u) {
        ctx->pc = 0x1DFF08u;
        goto label_1dff08;
    }
    ctx->pc = 0x1DFF00u;
    {
        const bool branch_taken_0x1dff00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dff00) {
            ctx->pc = 0x1DFFDCu;
            goto label_1dffdc;
        }
    }
    ctx->pc = 0x1DFF08u;
label_1dff08:
    // 0x1dff08: 0x8e031330  lw          $v1, 0x1330($s0)
    ctx->pc = 0x1dff08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
label_1dff0c:
    // 0x1dff0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dff10:
    // 0x1dff10: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
label_1dff14:
    if (ctx->pc == 0x1DFF14u) {
        ctx->pc = 0x1DFF18u;
        goto label_1dff18;
    }
    ctx->pc = 0x1DFF10u;
    {
        const bool branch_taken_0x1dff10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dff10) {
            ctx->pc = 0x1DFFDCu;
            goto label_1dffdc;
        }
    }
    ctx->pc = 0x1DFF18u;
label_1dff18:
    // 0x1dff18: 0x8e220774  lw          $v0, 0x774($s1)
    ctx->pc = 0x1dff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1908)));
label_1dff1c:
    // 0x1dff1c: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
label_1dff20:
    if (ctx->pc == 0x1DFF20u) {
        ctx->pc = 0x1DFF24u;
        goto label_1dff24;
    }
    ctx->pc = 0x1DFF1Cu;
    {
        const bool branch_taken_0x1dff1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1dff1c) {
            ctx->pc = 0x1DFFDCu;
            goto label_1dffdc;
        }
    }
    ctx->pc = 0x1DFF24u;
label_1dff24:
    // 0x1dff24: 0x86230770  lh          $v1, 0x770($s1)
    ctx->pc = 0x1dff24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
label_1dff28:
    // 0x1dff28: 0x26a20018  addiu       $v0, $s5, 0x18
    ctx->pc = 0x1dff28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
label_1dff2c:
    // 0x1dff2c: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
label_1dff30:
    if (ctx->pc == 0x1DFF30u) {
        ctx->pc = 0x1DFF34u;
        goto label_1dff34;
    }
    ctx->pc = 0x1DFF2Cu;
    {
        const bool branch_taken_0x1dff2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dff2c) {
            ctx->pc = 0x1DFFDCu;
            goto label_1dffdc;
        }
    }
    ctx->pc = 0x1DFF34u;
label_1dff34:
    // 0x1dff34: 0xc04a0ea  jal         func_1283A8
label_1dff38:
    if (ctx->pc == 0x1DFF38u) {
        ctx->pc = 0x1DFF3Cu;
        goto label_1dff3c;
    }
    ctx->pc = 0x1DFF34u;
    SET_GPR_U32(ctx, 31, 0x1DFF3Cu);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF3Cu; }
        if (ctx->pc != 0x1DFF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF3Cu; }
        if (ctx->pc != 0x1DFF3Cu) { return; }
    }
    ctx->pc = 0x1DFF3Cu;
label_1dff3c:
    // 0x1dff3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dff3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dff40:
    // 0x1dff40: 0x0  nop
    ctx->pc = 0x1dff40u;
    // NOP
label_1dff44:
    // 0x1dff44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1dff44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1dff48:
    // 0x1dff48: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1dff48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1dff4c:
    // 0x1dff4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dff4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dff50:
    // 0x1dff50: 0x0  nop
    ctx->pc = 0x1dff50u;
    // NOP
label_1dff54:
    // 0x1dff54: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1dff54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1dff58:
    // 0x1dff58: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1dff58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1dff5c:
    // 0x1dff5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dff5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dff60:
    // 0x1dff60: 0x0  nop
    ctx->pc = 0x1dff60u;
    // NOP
label_1dff64:
    // 0x1dff64: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1dff64u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1dff68:
    // 0x1dff68: 0x0  nop
    ctx->pc = 0x1dff68u;
    // NOP
label_1dff6c:
    // 0x1dff6c: 0x0  nop
    ctx->pc = 0x1dff6cu;
    // NOP
label_1dff70:
    // 0x1dff70: 0xc0a248c  jal         func_289230
label_1dff74:
    if (ctx->pc == 0x1DFF74u) {
        ctx->pc = 0x1DFF78u;
        goto label_1dff78;
    }
    ctx->pc = 0x1DFF70u;
    SET_GPR_U32(ctx, 31, 0x1DFF78u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF78u; }
        if (ctx->pc != 0x1DFF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF78u; }
        if (ctx->pc != 0x1DFF78u) { return; }
    }
    ctx->pc = 0x1DFF78u;
label_1dff78:
    // 0x1dff78: 0x8e0306a0  lw          $v1, 0x6A0($s0)
    ctx->pc = 0x1dff78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
label_1dff7c:
    // 0x1dff7c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1dff7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1dff80:
    // 0x1dff80: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1dff84:
    if (ctx->pc == 0x1DFF84u) {
        ctx->pc = 0x1DFF88u;
        goto label_1dff88;
    }
    ctx->pc = 0x1DFF80u;
    {
        const bool branch_taken_0x1dff80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dff80) {
            ctx->pc = 0x1DFF8Cu;
            goto label_1dff8c;
        }
    }
    ctx->pc = 0x1DFF88u;
label_1dff88:
    // 0x1dff88: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1dff88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1dff8c:
    // 0x1dff8c: 0x0  nop
    ctx->pc = 0x1dff8cu;
    // NOP
label_1dff90:
    // 0x1dff90: 0x8e230778  lw          $v1, 0x778($s1)
    ctx->pc = 0x1dff90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1912)));
label_1dff94:
    // 0x1dff94: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1dff98:
    if (ctx->pc == 0x1DFF98u) {
        ctx->pc = 0x1DFF9Cu;
        goto label_1dff9c;
    }
    ctx->pc = 0x1DFF94u;
    {
        const bool branch_taken_0x1dff94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dff94) {
            ctx->pc = 0x1DFFB0u;
            goto label_1dffb0;
        }
    }
    ctx->pc = 0x1DFF9Cu;
label_1dff9c:
    // 0x1dff9c: 0x82630063  lb          $v1, 0x63($s3)
    ctx->pc = 0x1dff9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 99)));
label_1dffa0:
    // 0x1dffa0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1dffa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1dffa4:
    // 0x1dffa4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1dffa8:
    if (ctx->pc == 0x1DFFA8u) {
        ctx->pc = 0x1DFFA8u;
            // 0x1dffa8: 0x24030320  addiu       $v1, $zero, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
        ctx->pc = 0x1DFFACu;
        goto label_1dffac;
    }
    ctx->pc = 0x1DFFA4u;
    {
        const bool branch_taken_0x1dffa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFFA4u;
            // 0x1dffa8: 0x24030320  addiu       $v1, $zero, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dffa4) {
            ctx->pc = 0x1DFFB0u;
            goto label_1dffb0;
        }
    }
    ctx->pc = 0x1DFFACu;
label_1dffac:
    // 0x1dffac: 0xa6031158  sh          $v1, 0x1158($s0)
    ctx->pc = 0x1dffacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4440), (uint16_t)GPR_U32(ctx, 3));
label_1dffb0:
    // 0x1dffb0: 0x8e240778  lw          $a0, 0x778($s1)
    ctx->pc = 0x1dffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1912)));
label_1dffb4:
    // 0x1dffb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dffb8:
    // 0x1dffb8: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_1dffbc:
    if (ctx->pc == 0x1DFFBCu) {
        ctx->pc = 0x1DFFC0u;
        goto label_1dffc0;
    }
    ctx->pc = 0x1DFFB8u;
    {
        const bool branch_taken_0x1dffb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dffb8) {
            ctx->pc = 0x1DFFD4u;
            goto label_1dffd4;
        }
    }
    ctx->pc = 0x1DFFC0u;
label_1dffc0:
    // 0x1dffc0: 0x82630064  lb          $v1, 0x64($s3)
    ctx->pc = 0x1dffc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 100)));
label_1dffc4:
    // 0x1dffc4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1dffc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1dffc8:
    // 0x1dffc8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1dffcc:
    if (ctx->pc == 0x1DFFCCu) {
        ctx->pc = 0x1DFFCCu;
            // 0x1dffcc: 0x24020384  addiu       $v0, $zero, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
        ctx->pc = 0x1DFFD0u;
        goto label_1dffd0;
    }
    ctx->pc = 0x1DFFC8u;
    {
        const bool branch_taken_0x1dffc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFFC8u;
            // 0x1dffcc: 0x24020384  addiu       $v0, $zero, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dffc8) {
            ctx->pc = 0x1DFFD4u;
            goto label_1dffd4;
        }
    }
    ctx->pc = 0x1DFFD0u;
label_1dffd0:
    // 0x1dffd0: 0xa6021158  sh          $v0, 0x1158($s0)
    ctx->pc = 0x1dffd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4440), (uint16_t)GPR_U32(ctx, 2));
label_1dffd4:
    // 0x1dffd4: 0x0  nop
    ctx->pc = 0x1dffd4u;
    // NOP
label_1dffd8:
    // 0x1dffd8: 0xae200774  sw          $zero, 0x774($s1)
    ctx->pc = 0x1dffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1908), GPR_U32(ctx, 0));
label_1dffdc:
    // 0x1dffdc: 0x0  nop
    ctx->pc = 0x1dffdcu;
    // NOP
label_1dffe0:
    // 0x1dffe0: 0x8e030bdc  lw          $v1, 0xBDC($s0)
    ctx->pc = 0x1dffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3036)));
label_1dffe4:
    // 0x1dffe4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1dffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dffe8:
    // 0x1dffe8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1dffec:
    if (ctx->pc == 0x1DFFECu) {
        ctx->pc = 0x1DFFECu;
            // 0x1dffec: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->pc = 0x1DFFF0u;
        goto label_1dfff0;
    }
    ctx->pc = 0x1DFFE8u;
    {
        const bool branch_taken_0x1dffe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DFFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFFE8u;
            // 0x1dffec: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dffe8) {
            ctx->pc = 0x1DFFF8u;
            goto label_1dfff8;
        }
    }
    ctx->pc = 0x1DFFF0u;
label_1dfff0:
    // 0x1dfff0: 0xa6021158  sh          $v0, 0x1158($s0)
    ctx->pc = 0x1dfff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4440), (uint16_t)GPR_U32(ctx, 2));
label_1dfff4:
    // 0x1dfff4: 0xae000bdc  sw          $zero, 0xBDC($s0)
    ctx->pc = 0x1dfff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3036), GPR_U32(ctx, 0));
label_1dfff8:
    // 0x1dfff8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dfff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dfffc:
    // 0x1dfffc: 0xc078170  jal         func_1E05C0
label_1e0000:
    if (ctx->pc == 0x1E0000u) {
        ctx->pc = 0x1E0000u;
            // 0x1e0000: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E0004u;
        goto label_1e0004;
    }
    ctx->pc = 0x1DFFFCu;
    SET_GPR_U32(ctx, 31, 0x1E0004u);
    ctx->pc = 0x1E0000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFFFCu;
            // 0x1e0000: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E05C0u;
    if (runtime->hasFunction(0x1E05C0u)) {
        auto targetFn = runtime->lookupFunction(0x1E05C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0004u; }
        if (ctx->pc != 0x1E0004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunScript__11CMonsterManFi_0x1e05c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0004u; }
        if (ctx->pc != 0x1E0004u) { return; }
    }
    ctx->pc = 0x1E0004u;
label_1e0004:
    // 0x1e0004: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e0004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e0008:
    // 0x1e0008: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e0008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e000c:
    // 0x1e000c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e000cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e0010:
    // 0x1e0010: 0xc077d48  jal         func_1DF520
label_1e0014:
    if (ctx->pc == 0x1E0014u) {
        ctx->pc = 0x1E0014u;
            // 0x1e0014: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1E0018u;
        goto label_1e0018;
    }
    ctx->pc = 0x1E0010u;
    SET_GPR_U32(ctx, 31, 0x1E0018u);
    ctx->pc = 0x1E0014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0010u;
            // 0x1e0014: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF520u;
    if (runtime->hasFunction(0x1DF520u)) {
        auto targetFn = runtime->lookupFunction(0x1DF520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0018u; }
        if (ctx->pc != 0x1E0018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveUnit__11CMonsterManFP14CActiveMonsterP6CCPolyi_0x1df520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0018u; }
        if (ctx->pc != 0x1E0018u) { return; }
    }
    ctx->pc = 0x1E0018u;
label_1e0018:
    // 0x1e0018: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e0018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e001c:
    // 0x1e001c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e001cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0020:
    // 0x1e0020: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x1e0020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_1e0024:
    // 0x1e0024: 0x24520a20  addiu       $s2, $v0, 0xA20
    ctx->pc = 0x1e0024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2592));
label_1e0028:
    // 0x1e0028: 0x80420a20  lb          $v0, 0xA20($v0)
    ctx->pc = 0x1e0028u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2592)));
label_1e002c:
    // 0x1e002c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_1e0030:
    if (ctx->pc == 0x1E0030u) {
        ctx->pc = 0x1E0034u;
        goto label_1e0034;
    }
    ctx->pc = 0x1E002Cu;
    {
        const bool branch_taken_0x1e002c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e002c) {
            ctx->pc = 0x1E00FCu;
            goto label_1e00fc;
        }
    }
    ctx->pc = 0x1E0034u;
label_1e0034:
    // 0x1e0034: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e0034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e0038:
    // 0x1e0038: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1e0038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1e003c:
    // 0x1e003c: 0x8f390108  lw          $t9, 0x108($t9)
    ctx->pc = 0x1e003cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 264)));
label_1e0040:
    // 0x1e0040: 0x320f809  jalr        $t9
label_1e0044:
    if (ctx->pc == 0x1E0044u) {
        ctx->pc = 0x1E0044u;
            // 0x1e0044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E0048u;
        goto label_1e0048;
    }
    ctx->pc = 0x1E0040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0048u);
        ctx->pc = 0x1E0044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0040u;
            // 0x1e0044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0048u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0048u; }
            if (ctx->pc != 0x1E0048u) { return; }
        }
        }
    }
    ctx->pc = 0x1E0048u;
label_1e0048:
    // 0x1e0048: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1e0048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e004c:
    // 0x1e004c: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
label_1e0050:
    if (ctx->pc == 0x1E0050u) {
        ctx->pc = 0x1E0054u;
        goto label_1e0054;
    }
    ctx->pc = 0x1E004Cu;
    {
        const bool branch_taken_0x1e004c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e004c) {
            ctx->pc = 0x1E00C4u;
            goto label_1e00c4;
        }
    }
    ctx->pc = 0x1E0054u;
label_1e0054:
    // 0x1e0054: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x1e0054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e0058:
    // 0x1e0058: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e0058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e005c:
    // 0x1e005c: 0x0  nop
    ctx->pc = 0x1e005cu;
    // NOP
label_1e0060:
    // 0x1e0060: 0x45010026  bc1t        . + 4 + (0x26 << 2)
label_1e0064:
    if (ctx->pc == 0x1E0064u) {
        ctx->pc = 0x1E0068u;
        goto label_1e0068;
    }
    ctx->pc = 0x1E0060u;
    {
        const bool branch_taken_0x1e0060 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0060) {
            ctx->pc = 0x1E00FCu;
            goto label_1e00fc;
        }
    }
    ctx->pc = 0x1E0068u;
label_1e0068:
    // 0x1e0068: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x1e0068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e006c:
    // 0x1e006c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e006cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e0070:
    // 0x1e0070: 0x0  nop
    ctx->pc = 0x1e0070u;
    // NOP
label_1e0074:
    // 0x1e0074: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_1e0078:
    if (ctx->pc == 0x1E0078u) {
        ctx->pc = 0x1E0078u;
            // 0x1e0078: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1E007Cu;
        goto label_1e007c;
    }
    ctx->pc = 0x1E0074u;
    {
        const bool branch_taken_0x1e0074 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0074u;
            // 0x1e0078: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0074) {
            ctx->pc = 0x1E00FCu;
            goto label_1e00fc;
        }
    }
    ctx->pc = 0x1E007Cu;
label_1e007c:
    // 0x1e007c: 0xc06e9c0  jal         func_1BA700
label_1e0080:
    if (ctx->pc == 0x1E0080u) {
        ctx->pc = 0x1E0080u;
            // 0x1e0080: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->pc = 0x1E0084u;
        goto label_1e0084;
    }
    ctx->pc = 0x1E007Cu;
    SET_GPR_U32(ctx, 31, 0x1E0084u);
    ctx->pc = 0x1E0080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E007Cu;
            // 0x1e0080: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA700u;
    if (runtime->hasFunction(0x1BA700u)) {
        auto targetFn = runtime->lookupFunction(0x1BA700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0084u; }
        if (ctx->pc != 0x1E0084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrim__11CColPrimManFv_0x1ba700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0084u; }
        if (ctx->pc != 0x1E0084u) { return; }
    }
    ctx->pc = 0x1E0084u;
label_1e0084:
    // 0x1e0084: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x1e0084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_1e0088:
    // 0x1e0088: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1e0088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e008c:
    // 0x1e008c: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_1e0090:
    if (ctx->pc == 0x1E0090u) {
        ctx->pc = 0x1E0094u;
        goto label_1e0094;
    }
    ctx->pc = 0x1E008Cu;
    {
        const bool branch_taken_0x1e008c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e008c) {
            ctx->pc = 0x1E00FCu;
            goto label_1e00fc;
        }
    }
    ctx->pc = 0x1E0094u;
label_1e0094:
    // 0x1e0094: 0x8e060670  lw          $a2, 0x670($s0)
    ctx->pc = 0x1e0094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
label_1e0098:
    // 0x1e0098: 0xc06e718  jal         func_1B9C60
label_1e009c:
    if (ctx->pc == 0x1E009Cu) {
        ctx->pc = 0x1E009Cu;
            // 0x1e009c: 0x8e450020  lw          $a1, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->pc = 0x1E00A0u;
        goto label_1e00a0;
    }
    ctx->pc = 0x1E0098u;
    SET_GPR_U32(ctx, 31, 0x1E00A0u);
    ctx->pc = 0x1E009Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0098u;
            // 0x1e009c: 0x8e450020  lw          $a1, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9C60u;
    if (runtime->hasFunction(0x1B9C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00A0u; }
        if (ctx->pc != 0x1E00A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamage__8CColPrimFPci_0x1b9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00A0u; }
        if (ctx->pc != 0x1E00A0u) { return; }
    }
    ctx->pc = 0x1E00A0u;
label_1e00a0:
    // 0x1e00a0: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x1e00a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e00a4:
    // 0x1e00a4: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1e00a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e00a8:
    // 0x1e00a8: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x1e00a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1e00ac:
    // 0x1e00ac: 0xc06e7d4  jal         func_1B9F50
label_1e00b0:
    if (ctx->pc == 0x1E00B0u) {
        ctx->pc = 0x1E00B0u;
            // 0x1e00b0: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->pc = 0x1E00B4u;
        goto label_1e00b4;
    }
    ctx->pc = 0x1E00ACu;
    SET_GPR_U32(ctx, 31, 0x1E00B4u);
    ctx->pc = 0x1E00B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E00ACu;
            // 0x1e00b0: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9F50u;
    if (runtime->hasFunction(0x1B9F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B9F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00B4u; }
        if (ctx->pc != 0x1E00B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCoord__8CColPrimFP8mgCFrameP8mgCFramef_0x1b9f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00B4u; }
        if (ctx->pc != 0x1E00B4u) { return; }
    }
    ctx->pc = 0x1E00B4u;
label_1e00b4:
    // 0x1e00b4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1e00b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e00b8:
    // 0x1e00b8: 0x96031318  lhu         $v1, 0x1318($s0)
    ctx->pc = 0x1e00b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4888)));
label_1e00bc:
    // 0x1e00bc: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e00c0:
    if (ctx->pc == 0x1E00C0u) {
        ctx->pc = 0x1E00C0u;
            // 0x1e00c0: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->pc = 0x1E00C4u;
        goto label_1e00c4;
    }
    ctx->pc = 0x1E00BCu;
    {
        const bool branch_taken_0x1e00bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E00C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E00BCu;
            // 0x1e00c0: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e00bc) {
            ctx->pc = 0x1E00FCu;
            goto label_1e00fc;
        }
    }
    ctx->pc = 0x1E00C4u;
label_1e00c4:
    // 0x1e00c4: 0x0  nop
    ctx->pc = 0x1e00c4u;
    // NOP
label_1e00c8:
    // 0x1e00c8: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x1e00c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e00cc:
    // 0x1e00cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e00ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e00d0:
    // 0x1e00d0: 0x0  nop
    ctx->pc = 0x1e00d0u;
    // NOP
label_1e00d4:
    // 0x1e00d4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1e00d8:
    if (ctx->pc == 0x1E00D8u) {
        ctx->pc = 0x1E00DCu;
        goto label_1e00dc;
    }
    ctx->pc = 0x1E00D4u;
    {
        const bool branch_taken_0x1e00d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e00d4) {
            ctx->pc = 0x1E00F0u;
            goto label_1e00f0;
        }
    }
    ctx->pc = 0x1E00DCu;
label_1e00dc:
    // 0x1e00dc: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x1e00dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e00e0:
    // 0x1e00e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e00e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e00e4:
    // 0x1e00e4: 0x0  nop
    ctx->pc = 0x1e00e4u;
    // NOP
label_1e00e8:
    // 0x1e00e8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1e00ec:
    if (ctx->pc == 0x1E00ECu) {
        ctx->pc = 0x1E00F0u;
        goto label_1e00f0;
    }
    ctx->pc = 0x1E00E8u;
    {
        const bool branch_taken_0x1e00e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e00e8) {
            ctx->pc = 0x1E00FCu;
            goto label_1e00fc;
        }
    }
    ctx->pc = 0x1E00F0u;
label_1e00f0:
    // 0x1e00f0: 0xc06e9a0  jal         func_1BA680
label_1e00f4:
    if (ctx->pc == 0x1E00F4u) {
        ctx->pc = 0x1E00F4u;
            // 0x1e00f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1E00F8u;
        goto label_1e00f8;
    }
    ctx->pc = 0x1E00F0u;
    SET_GPR_U32(ctx, 31, 0x1E00F8u);
    ctx->pc = 0x1E00F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E00F0u;
            // 0x1e00f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA680u;
    if (runtime->hasFunction(0x1BA680u)) {
        auto targetFn = runtime->lookupFunction(0x1BA680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00F8u; }
        if (ctx->pc != 0x1E00F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Delete__8CColPrimFi_0x1ba680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00F8u; }
        if (ctx->pc != 0x1E00F8u) { return; }
    }
    ctx->pc = 0x1E00F8u;
label_1e00f8:
    // 0x1e00f8: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x1e00f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_1e00fc:
    // 0x1e00fc: 0x0  nop
    ctx->pc = 0x1e00fcu;
    // NOP
label_1e0100:
    // 0x1e0100: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e0100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e0104:
    // 0x1e0104: 0x2a22000b  slti        $v0, $s1, 0xB
    ctx->pc = 0x1e0104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)11) ? 1 : 0);
label_1e0108:
    // 0x1e0108: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
label_1e010c:
    if (ctx->pc == 0x1E010Cu) {
        ctx->pc = 0x1E010Cu;
            // 0x1e010c: 0x26730028  addiu       $s3, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->pc = 0x1E0110u;
        goto label_1e0110;
    }
    ctx->pc = 0x1E0108u;
    {
        const bool branch_taken_0x1e0108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E010Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0108u;
            // 0x1e010c: 0x26730028  addiu       $s3, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0108) {
            ctx->pc = 0x1E0020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e0020;
        }
    }
    ctx->pc = 0x1E0110u;
label_1e0110:
    // 0x1e0110: 0x8e031330  lw          $v1, 0x1330($s0)
    ctx->pc = 0x1e0110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
label_1e0114:
    // 0x1e0114: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e0114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e0118:
    // 0x1e0118: 0x14620041  bne         $v1, $v0, . + 4 + (0x41 << 2)
label_1e011c:
    if (ctx->pc == 0x1E011Cu) {
        ctx->pc = 0x1E0120u;
        goto label_1e0120;
    }
    ctx->pc = 0x1E0118u;
    {
        const bool branch_taken_0x1e0118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e0118) {
            ctx->pc = 0x1E0220u;
            goto label_1e0220;
        }
    }
    ctx->pc = 0x1E0120u;
label_1e0120:
    // 0x1e0120: 0x8e021334  lw          $v0, 0x1334($s0)
    ctx->pc = 0x1e0120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
label_1e0124:
    // 0x1e0124: 0x1840003e  blez        $v0, . + 4 + (0x3E << 2)
label_1e0128:
    if (ctx->pc == 0x1E0128u) {
        ctx->pc = 0x1E0128u;
            // 0x1e0128: 0x2443fffd  addiu       $v1, $v0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
        ctx->pc = 0x1E012Cu;
        goto label_1e012c;
    }
    ctx->pc = 0x1E0124u;
    {
        const bool branch_taken_0x1e0124 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E0128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0124u;
            // 0x1e0128: 0x2443fffd  addiu       $v1, $v0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0124) {
            ctx->pc = 0x1E0220u;
            goto label_1e0220;
        }
    }
    ctx->pc = 0x1E012Cu;
label_1e012c:
    // 0x1e012c: 0xae031334  sw          $v1, 0x1334($s0)
    ctx->pc = 0x1e012cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 3));
label_1e0130:
    // 0x1e0130: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1e0130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1e0134:
    // 0x1e0134: 0xc6011334  lwc1        $f1, 0x1334($s0)
    ctx->pc = 0x1e0134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e0138:
    // 0x1e0138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e013c:
    // 0x1e013c: 0x0  nop
    ctx->pc = 0x1e013cu;
    // NOP
label_1e0140:
    // 0x1e0140: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e0140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e0144:
    // 0x1e0144: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e0144u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1e0148:
    // 0x1e0148: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x1e0148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_1e014c:
    // 0x1e014c: 0xae000be8  sw          $zero, 0xBE8($s0)
    ctx->pc = 0x1e014cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3048), GPR_U32(ctx, 0));
label_1e0150:
    // 0x1e0150: 0x8e021348  lw          $v0, 0x1348($s0)
    ctx->pc = 0x1e0150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4936)));
label_1e0154:
    // 0x1e0154: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1e0154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1e0158:
    // 0x1e0158: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e015c:
    if (ctx->pc == 0x1E015Cu) {
        ctx->pc = 0x1E0160u;
        goto label_1e0160;
    }
    ctx->pc = 0x1E0158u;
    {
        const bool branch_taken_0x1e0158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0158) {
            ctx->pc = 0x1E016Cu;
            goto label_1e016c;
        }
    }
    ctx->pc = 0x1E0160u;
label_1e0160:
    // 0x1e0160: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1e0160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
label_1e0164:
    // 0x1e0164: 0xae001334  sw          $zero, 0x1334($s0)
    ctx->pc = 0x1e0164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 0));
label_1e0168:
    // 0x1e0168: 0xae000be8  sw          $zero, 0xBE8($s0)
    ctx->pc = 0x1e0168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3048), GPR_U32(ctx, 0));
label_1e016c:
    // 0x1e016c: 0x0  nop
    ctx->pc = 0x1e016cu;
    // NOP
label_1e0170:
    // 0x1e0170: 0x8e021334  lw          $v0, 0x1334($s0)
    ctx->pc = 0x1e0170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
label_1e0174:
    // 0x1e0174: 0x1c40002a  bgtz        $v0, . + 4 + (0x2A << 2)
label_1e0178:
    if (ctx->pc == 0x1E0178u) {
        ctx->pc = 0x1E017Cu;
        goto label_1e017c;
    }
    ctx->pc = 0x1E0174u;
    {
        const bool branch_taken_0x1e0174 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e0174) {
            ctx->pc = 0x1E0220u;
            goto label_1e0220;
        }
    }
    ctx->pc = 0x1E017Cu;
label_1e017c:
    // 0x1e017c: 0x8e021150  lw          $v0, 0x1150($s0)
    ctx->pc = 0x1e017cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1e0180:
    // 0x1e0180: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1e0180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e0184:
    // 0x1e0184: 0xc068444  jal         func_1A1110
label_1e0188:
    if (ctx->pc == 0x1E0188u) {
        ctx->pc = 0x1E0188u;
            // 0x1e0188: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E018Cu;
        goto label_1e018c;
    }
    ctx->pc = 0x1E0184u;
    SET_GPR_U32(ctx, 31, 0x1E018Cu);
    ctx->pc = 0x1E0188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0184u;
            // 0x1e0188: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1110u;
    if (runtime->hasFunction(0x1A1110u)) {
        auto targetFn = runtime->lookupFunction(0x1A1110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E018Cu; }
        if (ctx->pc != 0x1E018Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KillMonsterCount__Fii_0x1a1110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E018Cu; }
        if (ctx->pc != 0x1E018Cu) { return; }
    }
    ctx->pc = 0x1E018Cu;
label_1e018c:
    // 0x1e018c: 0xae001334  sw          $zero, 0x1334($s0)
    ctx->pc = 0x1e018cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 0));
label_1e0190:
    // 0x1e0190: 0xae001330  sw          $zero, 0x1330($s0)
    ctx->pc = 0x1e0190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4912), GPR_U32(ctx, 0));
label_1e0194:
    // 0x1e0194: 0xa600068a  sh          $zero, 0x68A($s0)
    ctx->pc = 0x1e0194u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1674), (uint16_t)GPR_U32(ctx, 0));
label_1e0198:
    // 0x1e0198: 0x8f838d88  lw          $v1, -0x7278($gp)
    ctx->pc = 0x1e0198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937992)));
label_1e019c:
    // 0x1e019c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1e01a0:
    if (ctx->pc == 0x1E01A0u) {
        ctx->pc = 0x1E01A4u;
        goto label_1e01a4;
    }
    ctx->pc = 0x1E019Cu;
    {
        const bool branch_taken_0x1e019c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e019c) {
            ctx->pc = 0x1E01B0u;
            goto label_1e01b0;
        }
    }
    ctx->pc = 0x1E01A4u;
label_1e01a4:
    // 0x1e01a4: 0x94620010  lhu         $v0, 0x10($v1)
    ctx->pc = 0x1e01a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_1e01a8:
    // 0x1e01a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e01ac:
    // 0x1e01ac: 0xa4620010  sh          $v0, 0x10($v1)
    ctx->pc = 0x1e01acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 2));
label_1e01b0:
    // 0x1e01b0: 0x86021354  lh          $v0, 0x1354($s0)
    ctx->pc = 0x1e01b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4948)));
label_1e01b4:
    // 0x1e01b4: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
label_1e01b8:
    if (ctx->pc == 0x1E01B8u) {
        ctx->pc = 0x1E01B8u;
            // 0x1e01b8: 0x27848de8  addiu       $a0, $gp, -0x7218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938088));
        ctx->pc = 0x1E01BCu;
        goto label_1e01bc;
    }
    ctx->pc = 0x1E01B4u;
    {
        const bool branch_taken_0x1e01b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E01B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E01B4u;
            // 0x1e01b8: 0x27848de8  addiu       $a0, $gp, -0x7218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e01b4) {
            ctx->pc = 0x1E0220u;
            goto label_1e0220;
        }
    }
    ctx->pc = 0x1E01BCu;
label_1e01bc:
    // 0x1e01bc: 0xc06e574  jal         func_1B95D0
label_1e01c0:
    if (ctx->pc == 0x1E01C0u) {
        ctx->pc = 0x1E01C0u;
            // 0x1e01c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E01C4u;
        goto label_1e01c4;
    }
    ctx->pc = 0x1E01BCu;
    SET_GPR_U32(ctx, 31, 0x1E01C4u);
    ctx->pc = 0x1E01C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E01BCu;
            // 0x1e01c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B95D0u;
    if (runtime->hasFunction(0x1B95D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B95D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E01C4u; }
        if (ctx->pc != 0x1E01C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetList__16CPullItemManagerFi_0x1b95d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E01C4u; }
        if (ctx->pc != 0x1E01C4u) { return; }
    }
    ctx->pc = 0x1E01C4u;
label_1e01c4:
    // 0x1e01c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e01c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e01c8:
    // 0x1e01c8: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_1e01cc:
    if (ctx->pc == 0x1E01CCu) {
        ctx->pc = 0x1E01CCu;
            // 0x1e01cc: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->pc = 0x1E01D0u;
        goto label_1e01d0;
    }
    ctx->pc = 0x1E01C8u;
    {
        const bool branch_taken_0x1e01c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E01CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E01C8u;
            // 0x1e01cc: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e01c8) {
            ctx->pc = 0x1E0220u;
            goto label_1e0220;
        }
    }
    ctx->pc = 0x1E01D0u;
label_1e01d0:
    // 0x1e01d0: 0x27a32930  addiu       $v1, $sp, 0x2930
    ctx->pc = 0x1e01d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 10544));
label_1e01d4:
    // 0x1e01d4: 0x2442d2e0  addiu       $v0, $v0, -0x2D20
    ctx->pc = 0x1e01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955744));
label_1e01d8:
    // 0x1e01d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e01d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e01dc:
    // 0x1e01dc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1e01dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1e01e0:
    // 0x1e01e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e01e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e01e4:
    // 0x1e01e4: 0x27a62920  addiu       $a2, $sp, 0x2920
    ctx->pc = 0x1e01e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10528));
label_1e01e8:
    // 0x1e01e8: 0xc05d3d4  jal         func_174F50
label_1e01ec:
    if (ctx->pc == 0x1E01ECu) {
        ctx->pc = 0x1E01ECu;
            // 0x1e01ec: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x1E01F0u;
        goto label_1e01f0;
    }
    ctx->pc = 0x1E01E8u;
    SET_GPR_U32(ctx, 31, 0x1E01F0u);
    ctx->pc = 0x1E01ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E01E8u;
            // 0x1e01ec: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E01F0u; }
        if (ctx->pc != 0x1E01F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E01F0u; }
        if (ctx->pc != 0x1E01F0u) { return; }
    }
    ctx->pc = 0x1E01F0u;
label_1e01f0:
    // 0x1e01f0: 0xc7a12924  lwc1        $f1, 0x2924($sp)
    ctx->pc = 0x1e01f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e01f4:
    // 0x1e01f4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1e01f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1e01f8:
    // 0x1e01f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e01f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e01fc:
    // 0x1e01fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e01fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e0200:
    // 0x1e0200: 0x27a52920  addiu       $a1, $sp, 0x2920
    ctx->pc = 0x1e0200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10528));
label_1e0204:
    // 0x1e0204: 0x27a62930  addiu       $a2, $sp, 0x2930
    ctx->pc = 0x1e0204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10544));
label_1e0208:
    // 0x1e0208: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1e0208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e020c:
    // 0x1e020c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e020cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e0210:
    // 0x1e0210: 0xc06e46c  jal         func_1B91B0
label_1e0214:
    if (ctx->pc == 0x1E0214u) {
        ctx->pc = 0x1E0214u;
            // 0x1e0214: 0xe7a02924  swc1        $f0, 0x2924($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10532), bits); }
        ctx->pc = 0x1E0218u;
        goto label_1e0218;
    }
    ctx->pc = 0x1E0210u;
    SET_GPR_U32(ctx, 31, 0x1E0218u);
    ctx->pc = 0x1E0214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0210u;
            // 0x1e0214: 0xe7a02924  swc1        $f0, 0x2924($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10532), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (runtime->hasFunction(0x1B91B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B91B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0218u; }
        if (ctx->pc != 0x1E0218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetItem__9CPullItemFPfPfi_0x1b91b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0218u; }
        if (ctx->pc != 0x1E0218u) { return; }
    }
    ctx->pc = 0x1E0218u;
label_1e0218:
    // 0x1e0218: 0x86021354  lh          $v0, 0x1354($s0)
    ctx->pc = 0x1e0218u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4948)));
label_1e021c:
    // 0x1e021c: 0xa622006c  sh          $v0, 0x6C($s1)
    ctx->pc = 0x1e021cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 108), (uint16_t)GPR_U32(ctx, 2));
label_1e0220:
    // 0x1e0220: 0xc0726d0  jal         func_1C9B40
label_1e0224:
    if (ctx->pc == 0x1E0224u) {
        ctx->pc = 0x1E0224u;
            // 0x1e0224: 0x26041270  addiu       $a0, $s0, 0x1270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4720));
        ctx->pc = 0x1E0228u;
        goto label_1e0228;
    }
    ctx->pc = 0x1E0220u;
    SET_GPR_U32(ctx, 31, 0x1E0228u);
    ctx->pc = 0x1E0224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0220u;
            // 0x1e0224: 0x26041270  addiu       $a0, $s0, 0x1270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9B40u;
    if (runtime->hasFunction(0x1C9B40u)) {
        auto targetFn = runtime->lookupFunction(0x1C9B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0228u; }
        if (ctx->pc != 0x1E0228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__7CPiyoriFv_0x1c9b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0228u; }
        if (ctx->pc != 0x1E0228u) { return; }
    }
    ctx->pc = 0x1E0228u;
label_1e0228:
    // 0x1e0228: 0xc0727a8  jal         func_1C9EA0
label_1e022c:
    if (ctx->pc == 0x1E022Cu) {
        ctx->pc = 0x1E022Cu;
            // 0x1e022c: 0x26041290  addiu       $a0, $s0, 0x1290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4752));
        ctx->pc = 0x1E0230u;
        goto label_1e0230;
    }
    ctx->pc = 0x1E0228u;
    SET_GPR_U32(ctx, 31, 0x1E0230u);
    ctx->pc = 0x1E022Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0228u;
            // 0x1e022c: 0x26041290  addiu       $a0, $s0, 0x1290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9EA0u;
    if (runtime->hasFunction(0x1C9EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1C9EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0230u; }
        if (ctx->pc != 0x1E0230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CGiftMarkFv_0x1c9ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0230u; }
        if (ctx->pc != 0x1E0230u) { return; }
    }
    ctx->pc = 0x1E0230u;
label_1e0230:
    // 0x1e0230: 0x86021338  lh          $v0, 0x1338($s0)
    ctx->pc = 0x1e0230u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4920)));
label_1e0234:
    // 0x1e0234: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1e0238:
    if (ctx->pc == 0x1E0238u) {
        ctx->pc = 0x1E023Cu;
        goto label_1e023c;
    }
    ctx->pc = 0x1E0234u;
    {
        const bool branch_taken_0x1e0234 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e0234) {
            ctx->pc = 0x1E0254u;
            goto label_1e0254;
        }
    }
    ctx->pc = 0x1E023Cu;
label_1e023c:
    // 0x1e023c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e0240:
    // 0x1e0240: 0xa6021338  sh          $v0, 0x1338($s0)
    ctx->pc = 0x1e0240u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4920), (uint16_t)GPR_U32(ctx, 2));
label_1e0244:
    // 0x1e0244: 0x86021338  lh          $v0, 0x1338($s0)
    ctx->pc = 0x1e0244u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4920)));
label_1e0248:
    // 0x1e0248: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_1e024c:
    if (ctx->pc == 0x1E024Cu) {
        ctx->pc = 0x1E0250u;
        goto label_1e0250;
    }
    ctx->pc = 0x1E0248u;
    {
        const bool branch_taken_0x1e0248 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e0248) {
            ctx->pc = 0x1E0254u;
            goto label_1e0254;
        }
    }
    ctx->pc = 0x1E0250u;
label_1e0250:
    // 0x1e0250: 0xa600133a  sh          $zero, 0x133A($s0)
    ctx->pc = 0x1e0250u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4922), (uint16_t)GPR_U32(ctx, 0));
label_1e0254:
    // 0x1e0254: 0x0  nop
    ctx->pc = 0x1e0254u;
    // NOP
label_1e0258:
    // 0x1e0258: 0x86021320  lh          $v0, 0x1320($s0)
    ctx->pc = 0x1e0258u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4896)));
label_1e025c:
    // 0x1e025c: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_1e0260:
    if (ctx->pc == 0x1E0260u) {
        ctx->pc = 0x1E0264u;
        goto label_1e0264;
    }
    ctx->pc = 0x1E025Cu;
    {
        const bool branch_taken_0x1e025c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e025c) {
            ctx->pc = 0x1E02B4u;
            goto label_1e02b4;
        }
    }
    ctx->pc = 0x1E0264u;
label_1e0264:
    // 0x1e0264: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e0264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e0268:
    // 0x1e0268: 0xa6021320  sh          $v0, 0x1320($s0)
    ctx->pc = 0x1e0268u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4896), (uint16_t)GPR_U32(ctx, 2));
label_1e026c:
    // 0x1e026c: 0x86021320  lh          $v0, 0x1320($s0)
    ctx->pc = 0x1e026cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4896)));
label_1e0270:
    // 0x1e0270: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
label_1e0274:
    if (ctx->pc == 0x1E0274u) {
        ctx->pc = 0x1E0278u;
        goto label_1e0278;
    }
    ctx->pc = 0x1E0270u;
    {
        const bool branch_taken_0x1e0270 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e0270) {
            ctx->pc = 0x1E02B4u;
            goto label_1e02b4;
        }
    }
    ctx->pc = 0x1E0278u;
label_1e0278:
    // 0x1e0278: 0x8602131a  lh          $v0, 0x131A($s0)
    ctx->pc = 0x1e0278u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4890)));
label_1e027c:
    // 0x1e027c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e027cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e0280:
    // 0x1e0280: 0x0  nop
    ctx->pc = 0x1e0280u;
    // NOP
label_1e0284:
    // 0x1e0284: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e0288:
    // 0x1e0288: 0xe600131c  swc1        $f0, 0x131C($s0)
    ctx->pc = 0x1e0288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4892), bits); }
label_1e028c:
    // 0x1e028c: 0x8605131a  lh          $a1, 0x131A($s0)
    ctx->pc = 0x1e028cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4890)));
label_1e0290:
    // 0x1e0290: 0xc072a44  jal         func_1CA910
label_1e0294:
    if (ctx->pc == 0x1E0294u) {
        ctx->pc = 0x1E0294u;
            // 0x1e0294: 0x26041220  addiu       $a0, $s0, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4640));
        ctx->pc = 0x1E0298u;
        goto label_1e0298;
    }
    ctx->pc = 0x1E0290u;
    SET_GPR_U32(ctx, 31, 0x1E0298u);
    ctx->pc = 0x1E0294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0290u;
            // 0x1e0294: 0x26041220  addiu       $a0, $s0, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA910u;
    if (runtime->hasFunction(0x1CA910u)) {
        auto targetFn = runtime->lookupFunction(0x1CA910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0298u; }
        if (ctx->pc != 0x1E0298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetGekirin__14CEnemyLifeGageFi_0x1ca910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0298u; }
        if (ctx->pc != 0x1E0298u) { return; }
    }
    ctx->pc = 0x1E0298u;
label_1e0298:
    // 0x1e0298: 0xa600074c  sh          $zero, 0x74C($s0)
    ctx->pc = 0x1e0298u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1868), (uint16_t)GPR_U32(ctx, 0));
label_1e029c:
    // 0x1e029c: 0x8e031150  lw          $v1, 0x1150($s0)
    ctx->pc = 0x1e029cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1e02a0:
    // 0x1e02a0: 0x8062006a  lb          $v0, 0x6A($v1)
    ctx->pc = 0x1e02a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 106)));
label_1e02a4:
    // 0x1e02a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e02a8:
    if (ctx->pc == 0x1E02A8u) {
        ctx->pc = 0x1E02ACu;
        goto label_1e02ac;
    }
    ctx->pc = 0x1E02A4u;
    {
        const bool branch_taken_0x1e02a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e02a4) {
            ctx->pc = 0x1E02B4u;
            goto label_1e02b4;
        }
    }
    ctx->pc = 0x1E02ACu;
label_1e02ac:
    // 0x1e02ac: 0x94620066  lhu         $v0, 0x66($v1)
    ctx->pc = 0x1e02acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 102)));
label_1e02b0:
    // 0x1e02b0: 0xa6021318  sh          $v0, 0x1318($s0)
    ctx->pc = 0x1e02b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4888), (uint16_t)GPR_U32(ctx, 2));
label_1e02b4:
    // 0x1e02b4: 0x0  nop
    ctx->pc = 0x1e02b4u;
    // NOP
label_1e02b8:
    // 0x1e02b8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1e02b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1e02bc:
    // 0x1e02bc: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x1e02bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e02c0:
    // 0x1e02c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e02c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e02c4:
    // 0x1e02c4: 0xc60212f8  lwc1        $f2, 0x12F8($s0)
    ctx->pc = 0x1e02c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e02c8:
    // 0x1e02c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e02c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e02cc:
    // 0x1e02cc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e02ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e02d0:
    // 0x1e02d0: 0x0  nop
    ctx->pc = 0x1e02d0u;
    // NOP
label_1e02d4:
    // 0x1e02d4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_1e02d8:
    if (ctx->pc == 0x1E02D8u) {
        ctx->pc = 0x1E02DCu;
        goto label_1e02dc;
    }
    ctx->pc = 0x1E02D4u;
    {
        const bool branch_taken_0x1e02d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e02d4) {
            ctx->pc = 0x1E0320u;
            goto label_1e0320;
        }
    }
    ctx->pc = 0x1E02DCu;
label_1e02dc:
    // 0x1e02dc: 0xc60112ec  lwc1        $f1, 0x12EC($s0)
    ctx->pc = 0x1e02dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e02e0:
    // 0x1e02e0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e02e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e02e4:
    // 0x1e02e4: 0x0  nop
    ctx->pc = 0x1e02e4u;
    // NOP
label_1e02e8:
    // 0x1e02e8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1e02e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e02ec:
    // 0x1e02ec: 0x0  nop
    ctx->pc = 0x1e02ecu;
    // NOP
label_1e02f0:
    // 0x1e02f0: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_1e02f4:
    if (ctx->pc == 0x1E02F4u) {
        ctx->pc = 0x1E02F4u;
            // 0x1e02f4: 0x3c023daa  lui         $v0, 0x3DAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15786 << 16));
        ctx->pc = 0x1E02F8u;
        goto label_1e02f8;
    }
    ctx->pc = 0x1E02F0u;
    {
        const bool branch_taken_0x1e02f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E02F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E02F0u;
            // 0x1e02f4: 0x3c023daa  lui         $v0, 0x3DAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15786 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e02f0) {
            ctx->pc = 0x1E0364u;
            goto label_1e0364;
        }
    }
    ctx->pc = 0x1E02F8u;
label_1e02f8:
    // 0x1e02f8: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1e02f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1e02fc:
    // 0x1e02fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e02fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e0300:
    // 0x1e0300: 0x0  nop
    ctx->pc = 0x1e0300u;
    // NOP
label_1e0304:
    // 0x1e0304: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e0304u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e0308:
    // 0x1e0308: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1e0308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e030c:
    // 0x1e030c: 0x0  nop
    ctx->pc = 0x1e030cu;
    // NOP
label_1e0310:
    // 0x1e0310: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_1e0314:
    if (ctx->pc == 0x1E0314u) {
        ctx->pc = 0x1E0314u;
            // 0x1e0314: 0xe60012ec  swc1        $f0, 0x12EC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4844), bits); }
        ctx->pc = 0x1E0318u;
        goto label_1e0318;
    }
    ctx->pc = 0x1E0310u;
    {
        const bool branch_taken_0x1e0310 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0310u;
            // 0x1e0314: 0xe60012ec  swc1        $f0, 0x12EC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4844), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0310) {
            ctx->pc = 0x1E0364u;
            goto label_1e0364;
        }
    }
    ctx->pc = 0x1E0318u;
label_1e0318:
    // 0x1e0318: 0x10000012  b           . + 4 + (0x12 << 2)
label_1e031c:
    if (ctx->pc == 0x1E031Cu) {
        ctx->pc = 0x1E031Cu;
            // 0x1e031c: 0xe60212ec  swc1        $f2, 0x12EC($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4844), bits); }
        ctx->pc = 0x1E0320u;
        goto label_1e0320;
    }
    ctx->pc = 0x1E0318u;
    {
        const bool branch_taken_0x1e0318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E031Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0318u;
            // 0x1e031c: 0xe60212ec  swc1        $f2, 0x12EC($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4844), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0318) {
            ctx->pc = 0x1E0364u;
            goto label_1e0364;
        }
    }
    ctx->pc = 0x1E0320u;
label_1e0320:
    // 0x1e0320: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e0324:
    // 0x1e0324: 0xc60212ec  lwc1        $f2, 0x12EC($s0)
    ctx->pc = 0x1e0324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e0328:
    // 0x1e0328: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e032c:
    // 0x1e032c: 0x0  nop
    ctx->pc = 0x1e032cu;
    // NOP
label_1e0330:
    // 0x1e0330: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1e0330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e0334:
    // 0x1e0334: 0x0  nop
    ctx->pc = 0x1e0334u;
    // NOP
label_1e0338:
    // 0x1e0338: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_1e033c:
    if (ctx->pc == 0x1E033Cu) {
        ctx->pc = 0x1E033Cu;
            // 0x1e033c: 0x3c023daa  lui         $v0, 0x3DAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15786 << 16));
        ctx->pc = 0x1E0340u;
        goto label_1e0340;
    }
    ctx->pc = 0x1E0338u;
    {
        const bool branch_taken_0x1e0338 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E033Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0338u;
            // 0x1e033c: 0x3c023daa  lui         $v0, 0x3DAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15786 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0338) {
            ctx->pc = 0x1E0364u;
            goto label_1e0364;
        }
    }
    ctx->pc = 0x1E0340u;
label_1e0340:
    // 0x1e0340: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1e0340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1e0344:
    // 0x1e0344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e0348:
    // 0x1e0348: 0x0  nop
    ctx->pc = 0x1e0348u;
    // NOP
label_1e034c:
    // 0x1e034c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1e034cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1e0350:
    // 0x1e0350: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e0350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e0354:
    // 0x1e0354: 0x0  nop
    ctx->pc = 0x1e0354u;
    // NOP
label_1e0358:
    // 0x1e0358: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1e035c:
    if (ctx->pc == 0x1E035Cu) {
        ctx->pc = 0x1E035Cu;
            // 0x1e035c: 0xe60012ec  swc1        $f0, 0x12EC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4844), bits); }
        ctx->pc = 0x1E0360u;
        goto label_1e0360;
    }
    ctx->pc = 0x1E0358u;
    {
        const bool branch_taken_0x1e0358 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E035Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0358u;
            // 0x1e035c: 0xe60012ec  swc1        $f0, 0x12EC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4844), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0358) {
            ctx->pc = 0x1E0364u;
            goto label_1e0364;
        }
    }
    ctx->pc = 0x1E0360u;
label_1e0360:
    // 0x1e0360: 0xe60112ec  swc1        $f1, 0x12EC($s0)
    ctx->pc = 0x1e0360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4844), bits); }
label_1e0364:
    // 0x1e0364: 0x0  nop
    ctx->pc = 0x1e0364u;
    // NOP
label_1e0368:
    // 0x1e0368: 0x860312e4  lh          $v1, 0x12E4($s0)
    ctx->pc = 0x1e0368u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4836)));
label_1e036c:
    // 0x1e036c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e036cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e0370:
    // 0x1e0370: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1e0374:
    if (ctx->pc == 0x1E0374u) {
        ctx->pc = 0x1E0378u;
        goto label_1e0378;
    }
    ctx->pc = 0x1E0370u;
    {
        const bool branch_taken_0x1e0370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e0370) {
            ctx->pc = 0x1E03ACu;
            goto label_1e03ac;
        }
    }
    ctx->pc = 0x1E0378u;
label_1e0378:
    // 0x1e0378: 0xc60112e8  lwc1        $f1, 0x12E8($s0)
    ctx->pc = 0x1e0378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e037c:
    // 0x1e037c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1e037cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_1e0380:
    // 0x1e0380: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e0380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1e0384:
    // 0x1e0384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e0388:
    // 0x1e0388: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e0388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e038c:
    // 0x1e038c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e038cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e0390:
    // 0x1e0390: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1e0390u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e0394:
    // 0x1e0394: 0x0  nop
    ctx->pc = 0x1e0394u;
    // NOP
label_1e0398:
    // 0x1e0398: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1e039c:
    if (ctx->pc == 0x1E039Cu) {
        ctx->pc = 0x1E039Cu;
            // 0x1e039c: 0xe60012e8  swc1        $f0, 0x12E8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4840), bits); }
        ctx->pc = 0x1E03A0u;
        goto label_1e03a0;
    }
    ctx->pc = 0x1E0398u;
    {
        const bool branch_taken_0x1e0398 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E039Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0398u;
            // 0x1e039c: 0xe60012e8  swc1        $f0, 0x12E8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4840), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0398) {
            ctx->pc = 0x1E03ACu;
            goto label_1e03ac;
        }
    }
    ctx->pc = 0x1E03A0u;
label_1e03a0:
    // 0x1e03a0: 0xe60212e8  swc1        $f2, 0x12E8($s0)
    ctx->pc = 0x1e03a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4840), bits); }
label_1e03a4:
    // 0x1e03a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e03a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e03a8:
    // 0x1e03a8: 0xa60212e4  sh          $v0, 0x12E4($s0)
    ctx->pc = 0x1e03a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4836), (uint16_t)GPR_U32(ctx, 2));
label_1e03ac:
    // 0x1e03ac: 0x0  nop
    ctx->pc = 0x1e03acu;
    // NOP
label_1e03b0:
    // 0x1e03b0: 0x860312e4  lh          $v1, 0x12E4($s0)
    ctx->pc = 0x1e03b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4836)));
label_1e03b4:
    // 0x1e03b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e03b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e03b8:
    // 0x1e03b8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_1e03bc:
    if (ctx->pc == 0x1E03BCu) {
        ctx->pc = 0x1E03C0u;
        goto label_1e03c0;
    }
    ctx->pc = 0x1E03B8u;
    {
        const bool branch_taken_0x1e03b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e03b8) {
            ctx->pc = 0x1E03FCu;
            goto label_1e03fc;
        }
    }
    ctx->pc = 0x1E03C0u;
label_1e03c0:
    // 0x1e03c0: 0xc60212e8  lwc1        $f2, 0x12E8($s0)
    ctx->pc = 0x1e03c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e03c4:
    // 0x1e03c4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1e03c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_1e03c8:
    // 0x1e03c8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1e03c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1e03cc:
    // 0x1e03cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e03ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e03d0:
    // 0x1e03d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e03d4:
    // 0x1e03d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e03d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e03d8:
    // 0x1e03d8: 0x0  nop
    ctx->pc = 0x1e03d8u;
    // NOP
label_1e03dc:
    // 0x1e03dc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1e03dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1e03e0:
    // 0x1e03e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e03e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e03e4:
    // 0x1e03e4: 0x0  nop
    ctx->pc = 0x1e03e4u;
    // NOP
label_1e03e8:
    // 0x1e03e8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1e03ec:
    if (ctx->pc == 0x1E03ECu) {
        ctx->pc = 0x1E03ECu;
            // 0x1e03ec: 0xe60112e8  swc1        $f1, 0x12E8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4840), bits); }
        ctx->pc = 0x1E03F0u;
        goto label_1e03f0;
    }
    ctx->pc = 0x1E03E8u;
    {
        const bool branch_taken_0x1e03e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E03ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E03E8u;
            // 0x1e03ec: 0xe60112e8  swc1        $f1, 0x12E8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4840), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e03e8) {
            ctx->pc = 0x1E03FCu;
            goto label_1e03fc;
        }
    }
    ctx->pc = 0x1E03F0u;
label_1e03f0:
    // 0x1e03f0: 0xe60012e8  swc1        $f0, 0x12E8($s0)
    ctx->pc = 0x1e03f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4840), bits); }
label_1e03f4:
    // 0x1e03f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e03f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e03f8:
    // 0x1e03f8: 0xa60212e4  sh          $v0, 0x12E4($s0)
    ctx->pc = 0x1e03f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4836), (uint16_t)GPR_U32(ctx, 2));
label_1e03fc:
    // 0x1e03fc: 0x0  nop
    ctx->pc = 0x1e03fcu;
    // NOP
label_1e0400:
    // 0x1e0400: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e0400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e0404:
    // 0x1e0404: 0x8f3900c0  lw          $t9, 0xC0($t9)
    ctx->pc = 0x1e0404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 192)));
label_1e0408:
    // 0x1e0408: 0x320f809  jalr        $t9
label_1e040c:
    if (ctx->pc == 0x1E040Cu) {
        ctx->pc = 0x1E040Cu;
            // 0x1e040c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E0410u;
        goto label_1e0410;
    }
    ctx->pc = 0x1E0408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0410u);
        ctx->pc = 0x1E040Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0408u;
            // 0x1e040c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0410u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0410u; }
            if (ctx->pc != 0x1E0410u) { return; }
        }
        }
    }
    ctx->pc = 0x1E0410u;
label_1e0410:
    // 0x1e0410: 0x8e02133c  lw          $v0, 0x133C($s0)
    ctx->pc = 0x1e0410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
label_1e0414:
    // 0x1e0414: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e0414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1e0418:
    // 0x1e0418: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1e041c:
    if (ctx->pc == 0x1E041Cu) {
        ctx->pc = 0x1E0420u;
        goto label_1e0420;
    }
    ctx->pc = 0x1E0418u;
    {
        const bool branch_taken_0x1e0418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0418) {
            ctx->pc = 0x1E0444u;
            goto label_1e0444;
        }
    }
    ctx->pc = 0x1E0420u;
label_1e0420:
    // 0x1e0420: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e0420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e0424:
    // 0x1e0424: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e0424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1e0428:
    // 0x1e0428: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e042c:
    // 0x1e042c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e042cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e0430:
    // 0x1e0430: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x1e0430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_1e0434:
    // 0x1e0434: 0x320f809  jalr        $t9
label_1e0438:
    if (ctx->pc == 0x1E0438u) {
        ctx->pc = 0x1E0438u;
            // 0x1e0438: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1E043Cu;
        goto label_1e043c;
    }
    ctx->pc = 0x1E0434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E043Cu);
        ctx->pc = 0x1E0438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0434u;
            // 0x1e0438: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E043Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E043Cu; }
            if (ctx->pc != 0x1E043Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E043Cu;
label_1e043c:
    // 0x1e043c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e0440:
    if (ctx->pc == 0x1E0440u) {
        ctx->pc = 0x1E0444u;
        goto label_1e0444;
    }
    ctx->pc = 0x1E043Cu;
    {
        const bool branch_taken_0x1e043c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e043c) {
            ctx->pc = 0x1E045Cu;
            goto label_1e045c;
        }
    }
    ctx->pc = 0x1E0444u;
label_1e0444:
    // 0x1e0444: 0x0  nop
    ctx->pc = 0x1e0444u;
    // NOP
label_1e0448:
    // 0x1e0448: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e0448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e044c:
    // 0x1e044c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e044cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e0450:
    // 0x1e0450: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x1e0450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_1e0454:
    // 0x1e0454: 0x320f809  jalr        $t9
label_1e0458:
    if (ctx->pc == 0x1E0458u) {
        ctx->pc = 0x1E0458u;
            // 0x1e0458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E045Cu;
        goto label_1e045c;
    }
    ctx->pc = 0x1E0454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E045Cu);
        ctx->pc = 0x1E0458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0454u;
            // 0x1e0458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E045Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E045Cu; }
            if (ctx->pc != 0x1E045Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E045Cu;
label_1e045c:
    // 0x1e045c: 0x0  nop
    ctx->pc = 0x1e045cu;
    // NOP
label_1e0460:
    // 0x1e0460: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e0460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e0464:
    // 0x1e0464: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1e0464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1e0468:
    // 0x1e0468: 0x320f809  jalr        $t9
label_1e046c:
    if (ctx->pc == 0x1E046Cu) {
        ctx->pc = 0x1E046Cu;
            // 0x1e046c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E0470u;
        goto label_1e0470;
    }
    ctx->pc = 0x1E0468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0470u);
        ctx->pc = 0x1E046Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0468u;
            // 0x1e046c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0470u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0470u; }
            if (ctx->pc != 0x1E0470u) { return; }
        }
        }
    }
    ctx->pc = 0x1E0470u;
label_1e0470:
    // 0x1e0470: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1e0470u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1e0474:
    // 0x1e0474: 0x2aa20018  slti        $v0, $s5, 0x18
    ctx->pc = 0x1e0474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)24) ? 1 : 0);
label_1e0478:
    // 0x1e0478: 0x1440fdcc  bnez        $v0, . + 4 + (-0x234 << 2)
label_1e047c:
    if (ctx->pc == 0x1E047Cu) {
        ctx->pc = 0x1E047Cu;
            // 0x1e047c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x1E0480u;
        goto label_1e0480;
    }
    ctx->pc = 0x1E0478u;
    {
        const bool branch_taken_0x1e0478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E047Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0478u;
            // 0x1e047c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0478) {
            ctx->pc = 0x1DFBACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dfbac;
        }
    }
    ctx->pc = 0x1E0480u;
label_1e0480:
    // 0x1e0480: 0xc0773a4  jal         func_1DCE90
label_1e0484:
    if (ctx->pc == 0x1E0484u) {
        ctx->pc = 0x1E0484u;
            // 0x1e0484: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E0488u;
        goto label_1e0488;
    }
    ctx->pc = 0x1E0480u;
    SET_GPR_U32(ctx, 31, 0x1E0488u);
    ctx->pc = 0x1E0484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0480u;
            // 0x1e0484: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCE90u;
    if (runtime->hasFunction(0x1DCE90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0488u; }
        if (ctx->pc != 0x1E0488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PriorityLevelCheck__11CMonsterManFv_0x1dce90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0488u; }
        if (ctx->pc != 0x1E0488u) { return; }
    }
    ctx->pc = 0x1E0488u;
label_1e0488:
    // 0x1e0488: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e0488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1e048c:
    // 0x1e048c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e048cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e0490:
    // 0x1e0490: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e0490u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e0494:
    // 0x1e0494: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e0494u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e0498:
    // 0x1e0498: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e0498u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e049c:
    // 0x1e049c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e049cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e04a0:
    // 0x1e04a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e04a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e04a4:
    // 0x1e04a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e04a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e04a8:
    // 0x1e04a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e04a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e04ac:
    // 0x1e04ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e04acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e04b0:
    // 0x1e04b0: 0x3e00008  jr          $ra
label_1e04b4:
    if (ctx->pc == 0x1E04B4u) {
        ctx->pc = 0x1E04B4u;
            // 0x1e04b4: 0x27bd2940  addiu       $sp, $sp, 0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10560));
        ctx->pc = 0x1E04B8u;
        goto label_fallthrough_0x1e04b0;
    }
    ctx->pc = 0x1E04B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E04B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E04B0u;
            // 0x1e04b4: 0x27bd2940  addiu       $sp, $sp, 0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e04b0:
    ctx->pc = 0x1E04B8u;
}
