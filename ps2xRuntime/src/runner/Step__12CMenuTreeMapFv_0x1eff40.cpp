#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__12CMenuTreeMapFv
// Address: 0x1eff40 - 0x1f1518
void Step__12CMenuTreeMapFv_0x1eff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__12CMenuTreeMapFv_0x1eff40");
#endif

    switch (ctx->pc) {
        case 0x1eff40u: goto label_1eff40;
        case 0x1eff44u: goto label_1eff44;
        case 0x1eff48u: goto label_1eff48;
        case 0x1eff4cu: goto label_1eff4c;
        case 0x1eff50u: goto label_1eff50;
        case 0x1eff54u: goto label_1eff54;
        case 0x1eff58u: goto label_1eff58;
        case 0x1eff5cu: goto label_1eff5c;
        case 0x1eff60u: goto label_1eff60;
        case 0x1eff64u: goto label_1eff64;
        case 0x1eff68u: goto label_1eff68;
        case 0x1eff6cu: goto label_1eff6c;
        case 0x1eff70u: goto label_1eff70;
        case 0x1eff74u: goto label_1eff74;
        case 0x1eff78u: goto label_1eff78;
        case 0x1eff7cu: goto label_1eff7c;
        case 0x1eff80u: goto label_1eff80;
        case 0x1eff84u: goto label_1eff84;
        case 0x1eff88u: goto label_1eff88;
        case 0x1eff8cu: goto label_1eff8c;
        case 0x1eff90u: goto label_1eff90;
        case 0x1eff94u: goto label_1eff94;
        case 0x1eff98u: goto label_1eff98;
        case 0x1eff9cu: goto label_1eff9c;
        case 0x1effa0u: goto label_1effa0;
        case 0x1effa4u: goto label_1effa4;
        case 0x1effa8u: goto label_1effa8;
        case 0x1effacu: goto label_1effac;
        case 0x1effb0u: goto label_1effb0;
        case 0x1effb4u: goto label_1effb4;
        case 0x1effb8u: goto label_1effb8;
        case 0x1effbcu: goto label_1effbc;
        case 0x1effc0u: goto label_1effc0;
        case 0x1effc4u: goto label_1effc4;
        case 0x1effc8u: goto label_1effc8;
        case 0x1effccu: goto label_1effcc;
        case 0x1effd0u: goto label_1effd0;
        case 0x1effd4u: goto label_1effd4;
        case 0x1effd8u: goto label_1effd8;
        case 0x1effdcu: goto label_1effdc;
        case 0x1effe0u: goto label_1effe0;
        case 0x1effe4u: goto label_1effe4;
        case 0x1effe8u: goto label_1effe8;
        case 0x1effecu: goto label_1effec;
        case 0x1efff0u: goto label_1efff0;
        case 0x1efff4u: goto label_1efff4;
        case 0x1efff8u: goto label_1efff8;
        case 0x1efffcu: goto label_1efffc;
        case 0x1f0000u: goto label_1f0000;
        case 0x1f0004u: goto label_1f0004;
        case 0x1f0008u: goto label_1f0008;
        case 0x1f000cu: goto label_1f000c;
        case 0x1f0010u: goto label_1f0010;
        case 0x1f0014u: goto label_1f0014;
        case 0x1f0018u: goto label_1f0018;
        case 0x1f001cu: goto label_1f001c;
        case 0x1f0020u: goto label_1f0020;
        case 0x1f0024u: goto label_1f0024;
        case 0x1f0028u: goto label_1f0028;
        case 0x1f002cu: goto label_1f002c;
        case 0x1f0030u: goto label_1f0030;
        case 0x1f0034u: goto label_1f0034;
        case 0x1f0038u: goto label_1f0038;
        case 0x1f003cu: goto label_1f003c;
        case 0x1f0040u: goto label_1f0040;
        case 0x1f0044u: goto label_1f0044;
        case 0x1f0048u: goto label_1f0048;
        case 0x1f004cu: goto label_1f004c;
        case 0x1f0050u: goto label_1f0050;
        case 0x1f0054u: goto label_1f0054;
        case 0x1f0058u: goto label_1f0058;
        case 0x1f005cu: goto label_1f005c;
        case 0x1f0060u: goto label_1f0060;
        case 0x1f0064u: goto label_1f0064;
        case 0x1f0068u: goto label_1f0068;
        case 0x1f006cu: goto label_1f006c;
        case 0x1f0070u: goto label_1f0070;
        case 0x1f0074u: goto label_1f0074;
        case 0x1f0078u: goto label_1f0078;
        case 0x1f007cu: goto label_1f007c;
        case 0x1f0080u: goto label_1f0080;
        case 0x1f0084u: goto label_1f0084;
        case 0x1f0088u: goto label_1f0088;
        case 0x1f008cu: goto label_1f008c;
        case 0x1f0090u: goto label_1f0090;
        case 0x1f0094u: goto label_1f0094;
        case 0x1f0098u: goto label_1f0098;
        case 0x1f009cu: goto label_1f009c;
        case 0x1f00a0u: goto label_1f00a0;
        case 0x1f00a4u: goto label_1f00a4;
        case 0x1f00a8u: goto label_1f00a8;
        case 0x1f00acu: goto label_1f00ac;
        case 0x1f00b0u: goto label_1f00b0;
        case 0x1f00b4u: goto label_1f00b4;
        case 0x1f00b8u: goto label_1f00b8;
        case 0x1f00bcu: goto label_1f00bc;
        case 0x1f00c0u: goto label_1f00c0;
        case 0x1f00c4u: goto label_1f00c4;
        case 0x1f00c8u: goto label_1f00c8;
        case 0x1f00ccu: goto label_1f00cc;
        case 0x1f00d0u: goto label_1f00d0;
        case 0x1f00d4u: goto label_1f00d4;
        case 0x1f00d8u: goto label_1f00d8;
        case 0x1f00dcu: goto label_1f00dc;
        case 0x1f00e0u: goto label_1f00e0;
        case 0x1f00e4u: goto label_1f00e4;
        case 0x1f00e8u: goto label_1f00e8;
        case 0x1f00ecu: goto label_1f00ec;
        case 0x1f00f0u: goto label_1f00f0;
        case 0x1f00f4u: goto label_1f00f4;
        case 0x1f00f8u: goto label_1f00f8;
        case 0x1f00fcu: goto label_1f00fc;
        case 0x1f0100u: goto label_1f0100;
        case 0x1f0104u: goto label_1f0104;
        case 0x1f0108u: goto label_1f0108;
        case 0x1f010cu: goto label_1f010c;
        case 0x1f0110u: goto label_1f0110;
        case 0x1f0114u: goto label_1f0114;
        case 0x1f0118u: goto label_1f0118;
        case 0x1f011cu: goto label_1f011c;
        case 0x1f0120u: goto label_1f0120;
        case 0x1f0124u: goto label_1f0124;
        case 0x1f0128u: goto label_1f0128;
        case 0x1f012cu: goto label_1f012c;
        case 0x1f0130u: goto label_1f0130;
        case 0x1f0134u: goto label_1f0134;
        case 0x1f0138u: goto label_1f0138;
        case 0x1f013cu: goto label_1f013c;
        case 0x1f0140u: goto label_1f0140;
        case 0x1f0144u: goto label_1f0144;
        case 0x1f0148u: goto label_1f0148;
        case 0x1f014cu: goto label_1f014c;
        case 0x1f0150u: goto label_1f0150;
        case 0x1f0154u: goto label_1f0154;
        case 0x1f0158u: goto label_1f0158;
        case 0x1f015cu: goto label_1f015c;
        case 0x1f0160u: goto label_1f0160;
        case 0x1f0164u: goto label_1f0164;
        case 0x1f0168u: goto label_1f0168;
        case 0x1f016cu: goto label_1f016c;
        case 0x1f0170u: goto label_1f0170;
        case 0x1f0174u: goto label_1f0174;
        case 0x1f0178u: goto label_1f0178;
        case 0x1f017cu: goto label_1f017c;
        case 0x1f0180u: goto label_1f0180;
        case 0x1f0184u: goto label_1f0184;
        case 0x1f0188u: goto label_1f0188;
        case 0x1f018cu: goto label_1f018c;
        case 0x1f0190u: goto label_1f0190;
        case 0x1f0194u: goto label_1f0194;
        case 0x1f0198u: goto label_1f0198;
        case 0x1f019cu: goto label_1f019c;
        case 0x1f01a0u: goto label_1f01a0;
        case 0x1f01a4u: goto label_1f01a4;
        case 0x1f01a8u: goto label_1f01a8;
        case 0x1f01acu: goto label_1f01ac;
        case 0x1f01b0u: goto label_1f01b0;
        case 0x1f01b4u: goto label_1f01b4;
        case 0x1f01b8u: goto label_1f01b8;
        case 0x1f01bcu: goto label_1f01bc;
        case 0x1f01c0u: goto label_1f01c0;
        case 0x1f01c4u: goto label_1f01c4;
        case 0x1f01c8u: goto label_1f01c8;
        case 0x1f01ccu: goto label_1f01cc;
        case 0x1f01d0u: goto label_1f01d0;
        case 0x1f01d4u: goto label_1f01d4;
        case 0x1f01d8u: goto label_1f01d8;
        case 0x1f01dcu: goto label_1f01dc;
        case 0x1f01e0u: goto label_1f01e0;
        case 0x1f01e4u: goto label_1f01e4;
        case 0x1f01e8u: goto label_1f01e8;
        case 0x1f01ecu: goto label_1f01ec;
        case 0x1f01f0u: goto label_1f01f0;
        case 0x1f01f4u: goto label_1f01f4;
        case 0x1f01f8u: goto label_1f01f8;
        case 0x1f01fcu: goto label_1f01fc;
        case 0x1f0200u: goto label_1f0200;
        case 0x1f0204u: goto label_1f0204;
        case 0x1f0208u: goto label_1f0208;
        case 0x1f020cu: goto label_1f020c;
        case 0x1f0210u: goto label_1f0210;
        case 0x1f0214u: goto label_1f0214;
        case 0x1f0218u: goto label_1f0218;
        case 0x1f021cu: goto label_1f021c;
        case 0x1f0220u: goto label_1f0220;
        case 0x1f0224u: goto label_1f0224;
        case 0x1f0228u: goto label_1f0228;
        case 0x1f022cu: goto label_1f022c;
        case 0x1f0230u: goto label_1f0230;
        case 0x1f0234u: goto label_1f0234;
        case 0x1f0238u: goto label_1f0238;
        case 0x1f023cu: goto label_1f023c;
        case 0x1f0240u: goto label_1f0240;
        case 0x1f0244u: goto label_1f0244;
        case 0x1f0248u: goto label_1f0248;
        case 0x1f024cu: goto label_1f024c;
        case 0x1f0250u: goto label_1f0250;
        case 0x1f0254u: goto label_1f0254;
        case 0x1f0258u: goto label_1f0258;
        case 0x1f025cu: goto label_1f025c;
        case 0x1f0260u: goto label_1f0260;
        case 0x1f0264u: goto label_1f0264;
        case 0x1f0268u: goto label_1f0268;
        case 0x1f026cu: goto label_1f026c;
        case 0x1f0270u: goto label_1f0270;
        case 0x1f0274u: goto label_1f0274;
        case 0x1f0278u: goto label_1f0278;
        case 0x1f027cu: goto label_1f027c;
        case 0x1f0280u: goto label_1f0280;
        case 0x1f0284u: goto label_1f0284;
        case 0x1f0288u: goto label_1f0288;
        case 0x1f028cu: goto label_1f028c;
        case 0x1f0290u: goto label_1f0290;
        case 0x1f0294u: goto label_1f0294;
        case 0x1f0298u: goto label_1f0298;
        case 0x1f029cu: goto label_1f029c;
        case 0x1f02a0u: goto label_1f02a0;
        case 0x1f02a4u: goto label_1f02a4;
        case 0x1f02a8u: goto label_1f02a8;
        case 0x1f02acu: goto label_1f02ac;
        case 0x1f02b0u: goto label_1f02b0;
        case 0x1f02b4u: goto label_1f02b4;
        case 0x1f02b8u: goto label_1f02b8;
        case 0x1f02bcu: goto label_1f02bc;
        case 0x1f02c0u: goto label_1f02c0;
        case 0x1f02c4u: goto label_1f02c4;
        case 0x1f02c8u: goto label_1f02c8;
        case 0x1f02ccu: goto label_1f02cc;
        case 0x1f02d0u: goto label_1f02d0;
        case 0x1f02d4u: goto label_1f02d4;
        case 0x1f02d8u: goto label_1f02d8;
        case 0x1f02dcu: goto label_1f02dc;
        case 0x1f02e0u: goto label_1f02e0;
        case 0x1f02e4u: goto label_1f02e4;
        case 0x1f02e8u: goto label_1f02e8;
        case 0x1f02ecu: goto label_1f02ec;
        case 0x1f02f0u: goto label_1f02f0;
        case 0x1f02f4u: goto label_1f02f4;
        case 0x1f02f8u: goto label_1f02f8;
        case 0x1f02fcu: goto label_1f02fc;
        case 0x1f0300u: goto label_1f0300;
        case 0x1f0304u: goto label_1f0304;
        case 0x1f0308u: goto label_1f0308;
        case 0x1f030cu: goto label_1f030c;
        case 0x1f0310u: goto label_1f0310;
        case 0x1f0314u: goto label_1f0314;
        case 0x1f0318u: goto label_1f0318;
        case 0x1f031cu: goto label_1f031c;
        case 0x1f0320u: goto label_1f0320;
        case 0x1f0324u: goto label_1f0324;
        case 0x1f0328u: goto label_1f0328;
        case 0x1f032cu: goto label_1f032c;
        case 0x1f0330u: goto label_1f0330;
        case 0x1f0334u: goto label_1f0334;
        case 0x1f0338u: goto label_1f0338;
        case 0x1f033cu: goto label_1f033c;
        case 0x1f0340u: goto label_1f0340;
        case 0x1f0344u: goto label_1f0344;
        case 0x1f0348u: goto label_1f0348;
        case 0x1f034cu: goto label_1f034c;
        case 0x1f0350u: goto label_1f0350;
        case 0x1f0354u: goto label_1f0354;
        case 0x1f0358u: goto label_1f0358;
        case 0x1f035cu: goto label_1f035c;
        case 0x1f0360u: goto label_1f0360;
        case 0x1f0364u: goto label_1f0364;
        case 0x1f0368u: goto label_1f0368;
        case 0x1f036cu: goto label_1f036c;
        case 0x1f0370u: goto label_1f0370;
        case 0x1f0374u: goto label_1f0374;
        case 0x1f0378u: goto label_1f0378;
        case 0x1f037cu: goto label_1f037c;
        case 0x1f0380u: goto label_1f0380;
        case 0x1f0384u: goto label_1f0384;
        case 0x1f0388u: goto label_1f0388;
        case 0x1f038cu: goto label_1f038c;
        case 0x1f0390u: goto label_1f0390;
        case 0x1f0394u: goto label_1f0394;
        case 0x1f0398u: goto label_1f0398;
        case 0x1f039cu: goto label_1f039c;
        case 0x1f03a0u: goto label_1f03a0;
        case 0x1f03a4u: goto label_1f03a4;
        case 0x1f03a8u: goto label_1f03a8;
        case 0x1f03acu: goto label_1f03ac;
        case 0x1f03b0u: goto label_1f03b0;
        case 0x1f03b4u: goto label_1f03b4;
        case 0x1f03b8u: goto label_1f03b8;
        case 0x1f03bcu: goto label_1f03bc;
        case 0x1f03c0u: goto label_1f03c0;
        case 0x1f03c4u: goto label_1f03c4;
        case 0x1f03c8u: goto label_1f03c8;
        case 0x1f03ccu: goto label_1f03cc;
        case 0x1f03d0u: goto label_1f03d0;
        case 0x1f03d4u: goto label_1f03d4;
        case 0x1f03d8u: goto label_1f03d8;
        case 0x1f03dcu: goto label_1f03dc;
        case 0x1f03e0u: goto label_1f03e0;
        case 0x1f03e4u: goto label_1f03e4;
        case 0x1f03e8u: goto label_1f03e8;
        case 0x1f03ecu: goto label_1f03ec;
        case 0x1f03f0u: goto label_1f03f0;
        case 0x1f03f4u: goto label_1f03f4;
        case 0x1f03f8u: goto label_1f03f8;
        case 0x1f03fcu: goto label_1f03fc;
        case 0x1f0400u: goto label_1f0400;
        case 0x1f0404u: goto label_1f0404;
        case 0x1f0408u: goto label_1f0408;
        case 0x1f040cu: goto label_1f040c;
        case 0x1f0410u: goto label_1f0410;
        case 0x1f0414u: goto label_1f0414;
        case 0x1f0418u: goto label_1f0418;
        case 0x1f041cu: goto label_1f041c;
        case 0x1f0420u: goto label_1f0420;
        case 0x1f0424u: goto label_1f0424;
        case 0x1f0428u: goto label_1f0428;
        case 0x1f042cu: goto label_1f042c;
        case 0x1f0430u: goto label_1f0430;
        case 0x1f0434u: goto label_1f0434;
        case 0x1f0438u: goto label_1f0438;
        case 0x1f043cu: goto label_1f043c;
        case 0x1f0440u: goto label_1f0440;
        case 0x1f0444u: goto label_1f0444;
        case 0x1f0448u: goto label_1f0448;
        case 0x1f044cu: goto label_1f044c;
        case 0x1f0450u: goto label_1f0450;
        case 0x1f0454u: goto label_1f0454;
        case 0x1f0458u: goto label_1f0458;
        case 0x1f045cu: goto label_1f045c;
        case 0x1f0460u: goto label_1f0460;
        case 0x1f0464u: goto label_1f0464;
        case 0x1f0468u: goto label_1f0468;
        case 0x1f046cu: goto label_1f046c;
        case 0x1f0470u: goto label_1f0470;
        case 0x1f0474u: goto label_1f0474;
        case 0x1f0478u: goto label_1f0478;
        case 0x1f047cu: goto label_1f047c;
        case 0x1f0480u: goto label_1f0480;
        case 0x1f0484u: goto label_1f0484;
        case 0x1f0488u: goto label_1f0488;
        case 0x1f048cu: goto label_1f048c;
        case 0x1f0490u: goto label_1f0490;
        case 0x1f0494u: goto label_1f0494;
        case 0x1f0498u: goto label_1f0498;
        case 0x1f049cu: goto label_1f049c;
        case 0x1f04a0u: goto label_1f04a0;
        case 0x1f04a4u: goto label_1f04a4;
        case 0x1f04a8u: goto label_1f04a8;
        case 0x1f04acu: goto label_1f04ac;
        case 0x1f04b0u: goto label_1f04b0;
        case 0x1f04b4u: goto label_1f04b4;
        case 0x1f04b8u: goto label_1f04b8;
        case 0x1f04bcu: goto label_1f04bc;
        case 0x1f04c0u: goto label_1f04c0;
        case 0x1f04c4u: goto label_1f04c4;
        case 0x1f04c8u: goto label_1f04c8;
        case 0x1f04ccu: goto label_1f04cc;
        case 0x1f04d0u: goto label_1f04d0;
        case 0x1f04d4u: goto label_1f04d4;
        case 0x1f04d8u: goto label_1f04d8;
        case 0x1f04dcu: goto label_1f04dc;
        case 0x1f04e0u: goto label_1f04e0;
        case 0x1f04e4u: goto label_1f04e4;
        case 0x1f04e8u: goto label_1f04e8;
        case 0x1f04ecu: goto label_1f04ec;
        case 0x1f04f0u: goto label_1f04f0;
        case 0x1f04f4u: goto label_1f04f4;
        case 0x1f04f8u: goto label_1f04f8;
        case 0x1f04fcu: goto label_1f04fc;
        case 0x1f0500u: goto label_1f0500;
        case 0x1f0504u: goto label_1f0504;
        case 0x1f0508u: goto label_1f0508;
        case 0x1f050cu: goto label_1f050c;
        case 0x1f0510u: goto label_1f0510;
        case 0x1f0514u: goto label_1f0514;
        case 0x1f0518u: goto label_1f0518;
        case 0x1f051cu: goto label_1f051c;
        case 0x1f0520u: goto label_1f0520;
        case 0x1f0524u: goto label_1f0524;
        case 0x1f0528u: goto label_1f0528;
        case 0x1f052cu: goto label_1f052c;
        case 0x1f0530u: goto label_1f0530;
        case 0x1f0534u: goto label_1f0534;
        case 0x1f0538u: goto label_1f0538;
        case 0x1f053cu: goto label_1f053c;
        case 0x1f0540u: goto label_1f0540;
        case 0x1f0544u: goto label_1f0544;
        case 0x1f0548u: goto label_1f0548;
        case 0x1f054cu: goto label_1f054c;
        case 0x1f0550u: goto label_1f0550;
        case 0x1f0554u: goto label_1f0554;
        case 0x1f0558u: goto label_1f0558;
        case 0x1f055cu: goto label_1f055c;
        case 0x1f0560u: goto label_1f0560;
        case 0x1f0564u: goto label_1f0564;
        case 0x1f0568u: goto label_1f0568;
        case 0x1f056cu: goto label_1f056c;
        case 0x1f0570u: goto label_1f0570;
        case 0x1f0574u: goto label_1f0574;
        case 0x1f0578u: goto label_1f0578;
        case 0x1f057cu: goto label_1f057c;
        case 0x1f0580u: goto label_1f0580;
        case 0x1f0584u: goto label_1f0584;
        case 0x1f0588u: goto label_1f0588;
        case 0x1f058cu: goto label_1f058c;
        case 0x1f0590u: goto label_1f0590;
        case 0x1f0594u: goto label_1f0594;
        case 0x1f0598u: goto label_1f0598;
        case 0x1f059cu: goto label_1f059c;
        case 0x1f05a0u: goto label_1f05a0;
        case 0x1f05a4u: goto label_1f05a4;
        case 0x1f05a8u: goto label_1f05a8;
        case 0x1f05acu: goto label_1f05ac;
        case 0x1f05b0u: goto label_1f05b0;
        case 0x1f05b4u: goto label_1f05b4;
        case 0x1f05b8u: goto label_1f05b8;
        case 0x1f05bcu: goto label_1f05bc;
        case 0x1f05c0u: goto label_1f05c0;
        case 0x1f05c4u: goto label_1f05c4;
        case 0x1f05c8u: goto label_1f05c8;
        case 0x1f05ccu: goto label_1f05cc;
        case 0x1f05d0u: goto label_1f05d0;
        case 0x1f05d4u: goto label_1f05d4;
        case 0x1f05d8u: goto label_1f05d8;
        case 0x1f05dcu: goto label_1f05dc;
        case 0x1f05e0u: goto label_1f05e0;
        case 0x1f05e4u: goto label_1f05e4;
        case 0x1f05e8u: goto label_1f05e8;
        case 0x1f05ecu: goto label_1f05ec;
        case 0x1f05f0u: goto label_1f05f0;
        case 0x1f05f4u: goto label_1f05f4;
        case 0x1f05f8u: goto label_1f05f8;
        case 0x1f05fcu: goto label_1f05fc;
        case 0x1f0600u: goto label_1f0600;
        case 0x1f0604u: goto label_1f0604;
        case 0x1f0608u: goto label_1f0608;
        case 0x1f060cu: goto label_1f060c;
        case 0x1f0610u: goto label_1f0610;
        case 0x1f0614u: goto label_1f0614;
        case 0x1f0618u: goto label_1f0618;
        case 0x1f061cu: goto label_1f061c;
        case 0x1f0620u: goto label_1f0620;
        case 0x1f0624u: goto label_1f0624;
        case 0x1f0628u: goto label_1f0628;
        case 0x1f062cu: goto label_1f062c;
        case 0x1f0630u: goto label_1f0630;
        case 0x1f0634u: goto label_1f0634;
        case 0x1f0638u: goto label_1f0638;
        case 0x1f063cu: goto label_1f063c;
        case 0x1f0640u: goto label_1f0640;
        case 0x1f0644u: goto label_1f0644;
        case 0x1f0648u: goto label_1f0648;
        case 0x1f064cu: goto label_1f064c;
        case 0x1f0650u: goto label_1f0650;
        case 0x1f0654u: goto label_1f0654;
        case 0x1f0658u: goto label_1f0658;
        case 0x1f065cu: goto label_1f065c;
        case 0x1f0660u: goto label_1f0660;
        case 0x1f0664u: goto label_1f0664;
        case 0x1f0668u: goto label_1f0668;
        case 0x1f066cu: goto label_1f066c;
        case 0x1f0670u: goto label_1f0670;
        case 0x1f0674u: goto label_1f0674;
        case 0x1f0678u: goto label_1f0678;
        case 0x1f067cu: goto label_1f067c;
        case 0x1f0680u: goto label_1f0680;
        case 0x1f0684u: goto label_1f0684;
        case 0x1f0688u: goto label_1f0688;
        case 0x1f068cu: goto label_1f068c;
        case 0x1f0690u: goto label_1f0690;
        case 0x1f0694u: goto label_1f0694;
        case 0x1f0698u: goto label_1f0698;
        case 0x1f069cu: goto label_1f069c;
        case 0x1f06a0u: goto label_1f06a0;
        case 0x1f06a4u: goto label_1f06a4;
        case 0x1f06a8u: goto label_1f06a8;
        case 0x1f06acu: goto label_1f06ac;
        case 0x1f06b0u: goto label_1f06b0;
        case 0x1f06b4u: goto label_1f06b4;
        case 0x1f06b8u: goto label_1f06b8;
        case 0x1f06bcu: goto label_1f06bc;
        case 0x1f06c0u: goto label_1f06c0;
        case 0x1f06c4u: goto label_1f06c4;
        case 0x1f06c8u: goto label_1f06c8;
        case 0x1f06ccu: goto label_1f06cc;
        case 0x1f06d0u: goto label_1f06d0;
        case 0x1f06d4u: goto label_1f06d4;
        case 0x1f06d8u: goto label_1f06d8;
        case 0x1f06dcu: goto label_1f06dc;
        case 0x1f06e0u: goto label_1f06e0;
        case 0x1f06e4u: goto label_1f06e4;
        case 0x1f06e8u: goto label_1f06e8;
        case 0x1f06ecu: goto label_1f06ec;
        case 0x1f06f0u: goto label_1f06f0;
        case 0x1f06f4u: goto label_1f06f4;
        case 0x1f06f8u: goto label_1f06f8;
        case 0x1f06fcu: goto label_1f06fc;
        case 0x1f0700u: goto label_1f0700;
        case 0x1f0704u: goto label_1f0704;
        case 0x1f0708u: goto label_1f0708;
        case 0x1f070cu: goto label_1f070c;
        case 0x1f0710u: goto label_1f0710;
        case 0x1f0714u: goto label_1f0714;
        case 0x1f0718u: goto label_1f0718;
        case 0x1f071cu: goto label_1f071c;
        case 0x1f0720u: goto label_1f0720;
        case 0x1f0724u: goto label_1f0724;
        case 0x1f0728u: goto label_1f0728;
        case 0x1f072cu: goto label_1f072c;
        case 0x1f0730u: goto label_1f0730;
        case 0x1f0734u: goto label_1f0734;
        case 0x1f0738u: goto label_1f0738;
        case 0x1f073cu: goto label_1f073c;
        case 0x1f0740u: goto label_1f0740;
        case 0x1f0744u: goto label_1f0744;
        case 0x1f0748u: goto label_1f0748;
        case 0x1f074cu: goto label_1f074c;
        case 0x1f0750u: goto label_1f0750;
        case 0x1f0754u: goto label_1f0754;
        case 0x1f0758u: goto label_1f0758;
        case 0x1f075cu: goto label_1f075c;
        case 0x1f0760u: goto label_1f0760;
        case 0x1f0764u: goto label_1f0764;
        case 0x1f0768u: goto label_1f0768;
        case 0x1f076cu: goto label_1f076c;
        case 0x1f0770u: goto label_1f0770;
        case 0x1f0774u: goto label_1f0774;
        case 0x1f0778u: goto label_1f0778;
        case 0x1f077cu: goto label_1f077c;
        case 0x1f0780u: goto label_1f0780;
        case 0x1f0784u: goto label_1f0784;
        case 0x1f0788u: goto label_1f0788;
        case 0x1f078cu: goto label_1f078c;
        case 0x1f0790u: goto label_1f0790;
        case 0x1f0794u: goto label_1f0794;
        case 0x1f0798u: goto label_1f0798;
        case 0x1f079cu: goto label_1f079c;
        case 0x1f07a0u: goto label_1f07a0;
        case 0x1f07a4u: goto label_1f07a4;
        case 0x1f07a8u: goto label_1f07a8;
        case 0x1f07acu: goto label_1f07ac;
        case 0x1f07b0u: goto label_1f07b0;
        case 0x1f07b4u: goto label_1f07b4;
        case 0x1f07b8u: goto label_1f07b8;
        case 0x1f07bcu: goto label_1f07bc;
        case 0x1f07c0u: goto label_1f07c0;
        case 0x1f07c4u: goto label_1f07c4;
        case 0x1f07c8u: goto label_1f07c8;
        case 0x1f07ccu: goto label_1f07cc;
        case 0x1f07d0u: goto label_1f07d0;
        case 0x1f07d4u: goto label_1f07d4;
        case 0x1f07d8u: goto label_1f07d8;
        case 0x1f07dcu: goto label_1f07dc;
        case 0x1f07e0u: goto label_1f07e0;
        case 0x1f07e4u: goto label_1f07e4;
        case 0x1f07e8u: goto label_1f07e8;
        case 0x1f07ecu: goto label_1f07ec;
        case 0x1f07f0u: goto label_1f07f0;
        case 0x1f07f4u: goto label_1f07f4;
        case 0x1f07f8u: goto label_1f07f8;
        case 0x1f07fcu: goto label_1f07fc;
        case 0x1f0800u: goto label_1f0800;
        case 0x1f0804u: goto label_1f0804;
        case 0x1f0808u: goto label_1f0808;
        case 0x1f080cu: goto label_1f080c;
        case 0x1f0810u: goto label_1f0810;
        case 0x1f0814u: goto label_1f0814;
        case 0x1f0818u: goto label_1f0818;
        case 0x1f081cu: goto label_1f081c;
        case 0x1f0820u: goto label_1f0820;
        case 0x1f0824u: goto label_1f0824;
        case 0x1f0828u: goto label_1f0828;
        case 0x1f082cu: goto label_1f082c;
        case 0x1f0830u: goto label_1f0830;
        case 0x1f0834u: goto label_1f0834;
        case 0x1f0838u: goto label_1f0838;
        case 0x1f083cu: goto label_1f083c;
        case 0x1f0840u: goto label_1f0840;
        case 0x1f0844u: goto label_1f0844;
        case 0x1f0848u: goto label_1f0848;
        case 0x1f084cu: goto label_1f084c;
        case 0x1f0850u: goto label_1f0850;
        case 0x1f0854u: goto label_1f0854;
        case 0x1f0858u: goto label_1f0858;
        case 0x1f085cu: goto label_1f085c;
        case 0x1f0860u: goto label_1f0860;
        case 0x1f0864u: goto label_1f0864;
        case 0x1f0868u: goto label_1f0868;
        case 0x1f086cu: goto label_1f086c;
        case 0x1f0870u: goto label_1f0870;
        case 0x1f0874u: goto label_1f0874;
        case 0x1f0878u: goto label_1f0878;
        case 0x1f087cu: goto label_1f087c;
        case 0x1f0880u: goto label_1f0880;
        case 0x1f0884u: goto label_1f0884;
        case 0x1f0888u: goto label_1f0888;
        case 0x1f088cu: goto label_1f088c;
        case 0x1f0890u: goto label_1f0890;
        case 0x1f0894u: goto label_1f0894;
        case 0x1f0898u: goto label_1f0898;
        case 0x1f089cu: goto label_1f089c;
        case 0x1f08a0u: goto label_1f08a0;
        case 0x1f08a4u: goto label_1f08a4;
        case 0x1f08a8u: goto label_1f08a8;
        case 0x1f08acu: goto label_1f08ac;
        case 0x1f08b0u: goto label_1f08b0;
        case 0x1f08b4u: goto label_1f08b4;
        case 0x1f08b8u: goto label_1f08b8;
        case 0x1f08bcu: goto label_1f08bc;
        case 0x1f08c0u: goto label_1f08c0;
        case 0x1f08c4u: goto label_1f08c4;
        case 0x1f08c8u: goto label_1f08c8;
        case 0x1f08ccu: goto label_1f08cc;
        case 0x1f08d0u: goto label_1f08d0;
        case 0x1f08d4u: goto label_1f08d4;
        case 0x1f08d8u: goto label_1f08d8;
        case 0x1f08dcu: goto label_1f08dc;
        case 0x1f08e0u: goto label_1f08e0;
        case 0x1f08e4u: goto label_1f08e4;
        case 0x1f08e8u: goto label_1f08e8;
        case 0x1f08ecu: goto label_1f08ec;
        case 0x1f08f0u: goto label_1f08f0;
        case 0x1f08f4u: goto label_1f08f4;
        case 0x1f08f8u: goto label_1f08f8;
        case 0x1f08fcu: goto label_1f08fc;
        case 0x1f0900u: goto label_1f0900;
        case 0x1f0904u: goto label_1f0904;
        case 0x1f0908u: goto label_1f0908;
        case 0x1f090cu: goto label_1f090c;
        case 0x1f0910u: goto label_1f0910;
        case 0x1f0914u: goto label_1f0914;
        case 0x1f0918u: goto label_1f0918;
        case 0x1f091cu: goto label_1f091c;
        case 0x1f0920u: goto label_1f0920;
        case 0x1f0924u: goto label_1f0924;
        case 0x1f0928u: goto label_1f0928;
        case 0x1f092cu: goto label_1f092c;
        case 0x1f0930u: goto label_1f0930;
        case 0x1f0934u: goto label_1f0934;
        case 0x1f0938u: goto label_1f0938;
        case 0x1f093cu: goto label_1f093c;
        case 0x1f0940u: goto label_1f0940;
        case 0x1f0944u: goto label_1f0944;
        case 0x1f0948u: goto label_1f0948;
        case 0x1f094cu: goto label_1f094c;
        case 0x1f0950u: goto label_1f0950;
        case 0x1f0954u: goto label_1f0954;
        case 0x1f0958u: goto label_1f0958;
        case 0x1f095cu: goto label_1f095c;
        case 0x1f0960u: goto label_1f0960;
        case 0x1f0964u: goto label_1f0964;
        case 0x1f0968u: goto label_1f0968;
        case 0x1f096cu: goto label_1f096c;
        case 0x1f0970u: goto label_1f0970;
        case 0x1f0974u: goto label_1f0974;
        case 0x1f0978u: goto label_1f0978;
        case 0x1f097cu: goto label_1f097c;
        case 0x1f0980u: goto label_1f0980;
        case 0x1f0984u: goto label_1f0984;
        case 0x1f0988u: goto label_1f0988;
        case 0x1f098cu: goto label_1f098c;
        case 0x1f0990u: goto label_1f0990;
        case 0x1f0994u: goto label_1f0994;
        case 0x1f0998u: goto label_1f0998;
        case 0x1f099cu: goto label_1f099c;
        case 0x1f09a0u: goto label_1f09a0;
        case 0x1f09a4u: goto label_1f09a4;
        case 0x1f09a8u: goto label_1f09a8;
        case 0x1f09acu: goto label_1f09ac;
        case 0x1f09b0u: goto label_1f09b0;
        case 0x1f09b4u: goto label_1f09b4;
        case 0x1f09b8u: goto label_1f09b8;
        case 0x1f09bcu: goto label_1f09bc;
        case 0x1f09c0u: goto label_1f09c0;
        case 0x1f09c4u: goto label_1f09c4;
        case 0x1f09c8u: goto label_1f09c8;
        case 0x1f09ccu: goto label_1f09cc;
        case 0x1f09d0u: goto label_1f09d0;
        case 0x1f09d4u: goto label_1f09d4;
        case 0x1f09d8u: goto label_1f09d8;
        case 0x1f09dcu: goto label_1f09dc;
        case 0x1f09e0u: goto label_1f09e0;
        case 0x1f09e4u: goto label_1f09e4;
        case 0x1f09e8u: goto label_1f09e8;
        case 0x1f09ecu: goto label_1f09ec;
        case 0x1f09f0u: goto label_1f09f0;
        case 0x1f09f4u: goto label_1f09f4;
        case 0x1f09f8u: goto label_1f09f8;
        case 0x1f09fcu: goto label_1f09fc;
        case 0x1f0a00u: goto label_1f0a00;
        case 0x1f0a04u: goto label_1f0a04;
        case 0x1f0a08u: goto label_1f0a08;
        case 0x1f0a0cu: goto label_1f0a0c;
        case 0x1f0a10u: goto label_1f0a10;
        case 0x1f0a14u: goto label_1f0a14;
        case 0x1f0a18u: goto label_1f0a18;
        case 0x1f0a1cu: goto label_1f0a1c;
        case 0x1f0a20u: goto label_1f0a20;
        case 0x1f0a24u: goto label_1f0a24;
        case 0x1f0a28u: goto label_1f0a28;
        case 0x1f0a2cu: goto label_1f0a2c;
        case 0x1f0a30u: goto label_1f0a30;
        case 0x1f0a34u: goto label_1f0a34;
        case 0x1f0a38u: goto label_1f0a38;
        case 0x1f0a3cu: goto label_1f0a3c;
        case 0x1f0a40u: goto label_1f0a40;
        case 0x1f0a44u: goto label_1f0a44;
        case 0x1f0a48u: goto label_1f0a48;
        case 0x1f0a4cu: goto label_1f0a4c;
        case 0x1f0a50u: goto label_1f0a50;
        case 0x1f0a54u: goto label_1f0a54;
        case 0x1f0a58u: goto label_1f0a58;
        case 0x1f0a5cu: goto label_1f0a5c;
        case 0x1f0a60u: goto label_1f0a60;
        case 0x1f0a64u: goto label_1f0a64;
        case 0x1f0a68u: goto label_1f0a68;
        case 0x1f0a6cu: goto label_1f0a6c;
        case 0x1f0a70u: goto label_1f0a70;
        case 0x1f0a74u: goto label_1f0a74;
        case 0x1f0a78u: goto label_1f0a78;
        case 0x1f0a7cu: goto label_1f0a7c;
        case 0x1f0a80u: goto label_1f0a80;
        case 0x1f0a84u: goto label_1f0a84;
        case 0x1f0a88u: goto label_1f0a88;
        case 0x1f0a8cu: goto label_1f0a8c;
        case 0x1f0a90u: goto label_1f0a90;
        case 0x1f0a94u: goto label_1f0a94;
        case 0x1f0a98u: goto label_1f0a98;
        case 0x1f0a9cu: goto label_1f0a9c;
        case 0x1f0aa0u: goto label_1f0aa0;
        case 0x1f0aa4u: goto label_1f0aa4;
        case 0x1f0aa8u: goto label_1f0aa8;
        case 0x1f0aacu: goto label_1f0aac;
        case 0x1f0ab0u: goto label_1f0ab0;
        case 0x1f0ab4u: goto label_1f0ab4;
        case 0x1f0ab8u: goto label_1f0ab8;
        case 0x1f0abcu: goto label_1f0abc;
        case 0x1f0ac0u: goto label_1f0ac0;
        case 0x1f0ac4u: goto label_1f0ac4;
        case 0x1f0ac8u: goto label_1f0ac8;
        case 0x1f0accu: goto label_1f0acc;
        case 0x1f0ad0u: goto label_1f0ad0;
        case 0x1f0ad4u: goto label_1f0ad4;
        case 0x1f0ad8u: goto label_1f0ad8;
        case 0x1f0adcu: goto label_1f0adc;
        case 0x1f0ae0u: goto label_1f0ae0;
        case 0x1f0ae4u: goto label_1f0ae4;
        case 0x1f0ae8u: goto label_1f0ae8;
        case 0x1f0aecu: goto label_1f0aec;
        case 0x1f0af0u: goto label_1f0af0;
        case 0x1f0af4u: goto label_1f0af4;
        case 0x1f0af8u: goto label_1f0af8;
        case 0x1f0afcu: goto label_1f0afc;
        case 0x1f0b00u: goto label_1f0b00;
        case 0x1f0b04u: goto label_1f0b04;
        case 0x1f0b08u: goto label_1f0b08;
        case 0x1f0b0cu: goto label_1f0b0c;
        case 0x1f0b10u: goto label_1f0b10;
        case 0x1f0b14u: goto label_1f0b14;
        case 0x1f0b18u: goto label_1f0b18;
        case 0x1f0b1cu: goto label_1f0b1c;
        case 0x1f0b20u: goto label_1f0b20;
        case 0x1f0b24u: goto label_1f0b24;
        case 0x1f0b28u: goto label_1f0b28;
        case 0x1f0b2cu: goto label_1f0b2c;
        case 0x1f0b30u: goto label_1f0b30;
        case 0x1f0b34u: goto label_1f0b34;
        case 0x1f0b38u: goto label_1f0b38;
        case 0x1f0b3cu: goto label_1f0b3c;
        case 0x1f0b40u: goto label_1f0b40;
        case 0x1f0b44u: goto label_1f0b44;
        case 0x1f0b48u: goto label_1f0b48;
        case 0x1f0b4cu: goto label_1f0b4c;
        case 0x1f0b50u: goto label_1f0b50;
        case 0x1f0b54u: goto label_1f0b54;
        case 0x1f0b58u: goto label_1f0b58;
        case 0x1f0b5cu: goto label_1f0b5c;
        case 0x1f0b60u: goto label_1f0b60;
        case 0x1f0b64u: goto label_1f0b64;
        case 0x1f0b68u: goto label_1f0b68;
        case 0x1f0b6cu: goto label_1f0b6c;
        case 0x1f0b70u: goto label_1f0b70;
        case 0x1f0b74u: goto label_1f0b74;
        case 0x1f0b78u: goto label_1f0b78;
        case 0x1f0b7cu: goto label_1f0b7c;
        case 0x1f0b80u: goto label_1f0b80;
        case 0x1f0b84u: goto label_1f0b84;
        case 0x1f0b88u: goto label_1f0b88;
        case 0x1f0b8cu: goto label_1f0b8c;
        case 0x1f0b90u: goto label_1f0b90;
        case 0x1f0b94u: goto label_1f0b94;
        case 0x1f0b98u: goto label_1f0b98;
        case 0x1f0b9cu: goto label_1f0b9c;
        case 0x1f0ba0u: goto label_1f0ba0;
        case 0x1f0ba4u: goto label_1f0ba4;
        case 0x1f0ba8u: goto label_1f0ba8;
        case 0x1f0bacu: goto label_1f0bac;
        case 0x1f0bb0u: goto label_1f0bb0;
        case 0x1f0bb4u: goto label_1f0bb4;
        case 0x1f0bb8u: goto label_1f0bb8;
        case 0x1f0bbcu: goto label_1f0bbc;
        case 0x1f0bc0u: goto label_1f0bc0;
        case 0x1f0bc4u: goto label_1f0bc4;
        case 0x1f0bc8u: goto label_1f0bc8;
        case 0x1f0bccu: goto label_1f0bcc;
        case 0x1f0bd0u: goto label_1f0bd0;
        case 0x1f0bd4u: goto label_1f0bd4;
        case 0x1f0bd8u: goto label_1f0bd8;
        case 0x1f0bdcu: goto label_1f0bdc;
        case 0x1f0be0u: goto label_1f0be0;
        case 0x1f0be4u: goto label_1f0be4;
        case 0x1f0be8u: goto label_1f0be8;
        case 0x1f0becu: goto label_1f0bec;
        case 0x1f0bf0u: goto label_1f0bf0;
        case 0x1f0bf4u: goto label_1f0bf4;
        case 0x1f0bf8u: goto label_1f0bf8;
        case 0x1f0bfcu: goto label_1f0bfc;
        case 0x1f0c00u: goto label_1f0c00;
        case 0x1f0c04u: goto label_1f0c04;
        case 0x1f0c08u: goto label_1f0c08;
        case 0x1f0c0cu: goto label_1f0c0c;
        case 0x1f0c10u: goto label_1f0c10;
        case 0x1f0c14u: goto label_1f0c14;
        case 0x1f0c18u: goto label_1f0c18;
        case 0x1f0c1cu: goto label_1f0c1c;
        case 0x1f0c20u: goto label_1f0c20;
        case 0x1f0c24u: goto label_1f0c24;
        case 0x1f0c28u: goto label_1f0c28;
        case 0x1f0c2cu: goto label_1f0c2c;
        case 0x1f0c30u: goto label_1f0c30;
        case 0x1f0c34u: goto label_1f0c34;
        case 0x1f0c38u: goto label_1f0c38;
        case 0x1f0c3cu: goto label_1f0c3c;
        case 0x1f0c40u: goto label_1f0c40;
        case 0x1f0c44u: goto label_1f0c44;
        case 0x1f0c48u: goto label_1f0c48;
        case 0x1f0c4cu: goto label_1f0c4c;
        case 0x1f0c50u: goto label_1f0c50;
        case 0x1f0c54u: goto label_1f0c54;
        case 0x1f0c58u: goto label_1f0c58;
        case 0x1f0c5cu: goto label_1f0c5c;
        case 0x1f0c60u: goto label_1f0c60;
        case 0x1f0c64u: goto label_1f0c64;
        case 0x1f0c68u: goto label_1f0c68;
        case 0x1f0c6cu: goto label_1f0c6c;
        case 0x1f0c70u: goto label_1f0c70;
        case 0x1f0c74u: goto label_1f0c74;
        case 0x1f0c78u: goto label_1f0c78;
        case 0x1f0c7cu: goto label_1f0c7c;
        case 0x1f0c80u: goto label_1f0c80;
        case 0x1f0c84u: goto label_1f0c84;
        case 0x1f0c88u: goto label_1f0c88;
        case 0x1f0c8cu: goto label_1f0c8c;
        case 0x1f0c90u: goto label_1f0c90;
        case 0x1f0c94u: goto label_1f0c94;
        case 0x1f0c98u: goto label_1f0c98;
        case 0x1f0c9cu: goto label_1f0c9c;
        case 0x1f0ca0u: goto label_1f0ca0;
        case 0x1f0ca4u: goto label_1f0ca4;
        case 0x1f0ca8u: goto label_1f0ca8;
        case 0x1f0cacu: goto label_1f0cac;
        case 0x1f0cb0u: goto label_1f0cb0;
        case 0x1f0cb4u: goto label_1f0cb4;
        case 0x1f0cb8u: goto label_1f0cb8;
        case 0x1f0cbcu: goto label_1f0cbc;
        case 0x1f0cc0u: goto label_1f0cc0;
        case 0x1f0cc4u: goto label_1f0cc4;
        case 0x1f0cc8u: goto label_1f0cc8;
        case 0x1f0cccu: goto label_1f0ccc;
        case 0x1f0cd0u: goto label_1f0cd0;
        case 0x1f0cd4u: goto label_1f0cd4;
        case 0x1f0cd8u: goto label_1f0cd8;
        case 0x1f0cdcu: goto label_1f0cdc;
        case 0x1f0ce0u: goto label_1f0ce0;
        case 0x1f0ce4u: goto label_1f0ce4;
        case 0x1f0ce8u: goto label_1f0ce8;
        case 0x1f0cecu: goto label_1f0cec;
        case 0x1f0cf0u: goto label_1f0cf0;
        case 0x1f0cf4u: goto label_1f0cf4;
        case 0x1f0cf8u: goto label_1f0cf8;
        case 0x1f0cfcu: goto label_1f0cfc;
        case 0x1f0d00u: goto label_1f0d00;
        case 0x1f0d04u: goto label_1f0d04;
        case 0x1f0d08u: goto label_1f0d08;
        case 0x1f0d0cu: goto label_1f0d0c;
        case 0x1f0d10u: goto label_1f0d10;
        case 0x1f0d14u: goto label_1f0d14;
        case 0x1f0d18u: goto label_1f0d18;
        case 0x1f0d1cu: goto label_1f0d1c;
        case 0x1f0d20u: goto label_1f0d20;
        case 0x1f0d24u: goto label_1f0d24;
        case 0x1f0d28u: goto label_1f0d28;
        case 0x1f0d2cu: goto label_1f0d2c;
        case 0x1f0d30u: goto label_1f0d30;
        case 0x1f0d34u: goto label_1f0d34;
        case 0x1f0d38u: goto label_1f0d38;
        case 0x1f0d3cu: goto label_1f0d3c;
        case 0x1f0d40u: goto label_1f0d40;
        case 0x1f0d44u: goto label_1f0d44;
        case 0x1f0d48u: goto label_1f0d48;
        case 0x1f0d4cu: goto label_1f0d4c;
        case 0x1f0d50u: goto label_1f0d50;
        case 0x1f0d54u: goto label_1f0d54;
        case 0x1f0d58u: goto label_1f0d58;
        case 0x1f0d5cu: goto label_1f0d5c;
        case 0x1f0d60u: goto label_1f0d60;
        case 0x1f0d64u: goto label_1f0d64;
        case 0x1f0d68u: goto label_1f0d68;
        case 0x1f0d6cu: goto label_1f0d6c;
        case 0x1f0d70u: goto label_1f0d70;
        case 0x1f0d74u: goto label_1f0d74;
        case 0x1f0d78u: goto label_1f0d78;
        case 0x1f0d7cu: goto label_1f0d7c;
        case 0x1f0d80u: goto label_1f0d80;
        case 0x1f0d84u: goto label_1f0d84;
        case 0x1f0d88u: goto label_1f0d88;
        case 0x1f0d8cu: goto label_1f0d8c;
        case 0x1f0d90u: goto label_1f0d90;
        case 0x1f0d94u: goto label_1f0d94;
        case 0x1f0d98u: goto label_1f0d98;
        case 0x1f0d9cu: goto label_1f0d9c;
        case 0x1f0da0u: goto label_1f0da0;
        case 0x1f0da4u: goto label_1f0da4;
        case 0x1f0da8u: goto label_1f0da8;
        case 0x1f0dacu: goto label_1f0dac;
        case 0x1f0db0u: goto label_1f0db0;
        case 0x1f0db4u: goto label_1f0db4;
        case 0x1f0db8u: goto label_1f0db8;
        case 0x1f0dbcu: goto label_1f0dbc;
        case 0x1f0dc0u: goto label_1f0dc0;
        case 0x1f0dc4u: goto label_1f0dc4;
        case 0x1f0dc8u: goto label_1f0dc8;
        case 0x1f0dccu: goto label_1f0dcc;
        case 0x1f0dd0u: goto label_1f0dd0;
        case 0x1f0dd4u: goto label_1f0dd4;
        case 0x1f0dd8u: goto label_1f0dd8;
        case 0x1f0ddcu: goto label_1f0ddc;
        case 0x1f0de0u: goto label_1f0de0;
        case 0x1f0de4u: goto label_1f0de4;
        case 0x1f0de8u: goto label_1f0de8;
        case 0x1f0decu: goto label_1f0dec;
        case 0x1f0df0u: goto label_1f0df0;
        case 0x1f0df4u: goto label_1f0df4;
        case 0x1f0df8u: goto label_1f0df8;
        case 0x1f0dfcu: goto label_1f0dfc;
        case 0x1f0e00u: goto label_1f0e00;
        case 0x1f0e04u: goto label_1f0e04;
        case 0x1f0e08u: goto label_1f0e08;
        case 0x1f0e0cu: goto label_1f0e0c;
        case 0x1f0e10u: goto label_1f0e10;
        case 0x1f0e14u: goto label_1f0e14;
        case 0x1f0e18u: goto label_1f0e18;
        case 0x1f0e1cu: goto label_1f0e1c;
        case 0x1f0e20u: goto label_1f0e20;
        case 0x1f0e24u: goto label_1f0e24;
        case 0x1f0e28u: goto label_1f0e28;
        case 0x1f0e2cu: goto label_1f0e2c;
        case 0x1f0e30u: goto label_1f0e30;
        case 0x1f0e34u: goto label_1f0e34;
        case 0x1f0e38u: goto label_1f0e38;
        case 0x1f0e3cu: goto label_1f0e3c;
        case 0x1f0e40u: goto label_1f0e40;
        case 0x1f0e44u: goto label_1f0e44;
        case 0x1f0e48u: goto label_1f0e48;
        case 0x1f0e4cu: goto label_1f0e4c;
        case 0x1f0e50u: goto label_1f0e50;
        case 0x1f0e54u: goto label_1f0e54;
        case 0x1f0e58u: goto label_1f0e58;
        case 0x1f0e5cu: goto label_1f0e5c;
        case 0x1f0e60u: goto label_1f0e60;
        case 0x1f0e64u: goto label_1f0e64;
        case 0x1f0e68u: goto label_1f0e68;
        case 0x1f0e6cu: goto label_1f0e6c;
        case 0x1f0e70u: goto label_1f0e70;
        case 0x1f0e74u: goto label_1f0e74;
        case 0x1f0e78u: goto label_1f0e78;
        case 0x1f0e7cu: goto label_1f0e7c;
        case 0x1f0e80u: goto label_1f0e80;
        case 0x1f0e84u: goto label_1f0e84;
        case 0x1f0e88u: goto label_1f0e88;
        case 0x1f0e8cu: goto label_1f0e8c;
        case 0x1f0e90u: goto label_1f0e90;
        case 0x1f0e94u: goto label_1f0e94;
        case 0x1f0e98u: goto label_1f0e98;
        case 0x1f0e9cu: goto label_1f0e9c;
        case 0x1f0ea0u: goto label_1f0ea0;
        case 0x1f0ea4u: goto label_1f0ea4;
        case 0x1f0ea8u: goto label_1f0ea8;
        case 0x1f0eacu: goto label_1f0eac;
        case 0x1f0eb0u: goto label_1f0eb0;
        case 0x1f0eb4u: goto label_1f0eb4;
        case 0x1f0eb8u: goto label_1f0eb8;
        case 0x1f0ebcu: goto label_1f0ebc;
        case 0x1f0ec0u: goto label_1f0ec0;
        case 0x1f0ec4u: goto label_1f0ec4;
        case 0x1f0ec8u: goto label_1f0ec8;
        case 0x1f0eccu: goto label_1f0ecc;
        case 0x1f0ed0u: goto label_1f0ed0;
        case 0x1f0ed4u: goto label_1f0ed4;
        case 0x1f0ed8u: goto label_1f0ed8;
        case 0x1f0edcu: goto label_1f0edc;
        case 0x1f0ee0u: goto label_1f0ee0;
        case 0x1f0ee4u: goto label_1f0ee4;
        case 0x1f0ee8u: goto label_1f0ee8;
        case 0x1f0eecu: goto label_1f0eec;
        case 0x1f0ef0u: goto label_1f0ef0;
        case 0x1f0ef4u: goto label_1f0ef4;
        case 0x1f0ef8u: goto label_1f0ef8;
        case 0x1f0efcu: goto label_1f0efc;
        case 0x1f0f00u: goto label_1f0f00;
        case 0x1f0f04u: goto label_1f0f04;
        case 0x1f0f08u: goto label_1f0f08;
        case 0x1f0f0cu: goto label_1f0f0c;
        case 0x1f0f10u: goto label_1f0f10;
        case 0x1f0f14u: goto label_1f0f14;
        case 0x1f0f18u: goto label_1f0f18;
        case 0x1f0f1cu: goto label_1f0f1c;
        case 0x1f0f20u: goto label_1f0f20;
        case 0x1f0f24u: goto label_1f0f24;
        case 0x1f0f28u: goto label_1f0f28;
        case 0x1f0f2cu: goto label_1f0f2c;
        case 0x1f0f30u: goto label_1f0f30;
        case 0x1f0f34u: goto label_1f0f34;
        case 0x1f0f38u: goto label_1f0f38;
        case 0x1f0f3cu: goto label_1f0f3c;
        case 0x1f0f40u: goto label_1f0f40;
        case 0x1f0f44u: goto label_1f0f44;
        case 0x1f0f48u: goto label_1f0f48;
        case 0x1f0f4cu: goto label_1f0f4c;
        case 0x1f0f50u: goto label_1f0f50;
        case 0x1f0f54u: goto label_1f0f54;
        case 0x1f0f58u: goto label_1f0f58;
        case 0x1f0f5cu: goto label_1f0f5c;
        case 0x1f0f60u: goto label_1f0f60;
        case 0x1f0f64u: goto label_1f0f64;
        case 0x1f0f68u: goto label_1f0f68;
        case 0x1f0f6cu: goto label_1f0f6c;
        case 0x1f0f70u: goto label_1f0f70;
        case 0x1f0f74u: goto label_1f0f74;
        case 0x1f0f78u: goto label_1f0f78;
        case 0x1f0f7cu: goto label_1f0f7c;
        case 0x1f0f80u: goto label_1f0f80;
        case 0x1f0f84u: goto label_1f0f84;
        case 0x1f0f88u: goto label_1f0f88;
        case 0x1f0f8cu: goto label_1f0f8c;
        case 0x1f0f90u: goto label_1f0f90;
        case 0x1f0f94u: goto label_1f0f94;
        case 0x1f0f98u: goto label_1f0f98;
        case 0x1f0f9cu: goto label_1f0f9c;
        case 0x1f0fa0u: goto label_1f0fa0;
        case 0x1f0fa4u: goto label_1f0fa4;
        case 0x1f0fa8u: goto label_1f0fa8;
        case 0x1f0facu: goto label_1f0fac;
        case 0x1f0fb0u: goto label_1f0fb0;
        case 0x1f0fb4u: goto label_1f0fb4;
        case 0x1f0fb8u: goto label_1f0fb8;
        case 0x1f0fbcu: goto label_1f0fbc;
        case 0x1f0fc0u: goto label_1f0fc0;
        case 0x1f0fc4u: goto label_1f0fc4;
        case 0x1f0fc8u: goto label_1f0fc8;
        case 0x1f0fccu: goto label_1f0fcc;
        case 0x1f0fd0u: goto label_1f0fd0;
        case 0x1f0fd4u: goto label_1f0fd4;
        case 0x1f0fd8u: goto label_1f0fd8;
        case 0x1f0fdcu: goto label_1f0fdc;
        case 0x1f0fe0u: goto label_1f0fe0;
        case 0x1f0fe4u: goto label_1f0fe4;
        case 0x1f0fe8u: goto label_1f0fe8;
        case 0x1f0fecu: goto label_1f0fec;
        case 0x1f0ff0u: goto label_1f0ff0;
        case 0x1f0ff4u: goto label_1f0ff4;
        case 0x1f0ff8u: goto label_1f0ff8;
        case 0x1f0ffcu: goto label_1f0ffc;
        case 0x1f1000u: goto label_1f1000;
        case 0x1f1004u: goto label_1f1004;
        case 0x1f1008u: goto label_1f1008;
        case 0x1f100cu: goto label_1f100c;
        case 0x1f1010u: goto label_1f1010;
        case 0x1f1014u: goto label_1f1014;
        case 0x1f1018u: goto label_1f1018;
        case 0x1f101cu: goto label_1f101c;
        case 0x1f1020u: goto label_1f1020;
        case 0x1f1024u: goto label_1f1024;
        case 0x1f1028u: goto label_1f1028;
        case 0x1f102cu: goto label_1f102c;
        case 0x1f1030u: goto label_1f1030;
        case 0x1f1034u: goto label_1f1034;
        case 0x1f1038u: goto label_1f1038;
        case 0x1f103cu: goto label_1f103c;
        case 0x1f1040u: goto label_1f1040;
        case 0x1f1044u: goto label_1f1044;
        case 0x1f1048u: goto label_1f1048;
        case 0x1f104cu: goto label_1f104c;
        case 0x1f1050u: goto label_1f1050;
        case 0x1f1054u: goto label_1f1054;
        case 0x1f1058u: goto label_1f1058;
        case 0x1f105cu: goto label_1f105c;
        case 0x1f1060u: goto label_1f1060;
        case 0x1f1064u: goto label_1f1064;
        case 0x1f1068u: goto label_1f1068;
        case 0x1f106cu: goto label_1f106c;
        case 0x1f1070u: goto label_1f1070;
        case 0x1f1074u: goto label_1f1074;
        case 0x1f1078u: goto label_1f1078;
        case 0x1f107cu: goto label_1f107c;
        case 0x1f1080u: goto label_1f1080;
        case 0x1f1084u: goto label_1f1084;
        case 0x1f1088u: goto label_1f1088;
        case 0x1f108cu: goto label_1f108c;
        case 0x1f1090u: goto label_1f1090;
        case 0x1f1094u: goto label_1f1094;
        case 0x1f1098u: goto label_1f1098;
        case 0x1f109cu: goto label_1f109c;
        case 0x1f10a0u: goto label_1f10a0;
        case 0x1f10a4u: goto label_1f10a4;
        case 0x1f10a8u: goto label_1f10a8;
        case 0x1f10acu: goto label_1f10ac;
        case 0x1f10b0u: goto label_1f10b0;
        case 0x1f10b4u: goto label_1f10b4;
        case 0x1f10b8u: goto label_1f10b8;
        case 0x1f10bcu: goto label_1f10bc;
        case 0x1f10c0u: goto label_1f10c0;
        case 0x1f10c4u: goto label_1f10c4;
        case 0x1f10c8u: goto label_1f10c8;
        case 0x1f10ccu: goto label_1f10cc;
        case 0x1f10d0u: goto label_1f10d0;
        case 0x1f10d4u: goto label_1f10d4;
        case 0x1f10d8u: goto label_1f10d8;
        case 0x1f10dcu: goto label_1f10dc;
        case 0x1f10e0u: goto label_1f10e0;
        case 0x1f10e4u: goto label_1f10e4;
        case 0x1f10e8u: goto label_1f10e8;
        case 0x1f10ecu: goto label_1f10ec;
        case 0x1f10f0u: goto label_1f10f0;
        case 0x1f10f4u: goto label_1f10f4;
        case 0x1f10f8u: goto label_1f10f8;
        case 0x1f10fcu: goto label_1f10fc;
        case 0x1f1100u: goto label_1f1100;
        case 0x1f1104u: goto label_1f1104;
        case 0x1f1108u: goto label_1f1108;
        case 0x1f110cu: goto label_1f110c;
        case 0x1f1110u: goto label_1f1110;
        case 0x1f1114u: goto label_1f1114;
        case 0x1f1118u: goto label_1f1118;
        case 0x1f111cu: goto label_1f111c;
        case 0x1f1120u: goto label_1f1120;
        case 0x1f1124u: goto label_1f1124;
        case 0x1f1128u: goto label_1f1128;
        case 0x1f112cu: goto label_1f112c;
        case 0x1f1130u: goto label_1f1130;
        case 0x1f1134u: goto label_1f1134;
        case 0x1f1138u: goto label_1f1138;
        case 0x1f113cu: goto label_1f113c;
        case 0x1f1140u: goto label_1f1140;
        case 0x1f1144u: goto label_1f1144;
        case 0x1f1148u: goto label_1f1148;
        case 0x1f114cu: goto label_1f114c;
        case 0x1f1150u: goto label_1f1150;
        case 0x1f1154u: goto label_1f1154;
        case 0x1f1158u: goto label_1f1158;
        case 0x1f115cu: goto label_1f115c;
        case 0x1f1160u: goto label_1f1160;
        case 0x1f1164u: goto label_1f1164;
        case 0x1f1168u: goto label_1f1168;
        case 0x1f116cu: goto label_1f116c;
        case 0x1f1170u: goto label_1f1170;
        case 0x1f1174u: goto label_1f1174;
        case 0x1f1178u: goto label_1f1178;
        case 0x1f117cu: goto label_1f117c;
        case 0x1f1180u: goto label_1f1180;
        case 0x1f1184u: goto label_1f1184;
        case 0x1f1188u: goto label_1f1188;
        case 0x1f118cu: goto label_1f118c;
        case 0x1f1190u: goto label_1f1190;
        case 0x1f1194u: goto label_1f1194;
        case 0x1f1198u: goto label_1f1198;
        case 0x1f119cu: goto label_1f119c;
        case 0x1f11a0u: goto label_1f11a0;
        case 0x1f11a4u: goto label_1f11a4;
        case 0x1f11a8u: goto label_1f11a8;
        case 0x1f11acu: goto label_1f11ac;
        case 0x1f11b0u: goto label_1f11b0;
        case 0x1f11b4u: goto label_1f11b4;
        case 0x1f11b8u: goto label_1f11b8;
        case 0x1f11bcu: goto label_1f11bc;
        case 0x1f11c0u: goto label_1f11c0;
        case 0x1f11c4u: goto label_1f11c4;
        case 0x1f11c8u: goto label_1f11c8;
        case 0x1f11ccu: goto label_1f11cc;
        case 0x1f11d0u: goto label_1f11d0;
        case 0x1f11d4u: goto label_1f11d4;
        case 0x1f11d8u: goto label_1f11d8;
        case 0x1f11dcu: goto label_1f11dc;
        case 0x1f11e0u: goto label_1f11e0;
        case 0x1f11e4u: goto label_1f11e4;
        case 0x1f11e8u: goto label_1f11e8;
        case 0x1f11ecu: goto label_1f11ec;
        case 0x1f11f0u: goto label_1f11f0;
        case 0x1f11f4u: goto label_1f11f4;
        case 0x1f11f8u: goto label_1f11f8;
        case 0x1f11fcu: goto label_1f11fc;
        case 0x1f1200u: goto label_1f1200;
        case 0x1f1204u: goto label_1f1204;
        case 0x1f1208u: goto label_1f1208;
        case 0x1f120cu: goto label_1f120c;
        case 0x1f1210u: goto label_1f1210;
        case 0x1f1214u: goto label_1f1214;
        case 0x1f1218u: goto label_1f1218;
        case 0x1f121cu: goto label_1f121c;
        case 0x1f1220u: goto label_1f1220;
        case 0x1f1224u: goto label_1f1224;
        case 0x1f1228u: goto label_1f1228;
        case 0x1f122cu: goto label_1f122c;
        case 0x1f1230u: goto label_1f1230;
        case 0x1f1234u: goto label_1f1234;
        case 0x1f1238u: goto label_1f1238;
        case 0x1f123cu: goto label_1f123c;
        case 0x1f1240u: goto label_1f1240;
        case 0x1f1244u: goto label_1f1244;
        case 0x1f1248u: goto label_1f1248;
        case 0x1f124cu: goto label_1f124c;
        case 0x1f1250u: goto label_1f1250;
        case 0x1f1254u: goto label_1f1254;
        case 0x1f1258u: goto label_1f1258;
        case 0x1f125cu: goto label_1f125c;
        case 0x1f1260u: goto label_1f1260;
        case 0x1f1264u: goto label_1f1264;
        case 0x1f1268u: goto label_1f1268;
        case 0x1f126cu: goto label_1f126c;
        case 0x1f1270u: goto label_1f1270;
        case 0x1f1274u: goto label_1f1274;
        case 0x1f1278u: goto label_1f1278;
        case 0x1f127cu: goto label_1f127c;
        case 0x1f1280u: goto label_1f1280;
        case 0x1f1284u: goto label_1f1284;
        case 0x1f1288u: goto label_1f1288;
        case 0x1f128cu: goto label_1f128c;
        case 0x1f1290u: goto label_1f1290;
        case 0x1f1294u: goto label_1f1294;
        case 0x1f1298u: goto label_1f1298;
        case 0x1f129cu: goto label_1f129c;
        case 0x1f12a0u: goto label_1f12a0;
        case 0x1f12a4u: goto label_1f12a4;
        case 0x1f12a8u: goto label_1f12a8;
        case 0x1f12acu: goto label_1f12ac;
        case 0x1f12b0u: goto label_1f12b0;
        case 0x1f12b4u: goto label_1f12b4;
        case 0x1f12b8u: goto label_1f12b8;
        case 0x1f12bcu: goto label_1f12bc;
        case 0x1f12c0u: goto label_1f12c0;
        case 0x1f12c4u: goto label_1f12c4;
        case 0x1f12c8u: goto label_1f12c8;
        case 0x1f12ccu: goto label_1f12cc;
        case 0x1f12d0u: goto label_1f12d0;
        case 0x1f12d4u: goto label_1f12d4;
        case 0x1f12d8u: goto label_1f12d8;
        case 0x1f12dcu: goto label_1f12dc;
        case 0x1f12e0u: goto label_1f12e0;
        case 0x1f12e4u: goto label_1f12e4;
        case 0x1f12e8u: goto label_1f12e8;
        case 0x1f12ecu: goto label_1f12ec;
        case 0x1f12f0u: goto label_1f12f0;
        case 0x1f12f4u: goto label_1f12f4;
        case 0x1f12f8u: goto label_1f12f8;
        case 0x1f12fcu: goto label_1f12fc;
        case 0x1f1300u: goto label_1f1300;
        case 0x1f1304u: goto label_1f1304;
        case 0x1f1308u: goto label_1f1308;
        case 0x1f130cu: goto label_1f130c;
        case 0x1f1310u: goto label_1f1310;
        case 0x1f1314u: goto label_1f1314;
        case 0x1f1318u: goto label_1f1318;
        case 0x1f131cu: goto label_1f131c;
        case 0x1f1320u: goto label_1f1320;
        case 0x1f1324u: goto label_1f1324;
        case 0x1f1328u: goto label_1f1328;
        case 0x1f132cu: goto label_1f132c;
        case 0x1f1330u: goto label_1f1330;
        case 0x1f1334u: goto label_1f1334;
        case 0x1f1338u: goto label_1f1338;
        case 0x1f133cu: goto label_1f133c;
        case 0x1f1340u: goto label_1f1340;
        case 0x1f1344u: goto label_1f1344;
        case 0x1f1348u: goto label_1f1348;
        case 0x1f134cu: goto label_1f134c;
        case 0x1f1350u: goto label_1f1350;
        case 0x1f1354u: goto label_1f1354;
        case 0x1f1358u: goto label_1f1358;
        case 0x1f135cu: goto label_1f135c;
        case 0x1f1360u: goto label_1f1360;
        case 0x1f1364u: goto label_1f1364;
        case 0x1f1368u: goto label_1f1368;
        case 0x1f136cu: goto label_1f136c;
        case 0x1f1370u: goto label_1f1370;
        case 0x1f1374u: goto label_1f1374;
        case 0x1f1378u: goto label_1f1378;
        case 0x1f137cu: goto label_1f137c;
        case 0x1f1380u: goto label_1f1380;
        case 0x1f1384u: goto label_1f1384;
        case 0x1f1388u: goto label_1f1388;
        case 0x1f138cu: goto label_1f138c;
        case 0x1f1390u: goto label_1f1390;
        case 0x1f1394u: goto label_1f1394;
        case 0x1f1398u: goto label_1f1398;
        case 0x1f139cu: goto label_1f139c;
        case 0x1f13a0u: goto label_1f13a0;
        case 0x1f13a4u: goto label_1f13a4;
        case 0x1f13a8u: goto label_1f13a8;
        case 0x1f13acu: goto label_1f13ac;
        case 0x1f13b0u: goto label_1f13b0;
        case 0x1f13b4u: goto label_1f13b4;
        case 0x1f13b8u: goto label_1f13b8;
        case 0x1f13bcu: goto label_1f13bc;
        case 0x1f13c0u: goto label_1f13c0;
        case 0x1f13c4u: goto label_1f13c4;
        case 0x1f13c8u: goto label_1f13c8;
        case 0x1f13ccu: goto label_1f13cc;
        case 0x1f13d0u: goto label_1f13d0;
        case 0x1f13d4u: goto label_1f13d4;
        case 0x1f13d8u: goto label_1f13d8;
        case 0x1f13dcu: goto label_1f13dc;
        case 0x1f13e0u: goto label_1f13e0;
        case 0x1f13e4u: goto label_1f13e4;
        case 0x1f13e8u: goto label_1f13e8;
        case 0x1f13ecu: goto label_1f13ec;
        case 0x1f13f0u: goto label_1f13f0;
        case 0x1f13f4u: goto label_1f13f4;
        case 0x1f13f8u: goto label_1f13f8;
        case 0x1f13fcu: goto label_1f13fc;
        case 0x1f1400u: goto label_1f1400;
        case 0x1f1404u: goto label_1f1404;
        case 0x1f1408u: goto label_1f1408;
        case 0x1f140cu: goto label_1f140c;
        case 0x1f1410u: goto label_1f1410;
        case 0x1f1414u: goto label_1f1414;
        case 0x1f1418u: goto label_1f1418;
        case 0x1f141cu: goto label_1f141c;
        case 0x1f1420u: goto label_1f1420;
        case 0x1f1424u: goto label_1f1424;
        case 0x1f1428u: goto label_1f1428;
        case 0x1f142cu: goto label_1f142c;
        case 0x1f1430u: goto label_1f1430;
        case 0x1f1434u: goto label_1f1434;
        case 0x1f1438u: goto label_1f1438;
        case 0x1f143cu: goto label_1f143c;
        case 0x1f1440u: goto label_1f1440;
        case 0x1f1444u: goto label_1f1444;
        case 0x1f1448u: goto label_1f1448;
        case 0x1f144cu: goto label_1f144c;
        case 0x1f1450u: goto label_1f1450;
        case 0x1f1454u: goto label_1f1454;
        case 0x1f1458u: goto label_1f1458;
        case 0x1f145cu: goto label_1f145c;
        case 0x1f1460u: goto label_1f1460;
        case 0x1f1464u: goto label_1f1464;
        case 0x1f1468u: goto label_1f1468;
        case 0x1f146cu: goto label_1f146c;
        case 0x1f1470u: goto label_1f1470;
        case 0x1f1474u: goto label_1f1474;
        case 0x1f1478u: goto label_1f1478;
        case 0x1f147cu: goto label_1f147c;
        case 0x1f1480u: goto label_1f1480;
        case 0x1f1484u: goto label_1f1484;
        case 0x1f1488u: goto label_1f1488;
        case 0x1f148cu: goto label_1f148c;
        case 0x1f1490u: goto label_1f1490;
        case 0x1f1494u: goto label_1f1494;
        case 0x1f1498u: goto label_1f1498;
        case 0x1f149cu: goto label_1f149c;
        case 0x1f14a0u: goto label_1f14a0;
        case 0x1f14a4u: goto label_1f14a4;
        case 0x1f14a8u: goto label_1f14a8;
        case 0x1f14acu: goto label_1f14ac;
        case 0x1f14b0u: goto label_1f14b0;
        case 0x1f14b4u: goto label_1f14b4;
        case 0x1f14b8u: goto label_1f14b8;
        case 0x1f14bcu: goto label_1f14bc;
        case 0x1f14c0u: goto label_1f14c0;
        case 0x1f14c4u: goto label_1f14c4;
        case 0x1f14c8u: goto label_1f14c8;
        case 0x1f14ccu: goto label_1f14cc;
        case 0x1f14d0u: goto label_1f14d0;
        case 0x1f14d4u: goto label_1f14d4;
        case 0x1f14d8u: goto label_1f14d8;
        case 0x1f14dcu: goto label_1f14dc;
        case 0x1f14e0u: goto label_1f14e0;
        case 0x1f14e4u: goto label_1f14e4;
        case 0x1f14e8u: goto label_1f14e8;
        case 0x1f14ecu: goto label_1f14ec;
        case 0x1f14f0u: goto label_1f14f0;
        case 0x1f14f4u: goto label_1f14f4;
        case 0x1f14f8u: goto label_1f14f8;
        case 0x1f14fcu: goto label_1f14fc;
        case 0x1f1500u: goto label_1f1500;
        case 0x1f1504u: goto label_1f1504;
        case 0x1f1508u: goto label_1f1508;
        case 0x1f150cu: goto label_1f150c;
        case 0x1f1510u: goto label_1f1510;
        case 0x1f1514u: goto label_1f1514;
        default: break;
    }

    ctx->pc = 0x1eff40u;

label_1eff40:
    // 0x1eff40: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x1eff40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_1eff44:
    // 0x1eff44: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1eff44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1eff48:
    // 0x1eff48: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1eff48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1eff4c:
    // 0x1eff4c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1eff4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1eff50:
    // 0x1eff50: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1eff50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1eff54:
    // 0x1eff54: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1eff54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1eff58:
    // 0x1eff58: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1eff58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eff5c:
    // 0x1eff5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1eff5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1eff60:
    // 0x1eff60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1eff60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1eff64:
    // 0x1eff64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eff64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1eff68:
    // 0x1eff68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eff6c:
    // 0x1eff6c: 0x83828f30  lb          $v0, -0x70D0($gp)
    ctx->pc = 0x1eff6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938416)));
label_1eff70:
    // 0x1eff70: 0x8f9194f8  lw          $s1, -0x6B08($gp)
    ctx->pc = 0x1eff70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_1eff74:
    // 0x1eff74: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1eff78:
    if (ctx->pc == 0x1EFF78u) {
        ctx->pc = 0x1EFF78u;
            // 0x1eff78: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF7Cu;
        goto label_1eff7c;
    }
    ctx->pc = 0x1EFF74u;
    {
        const bool branch_taken_0x1eff74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF74u;
            // 0x1eff78: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff74) {
            ctx->pc = 0x1EFF8Cu;
            goto label_1eff8c;
        }
    }
    ctx->pc = 0x1EFF7Cu;
label_1eff7c:
    // 0x1eff7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1eff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1eff80:
    // 0x1eff80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eff84:
    // 0x1eff84: 0xaf838f2c  sw          $v1, -0x70D4($gp)
    ctx->pc = 0x1eff84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938412), GPR_U32(ctx, 3));
label_1eff88:
    // 0x1eff88: 0xa3828f30  sb          $v0, -0x70D0($gp)
    ctx->pc = 0x1eff88u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938416), (uint8_t)GPR_U32(ctx, 2));
label_1eff8c:
    // 0x1eff8c: 0x83828f38  lb          $v0, -0x70C8($gp)
    ctx->pc = 0x1eff8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938424)));
label_1eff90:
    // 0x1eff90: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1eff94:
    if (ctx->pc == 0x1EFF94u) {
        ctx->pc = 0x1EFF94u;
            // 0x1eff94: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x1EFF98u;
        goto label_1eff98;
    }
    ctx->pc = 0x1EFF90u;
    {
        const bool branch_taken_0x1eff90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF90u;
            // 0x1eff94: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff90) {
            ctx->pc = 0x1EFFA4u;
            goto label_1effa4;
        }
    }
    ctx->pc = 0x1EFF98u;
label_1eff98:
    // 0x1eff98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eff98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eff9c:
    // 0x1eff9c: 0xaf808f34  sw          $zero, -0x70CC($gp)
    ctx->pc = 0x1eff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938420), GPR_U32(ctx, 0));
label_1effa0:
    // 0x1effa0: 0xa3828f38  sb          $v0, -0x70C8($gp)
    ctx->pc = 0x1effa0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938424), (uint8_t)GPR_U32(ctx, 2));
label_1effa4:
    // 0x1effa4: 0x8c30ca4c  lw          $s0, -0x35B4($at)
    ctx->pc = 0x1effa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
label_1effa8:
    // 0x1effa8: 0xc07c6f8  jal         func_1F1BE0
label_1effac:
    if (ctx->pc == 0x1EFFACu) {
        ctx->pc = 0x1EFFACu;
            // 0x1effac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFB0u;
        goto label_1effb0;
    }
    ctx->pc = 0x1EFFA8u;
    SET_GPR_U32(ctx, 31, 0x1EFFB0u);
    ctx->pc = 0x1EFFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFFA8u;
            // 0x1effac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1BE0u;
    if (runtime->hasFunction(0x1F1BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1F1BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFFB0u; }
        if (ctx->pc != 0x1EFFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInOutMenu__12CMenuTreeMapFv_0x1f1be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFFB0u; }
        if (ctx->pc != 0x1EFFB0u) { return; }
    }
    ctx->pc = 0x1EFFB0u;
label_1effb0:
    // 0x1effb0: 0x8f848eb0  lw          $a0, -0x7150($gp)
    ctx->pc = 0x1effb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
label_1effb4:
    // 0x1effb4: 0xc07b7fc  jal         func_1EDFF0
label_1effb8:
    if (ctx->pc == 0x1EFFB8u) {
        ctx->pc = 0x1EFFB8u;
            // 0x1effb8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFBCu;
        goto label_1effbc;
    }
    ctx->pc = 0x1EFFB4u;
    SET_GPR_U32(ctx, 31, 0x1EFFBCu);
    ctx->pc = 0x1EFFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFFB4u;
            // 0x1effb8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EDFF0u;
    if (runtime->hasFunction(0x1EDFF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EDFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFFBCu; }
        if (ctx->pc != 0x1EFFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__11CDngFreeMapFv_0x1edff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFFBCu; }
        if (ctx->pc != 0x1EFFBCu) { return; }
    }
    ctx->pc = 0x1EFFBCu;
label_1effbc:
    // 0x1effbc: 0xc05239c  jal         func_148E70
label_1effc0:
    if (ctx->pc == 0x1EFFC0u) {
        ctx->pc = 0x1EFFC4u;
        goto label_1effc4;
    }
    ctx->pc = 0x1EFFBCu;
    SET_GPR_U32(ctx, 31, 0x1EFFC4u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFFC4u; }
        if (ctx->pc != 0x1EFFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFFC4u; }
        if (ctx->pc != 0x1EFFC4u) { return; }
    }
    ctx->pc = 0x1EFFC4u;
label_1effc4:
    // 0x1effc4: 0x83838f40  lb          $v1, -0x70C0($gp)
    ctx->pc = 0x1effc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938432)));
label_1effc8:
    // 0x1effc8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1effcc:
    if (ctx->pc == 0x1EFFCCu) {
        ctx->pc = 0x1EFFCCu;
            // 0x1effcc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFD0u;
        goto label_1effd0;
    }
    ctx->pc = 0x1EFFC8u;
    {
        const bool branch_taken_0x1effc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFFC8u;
            // 0x1effcc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effc8) {
            ctx->pc = 0x1EFFDCu;
            goto label_1effdc;
        }
    }
    ctx->pc = 0x1EFFD0u;
label_1effd0:
    // 0x1effd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1effd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1effd4:
    // 0x1effd4: 0xaf808f3c  sw          $zero, -0x70C4($gp)
    ctx->pc = 0x1effd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938428), GPR_U32(ctx, 0));
label_1effd8:
    // 0x1effd8: 0xa3838f40  sb          $v1, -0x70C0($gp)
    ctx->pc = 0x1effd8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938432), (uint8_t)GPR_U32(ctx, 3));
label_1effdc:
    // 0x1effdc: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x1effdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_1effe0:
    // 0x1effe0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1effe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1effe4:
    // 0x1effe4: 0x1083005f  beq         $a0, $v1, . + 4 + (0x5F << 2)
label_1effe8:
    if (ctx->pc == 0x1EFFE8u) {
        ctx->pc = 0x1EFFE8u;
            // 0x1effe8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1EFFECu;
        goto label_1effec;
    }
    ctx->pc = 0x1EFFE4u;
    {
        const bool branch_taken_0x1effe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EFFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFFE4u;
            // 0x1effe8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effe4) {
            ctx->pc = 0x1F0164u;
            goto label_1f0164;
        }
    }
    ctx->pc = 0x1EFFECu;
label_1effec:
    // 0x1effec: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
label_1efff0:
    if (ctx->pc == 0x1EFFF0u) {
        ctx->pc = 0x1EFFF0u;
            // 0x1efff0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EFFF4u;
        goto label_1efff4;
    }
    ctx->pc = 0x1EFFECu;
    {
        const bool branch_taken_0x1effec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EFFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFFECu;
            // 0x1efff0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effec) {
            ctx->pc = 0x1F0044u;
            goto label_1f0044;
        }
    }
    ctx->pc = 0x1EFFF4u;
label_1efff4:
    // 0x1efff4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1efff8:
    if (ctx->pc == 0x1EFFF8u) {
        ctx->pc = 0x1EFFFCu;
        goto label_1efffc;
    }
    ctx->pc = 0x1EFFF4u;
    {
        const bool branch_taken_0x1efff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1efff4) {
            ctx->pc = 0x1F0004u;
            goto label_1f0004;
        }
    }
    ctx->pc = 0x1EFFFCu;
label_1efffc:
    // 0x1efffc: 0x1000006b  b           . + 4 + (0x6B << 2)
label_1f0000:
    if (ctx->pc == 0x1F0000u) {
        ctx->pc = 0x1F0000u;
            // 0x1f0000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0004u;
        goto label_1f0004;
    }
    ctx->pc = 0x1EFFFCu;
    {
        const bool branch_taken_0x1efffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFFFCu;
            // 0x1f0000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efffc) {
            ctx->pc = 0x1F01ACu;
            goto label_1f01ac;
        }
    }
    ctx->pc = 0x1F0004u;
label_1f0004:
    // 0x1f0004: 0x124003ff  beqz        $s2, . + 4 + (0x3FF << 2)
label_1f0008:
    if (ctx->pc == 0x1F0008u) {
        ctx->pc = 0x1F000Cu;
        goto label_1f000c;
    }
    ctx->pc = 0x1F0004u;
    {
        const bool branch_taken_0x1f0004 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0004) {
            ctx->pc = 0x1F1004u;
            goto label_1f1004;
        }
    }
    ctx->pc = 0x1F000Cu;
label_1f000c:
    // 0x1f000c: 0x144003fd  bnez        $v0, . + 4 + (0x3FD << 2)
label_1f0010:
    if (ctx->pc == 0x1F0010u) {
        ctx->pc = 0x1F0014u;
        goto label_1f0014;
    }
    ctx->pc = 0x1F000Cu;
    {
        const bool branch_taken_0x1f000c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f000c) {
            ctx->pc = 0x1F1004u;
            goto label_1f1004;
        }
    }
    ctx->pc = 0x1F0014u;
label_1f0014:
    // 0x1f0014: 0x8e99010c  lw          $t9, 0x10C($s4)
    ctx->pc = 0x1f0014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_1f0018:
    // 0x1f0018: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f0018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f001c:
    // 0x1f001c: 0x320f809  jalr        $t9
label_1f0020:
    if (ctx->pc == 0x1F0020u) {
        ctx->pc = 0x1F0020u;
            // 0x1f0020: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0024u;
        goto label_1f0024;
    }
    ctx->pc = 0x1F001Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F0024u);
        ctx->pc = 0x1F0020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F001Cu;
            // 0x1f0020: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F0024u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F0024u; }
            if (ctx->pc != 0x1F0024u) { return; }
        }
        }
    }
    ctx->pc = 0x1F0024u;
label_1f0024:
    // 0x1f0024: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f0028:
    // 0x1f0028: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1f0028u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f002c:
    // 0x1f002c: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1f002cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
label_1f0030:
    // 0x1f0030: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f0030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f0034:
    // 0x1f0034: 0xac3717b8  sw          $s7, 0x17B8($at)
    ctx->pc = 0x1f0034u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6072), GPR_U32(ctx, 23));
label_1f0038:
    // 0x1f0038: 0xaf828f2c  sw          $v0, -0x70D4($gp)
    ctx->pc = 0x1f0038u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938412), GPR_U32(ctx, 2));
label_1f003c:
    // 0x1f003c: 0x100003f1  b           . + 4 + (0x3F1 << 2)
label_1f0040:
    if (ctx->pc == 0x1F0040u) {
        ctx->pc = 0x1F0040u;
            // 0x1f0040: 0xaf808f34  sw          $zero, -0x70CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938420), GPR_U32(ctx, 0));
        ctx->pc = 0x1F0044u;
        goto label_1f0044;
    }
    ctx->pc = 0x1F003Cu;
    {
        const bool branch_taken_0x1f003c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F003Cu;
            // 0x1f0040: 0xaf808f34  sw          $zero, -0x70CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938420), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f003c) {
            ctx->pc = 0x1F1004u;
            goto label_1f1004;
        }
    }
    ctx->pc = 0x1F0044u;
label_1f0044:
    // 0x1f0044: 0x124003ef  beqz        $s2, . + 4 + (0x3EF << 2)
label_1f0048:
    if (ctx->pc == 0x1F0048u) {
        ctx->pc = 0x1F0048u;
            // 0x1f0048: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F004Cu;
        goto label_1f004c;
    }
    ctx->pc = 0x1F0044u;
    {
        const bool branch_taken_0x1f0044 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0044u;
            // 0x1f0048: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0044) {
            ctx->pc = 0x1F1004u;
            goto label_1f1004;
        }
    }
    ctx->pc = 0x1F004Cu;
label_1f004c:
    // 0x1f004c: 0xc08dc80  jal         func_237200
label_1f0050:
    if (ctx->pc == 0x1F0050u) {
        ctx->pc = 0x1F0054u;
        goto label_1f0054;
    }
    ctx->pc = 0x1F004Cu;
    SET_GPR_U32(ctx, 31, 0x1F0054u);
    ctx->pc = 0x237200u;
    if (runtime->hasFunction(0x237200u)) {
        auto targetFn = runtime->lookupFunction(0x237200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0054u; }
        if (ctx->pc != 0x1F0054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexBlock__14CBaseMenuClassFv_0x237200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0054u; }
        if (ctx->pc != 0x1F0054u) { return; }
    }
    ctx->pc = 0x1F0054u;
label_1f0054:
    // 0x1f0054: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f0054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1f0058:
    // 0x1f0058: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f0058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f005c:
    // 0x1f005c: 0xc08e7cc  jal         func_239F30
label_1f0060:
    if (ctx->pc == 0x1F0060u) {
        ctx->pc = 0x1F0060u;
            // 0x1f0060: 0x24a588d0  addiu       $a1, $a1, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936784));
        ctx->pc = 0x1F0064u;
        goto label_1f0064;
    }
    ctx->pc = 0x1F005Cu;
    SET_GPR_U32(ctx, 31, 0x1F0064u);
    ctx->pc = 0x1F0060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F005Cu;
            // 0x1f0060: 0x24a588d0  addiu       $a1, $a1, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0064u; }
        if (ctx->pc != 0x1F0064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0064u; }
        if (ctx->pc != 0x1F0064u) { return; }
    }
    ctx->pc = 0x1F0064u;
label_1f0064:
    // 0x1f0064: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f0064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f0068:
    // 0x1f0068: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f0068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f006c:
    // 0x1f006c: 0x8c23d62c  lw          $v1, -0x29D4($at)
    ctx->pc = 0x1f006cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956588)));
label_1f0070:
    // 0x1f0070: 0x14620038  bne         $v1, $v0, . + 4 + (0x38 << 2)
label_1f0074:
    if (ctx->pc == 0x1F0074u) {
        ctx->pc = 0x1F0074u;
            // 0x1f0074: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F0078u;
        goto label_1f0078;
    }
    ctx->pc = 0x1F0070u;
    {
        const bool branch_taken_0x1f0070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0070u;
            // 0x1f0074: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0070) {
            ctx->pc = 0x1F0154u;
            goto label_1f0154;
        }
    }
    ctx->pc = 0x1F0078u;
label_1f0078:
    // 0x1f0078: 0x93828f1c  lbu         $v0, -0x70E4($gp)
    ctx->pc = 0x1f0078u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938396)));
label_1f007c:
    // 0x1f007c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1f0080:
    if (ctx->pc == 0x1F0080u) {
        ctx->pc = 0x1F0080u;
            // 0x1f0080: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F0084u;
        goto label_1f0084;
    }
    ctx->pc = 0x1F007Cu;
    {
        const bool branch_taken_0x1f007c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F007Cu;
            // 0x1f0080: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f007c) {
            ctx->pc = 0x1F00FCu;
            goto label_1f00fc;
        }
    }
    ctx->pc = 0x1F0084u;
label_1f0084:
    // 0x1f0084: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1f0084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f0088:
    // 0x1f0088: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f0088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f008c:
    // 0x1f008c: 0xac23d62c  sw          $v1, -0x29D4($at)
    ctx->pc = 0x1f008cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 3));
label_1f0090:
    // 0x1f0090: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x1f0090u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
label_1f0094:
    // 0x1f0094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0098:
    // 0x1f0098: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f0098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f009c:
    // 0x1f009c: 0xac22d630  sw          $v0, -0x29D0($at)
    ctx->pc = 0x1f009cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
label_1f00a0:
    // 0x1f00a0: 0x3c0701ed  lui         $a3, 0x1ED
    ctx->pc = 0x1f00a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)493 << 16));
label_1f00a4:
    // 0x1f00a4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f00a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f00a8:
    // 0x1f00a8: 0x86840118  lh          $a0, 0x118($s4)
    ctx->pc = 0x1f00a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 280)));
label_1f00ac:
    // 0x1f00ac: 0x8c25d638  lw          $a1, -0x29C8($at)
    ctx->pc = 0x1f00acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
label_1f00b0:
    // 0x1f00b0: 0x24c6d630  addiu       $a2, $a2, -0x29D0
    ctx->pc = 0x1f00b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956592));
label_1f00b4:
    // 0x1f00b4: 0xc07be24  jal         func_1EF890
label_1f00b8:
    if (ctx->pc == 0x1F00B8u) {
        ctx->pc = 0x1F00B8u;
            // 0x1f00b8: 0x24e7d634  addiu       $a3, $a3, -0x29CC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956596));
        ctx->pc = 0x1F00BCu;
        goto label_1f00bc;
    }
    ctx->pc = 0x1F00B4u;
    SET_GPR_U32(ctx, 31, 0x1F00BCu);
    ctx->pc = 0x1F00B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F00B4u;
            // 0x1f00b8: 0x24e7d634  addiu       $a3, $a3, -0x29CC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956596));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF890u;
    if (runtime->hasFunction(0x1EF890u)) {
        auto targetFn = runtime->lookupFunction(0x1EF890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F00BCu; }
        if (ctx->pc != 0x1F00BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeDngTreeMapJumpNo__FiiPiPi_0x1ef890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F00BCu; }
        if (ctx->pc != 0x1F00BCu) { return; }
    }
    ctx->pc = 0x1F00BCu;
label_1f00bc:
    // 0x1f00bc: 0xc064220  jal         func_190880
label_1f00c0:
    if (ctx->pc == 0x1F00C0u) {
        ctx->pc = 0x1F00C4u;
        goto label_1f00c4;
    }
    ctx->pc = 0x1F00BCu;
    SET_GPR_U32(ctx, 31, 0x1F00C4u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F00C4u; }
        if (ctx->pc != 0x1F00C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F00C4u; }
        if (ctx->pc != 0x1F00C4u) { return; }
    }
    ctx->pc = 0x1F00C4u;
label_1f00c4:
    // 0x1f00c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f00c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f00c8:
    // 0x1f00c8: 0xc0bd9f4  jal         func_2F67D0
label_1f00cc:
    if (ctx->pc == 0x1F00CCu) {
        ctx->pc = 0x1F00CCu;
            // 0x1f00cc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1F00D0u;
        goto label_1f00d0;
    }
    ctx->pc = 0x1F00C8u;
    SET_GPR_U32(ctx, 31, 0x1F00D0u);
    ctx->pc = 0x1F00CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F00C8u;
            // 0x1f00cc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F67D0u;
    if (runtime->hasFunction(0x2F67D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F67D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F00D0u; }
        if (ctx->pc != 0x1F00D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetBitCtrl__9CSaveDataFi_0x2f67d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F00D0u; }
        if (ctx->pc != 0x1F00D0u) { return; }
    }
    ctx->pc = 0x1F00D0u;
label_1f00d0:
    // 0x1f00d0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f00d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f00d4:
    // 0x1f00d4: 0x8c22d638  lw          $v0, -0x29C8($at)
    ctx->pc = 0x1f00d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
label_1f00d8:
    // 0x1f00d8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1f00dc:
    if (ctx->pc == 0x1F00DCu) {
        ctx->pc = 0x1F00E0u;
        goto label_1f00e0;
    }
    ctx->pc = 0x1F00D8u;
    {
        const bool branch_taken_0x1f00d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f00d8) {
            ctx->pc = 0x1F00FCu;
            goto label_1f00fc;
        }
    }
    ctx->pc = 0x1F00E0u;
label_1f00e0:
    // 0x1f00e0: 0xc064220  jal         func_190880
label_1f00e4:
    if (ctx->pc == 0x1F00E4u) {
        ctx->pc = 0x1F00E8u;
        goto label_1f00e8;
    }
    ctx->pc = 0x1F00E0u;
    SET_GPR_U32(ctx, 31, 0x1F00E8u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F00E8u; }
        if (ctx->pc != 0x1F00E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F00E8u; }
        if (ctx->pc != 0x1F00E8u) { return; }
    }
    ctx->pc = 0x1F00E8u;
label_1f00e8:
    // 0x1f00e8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f00e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f00ec:
    // 0x1f00ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f00ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f00f0:
    // 0x1f00f0: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x1f00f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
label_1f00f4:
    // 0x1f00f4: 0xc0bdcfc  jal         func_2F73F0
label_1f00f8:
    if (ctx->pc == 0x1F00F8u) {
        ctx->pc = 0x1F00F8u;
            // 0x1f00f8: 0x412021  addu        $a0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->pc = 0x1F00FCu;
        goto label_1f00fc;
    }
    ctx->pc = 0x1F00F4u;
    SET_GPR_U32(ctx, 31, 0x1F00FCu);
    ctx->pc = 0x1F00F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F00F4u;
            // 0x1f00f8: 0x412021  addu        $a0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F73F0u;
    if (runtime->hasFunction(0x2F73F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F73F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F00FCu; }
        if (ctx->pc != 0x1F00FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFloorID__16CSaveDataDungeonFi_0x2f73f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F00FCu; }
        if (ctx->pc != 0x1F00FCu) { return; }
    }
    ctx->pc = 0x1F00FCu;
label_1f00fc:
    // 0x1f00fc: 0xc07be14  jal         func_1EF850
label_1f0100:
    if (ctx->pc == 0x1F0100u) {
        ctx->pc = 0x1F0104u;
        goto label_1f0104;
    }
    ctx->pc = 0x1F00FCu;
    SET_GPR_U32(ctx, 31, 0x1F0104u);
    ctx->pc = 0x1EF850u;
    if (runtime->hasFunction(0x1EF850u)) {
        auto targetFn = runtime->lookupFunction(0x1EF850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0104u; }
        if (ctx->pc != 0x1F0104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDngTreeMapFuncType__Fv_0x1ef850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0104u; }
        if (ctx->pc != 0x1F0104u) { return; }
    }
    ctx->pc = 0x1F0104u;
label_1f0104:
    // 0x1f0104: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1f0108:
    if (ctx->pc == 0x1F0108u) {
        ctx->pc = 0x1F0108u;
            // 0x1f0108: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x1F010Cu;
        goto label_1f010c;
    }
    ctx->pc = 0x1F0104u;
    {
        const bool branch_taken_0x1f0104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0104u;
            // 0x1f0108: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0104) {
            ctx->pc = 0x1F0130u;
            goto label_1f0130;
        }
    }
    ctx->pc = 0x1F010Cu;
label_1f010c:
    // 0x1f010c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f010cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f0110:
    // 0x1f0110: 0x8c23d630  lw          $v1, -0x29D0($at)
    ctx->pc = 0x1f0110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956592)));
label_1f0114:
    // 0x1f0114: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1f0118:
    if (ctx->pc == 0x1F0118u) {
        ctx->pc = 0x1F011Cu;
        goto label_1f011c;
    }
    ctx->pc = 0x1F0114u;
    {
        const bool branch_taken_0x1f0114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0114) {
            ctx->pc = 0x1F0130u;
            goto label_1f0130;
        }
    }
    ctx->pc = 0x1F011Cu;
label_1f011c:
    // 0x1f011c: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x1f011cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_1f0120:
    // 0x1f0120: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f0124:
    // 0x1f0124: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f0124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0128:
    // 0x1f0128: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f0128u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1f012c:
    // 0x1f012c: 0xac23906c  sw          $v1, -0x6F94($at)
    ctx->pc = 0x1f012cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938732), GPR_U32(ctx, 3));
label_1f0130:
    // 0x1f0130: 0xc07be14  jal         func_1EF850
label_1f0134:
    if (ctx->pc == 0x1F0134u) {
        ctx->pc = 0x1F0138u;
        goto label_1f0138;
    }
    ctx->pc = 0x1F0130u;
    SET_GPR_U32(ctx, 31, 0x1F0138u);
    ctx->pc = 0x1EF850u;
    if (runtime->hasFunction(0x1EF850u)) {
        auto targetFn = runtime->lookupFunction(0x1EF850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0138u; }
        if (ctx->pc != 0x1F0138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDngTreeMapFuncType__Fv_0x1ef850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0138u; }
        if (ctx->pc != 0x1F0138u) { return; }
    }
    ctx->pc = 0x1F0138u;
label_1f0138:
    // 0x1f0138: 0xc08caa8  jal         func_232AA0
label_1f013c:
    if (ctx->pc == 0x1F013Cu) {
        ctx->pc = 0x1F0140u;
        goto label_1f0140;
    }
    ctx->pc = 0x1F0138u;
    SET_GPR_U32(ctx, 31, 0x1F0140u);
    ctx->pc = 0x232AA0u;
    if (runtime->hasFunction(0x232AA0u)) {
        auto targetFn = runtime->lookupFunction(0x232AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0140u; }
        if (ctx->pc != 0x1F0140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_GetBattleAreaScene__Fv_0x232aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0140u; }
        if (ctx->pc != 0x1F0140u) { return; }
    }
    ctx->pc = 0x1F0140u;
label_1f0140:
    // 0x1f0140: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f0144:
    if (ctx->pc == 0x1F0144u) {
        ctx->pc = 0x1F0148u;
        goto label_1f0148;
    }
    ctx->pc = 0x1F0140u;
    {
        const bool branch_taken_0x1f0140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0140) {
            ctx->pc = 0x1F0154u;
            goto label_1f0154;
        }
    }
    ctx->pc = 0x1F0148u;
label_1f0148:
    // 0x1f0148: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x1f0148u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_1f014c:
    // 0x1f014c: 0x3063fff8  andi        $v1, $v1, 0xFFF8
    ctx->pc = 0x1f014cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65528);
label_1f0150:
    // 0x1f0150: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1f0150u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
label_1f0154:
    // 0x1f0154: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f0154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f0158:
    // 0x1f0158: 0xaf808f34  sw          $zero, -0x70CC($gp)
    ctx->pc = 0x1f0158u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938420), GPR_U32(ctx, 0));
label_1f015c:
    // 0x1f015c: 0x100003a9  b           . + 4 + (0x3A9 << 2)
label_1f0160:
    if (ctx->pc == 0x1F0160u) {
        ctx->pc = 0x1F0160u;
            // 0x1f0160: 0xaf828f2c  sw          $v0, -0x70D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938412), GPR_U32(ctx, 2));
        ctx->pc = 0x1F0164u;
        goto label_1f0164;
    }
    ctx->pc = 0x1F015Cu;
    {
        const bool branch_taken_0x1f015c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F015Cu;
            // 0x1f0160: 0xaf828f2c  sw          $v0, -0x70D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f015c) {
            ctx->pc = 0x1F1004u;
            goto label_1f1004;
        }
    }
    ctx->pc = 0x1F0164u;
label_1f0164:
    // 0x1f0164: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x1f0164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_1f0168:
    // 0x1f0168: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1f016c:
    if (ctx->pc == 0x1F016Cu) {
        ctx->pc = 0x1F016Cu;
            // 0x1f016c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0170u;
        goto label_1f0170;
    }
    ctx->pc = 0x1F0168u;
    {
        const bool branch_taken_0x1f0168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F016Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0168u;
            // 0x1f016c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0168) {
            ctx->pc = 0x1F0184u;
            goto label_1f0184;
        }
    }
    ctx->pc = 0x1F0170u;
label_1f0170:
    // 0x1f0170: 0xc08e8a8  jal         func_23A2A0
label_1f0174:
    if (ctx->pc == 0x1F0174u) {
        ctx->pc = 0x1F0178u;
        goto label_1f0178;
    }
    ctx->pc = 0x1F0170u;
    SET_GPR_U32(ctx, 31, 0x1F0178u);
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0178u; }
        if (ctx->pc != 0x1F0178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0178u; }
        if (ctx->pc != 0x1F0178u) { return; }
    }
    ctx->pc = 0x1F0178u;
label_1f0178:
    // 0x1f0178: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1f017c:
    if (ctx->pc == 0x1F017Cu) {
        ctx->pc = 0x1F017Cu;
            // 0x1f017c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F0180u;
        goto label_1f0180;
    }
    ctx->pc = 0x1F0178u;
    {
        const bool branch_taken_0x1f0178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F017Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0178u;
            // 0x1f017c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0178) {
            ctx->pc = 0x1F0184u;
            goto label_1f0184;
        }
    }
    ctx->pc = 0x1F0180u;
label_1f0180:
    // 0x1f0180: 0xa7828f04  sh          $v0, -0x70FC($gp)
    ctx->pc = 0x1f0180u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938372), (uint16_t)GPR_U32(ctx, 2));
label_1f0184:
    // 0x1f0184: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x1f0184u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_1f0188:
    // 0x1f0188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f018c:
    // 0x1f018c: 0x1462039d  bne         $v1, $v0, . + 4 + (0x39D << 2)
label_1f0190:
    if (ctx->pc == 0x1F0190u) {
        ctx->pc = 0x1F0190u;
            // 0x1f0190: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0194u;
        goto label_1f0194;
    }
    ctx->pc = 0x1F018Cu;
    {
        const bool branch_taken_0x1f018c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F018Cu;
            // 0x1f0190: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f018c) {
            ctx->pc = 0x1F1004u;
            goto label_1f1004;
        }
    }
    ctx->pc = 0x1F0194u;
label_1f0194:
    // 0x1f0194: 0xc08e8a8  jal         func_23A2A0
label_1f0198:
    if (ctx->pc == 0x1F0198u) {
        ctx->pc = 0x1F019Cu;
        goto label_1f019c;
    }
    ctx->pc = 0x1F0194u;
    SET_GPR_U32(ctx, 31, 0x1F019Cu);
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F019Cu; }
        if (ctx->pc != 0x1F019Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F019Cu; }
        if (ctx->pc != 0x1F019Cu) { return; }
    }
    ctx->pc = 0x1F019Cu;
label_1f019c:
    // 0x1f019c: 0x10400399  beqz        $v0, . + 4 + (0x399 << 2)
label_1f01a0:
    if (ctx->pc == 0x1F01A0u) {
        ctx->pc = 0x1F01A4u;
        goto label_1f01a4;
    }
    ctx->pc = 0x1F019Cu;
    {
        const bool branch_taken_0x1f019c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f019c) {
            ctx->pc = 0x1F1004u;
            goto label_1f1004;
        }
    }
    ctx->pc = 0x1F01A4u;
label_1f01a4:
    // 0x1f01a4: 0x10000397  b           . + 4 + (0x397 << 2)
label_1f01a8:
    if (ctx->pc == 0x1F01A8u) {
        ctx->pc = 0x1F01A8u;
            // 0x1f01a8: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1F01ACu;
        goto label_1f01ac;
    }
    ctx->pc = 0x1F01A4u;
    {
        const bool branch_taken_0x1f01a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F01A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01A4u;
            // 0x1f01a8: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01a4) {
            ctx->pc = 0x1F1004u;
            goto label_1f1004;
        }
    }
    ctx->pc = 0x1F01ACu;
label_1f01ac:
    // 0x1f01ac: 0xc08f804  jal         func_23E010
label_1f01b0:
    if (ctx->pc == 0x1F01B0u) {
        ctx->pc = 0x1F01B4u;
        goto label_1f01b4;
    }
    ctx->pc = 0x1F01ACu;
    SET_GPR_U32(ctx, 31, 0x1F01B4u);
    ctx->pc = 0x23E010u;
    if (runtime->hasFunction(0x23E010u)) {
        auto targetFn = runtime->lookupFunction(0x23E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F01B4u; }
        if (ctx->pc != 0x1F01B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelDataInit__12CMenuKeyFuncFv_0x23e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F01B4u; }
        if (ctx->pc != 0x1F01B4u) { return; }
    }
    ctx->pc = 0x1F01B4u;
label_1f01b4:
    // 0x1f01b4: 0xc08f80c  jal         func_23E030
label_1f01b8:
    if (ctx->pc == 0x1F01B8u) {
        ctx->pc = 0x1F01B8u;
            // 0x1f01b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F01BCu;
        goto label_1f01bc;
    }
    ctx->pc = 0x1F01B4u;
    SET_GPR_U32(ctx, 31, 0x1F01BCu);
    ctx->pc = 0x1F01B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01B4u;
            // 0x1f01b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F01BCu; }
        if (ctx->pc != 0x1F01BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F01BCu; }
        if (ctx->pc != 0x1F01BCu) { return; }
    }
    ctx->pc = 0x1F01BCu;
label_1f01bc:
    // 0x1f01bc: 0xc08f840  jal         func_23E100
label_1f01c0:
    if (ctx->pc == 0x1F01C0u) {
        ctx->pc = 0x1F01C0u;
            // 0x1f01c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F01C4u;
        goto label_1f01c4;
    }
    ctx->pc = 0x1F01BCu;
    SET_GPR_U32(ctx, 31, 0x1F01C4u);
    ctx->pc = 0x1F01C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01BCu;
            // 0x1f01c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E100u;
    if (runtime->hasFunction(0x23E100u)) {
        auto targetFn = runtime->lookupFunction(0x23E100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F01C4u; }
        if (ctx->pc != 0x1F01C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLRKey__12CMenuKeyFuncFv_0x23e100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F01C4u; }
        if (ctx->pc != 0x1F01C4u) { return; }
    }
    ctx->pc = 0x1F01C4u;
label_1f01c4:
    // 0x1f01c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f01c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f01c8:
    // 0x1f01c8: 0xc08f8c8  jal         func_23E320
label_1f01cc:
    if (ctx->pc == 0x1F01CCu) {
        ctx->pc = 0x1F01CCu;
            // 0x1f01cc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F01D0u;
        goto label_1f01d0;
    }
    ctx->pc = 0x1F01C8u;
    SET_GPR_U32(ctx, 31, 0x1F01D0u);
    ctx->pc = 0x1F01CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01C8u;
            // 0x1f01cc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F01D0u; }
        if (ctx->pc != 0x1F01D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F01D0u; }
        if (ctx->pc != 0x1F01D0u) { return; }
    }
    ctx->pc = 0x1F01D0u;
label_1f01d0:
    // 0x1f01d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f01d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f01d4:
    // 0x1f01d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f01d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f01d8:
    // 0x1f01d8: 0x86820014  lh          $v0, 0x14($s4)
    ctx->pc = 0x1f01d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
label_1f01dc:
    // 0x1f01dc: 0x10440136  beq         $v0, $a0, . + 4 + (0x136 << 2)
label_1f01e0:
    if (ctx->pc == 0x1F01E0u) {
        ctx->pc = 0x1F01E0u;
            // 0x1f01e0: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1F01E4u;
        goto label_1f01e4;
    }
    ctx->pc = 0x1F01DCu;
    {
        const bool branch_taken_0x1f01dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1F01E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01DCu;
            // 0x1f01e0: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01dc) {
            ctx->pc = 0x1F06B8u;
            goto label_1f06b8;
        }
    }
    ctx->pc = 0x1F01E4u;
label_1f01e4:
    // 0x1f01e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f01e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f01e8:
    // 0x1f01e8: 0x104300ff  beq         $v0, $v1, . + 4 + (0xFF << 2)
label_1f01ec:
    if (ctx->pc == 0x1F01ECu) {
        ctx->pc = 0x1F01F0u;
        goto label_1f01f0;
    }
    ctx->pc = 0x1F01E8u;
    {
        const bool branch_taken_0x1f01e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f01e8) {
            ctx->pc = 0x1F05E8u;
            goto label_1f05e8;
        }
    }
    ctx->pc = 0x1F01F0u;
label_1f01f0:
    // 0x1f01f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f01f4:
    if (ctx->pc == 0x1F01F4u) {
        ctx->pc = 0x1F01F8u;
        goto label_1f01f8;
    }
    ctx->pc = 0x1F01F0u;
    {
        const bool branch_taken_0x1f01f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f01f0) {
            ctx->pc = 0x1F0200u;
            goto label_1f0200;
        }
    }
    ctx->pc = 0x1F01F8u;
label_1f01f8:
    // 0x1f01f8: 0x10000138  b           . + 4 + (0x138 << 2)
label_1f01fc:
    if (ctx->pc == 0x1F01FCu) {
        ctx->pc = 0x1F01FCu;
            // 0x1f01fc: 0x8f828f3c  lw          $v0, -0x70C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938428)));
        ctx->pc = 0x1F0200u;
        goto label_1f0200;
    }
    ctx->pc = 0x1F01F8u;
    {
        const bool branch_taken_0x1f01f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F01FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01F8u;
            // 0x1f01fc: 0x8f828f3c  lw          $v0, -0x70C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01f8) {
            ctx->pc = 0x1F06DCu;
            goto label_1f06dc;
        }
    }
    ctx->pc = 0x1F0200u;
label_1f0200:
    // 0x1f0200: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x1f0200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
label_1f0204:
    // 0x1f0204: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
label_1f0208:
    if (ctx->pc == 0x1F0208u) {
        ctx->pc = 0x1F0208u;
            // 0x1f0208: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x1F020Cu;
        goto label_1f020c;
    }
    ctx->pc = 0x1F0204u;
    {
        const bool branch_taken_0x1f0204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0204u;
            // 0x1f0208: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0204) {
            ctx->pc = 0x1F0428u;
            goto label_1f0428;
        }
    }
    ctx->pc = 0x1F020Cu;
label_1f020c:
    // 0x1f020c: 0x8e820120  lw          $v0, 0x120($s4)
    ctx->pc = 0x1f020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
label_1f0210:
    // 0x1f0210: 0x8f8494b8  lw          $a0, -0x6B48($gp)
    ctx->pc = 0x1f0210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939832)));
label_1f0214:
    // 0x1f0214: 0x80460028  lb          $a2, 0x28($v0)
    ctx->pc = 0x1f0214u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_1f0218:
    // 0x1f0218: 0xc0bdc7c  jal         func_2F71F0
label_1f021c:
    if (ctx->pc == 0x1F021Cu) {
        ctx->pc = 0x1F021Cu;
            // 0x1f021c: 0x86850118  lh          $a1, 0x118($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 280)));
        ctx->pc = 0x1F0220u;
        goto label_1f0220;
    }
    ctx->pc = 0x1F0218u;
    SET_GPR_U32(ctx, 31, 0x1F0220u);
    ctx->pc = 0x1F021Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0218u;
            // 0x1f021c: 0x86850118  lh          $a1, 0x118($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0220u; }
        if (ctx->pc != 0x1F0220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0220u; }
        if (ctx->pc != 0x1F0220u) { return; }
    }
    ctx->pc = 0x1F0220u;
label_1f0220:
    // 0x1f0220: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x1f0220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1f0224:
    // 0x1f0224: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1f0228:
    if (ctx->pc == 0x1F0228u) {
        ctx->pc = 0x1F0228u;
            // 0x1f0228: 0x32230002  andi        $v1, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x1F022Cu;
        goto label_1f022c;
    }
    ctx->pc = 0x1F0224u;
    {
        const bool branch_taken_0x1f0224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0224u;
            // 0x1f0228: 0x32230002  andi        $v1, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0224) {
            ctx->pc = 0x1F023Cu;
            goto label_1f023c;
        }
    }
    ctx->pc = 0x1F022Cu;
label_1f022c:
    // 0x1f022c: 0x8f838eac  lw          $v1, -0x7154($gp)
    ctx->pc = 0x1f022cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938284)));
label_1f0230:
    // 0x1f0230: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f0230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f0234:
    // 0x1f0234: 0xaf838eac  sw          $v1, -0x7154($gp)
    ctx->pc = 0x1f0234u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938284), GPR_U32(ctx, 3));
label_1f0238:
    // 0x1f0238: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x1f0238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_1f023c:
    // 0x1f023c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1f0240:
    if (ctx->pc == 0x1F0240u) {
        ctx->pc = 0x1F0244u;
        goto label_1f0244;
    }
    ctx->pc = 0x1F023Cu;
    {
        const bool branch_taken_0x1f023c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f023c) {
            ctx->pc = 0x1F0250u;
            goto label_1f0250;
        }
    }
    ctx->pc = 0x1F0244u;
label_1f0244:
    // 0x1f0244: 0x8f838eac  lw          $v1, -0x7154($gp)
    ctx->pc = 0x1f0244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938284)));
label_1f0248:
    // 0x1f0248: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f0248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f024c:
    // 0x1f024c: 0xaf838eac  sw          $v1, -0x7154($gp)
    ctx->pc = 0x1f024cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938284), GPR_U32(ctx, 3));
label_1f0250:
    // 0x1f0250: 0x8f838eac  lw          $v1, -0x7154($gp)
    ctx->pc = 0x1f0250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938284)));
label_1f0254:
    // 0x1f0254: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_1f0258:
    if (ctx->pc == 0x1F0258u) {
        ctx->pc = 0x1F025Cu;
        goto label_1f025c;
    }
    ctx->pc = 0x1F0254u;
    {
        const bool branch_taken_0x1f0254 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1f0254) {
            ctx->pc = 0x1F0260u;
            goto label_1f0260;
        }
    }
    ctx->pc = 0x1F025Cu;
label_1f025c:
    // 0x1f025c: 0xaf808eac  sw          $zero, -0x7154($gp)
    ctx->pc = 0x1f025cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938284), GPR_U32(ctx, 0));
label_1f0260:
    // 0x1f0260: 0x8f838eac  lw          $v1, -0x7154($gp)
    ctx->pc = 0x1f0260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938284)));
label_1f0264:
    // 0x1f0264: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x1f0264u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_1f0268:
    // 0x1f0268: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1f026c:
    if (ctx->pc == 0x1F026Cu) {
        ctx->pc = 0x1F026Cu;
            // 0x1f026c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1F0270u;
        goto label_1f0270;
    }
    ctx->pc = 0x1F0268u;
    {
        const bool branch_taken_0x1f0268 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F026Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0268u;
            // 0x1f026c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0268) {
            ctx->pc = 0x1F0274u;
            goto label_1f0274;
        }
    }
    ctx->pc = 0x1F0270u;
label_1f0270:
    // 0x1f0270: 0xaf838eac  sw          $v1, -0x7154($gp)
    ctx->pc = 0x1f0270u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938284), GPR_U32(ctx, 3));
label_1f0274:
    // 0x1f0274: 0x8f838eac  lw          $v1, -0x7154($gp)
    ctx->pc = 0x1f0274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938284)));
label_1f0278:
    // 0x1f0278: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_1f027c:
    if (ctx->pc == 0x1F027Cu) {
        ctx->pc = 0x1F027Cu;
            // 0x1f027c: 0x32430001  andi        $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x1F0280u;
        goto label_1f0280;
    }
    ctx->pc = 0x1F0278u;
    {
        const bool branch_taken_0x1f0278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F027Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0278u;
            // 0x1f027c: 0x32430001  andi        $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0278) {
            ctx->pc = 0x1F02E4u;
            goto label_1f02e4;
        }
    }
    ctx->pc = 0x1F0280u;
label_1f0280:
    // 0x1f0280: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1f0284:
    if (ctx->pc == 0x1F0284u) {
        ctx->pc = 0x1F0284u;
            // 0x1f0284: 0x32230008  andi        $v1, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x1F0288u;
        goto label_1f0288;
    }
    ctx->pc = 0x1F0280u;
    {
        const bool branch_taken_0x1f0280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0280u;
            // 0x1f0284: 0x32230008  andi        $v1, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0280) {
            ctx->pc = 0x1F0290u;
            goto label_1f0290;
        }
    }
    ctx->pc = 0x1F0288u;
label_1f0288:
    // 0x1f0288: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1f028c:
    if (ctx->pc == 0x1F028Cu) {
        ctx->pc = 0x1F028Cu;
            // 0x1f028c: 0x32430002  andi        $v1, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x1F0290u;
        goto label_1f0290;
    }
    ctx->pc = 0x1F0288u;
    {
        const bool branch_taken_0x1f0288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F028Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0288u;
            // 0x1f028c: 0x32430002  andi        $v1, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0288) {
            ctx->pc = 0x1F02B4u;
            goto label_1f02b4;
        }
    }
    ctx->pc = 0x1F0290u;
label_1f0290:
    // 0x1f0290: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1f0294:
    if (ctx->pc == 0x1F0294u) {
        ctx->pc = 0x1F0298u;
        goto label_1f0298;
    }
    ctx->pc = 0x1F0290u;
    {
        const bool branch_taken_0x1f0290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0290) {
            ctx->pc = 0x1F02B0u;
            goto label_1f02b0;
        }
    }
    ctx->pc = 0x1F0298u;
label_1f0298:
    // 0x1f0298: 0x94430012  lhu         $v1, 0x12($v0)
    ctx->pc = 0x1f0298u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
label_1f029c:
    // 0x1f029c: 0x28617530  slti        $at, $v1, 0x7530
    ctx->pc = 0x1f029cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30000) ? 1 : 0);
label_1f02a0:
    // 0x1f02a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1f02a4:
    if (ctx->pc == 0x1F02A4u) {
        ctx->pc = 0x1F02A8u;
        goto label_1f02a8;
    }
    ctx->pc = 0x1F02A0u;
    {
        const bool branch_taken_0x1f02a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f02a0) {
            ctx->pc = 0x1F02B0u;
            goto label_1f02b0;
        }
    }
    ctx->pc = 0x1F02A8u;
label_1f02a8:
    // 0x1f02a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f02a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f02ac:
    // 0x1f02ac: 0xa4430012  sh          $v1, 0x12($v0)
    ctx->pc = 0x1f02acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 3));
label_1f02b0:
    // 0x1f02b0: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x1f02b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_1f02b4:
    // 0x1f02b4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1f02b8:
    if (ctx->pc == 0x1F02B8u) {
        ctx->pc = 0x1F02B8u;
            // 0x1f02b8: 0x32230004  andi        $v1, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x1F02BCu;
        goto label_1f02bc;
    }
    ctx->pc = 0x1F02B4u;
    {
        const bool branch_taken_0x1f02b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F02B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F02B4u;
            // 0x1f02b8: 0x32230004  andi        $v1, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f02b4) {
            ctx->pc = 0x1F02C4u;
            goto label_1f02c4;
        }
    }
    ctx->pc = 0x1F02BCu;
label_1f02bc:
    // 0x1f02bc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1f02c0:
    if (ctx->pc == 0x1F02C0u) {
        ctx->pc = 0x1F02C4u;
        goto label_1f02c4;
    }
    ctx->pc = 0x1F02BCu;
    {
        const bool branch_taken_0x1f02bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f02bc) {
            ctx->pc = 0x1F02E4u;
            goto label_1f02e4;
        }
    }
    ctx->pc = 0x1F02C4u;
label_1f02c4:
    // 0x1f02c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1f02c8:
    if (ctx->pc == 0x1F02C8u) {
        ctx->pc = 0x1F02CCu;
        goto label_1f02cc;
    }
    ctx->pc = 0x1F02C4u;
    {
        const bool branch_taken_0x1f02c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f02c4) {
            ctx->pc = 0x1F02E4u;
            goto label_1f02e4;
        }
    }
    ctx->pc = 0x1F02CCu;
label_1f02cc:
    // 0x1f02cc: 0x94430012  lhu         $v1, 0x12($v0)
    ctx->pc = 0x1f02ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
label_1f02d0:
    // 0x1f02d0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1f02d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f02d4:
    // 0x1f02d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1f02d8:
    if (ctx->pc == 0x1F02D8u) {
        ctx->pc = 0x1F02DCu;
        goto label_1f02dc;
    }
    ctx->pc = 0x1F02D4u;
    {
        const bool branch_taken_0x1f02d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f02d4) {
            ctx->pc = 0x1F02E4u;
            goto label_1f02e4;
        }
    }
    ctx->pc = 0x1F02DCu;
label_1f02dc:
    // 0x1f02dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f02dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f02e0:
    // 0x1f02e0: 0xa4430012  sh          $v1, 0x12($v0)
    ctx->pc = 0x1f02e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 3));
label_1f02e4:
    // 0x1f02e4: 0x8f848eac  lw          $a0, -0x7154($gp)
    ctx->pc = 0x1f02e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938284)));
label_1f02e8:
    // 0x1f02e8: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
label_1f02ec:
    if (ctx->pc == 0x1F02ECu) {
        ctx->pc = 0x1F02ECu;
            // 0x1f02ec: 0x32530004  andi        $s3, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x1F02F0u;
        goto label_1f02f0;
    }
    ctx->pc = 0x1F02E8u;
    {
        const bool branch_taken_0x1f02e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F02ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F02E8u;
            // 0x1f02ec: 0x32530004  andi        $s3, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f02e8) {
            ctx->pc = 0x1F036Cu;
            goto label_1f036c;
        }
    }
    ctx->pc = 0x1F02F0u;
label_1f02f0:
    // 0x1f02f0: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x1f02f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_1f02f4:
    // 0x1f02f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1f02f8:
    if (ctx->pc == 0x1F02F8u) {
        ctx->pc = 0x1F02FCu;
        goto label_1f02fc;
    }
    ctx->pc = 0x1F02F4u;
    {
        const bool branch_taken_0x1f02f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f02f4) {
            ctx->pc = 0x1F0308u;
            goto label_1f0308;
        }
    }
    ctx->pc = 0x1F02FCu;
label_1f02fc:
    // 0x1f02fc: 0x32230008  andi        $v1, $s1, 0x8
    ctx->pc = 0x1f02fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_1f0300:
    // 0x1f0300: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1f0304:
    if (ctx->pc == 0x1F0304u) {
        ctx->pc = 0x1F0304u;
            // 0x1f0304: 0x32430002  andi        $v1, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x1F0308u;
        goto label_1f0308;
    }
    ctx->pc = 0x1F0300u;
    {
        const bool branch_taken_0x1f0300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0300u;
            // 0x1f0304: 0x32430002  andi        $v1, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0300) {
            ctx->pc = 0x1F032Cu;
            goto label_1f032c;
        }
    }
    ctx->pc = 0x1F0308u;
label_1f0308:
    // 0x1f0308: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x1f0308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_1f030c:
    // 0x1f030c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f030cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f0310:
    // 0x1f0310: 0x2463e300  addiu       $v1, $v1, -0x1D00
    ctx->pc = 0x1f0310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959872));
label_1f0314:
    // 0x1f0314: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1f0314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f0318:
    // 0x1f0318: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x1f0318u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_1f031c:
    // 0x1f031c: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x1f031cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1f0320:
    // 0x1f0320: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1f0320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1f0324:
    // 0x1f0324: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x1f0324u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
label_1f0328:
    // 0x1f0328: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x1f0328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_1f032c:
    // 0x1f032c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1f0330:
    if (ctx->pc == 0x1F0330u) {
        ctx->pc = 0x1F0330u;
            // 0x1f0330: 0x32230004  andi        $v1, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x1F0334u;
        goto label_1f0334;
    }
    ctx->pc = 0x1F032Cu;
    {
        const bool branch_taken_0x1f032c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F032Cu;
            // 0x1f0330: 0x32230004  andi        $v1, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f032c) {
            ctx->pc = 0x1F033Cu;
            goto label_1f033c;
        }
    }
    ctx->pc = 0x1F0334u;
label_1f0334:
    // 0x1f0334: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1f0338:
    if (ctx->pc == 0x1F0338u) {
        ctx->pc = 0x1F033Cu;
        goto label_1f033c;
    }
    ctx->pc = 0x1F0334u;
    {
        const bool branch_taken_0x1f0334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0334) {
            ctx->pc = 0x1F0368u;
            goto label_1f0368;
        }
    }
    ctx->pc = 0x1F033Cu;
label_1f033c:
    // 0x1f033c: 0x8f858eac  lw          $a1, -0x7154($gp)
    ctx->pc = 0x1f033cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938284)));
label_1f0340:
    // 0x1f0340: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x1f0340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_1f0344:
    // 0x1f0344: 0x2484e300  addiu       $a0, $a0, -0x1D00
    ctx->pc = 0x1f0344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959872));
label_1f0348:
    // 0x1f0348: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x1f0348u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_1f034c:
    // 0x1f034c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1f034cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f0350:
    // 0x1f0350: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f0350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f0354:
    // 0x1f0354: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1f0354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1f0358:
    // 0x1f0358: 0x802027  not         $a0, $a0
    ctx->pc = 0x1f0358u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_1f035c:
    // 0x1f035c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1f035cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1f0360:
    // 0x1f0360: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1f0360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1f0364:
    // 0x1f0364: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x1f0364u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
label_1f0368:
    // 0x1f0368: 0x32530004  andi        $s3, $s2, 0x4
    ctx->pc = 0x1f0368u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
label_1f036c:
    // 0x1f036c: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_1f0370:
    if (ctx->pc == 0x1F0370u) {
        ctx->pc = 0x1F0370u;
            // 0x1f0370: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0374u;
        goto label_1f0374;
    }
    ctx->pc = 0x1F036Cu;
    {
        const bool branch_taken_0x1f036c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F036Cu;
            // 0x1f0370: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f036c) {
            ctx->pc = 0x1F03B8u;
            goto label_1f03b8;
        }
    }
    ctx->pc = 0x1F0374u;
label_1f0374:
    // 0x1f0374: 0x86850118  lh          $a1, 0x118($s4)
    ctx->pc = 0x1f0374u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 280)));
label_1f0378:
    // 0x1f0378: 0x8f8494b8  lw          $a0, -0x6B48($gp)
    ctx->pc = 0x1f0378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939832)));
label_1f037c:
    // 0x1f037c: 0xc0bdc7c  jal         func_2F71F0
label_1f0380:
    if (ctx->pc == 0x1F0380u) {
        ctx->pc = 0x1F0380u;
            // 0x1f0380: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0384u;
        goto label_1f0384;
    }
    ctx->pc = 0x1F037Cu;
    SET_GPR_U32(ctx, 31, 0x1F0384u);
    ctx->pc = 0x1F0380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F037Cu;
            // 0x1f0380: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0384u; }
        if (ctx->pc != 0x1F0384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0384u; }
        if (ctx->pc != 0x1F0384u) { return; }
    }
    ctx->pc = 0x1F0384u;
label_1f0384:
    // 0x1f0384: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1f0388:
    if (ctx->pc == 0x1F0388u) {
        ctx->pc = 0x1F038Cu;
        goto label_1f038c;
    }
    ctx->pc = 0x1F0384u;
    {
        const bool branch_taken_0x1f0384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0384) {
            ctx->pc = 0x1F03B8u;
            goto label_1f03b8;
        }
    }
    ctx->pc = 0x1F038Cu;
label_1f038c:
    // 0x1f038c: 0x94430012  lhu         $v1, 0x12($v0)
    ctx->pc = 0x1f038cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
label_1f0390:
    // 0x1f0390: 0x28617530  slti        $at, $v1, 0x7530
    ctx->pc = 0x1f0390u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30000) ? 1 : 0);
label_1f0394:
    // 0x1f0394: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1f0398:
    if (ctx->pc == 0x1F0398u) {
        ctx->pc = 0x1F039Cu;
        goto label_1f039c;
    }
    ctx->pc = 0x1F0394u;
    {
        const bool branch_taken_0x1f0394 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0394) {
            ctx->pc = 0x1F03A4u;
            goto label_1f03a4;
        }
    }
    ctx->pc = 0x1F039Cu;
label_1f039c:
    // 0x1f039c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f039cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f03a0:
    // 0x1f03a0: 0xa4430012  sh          $v1, 0x12($v0)
    ctx->pc = 0x1f03a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 3));
label_1f03a4:
    // 0x1f03a4: 0x0  nop
    ctx->pc = 0x1f03a4u;
    // NOP
label_1f03a8:
    // 0x1f03a8: 0x240301fb  addiu       $v1, $zero, 0x1FB
    ctx->pc = 0x1f03a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 507));
label_1f03ac:
    // 0x1f03ac: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x1f03acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
label_1f03b0:
    // 0x1f03b0: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_1f03b4:
    if (ctx->pc == 0x1F03B4u) {
        ctx->pc = 0x1F03B4u;
            // 0x1f03b4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x1F03B8u;
        goto label_1f03b8;
    }
    ctx->pc = 0x1F03B0u;
    {
        const bool branch_taken_0x1f03b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F03B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03B0u;
            // 0x1f03b4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03b0) {
            ctx->pc = 0x1F0374u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f0374;
        }
    }
    ctx->pc = 0x1F03B8u;
label_1f03b8:
    // 0x1f03b8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1f03b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_1f03bc:
    // 0x1f03bc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1f03c0:
    if (ctx->pc == 0x1F03C0u) {
        ctx->pc = 0x1F03C0u;
            // 0x1f03c0: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x1F03C4u;
        goto label_1f03c4;
    }
    ctx->pc = 0x1F03BCu;
    {
        const bool branch_taken_0x1f03bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F03C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03BCu;
            // 0x1f03c0: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03bc) {
            ctx->pc = 0x1F03E4u;
            goto label_1f03e4;
        }
    }
    ctx->pc = 0x1F03C4u;
label_1f03c4:
    // 0x1f03c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1f03c8:
    if (ctx->pc == 0x1F03C8u) {
        ctx->pc = 0x1F03CCu;
        goto label_1f03cc;
    }
    ctx->pc = 0x1F03C4u;
    {
        const bool branch_taken_0x1f03c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f03c4) {
            ctx->pc = 0x1F03E4u;
            goto label_1f03e4;
        }
    }
    ctx->pc = 0x1F03CCu;
label_1f03cc:
    // 0x1f03cc: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_1f03d0:
    if (ctx->pc == 0x1F03D0u) {
        ctx->pc = 0x1F03D0u;
            // 0x1f03d0: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x1F03D4u;
        goto label_1f03d4;
    }
    ctx->pc = 0x1F03CCu;
    {
        const bool branch_taken_0x1f03cc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F03D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03CCu;
            // 0x1f03d0: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03cc) {
            ctx->pc = 0x1F03E4u;
            goto label_1f03e4;
        }
    }
    ctx->pc = 0x1F03D4u;
label_1f03d4:
    // 0x1f03d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1f03d8:
    if (ctx->pc == 0x1F03D8u) {
        ctx->pc = 0x1F03D8u;
            // 0x1f03d8: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x1F03DCu;
        goto label_1f03dc;
    }
    ctx->pc = 0x1F03D4u;
    {
        const bool branch_taken_0x1f03d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F03D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03D4u;
            // 0x1f03d8: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03d4) {
            ctx->pc = 0x1F03E4u;
            goto label_1f03e4;
        }
    }
    ctx->pc = 0x1F03DCu;
label_1f03dc:
    // 0x1f03dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1f03e0:
    if (ctx->pc == 0x1F03E0u) {
        ctx->pc = 0x1F03E0u;
            // 0x1f03e0: 0x32220020  andi        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
        ctx->pc = 0x1F03E4u;
        goto label_1f03e4;
    }
    ctx->pc = 0x1F03DCu;
    {
        const bool branch_taken_0x1f03dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F03E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03DCu;
            // 0x1f03e0: 0x32220020  andi        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03dc) {
            ctx->pc = 0x1F03F4u;
            goto label_1f03f4;
        }
    }
    ctx->pc = 0x1F03E4u;
label_1f03e4:
    // 0x1f03e4: 0x8f828eb0  lw          $v0, -0x7150($gp)
    ctx->pc = 0x1f03e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
label_1f03e8:
    // 0x1f03e8: 0xc0be7cc  jal         func_2F9F30
label_1f03ec:
    if (ctx->pc == 0x1F03ECu) {
        ctx->pc = 0x1F03ECu;
            // 0x1f03ec: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x1F03F0u;
        goto label_1f03f0;
    }
    ctx->pc = 0x1F03E8u;
    SET_GPR_U32(ctx, 31, 0x1F03F0u);
    ctx->pc = 0x1F03ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03E8u;
            // 0x1f03ec: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9F30u;
    if (runtime->hasFunction(0x2F9F30u)) {
        auto targetFn = runtime->lookupFunction(0x2F9F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F03F0u; }
        if (ctx->pc != 0x1F03F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawGlidInfo__16CDngFloorManagerFv_0x2f9f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F03F0u; }
        if (ctx->pc != 0x1F03F0u) { return; }
    }
    ctx->pc = 0x1F03F0u;
label_1f03f0:
    // 0x1f03f0: 0x32220020  andi        $v0, $s1, 0x20
    ctx->pc = 0x1f03f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
label_1f03f4:
    // 0x1f03f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1f03f8:
    if (ctx->pc == 0x1F03F8u) {
        ctx->pc = 0x1F03F8u;
            // 0x1f03f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F03FCu;
        goto label_1f03fc;
    }
    ctx->pc = 0x1F03F4u;
    {
        const bool branch_taken_0x1f03f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F03F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03F4u;
            // 0x1f03f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03f4) {
            ctx->pc = 0x1F0420u;
            goto label_1f0420;
        }
    }
    ctx->pc = 0x1F03FCu;
label_1f03fc:
    // 0x1f03fc: 0x8f8494a8  lw          $a0, -0x6B58($gp)
    ctx->pc = 0x1f03fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939816)));
label_1f0400:
    // 0x1f0400: 0x240500dc  addiu       $a1, $zero, 0xDC
    ctx->pc = 0x1f0400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_1f0404:
    // 0x1f0404: 0xc0bd8f4  jal         func_2F63D0
label_1f0408:
    if (ctx->pc == 0x1F0408u) {
        ctx->pc = 0x1F0408u;
            // 0x1f0408: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F040Cu;
        goto label_1f040c;
    }
    ctx->pc = 0x1F0404u;
    SET_GPR_U32(ctx, 31, 0x1F040Cu);
    ctx->pc = 0x1F0408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0404u;
            // 0x1f0408: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F040Cu; }
        if (ctx->pc != 0x1F040Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F040Cu; }
        if (ctx->pc != 0x1F040Cu) { return; }
    }
    ctx->pc = 0x1F040Cu;
label_1f040c:
    // 0x1f040c: 0x8f8494a8  lw          $a0, -0x6B58($gp)
    ctx->pc = 0x1f040cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939816)));
label_1f0410:
    // 0x1f0410: 0x2405013d  addiu       $a1, $zero, 0x13D
    ctx->pc = 0x1f0410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 317));
label_1f0414:
    // 0x1f0414: 0xc0bd8f4  jal         func_2F63D0
label_1f0418:
    if (ctx->pc == 0x1F0418u) {
        ctx->pc = 0x1F0418u;
            // 0x1f0418: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F041Cu;
        goto label_1f041c;
    }
    ctx->pc = 0x1F0414u;
    SET_GPR_U32(ctx, 31, 0x1F041Cu);
    ctx->pc = 0x1F0418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0414u;
            // 0x1f0418: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F041Cu; }
        if (ctx->pc != 0x1F041Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F041Cu; }
        if (ctx->pc != 0x1F041Cu) { return; }
    }
    ctx->pc = 0x1F041Cu;
label_1f041c:
    // 0x1f041c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f041cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0420:
    // 0x1f0420: 0x10000433  b           . + 4 + (0x433 << 2)
label_1f0424:
    if (ctx->pc == 0x1F0424u) {
        ctx->pc = 0x1F0424u;
            // 0x1f0424: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x1F0428u;
        goto label_1f0428;
    }
    ctx->pc = 0x1F0420u;
    {
        const bool branch_taken_0x1f0420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0420u;
            // 0x1f0424: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0420) {
            ctx->pc = 0x1F14F0u;
            goto label_1f14f0;
        }
    }
    ctx->pc = 0x1F0428u;
label_1f0428:
    // 0x1f0428: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1f0428u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f042c:
    // 0x1f042c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f0430:
    if (ctx->pc == 0x1F0430u) {
        ctx->pc = 0x1F0430u;
            // 0x1f0430: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0434u;
        goto label_1f0434;
    }
    ctx->pc = 0x1F042Cu;
    {
        const bool branch_taken_0x1f042c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F042Cu;
            // 0x1f0430: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f042c) {
            ctx->pc = 0x1F043Cu;
            goto label_1f043c;
        }
    }
    ctx->pc = 0x1F0434u;
label_1f0434:
    // 0x1f0434: 0x1000000d  b           . + 4 + (0xD << 2)
label_1f0438:
    if (ctx->pc == 0x1F0438u) {
        ctx->pc = 0x1F0438u;
            // 0x1f0438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F043Cu;
        goto label_1f043c;
    }
    ctx->pc = 0x1F0434u;
    {
        const bool branch_taken_0x1f0434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0434u;
            // 0x1f0438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0434) {
            ctx->pc = 0x1F046Cu;
            goto label_1f046c;
        }
    }
    ctx->pc = 0x1F043Cu;
label_1f043c:
    // 0x1f043c: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x1f043cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_1f0440:
    // 0x1f0440: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f0444:
    if (ctx->pc == 0x1F0444u) {
        ctx->pc = 0x1F0444u;
            // 0x1f0444: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x1F0448u;
        goto label_1f0448;
    }
    ctx->pc = 0x1F0440u;
    {
        const bool branch_taken_0x1f0440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0440u;
            // 0x1f0444: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0440) {
            ctx->pc = 0x1F0450u;
            goto label_1f0450;
        }
    }
    ctx->pc = 0x1F0448u;
label_1f0448:
    // 0x1f0448: 0x10000008  b           . + 4 + (0x8 << 2)
label_1f044c:
    if (ctx->pc == 0x1F044Cu) {
        ctx->pc = 0x1F044Cu;
            // 0x1f044c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0450u;
        goto label_1f0450;
    }
    ctx->pc = 0x1F0448u;
    {
        const bool branch_taken_0x1f0448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F044Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0448u;
            // 0x1f044c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0448) {
            ctx->pc = 0x1F046Cu;
            goto label_1f046c;
        }
    }
    ctx->pc = 0x1F0450u;
label_1f0450:
    // 0x1f0450: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f0454:
    if (ctx->pc == 0x1F0454u) {
        ctx->pc = 0x1F0454u;
            // 0x1f0454: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x1F0458u;
        goto label_1f0458;
    }
    ctx->pc = 0x1F0450u;
    {
        const bool branch_taken_0x1f0450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0450u;
            // 0x1f0454: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0450) {
            ctx->pc = 0x1F0460u;
            goto label_1f0460;
        }
    }
    ctx->pc = 0x1F0458u;
label_1f0458:
    // 0x1f0458: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f045c:
    if (ctx->pc == 0x1F045Cu) {
        ctx->pc = 0x1F045Cu;
            // 0x1f045c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0460u;
        goto label_1f0460;
    }
    ctx->pc = 0x1F0458u;
    {
        const bool branch_taken_0x1f0458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F045Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0458u;
            // 0x1f045c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0458) {
            ctx->pc = 0x1F046Cu;
            goto label_1f046c;
        }
    }
    ctx->pc = 0x1F0460u;
label_1f0460:
    // 0x1f0460: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f0464:
    if (ctx->pc == 0x1F0464u) {
        ctx->pc = 0x1F0464u;
            // 0x1f0464: 0xc0082a  slt         $at, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->pc = 0x1F0468u;
        goto label_1f0468;
    }
    ctx->pc = 0x1F0460u;
    {
        const bool branch_taken_0x1f0460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0460u;
            // 0x1f0464: 0xc0082a  slt         $at, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0460) {
            ctx->pc = 0x1F0470u;
            goto label_1f0470;
        }
    }
    ctx->pc = 0x1F0468u;
label_1f0468:
    // 0x1f0468: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f0468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f046c:
    // 0x1f046c: 0xc0082a  slt         $at, $a2, $zero
    ctx->pc = 0x1f046cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1f0470:
    // 0x1f0470: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_1f0474:
    if (ctx->pc == 0x1F0474u) {
        ctx->pc = 0x1F0478u;
        goto label_1f0478;
    }
    ctx->pc = 0x1F0470u;
    {
        const bool branch_taken_0x1f0470 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0470) {
            ctx->pc = 0x1F0494u;
            goto label_1f0494;
        }
    }
    ctx->pc = 0x1F0478u;
label_1f0478:
    // 0x1f0478: 0x8f838eb0  lw          $v1, -0x7150($gp)
    ctx->pc = 0x1f0478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
label_1f047c:
    // 0x1f047c: 0x8e820120  lw          $v0, 0x120($s4)
    ctx->pc = 0x1f047cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
label_1f0480:
    // 0x1f0480: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1f0480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f0484:
    // 0x1f0484: 0x80450028  lb          $a1, 0x28($v0)
    ctx->pc = 0x1f0484u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_1f0488:
    // 0x1f0488: 0xc0be938  jal         func_2FA4E0
label_1f048c:
    if (ctx->pc == 0x1F048Cu) {
        ctx->pc = 0x1F048Cu;
            // 0x1f048c: 0x8f878f34  lw          $a3, -0x70CC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938420)));
        ctx->pc = 0x1F0490u;
        goto label_1f0490;
    }
    ctx->pc = 0x1F0488u;
    SET_GPR_U32(ctx, 31, 0x1F0490u);
    ctx->pc = 0x1F048Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0488u;
            // 0x1f048c: 0x8f878f34  lw          $a3, -0x70CC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938420)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FA4E0u;
    if (runtime->hasFunction(0x2FA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2FA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0490u; }
        if (ctx->pc != 0x1F0490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetKeyNextRoom__16CDngFloorManagerFiiP9GLID_INFO_0x2fa4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0490u; }
        if (ctx->pc != 0x1F0490u) { return; }
    }
    ctx->pc = 0x1F0490u;
label_1f0490:
    // 0x1f0490: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1f0490u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0494:
    // 0x1f0494: 0x12c00014  beqz        $s6, . + 4 + (0x14 << 2)
label_1f0498:
    if (ctx->pc == 0x1F0498u) {
        ctx->pc = 0x1F049Cu;
        goto label_1f049c;
    }
    ctx->pc = 0x1F0494u;
    {
        const bool branch_taken_0x1f0494 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0494) {
            ctx->pc = 0x1F04E8u;
            goto label_1f04e8;
        }
    }
    ctx->pc = 0x1F049Cu;
label_1f049c:
    // 0x1f049c: 0x8e820120  lw          $v0, 0x120($s4)
    ctx->pc = 0x1f049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
label_1f04a0:
    // 0x1f04a0: 0x12c20011  beq         $s6, $v0, . + 4 + (0x11 << 2)
label_1f04a4:
    if (ctx->pc == 0x1F04A4u) {
        ctx->pc = 0x1F04A8u;
        goto label_1f04a8;
    }
    ctx->pc = 0x1F04A0u;
    {
        const bool branch_taken_0x1f04a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f04a0) {
            ctx->pc = 0x1F04E8u;
            goto label_1f04e8;
        }
    }
    ctx->pc = 0x1F04A8u;
label_1f04a8:
    // 0x1f04a8: 0x82c30064  lb          $v1, 0x64($s6)
    ctx->pc = 0x1f04a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 100)));
label_1f04ac:
    // 0x1f04ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f04acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f04b0:
    // 0x1f04b0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_1f04b4:
    if (ctx->pc == 0x1F04B4u) {
        ctx->pc = 0x1F04B4u;
            // 0x1f04b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F04B8u;
        goto label_1f04b8;
    }
    ctx->pc = 0x1F04B0u;
    {
        const bool branch_taken_0x1f04b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F04B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F04B0u;
            // 0x1f04b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f04b0) {
            ctx->pc = 0x1F04E8u;
            goto label_1f04e8;
        }
    }
    ctx->pc = 0x1F04B8u;
label_1f04b8:
    // 0x1f04b8: 0xc094274  jal         func_2509D0
label_1f04bc:
    if (ctx->pc == 0x1F04BCu) {
        ctx->pc = 0x1F04C0u;
        goto label_1f04c0;
    }
    ctx->pc = 0x1F04B8u;
    SET_GPR_U32(ctx, 31, 0x1F04C0u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F04C0u; }
        if (ctx->pc != 0x1F04C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F04C0u; }
        if (ctx->pc != 0x1F04C0u) { return; }
    }
    ctx->pc = 0x1F04C0u;
label_1f04c0:
    // 0x1f04c0: 0x8e830120  lw          $v1, 0x120($s4)
    ctx->pc = 0x1f04c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
label_1f04c4:
    // 0x1f04c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f04c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f04c8:
    // 0x1f04c8: 0xaf838f34  sw          $v1, -0x70CC($gp)
    ctx->pc = 0x1f04c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938420), GPR_U32(ctx, 3));
label_1f04cc:
    // 0x1f04cc: 0xaf828f2c  sw          $v0, -0x70D4($gp)
    ctx->pc = 0x1f04ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938412), GPR_U32(ctx, 2));
label_1f04d0:
    // 0x1f04d0: 0xae960120  sw          $s6, 0x120($s4)
    ctx->pc = 0x1f04d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 22));
label_1f04d4:
    // 0x1f04d4: 0x8e850120  lw          $a1, 0x120($s4)
    ctx->pc = 0x1f04d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
label_1f04d8:
    // 0x1f04d8: 0xc07aa98  jal         func_1EAA60
label_1f04dc:
    if (ctx->pc == 0x1F04DCu) {
        ctx->pc = 0x1F04DCu;
            // 0x1f04dc: 0x8f848eb0  lw          $a0, -0x7150($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
        ctx->pc = 0x1F04E0u;
        goto label_1f04e0;
    }
    ctx->pc = 0x1F04D8u;
    SET_GPR_U32(ctx, 31, 0x1F04E0u);
    ctx->pc = 0x1F04DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F04D8u;
            // 0x1f04dc: 0x8f848eb0  lw          $a0, -0x7150($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA60u;
    if (runtime->hasFunction(0x1EAA60u)) {
        auto targetFn = runtime->lookupFunction(0x1EAA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F04E0u; }
        if (ctx->pc != 0x1F04E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextRoomPos__11CDngFreeMapFP9GLID_INFO_0x1eaa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F04E0u; }
        if (ctx->pc != 0x1F04E0u) { return; }
    }
    ctx->pc = 0x1F04E0u;
label_1f04e0:
    // 0x1f04e0: 0xaf808efc  sw          $zero, -0x7104($gp)
    ctx->pc = 0x1f04e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 0));
label_1f04e4:
    // 0x1f04e4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1f04e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f04e8:
    // 0x1f04e8: 0x8e840120  lw          $a0, 0x120($s4)
    ctx->pc = 0x1f04e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
label_1f04ec:
    // 0x1f04ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f04ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f04f0:
    // 0x1f04f0: 0x8f838eb0  lw          $v1, -0x7150($gp)
    ctx->pc = 0x1f04f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
label_1f04f4:
    // 0x1f04f4: 0x1242002a  beq         $s2, $v0, . + 4 + (0x2A << 2)
label_1f04f8:
    if (ctx->pc == 0x1F04F8u) {
        ctx->pc = 0x1F04F8u;
            // 0x1f04f8: 0xac6400cc  sw          $a0, 0xCC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 4));
        ctx->pc = 0x1F04FCu;
        goto label_1f04fc;
    }
    ctx->pc = 0x1F04F4u;
    {
        const bool branch_taken_0x1f04f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F04F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F04F4u;
            // 0x1f04f8: 0xac6400cc  sw          $a0, 0xCC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f04f4) {
            ctx->pc = 0x1F05A0u;
            goto label_1f05a0;
        }
    }
    ctx->pc = 0x1F04FCu;
label_1f04fc:
    // 0x1f04fc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f04fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f0500:
    // 0x1f0500: 0x1242001c  beq         $s2, $v0, . + 4 + (0x1C << 2)
label_1f0504:
    if (ctx->pc == 0x1F0504u) {
        ctx->pc = 0x1F0504u;
            // 0x1f0504: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F0508u;
        goto label_1f0508;
    }
    ctx->pc = 0x1F0500u;
    {
        const bool branch_taken_0x1f0500 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F0504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0500u;
            // 0x1f0504: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0500) {
            ctx->pc = 0x1F0574u;
            goto label_1f0574;
        }
    }
    ctx->pc = 0x1F0508u;
label_1f0508:
    // 0x1f0508: 0x1242000e  beq         $s2, $v0, . + 4 + (0xE << 2)
label_1f050c:
    if (ctx->pc == 0x1F050Cu) {
        ctx->pc = 0x1F050Cu;
            // 0x1f050c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F0510u;
        goto label_1f0510;
    }
    ctx->pc = 0x1F0508u;
    {
        const bool branch_taken_0x1f0508 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F050Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0508u;
            // 0x1f050c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0508) {
            ctx->pc = 0x1F0544u;
            goto label_1f0544;
        }
    }
    ctx->pc = 0x1F0510u;
label_1f0510:
    // 0x1f0510: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
label_1f0514:
    if (ctx->pc == 0x1F0514u) {
        ctx->pc = 0x1F0518u;
        goto label_1f0518;
    }
    ctx->pc = 0x1F0510u;
    {
        const bool branch_taken_0x1f0510 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f0510) {
            ctx->pc = 0x1F0520u;
            goto label_1f0520;
        }
    }
    ctx->pc = 0x1F0518u;
label_1f0518:
    // 0x1f0518: 0x1000006f  b           . + 4 + (0x6F << 2)
label_1f051c:
    if (ctx->pc == 0x1F051Cu) {
        ctx->pc = 0x1F0520u;
        goto label_1f0520;
    }
    ctx->pc = 0x1F0518u;
    {
        const bool branch_taken_0x1f0518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0518) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F0520u;
label_1f0520:
    // 0x1f0520: 0x8f848eb0  lw          $a0, -0x7150($gp)
    ctx->pc = 0x1f0520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
label_1f0524:
    // 0x1f0524: 0xc07aad8  jal         func_1EAB60
label_1f0528:
    if (ctx->pc == 0x1F0528u) {
        ctx->pc = 0x1F0528u;
            // 0x1f0528: 0x24130064  addiu       $s3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x1F052Cu;
        goto label_1f052c;
    }
    ctx->pc = 0x1F0524u;
    SET_GPR_U32(ctx, 31, 0x1F052Cu);
    ctx->pc = 0x1F0528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0524u;
            // 0x1f0528: 0x24130064  addiu       $s3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAB60u;
    if (runtime->hasFunction(0x1EAB60u)) {
        auto targetFn = runtime->lookupFunction(0x1EAB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F052Cu; }
        if (ctx->pc != 0x1F052Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntranceRoomGlid__11CDngFreeMapFv_0x1eab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F052Cu; }
        if (ctx->pc != 0x1F052Cu) { return; }
    }
    ctx->pc = 0x1F052Cu;
label_1f052c:
    // 0x1f052c: 0xaf828f3c  sw          $v0, -0x70C4($gp)
    ctx->pc = 0x1f052cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938428), GPR_U32(ctx, 2));
label_1f0530:
    // 0x1f0530: 0x8e820120  lw          $v0, 0x120($s4)
    ctx->pc = 0x1f0530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
label_1f0534:
    // 0x1f0534: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
label_1f0538:
    if (ctx->pc == 0x1F0538u) {
        ctx->pc = 0x1F053Cu;
        goto label_1f053c;
    }
    ctx->pc = 0x1F0534u;
    {
        const bool branch_taken_0x1f0534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0534) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F053Cu;
label_1f053c:
    // 0x1f053c: 0x10000066  b           . + 4 + (0x66 << 2)
label_1f0540:
    if (ctx->pc == 0x1F0540u) {
        ctx->pc = 0x1F0540u;
            // 0x1f0540: 0xaf828f3c  sw          $v0, -0x70C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938428), GPR_U32(ctx, 2));
        ctx->pc = 0x1F0544u;
        goto label_1f0544;
    }
    ctx->pc = 0x1F053Cu;
    {
        const bool branch_taken_0x1f053c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F053Cu;
            // 0x1f0540: 0xaf828f3c  sw          $v0, -0x70C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f053c) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F0544u;
label_1f0544:
    // 0x1f0544: 0xc07be14  jal         func_1EF850
label_1f0548:
    if (ctx->pc == 0x1F0548u) {
        ctx->pc = 0x1F054Cu;
        goto label_1f054c;
    }
    ctx->pc = 0x1F0544u;
    SET_GPR_U32(ctx, 31, 0x1F054Cu);
    ctx->pc = 0x1EF850u;
    if (runtime->hasFunction(0x1EF850u)) {
        auto targetFn = runtime->lookupFunction(0x1EF850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F054Cu; }
        if (ctx->pc != 0x1F054Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDngTreeMapFuncType__Fv_0x1ef850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F054Cu; }
        if (ctx->pc != 0x1F054Cu) { return; }
    }
    ctx->pc = 0x1F054Cu;
label_1f054c:
    // 0x1f054c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f054cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f0550:
    // 0x1f0550: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_1f0554:
    if (ctx->pc == 0x1F0554u) {
        ctx->pc = 0x1F0554u;
            // 0x1f0554: 0x241300c8  addiu       $s3, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->pc = 0x1F0558u;
        goto label_1f0558;
    }
    ctx->pc = 0x1F0550u;
    {
        const bool branch_taken_0x1f0550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F0554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0550u;
            // 0x1f0554: 0x241300c8  addiu       $s3, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0550) {
            ctx->pc = 0x1F056Cu;
            goto label_1f056c;
        }
    }
    ctx->pc = 0x1F0558u;
label_1f0558:
    // 0x1f0558: 0x8f848eb0  lw          $a0, -0x7150($gp)
    ctx->pc = 0x1f0558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
label_1f055c:
    // 0x1f055c: 0xc07aad8  jal         func_1EAB60
label_1f0560:
    if (ctx->pc == 0x1F0560u) {
        ctx->pc = 0x1F0560u;
            // 0x1f0560: 0x24130064  addiu       $s3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x1F0564u;
        goto label_1f0564;
    }
    ctx->pc = 0x1F055Cu;
    SET_GPR_U32(ctx, 31, 0x1F0564u);
    ctx->pc = 0x1F0560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F055Cu;
            // 0x1f0560: 0x24130064  addiu       $s3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAB60u;
    if (runtime->hasFunction(0x1EAB60u)) {
        auto targetFn = runtime->lookupFunction(0x1EAB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0564u; }
        if (ctx->pc != 0x1F0564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntranceRoomGlid__11CDngFreeMapFv_0x1eab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0564u; }
        if (ctx->pc != 0x1F0564u) { return; }
    }
    ctx->pc = 0x1F0564u;
label_1f0564:
    // 0x1f0564: 0x1000005c  b           . + 4 + (0x5C << 2)
label_1f0568:
    if (ctx->pc == 0x1F0568u) {
        ctx->pc = 0x1F0568u;
            // 0x1f0568: 0xaf828f3c  sw          $v0, -0x70C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938428), GPR_U32(ctx, 2));
        ctx->pc = 0x1F056Cu;
        goto label_1f056c;
    }
    ctx->pc = 0x1F0564u;
    {
        const bool branch_taken_0x1f0564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0564u;
            // 0x1f0568: 0xaf828f3c  sw          $v0, -0x70C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0564) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F056Cu;
label_1f056c:
    // 0x1f056c: 0x1000005a  b           . + 4 + (0x5A << 2)
label_1f0570:
    if (ctx->pc == 0x1F0570u) {
        ctx->pc = 0x1F0574u;
        goto label_1f0574;
    }
    ctx->pc = 0x1F056Cu;
    {
        const bool branch_taken_0x1f056c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f056c) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F0574u;
label_1f0574:
    // 0x1f0574: 0xc07be14  jal         func_1EF850
label_1f0578:
    if (ctx->pc == 0x1F0578u) {
        ctx->pc = 0x1F057Cu;
        goto label_1f057c;
    }
    ctx->pc = 0x1F0574u;
    SET_GPR_U32(ctx, 31, 0x1F057Cu);
    ctx->pc = 0x1EF850u;
    if (runtime->hasFunction(0x1EF850u)) {
        auto targetFn = runtime->lookupFunction(0x1EF850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F057Cu; }
        if (ctx->pc != 0x1F057Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDngTreeMapFuncType__Fv_0x1ef850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F057Cu; }
        if (ctx->pc != 0x1F057Cu) { return; }
    }
    ctx->pc = 0x1F057Cu;
label_1f057c:
    // 0x1f057c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f0580:
    if (ctx->pc == 0x1F0580u) {
        ctx->pc = 0x1F0580u;
            // 0x1f0580: 0x241300c8  addiu       $s3, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->pc = 0x1F0584u;
        goto label_1f0584;
    }
    ctx->pc = 0x1F057Cu;
    {
        const bool branch_taken_0x1f057c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F057Cu;
            // 0x1f0580: 0x241300c8  addiu       $s3, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f057c) {
            ctx->pc = 0x1F0598u;
            goto label_1f0598;
        }
    }
    ctx->pc = 0x1F0584u;
label_1f0584:
    // 0x1f0584: 0x8f848eb0  lw          $a0, -0x7150($gp)
    ctx->pc = 0x1f0584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
label_1f0588:
    // 0x1f0588: 0xc07aad8  jal         func_1EAB60
label_1f058c:
    if (ctx->pc == 0x1F058Cu) {
        ctx->pc = 0x1F058Cu;
            // 0x1f058c: 0x24130064  addiu       $s3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x1F0590u;
        goto label_1f0590;
    }
    ctx->pc = 0x1F0588u;
    SET_GPR_U32(ctx, 31, 0x1F0590u);
    ctx->pc = 0x1F058Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0588u;
            // 0x1f058c: 0x24130064  addiu       $s3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAB60u;
    if (runtime->hasFunction(0x1EAB60u)) {
        auto targetFn = runtime->lookupFunction(0x1EAB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0590u; }
        if (ctx->pc != 0x1F0590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntranceRoomGlid__11CDngFreeMapFv_0x1eab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0590u; }
        if (ctx->pc != 0x1F0590u) { return; }
    }
    ctx->pc = 0x1F0590u;
label_1f0590:
    // 0x1f0590: 0x10000051  b           . + 4 + (0x51 << 2)
label_1f0594:
    if (ctx->pc == 0x1F0594u) {
        ctx->pc = 0x1F0594u;
            // 0x1f0594: 0xaf828f3c  sw          $v0, -0x70C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938428), GPR_U32(ctx, 2));
        ctx->pc = 0x1F0598u;
        goto label_1f0598;
    }
    ctx->pc = 0x1F0590u;
    {
        const bool branch_taken_0x1f0590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0590u;
            // 0x1f0594: 0xaf828f3c  sw          $v0, -0x70C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0590) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F0598u;
label_1f0598:
    // 0x1f0598: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1f059c:
    if (ctx->pc == 0x1F059Cu) {
        ctx->pc = 0x1F05A0u;
        goto label_1f05a0;
    }
    ctx->pc = 0x1F0598u;
    {
        const bool branch_taken_0x1f0598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0598) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F05A0u;
label_1f05a0:
    // 0x1f05a0: 0x93828f08  lbu         $v0, -0x70F8($gp)
    ctx->pc = 0x1f05a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938376)));
label_1f05a4:
    // 0x1f05a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1f05a8:
    if (ctx->pc == 0x1F05A8u) {
        ctx->pc = 0x1F05A8u;
            // 0x1f05a8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1F05ACu;
        goto label_1f05ac;
    }
    ctx->pc = 0x1F05A4u;
    {
        const bool branch_taken_0x1f05a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F05A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F05A4u;
            // 0x1f05a8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f05a4) {
            ctx->pc = 0x1F05D8u;
            goto label_1f05d8;
        }
    }
    ctx->pc = 0x1F05ACu;
label_1f05ac:
    // 0x1f05ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f05acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f05b0:
    // 0x1f05b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f05b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f05b4:
    // 0x1f05b4: 0xc08e898  jal         func_23A260
label_1f05b8:
    if (ctx->pc == 0x1F05B8u) {
        ctx->pc = 0x1F05B8u;
            // 0x1f05b8: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1F05BCu;
        goto label_1f05bc;
    }
    ctx->pc = 0x1F05B4u;
    SET_GPR_U32(ctx, 31, 0x1F05BCu);
    ctx->pc = 0x1F05B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F05B4u;
            // 0x1f05b8: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F05BCu; }
        if (ctx->pc != 0x1F05BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F05BCu; }
        if (ctx->pc != 0x1F05BCu) { return; }
    }
    ctx->pc = 0x1F05BCu;
label_1f05bc:
    // 0x1f05bc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1f05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1f05c0:
    // 0x1f05c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f05c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f05c4:
    // 0x1f05c4: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x1f05c4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_1f05c8:
    // 0x1f05c8: 0xc094274  jal         func_2509D0
label_1f05cc:
    if (ctx->pc == 0x1F05CCu) {
        ctx->pc = 0x1F05CCu;
            // 0x1f05cc: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1F05D0u;
        goto label_1f05d0;
    }
    ctx->pc = 0x1F05C8u;
    SET_GPR_U32(ctx, 31, 0x1F05D0u);
    ctx->pc = 0x1F05CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F05C8u;
            // 0x1f05cc: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F05D0u; }
        if (ctx->pc != 0x1F05D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F05D0u; }
        if (ctx->pc != 0x1F05D0u) { return; }
    }
    ctx->pc = 0x1F05D0u;
label_1f05d0:
    // 0x1f05d0: 0x10000041  b           . + 4 + (0x41 << 2)
label_1f05d4:
    if (ctx->pc == 0x1F05D4u) {
        ctx->pc = 0x1F05D8u;
        goto label_1f05d8;
    }
    ctx->pc = 0x1F05D0u;
    {
        const bool branch_taken_0x1f05d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f05d0) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F05D8u;
label_1f05d8:
    // 0x1f05d8: 0xc094274  jal         func_2509D0
label_1f05dc:
    if (ctx->pc == 0x1F05DCu) {
        ctx->pc = 0x1F05E0u;
        goto label_1f05e0;
    }
    ctx->pc = 0x1F05D8u;
    SET_GPR_U32(ctx, 31, 0x1F05E0u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F05E0u; }
        if (ctx->pc != 0x1F05E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F05E0u; }
        if (ctx->pc != 0x1F05E0u) { return; }
    }
    ctx->pc = 0x1F05E0u;
label_1f05e0:
    // 0x1f05e0: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1f05e4:
    if (ctx->pc == 0x1F05E4u) {
        ctx->pc = 0x1F05E8u;
        goto label_1f05e8;
    }
    ctx->pc = 0x1F05E0u;
    {
        const bool branch_taken_0x1f05e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f05e0) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F05E8u;
label_1f05e8:
    // 0x1f05e8: 0x83828ecc  lb          $v0, -0x7134($gp)
    ctx->pc = 0x1f05e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938316)));
label_1f05ec:
    // 0x1f05ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1f05f0:
    if (ctx->pc == 0x1F05F0u) {
        ctx->pc = 0x1F05F4u;
        goto label_1f05f4;
    }
    ctx->pc = 0x1F05ECu;
    {
        const bool branch_taken_0x1f05ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f05ec) {
            ctx->pc = 0x1F0604u;
            goto label_1f0604;
        }
    }
    ctx->pc = 0x1F05F4u;
label_1f05f4:
    // 0x1f05f4: 0x12400038  beqz        $s2, . + 4 + (0x38 << 2)
label_1f05f8:
    if (ctx->pc == 0x1F05F8u) {
        ctx->pc = 0x1F05FCu;
        goto label_1f05fc;
    }
    ctx->pc = 0x1F05F4u;
    {
        const bool branch_taken_0x1f05f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f05f4) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F05FCu;
label_1f05fc:
    // 0x1f05fc: 0x10000036  b           . + 4 + (0x36 << 2)
label_1f0600:
    if (ctx->pc == 0x1F0600u) {
        ctx->pc = 0x1F0600u;
            // 0x1f0600: 0x24130078  addiu       $s3, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x1F0604u;
        goto label_1f0604;
    }
    ctx->pc = 0x1F05FCu;
    {
        const bool branch_taken_0x1f05fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F05FCu;
            // 0x1f0600: 0x24130078  addiu       $s3, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f05fc) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F0604u;
label_1f0604:
    // 0x1f0604: 0x93828eb4  lbu         $v0, -0x714C($gp)
    ctx->pc = 0x1f0604u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938292)));
label_1f0608:
    // 0x1f0608: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1f060c:
    if (ctx->pc == 0x1F060Cu) {
        ctx->pc = 0x1F060Cu;
            // 0x1f060c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0610u;
        goto label_1f0610;
    }
    ctx->pc = 0x1F0608u;
    {
        const bool branch_taken_0x1f0608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F060Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0608u;
            // 0x1f060c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0608) {
            ctx->pc = 0x1F0668u;
            goto label_1f0668;
        }
    }
    ctx->pc = 0x1F0610u;
label_1f0610:
    // 0x1f0610: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1f0610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_1f0614:
    // 0x1f0614: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1f0618:
    if (ctx->pc == 0x1F0618u) {
        ctx->pc = 0x1F0618u;
            // 0x1f0618: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x1F061Cu;
        goto label_1f061c;
    }
    ctx->pc = 0x1F0614u;
    {
        const bool branch_taken_0x1f0614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0614u;
            // 0x1f0618: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0614) {
            ctx->pc = 0x1F0638u;
            goto label_1f0638;
        }
    }
    ctx->pc = 0x1F061Cu;
label_1f061c:
    // 0x1f061c: 0xc07be14  jal         func_1EF850
label_1f0620:
    if (ctx->pc == 0x1F0620u) {
        ctx->pc = 0x1F0620u;
            // 0x1f0620: 0x2413006e  addiu       $s3, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->pc = 0x1F0624u;
        goto label_1f0624;
    }
    ctx->pc = 0x1F061Cu;
    SET_GPR_U32(ctx, 31, 0x1F0624u);
    ctx->pc = 0x1F0620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F061Cu;
            // 0x1f0620: 0x2413006e  addiu       $s3, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF850u;
    if (runtime->hasFunction(0x1EF850u)) {
        auto targetFn = runtime->lookupFunction(0x1EF850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0624u; }
        if (ctx->pc != 0x1F0624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDngTreeMapFuncType__Fv_0x1ef850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0624u; }
        if (ctx->pc != 0x1F0624u) { return; }
    }
    ctx->pc = 0x1F0624u;
label_1f0624:
    // 0x1f0624: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f0624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0628:
    // 0x1f0628: 0x1443002b  bne         $v0, $v1, . + 4 + (0x2B << 2)
label_1f062c:
    if (ctx->pc == 0x1F062Cu) {
        ctx->pc = 0x1F0630u;
        goto label_1f0630;
    }
    ctx->pc = 0x1F0628u;
    {
        const bool branch_taken_0x1f0628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f0628) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F0630u;
label_1f0630:
    // 0x1f0630: 0x10000029  b           . + 4 + (0x29 << 2)
label_1f0634:
    if (ctx->pc == 0x1F0634u) {
        ctx->pc = 0x1F0634u;
            // 0x1f0634: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1F0638u;
        goto label_1f0638;
    }
    ctx->pc = 0x1F0630u;
    {
        const bool branch_taken_0x1f0630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0630u;
            // 0x1f0634: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0630) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F0638u;
label_1f0638:
    // 0x1f0638: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f063c:
    if (ctx->pc == 0x1F063Cu) {
        ctx->pc = 0x1F063Cu;
            // 0x1f063c: 0x32420004  andi        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x1F0640u;
        goto label_1f0640;
    }
    ctx->pc = 0x1F0638u;
    {
        const bool branch_taken_0x1f0638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F063Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0638u;
            // 0x1f063c: 0x32420004  andi        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0638) {
            ctx->pc = 0x1F0648u;
            goto label_1f0648;
        }
    }
    ctx->pc = 0x1F0640u;
label_1f0640:
    // 0x1f0640: 0x10000025  b           . + 4 + (0x25 << 2)
label_1f0644:
    if (ctx->pc == 0x1F0644u) {
        ctx->pc = 0x1F0644u;
            // 0x1f0644: 0x24130078  addiu       $s3, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x1F0648u;
        goto label_1f0648;
    }
    ctx->pc = 0x1F0640u;
    {
        const bool branch_taken_0x1f0640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0640u;
            // 0x1f0644: 0x24130078  addiu       $s3, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0640) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F0648u;
label_1f0648:
    // 0x1f0648: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1f064c:
    if (ctx->pc == 0x1F064Cu) {
        ctx->pc = 0x1F0650u;
        goto label_1f0650;
    }
    ctx->pc = 0x1F0648u;
    {
        const bool branch_taken_0x1f0648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0648) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F0650u;
label_1f0650:
    // 0x1f0650: 0x87828ef8  lh          $v0, -0x7108($gp)
    ctx->pc = 0x1f0650u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938360)));
label_1f0654:
    // 0x1f0654: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1f0654u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1f0658:
    // 0x1f0658: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
label_1f065c:
    if (ctx->pc == 0x1F065Cu) {
        ctx->pc = 0x1F0660u;
        goto label_1f0660;
    }
    ctx->pc = 0x1F0658u;
    {
        const bool branch_taken_0x1f0658 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0658) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F0660u;
label_1f0660:
    // 0x1f0660: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1f0664:
    if (ctx->pc == 0x1F0664u) {
        ctx->pc = 0x1F0664u;
            // 0x1f0664: 0x24130082  addiu       $s3, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->pc = 0x1F0668u;
        goto label_1f0668;
    }
    ctx->pc = 0x1F0660u;
    {
        const bool branch_taken_0x1f0660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0660u;
            // 0x1f0664: 0x24130082  addiu       $s3, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0660) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F0668u;
label_1f0668:
    // 0x1f0668: 0xc087630  jal         func_21D8C0
label_1f066c:
    if (ctx->pc == 0x1F066Cu) {
        ctx->pc = 0x1F0670u;
        goto label_1f0670;
    }
    ctx->pc = 0x1F0668u;
    SET_GPR_U32(ctx, 31, 0x1F0670u);
    ctx->pc = 0x21D8C0u;
    if (runtime->hasFunction(0x21D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0670u; }
        if (ctx->pc != 0x1F0670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor__7CDC2MesFv_0x21d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0670u; }
        if (ctx->pc != 0x1F0670u) { return; }
    }
    ctx->pc = 0x1F0670u;
label_1f0670:
    // 0x1f0670: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x1f0670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_1f0674:
    // 0x1f0674: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f0678:
    if (ctx->pc == 0x1F0678u) {
        ctx->pc = 0x1F0678u;
            // 0x1f0678: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F067Cu;
        goto label_1f067c;
    }
    ctx->pc = 0x1F0674u;
    {
        const bool branch_taken_0x1f0674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0674u;
            // 0x1f0678: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0674) {
            ctx->pc = 0x1F06A4u;
            goto label_1f06a4;
        }
    }
    ctx->pc = 0x1F067Cu;
label_1f067c:
    // 0x1f067c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_1f0680:
    if (ctx->pc == 0x1F0680u) {
        ctx->pc = 0x1F0684u;
        goto label_1f0684;
    }
    ctx->pc = 0x1F067Cu;
    {
        const bool branch_taken_0x1f067c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f067c) {
            ctx->pc = 0x1F069Cu;
            goto label_1f069c;
        }
    }
    ctx->pc = 0x1F0684u;
label_1f0684:
    // 0x1f0684: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f0688:
    if (ctx->pc == 0x1F0688u) {
        ctx->pc = 0x1F068Cu;
        goto label_1f068c;
    }
    ctx->pc = 0x1F0684u;
    {
        const bool branch_taken_0x1f0684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0684) {
            ctx->pc = 0x1F0694u;
            goto label_1f0694;
        }
    }
    ctx->pc = 0x1F068Cu;
label_1f068c:
    // 0x1f068c: 0x10000012  b           . + 4 + (0x12 << 2)
label_1f0690:
    if (ctx->pc == 0x1F0690u) {
        ctx->pc = 0x1F0694u;
        goto label_1f0694;
    }
    ctx->pc = 0x1F068Cu;
    {
        const bool branch_taken_0x1f068c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f068c) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F0694u;
label_1f0694:
    // 0x1f0694: 0x10000010  b           . + 4 + (0x10 << 2)
label_1f0698:
    if (ctx->pc == 0x1F0698u) {
        ctx->pc = 0x1F0698u;
            // 0x1f0698: 0x2413006e  addiu       $s3, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->pc = 0x1F069Cu;
        goto label_1f069c;
    }
    ctx->pc = 0x1F0694u;
    {
        const bool branch_taken_0x1f0694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0694u;
            // 0x1f0698: 0x2413006e  addiu       $s3, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0694) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F069Cu;
label_1f069c:
    // 0x1f069c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1f06a0:
    if (ctx->pc == 0x1F06A0u) {
        ctx->pc = 0x1F06A0u;
            // 0x1f06a0: 0x24130078  addiu       $s3, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x1F06A4u;
        goto label_1f06a4;
    }
    ctx->pc = 0x1F069Cu;
    {
        const bool branch_taken_0x1f069c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F06A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F069Cu;
            // 0x1f06a0: 0x24130078  addiu       $s3, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f069c) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F06A4u;
label_1f06a4:
    // 0x1f06a4: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x1f06a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_1f06a8:
    // 0x1f06a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f06ac:
    if (ctx->pc == 0x1F06ACu) {
        ctx->pc = 0x1F06B0u;
        goto label_1f06b0;
    }
    ctx->pc = 0x1F06A8u;
    {
        const bool branch_taken_0x1f06a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f06a8) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F06B0u;
label_1f06b0:
    // 0x1f06b0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1f06b4:
    if (ctx->pc == 0x1F06B4u) {
        ctx->pc = 0x1F06B4u;
            // 0x1f06b4: 0x24130078  addiu       $s3, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x1F06B8u;
        goto label_1f06b8;
    }
    ctx->pc = 0x1F06B0u;
    {
        const bool branch_taken_0x1f06b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F06B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F06B0u;
            // 0x1f06b4: 0x24130078  addiu       $s3, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f06b0) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F06B8u;
label_1f06b8:
    // 0x1f06b8: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x1f06b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
label_1f06bc:
    // 0x1f06bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1f06c0:
    if (ctx->pc == 0x1F06C0u) {
        ctx->pc = 0x1F06C0u;
            // 0x1f06c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F06C4u;
        goto label_1f06c4;
    }
    ctx->pc = 0x1F06BCu;
    {
        const bool branch_taken_0x1f06bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F06C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F06BCu;
            // 0x1f06c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f06bc) {
            ctx->pc = 0x1F06D0u;
            goto label_1f06d0;
        }
    }
    ctx->pc = 0x1F06C4u;
label_1f06c4:
    // 0x1f06c4: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x1f06c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_1f06c8:
    // 0x1f06c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f06cc:
    if (ctx->pc == 0x1F06CCu) {
        ctx->pc = 0x1F06D0u;
        goto label_1f06d0;
    }
    ctx->pc = 0x1F06C8u;
    {
        const bool branch_taken_0x1f06c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f06c8) {
            ctx->pc = 0x1F06D8u;
            goto label_1f06d8;
        }
    }
    ctx->pc = 0x1F06D0u;
label_1f06d0:
    // 0x1f06d0: 0xc094274  jal         func_2509D0
label_1f06d4:
    if (ctx->pc == 0x1F06D4u) {
        ctx->pc = 0x1F06D4u;
            // 0x1f06d4: 0x24130083  addiu       $s3, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->pc = 0x1F06D8u;
        goto label_1f06d8;
    }
    ctx->pc = 0x1F06D0u;
    SET_GPR_U32(ctx, 31, 0x1F06D8u);
    ctx->pc = 0x1F06D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F06D0u;
            // 0x1f06d4: 0x24130083  addiu       $s3, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F06D8u; }
        if (ctx->pc != 0x1F06D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F06D8u; }
        if (ctx->pc != 0x1F06D8u) { return; }
    }
    ctx->pc = 0x1F06D8u;
label_1f06d8:
    // 0x1f06d8: 0x8f828f3c  lw          $v0, -0x70C4($gp)
    ctx->pc = 0x1f06d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938428)));
label_1f06dc:
    // 0x1f06dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f06e0:
    if (ctx->pc == 0x1F06E0u) {
        ctx->pc = 0x1F06E0u;
            // 0x1f06e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F06E4u;
        goto label_1f06e4;
    }
    ctx->pc = 0x1F06DCu;
    {
        const bool branch_taken_0x1f06dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F06E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F06DCu;
            // 0x1f06e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f06dc) {
            ctx->pc = 0x1F06F8u;
            goto label_1f06f8;
        }
    }
    ctx->pc = 0x1F06E4u;
label_1f06e4:
    // 0x1f06e4: 0x86850118  lh          $a1, 0x118($s4)
    ctx->pc = 0x1f06e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 280)));
label_1f06e8:
    // 0x1f06e8: 0x8f8494b8  lw          $a0, -0x6B48($gp)
    ctx->pc = 0x1f06e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939832)));
label_1f06ec:
    // 0x1f06ec: 0xc0bdc7c  jal         func_2F71F0
label_1f06f0:
    if (ctx->pc == 0x1F06F0u) {
        ctx->pc = 0x1F06F0u;
            // 0x1f06f0: 0x80460028  lb          $a2, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->pc = 0x1F06F4u;
        goto label_1f06f4;
    }
    ctx->pc = 0x1F06ECu;
    SET_GPR_U32(ctx, 31, 0x1F06F4u);
    ctx->pc = 0x1F06F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F06ECu;
            // 0x1f06f0: 0x80460028  lb          $a2, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F06F4u; }
        if (ctx->pc != 0x1F06F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F06F4u; }
        if (ctx->pc != 0x1F06F4u) { return; }
    }
    ctx->pc = 0x1F06F4u;
label_1f06f4:
    // 0x1f06f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f06f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f06f8:
    // 0x1f06f8: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1f06f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1f06fc:
    // 0x1f06fc: 0x12620235  beq         $s3, $v0, . + 4 + (0x235 << 2)
label_1f0700:
    if (ctx->pc == 0x1F0700u) {
        ctx->pc = 0x1F0700u;
            // 0x1f0700: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1F0704u;
        goto label_1f0704;
    }
    ctx->pc = 0x1F06FCu;
    {
        const bool branch_taken_0x1f06fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F0700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F06FCu;
            // 0x1f0700: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f06fc) {
            ctx->pc = 0x1F0FD4u;
            goto label_1f0fd4;
        }
    }
    ctx->pc = 0x1F0704u;
label_1f0704:
    // 0x1f0704: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1f0704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1f0708:
    // 0x1f0708: 0x12620225  beq         $s3, $v0, . + 4 + (0x225 << 2)
label_1f070c:
    if (ctx->pc == 0x1F070Cu) {
        ctx->pc = 0x1F070Cu;
            // 0x1f070c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1F0710u;
        goto label_1f0710;
    }
    ctx->pc = 0x1F0708u;
    {
        const bool branch_taken_0x1f0708 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F070Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0708u;
            // 0x1f070c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0708) {
            ctx->pc = 0x1F0FA0u;
            goto label_1f0fa0;
        }
    }
    ctx->pc = 0x1F0710u;
label_1f0710:
    // 0x1f0710: 0x24020083  addiu       $v0, $zero, 0x83
    ctx->pc = 0x1f0710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_1f0714:
    // 0x1f0714: 0x12620212  beq         $s3, $v0, . + 4 + (0x212 << 2)
label_1f0718:
    if (ctx->pc == 0x1F0718u) {
        ctx->pc = 0x1F0718u;
            // 0x1f0718: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->pc = 0x1F071Cu;
        goto label_1f071c;
    }
    ctx->pc = 0x1F0714u;
    {
        const bool branch_taken_0x1f0714 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F0718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0714u;
            // 0x1f0718: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0714) {
            ctx->pc = 0x1F0F60u;
            goto label_1f0f60;
        }
    }
    ctx->pc = 0x1F071Cu;
label_1f071c:
    // 0x1f071c: 0x12620207  beq         $s3, $v0, . + 4 + (0x207 << 2)
label_1f0720:
    if (ctx->pc == 0x1F0720u) {
        ctx->pc = 0x1F0720u;
            // 0x1f0720: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F0724u;
        goto label_1f0724;
    }
    ctx->pc = 0x1F071Cu;
    {
        const bool branch_taken_0x1f071c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F0720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F071Cu;
            // 0x1f0720: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f071c) {
            ctx->pc = 0x1F0F3Cu;
            goto label_1f0f3c;
        }
    }
    ctx->pc = 0x1F0724u;
label_1f0724:
    // 0x1f0724: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x1f0724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_1f0728:
    // 0x1f0728: 0x12620127  beq         $s3, $v0, . + 4 + (0x127 << 2)
label_1f072c:
    if (ctx->pc == 0x1F072Cu) {
        ctx->pc = 0x1F072Cu;
            // 0x1f072c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F0730u;
        goto label_1f0730;
    }
    ctx->pc = 0x1F0728u;
    {
        const bool branch_taken_0x1f0728 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F072Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0728u;
            // 0x1f072c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0728) {
            ctx->pc = 0x1F0BC8u;
            goto label_1f0bc8;
        }
    }
    ctx->pc = 0x1F0730u;
label_1f0730:
    // 0x1f0730: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1f0730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1f0734:
    // 0x1f0734: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_1f0738:
    if (ctx->pc == 0x1F0738u) {
        ctx->pc = 0x1F073Cu;
        goto label_1f073c;
    }
    ctx->pc = 0x1F0734u;
    {
        const bool branch_taken_0x1f0734 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f0734) {
            ctx->pc = 0x1F0744u;
            goto label_1f0744;
        }
    }
    ctx->pc = 0x1F073Cu;
label_1f073c:
    // 0x1f073c: 0x10000232  b           . + 4 + (0x232 << 2)
label_1f0740:
    if (ctx->pc == 0x1F0740u) {
        ctx->pc = 0x1F0740u;
            // 0x1f0740: 0x8e840120  lw          $a0, 0x120($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
        ctx->pc = 0x1F0744u;
        goto label_1f0744;
    }
    ctx->pc = 0x1F073Cu;
    {
        const bool branch_taken_0x1f073c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F073Cu;
            // 0x1f0740: 0x8e840120  lw          $a0, 0x120($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f073c) {
            ctx->pc = 0x1F1008u;
            goto label_1f1008;
        }
    }
    ctx->pc = 0x1F0744u;
label_1f0744:
    // 0x1f0744: 0x8f828f3c  lw          $v0, -0x70C4($gp)
    ctx->pc = 0x1f0744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938428)));
label_1f0748:
    // 0x1f0748: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1f074c:
    if (ctx->pc == 0x1F074Cu) {
        ctx->pc = 0x1F074Cu;
            // 0x1f074c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1F0750u;
        goto label_1f0750;
    }
    ctx->pc = 0x1F0748u;
    {
        const bool branch_taken_0x1f0748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F074Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0748u;
            // 0x1f074c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0748) {
            ctx->pc = 0x1F0760u;
            goto label_1f0760;
        }
    }
    ctx->pc = 0x1F0750u;
label_1f0750:
    // 0x1f0750: 0xc094274  jal         func_2509D0
label_1f0754:
    if (ctx->pc == 0x1F0754u) {
        ctx->pc = 0x1F0758u;
        goto label_1f0758;
    }
    ctx->pc = 0x1F0750u;
    SET_GPR_U32(ctx, 31, 0x1F0758u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0758u; }
        if (ctx->pc != 0x1F0758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0758u; }
        if (ctx->pc != 0x1F0758u) { return; }
    }
    ctx->pc = 0x1F0758u;
label_1f0758:
    // 0x1f0758: 0x1000022a  b           . + 4 + (0x22A << 2)
label_1f075c:
    if (ctx->pc == 0x1F075Cu) {
        ctx->pc = 0x1F0760u;
        goto label_1f0760;
    }
    ctx->pc = 0x1F0758u;
    {
        const bool branch_taken_0x1f0758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0758) {
            ctx->pc = 0x1F1004u;
            goto label_1f1004;
        }
    }
    ctx->pc = 0x1F0760u;
label_1f0760:
    // 0x1f0760: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_1f0764:
    if (ctx->pc == 0x1F0764u) {
        ctx->pc = 0x1F0768u;
        goto label_1f0768;
    }
    ctx->pc = 0x1F0760u;
    {
        const bool branch_taken_0x1f0760 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0760) {
            ctx->pc = 0x1F0788u;
            goto label_1f0788;
        }
    }
    ctx->pc = 0x1F0768u;
label_1f0768:
    // 0x1f0768: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x1f0768u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_1f076c:
    // 0x1f076c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f076cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1f0770:
    // 0x1f0770: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1f0774:
    if (ctx->pc == 0x1F0774u) {
        ctx->pc = 0x1F0774u;
            // 0x1f0774: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1F0778u;
        goto label_1f0778;
    }
    ctx->pc = 0x1F0770u;
    {
        const bool branch_taken_0x1f0770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0770u;
            // 0x1f0774: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0770) {
            ctx->pc = 0x1F0788u;
            goto label_1f0788;
        }
    }
    ctx->pc = 0x1F0778u;
label_1f0778:
    // 0x1f0778: 0xc094274  jal         func_2509D0
label_1f077c:
    if (ctx->pc == 0x1F077Cu) {
        ctx->pc = 0x1F0780u;
        goto label_1f0780;
    }
    ctx->pc = 0x1F0778u;
    SET_GPR_U32(ctx, 31, 0x1F0780u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0780u; }
        if (ctx->pc != 0x1F0780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0780u; }
        if (ctx->pc != 0x1F0780u) { return; }
    }
    ctx->pc = 0x1F0780u;
label_1f0780:
    // 0x1f0780: 0x10000220  b           . + 4 + (0x220 << 2)
label_1f0784:
    if (ctx->pc == 0x1F0784u) {
        ctx->pc = 0x1F0788u;
        goto label_1f0788;
    }
    ctx->pc = 0x1F0780u;
    {
        const bool branch_taken_0x1f0780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0780) {
            ctx->pc = 0x1F1004u;
            goto label_1f1004;
        }
    }
    ctx->pc = 0x1F0788u;
label_1f0788:
    // 0x1f0788: 0xc07be14  jal         func_1EF850
label_1f078c:
    if (ctx->pc == 0x1F078Cu) {
        ctx->pc = 0x1F0790u;
        goto label_1f0790;
    }
    ctx->pc = 0x1F0788u;
    SET_GPR_U32(ctx, 31, 0x1F0790u);
    ctx->pc = 0x1EF850u;
    if (runtime->hasFunction(0x1EF850u)) {
        auto targetFn = runtime->lookupFunction(0x1EF850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0790u; }
        if (ctx->pc != 0x1F0790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDngTreeMapFuncType__Fv_0x1ef850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0790u; }
        if (ctx->pc != 0x1F0790u) { return; }
    }
    ctx->pc = 0x1F0790u;
label_1f0790:
    // 0x1f0790: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_1f0794:
    if (ctx->pc == 0x1F0794u) {
        ctx->pc = 0x1F0798u;
        goto label_1f0798;
    }
    ctx->pc = 0x1F0790u;
    {
        const bool branch_taken_0x1f0790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0790) {
            ctx->pc = 0x1F07E4u;
            goto label_1f07e4;
        }
    }
    ctx->pc = 0x1F0798u;
label_1f0798:
    // 0x1f0798: 0x93838f1c  lbu         $v1, -0x70E4($gp)
    ctx->pc = 0x1f0798u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938396)));
label_1f079c:
    // 0x1f079c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f079cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f07a0:
    // 0x1f07a0: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_1f07a4:
    if (ctx->pc == 0x1F07A4u) {
        ctx->pc = 0x1F07A8u;
        goto label_1f07a8;
    }
    ctx->pc = 0x1F07A0u;
    {
        const bool branch_taken_0x1f07a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f07a0) {
            ctx->pc = 0x1F07E4u;
            goto label_1f07e4;
        }
    }
    ctx->pc = 0x1F07A8u;
label_1f07a8:
    // 0x1f07a8: 0x8f828f3c  lw          $v0, -0x70C4($gp)
    ctx->pc = 0x1f07a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938428)));
label_1f07ac:
    // 0x1f07ac: 0x27a601dc  addiu       $a2, $sp, 0x1DC
    ctx->pc = 0x1f07acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
label_1f07b0:
    // 0x1f07b0: 0x86840118  lh          $a0, 0x118($s4)
    ctx->pc = 0x1f07b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 280)));
label_1f07b4:
    // 0x1f07b4: 0x80450028  lb          $a1, 0x28($v0)
    ctx->pc = 0x1f07b4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_1f07b8:
    // 0x1f07b8: 0xc07be24  jal         func_1EF890
label_1f07bc:
    if (ctx->pc == 0x1F07BCu) {
        ctx->pc = 0x1F07BCu;
            // 0x1f07bc: 0x27a701e0  addiu       $a3, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x1F07C0u;
        goto label_1f07c0;
    }
    ctx->pc = 0x1F07B8u;
    SET_GPR_U32(ctx, 31, 0x1F07C0u);
    ctx->pc = 0x1F07BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F07B8u;
            // 0x1f07bc: 0x27a701e0  addiu       $a3, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF890u;
    if (runtime->hasFunction(0x1EF890u)) {
        auto targetFn = runtime->lookupFunction(0x1EF890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F07C0u; }
        if (ctx->pc != 0x1F07C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeDngTreeMapJumpNo__FiiPiPi_0x1ef890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F07C0u; }
        if (ctx->pc != 0x1F07C0u) { return; }
    }
    ctx->pc = 0x1F07C0u;
label_1f07c0:
    // 0x1f07c0: 0x8f8394a4  lw          $v1, -0x6B5C($gp)
    ctx->pc = 0x1f07c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_1f07c4:
    // 0x1f07c4: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1f07c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_1f07c8:
    // 0x1f07c8: 0x8c632e60  lw          $v1, 0x2E60($v1)
    ctx->pc = 0x1f07c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11872)));
label_1f07cc:
    // 0x1f07cc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_1f07d0:
    if (ctx->pc == 0x1F07D0u) {
        ctx->pc = 0x1F07D0u;
            // 0x1f07d0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1F07D4u;
        goto label_1f07d4;
    }
    ctx->pc = 0x1F07CCu;
    {
        const bool branch_taken_0x1f07cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F07D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F07CCu;
            // 0x1f07d0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f07cc) {
            ctx->pc = 0x1F07E4u;
            goto label_1f07e4;
        }
    }
    ctx->pc = 0x1F07D4u;
label_1f07d4:
    // 0x1f07d4: 0xc094274  jal         func_2509D0
label_1f07d8:
    if (ctx->pc == 0x1F07D8u) {
        ctx->pc = 0x1F07DCu;
        goto label_1f07dc;
    }
    ctx->pc = 0x1F07D4u;
    SET_GPR_U32(ctx, 31, 0x1F07DCu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F07DCu; }
        if (ctx->pc != 0x1F07DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F07DCu; }
        if (ctx->pc != 0x1F07DCu) { return; }
    }
    ctx->pc = 0x1F07DCu;
label_1f07dc:
    // 0x1f07dc: 0x10000209  b           . + 4 + (0x209 << 2)
label_1f07e0:
    if (ctx->pc == 0x1F07E0u) {
        ctx->pc = 0x1F07E4u;
        goto label_1f07e4;
    }
    ctx->pc = 0x1F07DCu;
    {
        const bool branch_taken_0x1f07dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f07dc) {
            ctx->pc = 0x1F1004u;
            goto label_1f1004;
        }
    }
    ctx->pc = 0x1F07E4u;
label_1f07e4:
    // 0x1f07e4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1f07e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f07e8:
    // 0x1f07e8: 0xc07be14  jal         func_1EF850
label_1f07ec:
    if (ctx->pc == 0x1F07ECu) {
        ctx->pc = 0x1F07ECu;
            // 0x1f07ec: 0xa3978ecc  sb          $s7, -0x7134($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938316), (uint8_t)GPR_U32(ctx, 23));
        ctx->pc = 0x1F07F0u;
        goto label_1f07f0;
    }
    ctx->pc = 0x1F07E8u;
    SET_GPR_U32(ctx, 31, 0x1F07F0u);
    ctx->pc = 0x1F07ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F07E8u;
            // 0x1f07ec: 0xa3978ecc  sb          $s7, -0x7134($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938316), (uint8_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF850u;
    if (runtime->hasFunction(0x1EF850u)) {
        auto targetFn = runtime->lookupFunction(0x1EF850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F07F0u; }
        if (ctx->pc != 0x1F07F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDngTreeMapFuncType__Fv_0x1ef850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F07F0u; }
        if (ctx->pc != 0x1F07F0u) { return; }
    }
    ctx->pc = 0x1F07F0u;
label_1f07f0:
    // 0x1f07f0: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x1f07f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f07f4:
    // 0x1f07f4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_1f07f8:
    if (ctx->pc == 0x1F07F8u) {
        ctx->pc = 0x1F07FCu;
        goto label_1f07fc;
    }
    ctx->pc = 0x1F07F4u;
    {
        const bool branch_taken_0x1f07f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f07f4) {
            ctx->pc = 0x1F0814u;
            goto label_1f0814;
        }
    }
    ctx->pc = 0x1F07FCu;
label_1f07fc:
    // 0x1f07fc: 0x8f828f3c  lw          $v0, -0x70C4($gp)
    ctx->pc = 0x1f07fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938428)));
label_1f0800:
    // 0x1f0800: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1f0800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1f0804:
    // 0x1f0804: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1f0804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1f0808:
    // 0x1f0808: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1f080c:
    if (ctx->pc == 0x1F080Cu) {
        ctx->pc = 0x1F080Cu;
            // 0x1f080c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F0810u;
        goto label_1f0810;
    }
    ctx->pc = 0x1F0808u;
    {
        const bool branch_taken_0x1f0808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F080Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0808u;
            // 0x1f080c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0808) {
            ctx->pc = 0x1F0814u;
            goto label_1f0814;
        }
    }
    ctx->pc = 0x1F0810u;
label_1f0810:
    // 0x1f0810: 0xa3828ecc  sb          $v0, -0x7134($gp)
    ctx->pc = 0x1f0810u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938316), (uint8_t)GPR_U32(ctx, 2));
label_1f0814:
    // 0x1f0814: 0x83838ecc  lb          $v1, -0x7134($gp)
    ctx->pc = 0x1f0814u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938316)));
label_1f0818:
    // 0x1f0818: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1f081c:
    if (ctx->pc == 0x1F081Cu) {
        ctx->pc = 0x1F081Cu;
            // 0x1f081c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F0820u;
        goto label_1f0820;
    }
    ctx->pc = 0x1F0818u;
    {
        const bool branch_taken_0x1f0818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F081Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0818u;
            // 0x1f081c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0818) {
            ctx->pc = 0x1F0828u;
            goto label_1f0828;
        }
    }
    ctx->pc = 0x1F0820u;
label_1f0820:
    // 0x1f0820: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_1f0824:
    if (ctx->pc == 0x1F0824u) {
        ctx->pc = 0x1F0824u;
            // 0x1f0824: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x1F0828u;
        goto label_1f0828;
    }
    ctx->pc = 0x1F0820u;
    {
        const bool branch_taken_0x1f0820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0820u;
            // 0x1f0824: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0820) {
            ctx->pc = 0x1F086Cu;
            goto label_1f086c;
        }
    }
    ctx->pc = 0x1F0828u;
label_1f0828:
    // 0x1f0828: 0x8f828f3c  lw          $v0, -0x70C4($gp)
    ctx->pc = 0x1f0828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938428)));
label_1f082c:
    // 0x1f082c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1f082cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1f0830:
    // 0x1f0830: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1f0830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1f0834:
    // 0x1f0834: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1f0838:
    if (ctx->pc == 0x1F0838u) {
        ctx->pc = 0x1F0838u;
            // 0x1f0838: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1F083Cu;
        goto label_1f083c;
    }
    ctx->pc = 0x1F0834u;
    {
        const bool branch_taken_0x1f0834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0834u;
            // 0x1f0838: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0834) {
            ctx->pc = 0x1F0854u;
            goto label_1f0854;
        }
    }
    ctx->pc = 0x1F083Cu;
label_1f083c:
    // 0x1f083c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1f083cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1f0840:
    // 0x1f0840: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1f0844:
    if (ctx->pc == 0x1F0844u) {
        ctx->pc = 0x1F0844u;
            // 0x1f0844: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x1F0848u;
        goto label_1f0848;
    }
    ctx->pc = 0x1F0840u;
    {
        const bool branch_taken_0x1f0840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0840u;
            // 0x1f0844: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0840) {
            ctx->pc = 0x1F0850u;
            goto label_1f0850;
        }
    }
    ctx->pc = 0x1F0848u;
label_1f0848:
    // 0x1f0848: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1f084c:
    if (ctx->pc == 0x1F084Cu) {
        ctx->pc = 0x1F0850u;
        goto label_1f0850;
    }
    ctx->pc = 0x1F0848u;
    {
        const bool branch_taken_0x1f0848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0848) {
            ctx->pc = 0x1F0868u;
            goto label_1f0868;
        }
    }
    ctx->pc = 0x1F0850u;
label_1f0850:
    // 0x1f0850: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1f0850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f0854:
    // 0x1f0854: 0xc094274  jal         func_2509D0
label_1f0858:
    if (ctx->pc == 0x1F0858u) {
        ctx->pc = 0x1F085Cu;
        goto label_1f085c;
    }
    ctx->pc = 0x1F0854u;
    SET_GPR_U32(ctx, 31, 0x1F085Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F085Cu; }
        if (ctx->pc != 0x1F085Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F085Cu; }
        if (ctx->pc != 0x1F085Cu) { return; }
    }
    ctx->pc = 0x1F085Cu;
label_1f085c:
    // 0x1f085c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f0860:
    // 0x1f0860: 0x100001e8  b           . + 4 + (0x1E8 << 2)
label_1f0864:
    if (ctx->pc == 0x1F0864u) {
        ctx->pc = 0x1F0864u;
            // 0x1f0864: 0xae02014c  sw          $v0, 0x14C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
        ctx->pc = 0x1F0868u;
        goto label_1f0868;
    }
    ctx->pc = 0x1F0860u;
    {
        const bool branch_taken_0x1f0860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0860u;
            // 0x1f0864: 0xae02014c  sw          $v0, 0x14C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0860) {
            ctx->pc = 0x1F1004u;
            goto label_1f1004;
        }
    }
    ctx->pc = 0x1F0868u;
label_1f0868:
    // 0x1f0868: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1f0868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1f086c:
    // 0x1f086c: 0xc094274  jal         func_2509D0
label_1f0870:
    if (ctx->pc == 0x1F0870u) {
        ctx->pc = 0x1F0874u;
        goto label_1f0874;
    }
    ctx->pc = 0x1F086Cu;
    SET_GPR_U32(ctx, 31, 0x1F0874u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0874u; }
        if (ctx->pc != 0x1F0874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0874u; }
        if (ctx->pc != 0x1F0874u) { return; }
    }
    ctx->pc = 0x1F0874u;
label_1f0874:
    // 0x1f0874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0878:
    // 0x1f0878: 0xaf918ed0  sw          $s1, -0x7130($gp)
    ctx->pc = 0x1f0878u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 17));
label_1f087c:
    // 0x1f087c: 0xa3828eb4  sb          $v0, -0x714C($gp)
    ctx->pc = 0x1f087cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938292), (uint8_t)GPR_U32(ctx, 2));
label_1f0880:
    // 0x1f0880: 0x2412003c  addiu       $s2, $zero, 0x3C
    ctx->pc = 0x1f0880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1f0884:
    // 0x1f0884: 0xa3828eb8  sb          $v0, -0x7148($gp)
    ctx->pc = 0x1f0884u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938296), (uint8_t)GPR_U32(ctx, 2));
label_1f0888:
    // 0x1f0888: 0x8f828f3c  lw          $v0, -0x70C4($gp)
    ctx->pc = 0x1f0888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938428)));
label_1f088c:
    // 0x1f088c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1f088cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1f0890:
    // 0x1f0890: 0xc064220  jal         func_190880
label_1f0894:
    if (ctx->pc == 0x1F0894u) {
        ctx->pc = 0x1F0894u;
            // 0x1f0894: 0xaf828ed4  sw          $v0, -0x712C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938324), GPR_U32(ctx, 2));
        ctx->pc = 0x1F0898u;
        goto label_1f0898;
    }
    ctx->pc = 0x1F0890u;
    SET_GPR_U32(ctx, 31, 0x1F0898u);
    ctx->pc = 0x1F0894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0890u;
            // 0x1f0894: 0xaf828ed4  sw          $v0, -0x712C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0898u; }
        if (ctx->pc != 0x1F0898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0898u; }
        if (ctx->pc != 0x1F0898u) { return; }
    }
    ctx->pc = 0x1F0898u;
label_1f0898:
    // 0x1f0898: 0xc0bda00  jal         func_2F6800
label_1f089c:
    if (ctx->pc == 0x1F089Cu) {
        ctx->pc = 0x1F089Cu;
            // 0x1f089c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F08A0u;
        goto label_1f08a0;
    }
    ctx->pc = 0x1F0898u;
    SET_GPR_U32(ctx, 31, 0x1F08A0u);
    ctx->pc = 0x1F089Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0898u;
            // 0x1f089c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6800u;
    if (runtime->hasFunction(0x2F6800u)) {
        auto targetFn = runtime->lookupFunction(0x2F6800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F08A0u; }
        if (ctx->pc != 0x1F08A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitCtrl__9CSaveDataFv_0x2f6800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F08A0u; }
        if (ctx->pc != 0x1F08A0u) { return; }
    }
    ctx->pc = 0x1F08A0u;
label_1f08a0:
    // 0x1f08a0: 0xc08caa8  jal         func_232AA0
label_1f08a4:
    if (ctx->pc == 0x1F08A4u) {
        ctx->pc = 0x1F08A8u;
        goto label_1f08a8;
    }
    ctx->pc = 0x1F08A0u;
    SET_GPR_U32(ctx, 31, 0x1F08A8u);
    ctx->pc = 0x232AA0u;
    if (runtime->hasFunction(0x232AA0u)) {
        auto targetFn = runtime->lookupFunction(0x232AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F08A8u; }
        if (ctx->pc != 0x1F08A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_GetBattleAreaScene__Fv_0x232aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F08A8u; }
        if (ctx->pc != 0x1F08A8u) { return; }
    }
    ctx->pc = 0x1F08A8u;
label_1f08a8:
    // 0x1f08a8: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1f08a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1f08ac:
    // 0x1f08ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1f08b0:
    if (ctx->pc == 0x1F08B0u) {
        ctx->pc = 0x1F08B0u;
            // 0x1f08b0: 0xa680011c  sh          $zero, 0x11C($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 284), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1F08B4u;
        goto label_1f08b4;
    }
    ctx->pc = 0x1F08ACu;
    {
        const bool branch_taken_0x1f08ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F08B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F08ACu;
            // 0x1f08b0: 0xa680011c  sh          $zero, 0x11C($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 284), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f08ac) {
            ctx->pc = 0x1F08CCu;
            goto label_1f08cc;
        }
    }
    ctx->pc = 0x1F08B4u;
label_1f08b4:
    // 0x1f08b4: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x1f08b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_1f08b8:
    // 0x1f08b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f08b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f08bc:
    // 0x1f08bc: 0x84630050  lh          $v1, 0x50($v1)
    ctx->pc = 0x1f08bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f08c0:
    // 0x1f08c0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1f08c4:
    if (ctx->pc == 0x1F08C4u) {
        ctx->pc = 0x1F08C8u;
        goto label_1f08c8;
    }
    ctx->pc = 0x1F08C0u;
    {
        const bool branch_taken_0x1f08c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f08c0) {
            ctx->pc = 0x1F08CCu;
            goto label_1f08cc;
        }
    }
    ctx->pc = 0x1F08C8u;
label_1f08c8:
    // 0x1f08c8: 0xa682011c  sh          $v0, 0x11C($s4)
    ctx->pc = 0x1f08c8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 284), (uint16_t)GPR_U32(ctx, 2));
label_1f08cc:
    // 0x1f08cc: 0x93828f1c  lbu         $v0, -0x70E4($gp)
    ctx->pc = 0x1f08ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938396)));
label_1f08d0:
    // 0x1f08d0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1f08d4:
    if (ctx->pc == 0x1F08D4u) {
        ctx->pc = 0x1F08D8u;
        goto label_1f08d8;
    }
    ctx->pc = 0x1F08D0u;
    {
        const bool branch_taken_0x1f08d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f08d0) {
            ctx->pc = 0x1F08DCu;
            goto label_1f08dc;
        }
    }
    ctx->pc = 0x1F08D8u;
label_1f08d8:
    // 0x1f08d8: 0xa680011c  sh          $zero, 0x11C($s4)
    ctx->pc = 0x1f08d8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 284), (uint16_t)GPR_U32(ctx, 0));
label_1f08dc:
    // 0x1f08dc: 0x8f878f3c  lw          $a3, -0x70C4($gp)
    ctx->pc = 0x1f08dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938428)));
label_1f08e0:
    // 0x1f08e0: 0x8ce3002c  lw          $v1, 0x2C($a3)
    ctx->pc = 0x1f08e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
label_1f08e4:
    // 0x1f08e4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1f08e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1f08e8:
    // 0x1f08e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1f08ec:
    if (ctx->pc == 0x1F08ECu) {
        ctx->pc = 0x1F08ECu;
            // 0x1f08ec: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->pc = 0x1F08F0u;
        goto label_1f08f0;
    }
    ctx->pc = 0x1F08E8u;
    {
        const bool branch_taken_0x1f08e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F08ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F08E8u;
            // 0x1f08ec: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f08e8) {
            ctx->pc = 0x1F0908u;
            goto label_1f0908;
        }
    }
    ctx->pc = 0x1F08F0u;
label_1f08f0:
    // 0x1f08f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1f08f4:
    if (ctx->pc == 0x1F08F4u) {
        ctx->pc = 0x1F08F4u;
            // 0x1f08f4: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x1F08F8u;
        goto label_1f08f8;
    }
    ctx->pc = 0x1F08F0u;
    {
        const bool branch_taken_0x1f08f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F08F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F08F0u;
            // 0x1f08f4: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f08f0) {
            ctx->pc = 0x1F0908u;
            goto label_1f0908;
        }
    }
    ctx->pc = 0x1F08F8u;
label_1f08f8:
    // 0x1f08f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1f08fc:
    if (ctx->pc == 0x1F08FCu) {
        ctx->pc = 0x1F08FCu;
            // 0x1f08fc: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x1F0900u;
        goto label_1f0900;
    }
    ctx->pc = 0x1F08F8u;
    {
        const bool branch_taken_0x1f08f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F08FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F08F8u;
            // 0x1f08fc: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f08f8) {
            ctx->pc = 0x1F0908u;
            goto label_1f0908;
        }
    }
    ctx->pc = 0x1F0900u;
label_1f0900:
    // 0x1f0900: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1f0904:
    if (ctx->pc == 0x1F0904u) {
        ctx->pc = 0x1F0908u;
        goto label_1f0908;
    }
    ctx->pc = 0x1F0900u;
    {
        const bool branch_taken_0x1f0900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0900) {
            ctx->pc = 0x1F094Cu;
            goto label_1f094c;
        }
    }
    ctx->pc = 0x1F0908u;
label_1f0908:
    // 0x1f0908: 0xc7808f44  lwc1        $f0, -0x70BC($gp)
    ctx->pc = 0x1f0908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f090c:
    // 0x1f090c: 0x27a501e4  addiu       $a1, $sp, 0x1E4
    ctx->pc = 0x1f090cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
label_1f0910:
    // 0x1f0910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f0914:
    // 0x1f0914: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f0914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0918:
    // 0x1f0918: 0x2412003d  addiu       $s2, $zero, 0x3D
    ctx->pc = 0x1f0918u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_1f091c:
    // 0x1f091c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1f091cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1f0920:
    // 0x1f0920: 0x80e20028  lb          $v0, 0x28($a3)
    ctx->pc = 0x1f0920u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
label_1f0924:
    // 0x1f0924: 0x86830118  lh          $v1, 0x118($s4)
    ctx->pc = 0x1f0924u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 280)));
label_1f0928:
    // 0x1f0928: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x1f0928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f092c:
    // 0x1f092c: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x1f092cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_1f0930:
    // 0x1f0930: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1f0930u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f0934:
    // 0x1f0934: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f0934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f0938:
    // 0x1f0938: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1f0938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f093c:
    // 0x1f093c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f093cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1f0940:
    // 0x1f0940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f0940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f0944:
    // 0x1f0944: 0xc0876ec  jal         func_21DBB0
label_1f0948:
    if (ctx->pc == 0x1F0948u) {
        ctx->pc = 0x1F0948u;
            // 0x1f0948: 0xafa201e4  sw          $v0, 0x1E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
        ctx->pc = 0x1F094Cu;
        goto label_1f094c;
    }
    ctx->pc = 0x1F0944u;
    SET_GPR_U32(ctx, 31, 0x1F094Cu);
    ctx->pc = 0x1F0948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0944u;
            // 0x1f0948: 0xafa201e4  sw          $v0, 0x1E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F094Cu; }
        if (ctx->pc != 0x1F094Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F094Cu; }
        if (ctx->pc != 0x1F094Cu) { return; }
    }
    ctx->pc = 0x1F094Cu;
label_1f094c:
    // 0x1f094c: 0x8682011c  lh          $v0, 0x11C($s4)
    ctx->pc = 0x1f094cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 284)));
label_1f0950:
    // 0x1f0950: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1f0954:
    if (ctx->pc == 0x1F0954u) {
        ctx->pc = 0x1F0954u;
            // 0x1f0954: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1F0958u;
        goto label_1f0958;
    }
    ctx->pc = 0x1F0950u;
    {
        const bool branch_taken_0x1f0950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0950u;
            // 0x1f0954: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0950) {
            ctx->pc = 0x1F095Cu;
            goto label_1f095c;
        }
    }
    ctx->pc = 0x1F0958u;
label_1f0958:
    // 0x1f0958: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1f0958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_1f095c:
    // 0x1f095c: 0x27a501c8  addiu       $a1, $sp, 0x1C8
    ctx->pc = 0x1f095cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_1f0960:
    // 0x1f0960: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x1f0960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
label_1f0964:
    // 0x1f0964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f0968:
    // 0x1f0968: 0xdf828170  ld          $v0, -0x7E90($gp)
    ctx->pc = 0x1f0968u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934896)));
label_1f096c:
    // 0x1f096c: 0xc0876b0  jal         func_21DAC0
label_1f0970:
    if (ctx->pc == 0x1F0970u) {
        ctx->pc = 0x1F0970u;
            // 0x1f0970: 0xfca20000  sd          $v0, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x1F0974u;
        goto label_1f0974;
    }
    ctx->pc = 0x1F096Cu;
    SET_GPR_U32(ctx, 31, 0x1F0974u);
    ctx->pc = 0x1F0970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F096Cu;
            // 0x1f0970: 0xfca20000  sd          $v0, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DAC0u;
    if (runtime->hasFunction(0x21DAC0u)) {
        auto targetFn = runtime->lookupFunction(0x21DAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0974u; }
        if (ctx->pc != 0x1F0974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutPos__7CDC2MesFPi_0x21dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0974u; }
        if (ctx->pc != 0x1F0974u) { return; }
    }
    ctx->pc = 0x1F0974u;
label_1f0974:
    // 0x1f0974: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f0974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f0978:
    // 0x1f0978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f097c:
    // 0x1f097c: 0xae0217e4  sw          $v0, 0x17E4($s0)
    ctx->pc = 0x1f097cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 2));
label_1f0980:
    // 0x1f0980: 0xc0875b0  jal         func_21D6C0
label_1f0984:
    if (ctx->pc == 0x1F0984u) {
        ctx->pc = 0x1F0984u;
            // 0x1f0984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0988u;
        goto label_1f0988;
    }
    ctx->pc = 0x1F0980u;
    SET_GPR_U32(ctx, 31, 0x1F0988u);
    ctx->pc = 0x1F0984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0980u;
            // 0x1f0984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0988u; }
        if (ctx->pc != 0x1F0988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0988u; }
        if (ctx->pc != 0x1F0988u) { return; }
    }
    ctx->pc = 0x1F0988u;
label_1f0988:
    // 0x1f0988: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1f0988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1f098c:
    // 0x1f098c: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x1f098cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
label_1f0990:
    // 0x1f0990: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1f0990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1f0994:
    // 0x1f0994: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x1f0994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
label_1f0998:
    // 0x1f0998: 0xae001c34  sw          $zero, 0x1C34($s0)
    ctx->pc = 0x1f0998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7220), GPR_U32(ctx, 0));
label_1f099c:
    // 0x1f099c: 0xae001c38  sw          $zero, 0x1C38($s0)
    ctx->pc = 0x1f099cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7224), GPR_U32(ctx, 0));
label_1f09a0:
    // 0x1f09a0: 0xae001c3c  sw          $zero, 0x1C3C($s0)
    ctx->pc = 0x1f09a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7228), GPR_U32(ctx, 0));
label_1f09a4:
    // 0x1f09a4: 0x8f828f3c  lw          $v0, -0x70C4($gp)
    ctx->pc = 0x1f09a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938428)));
label_1f09a8:
    // 0x1f09a8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1f09a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1f09ac:
    // 0x1f09ac: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1f09acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1f09b0:
    // 0x1f09b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1f09b4:
    if (ctx->pc == 0x1F09B4u) {
        ctx->pc = 0x1F09B4u;
            // 0x1f09b4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x1F09B8u;
        goto label_1f09b8;
    }
    ctx->pc = 0x1F09B0u;
    {
        const bool branch_taken_0x1f09b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F09B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F09B0u;
            // 0x1f09b4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09b0) {
            ctx->pc = 0x1F09D0u;
            goto label_1f09d0;
        }
    }
    ctx->pc = 0x1F09B8u;
label_1f09b8:
    // 0x1f09b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1f09bc:
    if (ctx->pc == 0x1F09BCu) {
        ctx->pc = 0x1F09BCu;
            // 0x1f09bc: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->pc = 0x1F09C0u;
        goto label_1f09c0;
    }
    ctx->pc = 0x1F09B8u;
    {
        const bool branch_taken_0x1f09b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F09BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F09B8u;
            // 0x1f09bc: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09b8) {
            ctx->pc = 0x1F09D0u;
            goto label_1f09d0;
        }
    }
    ctx->pc = 0x1F09C0u;
label_1f09c0:
    // 0x1f09c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1f09c4:
    if (ctx->pc == 0x1F09C4u) {
        ctx->pc = 0x1F09C4u;
            // 0x1f09c4: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x1F09C8u;
        goto label_1f09c8;
    }
    ctx->pc = 0x1F09C0u;
    {
        const bool branch_taken_0x1f09c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F09C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F09C0u;
            // 0x1f09c4: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09c0) {
            ctx->pc = 0x1F09D0u;
            goto label_1f09d0;
        }
    }
    ctx->pc = 0x1F09C8u;
label_1f09c8:
    // 0x1f09c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1f09cc:
    if (ctx->pc == 0x1F09CCu) {
        ctx->pc = 0x1F09CCu;
            // 0x1f09cc: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1F09D0u;
        goto label_1f09d0;
    }
    ctx->pc = 0x1F09C8u;
    {
        const bool branch_taken_0x1f09c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F09C8u;
            // 0x1f09cc: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09c8) {
            ctx->pc = 0x1F09ECu;
            goto label_1f09ec;
        }
    }
    ctx->pc = 0x1F09D0u;
label_1f09d0:
    // 0x1f09d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f09d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f09d4:
    // 0x1f09d4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f09d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f09d8:
    // 0x1f09d8: 0xae030190  sw          $v1, 0x190($s0)
    ctx->pc = 0x1f09d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
label_1f09dc:
    // 0x1f09dc: 0xae030194  sw          $v1, 0x194($s0)
    ctx->pc = 0x1f09dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 3));
label_1f09e0:
    // 0x1f09e0: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x1f09e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
label_1f09e4:
    // 0x1f09e4: 0xa3808eb4  sb          $zero, -0x714C($gp)
    ctx->pc = 0x1f09e4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938292), (uint8_t)GPR_U32(ctx, 0));
label_1f09e8:
    // 0x1f09e8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1f09e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f09ec:
    // 0x1f09ec: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1f09ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1f09f0:
    // 0x1f09f0: 0xae030130  sw          $v1, 0x130($s0)
    ctx->pc = 0x1f09f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
label_1f09f4:
    // 0x1f09f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f09f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f09f8:
    // 0x1f09f8: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x1f09f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_1f09fc:
    // 0x1f09fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f09fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0a00:
    // 0x1f0a00: 0xc0875b0  jal         func_21D6C0
label_1f0a04:
    if (ctx->pc == 0x1F0A04u) {
        ctx->pc = 0x1F0A04u;
            // 0x1f0a04: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x1F0A08u;
        goto label_1f0a08;
    }
    ctx->pc = 0x1F0A00u;
    SET_GPR_U32(ctx, 31, 0x1F0A08u);
    ctx->pc = 0x1F0A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0A00u;
            // 0x1f0a04: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A08u; }
        if (ctx->pc != 0x1F0A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A08u; }
        if (ctx->pc != 0x1F0A08u) { return; }
    }
    ctx->pc = 0x1F0A08u;
label_1f0a08:
    // 0x1f0a08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f0a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f0a0c:
    // 0x1f0a0c: 0xc0877e0  jal         func_21DF80
label_1f0a10:
    if (ctx->pc == 0x1F0A10u) {
        ctx->pc = 0x1F0A10u;
            // 0x1f0a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A14u;
        goto label_1f0a14;
    }
    ctx->pc = 0x1F0A0Cu;
    SET_GPR_U32(ctx, 31, 0x1F0A14u);
    ctx->pc = 0x1F0A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0A0Cu;
            // 0x1f0a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A14u; }
        if (ctx->pc != 0x1F0A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A14u; }
        if (ctx->pc != 0x1F0A14u) { return; }
    }
    ctx->pc = 0x1F0A14u;
label_1f0a14:
    // 0x1f0a14: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1f0a18:
    // 0x1f0a18: 0x344217bc  ori         $v0, $v0, 0x17BC
    ctx->pc = 0x1f0a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6076);
label_1f0a1c:
    // 0x1f0a1c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1f0a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1f0a20:
    // 0x1f0a20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f0a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1f0a24:
    // 0x1f0a24: 0x8682011c  lh          $v0, 0x11C($s4)
    ctx->pc = 0x1f0a24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 284)));
label_1f0a28:
    // 0x1f0a28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f0a2c:
    if (ctx->pc == 0x1F0A2Cu) {
        ctx->pc = 0x1F0A2Cu;
            // 0x1f0a2c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1F0A30u;
        goto label_1f0a30;
    }
    ctx->pc = 0x1F0A28u;
    {
        const bool branch_taken_0x1f0a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0A28u;
            // 0x1f0a2c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a28) {
            ctx->pc = 0x1F0A3Cu;
            goto label_1f0a3c;
        }
    }
    ctx->pc = 0x1F0A30u;
label_1f0a30:
    // 0x1f0a30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0a34:
    // 0x1f0a34: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1f0a34u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
label_1f0a38:
    // 0x1f0a38: 0xac2217bc  sw          $v0, 0x17BC($at)
    ctx->pc = 0x1f0a38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6076), GPR_U32(ctx, 2));
label_1f0a3c:
    // 0x1f0a3c: 0x93828eb4  lbu         $v0, -0x714C($gp)
    ctx->pc = 0x1f0a3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938292)));
label_1f0a40:
    // 0x1f0a40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f0a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0a44:
    // 0x1f0a44: 0x1443005a  bne         $v0, $v1, . + 4 + (0x5A << 2)
label_1f0a48:
    if (ctx->pc == 0x1F0A48u) {
        ctx->pc = 0x1F0A48u;
            // 0x1f0a48: 0xa7808ef8  sh          $zero, -0x7108($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294938360), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1F0A4Cu;
        goto label_1f0a4c;
    }
    ctx->pc = 0x1F0A44u;
    {
        const bool branch_taken_0x1f0a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F0A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0A44u;
            // 0x1f0a48: 0xa7808ef8  sh          $zero, -0x7108($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294938360), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a44) {
            ctx->pc = 0x1F0BB0u;
            goto label_1f0bb0;
        }
    }
    ctx->pc = 0x1F0A4Cu;
label_1f0a4c:
    // 0x1f0a4c: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x1f0a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_1f0a50:
    // 0x1f0a50: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f0a54:
    // 0x1f0a54: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x1f0a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
label_1f0a58:
    // 0x1f0a58: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x1f0a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1f0a5c:
    // 0x1f0a5c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_1f0a60:
    if (ctx->pc == 0x1F0A60u) {
        ctx->pc = 0x1F0A60u;
            // 0x1f0a60: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x1F0A64u;
        goto label_1f0a64;
    }
    ctx->pc = 0x1F0A5Cu;
    {
        const bool branch_taken_0x1f0a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F0A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0A5Cu;
            // 0x1f0a60: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a5c) {
            ctx->pc = 0x1F0A70u;
            goto label_1f0a70;
        }
    }
    ctx->pc = 0x1F0A64u;
label_1f0a64:
    // 0x1f0a64: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1f0a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1f0a68:
    // 0x1f0a68: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x1f0a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_1f0a6c:
    // 0x1f0a6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f0a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1f0a70:
    // 0x1f0a70: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f0a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f0a74:
    // 0x1f0a74: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x1f0a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
label_1f0a78:
    // 0x1f0a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f0a7c:
    // 0x1f0a7c: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x1f0a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
label_1f0a80:
    // 0x1f0a80: 0xc0875b0  jal         func_21D6C0
label_1f0a84:
    if (ctx->pc == 0x1F0A84u) {
        ctx->pc = 0x1F0A84u;
            // 0x1f0a84: 0xae051b14  sw          $a1, 0x1B14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6932), GPR_U32(ctx, 5));
        ctx->pc = 0x1F0A88u;
        goto label_1f0a88;
    }
    ctx->pc = 0x1F0A80u;
    SET_GPR_U32(ctx, 31, 0x1F0A88u);
    ctx->pc = 0x1F0A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0A80u;
            // 0x1f0a84: 0xae051b14  sw          $a1, 0x1B14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6932), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A88u; }
        if (ctx->pc != 0x1F0A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A88u; }
        if (ctx->pc != 0x1F0A88u) { return; }
    }
    ctx->pc = 0x1F0A88u;
label_1f0a88:
    // 0x1f0a88: 0x8e820120  lw          $v0, 0x120($s4)
    ctx->pc = 0x1f0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
label_1f0a8c:
    // 0x1f0a8c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f0a90:
    // 0x1f0a90: 0x342117c8  ori         $at, $at, 0x17C8
    ctx->pc = 0x1f0a90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6088);
label_1f0a94:
    // 0x1f0a94: 0x2812021  addu        $a0, $s4, $at
    ctx->pc = 0x1f0a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
label_1f0a98:
    // 0x1f0a98: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f0a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_1f0a9c:
    // 0x1f0a9c: 0x3421bbd4  ori         $at, $at, 0xBBD4
    ctx->pc = 0x1f0a9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48084);
label_1f0aa0:
    // 0x1f0aa0: 0x80450028  lb          $a1, 0x28($v0)
    ctx->pc = 0x1f0aa0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_1f0aa4:
    // 0x1f0aa4: 0xc07b264  jal         func_1EC990
label_1f0aa8:
    if (ctx->pc == 0x1F0AA8u) {
        ctx->pc = 0x1F0AA8u;
            // 0x1f0aa8: 0x2813021  addu        $a2, $s4, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
        ctx->pc = 0x1F0AACu;
        goto label_1f0aac;
    }
    ctx->pc = 0x1F0AA4u;
    SET_GPR_U32(ctx, 31, 0x1F0AACu);
    ctx->pc = 0x1F0AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0AA4u;
            // 0x1f0aa8: 0x2813021  addu        $a2, $s4, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC990u;
    if (runtime->hasFunction(0x1EC990u)) {
        auto targetFn = runtime->lookupFunction(0x1EC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0AACu; }
        if (ctx->pc != 0x1F0AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckGeoramaMateria__FP22TRESURE_BOX_FLOOR_INFOiPi_0x1ec990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0AACu; }
        if (ctx->pc != 0x1F0AACu) { return; }
    }
    ctx->pc = 0x1F0AACu;
label_1f0aac:
    // 0x1f0aac: 0xa7828ef8  sh          $v0, -0x7108($gp)
    ctx->pc = 0x1f0aacu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938360), (uint16_t)GPR_U32(ctx, 2));
label_1f0ab0:
    // 0x1f0ab0: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x1f0ab0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_1f0ab4:
    // 0x1f0ab4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1f0ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1f0ab8:
    // 0x1f0ab8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1f0abc:
    if (ctx->pc == 0x1F0ABCu) {
        ctx->pc = 0x1F0AC0u;
        goto label_1f0ac0;
    }
    ctx->pc = 0x1F0AB8u;
    {
        const bool branch_taken_0x1f0ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ab8) {
            ctx->pc = 0x1F0AC4u;
            goto label_1f0ac4;
        }
    }
    ctx->pc = 0x1F0AC0u;
label_1f0ac0:
    // 0x1f0ac0: 0xa7808ef8  sh          $zero, -0x7108($gp)
    ctx->pc = 0x1f0ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938360), (uint16_t)GPR_U32(ctx, 0));
label_1f0ac4:
    // 0x1f0ac4: 0x87828ef8  lh          $v0, -0x7108($gp)
    ctx->pc = 0x1f0ac4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938360)));
label_1f0ac8:
    // 0x1f0ac8: 0x1c400013  bgtz        $v0, . + 4 + (0x13 << 2)
label_1f0acc:
    if (ctx->pc == 0x1F0ACCu) {
        ctx->pc = 0x1F0ACCu;
            // 0x1f0acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AD0u;
        goto label_1f0ad0;
    }
    ctx->pc = 0x1F0AC8u;
    {
        const bool branch_taken_0x1f0ac8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1F0ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0AC8u;
            // 0x1f0acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ac8) {
            ctx->pc = 0x1F0B18u;
            goto label_1f0b18;
        }
    }
    ctx->pc = 0x1F0AD0u;
label_1f0ad0:
    // 0x1f0ad0: 0x8f878784  lw          $a3, -0x787C($gp)
    ctx->pc = 0x1f0ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_1f0ad4:
    // 0x1f0ad4: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x1f0ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1f0ad8:
    // 0x1f0ad8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f0ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0adc:
    // 0x1f0adc: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x1f0adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
label_1f0ae0:
    // 0x1f0ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f0ae4:
    // 0x1f0ae4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1f0ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f0ae8:
    // 0x1f0ae8: 0xae031b94  sw          $v1, 0x1B94($s0)
    ctx->pc = 0x1f0ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7060), GPR_U32(ctx, 3));
label_1f0aec:
    // 0x1f0aec: 0x24e3ffce  addiu       $v1, $a3, -0x32
    ctx->pc = 0x1f0aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967246));
label_1f0af0:
    // 0x1f0af0: 0xae031b98  sw          $v1, 0x1B98($s0)
    ctx->pc = 0x1f0af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7064), GPR_U32(ctx, 3));
label_1f0af4:
    // 0x1f0af4: 0xae061c34  sw          $a2, 0x1C34($s0)
    ctx->pc = 0x1f0af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7220), GPR_U32(ctx, 6));
label_1f0af8:
    // 0x1f0af8: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x1f0af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_1f0afc:
    // 0x1f0afc: 0xae021b9c  sw          $v0, 0x1B9C($s0)
    ctx->pc = 0x1f0afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7068), GPR_U32(ctx, 2));
label_1f0b00:
    // 0x1f0b00: 0x2462ffce  addiu       $v0, $v1, -0x32
    ctx->pc = 0x1f0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
label_1f0b04:
    // 0x1f0b04: 0xae021ba0  sw          $v0, 0x1BA0($s0)
    ctx->pc = 0x1f0b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7072), GPR_U32(ctx, 2));
label_1f0b08:
    // 0x1f0b08: 0xc0877e0  jal         func_21DF80
label_1f0b0c:
    if (ctx->pc == 0x1F0B0Cu) {
        ctx->pc = 0x1F0B0Cu;
            // 0x1f0b0c: 0xae061c38  sw          $a2, 0x1C38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7224), GPR_U32(ctx, 6));
        ctx->pc = 0x1F0B10u;
        goto label_1f0b10;
    }
    ctx->pc = 0x1F0B08u;
    SET_GPR_U32(ctx, 31, 0x1F0B10u);
    ctx->pc = 0x1F0B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0B08u;
            // 0x1f0b0c: 0xae061c38  sw          $a2, 0x1C38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7224), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0B10u; }
        if (ctx->pc != 0x1F0B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0B10u; }
        if (ctx->pc != 0x1F0B10u) { return; }
    }
    ctx->pc = 0x1F0B10u;
label_1f0b10:
    // 0x1f0b10: 0x10000025  b           . + 4 + (0x25 << 2)
label_1f0b14:
    if (ctx->pc == 0x1F0B14u) {
        ctx->pc = 0x1F0B14u;
            // 0x1f0b14: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1F0B18u;
        goto label_1f0b18;
    }
    ctx->pc = 0x1F0B10u;
    {
        const bool branch_taken_0x1f0b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0B10u;
            // 0x1f0b14: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b10) {
            ctx->pc = 0x1F0BA8u;
            goto label_1f0ba8;
        }
    }
    ctx->pc = 0x1F0B18u;
label_1f0b18:
    // 0x1f0b18: 0xc0877e0  jal         func_21DF80
label_1f0b1c:
    if (ctx->pc == 0x1F0B1Cu) {
        ctx->pc = 0x1F0B1Cu;
            // 0x1f0b1c: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->pc = 0x1F0B20u;
        goto label_1f0b20;
    }
    ctx->pc = 0x1F0B18u;
    SET_GPR_U32(ctx, 31, 0x1F0B20u);
    ctx->pc = 0x1F0B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0B18u;
            // 0x1f0b1c: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0B20u; }
        if (ctx->pc != 0x1F0B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0B20u; }
        if (ctx->pc != 0x1F0B20u) { return; }
    }
    ctx->pc = 0x1F0B20u;
label_1f0b20:
    // 0x1f0b20: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x1f0b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_1f0b24:
    // 0x1f0b24: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1f0b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1f0b28:
    // 0x1f0b28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f0b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0b2c:
    // 0x1f0b2c: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x1f0b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
label_1f0b30:
    // 0x1f0b30: 0x2463ffba  addiu       $v1, $v1, -0x46
    ctx->pc = 0x1f0b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967226));
label_1f0b34:
    // 0x1f0b34: 0xae051b94  sw          $a1, 0x1B94($s0)
    ctx->pc = 0x1f0b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7060), GPR_U32(ctx, 5));
label_1f0b38:
    // 0x1f0b38: 0xae031b98  sw          $v1, 0x1B98($s0)
    ctx->pc = 0x1f0b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7064), GPR_U32(ctx, 3));
label_1f0b3c:
    // 0x1f0b3c: 0xae041c34  sw          $a0, 0x1C34($s0)
    ctx->pc = 0x1f0b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7220), GPR_U32(ctx, 4));
label_1f0b40:
    // 0x1f0b40: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x1f0b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_1f0b44:
    // 0x1f0b44: 0xae021b9c  sw          $v0, 0x1B9C($s0)
    ctx->pc = 0x1f0b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7068), GPR_U32(ctx, 2));
label_1f0b48:
    // 0x1f0b48: 0x2462ffce  addiu       $v0, $v1, -0x32
    ctx->pc = 0x1f0b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
label_1f0b4c:
    // 0x1f0b4c: 0xae021ba0  sw          $v0, 0x1BA0($s0)
    ctx->pc = 0x1f0b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7072), GPR_U32(ctx, 2));
label_1f0b50:
    // 0x1f0b50: 0xae041c38  sw          $a0, 0x1C38($s0)
    ctx->pc = 0x1f0b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7224), GPR_U32(ctx, 4));
label_1f0b54:
    // 0x1f0b54: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x1f0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_1f0b58:
    // 0x1f0b58: 0xae051ba4  sw          $a1, 0x1BA4($s0)
    ctx->pc = 0x1f0b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7076), GPR_U32(ctx, 5));
label_1f0b5c:
    // 0x1f0b5c: 0x2442ffd4  addiu       $v0, $v0, -0x2C
    ctx->pc = 0x1f0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967252));
label_1f0b60:
    // 0x1f0b60: 0xae021ba8  sw          $v0, 0x1BA8($s0)
    ctx->pc = 0x1f0b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7080), GPR_U32(ctx, 2));
label_1f0b64:
    // 0x1f0b64: 0xc07be14  jal         func_1EF850
label_1f0b68:
    if (ctx->pc == 0x1F0B68u) {
        ctx->pc = 0x1F0B68u;
            // 0x1f0b68: 0xae041c3c  sw          $a0, 0x1C3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7228), GPR_U32(ctx, 4));
        ctx->pc = 0x1F0B6Cu;
        goto label_1f0b6c;
    }
    ctx->pc = 0x1F0B64u;
    SET_GPR_U32(ctx, 31, 0x1F0B6Cu);
    ctx->pc = 0x1F0B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0B64u;
            // 0x1f0b68: 0xae041c3c  sw          $a0, 0x1C3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7228), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF850u;
    if (runtime->hasFunction(0x1EF850u)) {
        auto targetFn = runtime->lookupFunction(0x1EF850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0B6Cu; }
        if (ctx->pc != 0x1F0B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDngTreeMapFuncType__Fv_0x1ef850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0B6Cu; }
        if (ctx->pc != 0x1F0B6Cu) { return; }
    }
    ctx->pc = 0x1F0B6Cu;
label_1f0b6c:
    // 0x1f0b6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f0b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0b70:
    // 0x1f0b70: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
label_1f0b74:
    if (ctx->pc == 0x1F0B74u) {
        ctx->pc = 0x1F0B78u;
        goto label_1f0b78;
    }
    ctx->pc = 0x1F0B70u;
    {
        const bool branch_taken_0x1f0b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f0b70) {
            ctx->pc = 0x1F0BA4u;
            goto label_1f0ba4;
        }
    }
    ctx->pc = 0x1F0B78u;
label_1f0b78:
    // 0x1f0b78: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x1f0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_1f0b7c:
    // 0x1f0b7c: 0x24030208  addiu       $v1, $zero, 0x208
    ctx->pc = 0x1f0b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
label_1f0b80:
    // 0x1f0b80: 0x2442ffba  addiu       $v0, $v0, -0x46
    ctx->pc = 0x1f0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967226));
label_1f0b84:
    // 0x1f0b84: 0xae031b94  sw          $v1, 0x1B94($s0)
    ctx->pc = 0x1f0b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7060), GPR_U32(ctx, 3));
label_1f0b88:
    // 0x1f0b88: 0xae021b98  sw          $v0, 0x1B98($s0)
    ctx->pc = 0x1f0b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7064), GPR_U32(ctx, 2));
label_1f0b8c:
    // 0x1f0b8c: 0xae041c34  sw          $a0, 0x1C34($s0)
    ctx->pc = 0x1f0b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7220), GPR_U32(ctx, 4));
label_1f0b90:
    // 0x1f0b90: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x1f0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_1f0b94:
    // 0x1f0b94: 0xae031b9c  sw          $v1, 0x1B9C($s0)
    ctx->pc = 0x1f0b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7068), GPR_U32(ctx, 3));
label_1f0b98:
    // 0x1f0b98: 0x2442ffce  addiu       $v0, $v0, -0x32
    ctx->pc = 0x1f0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967246));
label_1f0b9c:
    // 0x1f0b9c: 0xae021ba0  sw          $v0, 0x1BA0($s0)
    ctx->pc = 0x1f0b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7072), GPR_U32(ctx, 2));
label_1f0ba0:
    // 0x1f0ba0: 0xae041c38  sw          $a0, 0x1C38($s0)
    ctx->pc = 0x1f0ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7224), GPR_U32(ctx, 4));
label_1f0ba4:
    // 0x1f0ba4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f0ba8:
    // 0x1f0ba8: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1f0ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
label_1f0bac:
    // 0x1f0bac: 0xac2017bc  sw          $zero, 0x17BC($at)
    ctx->pc = 0x1f0bacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6076), GPR_U32(ctx, 0));
label_1f0bb0:
    // 0x1f0bb0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f0bb4:
    // 0x1f0bb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0bb8:
    // 0x1f0bb8: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1f0bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
label_1f0bbc:
    // 0x1f0bbc: 0xac2017b4  sw          $zero, 0x17B4($at)
    ctx->pc = 0x1f0bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6068), GPR_U32(ctx, 0));
label_1f0bc0:
    // 0x1f0bc0: 0x10000110  b           . + 4 + (0x110 << 2)
label_1f0bc4:
    if (ctx->pc == 0x1F0BC4u) {
        ctx->pc = 0x1F0BC4u;
            // 0x1f0bc4: 0xa6820014  sh          $v0, 0x14($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1F0BC8u;
        goto label_1f0bc8;
    }
    ctx->pc = 0x1F0BC0u;
    {
        const bool branch_taken_0x1f0bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0BC0u;
            // 0x1f0bc4: 0xa6820014  sh          $v0, 0x14($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0bc0) {
            ctx->pc = 0x1F1004u;
            goto label_1f1004;
        }
    }
    ctx->pc = 0x1F0BC8u;
label_1f0bc8:
    // 0x1f0bc8: 0xc094274  jal         func_2509D0
label_1f0bcc:
    if (ctx->pc == 0x1F0BCCu) {
        ctx->pc = 0x1F0BD0u;
        goto label_1f0bd0;
    }
    ctx->pc = 0x1F0BC8u;
    SET_GPR_U32(ctx, 31, 0x1F0BD0u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0BD0u; }
        if (ctx->pc != 0x1F0BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0BD0u; }
        if (ctx->pc != 0x1F0BD0u) { return; }
    }
    ctx->pc = 0x1F0BD0u;
label_1f0bd0:
    // 0x1f0bd0: 0x8682011c  lh          $v0, 0x11C($s4)
    ctx->pc = 0x1f0bd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 284)));
label_1f0bd4:
    // 0x1f0bd4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1f0bd8:
    if (ctx->pc == 0x1F0BD8u) {
        ctx->pc = 0x1F0BDCu;
        goto label_1f0bdc;
    }
    ctx->pc = 0x1F0BD4u;
    {
        const bool branch_taken_0x1f0bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0bd4) {
            ctx->pc = 0x1F0C08u;
            goto label_1f0c08;
        }
    }
    ctx->pc = 0x1F0BDCu;
label_1f0bdc:
    // 0x1f0bdc: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x1f0bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_1f0be0:
    // 0x1f0be0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1f0be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_1f0be4:
    // 0x1f0be4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f0be4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_1f0be8:
    // 0x1f0be8: 0x8c224d9c  lw          $v0, 0x4D9C($at)
    ctx->pc = 0x1f0be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19868)));
label_1f0bec:
    // 0x1f0bec: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1f0becu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1f0bf0:
    // 0x1f0bf0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1f0bf4:
    if (ctx->pc == 0x1F0BF4u) {
        ctx->pc = 0x1F0BF4u;
            // 0x1f0bf4: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
        ctx->pc = 0x1F0BF8u;
        goto label_1f0bf8;
    }
    ctx->pc = 0x1F0BF0u;
    {
        const bool branch_taken_0x1f0bf0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F0BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0BF0u;
            // 0x1f0bf4: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0bf0) {
            ctx->pc = 0x1F0C00u;
            goto label_1f0c00;
        }
    }
    ctx->pc = 0x1F0BF8u;
label_1f0bf8:
    // 0x1f0bf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f0bfc:
    // 0x1f0bfc: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x1f0bfcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
label_1f0c00:
    // 0x1f0c00: 0xc067abc  jal         func_19EAF0
label_1f0c04:
    if (ctx->pc == 0x1F0C04u) {
        ctx->pc = 0x1F0C08u;
        goto label_1f0c08;
    }
    ctx->pc = 0x1F0C00u;
    SET_GPR_U32(ctx, 31, 0x1F0C08u);
    ctx->pc = 0x19EAF0u;
    if (runtime->hasFunction(0x19EAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19EAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0C08u; }
        if (ctx->pc != 0x1F0C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMoney__16CUserDataManagerFi_0x19eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0C08u; }
        if (ctx->pc != 0x1F0C08u) { return; }
    }
    ctx->pc = 0x1F0C08u;
label_1f0c08:
    // 0x1f0c08: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f0c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f0c0c:
    // 0x1f0c0c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f0c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f0c10:
    // 0x1f0c10: 0xac20d634  sw          $zero, -0x29CC($at)
    ctx->pc = 0x1f0c10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 0));
label_1f0c14:
    // 0x1f0c14: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f0c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f0c18:
    // 0x1f0c18: 0xac22d62c  sw          $v0, -0x29D4($at)
    ctx->pc = 0x1f0c18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
label_1f0c1c:
    // 0x1f0c1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0c20:
    // 0x1f0c20: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f0c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f0c24:
    // 0x1f0c24: 0xac22d630  sw          $v0, -0x29D0($at)
    ctx->pc = 0x1f0c24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
label_1f0c28:
    // 0x1f0c28: 0x8f828eb0  lw          $v0, -0x7150($gp)
    ctx->pc = 0x1f0c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
label_1f0c2c:
    // 0x1f0c2c: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1f0c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1f0c30:
    // 0x1f0c30: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f0c34:
    if (ctx->pc == 0x1F0C34u) {
        ctx->pc = 0x1F0C38u;
        goto label_1f0c38;
    }
    ctx->pc = 0x1F0C30u;
    {
        const bool branch_taken_0x1f0c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0c30) {
            ctx->pc = 0x1F0C60u;
            goto label_1f0c60;
        }
    }
    ctx->pc = 0x1F0C38u;
label_1f0c38:
    // 0x1f0c38: 0x86830118  lh          $v1, 0x118($s4)
    ctx->pc = 0x1f0c38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 280)));
label_1f0c3c:
    // 0x1f0c3c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f0c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f0c40:
    // 0x1f0c40: 0x8f8294b8  lw          $v0, -0x6B48($gp)
    ctx->pc = 0x1f0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939832)));
label_1f0c44:
    // 0x1f0c44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f0c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f0c48:
    // 0x1f0c48: 0x8f8394b8  lw          $v1, -0x6B48($gp)
    ctx->pc = 0x1f0c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939832)));
label_1f0c4c:
    // 0x1f0c4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f0c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f0c50:
    // 0x1f0c50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f0c54:
    // 0x1f0c54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f0c58:
    // 0x1f0c58: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1f0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1f0c5c:
    // 0x1f0c5c: 0xac22d634  sw          $v0, -0x29CC($at)
    ctx->pc = 0x1f0c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 2));
label_1f0c60:
    // 0x1f0c60: 0x8f838f3c  lw          $v1, -0x70C4($gp)
    ctx->pc = 0x1f0c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938428)));
label_1f0c64:
    // 0x1f0c64: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f0c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f0c68:
    // 0x1f0c68: 0x80620028  lb          $v0, 0x28($v1)
    ctx->pc = 0x1f0c68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
label_1f0c6c:
    // 0x1f0c6c: 0x24650028  addiu       $a1, $v1, 0x28
    ctx->pc = 0x1f0c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_1f0c70:
    // 0x1f0c70: 0xac22d638  sw          $v0, -0x29C8($at)
    ctx->pc = 0x1f0c70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956600), GPR_U32(ctx, 2));
label_1f0c74:
    // 0x1f0c74: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x1f0c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1f0c78:
    // 0x1f0c78: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1f0c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1f0c7c:
    // 0x1f0c7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1f0c80:
    if (ctx->pc == 0x1F0C80u) {
        ctx->pc = 0x1F0C80u;
            // 0x1f0c80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C84u;
        goto label_1f0c84;
    }
    ctx->pc = 0x1F0C7Cu;
    {
        const bool branch_taken_0x1f0c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0C7Cu;
            // 0x1f0c80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c7c) {
            ctx->pc = 0x1F0C90u;
            goto label_1f0c90;
        }
    }
    ctx->pc = 0x1F0C84u;
label_1f0c84:
    // 0x1f0c84: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1f0c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1f0c88:
    // 0x1f0c88: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1f0c8c:
    if (ctx->pc == 0x1F0C8Cu) {
        ctx->pc = 0x1F0C90u;
        goto label_1f0c90;
    }
    ctx->pc = 0x1F0C88u;
    {
        const bool branch_taken_0x1f0c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0c88) {
            ctx->pc = 0x1F0CDCu;
            goto label_1f0cdc;
        }
    }
    ctx->pc = 0x1F0C90u;
label_1f0c90:
    // 0x1f0c90: 0x8f828f28  lw          $v0, -0x70D8($gp)
    ctx->pc = 0x1f0c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
label_1f0c94:
    // 0x1f0c94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f0c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0c98:
    // 0x1f0c98: 0x84420118  lh          $v0, 0x118($v0)
    ctx->pc = 0x1f0c98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
label_1f0c9c:
    // 0x1f0c9c: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
label_1f0ca0:
    if (ctx->pc == 0x1F0CA0u) {
        ctx->pc = 0x1F0CA4u;
        goto label_1f0ca4;
    }
    ctx->pc = 0x1F0C9Cu;
    {
        const bool branch_taken_0x1f0c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f0c9c) {
            ctx->pc = 0x1F0CC8u;
            goto label_1f0cc8;
        }
    }
    ctx->pc = 0x1F0CA4u;
label_1f0ca4:
    // 0x1f0ca4: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1f0ca4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1f0ca8:
    // 0x1f0ca8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f0ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f0cac:
    // 0x1f0cac: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1f0cb0:
    if (ctx->pc == 0x1F0CB0u) {
        ctx->pc = 0x1F0CB4u;
        goto label_1f0cb4;
    }
    ctx->pc = 0x1F0CACu;
    {
        const bool branch_taken_0x1f0cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0cac) {
            ctx->pc = 0x1F0CC8u;
            goto label_1f0cc8;
        }
    }
    ctx->pc = 0x1F0CB4u;
label_1f0cb4:
    // 0x1f0cb4: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x1f0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_1f0cb8:
    // 0x1f0cb8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f0cbc:
    // 0x1f0cbc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f0cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1f0cc0:
    // 0x1f0cc0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f0cc4:
    if (ctx->pc == 0x1F0CC4u) {
        ctx->pc = 0x1F0CC4u;
            // 0x1f0cc4: 0xac249074  sw          $a0, -0x6F8C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294938740), GPR_U32(ctx, 4));
        ctx->pc = 0x1F0CC8u;
        goto label_1f0cc8;
    }
    ctx->pc = 0x1F0CC0u;
    {
        const bool branch_taken_0x1f0cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0CC0u;
            // 0x1f0cc4: 0xac249074  sw          $a0, -0x6F8C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294938740), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cc0) {
            ctx->pc = 0x1F0CCCu;
            goto label_1f0ccc;
        }
    }
    ctx->pc = 0x1F0CC8u;
label_1f0cc8:
    // 0x1f0cc8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f0cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0ccc:
    // 0x1f0ccc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f0cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f0cd0:
    // 0x1f0cd0: 0x8c25d638  lw          $a1, -0x29C8($at)
    ctx->pc = 0x1f0cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
label_1f0cd4:
    // 0x1f0cd4: 0xc0bdcfc  jal         func_2F73F0
label_1f0cd8:
    if (ctx->pc == 0x1F0CD8u) {
        ctx->pc = 0x1F0CD8u;
            // 0x1f0cd8: 0x8f8494b8  lw          $a0, -0x6B48($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939832)));
        ctx->pc = 0x1F0CDCu;
        goto label_1f0cdc;
    }
    ctx->pc = 0x1F0CD4u;
    SET_GPR_U32(ctx, 31, 0x1F0CDCu);
    ctx->pc = 0x1F0CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0CD4u;
            // 0x1f0cd8: 0x8f8494b8  lw          $a0, -0x6B48($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939832)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F73F0u;
    if (runtime->hasFunction(0x2F73F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F73F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0CDCu; }
        if (ctx->pc != 0x1F0CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFloorID__16CSaveDataDungeonFi_0x2f73f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0CDCu; }
        if (ctx->pc != 0x1F0CDCu) { return; }
    }
    ctx->pc = 0x1F0CDCu;
label_1f0cdc:
    // 0x1f0cdc: 0x8f828f28  lw          $v0, -0x70D8($gp)
    ctx->pc = 0x1f0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
label_1f0ce0:
    // 0x1f0ce0: 0x84420118  lh          $v0, 0x118($v0)
    ctx->pc = 0x1f0ce0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
label_1f0ce4:
    // 0x1f0ce4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1f0ce8:
    if (ctx->pc == 0x1F0CE8u) {
        ctx->pc = 0x1F0CE8u;
            // 0x1f0ce8: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x1F0CECu;
        goto label_1f0cec;
    }
    ctx->pc = 0x1F0CE4u;
    {
        const bool branch_taken_0x1f0ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0CE4u;
            // 0x1f0ce8: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ce4) {
            ctx->pc = 0x1F0D50u;
            goto label_1f0d50;
        }
    }
    ctx->pc = 0x1F0CECu;
label_1f0cec:
    // 0x1f0cec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f0cf0:
    // 0x1f0cf0: 0x8c23d638  lw          $v1, -0x29C8($at)
    ctx->pc = 0x1f0cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
label_1f0cf4:
    // 0x1f0cf4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1f0cf8:
    if (ctx->pc == 0x1F0CF8u) {
        ctx->pc = 0x1F0CFCu;
        goto label_1f0cfc;
    }
    ctx->pc = 0x1F0CF4u;
    {
        const bool branch_taken_0x1f0cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0cf4) {
            ctx->pc = 0x1F0D10u;
            goto label_1f0d10;
        }
    }
    ctx->pc = 0x1F0CFCu;
label_1f0cfc:
    // 0x1f0cfc: 0xc08cac4  jal         func_232B10
label_1f0d00:
    if (ctx->pc == 0x1F0D00u) {
        ctx->pc = 0x1F0D00u;
            // 0x1f0d00: 0x24040066  addiu       $a0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->pc = 0x1F0D04u;
        goto label_1f0d04;
    }
    ctx->pc = 0x1F0CFCu;
    SET_GPR_U32(ctx, 31, 0x1F0D04u);
    ctx->pc = 0x1F0D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0CFCu;
            // 0x1f0d00: 0x24040066  addiu       $a0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0D04u; }
        if (ctx->pc != 0x1F0D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0D04u; }
        if (ctx->pc != 0x1F0D04u) { return; }
    }
    ctx->pc = 0x1F0D04u;
label_1f0d04:
    // 0x1f0d04: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1f0d08:
    if (ctx->pc == 0x1F0D08u) {
        ctx->pc = 0x1F0D0Cu;
        goto label_1f0d0c;
    }
    ctx->pc = 0x1F0D04u;
    {
        const bool branch_taken_0x1f0d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0d04) {
            ctx->pc = 0x1F0D10u;
            goto label_1f0d10;
        }
    }
    ctx->pc = 0x1F0D0Cu;
label_1f0d0c:
    // 0x1f0d0c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f0d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0d10:
    // 0x1f0d10: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f0d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f0d14:
    // 0x1f0d14: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f0d18:
    // 0x1f0d18: 0x8c23d638  lw          $v1, -0x29C8($at)
    ctx->pc = 0x1f0d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
label_1f0d1c:
    // 0x1f0d1c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1f0d20:
    if (ctx->pc == 0x1F0D20u) {
        ctx->pc = 0x1F0D24u;
        goto label_1f0d24;
    }
    ctx->pc = 0x1F0D1Cu;
    {
        const bool branch_taken_0x1f0d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0d1c) {
            ctx->pc = 0x1F0D38u;
            goto label_1f0d38;
        }
    }
    ctx->pc = 0x1F0D24u;
label_1f0d24:
    // 0x1f0d24: 0xc08cac4  jal         func_232B10
label_1f0d28:
    if (ctx->pc == 0x1F0D28u) {
        ctx->pc = 0x1F0D28u;
            // 0x1f0d28: 0x240400c9  addiu       $a0, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->pc = 0x1F0D2Cu;
        goto label_1f0d2c;
    }
    ctx->pc = 0x1F0D24u;
    SET_GPR_U32(ctx, 31, 0x1F0D2Cu);
    ctx->pc = 0x1F0D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0D24u;
            // 0x1f0d28: 0x240400c9  addiu       $a0, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0D2Cu; }
        if (ctx->pc != 0x1F0D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0D2Cu; }
        if (ctx->pc != 0x1F0D2Cu) { return; }
    }
    ctx->pc = 0x1F0D2Cu;
label_1f0d2c:
    // 0x1f0d2c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1f0d30:
    if (ctx->pc == 0x1F0D30u) {
        ctx->pc = 0x1F0D34u;
        goto label_1f0d34;
    }
    ctx->pc = 0x1F0D2Cu;
    {
        const bool branch_taken_0x1f0d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0d2c) {
            ctx->pc = 0x1F0D38u;
            goto label_1f0d38;
        }
    }
    ctx->pc = 0x1F0D34u;
label_1f0d34:
    // 0x1f0d34: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f0d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0d38:
    // 0x1f0d38: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f0d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f0d3c:
    // 0x1f0d3c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f0d40:
    // 0x1f0d40: 0x8c23d638  lw          $v1, -0x29C8($at)
    ctx->pc = 0x1f0d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
label_1f0d44:
    // 0x1f0d44: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1f0d48:
    if (ctx->pc == 0x1F0D48u) {
        ctx->pc = 0x1F0D4Cu;
        goto label_1f0d4c;
    }
    ctx->pc = 0x1F0D44u;
    {
        const bool branch_taken_0x1f0d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0d44) {
            ctx->pc = 0x1F0D50u;
            goto label_1f0d50;
        }
    }
    ctx->pc = 0x1F0D4Cu;
label_1f0d4c:
    // 0x1f0d4c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f0d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0d50:
    // 0x1f0d50: 0x8f838f28  lw          $v1, -0x70D8($gp)
    ctx->pc = 0x1f0d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
label_1f0d54:
    // 0x1f0d54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0d58:
    // 0x1f0d58: 0x84630118  lh          $v1, 0x118($v1)
    ctx->pc = 0x1f0d58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
label_1f0d5c:
    // 0x1f0d5c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_1f0d60:
    if (ctx->pc == 0x1F0D60u) {
        ctx->pc = 0x1F0D60u;
            // 0x1f0d60: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x1F0D64u;
        goto label_1f0d64;
    }
    ctx->pc = 0x1F0D5Cu;
    {
        const bool branch_taken_0x1f0d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0D5Cu;
            // 0x1f0d60: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d5c) {
            ctx->pc = 0x1F0DA0u;
            goto label_1f0da0;
        }
    }
    ctx->pc = 0x1F0D64u;
label_1f0d64:
    // 0x1f0d64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f0d68:
    // 0x1f0d68: 0x8c23d638  lw          $v1, -0x29C8($at)
    ctx->pc = 0x1f0d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
label_1f0d6c:
    // 0x1f0d6c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1f0d70:
    if (ctx->pc == 0x1F0D70u) {
        ctx->pc = 0x1F0D74u;
        goto label_1f0d74;
    }
    ctx->pc = 0x1F0D6Cu;
    {
        const bool branch_taken_0x1f0d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0d6c) {
            ctx->pc = 0x1F0D88u;
            goto label_1f0d88;
        }
    }
    ctx->pc = 0x1F0D74u;
label_1f0d74:
    // 0x1f0d74: 0xc08cac4  jal         func_232B10
label_1f0d78:
    if (ctx->pc == 0x1F0D78u) {
        ctx->pc = 0x1F0D78u;
            // 0x1f0d78: 0x240400d4  addiu       $a0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->pc = 0x1F0D7Cu;
        goto label_1f0d7c;
    }
    ctx->pc = 0x1F0D74u;
    SET_GPR_U32(ctx, 31, 0x1F0D7Cu);
    ctx->pc = 0x1F0D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0D74u;
            // 0x1f0d78: 0x240400d4  addiu       $a0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0D7Cu; }
        if (ctx->pc != 0x1F0D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0D7Cu; }
        if (ctx->pc != 0x1F0D7Cu) { return; }
    }
    ctx->pc = 0x1F0D7Cu;
label_1f0d7c:
    // 0x1f0d7c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1f0d80:
    if (ctx->pc == 0x1F0D80u) {
        ctx->pc = 0x1F0D84u;
        goto label_1f0d84;
    }
    ctx->pc = 0x1F0D7Cu;
    {
        const bool branch_taken_0x1f0d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0d7c) {
            ctx->pc = 0x1F0D88u;
            goto label_1f0d88;
        }
    }
    ctx->pc = 0x1F0D84u;
label_1f0d84:
    // 0x1f0d84: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f0d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0d88:
    // 0x1f0d88: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f0d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f0d8c:
    // 0x1f0d8c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1f0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1f0d90:
    // 0x1f0d90: 0x8c23d638  lw          $v1, -0x29C8($at)
    ctx->pc = 0x1f0d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
label_1f0d94:
    // 0x1f0d94: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1f0d98:
    if (ctx->pc == 0x1F0D98u) {
        ctx->pc = 0x1F0D9Cu;
        goto label_1f0d9c;
    }
    ctx->pc = 0x1F0D94u;
    {
        const bool branch_taken_0x1f0d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0d94) {
            ctx->pc = 0x1F0DA0u;
            goto label_1f0da0;
        }
    }
    ctx->pc = 0x1F0D9Cu;
label_1f0d9c:
    // 0x1f0d9c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f0d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0da0:
    // 0x1f0da0: 0x8f828f28  lw          $v0, -0x70D8($gp)
    ctx->pc = 0x1f0da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
label_1f0da4:
    // 0x1f0da4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f0da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f0da8:
    // 0x1f0da8: 0x84420118  lh          $v0, 0x118($v0)
    ctx->pc = 0x1f0da8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
label_1f0dac:
    // 0x1f0dac: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
label_1f0db0:
    if (ctx->pc == 0x1F0DB0u) {
        ctx->pc = 0x1F0DB0u;
            // 0x1f0db0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x1F0DB4u;
        goto label_1f0db4;
    }
    ctx->pc = 0x1F0DACu;
    {
        const bool branch_taken_0x1f0dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F0DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0DACu;
            // 0x1f0db0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0dac) {
            ctx->pc = 0x1F0E14u;
            goto label_1f0e14;
        }
    }
    ctx->pc = 0x1F0DB4u;
label_1f0db4:
    // 0x1f0db4: 0x8c22d638  lw          $v0, -0x29C8($at)
    ctx->pc = 0x1f0db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
label_1f0db8:
    // 0x1f0db8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_1f0dbc:
    if (ctx->pc == 0x1F0DBCu) {
        ctx->pc = 0x1F0DC0u;
        goto label_1f0dc0;
    }
    ctx->pc = 0x1F0DB8u;
    {
        const bool branch_taken_0x1f0db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f0db8) {
            ctx->pc = 0x1F0DD4u;
            goto label_1f0dd4;
        }
    }
    ctx->pc = 0x1F0DC0u;
label_1f0dc0:
    // 0x1f0dc0: 0xc08cac4  jal         func_232B10
label_1f0dc4:
    if (ctx->pc == 0x1F0DC4u) {
        ctx->pc = 0x1F0DC4u;
            // 0x1f0dc4: 0x24040133  addiu       $a0, $zero, 0x133 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 307));
        ctx->pc = 0x1F0DC8u;
        goto label_1f0dc8;
    }
    ctx->pc = 0x1F0DC0u;
    SET_GPR_U32(ctx, 31, 0x1F0DC8u);
    ctx->pc = 0x1F0DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0DC0u;
            // 0x1f0dc4: 0x24040133  addiu       $a0, $zero, 0x133 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 307));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0DC8u; }
        if (ctx->pc != 0x1F0DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0DC8u; }
        if (ctx->pc != 0x1F0DC8u) { return; }
    }
    ctx->pc = 0x1F0DC8u;
label_1f0dc8:
    // 0x1f0dc8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1f0dcc:
    if (ctx->pc == 0x1F0DCCu) {
        ctx->pc = 0x1F0DD0u;
        goto label_1f0dd0;
    }
    ctx->pc = 0x1F0DC8u;
    {
        const bool branch_taken_0x1f0dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0dc8) {
            ctx->pc = 0x1F0DD4u;
            goto label_1f0dd4;
        }
    }
    ctx->pc = 0x1F0DD0u;
label_1f0dd0:
    // 0x1f0dd0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f0dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0dd4:
    // 0x1f0dd4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f0dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f0dd8:
    // 0x1f0dd8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1f0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1f0ddc:
    // 0x1f0ddc: 0x8c23d638  lw          $v1, -0x29C8($at)
    ctx->pc = 0x1f0ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
label_1f0de0:
    // 0x1f0de0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1f0de4:
    if (ctx->pc == 0x1F0DE4u) {
        ctx->pc = 0x1F0DE8u;
        goto label_1f0de8;
    }
    ctx->pc = 0x1F0DE0u;
    {
        const bool branch_taken_0x1f0de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0de0) {
            ctx->pc = 0x1F0DFCu;
            goto label_1f0dfc;
        }
    }
    ctx->pc = 0x1F0DE8u;
label_1f0de8:
    // 0x1f0de8: 0xc08cac4  jal         func_232B10
label_1f0dec:
    if (ctx->pc == 0x1F0DECu) {
        ctx->pc = 0x1F0DECu;
            // 0x1f0dec: 0x24040158  addiu       $a0, $zero, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
        ctx->pc = 0x1F0DF0u;
        goto label_1f0df0;
    }
    ctx->pc = 0x1F0DE8u;
    SET_GPR_U32(ctx, 31, 0x1F0DF0u);
    ctx->pc = 0x1F0DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0DE8u;
            // 0x1f0dec: 0x24040158  addiu       $a0, $zero, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0DF0u; }
        if (ctx->pc != 0x1F0DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0DF0u; }
        if (ctx->pc != 0x1F0DF0u) { return; }
    }
    ctx->pc = 0x1F0DF0u;
label_1f0df0:
    // 0x1f0df0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1f0df4:
    if (ctx->pc == 0x1F0DF4u) {
        ctx->pc = 0x1F0DF8u;
        goto label_1f0df8;
    }
    ctx->pc = 0x1F0DF0u;
    {
        const bool branch_taken_0x1f0df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0df0) {
            ctx->pc = 0x1F0DFCu;
            goto label_1f0dfc;
        }
    }
    ctx->pc = 0x1F0DF8u;
label_1f0df8:
    // 0x1f0df8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f0df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0dfc:
    // 0x1f0dfc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f0dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f0e00:
    // 0x1f0e00: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1f0e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1f0e04:
    // 0x1f0e04: 0x8c23d638  lw          $v1, -0x29C8($at)
    ctx->pc = 0x1f0e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
label_1f0e08:
    // 0x1f0e08: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1f0e0c:
    if (ctx->pc == 0x1F0E0Cu) {
        ctx->pc = 0x1F0E10u;
        goto label_1f0e10;
    }
    ctx->pc = 0x1F0E08u;
    {
        const bool branch_taken_0x1f0e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0e08) {
            ctx->pc = 0x1F0E14u;
            goto label_1f0e14;
        }
    }
    ctx->pc = 0x1F0E10u;
label_1f0e10:
    // 0x1f0e10: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f0e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0e14:
    // 0x1f0e14: 0x8f838f28  lw          $v1, -0x70D8($gp)
    ctx->pc = 0x1f0e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
label_1f0e18:
    // 0x1f0e18: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f0e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f0e1c:
    // 0x1f0e1c: 0x84630118  lh          $v1, 0x118($v1)
    ctx->pc = 0x1f0e1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
label_1f0e20:
    // 0x1f0e20: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_1f0e24:
    if (ctx->pc == 0x1F0E24u) {
        ctx->pc = 0x1F0E24u;
            // 0x1f0e24: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x1F0E28u;
        goto label_1f0e28;
    }
    ctx->pc = 0x1F0E20u;
    {
        const bool branch_taken_0x1f0e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E20u;
            // 0x1f0e24: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e20) {
            ctx->pc = 0x1F0E8Cu;
            goto label_1f0e8c;
        }
    }
    ctx->pc = 0x1F0E28u;
label_1f0e28:
    // 0x1f0e28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f0e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f0e2c:
    // 0x1f0e2c: 0x8c23d638  lw          $v1, -0x29C8($at)
    ctx->pc = 0x1f0e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
label_1f0e30:
    // 0x1f0e30: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1f0e34:
    if (ctx->pc == 0x1F0E34u) {
        ctx->pc = 0x1F0E38u;
        goto label_1f0e38;
    }
    ctx->pc = 0x1F0E30u;
    {
        const bool branch_taken_0x1f0e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0e30) {
            ctx->pc = 0x1F0E4Cu;
            goto label_1f0e4c;
        }
    }
    ctx->pc = 0x1F0E38u;
label_1f0e38:
    // 0x1f0e38: 0xc08cac4  jal         func_232B10
label_1f0e3c:
    if (ctx->pc == 0x1F0E3Cu) {
        ctx->pc = 0x1F0E3Cu;
            // 0x1f0e3c: 0x24040196  addiu       $a0, $zero, 0x196 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 406));
        ctx->pc = 0x1F0E40u;
        goto label_1f0e40;
    }
    ctx->pc = 0x1F0E38u;
    SET_GPR_U32(ctx, 31, 0x1F0E40u);
    ctx->pc = 0x1F0E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E38u;
            // 0x1f0e3c: 0x24040196  addiu       $a0, $zero, 0x196 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 406));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0E40u; }
        if (ctx->pc != 0x1F0E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0E40u; }
        if (ctx->pc != 0x1F0E40u) { return; }
    }
    ctx->pc = 0x1F0E40u;
label_1f0e40:
    // 0x1f0e40: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1f0e44:
    if (ctx->pc == 0x1F0E44u) {
        ctx->pc = 0x1F0E48u;
        goto label_1f0e48;
    }
    ctx->pc = 0x1F0E40u;
    {
        const bool branch_taken_0x1f0e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0e40) {
            ctx->pc = 0x1F0E4Cu;
            goto label_1f0e4c;
        }
    }
    ctx->pc = 0x1F0E48u;
label_1f0e48:
    // 0x1f0e48: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f0e48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0e4c:
    // 0x1f0e4c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f0e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f0e50:
    // 0x1f0e50: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1f0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1f0e54:
    // 0x1f0e54: 0x8c23d638  lw          $v1, -0x29C8($at)
    ctx->pc = 0x1f0e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
label_1f0e58:
    // 0x1f0e58: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1f0e5c:
    if (ctx->pc == 0x1F0E5Cu) {
        ctx->pc = 0x1F0E60u;
        goto label_1f0e60;
    }
    ctx->pc = 0x1F0E58u;
    {
        const bool branch_taken_0x1f0e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0e58) {
            ctx->pc = 0x1F0E74u;
            goto label_1f0e74;
        }
    }
    ctx->pc = 0x1F0E60u;
label_1f0e60:
    // 0x1f0e60: 0xc08cac4  jal         func_232B10
label_1f0e64:
    if (ctx->pc == 0x1F0E64u) {
        ctx->pc = 0x1F0E64u;
            // 0x1f0e64: 0x240401a8  addiu       $a0, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->pc = 0x1F0E68u;
        goto label_1f0e68;
    }
    ctx->pc = 0x1F0E60u;
    SET_GPR_U32(ctx, 31, 0x1F0E68u);
    ctx->pc = 0x1F0E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E60u;
            // 0x1f0e64: 0x240401a8  addiu       $a0, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0E68u; }
        if (ctx->pc != 0x1F0E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0E68u; }
        if (ctx->pc != 0x1F0E68u) { return; }
    }
    ctx->pc = 0x1F0E68u;
label_1f0e68:
    // 0x1f0e68: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1f0e6c:
    if (ctx->pc == 0x1F0E6Cu) {
        ctx->pc = 0x1F0E70u;
        goto label_1f0e70;
    }
    ctx->pc = 0x1F0E68u;
    {
        const bool branch_taken_0x1f0e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0e68) {
            ctx->pc = 0x1F0E74u;
            goto label_1f0e74;
        }
    }
    ctx->pc = 0x1F0E70u;
label_1f0e70:
    // 0x1f0e70: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f0e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0e74:
    // 0x1f0e74: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f0e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f0e78:
    // 0x1f0e78: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1f0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1f0e7c:
    // 0x1f0e7c: 0x8c23d638  lw          $v1, -0x29C8($at)
    ctx->pc = 0x1f0e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
label_1f0e80:
    // 0x1f0e80: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1f0e84:
    if (ctx->pc == 0x1F0E84u) {
        ctx->pc = 0x1F0E88u;
        goto label_1f0e88;
    }
    ctx->pc = 0x1F0E80u;
    {
        const bool branch_taken_0x1f0e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0e80) {
            ctx->pc = 0x1F0E8Cu;
            goto label_1f0e8c;
        }
    }
    ctx->pc = 0x1F0E88u;
label_1f0e88:
    // 0x1f0e88: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f0e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0e8c:
    // 0x1f0e8c: 0x8f838f28  lw          $v1, -0x70D8($gp)
    ctx->pc = 0x1f0e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
label_1f0e90:
    // 0x1f0e90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f0e94:
    // 0x1f0e94: 0x84640118  lh          $a0, 0x118($v1)
    ctx->pc = 0x1f0e94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
label_1f0e98:
    // 0x1f0e98: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1f0e9c:
    if (ctx->pc == 0x1F0E9Cu) {
        ctx->pc = 0x1F0E9Cu;
            // 0x1f0e9c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1F0EA0u;
        goto label_1f0ea0;
    }
    ctx->pc = 0x1F0E98u;
    {
        const bool branch_taken_0x1f0e98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E98u;
            // 0x1f0e9c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e98) {
            ctx->pc = 0x1F0EBCu;
            goto label_1f0ebc;
        }
    }
    ctx->pc = 0x1F0EA0u;
label_1f0ea0:
    // 0x1f0ea0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f0ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f0ea4:
    // 0x1f0ea4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1f0ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1f0ea8:
    // 0x1f0ea8: 0x8c23d638  lw          $v1, -0x29C8($at)
    ctx->pc = 0x1f0ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
label_1f0eac:
    // 0x1f0eac: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1f0eb0:
    if (ctx->pc == 0x1F0EB0u) {
        ctx->pc = 0x1F0EB4u;
        goto label_1f0eb4;
    }
    ctx->pc = 0x1F0EACu;
    {
        const bool branch_taken_0x1f0eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0eac) {
            ctx->pc = 0x1F0EB8u;
            goto label_1f0eb8;
        }
    }
    ctx->pc = 0x1F0EB4u;
label_1f0eb4:
    // 0x1f0eb4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f0eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0eb8:
    // 0x1f0eb8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f0ebc:
    // 0x1f0ebc: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1f0ec0:
    if (ctx->pc == 0x1F0EC0u) {
        ctx->pc = 0x1F0EC0u;
            // 0x1f0ec0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1F0EC4u;
        goto label_1f0ec4;
    }
    ctx->pc = 0x1F0EBCu;
    {
        const bool branch_taken_0x1f0ebc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0EBCu;
            // 0x1f0ec0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ebc) {
            ctx->pc = 0x1F0EE0u;
            goto label_1f0ee0;
        }
    }
    ctx->pc = 0x1F0EC4u;
label_1f0ec4:
    // 0x1f0ec4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f0ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f0ec8:
    // 0x1f0ec8: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1f0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1f0ecc:
    // 0x1f0ecc: 0x8c23d638  lw          $v1, -0x29C8($at)
    ctx->pc = 0x1f0eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
label_1f0ed0:
    // 0x1f0ed0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1f0ed4:
    if (ctx->pc == 0x1F0ED4u) {
        ctx->pc = 0x1F0ED8u;
        goto label_1f0ed8;
    }
    ctx->pc = 0x1F0ED0u;
    {
        const bool branch_taken_0x1f0ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0ed0) {
            ctx->pc = 0x1F0EDCu;
            goto label_1f0edc;
        }
    }
    ctx->pc = 0x1F0ED8u;
label_1f0ed8:
    // 0x1f0ed8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f0ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0edc:
    // 0x1f0edc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f0ee0:
    // 0x1f0ee0: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_1f0ee4:
    if (ctx->pc == 0x1F0EE4u) {
        ctx->pc = 0x1F0EE4u;
            // 0x1f0ee4: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x1F0EE8u;
        goto label_1f0ee8;
    }
    ctx->pc = 0x1F0EE0u;
    {
        const bool branch_taken_0x1f0ee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0EE0u;
            // 0x1f0ee4: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ee0) {
            ctx->pc = 0x1F0EFCu;
            goto label_1f0efc;
        }
    }
    ctx->pc = 0x1F0EE8u;
label_1f0ee8:
    // 0x1f0ee8: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1f0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_1f0eec:
    // 0x1f0eec: 0x8c23d638  lw          $v1, -0x29C8($at)
    ctx->pc = 0x1f0eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
label_1f0ef0:
    // 0x1f0ef0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1f0ef4:
    if (ctx->pc == 0x1F0EF4u) {
        ctx->pc = 0x1F0EF8u;
        goto label_1f0ef8;
    }
    ctx->pc = 0x1F0EF0u;
    {
        const bool branch_taken_0x1f0ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0ef0) {
            ctx->pc = 0x1F0EFCu;
            goto label_1f0efc;
        }
    }
    ctx->pc = 0x1F0EF8u;
label_1f0ef8:
    // 0x1f0ef8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f0ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0efc:
    // 0x1f0efc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1f0f00:
    if (ctx->pc == 0x1F0F00u) {
        ctx->pc = 0x1F0F04u;
        goto label_1f0f04;
    }
    ctx->pc = 0x1F0EFCu;
    {
        const bool branch_taken_0x1f0efc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0efc) {
            ctx->pc = 0x1F0F18u;
            goto label_1f0f18;
        }
    }
    ctx->pc = 0x1F0F04u;
label_1f0f04:
    // 0x1f0f04: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x1f0f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_1f0f08:
    // 0x1f0f08: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f0f0c:
    // 0x1f0f0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f0f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0f10:
    // 0x1f0f10: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f0f10u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1f0f14:
    // 0x1f0f14: 0xac23906c  sw          $v1, -0x6F94($at)
    ctx->pc = 0x1f0f14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938732), GPR_U32(ctx, 3));
label_1f0f18:
    // 0x1f0f18: 0xa680011a  sh          $zero, 0x11A($s4)
    ctx->pc = 0x1f0f18u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 282), (uint16_t)GPR_U32(ctx, 0));
label_1f0f1c:
    // 0x1f0f1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f0f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f0f20:
    // 0x1f0f20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f0f20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f0f24:
    // 0x1f0f24: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x1f0f24u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_1f0f28:
    // 0x1f0f28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f0f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f0f2c:
    // 0x1f0f2c: 0xc08e898  jal         func_23A260
label_1f0f30:
    if (ctx->pc == 0x1F0F30u) {
        ctx->pc = 0x1F0F30u;
            // 0x1f0f30: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1F0F34u;
        goto label_1f0f34;
    }
    ctx->pc = 0x1F0F2Cu;
    SET_GPR_U32(ctx, 31, 0x1F0F34u);
    ctx->pc = 0x1F0F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F2Cu;
            // 0x1f0f30: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F34u; }
        if (ctx->pc != 0x1F0F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F34u; }
        if (ctx->pc != 0x1F0F34u) { return; }
    }
    ctx->pc = 0x1F0F34u;
label_1f0f34:
    // 0x1f0f34: 0x10000033  b           . + 4 + (0x33 << 2)
label_1f0f38:
    if (ctx->pc == 0x1F0F38u) {
        ctx->pc = 0x1F0F3Cu;
        goto label_1f0f3c;
    }
    ctx->pc = 0x1F0F34u;
    {
        const bool branch_taken_0x1f0f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0f34) {
            ctx->pc = 0x1F1004u;
            goto label_1f1004;
        }
    }
    ctx->pc = 0x1F0F3Cu;
label_1f0f3c:
    // 0x1f0f3c: 0xa3808eb4  sb          $zero, -0x714C($gp)
    ctx->pc = 0x1f0f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938292), (uint8_t)GPR_U32(ctx, 0));
label_1f0f40:
    // 0x1f0f40: 0xa3848eb8  sb          $a0, -0x7148($gp)
    ctx->pc = 0x1f0f40u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938296), (uint8_t)GPR_U32(ctx, 4));
label_1f0f44:
    // 0x1f0f44: 0xa3848ef0  sb          $a0, -0x7110($gp)
    ctx->pc = 0x1f0f44u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938352), (uint8_t)GPR_U32(ctx, 4));
label_1f0f48:
    // 0x1f0f48: 0xa3808ef4  sb          $zero, -0x710C($gp)
    ctx->pc = 0x1f0f48u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938356), (uint8_t)GPR_U32(ctx, 0));
label_1f0f4c:
    // 0x1f0f4c: 0xc094274  jal         func_2509D0
label_1f0f50:
    if (ctx->pc == 0x1F0F50u) {
        ctx->pc = 0x1F0F50u;
            // 0x1f0f50: 0xaf808ed8  sw          $zero, -0x7128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938328), GPR_U32(ctx, 0));
        ctx->pc = 0x1F0F54u;
        goto label_1f0f54;
    }
    ctx->pc = 0x1F0F4Cu;
    SET_GPR_U32(ctx, 31, 0x1F0F54u);
    ctx->pc = 0x1F0F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F4Cu;
            // 0x1f0f50: 0xaf808ed8  sw          $zero, -0x7128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F54u; }
        if (ctx->pc != 0x1F0F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F54u; }
        if (ctx->pc != 0x1F0F54u) { return; }
    }
    ctx->pc = 0x1F0F54u;
label_1f0f54:
    // 0x1f0f54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f0f58:
    // 0x1f0f58: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1f0f5c:
    if (ctx->pc == 0x1F0F5Cu) {
        ctx->pc = 0x1F0F5Cu;
            // 0x1f0f5c: 0xa6820014  sh          $v0, 0x14($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1F0F60u;
        goto label_1f0f60;
    }
    ctx->pc = 0x1F0F58u;
    {
        const bool branch_taken_0x1f0f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F58u;
            // 0x1f0f5c: 0xa6820014  sh          $v0, 0x14($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f58) {
            ctx->pc = 0x1F1004u;
            goto label_1f1004;
        }
    }
    ctx->pc = 0x1F0F60u;
label_1f0f60:
    // 0x1f0f60: 0x87828ef8  lh          $v0, -0x7108($gp)
    ctx->pc = 0x1f0f60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938360)));
label_1f0f64:
    // 0x1f0f64: 0x2841000f  slti        $at, $v0, 0xF
    ctx->pc = 0x1f0f64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_1f0f68:
    // 0x1f0f68: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_1f0f6c:
    if (ctx->pc == 0x1F0F6Cu) {
        ctx->pc = 0x1F0F6Cu;
            // 0x1f0f6c: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1F0F70u;
        goto label_1f0f70;
    }
    ctx->pc = 0x1F0F68u;
    {
        const bool branch_taken_0x1f0f68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F68u;
            // 0x1f0f6c: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f68) {
            ctx->pc = 0x1F0F88u;
            goto label_1f0f88;
        }
    }
    ctx->pc = 0x1F0F70u;
label_1f0f70:
    // 0x1f0f70: 0x83828ef4  lb          $v0, -0x710C($gp)
    ctx->pc = 0x1f0f70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938356)));
label_1f0f74:
    // 0x1f0f74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1f0f78:
    if (ctx->pc == 0x1F0F78u) {
        ctx->pc = 0x1F0F7Cu;
        goto label_1f0f7c;
    }
    ctx->pc = 0x1F0F74u;
    {
        const bool branch_taken_0x1f0f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0f74) {
            ctx->pc = 0x1F0F88u;
            goto label_1f0f88;
        }
    }
    ctx->pc = 0x1F0F7Cu;
label_1f0f7c:
    // 0x1f0f7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f0f80:
    // 0x1f0f80: 0x10000020  b           . + 4 + (0x20 << 2)
label_1f0f84:
    if (ctx->pc == 0x1F0F84u) {
        ctx->pc = 0x1F0F84u;
            // 0x1f0f84: 0xa3828ef4  sb          $v0, -0x710C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938356), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1F0F88u;
        goto label_1f0f88;
    }
    ctx->pc = 0x1F0F80u;
    {
        const bool branch_taken_0x1f0f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F80u;
            // 0x1f0f84: 0xa3828ef4  sb          $v0, -0x710C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938356), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f80) {
            ctx->pc = 0x1F1004u;
            goto label_1f1004;
        }
    }
    ctx->pc = 0x1F0F88u;
label_1f0f88:
    // 0x1f0f88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0f8c:
    // 0x1f0f8c: 0xaf838ed8  sw          $v1, -0x7128($gp)
    ctx->pc = 0x1f0f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938328), GPR_U32(ctx, 3));
label_1f0f90:
    // 0x1f0f90: 0xa6820014  sh          $v0, 0x14($s4)
    ctx->pc = 0x1f0f90u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
label_1f0f94:
    // 0x1f0f94: 0xa3828eb4  sb          $v0, -0x714C($gp)
    ctx->pc = 0x1f0f94u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938292), (uint8_t)GPR_U32(ctx, 2));
label_1f0f98:
    // 0x1f0f98: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1f0f9c:
    if (ctx->pc == 0x1F0F9Cu) {
        ctx->pc = 0x1F0F9Cu;
            // 0x1f0f9c: 0xa3808ef0  sb          $zero, -0x7110($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938352), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1F0FA0u;
        goto label_1f0fa0;
    }
    ctx->pc = 0x1F0F98u;
    {
        const bool branch_taken_0x1f0f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F98u;
            // 0x1f0f9c: 0xa3808ef0  sb          $zero, -0x7110($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938352), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f98) {
            ctx->pc = 0x1F1004u;
            goto label_1f1004;
        }
    }
    ctx->pc = 0x1F0FA0u;
label_1f0fa0:
    // 0x1f0fa0: 0xc094274  jal         func_2509D0
label_1f0fa4:
    if (ctx->pc == 0x1F0FA4u) {
        ctx->pc = 0x1F0FA8u;
        goto label_1f0fa8;
    }
    ctx->pc = 0x1F0FA0u;
    SET_GPR_U32(ctx, 31, 0x1F0FA8u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0FA8u; }
        if (ctx->pc != 0x1F0FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0FA8u; }
        if (ctx->pc != 0x1F0FA8u) { return; }
    }
    ctx->pc = 0x1F0FA8u;
label_1f0fa8:
    // 0x1f0fa8: 0xa6800014  sh          $zero, 0x14($s4)
    ctx->pc = 0x1f0fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 0));
label_1f0fac:
    // 0x1f0fac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f0fb0:
    // 0x1f0fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0fb4:
    // 0x1f0fb4: 0xa3808eb4  sb          $zero, -0x714C($gp)
    ctx->pc = 0x1f0fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938292), (uint8_t)GPR_U32(ctx, 0));
label_1f0fb8:
    // 0x1f0fb8: 0xa3808eb8  sb          $zero, -0x7148($gp)
    ctx->pc = 0x1f0fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938296), (uint8_t)GPR_U32(ctx, 0));
label_1f0fbc:
    // 0x1f0fbc: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1f0fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
label_1f0fc0:
    // 0x1f0fc0: 0xac2217b4  sw          $v0, 0x17B4($at)
    ctx->pc = 0x1f0fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6068), GPR_U32(ctx, 2));
label_1f0fc4:
    // 0x1f0fc4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f0fc8:
    // 0x1f0fc8: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1f0fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
label_1f0fcc:
    // 0x1f0fcc: 0x1000000d  b           . + 4 + (0xD << 2)
label_1f0fd0:
    if (ctx->pc == 0x1F0FD0u) {
        ctx->pc = 0x1F0FD0u;
            // 0x1f0fd0: 0xac2017bc  sw          $zero, 0x17BC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6076), GPR_U32(ctx, 0));
        ctx->pc = 0x1F0FD4u;
        goto label_1f0fd4;
    }
    ctx->pc = 0x1F0FCCu;
    {
        const bool branch_taken_0x1f0fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0FCCu;
            // 0x1f0fd0: 0xac2017bc  sw          $zero, 0x17BC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6076), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0fcc) {
            ctx->pc = 0x1F1004u;
            goto label_1f1004;
        }
    }
    ctx->pc = 0x1F0FD4u;
label_1f0fd4:
    // 0x1f0fd4: 0xc094274  jal         func_2509D0
label_1f0fd8:
    if (ctx->pc == 0x1F0FD8u) {
        ctx->pc = 0x1F0FDCu;
        goto label_1f0fdc;
    }
    ctx->pc = 0x1F0FD4u;
    SET_GPR_U32(ctx, 31, 0x1F0FDCu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0FDCu; }
        if (ctx->pc != 0x1F0FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0FDCu; }
        if (ctx->pc != 0x1F0FDCu) { return; }
    }
    ctx->pc = 0x1F0FDCu;
label_1f0fdc:
    // 0x1f0fdc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f0fdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f0fe0:
    // 0x1f0fe0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f0fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f0fe4:
    // 0x1f0fe4: 0xc08e898  jal         func_23A260
label_1f0fe8:
    if (ctx->pc == 0x1F0FE8u) {
        ctx->pc = 0x1F0FE8u;
            // 0x1f0fe8: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1F0FECu;
        goto label_1f0fec;
    }
    ctx->pc = 0x1F0FE4u;
    SET_GPR_U32(ctx, 31, 0x1F0FECu);
    ctx->pc = 0x1F0FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0FE4u;
            // 0x1f0fe8: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0FECu; }
        if (ctx->pc != 0x1F0FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0FECu; }
        if (ctx->pc != 0x1F0FECu) { return; }
    }
    ctx->pc = 0x1F0FECu;
label_1f0fec:
    // 0x1f0fec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f0ff0:
    // 0x1f0ff0: 0xa680011a  sh          $zero, 0x11A($s4)
    ctx->pc = 0x1f0ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 282), (uint16_t)GPR_U32(ctx, 0));
label_1f0ff4:
    // 0x1f0ff4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f0ff8:
    // 0x1f0ff8: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1f0ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
label_1f0ffc:
    // 0x1f0ffc: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x1f0ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_1f1000:
    // 0x1f1000: 0xac2017b4  sw          $zero, 0x17B4($at)
    ctx->pc = 0x1f1000u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6068), GPR_U32(ctx, 0));
label_1f1004:
    // 0x1f1004: 0x8e840120  lw          $a0, 0x120($s4)
    ctx->pc = 0x1f1004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
label_1f1008:
    // 0x1f1008: 0x10800136  beqz        $a0, . + 4 + (0x136 << 2)
label_1f100c:
    if (ctx->pc == 0x1F100Cu) {
        ctx->pc = 0x1F1010u;
        goto label_1f1010;
    }
    ctx->pc = 0x1F1008u;
    {
        const bool branch_taken_0x1f1008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1008) {
            ctx->pc = 0x1F14E4u;
            goto label_1f14e4;
        }
    }
    ctx->pc = 0x1F1010u;
label_1f1010:
    // 0x1f1010: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1f1010u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1f1014:
    // 0x1f1014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1018:
    // 0x1f1018: 0x14620132  bne         $v1, $v0, . + 4 + (0x132 << 2)
label_1f101c:
    if (ctx->pc == 0x1F101Cu) {
        ctx->pc = 0x1F1020u;
        goto label_1f1020;
    }
    ctx->pc = 0x1F1018u;
    {
        const bool branch_taken_0x1f1018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f1018) {
            ctx->pc = 0x1F14E4u;
            goto label_1f14e4;
        }
    }
    ctx->pc = 0x1F1020u;
label_1f1020:
    // 0x1f1020: 0x80860028  lb          $a2, 0x28($a0)
    ctx->pc = 0x1f1020u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
label_1f1024:
    // 0x1f1024: 0x8f8494b8  lw          $a0, -0x6B48($gp)
    ctx->pc = 0x1f1024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939832)));
label_1f1028:
    // 0x1f1028: 0xc0bdc7c  jal         func_2F71F0
label_1f102c:
    if (ctx->pc == 0x1F102Cu) {
        ctx->pc = 0x1F102Cu;
            // 0x1f102c: 0x86850118  lh          $a1, 0x118($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 280)));
        ctx->pc = 0x1F1030u;
        goto label_1f1030;
    }
    ctx->pc = 0x1F1028u;
    SET_GPR_U32(ctx, 31, 0x1F1030u);
    ctx->pc = 0x1F102Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1028u;
            // 0x1f102c: 0x86850118  lh          $a1, 0x118($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1030u; }
        if (ctx->pc != 0x1F1030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1030u; }
        if (ctx->pc != 0x1F1030u) { return; }
    }
    ctx->pc = 0x1F1030u;
label_1f1030:
    // 0x1f1030: 0x12e0012c  beqz        $s7, . + 4 + (0x12C << 2)
label_1f1034:
    if (ctx->pc == 0x1F1034u) {
        ctx->pc = 0x1F1034u;
            // 0x1f1034: 0xaf828ed0  sw          $v0, -0x7130($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 2));
        ctx->pc = 0x1F1038u;
        goto label_1f1038;
    }
    ctx->pc = 0x1F1030u;
    {
        const bool branch_taken_0x1f1030 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1030u;
            // 0x1f1034: 0xaf828ed0  sw          $v0, -0x7130($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1030) {
            ctx->pc = 0x1F14E4u;
            goto label_1f14e4;
        }
    }
    ctx->pc = 0x1F1038u;
label_1f1038:
    // 0x1f1038: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1f1038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_1f103c:
    // 0x1f103c: 0x8e870120  lw          $a3, 0x120($s4)
    ctx->pc = 0x1f103cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
label_1f1040:
    // 0x1f1040: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x1f1040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
label_1f1044:
    // 0x1f1044: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1f1044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1f1048:
    // 0x1f1048: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x1f1048u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1f104c:
    // 0x1f104c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x1f104cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1f1050:
    // 0x1f1050: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x1f1050u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_1f1054:
    // 0x1f1054: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1f1054u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_1f1058:
    // 0x1f1058: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f1058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_1f105c:
    // 0x1f105c: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x1f105cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
label_1f1060:
    // 0x1f1060: 0x24428e30  addiu       $v0, $v0, -0x71D0
    ctx->pc = 0x1f1060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938160));
label_1f1064:
    // 0x1f1064: 0x86850118  lh          $a1, 0x118($s4)
    ctx->pc = 0x1f1064u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 280)));
label_1f1068:
    // 0x1f1068: 0x80e40028  lb          $a0, 0x28($a3)
    ctx->pc = 0x1f1068u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
label_1f106c:
    // 0x1f106c: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x1f106cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f1070:
    // 0x1f1070: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x1f1070u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1f1074:
    // 0x1f1074: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1f1074u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1f1078:
    // 0x1f1078: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1f1078u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f107c:
    // 0x1f107c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1f107cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1f1080:
    // 0x1f1080: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1f1080u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1f1084:
    // 0x1f1084: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f1084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f1088:
    // 0x1f1088: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1f1088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_1f108c:
    // 0x1f108c: 0x80e4003a  lb          $a0, 0x3A($a3)
    ctx->pc = 0x1f108cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 58)));
label_1f1090:
    // 0x1f1090: 0x24840064  addiu       $a0, $a0, 0x64
    ctx->pc = 0x1f1090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
label_1f1094:
    // 0x1f1094: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x1f1094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
label_1f1098:
    // 0x1f1098: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1f1098u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1f109c:
    // 0x1f109c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1f109cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1f10a0:
    // 0x1f10a0: 0x80e2003a  lb          $v0, 0x3A($a3)
    ctx->pc = 0x1f10a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 58)));
label_1f10a4:
    // 0x1f10a4: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_1f10a8:
    if (ctx->pc == 0x1F10A8u) {
        ctx->pc = 0x1F10A8u;
            // 0x1f10a8: 0x24f00020  addiu       $s0, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->pc = 0x1F10ACu;
        goto label_1f10ac;
    }
    ctx->pc = 0x1F10A4u;
    {
        const bool branch_taken_0x1f10a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F10A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F10A4u;
            // 0x1f10a8: 0x24f00020  addiu       $s0, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f10a4) {
            ctx->pc = 0x1F113Cu;
            goto label_1f113c;
        }
    }
    ctx->pc = 0x1F10ACu;
label_1f10ac:
    // 0x1f10ac: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x1f10acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1f10b0:
    // 0x1f10b0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1f10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_1f10b4:
    // 0x1f10b4: 0x34458889  ori         $a1, $v0, 0x8889
    ctx->pc = 0x1f10b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_1f10b8:
    // 0x1f10b8: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x1f10b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1f10bc:
    // 0x1f10bc: 0xdf828f48  ld          $v0, -0x70B8($gp)
    ctx->pc = 0x1f10bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1f10c0:
    // 0x1f10c0: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1f10c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1f10c4:
    // 0x1f10c4: 0xa70018  mult        $zero, $a1, $a3
    ctx->pc = 0x1f10c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f10c8:
    // 0x1f10c8: 0x727c2  srl         $a0, $a3, 31
    ctx->pc = 0x1f10c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_1f10cc:
    // 0x1f10cc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1f10ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1f10d0:
    // 0x1f10d0: 0x1010  mfhi        $v0
    ctx->pc = 0x1f10d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f10d4:
    // 0x1f10d4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1f10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f10d8:
    // 0x1f10d8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1f10d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f10dc:
    // 0x1f10dc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1f10dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f10e0:
    // 0x1f10e0: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x1f10e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f10e4:
    // 0x1f10e4: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x1f10e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1f10e8:
    // 0x1f10e8: 0x0  nop
    ctx->pc = 0x1f10e8u;
    // NOP
label_1f10ec:
    // 0x1f10ec: 0x1010  mfhi        $v0
    ctx->pc = 0x1f10ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f10f0:
    // 0x1f10f0: 0x86001a  div         $zero, $a0, $a2
    ctx->pc = 0x1f10f0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1f10f4:
    // 0x1f10f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f10f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f10f8:
    // 0x1f10f8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1f10f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f10fc:
    // 0x1f10fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f1100:
    // 0x1f1100: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x1f1100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_1f1104:
    // 0x1f1104: 0x1010  mfhi        $v0
    ctx->pc = 0x1f1104u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f1108:
    // 0x1f1108: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x1f1108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
label_1f110c:
    // 0x1f110c: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x1f110cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_1f1110:
    // 0x1f1110: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1f1114:
    if (ctx->pc == 0x1F1114u) {
        ctx->pc = 0x1F1114u;
            // 0x1f1114: 0x2402005b  addiu       $v0, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->pc = 0x1F1118u;
        goto label_1f1118;
    }
    ctx->pc = 0x1F1110u;
    {
        const bool branch_taken_0x1f1110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1110u;
            // 0x1f1114: 0x2402005b  addiu       $v0, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1110) {
            ctx->pc = 0x1F1124u;
            goto label_1f1124;
        }
    }
    ctx->pc = 0x1F1118u;
label_1f1118:
    // 0x1f1118: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1f1118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1f111c:
    // 0x1f111c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f1120:
    if (ctx->pc == 0x1F1120u) {
        ctx->pc = 0x1F1120u;
            // 0x1f1120: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->pc = 0x1F1124u;
        goto label_1f1124;
    }
    ctx->pc = 0x1F111Cu;
    {
        const bool branch_taken_0x1f111c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F111Cu;
            // 0x1f1120: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f111c) {
            ctx->pc = 0x1F1128u;
            goto label_1f1128;
        }
    }
    ctx->pc = 0x1F1124u;
label_1f1124:
    // 0x1f1124: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1f1124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_1f1128:
    // 0x1f1128: 0x3401af40  ori         $at, $zero, 0xAF40
    ctx->pc = 0x1f1128u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44864);
label_1f112c:
    // 0x1f112c: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1f112cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1f1130:
    // 0x1f1130: 0x2812021  addu        $a0, $s4, $at
    ctx->pc = 0x1f1130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
label_1f1134:
    // 0x1f1134: 0xc087778  jal         func_21DDE0
label_1f1138:
    if (ctx->pc == 0x1F1138u) {
        ctx->pc = 0x1F1138u;
            // 0x1f1138: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F113Cu;
        goto label_1f113c;
    }
    ctx->pc = 0x1F1134u;
    SET_GPR_U32(ctx, 31, 0x1F113Cu);
    ctx->pc = 0x1F1138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1134u;
            // 0x1f1138: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DDE0u;
    if (runtime->hasFunction(0x21DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F113Cu; }
        if (ctx->pc != 0x1F113Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNo__7CDC2MesFPii_0x21dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F113Cu; }
        if (ctx->pc != 0x1F113Cu) { return; }
    }
    ctx->pc = 0x1F113Cu;
label_1f113c:
    // 0x1f113c: 0x8203001a  lb          $v1, 0x1A($s0)
    ctx->pc = 0x1f113cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
label_1f1140:
    // 0x1f1140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1144:
    // 0x1f1144: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1f1148:
    if (ctx->pc == 0x1F1148u) {
        ctx->pc = 0x1F1148u;
            // 0x1f1148: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F114Cu;
        goto label_1f114c;
    }
    ctx->pc = 0x1F1144u;
    {
        const bool branch_taken_0x1f1144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1144u;
            // 0x1f1148: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1144) {
            ctx->pc = 0x1F1164u;
            goto label_1f1164;
        }
    }
    ctx->pc = 0x1F114Cu;
label_1f114c:
    // 0x1f114c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1f1150:
    if (ctx->pc == 0x1F1150u) {
        ctx->pc = 0x1F1150u;
            // 0x1f1150: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1F1154u;
        goto label_1f1154;
    }
    ctx->pc = 0x1F114Cu;
    {
        const bool branch_taken_0x1f114c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F114Cu;
            // 0x1f1150: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f114c) {
            ctx->pc = 0x1F1164u;
            goto label_1f1164;
        }
    }
    ctx->pc = 0x1F1154u;
label_1f1154:
    // 0x1f1154: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1f1158:
    if (ctx->pc == 0x1F1158u) {
        ctx->pc = 0x1F1158u;
            // 0x1f1158: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1F115Cu;
        goto label_1f115c;
    }
    ctx->pc = 0x1F1154u;
    {
        const bool branch_taken_0x1f1154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1154u;
            // 0x1f1158: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1154) {
            ctx->pc = 0x1F1164u;
            goto label_1f1164;
        }
    }
    ctx->pc = 0x1F115Cu;
label_1f115c:
    // 0x1f115c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1f1160:
    if (ctx->pc == 0x1F1160u) {
        ctx->pc = 0x1F1160u;
            // 0x1f1160: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1F1164u;
        goto label_1f1164;
    }
    ctx->pc = 0x1F115Cu;
    {
        const bool branch_taken_0x1f115c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F1160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F115Cu;
            // 0x1f1160: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f115c) {
            ctx->pc = 0x1F1174u;
            goto label_1f1174;
        }
    }
    ctx->pc = 0x1F1164u;
label_1f1164:
    // 0x1f1164: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1f1164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1f1168:
    // 0x1f1168: 0x24420065  addiu       $v0, $v0, 0x65
    ctx->pc = 0x1f1168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 101));
label_1f116c:
    // 0x1f116c: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1f116cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_1f1170:
    // 0x1f1170: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f1170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f1174:
    // 0x1f1174: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1f1178:
    if (ctx->pc == 0x1F1178u) {
        ctx->pc = 0x1F1178u;
            // 0x1f1178: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->pc = 0x1F117Cu;
        goto label_1f117c;
    }
    ctx->pc = 0x1F1174u;
    {
        const bool branch_taken_0x1f1174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F1178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1174u;
            // 0x1f1178: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1174) {
            ctx->pc = 0x1F1180u;
            goto label_1f1180;
        }
    }
    ctx->pc = 0x1F117Cu;
label_1f117c:
    // 0x1f117c: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1f117cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_1f1180:
    // 0x1f1180: 0x82030017  lb          $v1, 0x17($s0)
    ctx->pc = 0x1f1180u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
label_1f1184:
    // 0x1f1184: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1f1188:
    if (ctx->pc == 0x1F1188u) {
        ctx->pc = 0x1F1188u;
            // 0x1f1188: 0x3082a  slt         $at, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x1F118Cu;
        goto label_1f118c;
    }
    ctx->pc = 0x1F1184u;
    {
        const bool branch_taken_0x1f1184 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1F1188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1184u;
            // 0x1f1188: 0x3082a  slt         $at, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1184) {
            ctx->pc = 0x1F1194u;
            goto label_1f1194;
        }
    }
    ctx->pc = 0x1F118Cu;
label_1f118c:
    // 0x1f118c: 0x24020079  addiu       $v0, $zero, 0x79
    ctx->pc = 0x1f118cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_1f1190:
    // 0x1f1190: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x1f1190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_1f1194:
    // 0x1f1194: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1f1198:
    if (ctx->pc == 0x1F1198u) {
        ctx->pc = 0x1F1198u;
            // 0x1f1198: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x1F119Cu;
        goto label_1f119c;
    }
    ctx->pc = 0x1F1194u;
    {
        const bool branch_taken_0x1f1194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1194u;
            // 0x1f1198: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1194) {
            ctx->pc = 0x1F11A0u;
            goto label_1f11a0;
        }
    }
    ctx->pc = 0x1F119Cu;
label_1f119c:
    // 0x1f119c: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x1f119cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_1f11a0:
    // 0x1f11a0: 0x86050018  lh          $a1, 0x18($s0)
    ctx->pc = 0x1f11a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1f11a4:
    // 0x1f11a4: 0xc0877b8  jal         func_21DEE0
label_1f11a8:
    if (ctx->pc == 0x1F11A8u) {
        ctx->pc = 0x1F11A8u;
            // 0x1f11a8: 0x268469a0  addiu       $a0, $s4, 0x69A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27040));
        ctx->pc = 0x1F11ACu;
        goto label_1f11ac;
    }
    ctx->pc = 0x1F11A4u;
    SET_GPR_U32(ctx, 31, 0x1F11ACu);
    ctx->pc = 0x1F11A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F11A4u;
            // 0x1f11a8: 0x268469a0  addiu       $a0, $s4, 0x69A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F11ACu; }
        if (ctx->pc != 0x1F11ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F11ACu; }
        if (ctx->pc != 0x1F11ACu) { return; }
    }
    ctx->pc = 0x1F11ACu;
label_1f11ac:
    // 0x1f11ac: 0xc08cac4  jal         func_232B10
label_1f11b0:
    if (ctx->pc == 0x1F11B0u) {
        ctx->pc = 0x1F11B0u;
            // 0x1f11b0: 0x240400dc  addiu       $a0, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->pc = 0x1F11B4u;
        goto label_1f11b4;
    }
    ctx->pc = 0x1F11ACu;
    SET_GPR_U32(ctx, 31, 0x1F11B4u);
    ctx->pc = 0x1F11B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F11ACu;
            // 0x1f11b0: 0x240400dc  addiu       $a0, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F11B4u; }
        if (ctx->pc != 0x1F11B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F11B4u; }
        if (ctx->pc != 0x1F11B4u) { return; }
    }
    ctx->pc = 0x1F11B4u;
label_1f11b4:
    // 0x1f11b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1f11b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f11b8:
    // 0x1f11b8: 0x2404013d  addiu       $a0, $zero, 0x13D
    ctx->pc = 0x1f11b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 317));
label_1f11bc:
    // 0x1f11bc: 0xc08cac4  jal         func_232B10
label_1f11c0:
    if (ctx->pc == 0x1F11C0u) {
        ctx->pc = 0x1F11C0u;
            // 0x1f11c0: 0xa3828ec4  sb          $v0, -0x713C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938308), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1F11C4u;
        goto label_1f11c4;
    }
    ctx->pc = 0x1F11BCu;
    SET_GPR_U32(ctx, 31, 0x1F11C4u);
    ctx->pc = 0x1F11C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F11BCu;
            // 0x1f11c0: 0xa3828ec4  sb          $v0, -0x713C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938308), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F11C4u; }
        if (ctx->pc != 0x1F11C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F11C4u; }
        if (ctx->pc != 0x1F11C4u) { return; }
    }
    ctx->pc = 0x1F11C4u;
label_1f11c4:
    // 0x1f11c4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1f11c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f11c8:
    // 0x1f11c8: 0x93828ec4  lbu         $v0, -0x713C($gp)
    ctx->pc = 0x1f11c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938308)));
label_1f11cc:
    // 0x1f11cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1f11d0:
    if (ctx->pc == 0x1F11D0u) {
        ctx->pc = 0x1F11D0u;
            // 0x1f11d0: 0xa3838ec8  sb          $v1, -0x7138($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938312), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1F11D4u;
        goto label_1f11d4;
    }
    ctx->pc = 0x1F11CCu;
    {
        const bool branch_taken_0x1f11cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F11D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F11CCu;
            // 0x1f11d0: 0xa3838ec8  sb          $v1, -0x7138($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938312), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f11cc) {
            ctx->pc = 0x1F11DCu;
            goto label_1f11dc;
        }
    }
    ctx->pc = 0x1F11D4u;
label_1f11d4:
    // 0x1f11d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f11d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f11d8:
    // 0x1f11d8: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x1f11d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_1f11dc:
    // 0x1f11dc: 0x93828ec8  lbu         $v0, -0x7138($gp)
    ctx->pc = 0x1f11dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938312)));
label_1f11e0:
    // 0x1f11e0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1f11e4:
    if (ctx->pc == 0x1F11E4u) {
        ctx->pc = 0x1F11E4u;
            // 0x1f11e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F11E8u;
        goto label_1f11e8;
    }
    ctx->pc = 0x1F11E0u;
    {
        const bool branch_taken_0x1f11e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F11E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F11E0u;
            // 0x1f11e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f11e0) {
            ctx->pc = 0x1F11ECu;
            goto label_1f11ec;
        }
    }
    ctx->pc = 0x1F11E8u;
label_1f11e8:
    // 0x1f11e8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1f11e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1f11ec:
    // 0x1f11ec: 0xc7808178  lwc1        $f0, -0x7E88($gp)
    ctx->pc = 0x1f11ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f11f0:
    // 0x1f11f0: 0x27a201e8  addiu       $v0, $sp, 0x1E8
    ctx->pc = 0x1f11f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_1f11f4:
    // 0x1f11f4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f11f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1f11f8:
    // 0x1f11f8: 0x8f828ed0  lw          $v0, -0x7130($gp)
    ctx->pc = 0x1f11f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938320)));
label_1f11fc:
    // 0x1f11fc: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1f11fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_1f1200:
    // 0x1f1200: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1f1200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1f1204:
    // 0x1f1204: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f1208:
    if (ctx->pc == 0x1F1208u) {
        ctx->pc = 0x1F1208u;
            // 0x1f1208: 0x34018c70  ori         $at, $zero, 0x8C70 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35952);
        ctx->pc = 0x1F120Cu;
        goto label_1f120c;
    }
    ctx->pc = 0x1F1204u;
    {
        const bool branch_taken_0x1f1204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1204u;
            // 0x1f1208: 0x34018c70  ori         $at, $zero, 0x8C70 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35952);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1204) {
            ctx->pc = 0x1F1214u;
            goto label_1f1214;
        }
    }
    ctx->pc = 0x1F120Cu;
label_1f120c:
    // 0x1f120c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1f120cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1f1210:
    // 0x1f1210: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x1f1210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
label_1f1214:
    // 0x1f1214: 0x27a501e8  addiu       $a1, $sp, 0x1E8
    ctx->pc = 0x1f1214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_1f1218:
    // 0x1f1218: 0x2812021  addu        $a0, $s4, $at
    ctx->pc = 0x1f1218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
label_1f121c:
    // 0x1f121c: 0xc0876ec  jal         func_21DBB0
label_1f1220:
    if (ctx->pc == 0x1F1220u) {
        ctx->pc = 0x1F1220u;
            // 0x1f1220: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F1224u;
        goto label_1f1224;
    }
    ctx->pc = 0x1F121Cu;
    SET_GPR_U32(ctx, 31, 0x1F1224u);
    ctx->pc = 0x1F1220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F121Cu;
            // 0x1f1220: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1224u; }
        if (ctx->pc != 0x1F1224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1224u; }
        if (ctx->pc != 0x1F1224u) { return; }
    }
    ctx->pc = 0x1F1224u;
label_1f1224:
    // 0x1f1224: 0x8f828ed0  lw          $v0, -0x7130($gp)
    ctx->pc = 0x1f1224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938320)));
label_1f1228:
    // 0x1f1228: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1f1228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1f122c:
    // 0x1f122c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1f122cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_1f1230:
    // 0x1f1230: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1f1230u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_1f1234:
    // 0x1f1234: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1f1234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1f1238:
    // 0x1f1238: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f123c:
    if (ctx->pc == 0x1F123Cu) {
        ctx->pc = 0x1F123Cu;
            // 0x1f123c: 0x3401af40  ori         $at, $zero, 0xAF40 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44864);
        ctx->pc = 0x1F1240u;
        goto label_1f1240;
    }
    ctx->pc = 0x1F1238u;
    {
        const bool branch_taken_0x1f1238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F123Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1238u;
            // 0x1f123c: 0x3401af40  ori         $at, $zero, 0xAF40 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44864);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1238) {
            ctx->pc = 0x1F1248u;
            goto label_1f1248;
        }
    }
    ctx->pc = 0x1F1240u;
label_1f1240:
    // 0x1f1240: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1f1240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1f1244:
    // 0x1f1244: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1f1244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1f1248:
    // 0x1f1248: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1f1248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1f124c:
    // 0x1f124c: 0x2812021  addu        $a0, $s4, $at
    ctx->pc = 0x1f124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
label_1f1250:
    // 0x1f1250: 0xc0876ec  jal         func_21DBB0
label_1f1254:
    if (ctx->pc == 0x1F1254u) {
        ctx->pc = 0x1F1254u;
            // 0x1f1254: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F1258u;
        goto label_1f1258;
    }
    ctx->pc = 0x1F1250u;
    SET_GPR_U32(ctx, 31, 0x1F1258u);
    ctx->pc = 0x1F1254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1250u;
            // 0x1f1254: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1258u; }
        if (ctx->pc != 0x1F1258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1258u; }
        if (ctx->pc != 0x1F1258u) { return; }
    }
    ctx->pc = 0x1F1258u;
label_1f1258:
    // 0x1f1258: 0x8f828ed0  lw          $v0, -0x7130($gp)
    ctx->pc = 0x1f1258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938320)));
label_1f125c:
    // 0x1f125c: 0x3401d210  ori         $at, $zero, 0xD210
    ctx->pc = 0x1f125cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53776);
label_1f1260:
    // 0x1f1260: 0x94450010  lhu         $a1, 0x10($v0)
    ctx->pc = 0x1f1260u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1f1264:
    // 0x1f1264: 0xc0877b8  jal         func_21DEE0
label_1f1268:
    if (ctx->pc == 0x1F1268u) {
        ctx->pc = 0x1F1268u;
            // 0x1f1268: 0x2812021  addu        $a0, $s4, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
        ctx->pc = 0x1F126Cu;
        goto label_1f126c;
    }
    ctx->pc = 0x1F1264u;
    SET_GPR_U32(ctx, 31, 0x1F126Cu);
    ctx->pc = 0x1F1268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1264u;
            // 0x1f1268: 0x2812021  addu        $a0, $s4, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F126Cu; }
        if (ctx->pc != 0x1F126Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F126Cu; }
        if (ctx->pc != 0x1F126Cu) { return; }
    }
    ctx->pc = 0x1F126Cu;
label_1f126c:
    // 0x1f126c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1f126cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f1270:
    // 0x1f1270: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1f1270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_1f1274:
    // 0x1f1274: 0x8f888ed0  lw          $t0, -0x7130($gp)
    ctx->pc = 0x1f1274u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938320)));
label_1f1278:
    // 0x1f1278: 0x34448889  ori         $a0, $v0, 0x8889
    ctx->pc = 0x1f1278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_1f127c:
    // 0x1f127c: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x1f127cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f1280:
    // 0x1f1280: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x1f1280u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1f1284:
    // 0x1f1284: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x1f1284u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1f1288:
    // 0x1f1288: 0x1010  mfhi        $v0
    ctx->pc = 0x1f1288u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f128c:
    // 0x1f128c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f128cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f1290:
    // 0x1f1290: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1f1290u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f1294:
    // 0x1f1294: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
label_1f1298:
    if (ctx->pc == 0x1F1298u) {
        ctx->pc = 0x1F1298u;
            // 0x1f1298: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1F129Cu;
        goto label_1f129c;
    }
    ctx->pc = 0x1F1294u;
    {
        const bool branch_taken_0x1f1294 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1294u;
            // 0x1f1298: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1294) {
            ctx->pc = 0x1F12C4u;
            goto label_1f12c4;
        }
    }
    ctx->pc = 0x1F129Cu;
label_1f129c:
    // 0x1f129c: 0xe6082a  slt         $at, $a3, $a2
    ctx->pc = 0x1f129cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1f12a0:
    // 0x1f12a0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1f12a4:
    if (ctx->pc == 0x1F12A4u) {
        ctx->pc = 0x1F12A8u;
        goto label_1f12a8;
    }
    ctx->pc = 0x1F12A0u;
    {
        const bool branch_taken_0x1f12a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f12a0) {
            ctx->pc = 0x1F12C4u;
            goto label_1f12c4;
        }
    }
    ctx->pc = 0x1F12A8u;
label_1f12a8:
    // 0x1f12a8: 0x870018  mult        $zero, $a0, $a3
    ctx->pc = 0x1f12a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f12ac:
    // 0x1f12ac: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x1f12acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_1f12b0:
    // 0x1f12b0: 0x0  nop
    ctx->pc = 0x1f12b0u;
    // NOP
label_1f12b4:
    // 0x1f12b4: 0x1010  mfhi        $v0
    ctx->pc = 0x1f12b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f12b8:
    // 0x1f12b8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1f12b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f12bc:
    // 0x1f12bc: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1f12bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f12c0:
    // 0x1f12c0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1f12c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f12c4:
    // 0x1f12c4: 0x9502000e  lhu         $v0, 0xE($t0)
    ctx->pc = 0x1f12c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
label_1f12c8:
    // 0x1f12c8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1f12c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1f12cc:
    // 0x1f12cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1f12d0:
    if (ctx->pc == 0x1F12D0u) {
        ctx->pc = 0x1F12D0u;
            // 0x1f12d0: 0x3c028888  lui         $v0, 0x8888 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
        ctx->pc = 0x1F12D4u;
        goto label_1f12d4;
    }
    ctx->pc = 0x1F12CCu;
    {
        const bool branch_taken_0x1f12cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F12D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F12CCu;
            // 0x1f12d0: 0x3c028888  lui         $v0, 0x8888 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12cc) {
            ctx->pc = 0x1F12E0u;
            goto label_1f12e0;
        }
    }
    ctx->pc = 0x1F12D4u;
label_1f12d4:
    // 0x1f12d4: 0x2402009a  addiu       $v0, $zero, 0x9A
    ctx->pc = 0x1f12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_1f12d8:
    // 0x1f12d8: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x1f12d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_1f12dc:
    // 0x1f12dc: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1f12dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_1f12e0:
    // 0x1f12e0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1f12e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1f12e4:
    // 0x1f12e4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x1f12e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_1f12e8:
    // 0x1f12e8: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1f12e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1f12ec:
    // 0x1f12ec: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1f12ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f12f0:
    // 0x1f12f0: 0x0  nop
    ctx->pc = 0x1f12f0u;
    // NOP
label_1f12f4:
    // 0x1f12f4: 0x0  nop
    ctx->pc = 0x1f12f4u;
    // NOP
label_1f12f8:
    // 0x1f12f8: 0x1010  mfhi        $v0
    ctx->pc = 0x1f12f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f12fc:
    // 0x1f12fc: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x1f12fcu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1f1300:
    // 0x1f1300: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f1300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f1304:
    // 0x1f1304: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1f1304u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f1308:
    // 0x1f1308: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1f1308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f130c:
    // 0x1f130c: 0x2a210064  slti        $at, $s1, 0x64
    ctx->pc = 0x1f130cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
label_1f1310:
    // 0x1f1310: 0x9010  mfhi        $s2
    ctx->pc = 0x1f1310u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_1f1314:
    // 0x1f1314: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_1f1318:
    if (ctx->pc == 0x1F1318u) {
        ctx->pc = 0x1F1318u;
            // 0x1f1318: 0x3c026666  lui         $v0, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
        ctx->pc = 0x1F131Cu;
        goto label_1f131c;
    }
    ctx->pc = 0x1F1314u;
    {
        const bool branch_taken_0x1f1314 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1314u;
            // 0x1f1318: 0x3c026666  lui         $v0, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1314) {
            ctx->pc = 0x1F1334u;
            goto label_1f1334;
        }
    }
    ctx->pc = 0x1F131Cu;
label_1f131c:
    // 0x1f131c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f131cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1f1320:
    // 0x1f1320: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1f1320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f1324:
    // 0x1f1324: 0xc04a3dc  jal         func_128F70
label_1f1328:
    if (ctx->pc == 0x1F1328u) {
        ctx->pc = 0x1F1328u;
            // 0x1f1328: 0x24a588d8  addiu       $a1, $a1, -0x7728 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936792));
        ctx->pc = 0x1F132Cu;
        goto label_1f132c;
    }
    ctx->pc = 0x1F1324u;
    SET_GPR_U32(ctx, 31, 0x1F132Cu);
    ctx->pc = 0x1F1328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1324u;
            // 0x1f1328: 0x24a588d8  addiu       $a1, $a1, -0x7728 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F132Cu; }
        if (ctx->pc != 0x1F132Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F132Cu; }
        if (ctx->pc != 0x1F132Cu) { return; }
    }
    ctx->pc = 0x1F132Cu;
label_1f132c:
    // 0x1f132c: 0x10000043  b           . + 4 + (0x43 << 2)
label_1f1330:
    if (ctx->pc == 0x1F1330u) {
        ctx->pc = 0x1F1330u;
            // 0x1f1330: 0xc7808f50  lwc1        $f0, -0x70B0($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1F1334u;
        goto label_1f1334;
    }
    ctx->pc = 0x1F132Cu;
    {
        const bool branch_taken_0x1f132c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F132Cu;
            // 0x1f1330: 0xc7808f50  lwc1        $f0, -0x70B0($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f132c) {
            ctx->pc = 0x1F143Cu;
            goto label_1f143c;
        }
    }
    ctx->pc = 0x1F1334u;
label_1f1334:
    // 0x1f1334: 0x111fc2  srl         $v1, $s1, 31
    ctx->pc = 0x1f1334u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_1f1338:
    // 0x1f1338: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1f1338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_1f133c:
    // 0x1f133c: 0x510018  mult        $zero, $v0, $s1
    ctx->pc = 0x1f133cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f1340:
    // 0x1f1340: 0x0  nop
    ctx->pc = 0x1f1340u;
    // NOP
label_1f1344:
    // 0x1f1344: 0x0  nop
    ctx->pc = 0x1f1344u;
    // NOP
label_1f1348:
    // 0x1f1348: 0x1010  mfhi        $v0
    ctx->pc = 0x1f1348u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f134c:
    // 0x1f134c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1f134cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1f1350:
    // 0x1f1350: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1f1350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f1354:
    // 0x1f1354: 0x1c800006  bgtz        $a0, . + 4 + (0x6 << 2)
label_1f1358:
    if (ctx->pc == 0x1F1358u) {
        ctx->pc = 0x1F1358u;
            // 0x1f1358: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1F135Cu;
        goto label_1f135c;
    }
    ctx->pc = 0x1F1354u;
    {
        const bool branch_taken_0x1f1354 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1F1358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1354u;
            // 0x1f1358: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1354) {
            ctx->pc = 0x1F1370u;
            goto label_1f1370;
        }
    }
    ctx->pc = 0x1F135Cu;
label_1f135c:
    // 0x1f135c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1f135cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f1360:
    // 0x1f1360: 0xc04a3dc  jal         func_128F70
label_1f1364:
    if (ctx->pc == 0x1F1364u) {
        ctx->pc = 0x1F1364u;
            // 0x1f1364: 0x24a588e8  addiu       $a1, $a1, -0x7718 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936808));
        ctx->pc = 0x1F1368u;
        goto label_1f1368;
    }
    ctx->pc = 0x1F1360u;
    SET_GPR_U32(ctx, 31, 0x1F1368u);
    ctx->pc = 0x1F1364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1360u;
            // 0x1f1364: 0x24a588e8  addiu       $a1, $a1, -0x7718 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1368u; }
        if (ctx->pc != 0x1F1368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1368u; }
        if (ctx->pc != 0x1F1368u) { return; }
    }
    ctx->pc = 0x1F1368u;
label_1f1368:
    // 0x1f1368: 0x10000007  b           . + 4 + (0x7 << 2)
label_1f136c:
    if (ctx->pc == 0x1F136Cu) {
        ctx->pc = 0x1F136Cu;
            // 0x1f136c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x1F1370u;
        goto label_1f1370;
    }
    ctx->pc = 0x1F1368u;
    {
        const bool branch_taken_0x1f1368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F136Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1368u;
            // 0x1f136c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1368) {
            ctx->pc = 0x1F1388u;
            goto label_1f1388;
        }
    }
    ctx->pc = 0x1F1370u;
label_1f1370:
    // 0x1f1370: 0xc087380  jal         func_21CE00
label_1f1374:
    if (ctx->pc == 0x1F1374u) {
        ctx->pc = 0x1F1378u;
        goto label_1f1378;
    }
    ctx->pc = 0x1F1370u;
    SET_GPR_U32(ctx, 31, 0x1F1378u);
    ctx->pc = 0x21CE00u;
    if (runtime->hasFunction(0x21CE00u)) {
        auto targetFn = runtime->lookupFunction(0x21CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1378u; }
        if (ctx->pc != 0x1F1378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuBigNum__Fi_0x21ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1378u; }
        if (ctx->pc != 0x1F1378u) { return; }
    }
    ctx->pc = 0x1F1378u;
label_1f1378:
    // 0x1f1378: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f137c:
    // 0x1f137c: 0xc04a3dc  jal         func_128F70
label_1f1380:
    if (ctx->pc == 0x1F1380u) {
        ctx->pc = 0x1F1380u;
            // 0x1f1380: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1F1384u;
        goto label_1f1384;
    }
    ctx->pc = 0x1F137Cu;
    SET_GPR_U32(ctx, 31, 0x1F1384u);
    ctx->pc = 0x1F1380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F137Cu;
            // 0x1f1380: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1384u; }
        if (ctx->pc != 0x1F1384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1384u; }
        if (ctx->pc != 0x1F1384u) { return; }
    }
    ctx->pc = 0x1F1384u;
label_1f1384:
    // 0x1f1384: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1f1384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1f1388:
    // 0x1f1388: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x1f1388u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1f138c:
    // 0x1f138c: 0x0  nop
    ctx->pc = 0x1f138cu;
    // NOP
label_1f1390:
    // 0x1f1390: 0x0  nop
    ctx->pc = 0x1f1390u;
    // NOP
label_1f1394:
    // 0x1f1394: 0x2010  mfhi        $a0
    ctx->pc = 0x1f1394u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1f1398:
    // 0x1f1398: 0xc087380  jal         func_21CE00
label_1f139c:
    if (ctx->pc == 0x1F139Cu) {
        ctx->pc = 0x1F13A0u;
        goto label_1f13a0;
    }
    ctx->pc = 0x1F1398u;
    SET_GPR_U32(ctx, 31, 0x1F13A0u);
    ctx->pc = 0x21CE00u;
    if (runtime->hasFunction(0x21CE00u)) {
        auto targetFn = runtime->lookupFunction(0x21CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F13A0u; }
        if (ctx->pc != 0x1F13A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuBigNum__Fi_0x21ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F13A0u; }
        if (ctx->pc != 0x1F13A0u) { return; }
    }
    ctx->pc = 0x1F13A0u;
label_1f13a0:
    // 0x1f13a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f13a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f13a4:
    // 0x1f13a4: 0xc04a2da  jal         func_128B68
label_1f13a8:
    if (ctx->pc == 0x1F13A8u) {
        ctx->pc = 0x1F13A8u;
            // 0x1f13a8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1F13ACu;
        goto label_1f13ac;
    }
    ctx->pc = 0x1F13A4u;
    SET_GPR_U32(ctx, 31, 0x1F13ACu);
    ctx->pc = 0x1F13A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F13A4u;
            // 0x1f13a8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F13ACu; }
        if (ctx->pc != 0x1F13ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F13ACu; }
        if (ctx->pc != 0x1F13ACu) { return; }
    }
    ctx->pc = 0x1F13ACu;
label_1f13ac:
    // 0x1f13ac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f13acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1f13b0:
    // 0x1f13b0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1f13b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f13b4:
    // 0x1f13b4: 0xc04a2da  jal         func_128B68
label_1f13b8:
    if (ctx->pc == 0x1F13B8u) {
        ctx->pc = 0x1F13B8u;
            // 0x1f13b8: 0x24a588f0  addiu       $a1, $a1, -0x7710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936816));
        ctx->pc = 0x1F13BCu;
        goto label_1f13bc;
    }
    ctx->pc = 0x1F13B4u;
    SET_GPR_U32(ctx, 31, 0x1F13BCu);
    ctx->pc = 0x1F13B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F13B4u;
            // 0x1f13b8: 0x24a588f0  addiu       $a1, $a1, -0x7710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F13BCu; }
        if (ctx->pc != 0x1F13BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F13BCu; }
        if (ctx->pc != 0x1F13BCu) { return; }
    }
    ctx->pc = 0x1F13BCu;
label_1f13bc:
    // 0x1f13bc: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1f13bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_1f13c0:
    // 0x1f13c0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_1f13c4:
    // 0x1f13c4: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1f13c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_1f13c8:
    // 0x1f13c8: 0x520018  mult        $zero, $v0, $s2
    ctx->pc = 0x1f13c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f13cc:
    // 0x1f13cc: 0x0  nop
    ctx->pc = 0x1f13ccu;
    // NOP
label_1f13d0:
    // 0x1f13d0: 0x0  nop
    ctx->pc = 0x1f13d0u;
    // NOP
label_1f13d4:
    // 0x1f13d4: 0x1010  mfhi        $v0
    ctx->pc = 0x1f13d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f13d8:
    // 0x1f13d8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1f13d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1f13dc:
    // 0x1f13dc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1f13dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f13e0:
    // 0x1f13e0: 0x1c800006  bgtz        $a0, . + 4 + (0x6 << 2)
label_1f13e4:
    if (ctx->pc == 0x1F13E4u) {
        ctx->pc = 0x1F13E4u;
            // 0x1f13e4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1F13E8u;
        goto label_1f13e8;
    }
    ctx->pc = 0x1F13E0u;
    {
        const bool branch_taken_0x1f13e0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1F13E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F13E0u;
            // 0x1f13e4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13e0) {
            ctx->pc = 0x1F13FCu;
            goto label_1f13fc;
        }
    }
    ctx->pc = 0x1F13E8u;
label_1f13e8:
    // 0x1f13e8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1f13e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f13ec:
    // 0x1f13ec: 0xc04a2da  jal         func_128B68
label_1f13f0:
    if (ctx->pc == 0x1F13F0u) {
        ctx->pc = 0x1F13F0u;
            // 0x1f13f0: 0x24a588e8  addiu       $a1, $a1, -0x7718 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936808));
        ctx->pc = 0x1F13F4u;
        goto label_1f13f4;
    }
    ctx->pc = 0x1F13ECu;
    SET_GPR_U32(ctx, 31, 0x1F13F4u);
    ctx->pc = 0x1F13F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F13ECu;
            // 0x1f13f0: 0x24a588e8  addiu       $a1, $a1, -0x7718 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F13F4u; }
        if (ctx->pc != 0x1F13F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F13F4u; }
        if (ctx->pc != 0x1F13F4u) { return; }
    }
    ctx->pc = 0x1F13F4u;
label_1f13f4:
    // 0x1f13f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1f13f8:
    if (ctx->pc == 0x1F13F8u) {
        ctx->pc = 0x1F13F8u;
            // 0x1f13f8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x1F13FCu;
        goto label_1f13fc;
    }
    ctx->pc = 0x1F13F4u;
    {
        const bool branch_taken_0x1f13f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F13F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F13F4u;
            // 0x1f13f8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13f4) {
            ctx->pc = 0x1F1414u;
            goto label_1f1414;
        }
    }
    ctx->pc = 0x1F13FCu;
label_1f13fc:
    // 0x1f13fc: 0xc087380  jal         func_21CE00
label_1f1400:
    if (ctx->pc == 0x1F1400u) {
        ctx->pc = 0x1F1404u;
        goto label_1f1404;
    }
    ctx->pc = 0x1F13FCu;
    SET_GPR_U32(ctx, 31, 0x1F1404u);
    ctx->pc = 0x21CE00u;
    if (runtime->hasFunction(0x21CE00u)) {
        auto targetFn = runtime->lookupFunction(0x21CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1404u; }
        if (ctx->pc != 0x1F1404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuBigNum__Fi_0x21ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1404u; }
        if (ctx->pc != 0x1F1404u) { return; }
    }
    ctx->pc = 0x1F1404u;
label_1f1404:
    // 0x1f1404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f1408:
    // 0x1f1408: 0xc04a2da  jal         func_128B68
label_1f140c:
    if (ctx->pc == 0x1F140Cu) {
        ctx->pc = 0x1F140Cu;
            // 0x1f140c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1F1410u;
        goto label_1f1410;
    }
    ctx->pc = 0x1F1408u;
    SET_GPR_U32(ctx, 31, 0x1F1410u);
    ctx->pc = 0x1F140Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1408u;
            // 0x1f140c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1410u; }
        if (ctx->pc != 0x1F1410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1410u; }
        if (ctx->pc != 0x1F1410u) { return; }
    }
    ctx->pc = 0x1F1410u;
label_1f1410:
    // 0x1f1410: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1f1410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1f1414:
    // 0x1f1414: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x1f1414u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1f1418:
    // 0x1f1418: 0x0  nop
    ctx->pc = 0x1f1418u;
    // NOP
label_1f141c:
    // 0x1f141c: 0x0  nop
    ctx->pc = 0x1f141cu;
    // NOP
label_1f1420:
    // 0x1f1420: 0x2010  mfhi        $a0
    ctx->pc = 0x1f1420u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1f1424:
    // 0x1f1424: 0xc087380  jal         func_21CE00
label_1f1428:
    if (ctx->pc == 0x1F1428u) {
        ctx->pc = 0x1F142Cu;
        goto label_1f142c;
    }
    ctx->pc = 0x1F1424u;
    SET_GPR_U32(ctx, 31, 0x1F142Cu);
    ctx->pc = 0x21CE00u;
    if (runtime->hasFunction(0x21CE00u)) {
        auto targetFn = runtime->lookupFunction(0x21CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F142Cu; }
        if (ctx->pc != 0x1F142Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuBigNum__Fi_0x21ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F142Cu; }
        if (ctx->pc != 0x1F142Cu) { return; }
    }
    ctx->pc = 0x1F142Cu;
label_1f142c:
    // 0x1f142c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f142cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f1430:
    // 0x1f1430: 0xc04a2da  jal         func_128B68
label_1f1434:
    if (ctx->pc == 0x1F1434u) {
        ctx->pc = 0x1F1434u;
            // 0x1f1434: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1F1438u;
        goto label_1f1438;
    }
    ctx->pc = 0x1F1430u;
    SET_GPR_U32(ctx, 31, 0x1F1438u);
    ctx->pc = 0x1F1434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1430u;
            // 0x1f1434: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1438u; }
        if (ctx->pc != 0x1F1438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1438u; }
        if (ctx->pc != 0x1F1438u) { return; }
    }
    ctx->pc = 0x1F1438u;
label_1f1438:
    // 0x1f1438: 0xc7808f50  lwc1        $f0, -0x70B0($gp)
    ctx->pc = 0x1f1438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f143c:
    // 0x1f143c: 0x27a501ec  addiu       $a1, $sp, 0x1EC
    ctx->pc = 0x1f143cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
label_1f1440:
    // 0x1f1440: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1f1440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f1444:
    // 0x1f1444: 0x26842400  addiu       $a0, $s4, 0x2400
    ctx->pc = 0x1f1444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 9216));
label_1f1448:
    // 0x1f1448: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f1448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f144c:
    // 0x1f144c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1f144cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1f1450:
    // 0x1f1450: 0xc087720  jal         func_21DC80
label_1f1454:
    if (ctx->pc == 0x1F1454u) {
        ctx->pc = 0x1F1454u;
            // 0x1f1454: 0xafa201ec  sw          $v0, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
        ctx->pc = 0x1F1458u;
        goto label_1f1458;
    }
    ctx->pc = 0x1F1450u;
    SET_GPR_U32(ctx, 31, 0x1F1458u);
    ctx->pc = 0x1F1454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1450u;
            // 0x1f1454: 0xafa201ec  sw          $v0, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1458u; }
        if (ctx->pc != 0x1F1458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1458u; }
        if (ctx->pc != 0x1F1458u) { return; }
    }
    ctx->pc = 0x1F1458u;
label_1f1458:
    // 0x1f1458: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x1f1458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_1f145c:
    // 0x1f145c: 0x27a300ac  addiu       $v1, $sp, 0xAC
    ctx->pc = 0x1f145cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_1f1460:
    // 0x1f1460: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f1460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f1464:
    // 0x1f1464: 0x8f828ed0  lw          $v0, -0x7130($gp)
    ctx->pc = 0x1f1464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938320)));
label_1f1468:
    // 0x1f1468: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1f1468u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_1f146c:
    // 0x1f146c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1f146cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_1f1470:
    // 0x1f1470: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1f1474:
    if (ctx->pc == 0x1F1474u) {
        ctx->pc = 0x1F1474u;
            // 0x1f1474: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x1F1478u;
        goto label_1f1478;
    }
    ctx->pc = 0x1F1470u;
    {
        const bool branch_taken_0x1f1470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1470u;
            // 0x1f1474: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1470) {
            ctx->pc = 0x1F147Cu;
            goto label_1f147c;
        }
    }
    ctx->pc = 0x1F1478u;
label_1f1478:
    // 0x1f1478: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f1478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f147c:
    // 0x1f147c: 0x82020016  lb          $v0, 0x16($s0)
    ctx->pc = 0x1f147cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
label_1f1480:
    // 0x1f1480: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1f1484:
    if (ctx->pc == 0x1F1484u) {
        ctx->pc = 0x1F1484u;
            // 0x1f1484: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F1488u;
        goto label_1f1488;
    }
    ctx->pc = 0x1F1480u;
    {
        const bool branch_taken_0x1f1480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1480u;
            // 0x1f1484: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1480) {
            ctx->pc = 0x1F1490u;
            goto label_1f1490;
        }
    }
    ctx->pc = 0x1F1488u;
label_1f1488:
    // 0x1f1488: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f1488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f148c:
    // 0x1f148c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f148cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f1490:
    // 0x1f1490: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f1490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1494:
    // 0x1f1494: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f1494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1498:
    // 0x1f1498: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x1f1498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_1f149c:
    // 0x1f149c: 0x2929821  addu        $s3, $s4, $s2
    ctx->pc = 0x1f149cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1f14a0:
    // 0x1f14a0: 0x8c450090  lw          $a1, 0x90($v0)
    ctx->pc = 0x1f14a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_1f14a4:
    // 0x1f14a4: 0xc0877e0  jal         func_21DF80
label_1f14a8:
    if (ctx->pc == 0x1F14A8u) {
        ctx->pc = 0x1F14A8u;
            // 0x1f14a8: 0x26640130  addiu       $a0, $s3, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
        ctx->pc = 0x1F14ACu;
        goto label_1f14ac;
    }
    ctx->pc = 0x1F14A4u;
    SET_GPR_U32(ctx, 31, 0x1F14ACu);
    ctx->pc = 0x1F14A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F14A4u;
            // 0x1f14a8: 0x26640130  addiu       $a0, $s3, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F14ACu; }
        if (ctx->pc != 0x1F14ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F14ACu; }
        if (ctx->pc != 0x1F14ACu) { return; }
    }
    ctx->pc = 0x1F14ACu;
label_1f14ac:
    // 0x1f14ac: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x1f14acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_1f14b0:
    // 0x1f14b0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1f14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1f14b4:
    // 0x1f14b4: 0xae641cc4  sw          $a0, 0x1CC4($s3)
    ctx->pc = 0x1f14b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7364), GPR_U32(ctx, 4));
label_1f14b8:
    // 0x1f14b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f14b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f14bc:
    // 0x1f14bc: 0xae621cc8  sw          $v0, 0x1CC8($s3)
    ctx->pc = 0x1f14bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7368), GPR_U32(ctx, 2));
label_1f14c0:
    // 0x1f14c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f14c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f14c4:
    // 0x1f14c4: 0xae631d64  sw          $v1, 0x1D64($s3)
    ctx->pc = 0x1f14c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7524), GPR_U32(ctx, 3));
label_1f14c8:
    // 0x1f14c8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1f14c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1f14cc:
    // 0x1f14cc: 0xae641ccc  sw          $a0, 0x1CCC($s3)
    ctx->pc = 0x1f14ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7372), GPR_U32(ctx, 4));
label_1f14d0:
    // 0x1f14d0: 0x265222d0  addiu       $s2, $s2, 0x22D0
    ctx->pc = 0x1f14d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8912));
label_1f14d4:
    // 0x1f14d4: 0xae621cd0  sw          $v0, 0x1CD0($s3)
    ctx->pc = 0x1f14d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7376), GPR_U32(ctx, 2));
label_1f14d8:
    // 0x1f14d8: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1f14d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_1f14dc:
    // 0x1f14dc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1f14e0:
    if (ctx->pc == 0x1F14E0u) {
        ctx->pc = 0x1F14E0u;
            // 0x1f14e0: 0xae631d68  sw          $v1, 0x1D68($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 7528), GPR_U32(ctx, 3));
        ctx->pc = 0x1F14E4u;
        goto label_1f14e4;
    }
    ctx->pc = 0x1F14DCu;
    {
        const bool branch_taken_0x1f14dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F14E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F14DCu;
            // 0x1f14e0: 0xae631d68  sw          $v1, 0x1D68($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 7528), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f14dc) {
            ctx->pc = 0x1F1498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f1498;
        }
    }
    ctx->pc = 0x1F14E4u;
label_1f14e4:
    // 0x1f14e4: 0x0  nop
    ctx->pc = 0x1f14e4u;
    // NOP
label_1f14e8:
    // 0x1f14e8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1f14e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f14ec:
    // 0x1f14ec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f14ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1f14f0:
    // 0x1f14f0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f14f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f14f4:
    // 0x1f14f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f14f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f14f8:
    // 0x1f14f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f14f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f14fc:
    // 0x1f14fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f14fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f1500:
    // 0x1f1500: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f1500u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f1504:
    // 0x1f1504: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f1504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f1508:
    // 0x1f1508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f1508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f150c:
    // 0x1f150c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f150cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f1510:
    // 0x1f1510: 0x3e00008  jr          $ra
label_1f1514:
    if (ctx->pc == 0x1F1514u) {
        ctx->pc = 0x1F1514u;
            // 0x1f1514: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x1F1518u;
        goto label_fallthrough_0x1f1510;
    }
    ctx->pc = 0x1F1510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1510u;
            // 0x1f1514: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1f1510:
    ctx->pc = 0x1F1518u;
}
