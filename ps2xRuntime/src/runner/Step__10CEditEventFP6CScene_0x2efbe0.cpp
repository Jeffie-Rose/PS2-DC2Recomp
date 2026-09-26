#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__10CEditEventFP6CScene
// Address: 0x2efbe0 - 0x2f0b3c
void Step__10CEditEventFP6CScene_0x2efbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__10CEditEventFP6CScene_0x2efbe0");
#endif

    switch (ctx->pc) {
        case 0x2efbe0u: goto label_2efbe0;
        case 0x2efbe4u: goto label_2efbe4;
        case 0x2efbe8u: goto label_2efbe8;
        case 0x2efbecu: goto label_2efbec;
        case 0x2efbf0u: goto label_2efbf0;
        case 0x2efbf4u: goto label_2efbf4;
        case 0x2efbf8u: goto label_2efbf8;
        case 0x2efbfcu: goto label_2efbfc;
        case 0x2efc00u: goto label_2efc00;
        case 0x2efc04u: goto label_2efc04;
        case 0x2efc08u: goto label_2efc08;
        case 0x2efc0cu: goto label_2efc0c;
        case 0x2efc10u: goto label_2efc10;
        case 0x2efc14u: goto label_2efc14;
        case 0x2efc18u: goto label_2efc18;
        case 0x2efc1cu: goto label_2efc1c;
        case 0x2efc20u: goto label_2efc20;
        case 0x2efc24u: goto label_2efc24;
        case 0x2efc28u: goto label_2efc28;
        case 0x2efc2cu: goto label_2efc2c;
        case 0x2efc30u: goto label_2efc30;
        case 0x2efc34u: goto label_2efc34;
        case 0x2efc38u: goto label_2efc38;
        case 0x2efc3cu: goto label_2efc3c;
        case 0x2efc40u: goto label_2efc40;
        case 0x2efc44u: goto label_2efc44;
        case 0x2efc48u: goto label_2efc48;
        case 0x2efc4cu: goto label_2efc4c;
        case 0x2efc50u: goto label_2efc50;
        case 0x2efc54u: goto label_2efc54;
        case 0x2efc58u: goto label_2efc58;
        case 0x2efc5cu: goto label_2efc5c;
        case 0x2efc60u: goto label_2efc60;
        case 0x2efc64u: goto label_2efc64;
        case 0x2efc68u: goto label_2efc68;
        case 0x2efc6cu: goto label_2efc6c;
        case 0x2efc70u: goto label_2efc70;
        case 0x2efc74u: goto label_2efc74;
        case 0x2efc78u: goto label_2efc78;
        case 0x2efc7cu: goto label_2efc7c;
        case 0x2efc80u: goto label_2efc80;
        case 0x2efc84u: goto label_2efc84;
        case 0x2efc88u: goto label_2efc88;
        case 0x2efc8cu: goto label_2efc8c;
        case 0x2efc90u: goto label_2efc90;
        case 0x2efc94u: goto label_2efc94;
        case 0x2efc98u: goto label_2efc98;
        case 0x2efc9cu: goto label_2efc9c;
        case 0x2efca0u: goto label_2efca0;
        case 0x2efca4u: goto label_2efca4;
        case 0x2efca8u: goto label_2efca8;
        case 0x2efcacu: goto label_2efcac;
        case 0x2efcb0u: goto label_2efcb0;
        case 0x2efcb4u: goto label_2efcb4;
        case 0x2efcb8u: goto label_2efcb8;
        case 0x2efcbcu: goto label_2efcbc;
        case 0x2efcc0u: goto label_2efcc0;
        case 0x2efcc4u: goto label_2efcc4;
        case 0x2efcc8u: goto label_2efcc8;
        case 0x2efcccu: goto label_2efccc;
        case 0x2efcd0u: goto label_2efcd0;
        case 0x2efcd4u: goto label_2efcd4;
        case 0x2efcd8u: goto label_2efcd8;
        case 0x2efcdcu: goto label_2efcdc;
        case 0x2efce0u: goto label_2efce0;
        case 0x2efce4u: goto label_2efce4;
        case 0x2efce8u: goto label_2efce8;
        case 0x2efcecu: goto label_2efcec;
        case 0x2efcf0u: goto label_2efcf0;
        case 0x2efcf4u: goto label_2efcf4;
        case 0x2efcf8u: goto label_2efcf8;
        case 0x2efcfcu: goto label_2efcfc;
        case 0x2efd00u: goto label_2efd00;
        case 0x2efd04u: goto label_2efd04;
        case 0x2efd08u: goto label_2efd08;
        case 0x2efd0cu: goto label_2efd0c;
        case 0x2efd10u: goto label_2efd10;
        case 0x2efd14u: goto label_2efd14;
        case 0x2efd18u: goto label_2efd18;
        case 0x2efd1cu: goto label_2efd1c;
        case 0x2efd20u: goto label_2efd20;
        case 0x2efd24u: goto label_2efd24;
        case 0x2efd28u: goto label_2efd28;
        case 0x2efd2cu: goto label_2efd2c;
        case 0x2efd30u: goto label_2efd30;
        case 0x2efd34u: goto label_2efd34;
        case 0x2efd38u: goto label_2efd38;
        case 0x2efd3cu: goto label_2efd3c;
        case 0x2efd40u: goto label_2efd40;
        case 0x2efd44u: goto label_2efd44;
        case 0x2efd48u: goto label_2efd48;
        case 0x2efd4cu: goto label_2efd4c;
        case 0x2efd50u: goto label_2efd50;
        case 0x2efd54u: goto label_2efd54;
        case 0x2efd58u: goto label_2efd58;
        case 0x2efd5cu: goto label_2efd5c;
        case 0x2efd60u: goto label_2efd60;
        case 0x2efd64u: goto label_2efd64;
        case 0x2efd68u: goto label_2efd68;
        case 0x2efd6cu: goto label_2efd6c;
        case 0x2efd70u: goto label_2efd70;
        case 0x2efd74u: goto label_2efd74;
        case 0x2efd78u: goto label_2efd78;
        case 0x2efd7cu: goto label_2efd7c;
        case 0x2efd80u: goto label_2efd80;
        case 0x2efd84u: goto label_2efd84;
        case 0x2efd88u: goto label_2efd88;
        case 0x2efd8cu: goto label_2efd8c;
        case 0x2efd90u: goto label_2efd90;
        case 0x2efd94u: goto label_2efd94;
        case 0x2efd98u: goto label_2efd98;
        case 0x2efd9cu: goto label_2efd9c;
        case 0x2efda0u: goto label_2efda0;
        case 0x2efda4u: goto label_2efda4;
        case 0x2efda8u: goto label_2efda8;
        case 0x2efdacu: goto label_2efdac;
        case 0x2efdb0u: goto label_2efdb0;
        case 0x2efdb4u: goto label_2efdb4;
        case 0x2efdb8u: goto label_2efdb8;
        case 0x2efdbcu: goto label_2efdbc;
        case 0x2efdc0u: goto label_2efdc0;
        case 0x2efdc4u: goto label_2efdc4;
        case 0x2efdc8u: goto label_2efdc8;
        case 0x2efdccu: goto label_2efdcc;
        case 0x2efdd0u: goto label_2efdd0;
        case 0x2efdd4u: goto label_2efdd4;
        case 0x2efdd8u: goto label_2efdd8;
        case 0x2efddcu: goto label_2efddc;
        case 0x2efde0u: goto label_2efde0;
        case 0x2efde4u: goto label_2efde4;
        case 0x2efde8u: goto label_2efde8;
        case 0x2efdecu: goto label_2efdec;
        case 0x2efdf0u: goto label_2efdf0;
        case 0x2efdf4u: goto label_2efdf4;
        case 0x2efdf8u: goto label_2efdf8;
        case 0x2efdfcu: goto label_2efdfc;
        case 0x2efe00u: goto label_2efe00;
        case 0x2efe04u: goto label_2efe04;
        case 0x2efe08u: goto label_2efe08;
        case 0x2efe0cu: goto label_2efe0c;
        case 0x2efe10u: goto label_2efe10;
        case 0x2efe14u: goto label_2efe14;
        case 0x2efe18u: goto label_2efe18;
        case 0x2efe1cu: goto label_2efe1c;
        case 0x2efe20u: goto label_2efe20;
        case 0x2efe24u: goto label_2efe24;
        case 0x2efe28u: goto label_2efe28;
        case 0x2efe2cu: goto label_2efe2c;
        case 0x2efe30u: goto label_2efe30;
        case 0x2efe34u: goto label_2efe34;
        case 0x2efe38u: goto label_2efe38;
        case 0x2efe3cu: goto label_2efe3c;
        case 0x2efe40u: goto label_2efe40;
        case 0x2efe44u: goto label_2efe44;
        case 0x2efe48u: goto label_2efe48;
        case 0x2efe4cu: goto label_2efe4c;
        case 0x2efe50u: goto label_2efe50;
        case 0x2efe54u: goto label_2efe54;
        case 0x2efe58u: goto label_2efe58;
        case 0x2efe5cu: goto label_2efe5c;
        case 0x2efe60u: goto label_2efe60;
        case 0x2efe64u: goto label_2efe64;
        case 0x2efe68u: goto label_2efe68;
        case 0x2efe6cu: goto label_2efe6c;
        case 0x2efe70u: goto label_2efe70;
        case 0x2efe74u: goto label_2efe74;
        case 0x2efe78u: goto label_2efe78;
        case 0x2efe7cu: goto label_2efe7c;
        case 0x2efe80u: goto label_2efe80;
        case 0x2efe84u: goto label_2efe84;
        case 0x2efe88u: goto label_2efe88;
        case 0x2efe8cu: goto label_2efe8c;
        case 0x2efe90u: goto label_2efe90;
        case 0x2efe94u: goto label_2efe94;
        case 0x2efe98u: goto label_2efe98;
        case 0x2efe9cu: goto label_2efe9c;
        case 0x2efea0u: goto label_2efea0;
        case 0x2efea4u: goto label_2efea4;
        case 0x2efea8u: goto label_2efea8;
        case 0x2efeacu: goto label_2efeac;
        case 0x2efeb0u: goto label_2efeb0;
        case 0x2efeb4u: goto label_2efeb4;
        case 0x2efeb8u: goto label_2efeb8;
        case 0x2efebcu: goto label_2efebc;
        case 0x2efec0u: goto label_2efec0;
        case 0x2efec4u: goto label_2efec4;
        case 0x2efec8u: goto label_2efec8;
        case 0x2efeccu: goto label_2efecc;
        case 0x2efed0u: goto label_2efed0;
        case 0x2efed4u: goto label_2efed4;
        case 0x2efed8u: goto label_2efed8;
        case 0x2efedcu: goto label_2efedc;
        case 0x2efee0u: goto label_2efee0;
        case 0x2efee4u: goto label_2efee4;
        case 0x2efee8u: goto label_2efee8;
        case 0x2efeecu: goto label_2efeec;
        case 0x2efef0u: goto label_2efef0;
        case 0x2efef4u: goto label_2efef4;
        case 0x2efef8u: goto label_2efef8;
        case 0x2efefcu: goto label_2efefc;
        case 0x2eff00u: goto label_2eff00;
        case 0x2eff04u: goto label_2eff04;
        case 0x2eff08u: goto label_2eff08;
        case 0x2eff0cu: goto label_2eff0c;
        case 0x2eff10u: goto label_2eff10;
        case 0x2eff14u: goto label_2eff14;
        case 0x2eff18u: goto label_2eff18;
        case 0x2eff1cu: goto label_2eff1c;
        case 0x2eff20u: goto label_2eff20;
        case 0x2eff24u: goto label_2eff24;
        case 0x2eff28u: goto label_2eff28;
        case 0x2eff2cu: goto label_2eff2c;
        case 0x2eff30u: goto label_2eff30;
        case 0x2eff34u: goto label_2eff34;
        case 0x2eff38u: goto label_2eff38;
        case 0x2eff3cu: goto label_2eff3c;
        case 0x2eff40u: goto label_2eff40;
        case 0x2eff44u: goto label_2eff44;
        case 0x2eff48u: goto label_2eff48;
        case 0x2eff4cu: goto label_2eff4c;
        case 0x2eff50u: goto label_2eff50;
        case 0x2eff54u: goto label_2eff54;
        case 0x2eff58u: goto label_2eff58;
        case 0x2eff5cu: goto label_2eff5c;
        case 0x2eff60u: goto label_2eff60;
        case 0x2eff64u: goto label_2eff64;
        case 0x2eff68u: goto label_2eff68;
        case 0x2eff6cu: goto label_2eff6c;
        case 0x2eff70u: goto label_2eff70;
        case 0x2eff74u: goto label_2eff74;
        case 0x2eff78u: goto label_2eff78;
        case 0x2eff7cu: goto label_2eff7c;
        case 0x2eff80u: goto label_2eff80;
        case 0x2eff84u: goto label_2eff84;
        case 0x2eff88u: goto label_2eff88;
        case 0x2eff8cu: goto label_2eff8c;
        case 0x2eff90u: goto label_2eff90;
        case 0x2eff94u: goto label_2eff94;
        case 0x2eff98u: goto label_2eff98;
        case 0x2eff9cu: goto label_2eff9c;
        case 0x2effa0u: goto label_2effa0;
        case 0x2effa4u: goto label_2effa4;
        case 0x2effa8u: goto label_2effa8;
        case 0x2effacu: goto label_2effac;
        case 0x2effb0u: goto label_2effb0;
        case 0x2effb4u: goto label_2effb4;
        case 0x2effb8u: goto label_2effb8;
        case 0x2effbcu: goto label_2effbc;
        case 0x2effc0u: goto label_2effc0;
        case 0x2effc4u: goto label_2effc4;
        case 0x2effc8u: goto label_2effc8;
        case 0x2effccu: goto label_2effcc;
        case 0x2effd0u: goto label_2effd0;
        case 0x2effd4u: goto label_2effd4;
        case 0x2effd8u: goto label_2effd8;
        case 0x2effdcu: goto label_2effdc;
        case 0x2effe0u: goto label_2effe0;
        case 0x2effe4u: goto label_2effe4;
        case 0x2effe8u: goto label_2effe8;
        case 0x2effecu: goto label_2effec;
        case 0x2efff0u: goto label_2efff0;
        case 0x2efff4u: goto label_2efff4;
        case 0x2efff8u: goto label_2efff8;
        case 0x2efffcu: goto label_2efffc;
        case 0x2f0000u: goto label_2f0000;
        case 0x2f0004u: goto label_2f0004;
        case 0x2f0008u: goto label_2f0008;
        case 0x2f000cu: goto label_2f000c;
        case 0x2f0010u: goto label_2f0010;
        case 0x2f0014u: goto label_2f0014;
        case 0x2f0018u: goto label_2f0018;
        case 0x2f001cu: goto label_2f001c;
        case 0x2f0020u: goto label_2f0020;
        case 0x2f0024u: goto label_2f0024;
        case 0x2f0028u: goto label_2f0028;
        case 0x2f002cu: goto label_2f002c;
        case 0x2f0030u: goto label_2f0030;
        case 0x2f0034u: goto label_2f0034;
        case 0x2f0038u: goto label_2f0038;
        case 0x2f003cu: goto label_2f003c;
        case 0x2f0040u: goto label_2f0040;
        case 0x2f0044u: goto label_2f0044;
        case 0x2f0048u: goto label_2f0048;
        case 0x2f004cu: goto label_2f004c;
        case 0x2f0050u: goto label_2f0050;
        case 0x2f0054u: goto label_2f0054;
        case 0x2f0058u: goto label_2f0058;
        case 0x2f005cu: goto label_2f005c;
        case 0x2f0060u: goto label_2f0060;
        case 0x2f0064u: goto label_2f0064;
        case 0x2f0068u: goto label_2f0068;
        case 0x2f006cu: goto label_2f006c;
        case 0x2f0070u: goto label_2f0070;
        case 0x2f0074u: goto label_2f0074;
        case 0x2f0078u: goto label_2f0078;
        case 0x2f007cu: goto label_2f007c;
        case 0x2f0080u: goto label_2f0080;
        case 0x2f0084u: goto label_2f0084;
        case 0x2f0088u: goto label_2f0088;
        case 0x2f008cu: goto label_2f008c;
        case 0x2f0090u: goto label_2f0090;
        case 0x2f0094u: goto label_2f0094;
        case 0x2f0098u: goto label_2f0098;
        case 0x2f009cu: goto label_2f009c;
        case 0x2f00a0u: goto label_2f00a0;
        case 0x2f00a4u: goto label_2f00a4;
        case 0x2f00a8u: goto label_2f00a8;
        case 0x2f00acu: goto label_2f00ac;
        case 0x2f00b0u: goto label_2f00b0;
        case 0x2f00b4u: goto label_2f00b4;
        case 0x2f00b8u: goto label_2f00b8;
        case 0x2f00bcu: goto label_2f00bc;
        case 0x2f00c0u: goto label_2f00c0;
        case 0x2f00c4u: goto label_2f00c4;
        case 0x2f00c8u: goto label_2f00c8;
        case 0x2f00ccu: goto label_2f00cc;
        case 0x2f00d0u: goto label_2f00d0;
        case 0x2f00d4u: goto label_2f00d4;
        case 0x2f00d8u: goto label_2f00d8;
        case 0x2f00dcu: goto label_2f00dc;
        case 0x2f00e0u: goto label_2f00e0;
        case 0x2f00e4u: goto label_2f00e4;
        case 0x2f00e8u: goto label_2f00e8;
        case 0x2f00ecu: goto label_2f00ec;
        case 0x2f00f0u: goto label_2f00f0;
        case 0x2f00f4u: goto label_2f00f4;
        case 0x2f00f8u: goto label_2f00f8;
        case 0x2f00fcu: goto label_2f00fc;
        case 0x2f0100u: goto label_2f0100;
        case 0x2f0104u: goto label_2f0104;
        case 0x2f0108u: goto label_2f0108;
        case 0x2f010cu: goto label_2f010c;
        case 0x2f0110u: goto label_2f0110;
        case 0x2f0114u: goto label_2f0114;
        case 0x2f0118u: goto label_2f0118;
        case 0x2f011cu: goto label_2f011c;
        case 0x2f0120u: goto label_2f0120;
        case 0x2f0124u: goto label_2f0124;
        case 0x2f0128u: goto label_2f0128;
        case 0x2f012cu: goto label_2f012c;
        case 0x2f0130u: goto label_2f0130;
        case 0x2f0134u: goto label_2f0134;
        case 0x2f0138u: goto label_2f0138;
        case 0x2f013cu: goto label_2f013c;
        case 0x2f0140u: goto label_2f0140;
        case 0x2f0144u: goto label_2f0144;
        case 0x2f0148u: goto label_2f0148;
        case 0x2f014cu: goto label_2f014c;
        case 0x2f0150u: goto label_2f0150;
        case 0x2f0154u: goto label_2f0154;
        case 0x2f0158u: goto label_2f0158;
        case 0x2f015cu: goto label_2f015c;
        case 0x2f0160u: goto label_2f0160;
        case 0x2f0164u: goto label_2f0164;
        case 0x2f0168u: goto label_2f0168;
        case 0x2f016cu: goto label_2f016c;
        case 0x2f0170u: goto label_2f0170;
        case 0x2f0174u: goto label_2f0174;
        case 0x2f0178u: goto label_2f0178;
        case 0x2f017cu: goto label_2f017c;
        case 0x2f0180u: goto label_2f0180;
        case 0x2f0184u: goto label_2f0184;
        case 0x2f0188u: goto label_2f0188;
        case 0x2f018cu: goto label_2f018c;
        case 0x2f0190u: goto label_2f0190;
        case 0x2f0194u: goto label_2f0194;
        case 0x2f0198u: goto label_2f0198;
        case 0x2f019cu: goto label_2f019c;
        case 0x2f01a0u: goto label_2f01a0;
        case 0x2f01a4u: goto label_2f01a4;
        case 0x2f01a8u: goto label_2f01a8;
        case 0x2f01acu: goto label_2f01ac;
        case 0x2f01b0u: goto label_2f01b0;
        case 0x2f01b4u: goto label_2f01b4;
        case 0x2f01b8u: goto label_2f01b8;
        case 0x2f01bcu: goto label_2f01bc;
        case 0x2f01c0u: goto label_2f01c0;
        case 0x2f01c4u: goto label_2f01c4;
        case 0x2f01c8u: goto label_2f01c8;
        case 0x2f01ccu: goto label_2f01cc;
        case 0x2f01d0u: goto label_2f01d0;
        case 0x2f01d4u: goto label_2f01d4;
        case 0x2f01d8u: goto label_2f01d8;
        case 0x2f01dcu: goto label_2f01dc;
        case 0x2f01e0u: goto label_2f01e0;
        case 0x2f01e4u: goto label_2f01e4;
        case 0x2f01e8u: goto label_2f01e8;
        case 0x2f01ecu: goto label_2f01ec;
        case 0x2f01f0u: goto label_2f01f0;
        case 0x2f01f4u: goto label_2f01f4;
        case 0x2f01f8u: goto label_2f01f8;
        case 0x2f01fcu: goto label_2f01fc;
        case 0x2f0200u: goto label_2f0200;
        case 0x2f0204u: goto label_2f0204;
        case 0x2f0208u: goto label_2f0208;
        case 0x2f020cu: goto label_2f020c;
        case 0x2f0210u: goto label_2f0210;
        case 0x2f0214u: goto label_2f0214;
        case 0x2f0218u: goto label_2f0218;
        case 0x2f021cu: goto label_2f021c;
        case 0x2f0220u: goto label_2f0220;
        case 0x2f0224u: goto label_2f0224;
        case 0x2f0228u: goto label_2f0228;
        case 0x2f022cu: goto label_2f022c;
        case 0x2f0230u: goto label_2f0230;
        case 0x2f0234u: goto label_2f0234;
        case 0x2f0238u: goto label_2f0238;
        case 0x2f023cu: goto label_2f023c;
        case 0x2f0240u: goto label_2f0240;
        case 0x2f0244u: goto label_2f0244;
        case 0x2f0248u: goto label_2f0248;
        case 0x2f024cu: goto label_2f024c;
        case 0x2f0250u: goto label_2f0250;
        case 0x2f0254u: goto label_2f0254;
        case 0x2f0258u: goto label_2f0258;
        case 0x2f025cu: goto label_2f025c;
        case 0x2f0260u: goto label_2f0260;
        case 0x2f0264u: goto label_2f0264;
        case 0x2f0268u: goto label_2f0268;
        case 0x2f026cu: goto label_2f026c;
        case 0x2f0270u: goto label_2f0270;
        case 0x2f0274u: goto label_2f0274;
        case 0x2f0278u: goto label_2f0278;
        case 0x2f027cu: goto label_2f027c;
        case 0x2f0280u: goto label_2f0280;
        case 0x2f0284u: goto label_2f0284;
        case 0x2f0288u: goto label_2f0288;
        case 0x2f028cu: goto label_2f028c;
        case 0x2f0290u: goto label_2f0290;
        case 0x2f0294u: goto label_2f0294;
        case 0x2f0298u: goto label_2f0298;
        case 0x2f029cu: goto label_2f029c;
        case 0x2f02a0u: goto label_2f02a0;
        case 0x2f02a4u: goto label_2f02a4;
        case 0x2f02a8u: goto label_2f02a8;
        case 0x2f02acu: goto label_2f02ac;
        case 0x2f02b0u: goto label_2f02b0;
        case 0x2f02b4u: goto label_2f02b4;
        case 0x2f02b8u: goto label_2f02b8;
        case 0x2f02bcu: goto label_2f02bc;
        case 0x2f02c0u: goto label_2f02c0;
        case 0x2f02c4u: goto label_2f02c4;
        case 0x2f02c8u: goto label_2f02c8;
        case 0x2f02ccu: goto label_2f02cc;
        case 0x2f02d0u: goto label_2f02d0;
        case 0x2f02d4u: goto label_2f02d4;
        case 0x2f02d8u: goto label_2f02d8;
        case 0x2f02dcu: goto label_2f02dc;
        case 0x2f02e0u: goto label_2f02e0;
        case 0x2f02e4u: goto label_2f02e4;
        case 0x2f02e8u: goto label_2f02e8;
        case 0x2f02ecu: goto label_2f02ec;
        case 0x2f02f0u: goto label_2f02f0;
        case 0x2f02f4u: goto label_2f02f4;
        case 0x2f02f8u: goto label_2f02f8;
        case 0x2f02fcu: goto label_2f02fc;
        case 0x2f0300u: goto label_2f0300;
        case 0x2f0304u: goto label_2f0304;
        case 0x2f0308u: goto label_2f0308;
        case 0x2f030cu: goto label_2f030c;
        case 0x2f0310u: goto label_2f0310;
        case 0x2f0314u: goto label_2f0314;
        case 0x2f0318u: goto label_2f0318;
        case 0x2f031cu: goto label_2f031c;
        case 0x2f0320u: goto label_2f0320;
        case 0x2f0324u: goto label_2f0324;
        case 0x2f0328u: goto label_2f0328;
        case 0x2f032cu: goto label_2f032c;
        case 0x2f0330u: goto label_2f0330;
        case 0x2f0334u: goto label_2f0334;
        case 0x2f0338u: goto label_2f0338;
        case 0x2f033cu: goto label_2f033c;
        case 0x2f0340u: goto label_2f0340;
        case 0x2f0344u: goto label_2f0344;
        case 0x2f0348u: goto label_2f0348;
        case 0x2f034cu: goto label_2f034c;
        case 0x2f0350u: goto label_2f0350;
        case 0x2f0354u: goto label_2f0354;
        case 0x2f0358u: goto label_2f0358;
        case 0x2f035cu: goto label_2f035c;
        case 0x2f0360u: goto label_2f0360;
        case 0x2f0364u: goto label_2f0364;
        case 0x2f0368u: goto label_2f0368;
        case 0x2f036cu: goto label_2f036c;
        case 0x2f0370u: goto label_2f0370;
        case 0x2f0374u: goto label_2f0374;
        case 0x2f0378u: goto label_2f0378;
        case 0x2f037cu: goto label_2f037c;
        case 0x2f0380u: goto label_2f0380;
        case 0x2f0384u: goto label_2f0384;
        case 0x2f0388u: goto label_2f0388;
        case 0x2f038cu: goto label_2f038c;
        case 0x2f0390u: goto label_2f0390;
        case 0x2f0394u: goto label_2f0394;
        case 0x2f0398u: goto label_2f0398;
        case 0x2f039cu: goto label_2f039c;
        case 0x2f03a0u: goto label_2f03a0;
        case 0x2f03a4u: goto label_2f03a4;
        case 0x2f03a8u: goto label_2f03a8;
        case 0x2f03acu: goto label_2f03ac;
        case 0x2f03b0u: goto label_2f03b0;
        case 0x2f03b4u: goto label_2f03b4;
        case 0x2f03b8u: goto label_2f03b8;
        case 0x2f03bcu: goto label_2f03bc;
        case 0x2f03c0u: goto label_2f03c0;
        case 0x2f03c4u: goto label_2f03c4;
        case 0x2f03c8u: goto label_2f03c8;
        case 0x2f03ccu: goto label_2f03cc;
        case 0x2f03d0u: goto label_2f03d0;
        case 0x2f03d4u: goto label_2f03d4;
        case 0x2f03d8u: goto label_2f03d8;
        case 0x2f03dcu: goto label_2f03dc;
        case 0x2f03e0u: goto label_2f03e0;
        case 0x2f03e4u: goto label_2f03e4;
        case 0x2f03e8u: goto label_2f03e8;
        case 0x2f03ecu: goto label_2f03ec;
        case 0x2f03f0u: goto label_2f03f0;
        case 0x2f03f4u: goto label_2f03f4;
        case 0x2f03f8u: goto label_2f03f8;
        case 0x2f03fcu: goto label_2f03fc;
        case 0x2f0400u: goto label_2f0400;
        case 0x2f0404u: goto label_2f0404;
        case 0x2f0408u: goto label_2f0408;
        case 0x2f040cu: goto label_2f040c;
        case 0x2f0410u: goto label_2f0410;
        case 0x2f0414u: goto label_2f0414;
        case 0x2f0418u: goto label_2f0418;
        case 0x2f041cu: goto label_2f041c;
        case 0x2f0420u: goto label_2f0420;
        case 0x2f0424u: goto label_2f0424;
        case 0x2f0428u: goto label_2f0428;
        case 0x2f042cu: goto label_2f042c;
        case 0x2f0430u: goto label_2f0430;
        case 0x2f0434u: goto label_2f0434;
        case 0x2f0438u: goto label_2f0438;
        case 0x2f043cu: goto label_2f043c;
        case 0x2f0440u: goto label_2f0440;
        case 0x2f0444u: goto label_2f0444;
        case 0x2f0448u: goto label_2f0448;
        case 0x2f044cu: goto label_2f044c;
        case 0x2f0450u: goto label_2f0450;
        case 0x2f0454u: goto label_2f0454;
        case 0x2f0458u: goto label_2f0458;
        case 0x2f045cu: goto label_2f045c;
        case 0x2f0460u: goto label_2f0460;
        case 0x2f0464u: goto label_2f0464;
        case 0x2f0468u: goto label_2f0468;
        case 0x2f046cu: goto label_2f046c;
        case 0x2f0470u: goto label_2f0470;
        case 0x2f0474u: goto label_2f0474;
        case 0x2f0478u: goto label_2f0478;
        case 0x2f047cu: goto label_2f047c;
        case 0x2f0480u: goto label_2f0480;
        case 0x2f0484u: goto label_2f0484;
        case 0x2f0488u: goto label_2f0488;
        case 0x2f048cu: goto label_2f048c;
        case 0x2f0490u: goto label_2f0490;
        case 0x2f0494u: goto label_2f0494;
        case 0x2f0498u: goto label_2f0498;
        case 0x2f049cu: goto label_2f049c;
        case 0x2f04a0u: goto label_2f04a0;
        case 0x2f04a4u: goto label_2f04a4;
        case 0x2f04a8u: goto label_2f04a8;
        case 0x2f04acu: goto label_2f04ac;
        case 0x2f04b0u: goto label_2f04b0;
        case 0x2f04b4u: goto label_2f04b4;
        case 0x2f04b8u: goto label_2f04b8;
        case 0x2f04bcu: goto label_2f04bc;
        case 0x2f04c0u: goto label_2f04c0;
        case 0x2f04c4u: goto label_2f04c4;
        case 0x2f04c8u: goto label_2f04c8;
        case 0x2f04ccu: goto label_2f04cc;
        case 0x2f04d0u: goto label_2f04d0;
        case 0x2f04d4u: goto label_2f04d4;
        case 0x2f04d8u: goto label_2f04d8;
        case 0x2f04dcu: goto label_2f04dc;
        case 0x2f04e0u: goto label_2f04e0;
        case 0x2f04e4u: goto label_2f04e4;
        case 0x2f04e8u: goto label_2f04e8;
        case 0x2f04ecu: goto label_2f04ec;
        case 0x2f04f0u: goto label_2f04f0;
        case 0x2f04f4u: goto label_2f04f4;
        case 0x2f04f8u: goto label_2f04f8;
        case 0x2f04fcu: goto label_2f04fc;
        case 0x2f0500u: goto label_2f0500;
        case 0x2f0504u: goto label_2f0504;
        case 0x2f0508u: goto label_2f0508;
        case 0x2f050cu: goto label_2f050c;
        case 0x2f0510u: goto label_2f0510;
        case 0x2f0514u: goto label_2f0514;
        case 0x2f0518u: goto label_2f0518;
        case 0x2f051cu: goto label_2f051c;
        case 0x2f0520u: goto label_2f0520;
        case 0x2f0524u: goto label_2f0524;
        case 0x2f0528u: goto label_2f0528;
        case 0x2f052cu: goto label_2f052c;
        case 0x2f0530u: goto label_2f0530;
        case 0x2f0534u: goto label_2f0534;
        case 0x2f0538u: goto label_2f0538;
        case 0x2f053cu: goto label_2f053c;
        case 0x2f0540u: goto label_2f0540;
        case 0x2f0544u: goto label_2f0544;
        case 0x2f0548u: goto label_2f0548;
        case 0x2f054cu: goto label_2f054c;
        case 0x2f0550u: goto label_2f0550;
        case 0x2f0554u: goto label_2f0554;
        case 0x2f0558u: goto label_2f0558;
        case 0x2f055cu: goto label_2f055c;
        case 0x2f0560u: goto label_2f0560;
        case 0x2f0564u: goto label_2f0564;
        case 0x2f0568u: goto label_2f0568;
        case 0x2f056cu: goto label_2f056c;
        case 0x2f0570u: goto label_2f0570;
        case 0x2f0574u: goto label_2f0574;
        case 0x2f0578u: goto label_2f0578;
        case 0x2f057cu: goto label_2f057c;
        case 0x2f0580u: goto label_2f0580;
        case 0x2f0584u: goto label_2f0584;
        case 0x2f0588u: goto label_2f0588;
        case 0x2f058cu: goto label_2f058c;
        case 0x2f0590u: goto label_2f0590;
        case 0x2f0594u: goto label_2f0594;
        case 0x2f0598u: goto label_2f0598;
        case 0x2f059cu: goto label_2f059c;
        case 0x2f05a0u: goto label_2f05a0;
        case 0x2f05a4u: goto label_2f05a4;
        case 0x2f05a8u: goto label_2f05a8;
        case 0x2f05acu: goto label_2f05ac;
        case 0x2f05b0u: goto label_2f05b0;
        case 0x2f05b4u: goto label_2f05b4;
        case 0x2f05b8u: goto label_2f05b8;
        case 0x2f05bcu: goto label_2f05bc;
        case 0x2f05c0u: goto label_2f05c0;
        case 0x2f05c4u: goto label_2f05c4;
        case 0x2f05c8u: goto label_2f05c8;
        case 0x2f05ccu: goto label_2f05cc;
        case 0x2f05d0u: goto label_2f05d0;
        case 0x2f05d4u: goto label_2f05d4;
        case 0x2f05d8u: goto label_2f05d8;
        case 0x2f05dcu: goto label_2f05dc;
        case 0x2f05e0u: goto label_2f05e0;
        case 0x2f05e4u: goto label_2f05e4;
        case 0x2f05e8u: goto label_2f05e8;
        case 0x2f05ecu: goto label_2f05ec;
        case 0x2f05f0u: goto label_2f05f0;
        case 0x2f05f4u: goto label_2f05f4;
        case 0x2f05f8u: goto label_2f05f8;
        case 0x2f05fcu: goto label_2f05fc;
        case 0x2f0600u: goto label_2f0600;
        case 0x2f0604u: goto label_2f0604;
        case 0x2f0608u: goto label_2f0608;
        case 0x2f060cu: goto label_2f060c;
        case 0x2f0610u: goto label_2f0610;
        case 0x2f0614u: goto label_2f0614;
        case 0x2f0618u: goto label_2f0618;
        case 0x2f061cu: goto label_2f061c;
        case 0x2f0620u: goto label_2f0620;
        case 0x2f0624u: goto label_2f0624;
        case 0x2f0628u: goto label_2f0628;
        case 0x2f062cu: goto label_2f062c;
        case 0x2f0630u: goto label_2f0630;
        case 0x2f0634u: goto label_2f0634;
        case 0x2f0638u: goto label_2f0638;
        case 0x2f063cu: goto label_2f063c;
        case 0x2f0640u: goto label_2f0640;
        case 0x2f0644u: goto label_2f0644;
        case 0x2f0648u: goto label_2f0648;
        case 0x2f064cu: goto label_2f064c;
        case 0x2f0650u: goto label_2f0650;
        case 0x2f0654u: goto label_2f0654;
        case 0x2f0658u: goto label_2f0658;
        case 0x2f065cu: goto label_2f065c;
        case 0x2f0660u: goto label_2f0660;
        case 0x2f0664u: goto label_2f0664;
        case 0x2f0668u: goto label_2f0668;
        case 0x2f066cu: goto label_2f066c;
        case 0x2f0670u: goto label_2f0670;
        case 0x2f0674u: goto label_2f0674;
        case 0x2f0678u: goto label_2f0678;
        case 0x2f067cu: goto label_2f067c;
        case 0x2f0680u: goto label_2f0680;
        case 0x2f0684u: goto label_2f0684;
        case 0x2f0688u: goto label_2f0688;
        case 0x2f068cu: goto label_2f068c;
        case 0x2f0690u: goto label_2f0690;
        case 0x2f0694u: goto label_2f0694;
        case 0x2f0698u: goto label_2f0698;
        case 0x2f069cu: goto label_2f069c;
        case 0x2f06a0u: goto label_2f06a0;
        case 0x2f06a4u: goto label_2f06a4;
        case 0x2f06a8u: goto label_2f06a8;
        case 0x2f06acu: goto label_2f06ac;
        case 0x2f06b0u: goto label_2f06b0;
        case 0x2f06b4u: goto label_2f06b4;
        case 0x2f06b8u: goto label_2f06b8;
        case 0x2f06bcu: goto label_2f06bc;
        case 0x2f06c0u: goto label_2f06c0;
        case 0x2f06c4u: goto label_2f06c4;
        case 0x2f06c8u: goto label_2f06c8;
        case 0x2f06ccu: goto label_2f06cc;
        case 0x2f06d0u: goto label_2f06d0;
        case 0x2f06d4u: goto label_2f06d4;
        case 0x2f06d8u: goto label_2f06d8;
        case 0x2f06dcu: goto label_2f06dc;
        case 0x2f06e0u: goto label_2f06e0;
        case 0x2f06e4u: goto label_2f06e4;
        case 0x2f06e8u: goto label_2f06e8;
        case 0x2f06ecu: goto label_2f06ec;
        case 0x2f06f0u: goto label_2f06f0;
        case 0x2f06f4u: goto label_2f06f4;
        case 0x2f06f8u: goto label_2f06f8;
        case 0x2f06fcu: goto label_2f06fc;
        case 0x2f0700u: goto label_2f0700;
        case 0x2f0704u: goto label_2f0704;
        case 0x2f0708u: goto label_2f0708;
        case 0x2f070cu: goto label_2f070c;
        case 0x2f0710u: goto label_2f0710;
        case 0x2f0714u: goto label_2f0714;
        case 0x2f0718u: goto label_2f0718;
        case 0x2f071cu: goto label_2f071c;
        case 0x2f0720u: goto label_2f0720;
        case 0x2f0724u: goto label_2f0724;
        case 0x2f0728u: goto label_2f0728;
        case 0x2f072cu: goto label_2f072c;
        case 0x2f0730u: goto label_2f0730;
        case 0x2f0734u: goto label_2f0734;
        case 0x2f0738u: goto label_2f0738;
        case 0x2f073cu: goto label_2f073c;
        case 0x2f0740u: goto label_2f0740;
        case 0x2f0744u: goto label_2f0744;
        case 0x2f0748u: goto label_2f0748;
        case 0x2f074cu: goto label_2f074c;
        case 0x2f0750u: goto label_2f0750;
        case 0x2f0754u: goto label_2f0754;
        case 0x2f0758u: goto label_2f0758;
        case 0x2f075cu: goto label_2f075c;
        case 0x2f0760u: goto label_2f0760;
        case 0x2f0764u: goto label_2f0764;
        case 0x2f0768u: goto label_2f0768;
        case 0x2f076cu: goto label_2f076c;
        case 0x2f0770u: goto label_2f0770;
        case 0x2f0774u: goto label_2f0774;
        case 0x2f0778u: goto label_2f0778;
        case 0x2f077cu: goto label_2f077c;
        case 0x2f0780u: goto label_2f0780;
        case 0x2f0784u: goto label_2f0784;
        case 0x2f0788u: goto label_2f0788;
        case 0x2f078cu: goto label_2f078c;
        case 0x2f0790u: goto label_2f0790;
        case 0x2f0794u: goto label_2f0794;
        case 0x2f0798u: goto label_2f0798;
        case 0x2f079cu: goto label_2f079c;
        case 0x2f07a0u: goto label_2f07a0;
        case 0x2f07a4u: goto label_2f07a4;
        case 0x2f07a8u: goto label_2f07a8;
        case 0x2f07acu: goto label_2f07ac;
        case 0x2f07b0u: goto label_2f07b0;
        case 0x2f07b4u: goto label_2f07b4;
        case 0x2f07b8u: goto label_2f07b8;
        case 0x2f07bcu: goto label_2f07bc;
        case 0x2f07c0u: goto label_2f07c0;
        case 0x2f07c4u: goto label_2f07c4;
        case 0x2f07c8u: goto label_2f07c8;
        case 0x2f07ccu: goto label_2f07cc;
        case 0x2f07d0u: goto label_2f07d0;
        case 0x2f07d4u: goto label_2f07d4;
        case 0x2f07d8u: goto label_2f07d8;
        case 0x2f07dcu: goto label_2f07dc;
        case 0x2f07e0u: goto label_2f07e0;
        case 0x2f07e4u: goto label_2f07e4;
        case 0x2f07e8u: goto label_2f07e8;
        case 0x2f07ecu: goto label_2f07ec;
        case 0x2f07f0u: goto label_2f07f0;
        case 0x2f07f4u: goto label_2f07f4;
        case 0x2f07f8u: goto label_2f07f8;
        case 0x2f07fcu: goto label_2f07fc;
        case 0x2f0800u: goto label_2f0800;
        case 0x2f0804u: goto label_2f0804;
        case 0x2f0808u: goto label_2f0808;
        case 0x2f080cu: goto label_2f080c;
        case 0x2f0810u: goto label_2f0810;
        case 0x2f0814u: goto label_2f0814;
        case 0x2f0818u: goto label_2f0818;
        case 0x2f081cu: goto label_2f081c;
        case 0x2f0820u: goto label_2f0820;
        case 0x2f0824u: goto label_2f0824;
        case 0x2f0828u: goto label_2f0828;
        case 0x2f082cu: goto label_2f082c;
        case 0x2f0830u: goto label_2f0830;
        case 0x2f0834u: goto label_2f0834;
        case 0x2f0838u: goto label_2f0838;
        case 0x2f083cu: goto label_2f083c;
        case 0x2f0840u: goto label_2f0840;
        case 0x2f0844u: goto label_2f0844;
        case 0x2f0848u: goto label_2f0848;
        case 0x2f084cu: goto label_2f084c;
        case 0x2f0850u: goto label_2f0850;
        case 0x2f0854u: goto label_2f0854;
        case 0x2f0858u: goto label_2f0858;
        case 0x2f085cu: goto label_2f085c;
        case 0x2f0860u: goto label_2f0860;
        case 0x2f0864u: goto label_2f0864;
        case 0x2f0868u: goto label_2f0868;
        case 0x2f086cu: goto label_2f086c;
        case 0x2f0870u: goto label_2f0870;
        case 0x2f0874u: goto label_2f0874;
        case 0x2f0878u: goto label_2f0878;
        case 0x2f087cu: goto label_2f087c;
        case 0x2f0880u: goto label_2f0880;
        case 0x2f0884u: goto label_2f0884;
        case 0x2f0888u: goto label_2f0888;
        case 0x2f088cu: goto label_2f088c;
        case 0x2f0890u: goto label_2f0890;
        case 0x2f0894u: goto label_2f0894;
        case 0x2f0898u: goto label_2f0898;
        case 0x2f089cu: goto label_2f089c;
        case 0x2f08a0u: goto label_2f08a0;
        case 0x2f08a4u: goto label_2f08a4;
        case 0x2f08a8u: goto label_2f08a8;
        case 0x2f08acu: goto label_2f08ac;
        case 0x2f08b0u: goto label_2f08b0;
        case 0x2f08b4u: goto label_2f08b4;
        case 0x2f08b8u: goto label_2f08b8;
        case 0x2f08bcu: goto label_2f08bc;
        case 0x2f08c0u: goto label_2f08c0;
        case 0x2f08c4u: goto label_2f08c4;
        case 0x2f08c8u: goto label_2f08c8;
        case 0x2f08ccu: goto label_2f08cc;
        case 0x2f08d0u: goto label_2f08d0;
        case 0x2f08d4u: goto label_2f08d4;
        case 0x2f08d8u: goto label_2f08d8;
        case 0x2f08dcu: goto label_2f08dc;
        case 0x2f08e0u: goto label_2f08e0;
        case 0x2f08e4u: goto label_2f08e4;
        case 0x2f08e8u: goto label_2f08e8;
        case 0x2f08ecu: goto label_2f08ec;
        case 0x2f08f0u: goto label_2f08f0;
        case 0x2f08f4u: goto label_2f08f4;
        case 0x2f08f8u: goto label_2f08f8;
        case 0x2f08fcu: goto label_2f08fc;
        case 0x2f0900u: goto label_2f0900;
        case 0x2f0904u: goto label_2f0904;
        case 0x2f0908u: goto label_2f0908;
        case 0x2f090cu: goto label_2f090c;
        case 0x2f0910u: goto label_2f0910;
        case 0x2f0914u: goto label_2f0914;
        case 0x2f0918u: goto label_2f0918;
        case 0x2f091cu: goto label_2f091c;
        case 0x2f0920u: goto label_2f0920;
        case 0x2f0924u: goto label_2f0924;
        case 0x2f0928u: goto label_2f0928;
        case 0x2f092cu: goto label_2f092c;
        case 0x2f0930u: goto label_2f0930;
        case 0x2f0934u: goto label_2f0934;
        case 0x2f0938u: goto label_2f0938;
        case 0x2f093cu: goto label_2f093c;
        case 0x2f0940u: goto label_2f0940;
        case 0x2f0944u: goto label_2f0944;
        case 0x2f0948u: goto label_2f0948;
        case 0x2f094cu: goto label_2f094c;
        case 0x2f0950u: goto label_2f0950;
        case 0x2f0954u: goto label_2f0954;
        case 0x2f0958u: goto label_2f0958;
        case 0x2f095cu: goto label_2f095c;
        case 0x2f0960u: goto label_2f0960;
        case 0x2f0964u: goto label_2f0964;
        case 0x2f0968u: goto label_2f0968;
        case 0x2f096cu: goto label_2f096c;
        case 0x2f0970u: goto label_2f0970;
        case 0x2f0974u: goto label_2f0974;
        case 0x2f0978u: goto label_2f0978;
        case 0x2f097cu: goto label_2f097c;
        case 0x2f0980u: goto label_2f0980;
        case 0x2f0984u: goto label_2f0984;
        case 0x2f0988u: goto label_2f0988;
        case 0x2f098cu: goto label_2f098c;
        case 0x2f0990u: goto label_2f0990;
        case 0x2f0994u: goto label_2f0994;
        case 0x2f0998u: goto label_2f0998;
        case 0x2f099cu: goto label_2f099c;
        case 0x2f09a0u: goto label_2f09a0;
        case 0x2f09a4u: goto label_2f09a4;
        case 0x2f09a8u: goto label_2f09a8;
        case 0x2f09acu: goto label_2f09ac;
        case 0x2f09b0u: goto label_2f09b0;
        case 0x2f09b4u: goto label_2f09b4;
        case 0x2f09b8u: goto label_2f09b8;
        case 0x2f09bcu: goto label_2f09bc;
        case 0x2f09c0u: goto label_2f09c0;
        case 0x2f09c4u: goto label_2f09c4;
        case 0x2f09c8u: goto label_2f09c8;
        case 0x2f09ccu: goto label_2f09cc;
        case 0x2f09d0u: goto label_2f09d0;
        case 0x2f09d4u: goto label_2f09d4;
        case 0x2f09d8u: goto label_2f09d8;
        case 0x2f09dcu: goto label_2f09dc;
        case 0x2f09e0u: goto label_2f09e0;
        case 0x2f09e4u: goto label_2f09e4;
        case 0x2f09e8u: goto label_2f09e8;
        case 0x2f09ecu: goto label_2f09ec;
        case 0x2f09f0u: goto label_2f09f0;
        case 0x2f09f4u: goto label_2f09f4;
        case 0x2f09f8u: goto label_2f09f8;
        case 0x2f09fcu: goto label_2f09fc;
        case 0x2f0a00u: goto label_2f0a00;
        case 0x2f0a04u: goto label_2f0a04;
        case 0x2f0a08u: goto label_2f0a08;
        case 0x2f0a0cu: goto label_2f0a0c;
        case 0x2f0a10u: goto label_2f0a10;
        case 0x2f0a14u: goto label_2f0a14;
        case 0x2f0a18u: goto label_2f0a18;
        case 0x2f0a1cu: goto label_2f0a1c;
        case 0x2f0a20u: goto label_2f0a20;
        case 0x2f0a24u: goto label_2f0a24;
        case 0x2f0a28u: goto label_2f0a28;
        case 0x2f0a2cu: goto label_2f0a2c;
        case 0x2f0a30u: goto label_2f0a30;
        case 0x2f0a34u: goto label_2f0a34;
        case 0x2f0a38u: goto label_2f0a38;
        case 0x2f0a3cu: goto label_2f0a3c;
        case 0x2f0a40u: goto label_2f0a40;
        case 0x2f0a44u: goto label_2f0a44;
        case 0x2f0a48u: goto label_2f0a48;
        case 0x2f0a4cu: goto label_2f0a4c;
        case 0x2f0a50u: goto label_2f0a50;
        case 0x2f0a54u: goto label_2f0a54;
        case 0x2f0a58u: goto label_2f0a58;
        case 0x2f0a5cu: goto label_2f0a5c;
        case 0x2f0a60u: goto label_2f0a60;
        case 0x2f0a64u: goto label_2f0a64;
        case 0x2f0a68u: goto label_2f0a68;
        case 0x2f0a6cu: goto label_2f0a6c;
        case 0x2f0a70u: goto label_2f0a70;
        case 0x2f0a74u: goto label_2f0a74;
        case 0x2f0a78u: goto label_2f0a78;
        case 0x2f0a7cu: goto label_2f0a7c;
        case 0x2f0a80u: goto label_2f0a80;
        case 0x2f0a84u: goto label_2f0a84;
        case 0x2f0a88u: goto label_2f0a88;
        case 0x2f0a8cu: goto label_2f0a8c;
        case 0x2f0a90u: goto label_2f0a90;
        case 0x2f0a94u: goto label_2f0a94;
        case 0x2f0a98u: goto label_2f0a98;
        case 0x2f0a9cu: goto label_2f0a9c;
        case 0x2f0aa0u: goto label_2f0aa0;
        case 0x2f0aa4u: goto label_2f0aa4;
        case 0x2f0aa8u: goto label_2f0aa8;
        case 0x2f0aacu: goto label_2f0aac;
        case 0x2f0ab0u: goto label_2f0ab0;
        case 0x2f0ab4u: goto label_2f0ab4;
        case 0x2f0ab8u: goto label_2f0ab8;
        case 0x2f0abcu: goto label_2f0abc;
        case 0x2f0ac0u: goto label_2f0ac0;
        case 0x2f0ac4u: goto label_2f0ac4;
        case 0x2f0ac8u: goto label_2f0ac8;
        case 0x2f0accu: goto label_2f0acc;
        case 0x2f0ad0u: goto label_2f0ad0;
        case 0x2f0ad4u: goto label_2f0ad4;
        case 0x2f0ad8u: goto label_2f0ad8;
        case 0x2f0adcu: goto label_2f0adc;
        case 0x2f0ae0u: goto label_2f0ae0;
        case 0x2f0ae4u: goto label_2f0ae4;
        case 0x2f0ae8u: goto label_2f0ae8;
        case 0x2f0aecu: goto label_2f0aec;
        case 0x2f0af0u: goto label_2f0af0;
        case 0x2f0af4u: goto label_2f0af4;
        case 0x2f0af8u: goto label_2f0af8;
        case 0x2f0afcu: goto label_2f0afc;
        case 0x2f0b00u: goto label_2f0b00;
        case 0x2f0b04u: goto label_2f0b04;
        case 0x2f0b08u: goto label_2f0b08;
        case 0x2f0b0cu: goto label_2f0b0c;
        case 0x2f0b10u: goto label_2f0b10;
        case 0x2f0b14u: goto label_2f0b14;
        case 0x2f0b18u: goto label_2f0b18;
        case 0x2f0b1cu: goto label_2f0b1c;
        case 0x2f0b20u: goto label_2f0b20;
        case 0x2f0b24u: goto label_2f0b24;
        case 0x2f0b28u: goto label_2f0b28;
        case 0x2f0b2cu: goto label_2f0b2c;
        case 0x2f0b30u: goto label_2f0b30;
        case 0x2f0b34u: goto label_2f0b34;
        case 0x2f0b38u: goto label_2f0b38;
        default: break;
    }

    ctx->pc = 0x2efbe0u;

label_2efbe0:
    // 0x2efbe0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x2efbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_2efbe4:
    // 0x2efbe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2efbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2efbe8:
    // 0x2efbe8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2efbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2efbec:
    // 0x2efbec: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2efbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_2efbf0:
    // 0x2efbf0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2efbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2efbf4:
    // 0x2efbf4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2efbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2efbf8:
    // 0x2efbf8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2efbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2efbfc:
    // 0x2efbfc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2efbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2efc00:
    // 0x2efc00: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2efc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2efc04:
    // 0x2efc04: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2efc04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2efc08:
    // 0x2efc08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2efc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2efc0c:
    // 0x2efc0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2efc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2efc10:
    // 0x2efc10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2efc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2efc14:
    // 0x2efc14: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2efc14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2efc18:
    // 0x2efc18: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2efc18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2efc1c:
    // 0x2efc1c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2efc1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2efc20:
    // 0x2efc20: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2efc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2efc24:
    // 0x2efc24: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2efc28:
    if (ctx->pc == 0x2EFC28u) {
        ctx->pc = 0x2EFC28u;
            // 0x2efc28: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC2Cu;
        goto label_2efc2c;
    }
    ctx->pc = 0x2EFC24u;
    {
        const bool branch_taken_0x2efc24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EFC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFC24u;
            // 0x2efc28: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc24) {
            ctx->pc = 0x2EFC34u;
            goto label_2efc34;
        }
    }
    ctx->pc = 0x2EFC2Cu;
label_2efc2c:
    // 0x2efc2c: 0x100003b4  b           . + 4 + (0x3B4 << 2)
label_2efc30:
    if (ctx->pc == 0x2EFC30u) {
        ctx->pc = 0x2EFC30u;
            // 0x2efc30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2EFC34u;
        goto label_2efc34;
    }
    ctx->pc = 0x2EFC2Cu;
    {
        const bool branch_taken_0x2efc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFC2Cu;
            // 0x2efc30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc2c) {
            ctx->pc = 0x2F0B00u;
            goto label_2f0b00;
        }
    }
    ctx->pc = 0x2EFC34u;
label_2efc34:
    // 0x2efc34: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2efc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2efc38:
    // 0x2efc38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2efc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2efc3c:
    // 0x2efc3c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2efc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2efc40:
    // 0x2efc40: 0x8e452e5c  lw          $a1, 0x2E5C($s2)
    ctx->pc = 0x2efc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11868)));
label_2efc44:
    // 0x2efc44: 0xc0a0f58  jal         func_283D60
label_2efc48:
    if (ctx->pc == 0x2EFC48u) {
        ctx->pc = 0x2EFC48u;
            // 0x2efc48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC4Cu;
        goto label_2efc4c;
    }
    ctx->pc = 0x2EFC44u;
    SET_GPR_U32(ctx, 31, 0x2EFC4Cu);
    ctx->pc = 0x2EFC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFC44u;
            // 0x2efc48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC4Cu; }
        if (ctx->pc != 0x2EFC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC4Cu; }
        if (ctx->pc != 0x2EFC4Cu) { return; }
    }
    ctx->pc = 0x2EFC4Cu;
label_2efc4c:
    // 0x2efc4c: 0xc064220  jal         func_190880
label_2efc50:
    if (ctx->pc == 0x2EFC50u) {
        ctx->pc = 0x2EFC50u;
            // 0x2efc50: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC54u;
        goto label_2efc54;
    }
    ctx->pc = 0x2EFC4Cu;
    SET_GPR_U32(ctx, 31, 0x2EFC54u);
    ctx->pc = 0x2EFC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFC4Cu;
            // 0x2efc50: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC54u; }
        if (ctx->pc != 0x2EFC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC54u; }
        if (ctx->pc != 0x2EFC54u) { return; }
    }
    ctx->pc = 0x2EFC54u;
label_2efc54:
    // 0x2efc54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2efc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2efc58:
    // 0x2efc58: 0xc0a0f80  jal         func_283E00
label_2efc5c:
    if (ctx->pc == 0x2EFC5Cu) {
        ctx->pc = 0x2EFC5Cu;
            // 0x2efc5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC60u;
        goto label_2efc60;
    }
    ctx->pc = 0x2EFC58u;
    SET_GPR_U32(ctx, 31, 0x2EFC60u);
    ctx->pc = 0x2EFC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFC58u;
            // 0x2efc5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283E00u;
    if (runtime->hasFunction(0x283E00u)) {
        auto targetFn = runtime->lookupFunction(0x283E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC60u; }
        if (ctx->pc != 0x2EFC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainMapNo__6CSceneFv_0x283e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC60u; }
        if (ctx->pc != 0x2EFC60u) { return; }
    }
    ctx->pc = 0x2EFC60u;
label_2efc60:
    // 0x2efc60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2efc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2efc64:
    // 0x2efc64: 0xc0bd9d4  jal         func_2F6750
label_2efc68:
    if (ctx->pc == 0x2EFC68u) {
        ctx->pc = 0x2EFC68u;
            // 0x2efc68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC6Cu;
        goto label_2efc6c;
    }
    ctx->pc = 0x2EFC64u;
    SET_GPR_U32(ctx, 31, 0x2EFC6Cu);
    ctx->pc = 0x2EFC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFC64u;
            // 0x2efc68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6750u;
    if (runtime->hasFunction(0x2F6750u)) {
        auto targetFn = runtime->lookupFunction(0x2F6750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC6Cu; }
        if (ctx->pc != 0x2EFC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapFlag__9CSaveDataFi_0x2f6750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC6Cu; }
        if (ctx->pc != 0x2EFC6Cu) { return; }
    }
    ctx->pc = 0x2EFC6Cu;
label_2efc6c:
    // 0x2efc6c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2efc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_2efc70:
    // 0x2efc70: 0x8e452e50  lw          $a1, 0x2E50($s2)
    ctx->pc = 0x2efc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11856)));
label_2efc74:
    // 0x2efc74: 0xc0a0ed8  jal         func_283B60
label_2efc78:
    if (ctx->pc == 0x2EFC78u) {
        ctx->pc = 0x2EFC78u;
            // 0x2efc78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC7Cu;
        goto label_2efc7c;
    }
    ctx->pc = 0x2EFC74u;
    SET_GPR_U32(ctx, 31, 0x2EFC7Cu);
    ctx->pc = 0x2EFC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFC74u;
            // 0x2efc78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC7Cu; }
        if (ctx->pc != 0x2EFC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC7Cu; }
        if (ctx->pc != 0x2EFC7Cu) { return; }
    }
    ctx->pc = 0x2EFC7Cu;
label_2efc7c:
    // 0x2efc7c: 0x8e452e54  lw          $a1, 0x2E54($s2)
    ctx->pc = 0x2efc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11860)));
label_2efc80:
    // 0x2efc80: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2efc80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2efc84:
    // 0x2efc84: 0xc0a0e30  jal         func_2838C0
label_2efc88:
    if (ctx->pc == 0x2EFC88u) {
        ctx->pc = 0x2EFC88u;
            // 0x2efc88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC8Cu;
        goto label_2efc8c;
    }
    ctx->pc = 0x2EFC84u;
    SET_GPR_U32(ctx, 31, 0x2EFC8Cu);
    ctx->pc = 0x2EFC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFC84u;
            // 0x2efc88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC8Cu; }
        if (ctx->pc != 0x2EFC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC8Cu; }
        if (ctx->pc != 0x2EFC8Cu) { return; }
    }
    ctx->pc = 0x2EFC8Cu;
label_2efc8c:
    // 0x2efc8c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_2efc90:
    if (ctx->pc == 0x2EFC90u) {
        ctx->pc = 0x2EFC90u;
            // 0x2efc90: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC94u;
        goto label_2efc94;
    }
    ctx->pc = 0x2EFC8Cu;
    {
        const bool branch_taken_0x2efc8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFC8Cu;
            // 0x2efc90: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc8c) {
            ctx->pc = 0x2EFCA4u;
            goto label_2efca4;
        }
    }
    ctx->pc = 0x2EFC94u;
label_2efc94:
    // 0x2efc94: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_2efc98:
    if (ctx->pc == 0x2EFC98u) {
        ctx->pc = 0x2EFC98u;
            // 0x2efc98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2EFC9Cu;
        goto label_2efc9c;
    }
    ctx->pc = 0x2EFC94u;
    {
        const bool branch_taken_0x2efc94 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFC94u;
            // 0x2efc98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc94) {
            ctx->pc = 0x2EFCA8u;
            goto label_2efca8;
        }
    }
    ctx->pc = 0x2EFC9Cu;
label_2efc9c:
    // 0x2efc9c: 0x16e00004  bnez        $s7, . + 4 + (0x4 << 2)
label_2efca0:
    if (ctx->pc == 0x2EFCA0u) {
        ctx->pc = 0x2EFCA0u;
            // 0x2efca0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFCA4u;
        goto label_2efca4;
    }
    ctx->pc = 0x2EFC9Cu;
    {
        const bool branch_taken_0x2efc9c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFC9Cu;
            // 0x2efca0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc9c) {
            ctx->pc = 0x2EFCB0u;
            goto label_2efcb0;
        }
    }
    ctx->pc = 0x2EFCA4u;
label_2efca4:
    // 0x2efca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2efca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2efca8:
    // 0x2efca8: 0x10000396  b           . + 4 + (0x396 << 2)
label_2efcac:
    if (ctx->pc == 0x2EFCACu) {
        ctx->pc = 0x2EFCACu;
            // 0x2efcac: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x2EFCB0u;
        goto label_2efcb0;
    }
    ctx->pc = 0x2EFCA8u;
    {
        const bool branch_taken_0x2efca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFCA8u;
            // 0x2efcac: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efca8) {
            ctx->pc = 0x2F0B04u;
            goto label_2f0b04;
        }
    }
    ctx->pc = 0x2EFCB0u;
label_2efcb0:
    // 0x2efcb0: 0xc04c574  jal         func_1315D0
label_2efcb4:
    if (ctx->pc == 0x2EFCB4u) {
        ctx->pc = 0x2EFCB4u;
            // 0x2efcb4: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x2EFCB8u;
        goto label_2efcb8;
    }
    ctx->pc = 0x2EFCB0u;
    SET_GPR_U32(ctx, 31, 0x2EFCB8u);
    ctx->pc = 0x2EFCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFCB0u;
            // 0x2efcb4: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFCB8u; }
        if (ctx->pc != 0x2EFCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFCB8u; }
        if (ctx->pc != 0x2EFCB8u) { return; }
    }
    ctx->pc = 0x2EFCB8u;
label_2efcb8:
    // 0x2efcb8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2efcb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2efcbc:
    // 0x2efcbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2efcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2efcc0:
    // 0x2efcc0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2efcc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2efcc4:
    // 0x2efcc4: 0x320f809  jalr        $t9
label_2efcc8:
    if (ctx->pc == 0x2EFCC8u) {
        ctx->pc = 0x2EFCC8u;
            // 0x2efcc8: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x2EFCCCu;
        goto label_2efccc;
    }
    ctx->pc = 0x2EFCC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EFCCCu);
        ctx->pc = 0x2EFCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFCC4u;
            // 0x2efcc8: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EFCCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EFCCCu; }
            if (ctx->pc != 0x2EFCCCu) { return; }
        }
        }
    }
    ctx->pc = 0x2EFCCCu;
label_2efccc:
    // 0x2efccc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2efcccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2efcd0:
    // 0x2efcd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2efcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2efcd4:
    // 0x2efcd4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2efcd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2efcd8:
    // 0x2efcd8: 0x320f809  jalr        $t9
label_2efcdc:
    if (ctx->pc == 0x2EFCDCu) {
        ctx->pc = 0x2EFCDCu;
            // 0x2efcdc: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x2EFCE0u;
        goto label_2efce0;
    }
    ctx->pc = 0x2EFCD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EFCE0u);
        ctx->pc = 0x2EFCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFCD8u;
            // 0x2efcdc: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EFCE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EFCE0u; }
            if (ctx->pc != 0x2EFCE0u) { return; }
        }
        }
    }
    ctx->pc = 0x2EFCE0u;
label_2efce0:
    // 0x2efce0: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x2efce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2efce4:
    // 0x2efce4: 0xc7a20120  lwc1        $f2, 0x120($sp)
    ctx->pc = 0x2efce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2efce8:
    // 0x2efce8: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x2efce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2efcec:
    // 0x2efcec: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x2efcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2efcf0:
    // 0x2efcf0: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x2efcf0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_2efcf4:
    // 0x2efcf4: 0xc047c76  jal         func_11F1D8
label_2efcf8:
    if (ctx->pc == 0x2EFCF8u) {
        ctx->pc = 0x2EFCF8u;
            // 0x2efcf8: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2EFCFCu;
        goto label_2efcfc;
    }
    ctx->pc = 0x2EFCF4u;
    SET_GPR_U32(ctx, 31, 0x2EFCFCu);
    ctx->pc = 0x2EFCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFCF4u;
            // 0x2efcf8: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFCFCu; }
        if (ctx->pc != 0x2EFCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFCFCu; }
        if (ctx->pc != 0x2EFCFCu) { return; }
    }
    ctx->pc = 0x2EFCFCu;
label_2efcfc:
    // 0x2efcfc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2efcfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2efd00:
    // 0x2efd00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2efd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2efd04:
    // 0x2efd04: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x2efd04u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_2efd08:
    // 0x2efd08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2efd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2efd0c:
    // 0x2efd0c: 0x8c22a498  lw          $v0, -0x5B68($at)
    ctx->pc = 0x2efd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943896)));
label_2efd10:
    // 0x2efd10: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2efd10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2efd14:
    // 0x2efd14: 0xc0a0e78  jal         func_2839E0
label_2efd18:
    if (ctx->pc == 0x2EFD18u) {
        ctx->pc = 0x2EFD18u;
            // 0x2efd18: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x2EFD1Cu;
        goto label_2efd1c;
    }
    ctx->pc = 0x2EFD14u;
    SET_GPR_U32(ctx, 31, 0x2EFD1Cu);
    ctx->pc = 0x2EFD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFD14u;
            // 0x2efd18: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2839E0u;
    if (runtime->hasFunction(0x2839E0u)) {
        auto targetFn = runtime->lookupFunction(0x2839E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD1Cu; }
        if (ctx->pc != 0x2EFD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMessage__6CSceneFi_0x2839e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD1Cu; }
        if (ctx->pc != 0x2EFD1Cu) { return; }
    }
    ctx->pc = 0x2EFD1Cu;
label_2efd1c:
    // 0x2efd1c: 0xafb2018c  sw          $s2, 0x18C($sp)
    ctx->pc = 0x2efd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 18));
label_2efd20:
    // 0x2efd20: 0x3c16003d  lui         $s6, 0x3D
    ctx->pc = 0x2efd20u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)61 << 16));
label_2efd24:
    // 0x2efd24: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2efd24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2efd28:
    // 0x2efd28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2efd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2efd2c:
    // 0x2efd2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2efd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2efd30:
    // 0x2efd30: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x2efd30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_2efd34:
    // 0x2efd34: 0x320f809  jalr        $t9
label_2efd38:
    if (ctx->pc == 0x2EFD38u) {
        ctx->pc = 0x2EFD38u;
            // 0x2efd38: 0x26d67b60  addiu       $s6, $s6, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 31584));
        ctx->pc = 0x2EFD3Cu;
        goto label_2efd3c;
    }
    ctx->pc = 0x2EFD34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EFD3Cu);
        ctx->pc = 0x2EFD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFD34u;
            // 0x2efd38: 0x26d67b60  addiu       $s6, $s6, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 31584));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EFD3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD3Cu; }
            if (ctx->pc != 0x2EFD3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2EFD3Cu;
label_2efd3c:
    // 0x2efd3c: 0x8e452e50  lw          $a1, 0x2E50($s2)
    ctx->pc = 0x2efd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11856)));
label_2efd40:
    // 0x2efd40: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2efd40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2efd44:
    // 0x2efd44: 0xc0b22dc  jal         func_2C8B70
label_2efd48:
    if (ctx->pc == 0x2EFD48u) {
        ctx->pc = 0x2EFD48u;
            // 0x2efd48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFD4Cu;
        goto label_2efd4c;
    }
    ctx->pc = 0x2EFD44u;
    SET_GPR_U32(ctx, 31, 0x2EFD4Cu);
    ctx->pc = 0x2EFD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFD44u;
            // 0x2efd48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B70u;
    if (runtime->hasFunction(0x2C8B70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD4Cu; }
        if (ctx->pc != 0x2EFD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawChara__6CSceneFi_0x2c8b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD4Cu; }
        if (ctx->pc != 0x2EFD4Cu) { return; }
    }
    ctx->pc = 0x2EFD4Cu;
label_2efd4c:
    // 0x2efd4c: 0x3c2f024  and         $fp, $fp, $v0
    ctx->pc = 0x2efd4cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) & GPR_U64(ctx, 2));
label_2efd50:
    // 0x2efd50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2efd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2efd54:
    // 0x2efd54: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x2efd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_2efd58:
    // 0x2efd58: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x2efd58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_2efd5c:
    // 0x2efd5c: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x2efd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_2efd60:
    // 0x2efd60: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2efd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_2efd64:
    // 0x2efd64: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x2efd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_2efd68:
    // 0x2efd68: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2efd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_2efd6c:
    // 0x2efd6c: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x2efd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_2efd70:
    // 0x2efd70: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2efd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_2efd74:
    // 0x2efd74: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2efd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2efd78:
    // 0x2efd78: 0x14450194  bne         $v0, $a1, . + 4 + (0x194 << 2)
label_2efd7c:
    if (ctx->pc == 0x2EFD7Cu) {
        ctx->pc = 0x2EFD7Cu;
            // 0x2efd7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFD80u;
        goto label_2efd80;
    }
    ctx->pc = 0x2EFD78u;
    {
        const bool branch_taken_0x2efd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2EFD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFD78u;
            // 0x2efd7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efd78) {
            ctx->pc = 0x2F03CCu;
            goto label_2f03cc;
        }
    }
    ctx->pc = 0x2EFD80u;
label_2efd80:
    // 0x2efd80: 0x12600356  beqz        $s3, . + 4 + (0x356 << 2)
label_2efd84:
    if (ctx->pc == 0x2EFD84u) {
        ctx->pc = 0x2EFD84u;
            // 0x2efd84: 0x26840090  addiu       $a0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->pc = 0x2EFD88u;
        goto label_2efd88;
    }
    ctx->pc = 0x2EFD80u;
    {
        const bool branch_taken_0x2efd80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFD80u;
            // 0x2efd84: 0x26840090  addiu       $a0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efd80) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2EFD88u;
label_2efd88:
    // 0x2efd88: 0xc04bff4  jal         func_12FFD0
label_2efd8c:
    if (ctx->pc == 0x2EFD8Cu) {
        ctx->pc = 0x2EFD90u;
        goto label_2efd90;
    }
    ctx->pc = 0x2EFD88u;
    SET_GPR_U32(ctx, 31, 0x2EFD90u);
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD90u; }
        if (ctx->pc != 0x2EFD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD90u; }
        if (ctx->pc != 0x2EFD90u) { return; }
    }
    ctx->pc = 0x2EFD90u;
label_2efd90:
    // 0x2efd90: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2efd90u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2efd94:
    // 0x2efd94: 0xc04bff4  jal         func_12FFD0
label_2efd98:
    if (ctx->pc == 0x2EFD98u) {
        ctx->pc = 0x2EFD98u;
            // 0x2efd98: 0x268400a0  addiu       $a0, $s4, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
        ctx->pc = 0x2EFD9Cu;
        goto label_2efd9c;
    }
    ctx->pc = 0x2EFD94u;
    SET_GPR_U32(ctx, 31, 0x2EFD9Cu);
    ctx->pc = 0x2EFD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFD94u;
            // 0x2efd98: 0x268400a0  addiu       $a0, $s4, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD9Cu; }
        if (ctx->pc != 0x2EFD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD9Cu; }
        if (ctx->pc != 0x2EFD9Cu) { return; }
    }
    ctx->pc = 0x2EFD9Cu;
label_2efd9c:
    // 0x2efd9c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2efd9cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2efda0:
    // 0x2efda0: 0xc04bff4  jal         func_12FFD0
label_2efda4:
    if (ctx->pc == 0x2EFDA4u) {
        ctx->pc = 0x2EFDA4u;
            // 0x2efda4: 0x268400b0  addiu       $a0, $s4, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
        ctx->pc = 0x2EFDA8u;
        goto label_2efda8;
    }
    ctx->pc = 0x2EFDA0u;
    SET_GPR_U32(ctx, 31, 0x2EFDA8u);
    ctx->pc = 0x2EFDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFDA0u;
            // 0x2efda4: 0x268400b0  addiu       $a0, $s4, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFDA8u; }
        if (ctx->pc != 0x2EFDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFDA8u; }
        if (ctx->pc != 0x2EFDA8u) { return; }
    }
    ctx->pc = 0x2EFDA8u;
label_2efda8:
    // 0x2efda8: 0x4615b036  c.le.s      $f22, $f21
    ctx->pc = 0x2efda8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2efdac:
    // 0x2efdac: 0x0  nop
    ctx->pc = 0x2efdacu;
    // NOP
label_2efdb0:
    // 0x2efdb0: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_2efdb4:
    if (ctx->pc == 0x2EFDB4u) {
        ctx->pc = 0x2EFDB8u;
        goto label_2efdb8;
    }
    ctx->pc = 0x2EFDB0u;
    {
        const bool branch_taken_0x2efdb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2efdb0) {
            ctx->pc = 0x2EFDDCu;
            goto label_2efddc;
        }
    }
    ctx->pc = 0x2EFDB8u;
label_2efdb8:
    // 0x2efdb8: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x2efdb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2efdbc:
    // 0x2efdbc: 0x0  nop
    ctx->pc = 0x2efdbcu;
    // NOP
label_2efdc0:
    // 0x2efdc0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2efdc4:
    if (ctx->pc == 0x2EFDC4u) {
        ctx->pc = 0x2EFDC8u;
        goto label_2efdc8;
    }
    ctx->pc = 0x2EFDC0u;
    {
        const bool branch_taken_0x2efdc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2efdc0) {
            ctx->pc = 0x2EFDD0u;
            goto label_2efdd0;
        }
    }
    ctx->pc = 0x2EFDC8u;
label_2efdc8:
    // 0x2efdc8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2efdcc:
    if (ctx->pc == 0x2EFDCCu) {
        ctx->pc = 0x2EFDD0u;
        goto label_2efdd0;
    }
    ctx->pc = 0x2EFDC8u;
    {
        const bool branch_taken_0x2efdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efdc8) {
            ctx->pc = 0x2EFDD4u;
            goto label_2efdd4;
        }
    }
    ctx->pc = 0x2EFDD0u;
label_2efdd0:
    // 0x2efdd0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2efdd0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2efdd4:
    // 0x2efdd4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2efdd8:
    if (ctx->pc == 0x2EFDD8u) {
        ctx->pc = 0x2EFDD8u;
            // 0x2efdd8: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x2EFDDCu;
        goto label_2efddc;
    }
    ctx->pc = 0x2EFDD4u;
    {
        const bool branch_taken_0x2efdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFDD4u;
            // 0x2efdd8: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efdd4) {
            ctx->pc = 0x2EFE00u;
            goto label_2efe00;
        }
    }
    ctx->pc = 0x2EFDDCu;
label_2efddc:
    // 0x2efddc: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x2efddcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2efde0:
    // 0x2efde0: 0x0  nop
    ctx->pc = 0x2efde0u;
    // NOP
label_2efde4:
    // 0x2efde4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2efde8:
    if (ctx->pc == 0x2EFDE8u) {
        ctx->pc = 0x2EFDECu;
        goto label_2efdec;
    }
    ctx->pc = 0x2EFDE4u;
    {
        const bool branch_taken_0x2efde4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2efde4) {
            ctx->pc = 0x2EFDF4u;
            goto label_2efdf4;
        }
    }
    ctx->pc = 0x2EFDECu;
label_2efdec:
    // 0x2efdec: 0x10000003  b           . + 4 + (0x3 << 2)
label_2efdf0:
    if (ctx->pc == 0x2EFDF0u) {
        ctx->pc = 0x2EFDF0u;
            // 0x2efdf0: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x2EFDF4u;
        goto label_2efdf4;
    }
    ctx->pc = 0x2EFDECu;
    {
        const bool branch_taken_0x2efdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFDECu;
            // 0x2efdf0: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efdec) {
            ctx->pc = 0x2EFDFCu;
            goto label_2efdfc;
        }
    }
    ctx->pc = 0x2EFDF4u;
label_2efdf4:
    // 0x2efdf4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2efdf4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2efdf8:
    // 0x2efdf8: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x2efdf8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
label_2efdfc:
    // 0x2efdfc: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2efdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2efe00:
    // 0x2efe00: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x2efe00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2efe04:
    // 0x2efe04: 0x10200335  beqz        $at, . + 4 + (0x335 << 2)
label_2efe08:
    if (ctx->pc == 0x2EFE08u) {
        ctx->pc = 0x2EFE08u;
            // 0x2efe08: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2EFE0Cu;
        goto label_2efe0c;
    }
    ctx->pc = 0x2EFE04u;
    {
        const bool branch_taken_0x2efe04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE04u;
            // 0x2efe08: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efe04) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2EFE0Cu;
label_2efe0c:
    // 0x2efe0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2efe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2efe10:
    // 0x2efe10: 0x24631600  addiu       $v1, $v1, 0x1600
    ctx->pc = 0x2efe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
label_2efe14:
    // 0x2efe14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2efe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2efe18:
    // 0x2efe18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2efe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2efe1c:
    // 0x2efe1c: 0x400008  jr          $v0
label_2efe20:
    if (ctx->pc == 0x2EFE20u) {
        ctx->pc = 0x2EFE24u;
        goto label_2efe24;
    }
    ctx->pc = 0x2EFE1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EFE24u: goto label_2efe24;
            case 0x2EFF68u: goto label_2eff68;
            case 0x2F0100u: goto label_2f0100;
            case 0x2F01F4u: goto label_2f01f4;
            case 0x2F0298u: goto label_2f0298;
            case 0x2F0394u: goto label_2f0394;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2EFE24u;
label_2efe24:
    // 0x2efe24: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2efe24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2efe28:
    // 0x2efe28: 0x26840038  addiu       $a0, $s4, 0x38
    ctx->pc = 0x2efe28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
label_2efe2c:
    // 0x2efe2c: 0xc04a38a  jal         func_128E28
label_2efe30:
    if (ctx->pc == 0x2EFE30u) {
        ctx->pc = 0x2EFE30u;
            // 0x2efe30: 0x24a51588  addiu       $a1, $a1, 0x1588 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5512));
        ctx->pc = 0x2EFE34u;
        goto label_2efe34;
    }
    ctx->pc = 0x2EFE2Cu;
    SET_GPR_U32(ctx, 31, 0x2EFE34u);
    ctx->pc = 0x2EFE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE2Cu;
            // 0x2efe30: 0x24a51588  addiu       $a1, $a1, 0x1588 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFE34u; }
        if (ctx->pc != 0x2EFE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFE34u; }
        if (ctx->pc != 0x2EFE34u) { return; }
    }
    ctx->pc = 0x2EFE34u;
label_2efe34:
    // 0x2efe34: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_2efe38:
    if (ctx->pc == 0x2EFE38u) {
        ctx->pc = 0x2EFE38u;
            // 0x2efe38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2EFE3Cu;
        goto label_2efe3c;
    }
    ctx->pc = 0x2EFE34u;
    {
        const bool branch_taken_0x2efe34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE34u;
            // 0x2efe38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efe34) {
            ctx->pc = 0x2EFF30u;
            goto label_2eff30;
        }
    }
    ctx->pc = 0x2EFE3Cu;
label_2efe3c:
    // 0x2efe3c: 0x26840128  addiu       $a0, $s4, 0x128
    ctx->pc = 0x2efe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 296));
label_2efe40:
    // 0x2efe40: 0xc04a3dc  jal         func_128F70
label_2efe44:
    if (ctx->pc == 0x2EFE44u) {
        ctx->pc = 0x2EFE44u;
            // 0x2efe44: 0x26850038  addiu       $a1, $s4, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
        ctx->pc = 0x2EFE48u;
        goto label_2efe48;
    }
    ctx->pc = 0x2EFE40u;
    SET_GPR_U32(ctx, 31, 0x2EFE48u);
    ctx->pc = 0x2EFE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE40u;
            // 0x2efe44: 0x26850038  addiu       $a1, $s4, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFE48u; }
        if (ctx->pc != 0x2EFE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFE48u; }
        if (ctx->pc != 0x2EFE48u) { return; }
    }
    ctx->pc = 0x2EFE48u;
label_2efe48:
    // 0x2efe48: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x2efe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_2efe4c:
    // 0x2efe4c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2efe4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2efe50:
    // 0x2efe50: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_2efe54:
    if (ctx->pc == 0x2EFE54u) {
        ctx->pc = 0x2EFE58u;
        goto label_2efe58;
    }
    ctx->pc = 0x2EFE50u;
    {
        const bool branch_taken_0x2efe50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efe50) {
            ctx->pc = 0x2EFF00u;
            goto label_2eff00;
        }
    }
    ctx->pc = 0x2EFE58u;
label_2efe58:
    // 0x2efe58: 0x8e8500d0  lw          $a1, 0xD0($s4)
    ctx->pc = 0x2efe58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
label_2efe5c:
    // 0x2efe5c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2efe5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2efe60:
    // 0x2efe60: 0xc06c310  jal         func_1B0C40
label_2efe64:
    if (ctx->pc == 0x2EFE64u) {
        ctx->pc = 0x2EFE64u;
            // 0x2efe64: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2EFE68u;
        goto label_2efe68;
    }
    ctx->pc = 0x2EFE60u;
    SET_GPR_U32(ctx, 31, 0x2EFE68u);
    ctx->pc = 0x2EFE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE60u;
            // 0x2efe64: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFE68u; }
        if (ctx->pc != 0x2EFE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFE68u; }
        if (ctx->pc != 0x2EFE68u) { return; }
    }
    ctx->pc = 0x2EFE68u;
label_2efe68:
    // 0x2efe68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2efe6c:
    if (ctx->pc == 0x2EFE6Cu) {
        ctx->pc = 0x2EFE6Cu;
            // 0x2efe6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFE70u;
        goto label_2efe70;
    }
    ctx->pc = 0x2EFE68u;
    {
        const bool branch_taken_0x2efe68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE68u;
            // 0x2efe6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efe68) {
            ctx->pc = 0x2EFE80u;
            goto label_2efe80;
        }
    }
    ctx->pc = 0x2EFE70u;
label_2efe70:
    // 0x2efe70: 0xc06d69c  jal         func_1B5A70
label_2efe74:
    if (ctx->pc == 0x2EFE74u) {
        ctx->pc = 0x2EFE74u;
            // 0x2efe74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFE78u;
        goto label_2efe78;
    }
    ctx->pc = 0x2EFE70u;
    SET_GPR_U32(ctx, 31, 0x2EFE78u);
    ctx->pc = 0x2EFE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE70u;
            // 0x2efe74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5A70u;
    if (runtime->hasFunction(0x1B5A70u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFE78u; }
        if (ctx->pc != 0x2EFE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLiveNPC__10CEditPartsFv_0x1b5a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFE78u; }
        if (ctx->pc != 0x2EFE78u) { return; }
    }
    ctx->pc = 0x2EFE78u;
label_2efe78:
    // 0x2efe78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2efe78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2efe7c:
    // 0x2efe7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2efe7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2efe80:
    // 0x2efe80: 0xc0c65c4  jal         func_319710
label_2efe84:
    if (ctx->pc == 0x2EFE84u) {
        ctx->pc = 0x2EFE88u;
        goto label_2efe88;
    }
    ctx->pc = 0x2EFE80u;
    SET_GPR_U32(ctx, 31, 0x2EFE88u);
    ctx->pc = 0x319710u;
    if (runtime->hasFunction(0x319710u)) {
        auto targetFn = runtime->lookupFunction(0x319710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFE88u; }
        if (ctx->pc != 0x2EFE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVillagerInfo__Fi_0x319710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFE88u; }
        if (ctx->pc != 0x2EFE88u) { return; }
    }
    ctx->pc = 0x2EFE88u;
label_2efe88:
    // 0x2efe88: 0xae9000ec  sw          $s0, 0xEC($s4)
    ctx->pc = 0x2efe88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 236), GPR_U32(ctx, 16));
label_2efe8c:
    // 0x2efe8c: 0x26840128  addiu       $a0, $s4, 0x128
    ctx->pc = 0x2efe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 296));
label_2efe90:
    // 0x2efe90: 0xc04a422  jal         func_129088
label_2efe94:
    if (ctx->pc == 0x2EFE94u) {
        ctx->pc = 0x2EFE94u;
            // 0x2efe94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFE98u;
        goto label_2efe98;
    }
    ctx->pc = 0x2EFE90u;
    SET_GPR_U32(ctx, 31, 0x2EFE98u);
    ctx->pc = 0x2EFE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE90u;
            // 0x2efe94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFE98u; }
        if (ctx->pc != 0x2EFE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFE98u; }
        if (ctx->pc != 0x2EFE98u) { return; }
    }
    ctx->pc = 0x2EFE98u;
label_2efe98:
    // 0x2efe98: 0x2c410004  sltiu       $at, $v0, 0x4
    ctx->pc = 0x2efe98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2efe9c:
    // 0x2efe9c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_2efea0:
    if (ctx->pc == 0x2EFEA0u) {
        ctx->pc = 0x2EFEA4u;
        goto label_2efea4;
    }
    ctx->pc = 0x2EFE9Cu;
    {
        const bool branch_taken_0x2efe9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efe9c) {
            ctx->pc = 0x2EFF00u;
            goto label_2eff00;
        }
    }
    ctx->pc = 0x2EFEA4u;
label_2efea4:
    // 0x2efea4: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_2efea8:
    if (ctx->pc == 0x2EFEA8u) {
        ctx->pc = 0x2EFEA8u;
            // 0x2efea8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2EFEACu;
        goto label_2efeac;
    }
    ctx->pc = 0x2EFEA4u;
    {
        const bool branch_taken_0x2efea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFEA4u;
            // 0x2efea8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efea4) {
            ctx->pc = 0x2EFEF4u;
            goto label_2efef4;
        }
    }
    ctx->pc = 0x2EFEACu;
label_2efeac:
    // 0x2efeac: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2efeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_2efeb0:
    // 0x2efeb0: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x2efeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2efeb4:
    // 0x2efeb4: 0x2442cc30  addiu       $v0, $v0, -0x33D0
    ctx->pc = 0x2efeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954032));
label_2efeb8:
    // 0x2efeb8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2efeb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2efebc:
    // 0x2efebc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2efebcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2efec0:
    // 0x2efec0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2efec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2efec4:
    // 0x2efec4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_2efec8:
    if (ctx->pc == 0x2EFEC8u) {
        ctx->pc = 0x2EFEC8u;
            // 0x2efec8: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->pc = 0x2EFECCu;
        goto label_2efecc;
    }
    ctx->pc = 0x2EFEC4u;
    {
        const bool branch_taken_0x2efec4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2EFEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFEC4u;
            // 0x2efec8: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efec4) {
            ctx->pc = 0x2EFED8u;
            goto label_2efed8;
        }
    }
    ctx->pc = 0x2EFECCu;
label_2efecc:
    // 0x2efecc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2efed0:
    if (ctx->pc == 0x2EFED0u) {
        ctx->pc = 0x2EFED4u;
        goto label_2efed4;
    }
    ctx->pc = 0x2EFECCu;
    {
        const bool branch_taken_0x2efecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efecc) {
            ctx->pc = 0x2EFED8u;
            goto label_2efed8;
        }
    }
    ctx->pc = 0x2EFED4u;
label_2efed4:
    // 0x2efed4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2efed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_2efed8:
    // 0x2efed8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2efed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2efedc:
    // 0x2efedc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2efedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2efee0:
    // 0x2efee0: 0x8c450160  lw          $a1, 0x160($v0)
    ctx->pc = 0x2efee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
label_2efee4:
    // 0x2efee4: 0xc04a2da  jal         func_128B68
label_2efee8:
    if (ctx->pc == 0x2EFEE8u) {
        ctx->pc = 0x2EFEE8u;
            // 0x2efee8: 0x26840128  addiu       $a0, $s4, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 296));
        ctx->pc = 0x2EFEECu;
        goto label_2efeec;
    }
    ctx->pc = 0x2EFEE4u;
    SET_GPR_U32(ctx, 31, 0x2EFEECu);
    ctx->pc = 0x2EFEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFEE4u;
            // 0x2efee8: 0x26840128  addiu       $a0, $s4, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFEECu; }
        if (ctx->pc != 0x2EFEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFEECu; }
        if (ctx->pc != 0x2EFEECu) { return; }
    }
    ctx->pc = 0x2EFEECu;
label_2efeec:
    // 0x2efeec: 0x10000005  b           . + 4 + (0x5 << 2)
label_2efef0:
    if (ctx->pc == 0x2EFEF0u) {
        ctx->pc = 0x2EFEF0u;
            // 0x2efef0: 0xc68c00b0  lwc1        $f12, 0xB0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2EFEF4u;
        goto label_2efef4;
    }
    ctx->pc = 0x2EFEECu;
    {
        const bool branch_taken_0x2efeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFEECu;
            // 0x2efef0: 0xc68c00b0  lwc1        $f12, 0xB0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efeec) {
            ctx->pc = 0x2EFF04u;
            goto label_2eff04;
        }
    }
    ctx->pc = 0x2EFEF4u;
label_2efef4:
    // 0x2efef4: 0x26840128  addiu       $a0, $s4, 0x128
    ctx->pc = 0x2efef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 296));
label_2efef8:
    // 0x2efef8: 0xc04a2da  jal         func_128B68
label_2efefc:
    if (ctx->pc == 0x2EFEFCu) {
        ctx->pc = 0x2EFEFCu;
            // 0x2efefc: 0x24a51568  addiu       $a1, $a1, 0x1568 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5480));
        ctx->pc = 0x2EFF00u;
        goto label_2eff00;
    }
    ctx->pc = 0x2EFEF8u;
    SET_GPR_U32(ctx, 31, 0x2EFF00u);
    ctx->pc = 0x2EFEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFEF8u;
            // 0x2efefc: 0x24a51568  addiu       $a1, $a1, 0x1568 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF00u; }
        if (ctx->pc != 0x2EFF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF00u; }
        if (ctx->pc != 0x2EFF00u) { return; }
    }
    ctx->pc = 0x2EFF00u;
label_2eff00:
    // 0x2eff00: 0xc68c00b0  lwc1        $f12, 0xB0($s4)
    ctx->pc = 0x2eff00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2eff04:
    // 0x2eff04: 0xc047c76  jal         func_11F1D8
label_2eff08:
    if (ctx->pc == 0x2EFF08u) {
        ctx->pc = 0x2EFF08u;
            // 0x2eff08: 0xc68d00b8  lwc1        $f13, 0xB8($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x2EFF0Cu;
        goto label_2eff0c;
    }
    ctx->pc = 0x2EFF04u;
    SET_GPR_U32(ctx, 31, 0x2EFF0Cu);
    ctx->pc = 0x2EFF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF04u;
            // 0x2eff08: 0xc68d00b8  lwc1        $f13, 0xB8($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF0Cu; }
        if (ctx->pc != 0x2EFF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF0Cu; }
        if (ctx->pc != 0x2EFF0Cu) { return; }
    }
    ctx->pc = 0x2EFF0Cu;
label_2eff0c:
    // 0x2eff0c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2eff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2eff10:
    // 0x2eff10: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2eff10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2eff14:
    // 0x2eff14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eff14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2eff18:
    // 0x2eff18: 0xc04c374  jal         func_130DD0
label_2eff1c:
    if (ctx->pc == 0x2EFF1Cu) {
        ctx->pc = 0x2EFF1Cu;
            // 0x2eff1c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2EFF20u;
        goto label_2eff20;
    }
    ctx->pc = 0x2EFF18u;
    SET_GPR_U32(ctx, 31, 0x2EFF20u);
    ctx->pc = 0x2EFF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF18u;
            // 0x2eff1c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF20u; }
        if (ctx->pc != 0x2EFF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF20u; }
        if (ctx->pc != 0x2EFF20u) { return; }
    }
    ctx->pc = 0x2EFF20u;
label_2eff20:
    // 0x2eff20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2eff20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2eff24:
    // 0x2eff24: 0xc0bb224  jal         func_2EC890
label_2eff28:
    if (ctx->pc == 0x2EFF28u) {
        ctx->pc = 0x2EFF28u;
            // 0x2eff28: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2EFF2Cu;
        goto label_2eff2c;
    }
    ctx->pc = 0x2EFF24u;
    SET_GPR_U32(ctx, 31, 0x2EFF2Cu);
    ctx->pc = 0x2EFF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF24u;
            // 0x2eff28: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC890u;
    if (runtime->hasFunction(0x2EC890u)) {
        auto targetFn = runtime->lookupFunction(0x2EC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF2Cu; }
        if (ctx->pc != 0x2EFF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotBack__14CCameraControlFf_0x2ec890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF2Cu; }
        if (ctx->pc != 0x2EFF2Cu) { return; }
    }
    ctx->pc = 0x2EFF2Cu;
label_2eff2c:
    // 0x2eff2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2eff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2eff30:
    // 0x2eff30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eff30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eff34:
    // 0x2eff34: 0xae820148  sw          $v0, 0x148($s4)
    ctx->pc = 0x2eff34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 2));
label_2eff38:
    // 0x2eff38: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2eff38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2eff3c:
    // 0x2eff3c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2eff3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2eff40:
    // 0x2eff40: 0x320f809  jalr        $t9
label_2eff44:
    if (ctx->pc == 0x2EFF44u) {
        ctx->pc = 0x2EFF44u;
            // 0x2eff44: 0x26850100  addiu       $a1, $s4, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
        ctx->pc = 0x2EFF48u;
        goto label_2eff48;
    }
    ctx->pc = 0x2EFF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EFF48u);
        ctx->pc = 0x2EFF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF40u;
            // 0x2eff44: 0x26850100  addiu       $a1, $s4, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EFF48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF48u; }
            if (ctx->pc != 0x2EFF48u) { return; }
        }
        }
    }
    ctx->pc = 0x2EFF48u;
label_2eff48:
    // 0x2eff48: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2eff48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2eff4c:
    // 0x2eff4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eff4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eff50:
    // 0x2eff50: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2eff50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2eff54:
    // 0x2eff54: 0x320f809  jalr        $t9
label_2eff58:
    if (ctx->pc == 0x2EFF58u) {
        ctx->pc = 0x2EFF58u;
            // 0x2eff58: 0x26850110  addiu       $a1, $s4, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
        ctx->pc = 0x2EFF5Cu;
        goto label_2eff5c;
    }
    ctx->pc = 0x2EFF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EFF5Cu);
        ctx->pc = 0x2EFF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF54u;
            // 0x2eff58: 0x26850110  addiu       $a1, $s4, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EFF5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF5Cu; }
            if (ctx->pc != 0x2EFF5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2EFF5Cu;
label_2eff5c:
    // 0x2eff5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eff60:
    // 0x2eff60: 0x100002de  b           . + 4 + (0x2DE << 2)
label_2eff64:
    if (ctx->pc == 0x2EFF64u) {
        ctx->pc = 0x2EFF64u;
            // 0x2eff64: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x2EFF68u;
        goto label_2eff68;
    }
    ctx->pc = 0x2EFF60u;
    {
        const bool branch_taken_0x2eff60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF60u;
            // 0x2eff64: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eff60) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2EFF68u;
label_2eff68:
    // 0x2eff68: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2eff68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2eff6c:
    // 0x2eff6c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2eff6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2eff70:
    // 0x2eff70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eff70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eff74:
    // 0x2eff74: 0x24a51590  addiu       $a1, $a1, 0x1590
    ctx->pc = 0x2eff74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5520));
label_2eff78:
    // 0x2eff78: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2eff78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2eff7c:
    // 0x2eff7c: 0x320f809  jalr        $t9
label_2eff80:
    if (ctx->pc == 0x2EFF80u) {
        ctx->pc = 0x2EFF80u;
            // 0x2eff80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFF84u;
        goto label_2eff84;
    }
    ctx->pc = 0x2EFF7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EFF84u);
        ctx->pc = 0x2EFF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF7Cu;
            // 0x2eff80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EFF84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF84u; }
            if (ctx->pc != 0x2EFF84u) { return; }
        }
        }
    }
    ctx->pc = 0x2EFF84u;
label_2eff84:
    // 0x2eff84: 0xc04bc8c  jal         func_12F230
label_2eff88:
    if (ctx->pc == 0x2EFF88u) {
        ctx->pc = 0x2EFF88u;
            // 0x2eff88: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x2EFF8Cu;
        goto label_2eff8c;
    }
    ctx->pc = 0x2EFF84u;
    SET_GPR_U32(ctx, 31, 0x2EFF8Cu);
    ctx->pc = 0x2EFF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF84u;
            // 0x2eff88: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF8Cu; }
        if (ctx->pc != 0x2EFF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF8Cu; }
        if (ctx->pc != 0x2EFF8Cu) { return; }
    }
    ctx->pc = 0x2EFF8Cu;
label_2eff8c:
    // 0x2eff8c: 0xc68d00b8  lwc1        $f13, 0xB8($s4)
    ctx->pc = 0x2eff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2eff90:
    // 0x2eff90: 0xc047c76  jal         func_11F1D8
label_2eff94:
    if (ctx->pc == 0x2EFF94u) {
        ctx->pc = 0x2EFF94u;
            // 0x2eff94: 0xc68c00b0  lwc1        $f12, 0xB0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2EFF98u;
        goto label_2eff98;
    }
    ctx->pc = 0x2EFF90u;
    SET_GPR_U32(ctx, 31, 0x2EFF98u);
    ctx->pc = 0x2EFF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF90u;
            // 0x2eff94: 0xc68c00b0  lwc1        $f12, 0xB0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF98u; }
        if (ctx->pc != 0x2EFF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF98u; }
        if (ctx->pc != 0x2EFF98u) { return; }
    }
    ctx->pc = 0x2EFF98u;
label_2eff98:
    // 0x2eff98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2eff98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2eff9c:
    // 0x2eff9c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2eff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2effa0:
    // 0x2effa0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2effa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2effa4:
    // 0x2effa4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2effa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2effa8:
    // 0x2effa8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2effa8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2effac:
    // 0x2effac: 0x268600c0  addiu       $a2, $s4, 0xC0
    ctx->pc = 0x2effacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
label_2effb0:
    // 0x2effb0: 0xc04c294  jal         func_130A50
label_2effb4:
    if (ctx->pc == 0x2EFFB4u) {
        ctx->pc = 0x2EFFB4u;
            // 0x2effb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFFB8u;
        goto label_2effb8;
    }
    ctx->pc = 0x2EFFB0u;
    SET_GPR_U32(ctx, 31, 0x2EFFB8u);
    ctx->pc = 0x2EFFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFFB0u;
            // 0x2effb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130A50u;
    if (runtime->hasFunction(0x130A50u)) {
        auto targetFn = runtime->lookupFunction(0x130A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFFB8u; }
        if (ctx->pc != 0x2EFFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorInterpolate__FPfPfPffi_0x130a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFFB8u; }
        if (ctx->pc != 0x2EFFB8u) { return; }
    }
    ctx->pc = 0x2EFFB8u;
label_2effb8:
    // 0x2effb8: 0xc7ac0134  lwc1        $f12, 0x134($sp)
    ctx->pc = 0x2effb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2effbc:
    // 0x2effbc: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2effbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_2effc0:
    // 0x2effc0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2effc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2effc4:
    // 0x2effc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2effc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2effc8:
    // 0x2effc8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2effc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2effcc:
    // 0x2effcc: 0xc04c2d8  jal         func_130B60
label_2effd0:
    if (ctx->pc == 0x2EFFD0u) {
        ctx->pc = 0x2EFFD0u;
            // 0x2effd0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2EFFD4u;
        goto label_2effd4;
    }
    ctx->pc = 0x2EFFCCu;
    SET_GPR_U32(ctx, 31, 0x2EFFD4u);
    ctx->pc = 0x2EFFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFFCCu;
            // 0x2effd0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130B60u;
    if (runtime->hasFunction(0x130B60u)) {
        auto targetFn = runtime->lookupFunction(0x130B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFFD4u; }
        if (ctx->pc != 0x2EFFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleInterpolate__Ffffi_0x130b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFFD4u; }
        if (ctx->pc != 0x2EFFD4u) { return; }
    }
    ctx->pc = 0x2EFFD4u;
label_2effd4:
    // 0x2effd4: 0x27b00144  addiu       $s0, $sp, 0x144
    ctx->pc = 0x2effd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_2effd8:
    // 0x2effd8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2effd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_2effdc:
    // 0x2effdc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2effdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2effe0:
    // 0x2effe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2effe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2effe4:
    // 0x2effe4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2effe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2effe8:
    // 0x2effe8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2effe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2effec:
    // 0x2effec: 0x0  nop
    ctx->pc = 0x2effecu;
    // NOP
label_2efff0:
    // 0x2efff0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2efff4:
    if (ctx->pc == 0x2EFFF4u) {
        ctx->pc = 0x2EFFF8u;
        goto label_2efff8;
    }
    ctx->pc = 0x2EFFF0u;
    {
        const bool branch_taken_0x2efff0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2efff0) {
            ctx->pc = 0x2F001Cu;
            goto label_2f001c;
        }
    }
    ctx->pc = 0x2EFFF8u;
label_2efff8:
    // 0x2efff8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2efff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2efffc:
    // 0x2efffc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2efffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f0000:
    // 0x2f0000: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f0000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f0004:
    // 0x2f0004: 0x320f809  jalr        $t9
label_2f0008:
    if (ctx->pc == 0x2F0008u) {
        ctx->pc = 0x2F0008u;
            // 0x2f0008: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x2F000Cu;
        goto label_2f000c;
    }
    ctx->pc = 0x2F0004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F000Cu);
        ctx->pc = 0x2F0008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0004u;
            // 0x2f0008: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F000Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F000Cu; }
            if (ctx->pc != 0x2F000Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F000Cu;
label_2f000c:
    // 0x2f000c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2f000cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2f0010:
    // 0x2f0010: 0xc04c028  jal         func_1300A0
label_2f0014:
    if (ctx->pc == 0x2F0014u) {
        ctx->pc = 0x2F0014u;
            // 0x2f0014: 0x268500c0  addiu       $a1, $s4, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
        ctx->pc = 0x2F0018u;
        goto label_2f0018;
    }
    ctx->pc = 0x2F0010u;
    SET_GPR_U32(ctx, 31, 0x2F0018u);
    ctx->pc = 0x2F0014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0010u;
            // 0x2f0014: 0x268500c0  addiu       $a1, $s4, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0018u; }
        if (ctx->pc != 0x2F0018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0018u; }
        if (ctx->pc != 0x2F0018u) { return; }
    }
    ctx->pc = 0x2F0018u;
label_2f0018:
    // 0x2f0018: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2f0018u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2f001c:
    // 0x2f001c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2f001cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f0020:
    // 0x2f0020: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f0020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f0024:
    // 0x2f0024: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2f0024u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2f0028:
    // 0x2f0028: 0x320f809  jalr        $t9
label_2f002c:
    if (ctx->pc == 0x2F002Cu) {
        ctx->pc = 0x2F002Cu;
            // 0x2f002c: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x2F0030u;
        goto label_2f0030;
    }
    ctx->pc = 0x2F0028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F0030u);
        ctx->pc = 0x2F002Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0028u;
            // 0x2f002c: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F0030u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F0030u; }
            if (ctx->pc != 0x2F0030u) { return; }
        }
        }
    }
    ctx->pc = 0x2F0030u;
label_2f0030:
    // 0x2f0030: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2f0030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f0034:
    // 0x2f0034: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2f0034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_2f0038:
    // 0x2f0038: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f0038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2f003c:
    // 0x2f003c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f003cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f0040:
    // 0x2f0040: 0xc04c344  jal         func_130D10
label_2f0044:
    if (ctx->pc == 0x2F0044u) {
        ctx->pc = 0x2F0044u;
            // 0x2f0044: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2F0048u;
        goto label_2f0048;
    }
    ctx->pc = 0x2F0040u;
    SET_GPR_U32(ctx, 31, 0x2F0048u);
    ctx->pc = 0x2F0044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0040u;
            // 0x2f0044: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D10u;
    if (runtime->hasFunction(0x130D10u)) {
        auto targetFn = runtime->lookupFunction(0x130D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0048u; }
        if (ctx->pc != 0x2F0048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleCmp__Ffff_0x130d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0048u; }
        if (ctx->pc != 0x2F0048u) { return; }
    }
    ctx->pc = 0x2F0048u;
label_2f0048:
    // 0x2f0048: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2f004c:
    if (ctx->pc == 0x2F004Cu) {
        ctx->pc = 0x2F004Cu;
            // 0x2f004c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x2F0050u;
        goto label_2f0050;
    }
    ctx->pc = 0x2F0048u;
    {
        const bool branch_taken_0x2f0048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F004Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0048u;
            // 0x2f004c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0048) {
            ctx->pc = 0x2F0068u;
            goto label_2f0068;
        }
    }
    ctx->pc = 0x2F0050u;
label_2f0050:
    // 0x2f0050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0054:
    // 0x2f0054: 0x0  nop
    ctx->pc = 0x2f0054u;
    // NOP
label_2f0058:
    // 0x2f0058: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2f0058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f005c:
    // 0x2f005c: 0x0  nop
    ctx->pc = 0x2f005cu;
    // NOP
label_2f0060:
    // 0x2f0060: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_2f0064:
    if (ctx->pc == 0x2F0064u) {
        ctx->pc = 0x2F0064u;
            // 0x2f0064: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2F0068u;
        goto label_2f0068;
    }
    ctx->pc = 0x2F0060u;
    {
        const bool branch_taken_0x2f0060 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F0064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0060u;
            // 0x2f0064: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0060) {
            ctx->pc = 0x2F0090u;
            goto label_2f0090;
        }
    }
    ctx->pc = 0x2F0068u;
label_2f0068:
    // 0x2f0068: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x2f0068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f006c:
    // 0x2f006c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2f006cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_2f0070:
    // 0x2f0070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0074:
    // 0x2f0074: 0x0  nop
    ctx->pc = 0x2f0074u;
    // NOP
label_2f0078:
    // 0x2f0078: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f0078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2f007c:
    // 0x2f007c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f007cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0080:
    // 0x2f0080: 0x0  nop
    ctx->pc = 0x2f0080u;
    // NOP
label_2f0084:
    // 0x2f0084: 0x45010295  bc1t        . + 4 + (0x295 << 2)
label_2f0088:
    if (ctx->pc == 0x2F0088u) {
        ctx->pc = 0x2F008Cu;
        goto label_2f008c;
    }
    ctx->pc = 0x2F0084u;
    {
        const bool branch_taken_0x2f0084 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0084) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F008Cu;
label_2f008c:
    // 0x2f008c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2f008cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f0090:
    // 0x2f0090: 0xae860008  sw          $a2, 0x8($s4)
    ctx->pc = 0x2f0090u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
label_2f0094:
    // 0x2f0094: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2f0094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2f0098:
    // 0x2f0098: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
label_2f009c:
    if (ctx->pc == 0x2F009Cu) {
        ctx->pc = 0x2F009Cu;
            // 0x2f009c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x2F00A0u;
        goto label_2f00a0;
    }
    ctx->pc = 0x2F0098u;
    {
        const bool branch_taken_0x2f0098 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F009Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0098u;
            // 0x2f009c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0098) {
            ctx->pc = 0x2F00F0u;
            goto label_2f00f0;
        }
    }
    ctx->pc = 0x2F00A0u;
label_2f00a0:
    // 0x2f00a0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2f00a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2f00a4:
    // 0x2f00a4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2f00a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_2f00a8:
    // 0x2f00a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2f00ac:
    if (ctx->pc == 0x2F00ACu) {
        ctx->pc = 0x2F00B0u;
        goto label_2f00b0;
    }
    ctx->pc = 0x2F00A8u;
    {
        const bool branch_taken_0x2f00a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f00a8) {
            ctx->pc = 0x2F00D0u;
            goto label_2f00d0;
        }
    }
    ctx->pc = 0x2F00B0u;
label_2f00b0:
    // 0x2f00b0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2f00b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f00b4:
    // 0x2f00b4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f00b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2f00b8:
    // 0x2f00b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f00b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f00bc:
    // 0x2f00bc: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2f00bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2f00c0:
    // 0x2f00c0: 0x320f809  jalr        $t9
label_2f00c4:
    if (ctx->pc == 0x2F00C4u) {
        ctx->pc = 0x2F00C4u;
            // 0x2f00c4: 0x24a51598  addiu       $a1, $a1, 0x1598 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5528));
        ctx->pc = 0x2F00C8u;
        goto label_2f00c8;
    }
    ctx->pc = 0x2F00C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F00C8u);
        ctx->pc = 0x2F00C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F00C0u;
            // 0x2f00c4: 0x24a51598  addiu       $a1, $a1, 0x1598 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5528));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F00C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F00C8u; }
            if (ctx->pc != 0x2F00C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2F00C8u;
label_2f00c8:
    // 0x2f00c8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2f00cc:
    if (ctx->pc == 0x2F00CCu) {
        ctx->pc = 0x2F00CCu;
            // 0x2f00cc: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2F00D0u;
        goto label_2f00d0;
    }
    ctx->pc = 0x2F00C8u;
    {
        const bool branch_taken_0x2f00c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F00CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F00C8u;
            // 0x2f00cc: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f00c8) {
            ctx->pc = 0x2F00F8u;
            goto label_2f00f8;
        }
    }
    ctx->pc = 0x2F00D0u;
label_2f00d0:
    // 0x2f00d0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2f00d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f00d4:
    // 0x2f00d4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f00d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2f00d8:
    // 0x2f00d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f00d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f00dc:
    // 0x2f00dc: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2f00dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2f00e0:
    // 0x2f00e0: 0x320f809  jalr        $t9
label_2f00e4:
    if (ctx->pc == 0x2F00E4u) {
        ctx->pc = 0x2F00E4u;
            // 0x2f00e4: 0x24a515a8  addiu       $a1, $a1, 0x15A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5544));
        ctx->pc = 0x2F00E8u;
        goto label_2f00e8;
    }
    ctx->pc = 0x2F00E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F00E8u);
        ctx->pc = 0x2F00E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F00E0u;
            // 0x2f00e4: 0x24a515a8  addiu       $a1, $a1, 0x15A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5544));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F00E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F00E8u; }
            if (ctx->pc != 0x2F00E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2F00E8u;
label_2f00e8:
    // 0x2f00e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f00ec:
    if (ctx->pc == 0x2F00ECu) {
        ctx->pc = 0x2F00F0u;
        goto label_2f00f0;
    }
    ctx->pc = 0x2F00E8u;
    {
        const bool branch_taken_0x2f00e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f00e8) {
            ctx->pc = 0x2F00F4u;
            goto label_2f00f4;
        }
    }
    ctx->pc = 0x2F00F0u;
label_2f00f0:
    // 0x2f00f0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f00f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f00f4:
    // 0x2f00f4: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2f00f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2f00f8:
    // 0x2f00f8: 0x10000278  b           . + 4 + (0x278 << 2)
label_2f00fc:
    if (ctx->pc == 0x2F00FCu) {
        ctx->pc = 0x2F0100u;
        goto label_2f0100;
    }
    ctx->pc = 0x2F00F8u;
    {
        const bool branch_taken_0x2f00f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f00f8) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0100u;
label_2f0100:
    // 0x2f0100: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2f0100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2f0104:
    // 0x2f0104: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2f0104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_2f0108:
    // 0x2f0108: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2f010c:
    if (ctx->pc == 0x2F010Cu) {
        ctx->pc = 0x2F0110u;
        goto label_2f0110;
    }
    ctx->pc = 0x2F0108u;
    {
        const bool branch_taken_0x2f0108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0108) {
            ctx->pc = 0x2F016Cu;
            goto label_2f016c;
        }
    }
    ctx->pc = 0x2F0110u;
label_2f0110:
    // 0x2f0110: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2f0110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f0114:
    // 0x2f0114: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x2f0114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_2f0118:
    // 0x2f0118: 0x320f809  jalr        $t9
label_2f011c:
    if (ctx->pc == 0x2F011Cu) {
        ctx->pc = 0x2F011Cu;
            // 0x2f011c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0120u;
        goto label_2f0120;
    }
    ctx->pc = 0x2F0118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F0120u);
        ctx->pc = 0x2F011Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0118u;
            // 0x2f011c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F0120u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F0120u; }
            if (ctx->pc != 0x2F0120u) { return; }
        }
        }
    }
    ctx->pc = 0x2F0120u;
label_2f0120:
    // 0x2f0120: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2f0124:
    if (ctx->pc == 0x2F0124u) {
        ctx->pc = 0x2F0124u;
            // 0x2f0124: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F0128u;
        goto label_2f0128;
    }
    ctx->pc = 0x2F0120u;
    {
        const bool branch_taken_0x2f0120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0120u;
            // 0x2f0124: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0120) {
            ctx->pc = 0x2F0144u;
            goto label_2f0144;
        }
    }
    ctx->pc = 0x2F0128u;
label_2f0128:
    // 0x2f0128: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2f0128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f012c:
    // 0x2f012c: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x2f012cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_2f0130:
    // 0x2f0130: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2f0134:
    if (ctx->pc == 0x2F0134u) {
        ctx->pc = 0x2F0138u;
        goto label_2f0138;
    }
    ctx->pc = 0x2F0130u;
    {
        const bool branch_taken_0x2f0130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0130) {
            ctx->pc = 0x2F0140u;
            goto label_2f0140;
        }
    }
    ctx->pc = 0x2F0138u;
label_2f0138:
    // 0x2f0138: 0x17c00003  bnez        $fp, . + 4 + (0x3 << 2)
label_2f013c:
    if (ctx->pc == 0x2F013Cu) {
        ctx->pc = 0x2F0140u;
        goto label_2f0140;
    }
    ctx->pc = 0x2F0138u;
    {
        const bool branch_taken_0x2f0138 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0138) {
            ctx->pc = 0x2F0148u;
            goto label_2f0148;
        }
    }
    ctx->pc = 0x2F0140u;
label_2f0140:
    // 0x2f0140: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f0140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f0144:
    // 0x2f0144: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x2f0144u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_2f0148:
    // 0x2f0148: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2f0148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f014c:
    // 0x2f014c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2f014cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2f0150:
    // 0x2f0150: 0x14620262  bne         $v1, $v0, . + 4 + (0x262 << 2)
label_2f0154:
    if (ctx->pc == 0x2F0154u) {
        ctx->pc = 0x2F0154u;
            // 0x2f0154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0158u;
        goto label_2f0158;
    }
    ctx->pc = 0x2F0150u;
    {
        const bool branch_taken_0x2f0150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F0154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0150u;
            // 0x2f0154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0150) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0158u;
label_2f0158:
    // 0x2f0158: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2f0158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2f015c:
    // 0x2f015c: 0xc0aa028  jal         func_2A80A0
label_2f0160:
    if (ctx->pc == 0x2F0160u) {
        ctx->pc = 0x2F0160u;
            // 0x2f0160: 0x268600c0  addiu       $a2, $s4, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
        ctx->pc = 0x2F0164u;
        goto label_2f0164;
    }
    ctx->pc = 0x2F015Cu;
    SET_GPR_U32(ctx, 31, 0x2F0164u);
    ctx->pc = 0x2F0160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F015Cu;
            // 0x2f0160: 0x268600c0  addiu       $a2, $s4, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A80A0u;
    if (runtime->hasFunction(0x2A80A0u)) {
        auto targetFn = runtime->lookupFunction(0x2A80A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0164u; }
        if (ctx->pc != 0x2F0164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SePlayOpenDoor__6CSceneFiPf_0x2a80a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0164u; }
        if (ctx->pc != 0x2F0164u) { return; }
    }
    ctx->pc = 0x2F0164u;
label_2f0164:
    // 0x2f0164: 0x1000025d  b           . + 4 + (0x25D << 2)
label_2f0168:
    if (ctx->pc == 0x2F0168u) {
        ctx->pc = 0x2F016Cu;
        goto label_2f016c;
    }
    ctx->pc = 0x2F0164u;
    {
        const bool branch_taken_0x2f0164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0164) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F016Cu;
label_2f016c:
    // 0x2f016c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2f016cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f0170:
    // 0x2f0170: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2f0170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2f0174:
    // 0x2f0174: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_2f0178:
    if (ctx->pc == 0x2F0178u) {
        ctx->pc = 0x2F017Cu;
        goto label_2f017c;
    }
    ctx->pc = 0x2F0174u;
    {
        const bool branch_taken_0x2f0174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f0174) {
            ctx->pc = 0x2F01A4u;
            goto label_2f01a4;
        }
    }
    ctx->pc = 0x2F017Cu;
label_2f017c:
    // 0x2f017c: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x2f017cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_2f0180:
    // 0x2f0180: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2f0180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_2f0184:
    // 0x2f0184: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2f0188:
    if (ctx->pc == 0x2F0188u) {
        ctx->pc = 0x2F018Cu;
        goto label_2f018c;
    }
    ctx->pc = 0x2F0184u;
    {
        const bool branch_taken_0x2f0184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0184) {
            ctx->pc = 0x2F01A4u;
            goto label_2f01a4;
        }
    }
    ctx->pc = 0x2F018Cu;
label_2f018c:
    // 0x2f018c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f018cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f0190:
    // 0x2f0190: 0x26442c70  addiu       $a0, $s2, 0x2C70
    ctx->pc = 0x2f0190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11376));
label_2f0194:
    // 0x2f0194: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2f0194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2f0198:
    // 0x2f0198: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f0198u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f019c:
    // 0x2f019c: 0xc05f610  jal         func_17D840
label_2f01a0:
    if (ctx->pc == 0x2F01A0u) {
        ctx->pc = 0x2F01A0u;
            // 0x2f01a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2F01A4u;
        goto label_2f01a4;
    }
    ctx->pc = 0x2F019Cu;
    SET_GPR_U32(ctx, 31, 0x2F01A4u);
    ctx->pc = 0x2F01A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F019Cu;
            // 0x2f01a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F01A4u; }
        if (ctx->pc != 0x2F01A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F01A4u; }
        if (ctx->pc != 0x2F01A4u) { return; }
    }
    ctx->pc = 0x2F01A4u;
label_2f01a4:
    // 0x2f01a4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2f01a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f01a8:
    // 0x2f01a8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2f01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2f01ac:
    // 0x2f01ac: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2f01b0:
    if (ctx->pc == 0x2F01B0u) {
        ctx->pc = 0x2F01B4u;
        goto label_2f01b4;
    }
    ctx->pc = 0x2F01ACu;
    {
        const bool branch_taken_0x2f01ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f01ac) {
            ctx->pc = 0x2F01CCu;
            goto label_2f01cc;
        }
    }
    ctx->pc = 0x2F01B4u;
label_2f01b4:
    // 0x2f01b4: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2f01b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2f01b8:
    // 0x2f01b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f01b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f01bc:
    // 0x2f01bc: 0xc0aa028  jal         func_2A80A0
label_2f01c0:
    if (ctx->pc == 0x2F01C0u) {
        ctx->pc = 0x2F01C0u;
            // 0x2f01c0: 0x268600c0  addiu       $a2, $s4, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
        ctx->pc = 0x2F01C4u;
        goto label_2f01c4;
    }
    ctx->pc = 0x2F01BCu;
    SET_GPR_U32(ctx, 31, 0x2F01C4u);
    ctx->pc = 0x2F01C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F01BCu;
            // 0x2f01c0: 0x268600c0  addiu       $a2, $s4, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A80A0u;
    if (runtime->hasFunction(0x2A80A0u)) {
        auto targetFn = runtime->lookupFunction(0x2A80A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F01C4u; }
        if (ctx->pc != 0x2F01C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SePlayOpenDoor__6CSceneFiPf_0x2a80a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F01C4u; }
        if (ctx->pc != 0x2F01C4u) { return; }
    }
    ctx->pc = 0x2F01C4u;
label_2f01c4:
    // 0x2f01c4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2f01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2f01c8:
    // 0x2f01c8: 0xae820148  sw          $v0, 0x148($s4)
    ctx->pc = 0x2f01c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 2));
label_2f01cc:
    // 0x2f01cc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2f01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f01d0:
    // 0x2f01d0: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x2f01d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_2f01d4:
    // 0x2f01d4: 0x14200241  bnez        $at, . + 4 + (0x241 << 2)
label_2f01d8:
    if (ctx->pc == 0x2F01D8u) {
        ctx->pc = 0x2F01D8u;
            // 0x2f01d8: 0x26442c70  addiu       $a0, $s2, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11376));
        ctx->pc = 0x2F01DCu;
        goto label_2f01dc;
    }
    ctx->pc = 0x2F01D4u;
    {
        const bool branch_taken_0x2f01d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F01D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F01D4u;
            // 0x2f01d8: 0x26442c70  addiu       $a0, $s2, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f01d4) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F01DCu;
label_2f01dc:
    // 0x2f01dc: 0xc05f65c  jal         func_17D970
label_2f01e0:
    if (ctx->pc == 0x2F01E0u) {
        ctx->pc = 0x2F01E4u;
        goto label_2f01e4;
    }
    ctx->pc = 0x2F01DCu;
    SET_GPR_U32(ctx, 31, 0x2F01E4u);
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F01E4u; }
        if (ctx->pc != 0x2F01E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F01E4u; }
        if (ctx->pc != 0x2F01E4u) { return; }
    }
    ctx->pc = 0x2F01E4u;
label_2f01e4:
    // 0x2f01e4: 0x1040023d  beqz        $v0, . + 4 + (0x23D << 2)
label_2f01e8:
    if (ctx->pc == 0x2F01E8u) {
        ctx->pc = 0x2F01E8u;
            // 0x2f01e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2F01ECu;
        goto label_2f01ec;
    }
    ctx->pc = 0x2F01E4u;
    {
        const bool branch_taken_0x2f01e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F01E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F01E4u;
            // 0x2f01e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f01e4) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F01ECu;
label_2f01ec:
    // 0x2f01ec: 0x1000023b  b           . + 4 + (0x23B << 2)
label_2f01f0:
    if (ctx->pc == 0x2F01F0u) {
        ctx->pc = 0x2F01F0u;
            // 0x2f01f0: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x2F01F4u;
        goto label_2f01f4;
    }
    ctx->pc = 0x2F01ECu;
    {
        const bool branch_taken_0x2f01ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F01F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F01ECu;
            // 0x2f01f0: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f01ec) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F01F4u;
label_2f01f4:
    // 0x2f01f4: 0xc0bb228  jal         func_2EC8A0
label_2f01f8:
    if (ctx->pc == 0x2F01F8u) {
        ctx->pc = 0x2F01F8u;
            // 0x2f01f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F01FCu;
        goto label_2f01fc;
    }
    ctx->pc = 0x2F01F4u;
    SET_GPR_U32(ctx, 31, 0x2F01FCu);
    ctx->pc = 0x2F01F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F01F4u;
            // 0x2f01f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC8A0u;
    if (runtime->hasFunction(0x2EC8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F01FCu; }
        if (ctx->pc != 0x2F01FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CancelRotBack__14CCameraControlFv_0x2ec8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F01FCu; }
        if (ctx->pc != 0x2F01FCu) { return; }
    }
    ctx->pc = 0x2F01FCu;
label_2f01fc:
    // 0x2f01fc: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x2f01fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_2f0200:
    // 0x2f0200: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
label_2f0204:
    if (ctx->pc == 0x2F0204u) {
        ctx->pc = 0x2F0204u;
            // 0x2f0204: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0208u;
        goto label_2f0208;
    }
    ctx->pc = 0x2F0200u;
    {
        const bool branch_taken_0x2f0200 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2F0204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0200u;
            // 0x2f0204: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0200) {
            ctx->pc = 0x2F0218u;
            goto label_2f0218;
        }
    }
    ctx->pc = 0x2F0208u;
label_2f0208:
    // 0x2f0208: 0xc0b1f3c  jal         func_2C7CF0
label_2f020c:
    if (ctx->pc == 0x2F020Cu) {
        ctx->pc = 0x2F020Cu;
            // 0x2f020c: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x2F0210u;
        goto label_2f0210;
    }
    ctx->pc = 0x2F0208u;
    SET_GPR_U32(ctx, 31, 0x2F0210u);
    ctx->pc = 0x2F020Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0208u;
            // 0x2f020c: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CF0u;
    if (runtime->hasFunction(0x2C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0210u; }
        if (ctx->pc != 0x2F0210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0210u; }
        if (ctx->pc != 0x2F0210u) { return; }
    }
    ctx->pc = 0x2F0210u;
label_2f0210:
    // 0x2f0210: 0x10000232  b           . + 4 + (0x232 << 2)
label_2f0214:
    if (ctx->pc == 0x2F0214u) {
        ctx->pc = 0x2F0214u;
            // 0x2f0214: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F0218u;
        goto label_2f0218;
    }
    ctx->pc = 0x2F0210u;
    {
        const bool branch_taken_0x2f0210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0210u;
            // 0x2f0214: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0210) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0218u;
label_2f0218:
    // 0x2f0218: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f0218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2f021c:
    // 0x2f021c: 0x26840038  addiu       $a0, $s4, 0x38
    ctx->pc = 0x2f021cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
label_2f0220:
    // 0x2f0220: 0xc04a38a  jal         func_128E28
label_2f0224:
    if (ctx->pc == 0x2F0224u) {
        ctx->pc = 0x2F0224u;
            // 0x2f0224: 0x24a51588  addiu       $a1, $a1, 0x1588 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5512));
        ctx->pc = 0x2F0228u;
        goto label_2f0228;
    }
    ctx->pc = 0x2F0220u;
    SET_GPR_U32(ctx, 31, 0x2F0228u);
    ctx->pc = 0x2F0224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0220u;
            // 0x2f0224: 0x24a51588  addiu       $a1, $a1, 0x1588 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0228u; }
        if (ctx->pc != 0x2F0228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0228u; }
        if (ctx->pc != 0x2F0228u) { return; }
    }
    ctx->pc = 0x2F0228u;
label_2f0228:
    // 0x2f0228: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2f022c:
    if (ctx->pc == 0x2F022Cu) {
        ctx->pc = 0x2F022Cu;
            // 0x2f022c: 0x26442c70  addiu       $a0, $s2, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11376));
        ctx->pc = 0x2F0230u;
        goto label_2f0230;
    }
    ctx->pc = 0x2F0228u;
    {
        const bool branch_taken_0x2f0228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F022Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0228u;
            // 0x2f022c: 0x26442c70  addiu       $a0, $s2, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0228) {
            ctx->pc = 0x2F0278u;
            goto label_2f0278;
        }
    }
    ctx->pc = 0x2F0230u;
label_2f0230:
    // 0x2f0230: 0xc05f65c  jal         func_17D970
label_2f0234:
    if (ctx->pc == 0x2F0234u) {
        ctx->pc = 0x2F0234u;
            // 0x2f0234: 0x26442c70  addiu       $a0, $s2, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11376));
        ctx->pc = 0x2F0238u;
        goto label_2f0238;
    }
    ctx->pc = 0x2F0230u;
    SET_GPR_U32(ctx, 31, 0x2F0238u);
    ctx->pc = 0x2F0234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0230u;
            // 0x2f0234: 0x26442c70  addiu       $a0, $s2, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0238u; }
        if (ctx->pc != 0x2F0238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0238u; }
        if (ctx->pc != 0x2F0238u) { return; }
    }
    ctx->pc = 0x2F0238u;
label_2f0238:
    // 0x2f0238: 0x10400228  beqz        $v0, . + 4 + (0x228 << 2)
label_2f023c:
    if (ctx->pc == 0x2F023Cu) {
        ctx->pc = 0x2F0240u;
        goto label_2f0240;
    }
    ctx->pc = 0x2F0238u;
    {
        const bool branch_taken_0x2f0238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0238) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0240u;
label_2f0240:
    // 0x2f0240: 0xc0b7b48  jal         func_2DED20
label_2f0244:
    if (ctx->pc == 0x2F0244u) {
        ctx->pc = 0x2F0248u;
        goto label_2f0248;
    }
    ctx->pc = 0x2F0240u;
    SET_GPR_U32(ctx, 31, 0x2F0248u);
    ctx->pc = 0x2DED20u;
    if (runtime->hasFunction(0x2DED20u)) {
        auto targetFn = runtime->lookupFunction(0x2DED20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0248u; }
        if (ctx->pc != 0x2F0248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PreLoadSync__Fv_0x2ded20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0248u; }
        if (ctx->pc != 0x2F0248u) { return; }
    }
    ctx->pc = 0x2F0248u;
label_2f0248:
    // 0x2f0248: 0x14400224  bnez        $v0, . + 4 + (0x224 << 2)
label_2f024c:
    if (ctx->pc == 0x2F024Cu) {
        ctx->pc = 0x2F024Cu;
            // 0x2f024c: 0x26442c70  addiu       $a0, $s2, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11376));
        ctx->pc = 0x2F0250u;
        goto label_2f0250;
    }
    ctx->pc = 0x2F0248u;
    {
        const bool branch_taken_0x2f0248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F024Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0248u;
            // 0x2f024c: 0x26442c70  addiu       $a0, $s2, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0248) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0250u;
label_2f0250:
    // 0x2f0250: 0xc05f5fc  jal         func_17D7F0
label_2f0254:
    if (ctx->pc == 0x2F0254u) {
        ctx->pc = 0x2F0254u;
            // 0x2f0254: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x2F0258u;
        goto label_2f0258;
    }
    ctx->pc = 0x2F0250u;
    SET_GPR_U32(ctx, 31, 0x2F0258u);
    ctx->pc = 0x2F0254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0250u;
            // 0x2f0254: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0258u; }
        if (ctx->pc != 0x2F0258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0258u; }
        if (ctx->pc != 0x2F0258u) { return; }
    }
    ctx->pc = 0x2F0258u;
label_2f0258:
    // 0x2f0258: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x2f0258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_2f025c:
    // 0x2f025c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2f025cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2f0260:
    // 0x2f0260: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2f0264:
    if (ctx->pc == 0x2F0264u) {
        ctx->pc = 0x2F0264u;
            // 0x2f0264: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2F0268u;
        goto label_2f0268;
    }
    ctx->pc = 0x2F0260u;
    {
        const bool branch_taken_0x2f0260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0260u;
            // 0x2f0264: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0260) {
            ctx->pc = 0x2F0270u;
            goto label_2f0270;
        }
    }
    ctx->pc = 0x2F0268u;
label_2f0268:
    // 0x2f0268: 0x1000021c  b           . + 4 + (0x21C << 2)
label_2f026c:
    if (ctx->pc == 0x2F026Cu) {
        ctx->pc = 0x2F026Cu;
            // 0x2f026c: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F0270u;
        goto label_2f0270;
    }
    ctx->pc = 0x2F0268u;
    {
        const bool branch_taken_0x2f0268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F026Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0268u;
            // 0x2f026c: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0268) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0270u;
label_2f0270:
    // 0x2f0270: 0x1000021a  b           . + 4 + (0x21A << 2)
label_2f0274:
    if (ctx->pc == 0x2F0274u) {
        ctx->pc = 0x2F0278u;
        goto label_2f0278;
    }
    ctx->pc = 0x2F0270u;
    {
        const bool branch_taken_0x2f0270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0270) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0278u;
label_2f0278:
    // 0x2f0278: 0xc05f65c  jal         func_17D970
label_2f027c:
    if (ctx->pc == 0x2F027Cu) {
        ctx->pc = 0x2F0280u;
        goto label_2f0280;
    }
    ctx->pc = 0x2F0278u;
    SET_GPR_U32(ctx, 31, 0x2F0280u);
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0280u; }
        if (ctx->pc != 0x2F0280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0280u; }
        if (ctx->pc != 0x2F0280u) { return; }
    }
    ctx->pc = 0x2F0280u;
label_2f0280:
    // 0x2f0280: 0x10400216  beqz        $v0, . + 4 + (0x216 << 2)
label_2f0284:
    if (ctx->pc == 0x2F0284u) {
        ctx->pc = 0x2F0284u;
            // 0x2f0284: 0x26442c70  addiu       $a0, $s2, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11376));
        ctx->pc = 0x2F0288u;
        goto label_2f0288;
    }
    ctx->pc = 0x2F0280u;
    {
        const bool branch_taken_0x2f0280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0280u;
            // 0x2f0284: 0x26442c70  addiu       $a0, $s2, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0280) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0288u;
label_2f0288:
    // 0x2f0288: 0xc05f5fc  jal         func_17D7F0
label_2f028c:
    if (ctx->pc == 0x2F028Cu) {
        ctx->pc = 0x2F028Cu;
            // 0x2f028c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x2F0290u;
        goto label_2f0290;
    }
    ctx->pc = 0x2F0288u;
    SET_GPR_U32(ctx, 31, 0x2F0290u);
    ctx->pc = 0x2F028Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0288u;
            // 0x2f028c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0290u; }
        if (ctx->pc != 0x2F0290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0290u; }
        if (ctx->pc != 0x2F0290u) { return; }
    }
    ctx->pc = 0x2F0290u;
label_2f0290:
    // 0x2f0290: 0x10000212  b           . + 4 + (0x212 << 2)
label_2f0294:
    if (ctx->pc == 0x2F0294u) {
        ctx->pc = 0x2F0294u;
            // 0x2f0294: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2F0298u;
        goto label_2f0298;
    }
    ctx->pc = 0x2F0290u;
    {
        const bool branch_taken_0x2f0290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0290u;
            // 0x2f0294: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0290) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0298u;
label_2f0298:
    // 0x2f0298: 0x27b00134  addiu       $s0, $sp, 0x134
    ctx->pc = 0x2f0298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_2f029c:
    // 0x2f029c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2f029cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_2f02a0:
    // 0x2f02a0: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2f02a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f02a4:
    // 0x2f02a4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f02a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2f02a8:
    // 0x2f02a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f02a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f02ac:
    // 0x2f02ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f02acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f02b0:
    // 0x2f02b0: 0xc04c2d8  jal         func_130B60
label_2f02b4:
    if (ctx->pc == 0x2F02B4u) {
        ctx->pc = 0x2F02B4u;
            // 0x2f02b4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2F02B8u;
        goto label_2f02b8;
    }
    ctx->pc = 0x2F02B0u;
    SET_GPR_U32(ctx, 31, 0x2F02B8u);
    ctx->pc = 0x2F02B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F02B0u;
            // 0x2f02b4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130B60u;
    if (runtime->hasFunction(0x130B60u)) {
        auto targetFn = runtime->lookupFunction(0x130B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F02B8u; }
        if (ctx->pc != 0x2F02B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleInterpolate__Ffffi_0x130b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F02B8u; }
        if (ctx->pc != 0x2F02B8u) { return; }
    }
    ctx->pc = 0x2F02B8u;
label_2f02b8:
    // 0x2f02b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f02b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2f02bc:
    // 0x2f02bc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2f02bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2f02c0:
    // 0x2f02c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f02c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f02c4:
    // 0x2f02c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f02c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f02c8:
    // 0x2f02c8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2f02c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2f02cc:
    // 0x2f02cc: 0x26860100  addiu       $a2, $s4, 0x100
    ctx->pc = 0x2f02ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
label_2f02d0:
    // 0x2f02d0: 0xc04c294  jal         func_130A50
label_2f02d4:
    if (ctx->pc == 0x2F02D4u) {
        ctx->pc = 0x2F02D4u;
            // 0x2f02d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F02D8u;
        goto label_2f02d8;
    }
    ctx->pc = 0x2F02D0u;
    SET_GPR_U32(ctx, 31, 0x2F02D8u);
    ctx->pc = 0x2F02D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F02D0u;
            // 0x2f02d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130A50u;
    if (runtime->hasFunction(0x130A50u)) {
        auto targetFn = runtime->lookupFunction(0x130A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F02D8u; }
        if (ctx->pc != 0x2F02D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorInterpolate__FPfPfPffi_0x130a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F02D8u; }
        if (ctx->pc != 0x2F02D8u) { return; }
    }
    ctx->pc = 0x2F02D8u;
label_2f02d8:
    // 0x2f02d8: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2f02d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f02dc:
    // 0x2f02dc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2f02dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_2f02e0:
    // 0x2f02e0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f02e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2f02e4:
    // 0x2f02e4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f02e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f02e8:
    // 0x2f02e8: 0xc04c344  jal         func_130D10
label_2f02ec:
    if (ctx->pc == 0x2F02ECu) {
        ctx->pc = 0x2F02ECu;
            // 0x2f02ec: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2F02F0u;
        goto label_2f02f0;
    }
    ctx->pc = 0x2F02E8u;
    SET_GPR_U32(ctx, 31, 0x2F02F0u);
    ctx->pc = 0x2F02ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F02E8u;
            // 0x2f02ec: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D10u;
    if (runtime->hasFunction(0x130D10u)) {
        auto targetFn = runtime->lookupFunction(0x130D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F02F0u; }
        if (ctx->pc != 0x2F02F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleCmp__Ffff_0x130d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F02F0u; }
        if (ctx->pc != 0x2F02F0u) { return; }
    }
    ctx->pc = 0x2F02F0u;
label_2f02f0:
    // 0x2f02f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f02f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f02f4:
    // 0x2f02f4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2f02f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2f02f8:
    // 0x2f02f8: 0xc04c018  jal         func_130060
label_2f02fc:
    if (ctx->pc == 0x2F02FCu) {
        ctx->pc = 0x2F02FCu;
            // 0x2f02fc: 0x26850100  addiu       $a1, $s4, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
        ctx->pc = 0x2F0300u;
        goto label_2f0300;
    }
    ctx->pc = 0x2F02F8u;
    SET_GPR_U32(ctx, 31, 0x2F0300u);
    ctx->pc = 0x2F02FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F02F8u;
            // 0x2f02fc: 0x26850100  addiu       $a1, $s4, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0300u; }
        if (ctx->pc != 0x2F0300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0300u; }
        if (ctx->pc != 0x2F0300u) { return; }
    }
    ctx->pc = 0x2F0300u;
label_2f0300:
    // 0x2f0300: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
label_2f0304:
    if (ctx->pc == 0x2F0304u) {
        ctx->pc = 0x2F0304u;
            // 0x2f0304: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x2F0308u;
        goto label_2f0308;
    }
    ctx->pc = 0x2F0300u;
    {
        const bool branch_taken_0x2f0300 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0300u;
            // 0x2f0304: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0300) {
            ctx->pc = 0x2F0348u;
            goto label_2f0348;
        }
    }
    ctx->pc = 0x2F0308u;
label_2f0308:
    // 0x2f0308: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f030c:
    // 0x2f030c: 0x0  nop
    ctx->pc = 0x2f030cu;
    // NOP
label_2f0310:
    // 0x2f0310: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f0310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0314:
    // 0x2f0314: 0x0  nop
    ctx->pc = 0x2f0314u;
    // NOP
label_2f0318:
    // 0x2f0318: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2f031c:
    if (ctx->pc == 0x2F031Cu) {
        ctx->pc = 0x2F031Cu;
            // 0x2f031c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2F0320u;
        goto label_2f0320;
    }
    ctx->pc = 0x2F0318u;
    {
        const bool branch_taken_0x2f0318 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F031Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0318u;
            // 0x2f031c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0318) {
            ctx->pc = 0x2F0348u;
            goto label_2f0348;
        }
    }
    ctx->pc = 0x2F0320u;
label_2f0320:
    // 0x2f0320: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f0320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2f0324:
    // 0x2f0324: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x2f0324u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_2f0328:
    // 0x2f0328: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f0328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f032c:
    // 0x2f032c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2f032cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f0330:
    // 0x2f0330: 0x24a515b8  addiu       $a1, $a1, 0x15B8
    ctx->pc = 0x2f0330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5560));
label_2f0334:
    // 0x2f0334: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2f0334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2f0338:
    // 0x2f0338: 0x320f809  jalr        $t9
label_2f033c:
    if (ctx->pc == 0x2F033Cu) {
        ctx->pc = 0x2F033Cu;
            // 0x2f033c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2F0340u;
        goto label_2f0340;
    }
    ctx->pc = 0x2F0338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F0340u);
        ctx->pc = 0x2F033Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0338u;
            // 0x2f033c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F0340u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F0340u; }
            if (ctx->pc != 0x2F0340u) { return; }
        }
        }
    }
    ctx->pc = 0x2F0340u;
label_2f0340:
    // 0x2f0340: 0x10000009  b           . + 4 + (0x9 << 2)
label_2f0344:
    if (ctx->pc == 0x2F0344u) {
        ctx->pc = 0x2F0344u;
            // 0x2f0344: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x2F0348u;
        goto label_2f0348;
    }
    ctx->pc = 0x2F0340u;
    {
        const bool branch_taken_0x2f0340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0340u;
            // 0x2f0344: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0340) {
            ctx->pc = 0x2F0368u;
            goto label_2f0368;
        }
    }
    ctx->pc = 0x2F0348u;
label_2f0348:
    // 0x2f0348: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2f0348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f034c:
    // 0x2f034c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f034cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2f0350:
    // 0x2f0350: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f0350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f0354:
    // 0x2f0354: 0x24a51590  addiu       $a1, $a1, 0x1590
    ctx->pc = 0x2f0354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5520));
label_2f0358:
    // 0x2f0358: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2f0358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2f035c:
    // 0x2f035c: 0x320f809  jalr        $t9
label_2f0360:
    if (ctx->pc == 0x2F0360u) {
        ctx->pc = 0x2F0360u;
            // 0x2f0360: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0364u;
        goto label_2f0364;
    }
    ctx->pc = 0x2F035Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F0364u);
        ctx->pc = 0x2F0360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F035Cu;
            // 0x2f0360: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F0364u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F0364u; }
            if (ctx->pc != 0x2F0364u) { return; }
        }
        }
    }
    ctx->pc = 0x2F0364u;
label_2f0364:
    // 0x2f0364: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2f0364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f0368:
    // 0x2f0368: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f0368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f036c:
    // 0x2f036c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2f036cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2f0370:
    // 0x2f0370: 0x320f809  jalr        $t9
label_2f0374:
    if (ctx->pc == 0x2F0374u) {
        ctx->pc = 0x2F0374u;
            // 0x2f0374: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x2F0378u;
        goto label_2f0378;
    }
    ctx->pc = 0x2F0370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F0378u);
        ctx->pc = 0x2F0374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0370u;
            // 0x2f0374: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F0378u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F0378u; }
            if (ctx->pc != 0x2F0378u) { return; }
        }
        }
    }
    ctx->pc = 0x2F0378u;
label_2f0378:
    // 0x2f0378: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2f0378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f037c:
    // 0x2f037c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f037cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f0380:
    // 0x2f0380: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f0380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f0384:
    // 0x2f0384: 0x320f809  jalr        $t9
label_2f0388:
    if (ctx->pc == 0x2F0388u) {
        ctx->pc = 0x2F0388u;
            // 0x2f0388: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x2F038Cu;
        goto label_2f038c;
    }
    ctx->pc = 0x2F0384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F038Cu);
        ctx->pc = 0x2F0388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0384u;
            // 0x2f0388: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F038Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F038Cu; }
            if (ctx->pc != 0x2F038Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F038Cu;
label_2f038c:
    // 0x2f038c: 0x100001d3  b           . + 4 + (0x1D3 << 2)
label_2f0390:
    if (ctx->pc == 0x2F0390u) {
        ctx->pc = 0x2F0394u;
        goto label_2f0394;
    }
    ctx->pc = 0x2F038Cu;
    {
        const bool branch_taken_0x2f038c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f038c) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0394u;
label_2f0394:
    // 0x2f0394: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2f0394u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f0398:
    // 0x2f0398: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x2f0398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_2f039c:
    // 0x2f039c: 0x320f809  jalr        $t9
label_2f03a0:
    if (ctx->pc == 0x2F03A0u) {
        ctx->pc = 0x2F03A0u;
            // 0x2f03a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F03A4u;
        goto label_2f03a4;
    }
    ctx->pc = 0x2F039Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F03A4u);
        ctx->pc = 0x2F03A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F039Cu;
            // 0x2f03a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F03A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F03A4u; }
            if (ctx->pc != 0x2F03A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2F03A4u;
label_2f03a4:
    // 0x2f03a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2f03a8:
    if (ctx->pc == 0x2F03A8u) {
        ctx->pc = 0x2F03ACu;
        goto label_2f03ac;
    }
    ctx->pc = 0x2F03A4u;
    {
        const bool branch_taken_0x2f03a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f03a4) {
            ctx->pc = 0x2F03C4u;
            goto label_2f03c4;
        }
    }
    ctx->pc = 0x2F03ACu;
label_2f03ac:
    // 0x2f03ac: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2f03acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f03b0:
    // 0x2f03b0: 0x2841012d  slti        $at, $v0, 0x12D
    ctx->pc = 0x2f03b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)301) ? 1 : 0);
label_2f03b4:
    // 0x2f03b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2f03b8:
    if (ctx->pc == 0x2F03B8u) {
        ctx->pc = 0x2F03BCu;
        goto label_2f03bc;
    }
    ctx->pc = 0x2F03B4u;
    {
        const bool branch_taken_0x2f03b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f03b4) {
            ctx->pc = 0x2F03C4u;
            goto label_2f03c4;
        }
    }
    ctx->pc = 0x2F03BCu;
label_2f03bc:
    // 0x2f03bc: 0x17c001c7  bnez        $fp, . + 4 + (0x1C7 << 2)
label_2f03c0:
    if (ctx->pc == 0x2F03C0u) {
        ctx->pc = 0x2F03C4u;
        goto label_2f03c4;
    }
    ctx->pc = 0x2F03BCu;
    {
        const bool branch_taken_0x2f03bc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f03bc) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F03C4u;
label_2f03c4:
    // 0x2f03c4: 0x100001c5  b           . + 4 + (0x1C5 << 2)
label_2f03c8:
    if (ctx->pc == 0x2F03C8u) {
        ctx->pc = 0x2F03C8u;
            // 0x2f03c8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F03CCu;
        goto label_2f03cc;
    }
    ctx->pc = 0x2F03C4u;
    {
        const bool branch_taken_0x2f03c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F03C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F03C4u;
            // 0x2f03c8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f03c4) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F03CCu;
label_2f03cc:
    // 0x2f03cc: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
label_2f03d0:
    if (ctx->pc == 0x2F03D0u) {
        ctx->pc = 0x2F03D0u;
            // 0x2f03d0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2F03D4u;
        goto label_2f03d4;
    }
    ctx->pc = 0x2F03CCu;
    {
        const bool branch_taken_0x2f03cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F03D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F03CCu;
            // 0x2f03d0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f03cc) {
            ctx->pc = 0x2F0554u;
            goto label_2f0554;
        }
    }
    ctx->pc = 0x2F03D4u;
label_2f03d4:
    // 0x2f03d4: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2f03d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2f03d8:
    // 0x2f03d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f03d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f03dc:
    // 0x2f03dc: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
label_2f03e0:
    if (ctx->pc == 0x2F03E0u) {
        ctx->pc = 0x2F03E4u;
        goto label_2f03e4;
    }
    ctx->pc = 0x2F03DCu;
    {
        const bool branch_taken_0x2f03dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f03dc) {
            ctx->pc = 0x2F04ECu;
            goto label_2f04ec;
        }
    }
    ctx->pc = 0x2F03E4u;
label_2f03e4:
    // 0x2f03e4: 0x10650016  beq         $v1, $a1, . + 4 + (0x16 << 2)
label_2f03e8:
    if (ctx->pc == 0x2F03E8u) {
        ctx->pc = 0x2F03ECu;
        goto label_2f03ec;
    }
    ctx->pc = 0x2F03E4u;
    {
        const bool branch_taken_0x2f03e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2f03e4) {
            ctx->pc = 0x2F0440u;
            goto label_2f0440;
        }
    }
    ctx->pc = 0x2F03ECu;
label_2f03ec:
    // 0x2f03ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2f03f0:
    if (ctx->pc == 0x2F03F0u) {
        ctx->pc = 0x2F03F4u;
        goto label_2f03f4;
    }
    ctx->pc = 0x2F03ECu;
    {
        const bool branch_taken_0x2f03ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f03ec) {
            ctx->pc = 0x2F03FCu;
            goto label_2f03fc;
        }
    }
    ctx->pc = 0x2F03F4u;
label_2f03f4:
    // 0x2f03f4: 0x100001b9  b           . + 4 + (0x1B9 << 2)
label_2f03f8:
    if (ctx->pc == 0x2F03F8u) {
        ctx->pc = 0x2F03FCu;
        goto label_2f03fc;
    }
    ctx->pc = 0x2F03F4u;
    {
        const bool branch_taken_0x2f03f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f03f4) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F03FCu;
label_2f03fc:
    // 0x2f03fc: 0x8f8285d0  lw          $v0, -0x7A30($gp)
    ctx->pc = 0x2f03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_2f0400:
    // 0x2f0400: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2f0400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2f0404:
    // 0x2f0404: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f0404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f0408:
    // 0x2f0408: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x2f0408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_2f040c:
    // 0x2f040c: 0x8f8285d0  lw          $v0, -0x7A30($gp)
    ctx->pc = 0x2f040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_2f0410:
    // 0x2f0410: 0xac520018  sw          $s2, 0x18($v0)
    ctx->pc = 0x2f0410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 18));
label_2f0414:
    // 0x2f0414: 0x8e8300d0  lw          $v1, 0xD0($s4)
    ctx->pc = 0x2f0414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
label_2f0418:
    // 0x2f0418: 0x8f8285d0  lw          $v0, -0x7A30($gp)
    ctx->pc = 0x2f0418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_2f041c:
    // 0x2f041c: 0xc0bb228  jal         func_2EC8A0
label_2f0420:
    if (ctx->pc == 0x2F0420u) {
        ctx->pc = 0x2F0420u;
            // 0x2f0420: 0xac430058  sw          $v1, 0x58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
        ctx->pc = 0x2F0424u;
        goto label_2f0424;
    }
    ctx->pc = 0x2F041Cu;
    SET_GPR_U32(ctx, 31, 0x2F0424u);
    ctx->pc = 0x2F0420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F041Cu;
            // 0x2f0420: 0xac430058  sw          $v1, 0x58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC8A0u;
    if (runtime->hasFunction(0x2EC8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0424u; }
        if (ctx->pc != 0x2F0424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CancelRotBack__14CCameraControlFv_0x2ec8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0424u; }
        if (ctx->pc != 0x2F0424u) { return; }
    }
    ctx->pc = 0x2F0424u;
label_2f0424:
    // 0x2f0424: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2f0424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2f0428:
    // 0x2f0428: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x2f0428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f042c:
    // 0x2f042c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f042cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f0430:
    // 0x2f0430: 0xc06c054  jal         func_1B0150
label_2f0434:
    if (ctx->pc == 0x2F0434u) {
        ctx->pc = 0x2F0434u;
            // 0x2f0434: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x2F0438u;
        goto label_2f0438;
    }
    ctx->pc = 0x2F0430u;
    SET_GPR_U32(ctx, 31, 0x2F0438u);
    ctx->pc = 0x2F0434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0430u;
            // 0x2f0434: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0150u;
    if (runtime->hasFunction(0x1B0150u)) {
        auto targetFn = runtime->lookupFunction(0x1B0150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0438u; }
        if (ctx->pc != 0x2F0438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeepEditAnalyze__Fv_0x1b0150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0438u; }
        if (ctx->pc != 0x2F0438u) { return; }
    }
    ctx->pc = 0x2F0438u;
label_2f0438:
    // 0x2f0438: 0x100001a8  b           . + 4 + (0x1A8 << 2)
label_2f043c:
    if (ctx->pc == 0x2F043Cu) {
        ctx->pc = 0x2F0440u;
        goto label_2f0440;
    }
    ctx->pc = 0x2F0438u;
    {
        const bool branch_taken_0x2f0438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0438) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0440u;
label_2f0440:
    // 0x2f0440: 0xc050d88  jal         func_143620
label_2f0444:
    if (ctx->pc == 0x2F0444u) {
        ctx->pc = 0x2F0444u;
            // 0x2f0444: 0xc68c00f0  lwc1        $f12, 0xF0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2F0448u;
        goto label_2f0448;
    }
    ctx->pc = 0x2F0440u;
    SET_GPR_U32(ctx, 31, 0x2F0448u);
    ctx->pc = 0x2F0444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0440u;
            // 0x2f0444: 0xc68c00f0  lwc1        $f12, 0xF0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x143620u;
    if (runtime->hasFunction(0x143620u)) {
        auto targetFn = runtime->lookupFunction(0x143620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0448u; }
        if (ctx->pc != 0x2F0448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetProjection__Ff_0x143620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0448u; }
        if (ctx->pc != 0x2F0448u) { return; }
    }
    ctx->pc = 0x2F0448u;
label_2f0448:
    // 0x2f0448: 0x8f8385d0  lw          $v1, -0x7A30($gp)
    ctx->pc = 0x2f0448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_2f044c:
    // 0x2f044c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2f044cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f0450:
    // 0x2f0450: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x2f0450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_2f0454:
    // 0x2f0454: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2f0458:
    if (ctx->pc == 0x2F0458u) {
        ctx->pc = 0x2F0458u;
            // 0x2f0458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F045Cu;
        goto label_2f045c;
    }
    ctx->pc = 0x2F0454u;
    {
        const bool branch_taken_0x2f0454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F0458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0454u;
            // 0x2f0458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0454) {
            ctx->pc = 0x2F046Cu;
            goto label_2f046c;
        }
    }
    ctx->pc = 0x2F045Cu;
label_2f045c:
    // 0x2f045c: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x2f045cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_2f0460:
    // 0x2f0460: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2f0460u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2f0464:
    // 0x2f0464: 0x1000019d  b           . + 4 + (0x19D << 2)
label_2f0468:
    if (ctx->pc == 0x2F0468u) {
        ctx->pc = 0x2F0468u;
            // 0x2f0468: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x2F046Cu;
        goto label_2f046c;
    }
    ctx->pc = 0x2F0464u;
    {
        const bool branch_taken_0x2f0464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0464u;
            // 0x2f0468: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0464) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F046Cu;
label_2f046c:
    // 0x2f046c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2f046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2f0470:
    // 0x2f0470: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f0470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f0474:
    // 0x2f0474: 0xc06bf8c  jal         func_1AFE30
label_2f0478:
    if (ctx->pc == 0x2F0478u) {
        ctx->pc = 0x2F0478u;
            // 0x2f0478: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x2F047Cu;
        goto label_2f047c;
    }
    ctx->pc = 0x2F0474u;
    SET_GPR_U32(ctx, 31, 0x2F047Cu);
    ctx->pc = 0x2F0478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0474u;
            // 0x2f0478: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AFE30u;
    if (runtime->hasFunction(0x1AFE30u)) {
        auto targetFn = runtime->lookupFunction(0x1AFE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F047Cu; }
        if (ctx->pc != 0x2F047Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDataSave__Fv_0x1afe30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F047Cu; }
        if (ctx->pc != 0x2F047Cu) { return; }
    }
    ctx->pc = 0x2F047Cu;
label_2f047c:
    // 0x2f047c: 0x8e8500d0  lw          $a1, 0xD0($s4)
    ctx->pc = 0x2f047cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
label_2f0480:
    // 0x2f0480: 0xc06c310  jal         func_1B0C40
label_2f0484:
    if (ctx->pc == 0x2F0484u) {
        ctx->pc = 0x2F0484u;
            // 0x2f0484: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0488u;
        goto label_2f0488;
    }
    ctx->pc = 0x2F0480u;
    SET_GPR_U32(ctx, 31, 0x2F0488u);
    ctx->pc = 0x2F0484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0480u;
            // 0x2f0484: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0488u; }
        if (ctx->pc != 0x2F0488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0488u; }
        if (ctx->pc != 0x2F0488u) { return; }
    }
    ctx->pc = 0x2F0488u;
label_2f0488:
    // 0x2f0488: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f048c:
    if (ctx->pc == 0x2F048Cu) {
        ctx->pc = 0x2F048Cu;
            // 0x2f048c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2F0490u;
        goto label_2f0490;
    }
    ctx->pc = 0x2F0488u;
    {
        const bool branch_taken_0x2f0488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F048Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0488u;
            // 0x2f048c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0488) {
            ctx->pc = 0x2F049Cu;
            goto label_2f049c;
        }
    }
    ctx->pc = 0x2F0490u;
label_2f0490:
    // 0x2f0490: 0xc06d694  jal         func_1B5A50
label_2f0494:
    if (ctx->pc == 0x2F0494u) {
        ctx->pc = 0x2F0494u;
            // 0x2f0494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0498u;
        goto label_2f0498;
    }
    ctx->pc = 0x2F0490u;
    SET_GPR_U32(ctx, 31, 0x2F0498u);
    ctx->pc = 0x2F0494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0490u;
            // 0x2f0494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5A50u;
    if (runtime->hasFunction(0x1B5A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0498u; }
        if (ctx->pc != 0x2F0498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInfoID__10CEditPartsFv_0x1b5a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0498u; }
        if (ctx->pc != 0x2F0498u) { return; }
    }
    ctx->pc = 0x2F0498u;
label_2f0498:
    // 0x2f0498: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f0498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f049c:
    // 0x2f049c: 0x8f8385d0  lw          $v1, -0x7A30($gp)
    ctx->pc = 0x2f049cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_2f04a0:
    // 0x2f04a0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2f04a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2f04a4:
    // 0x2f04a4: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x2f04a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_2f04a8:
    // 0x2f04a8: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_2f04ac:
    if (ctx->pc == 0x2F04ACu) {
        ctx->pc = 0x2F04ACu;
            // 0x2f04ac: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2F04B0u;
        goto label_2f04b0;
    }
    ctx->pc = 0x2F04A8u;
    {
        const bool branch_taken_0x2f04a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F04ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F04A8u;
            // 0x2f04ac: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f04a8) {
            ctx->pc = 0x2F04E4u;
            goto label_2f04e4;
        }
    }
    ctx->pc = 0x2F04B0u;
label_2f04b0:
    // 0x2f04b0: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x2f04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_2f04b4:
    // 0x2f04b4: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_2f04b8:
    if (ctx->pc == 0x2F04B8u) {
        ctx->pc = 0x2F04BCu;
        goto label_2f04bc;
    }
    ctx->pc = 0x2F04B4u;
    {
        const bool branch_taken_0x2f04b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f04b4) {
            ctx->pc = 0x2F04E0u;
            goto label_2f04e0;
        }
    }
    ctx->pc = 0x2F04BCu;
label_2f04bc:
    // 0x2f04bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f04bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f04c0:
    // 0x2f04c0: 0x26442c70  addiu       $a0, $s2, 0x2C70
    ctx->pc = 0x2f04c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11376));
label_2f04c4:
    // 0x2f04c4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2f04c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2f04c8:
    // 0x2f04c8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f04c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f04cc:
    // 0x2f04cc: 0xc05f610  jal         func_17D840
label_2f04d0:
    if (ctx->pc == 0x2F04D0u) {
        ctx->pc = 0x2F04D0u;
            // 0x2f04d0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2F04D4u;
        goto label_2f04d4;
    }
    ctx->pc = 0x2F04CCu;
    SET_GPR_U32(ctx, 31, 0x2F04D4u);
    ctx->pc = 0x2F04D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F04CCu;
            // 0x2f04d0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F04D4u; }
        if (ctx->pc != 0x2F04D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F04D4u; }
        if (ctx->pc != 0x2F04D4u) { return; }
    }
    ctx->pc = 0x2F04D4u;
label_2f04d4:
    // 0x2f04d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f04d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f04d8:
    // 0x2f04d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2f04dc:
    if (ctx->pc == 0x2F04DCu) {
        ctx->pc = 0x2F04DCu;
            // 0x2f04dc: 0xae820120  sw          $v0, 0x120($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 2));
        ctx->pc = 0x2F04E0u;
        goto label_2f04e0;
    }
    ctx->pc = 0x2F04D8u;
    {
        const bool branch_taken_0x2f04d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F04DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F04D8u;
            // 0x2f04dc: 0xae820120  sw          $v0, 0x120($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f04d8) {
            ctx->pc = 0x2F04ECu;
            goto label_2f04ec;
        }
    }
    ctx->pc = 0x2F04E0u;
label_2f04e0:
    // 0x2f04e0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2f04e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2f04e4:
    // 0x2f04e4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f04e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f04e8:
    // 0x2f04e8: 0xae800120  sw          $zero, 0x120($s4)
    ctx->pc = 0x2f04e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 0));
label_2f04ec:
    // 0x2f04ec: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2f04ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f04f0:
    // 0x2f04f0: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x2f04f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
label_2f04f4:
    // 0x2f04f4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_2f04f8:
    if (ctx->pc == 0x2F04F8u) {
        ctx->pc = 0x2F04F8u;
            // 0x2f04f8: 0x26442c70  addiu       $a0, $s2, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11376));
        ctx->pc = 0x2F04FCu;
        goto label_2f04fc;
    }
    ctx->pc = 0x2F04F4u;
    {
        const bool branch_taken_0x2f04f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F04F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F04F4u;
            // 0x2f04f8: 0x26442c70  addiu       $a0, $s2, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f04f4) {
            ctx->pc = 0x2F050Cu;
            goto label_2f050c;
        }
    }
    ctx->pc = 0x2F04FCu;
label_2f04fc:
    // 0x2f04fc: 0xc05f65c  jal         func_17D970
label_2f0500:
    if (ctx->pc == 0x2F0500u) {
        ctx->pc = 0x2F0504u;
        goto label_2f0504;
    }
    ctx->pc = 0x2F04FCu;
    SET_GPR_U32(ctx, 31, 0x2F0504u);
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0504u; }
        if (ctx->pc != 0x2F0504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0504u; }
        if (ctx->pc != 0x2F0504u) { return; }
    }
    ctx->pc = 0x2F0504u;
label_2f0504:
    // 0x2f0504: 0x10400175  beqz        $v0, . + 4 + (0x175 << 2)
label_2f0508:
    if (ctx->pc == 0x2F0508u) {
        ctx->pc = 0x2F050Cu;
        goto label_2f050c;
    }
    ctx->pc = 0x2F0504u;
    {
        const bool branch_taken_0x2f0504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0504) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F050Cu;
label_2f050c:
    // 0x2f050c: 0x8e820120  lw          $v0, 0x120($s4)
    ctx->pc = 0x2f050cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
label_2f0510:
    // 0x2f0510: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2f0514:
    if (ctx->pc == 0x2F0514u) {
        ctx->pc = 0x2F0514u;
            // 0x2f0514: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F0518u;
        goto label_2f0518;
    }
    ctx->pc = 0x2F0510u;
    {
        const bool branch_taken_0x2f0510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0510u;
            // 0x2f0514: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0510) {
            ctx->pc = 0x2F0530u;
            goto label_2f0530;
        }
    }
    ctx->pc = 0x2F0518u;
label_2f0518:
    // 0x2f0518: 0x26442c70  addiu       $a0, $s2, 0x2C70
    ctx->pc = 0x2f0518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11376));
label_2f051c:
    // 0x2f051c: 0xc05f5fc  jal         func_17D7F0
label_2f0520:
    if (ctx->pc == 0x2F0520u) {
        ctx->pc = 0x2F0520u;
            // 0x2f0520: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2F0524u;
        goto label_2f0524;
    }
    ctx->pc = 0x2F051Cu;
    SET_GPR_U32(ctx, 31, 0x2F0524u);
    ctx->pc = 0x2F0520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F051Cu;
            // 0x2f0520: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0524u; }
        if (ctx->pc != 0x2F0524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0524u; }
        if (ctx->pc != 0x2F0524u) { return; }
    }
    ctx->pc = 0x2F0524u;
label_2f0524:
    // 0x2f0524: 0x27a4018c  addiu       $a0, $sp, 0x18C
    ctx->pc = 0x2f0524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_2f0528:
    // 0x2f0528: 0xc0bc3a8  jal         func_2F0EA0
label_2f052c:
    if (ctx->pc == 0x2F052Cu) {
        ctx->pc = 0x2F052Cu;
            // 0x2f052c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0530u;
        goto label_2f0530;
    }
    ctx->pc = 0x2F0528u;
    SET_GPR_U32(ctx, 31, 0x2F0530u);
    ctx->pc = 0x2F052Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0528u;
            // 0x2f052c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0EA0u;
    if (runtime->hasFunction(0x2F0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0530u; }
        if (ctx->pc != 0x2F0530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGeoNPC__FP12GeoFuncParami_0x2f0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0530u; }
        if (ctx->pc != 0x2F0530u) { return; }
    }
    ctx->pc = 0x2F0530u;
label_2f0530:
    // 0x2f0530: 0xc06c074  jal         func_1B01D0
label_2f0534:
    if (ctx->pc == 0x2F0534u) {
        ctx->pc = 0x2F0538u;
        goto label_2f0538;
    }
    ctx->pc = 0x2F0530u;
    SET_GPR_U32(ctx, 31, 0x2F0538u);
    ctx->pc = 0x1B01D0u;
    if (runtime->hasFunction(0x1B01D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B01D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0538u; }
        if (ctx->pc != 0x2F0538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditAnalyzeChanged__Fv_0x1b01d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0538u; }
        if (ctx->pc != 0x2F0538u) { return; }
    }
    ctx->pc = 0x2F0538u;
label_2f0538:
    // 0x2f0538: 0x10400168  beqz        $v0, . + 4 + (0x168 << 2)
label_2f053c:
    if (ctx->pc == 0x2F053Cu) {
        ctx->pc = 0x2F053Cu;
            // 0x2f053c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0540u;
        goto label_2f0540;
    }
    ctx->pc = 0x2F0538u;
    {
        const bool branch_taken_0x2f0538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F053Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0538u;
            // 0x2f053c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0538) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0540u;
label_2f0540:
    // 0x2f0540: 0x24050136  addiu       $a1, $zero, 0x136
    ctx->pc = 0x2f0540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
label_2f0544:
    // 0x2f0544: 0xc0b1f3c  jal         func_2C7CF0
label_2f0548:
    if (ctx->pc == 0x2F0548u) {
        ctx->pc = 0x2F0548u;
            // 0x2f0548: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F054Cu;
        goto label_2f054c;
    }
    ctx->pc = 0x2F0544u;
    SET_GPR_U32(ctx, 31, 0x2F054Cu);
    ctx->pc = 0x2F0548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0544u;
            // 0x2f0548: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CF0u;
    if (runtime->hasFunction(0x2C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F054Cu; }
        if (ctx->pc != 0x2F054Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F054Cu; }
        if (ctx->pc != 0x2F054Cu) { return; }
    }
    ctx->pc = 0x2F054Cu;
label_2f054c:
    // 0x2f054c: 0x10000163  b           . + 4 + (0x163 << 2)
label_2f0550:
    if (ctx->pc == 0x2F0550u) {
        ctx->pc = 0x2F0554u;
        goto label_2f0554;
    }
    ctx->pc = 0x2F054Cu;
    {
        const bool branch_taken_0x2f054c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f054c) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0554u;
label_2f0554:
    // 0x2f0554: 0x144400ee  bne         $v0, $a0, . + 4 + (0xEE << 2)
label_2f0558:
    if (ctx->pc == 0x2F0558u) {
        ctx->pc = 0x2F0558u;
            // 0x2f0558: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2F055Cu;
        goto label_2f055c;
    }
    ctx->pc = 0x2F0554u;
    {
        const bool branch_taken_0x2f0554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2F0558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0554u;
            // 0x2f0558: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0554) {
            ctx->pc = 0x2F0910u;
            goto label_2f0910;
        }
    }
    ctx->pc = 0x2F055Cu;
label_2f055c:
    // 0x2f055c: 0x8e8500d4  lw          $a1, 0xD4($s4)
    ctx->pc = 0x2f055cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_2f0560:
    // 0x2f0560: 0xc058188  jal         func_160620
label_2f0564:
    if (ctx->pc == 0x2F0564u) {
        ctx->pc = 0x2F0564u;
            // 0x2f0564: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0568u;
        goto label_2f0568;
    }
    ctx->pc = 0x2F0560u;
    SET_GPR_U32(ctx, 31, 0x2F0568u);
    ctx->pc = 0x2F0564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0560u;
            // 0x2f0564: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160620u;
    if (runtime->hasFunction(0x160620u)) {
        auto targetFn = runtime->lookupFunction(0x160620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0568u; }
        if (ctx->pc != 0x2F0568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTrBox__4CMapFi_0x160620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0568u; }
        if (ctx->pc != 0x2F0568u) { return; }
    }
    ctx->pc = 0x2F0568u;
label_2f0568:
    // 0x2f0568: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f0568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f056c:
    // 0x2f056c: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_2f0570:
    if (ctx->pc == 0x2F0570u) {
        ctx->pc = 0x2F0570u;
            // 0x2f0570: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0574u;
        goto label_2f0574;
    }
    ctx->pc = 0x2F056Cu;
    {
        const bool branch_taken_0x2f056c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F056Cu;
            // 0x2f0570: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f056c) {
            ctx->pc = 0x2F058Cu;
            goto label_2f058c;
        }
    }
    ctx->pc = 0x2F0574u;
label_2f0574:
    // 0x2f0574: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x2f0574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_2f0578:
    // 0x2f0578: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2f057c:
    if (ctx->pc == 0x2F057Cu) {
        ctx->pc = 0x2F057Cu;
            // 0x2f057c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2F0580u;
        goto label_2f0580;
    }
    ctx->pc = 0x2F0578u;
    {
        const bool branch_taken_0x2f0578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F057Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0578u;
            // 0x2f057c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0578) {
            ctx->pc = 0x2F058Cu;
            goto label_2f058c;
        }
    }
    ctx->pc = 0x2F0580u;
label_2f0580:
    // 0x2f0580: 0xc04ddb4  jal         func_1376D0
label_2f0584:
    if (ctx->pc == 0x2F0584u) {
        ctx->pc = 0x2F0584u;
            // 0x2f0584: 0x24a515c8  addiu       $a1, $a1, 0x15C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5576));
        ctx->pc = 0x2F0588u;
        goto label_2f0588;
    }
    ctx->pc = 0x2F0580u;
    SET_GPR_U32(ctx, 31, 0x2F0588u);
    ctx->pc = 0x2F0584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0580u;
            // 0x2f0584: 0x24a515c8  addiu       $a1, $a1, 0x15C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0588u; }
        if (ctx->pc != 0x2F0588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0588u; }
        if (ctx->pc != 0x2F0588u) { return; }
    }
    ctx->pc = 0x2F0588u;
label_2f0588:
    // 0x2f0588: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2f0588u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f058c:
    // 0x2f058c: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_2f0590:
    if (ctx->pc == 0x2F0590u) {
        ctx->pc = 0x2F0590u;
            // 0x2f0590: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2F0594u;
        goto label_2f0594;
    }
    ctx->pc = 0x2F058Cu;
    {
        const bool branch_taken_0x2f058c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F058Cu;
            // 0x2f0590: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f058c) {
            ctx->pc = 0x2F059Cu;
            goto label_2f059c;
        }
    }
    ctx->pc = 0x2F0594u;
label_2f0594:
    // 0x2f0594: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f0594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0598:
    // 0x2f0598: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x2f0598u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_2f059c:
    // 0x2f059c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x2f059cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2f05a0:
    // 0x2f05a0: 0x2c810008  sltiu       $at, $a0, 0x8
    ctx->pc = 0x2f05a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2f05a4:
    // 0x2f05a4: 0x1020014d  beqz        $at, . + 4 + (0x14D << 2)
label_2f05a8:
    if (ctx->pc == 0x2F05A8u) {
        ctx->pc = 0x2F05A8u;
            // 0x2f05a8: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2F05ACu;
        goto label_2f05ac;
    }
    ctx->pc = 0x2F05A4u;
    {
        const bool branch_taken_0x2f05a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F05A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F05A4u;
            // 0x2f05a8: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f05a4) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F05ACu;
label_2f05ac:
    // 0x2f05ac: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2f05acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2f05b0:
    // 0x2f05b0: 0x246315e0  addiu       $v1, $v1, 0x15E0
    ctx->pc = 0x2f05b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5600));
label_2f05b4:
    // 0x2f05b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f05b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f05b8:
    // 0x2f05b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f05bc:
    // 0x2f05bc: 0x400008  jr          $v0
label_2f05c0:
    if (ctx->pc == 0x2F05C0u) {
        ctx->pc = 0x2F05C4u;
        goto label_2f05c4;
    }
    ctx->pc = 0x2F05BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F05C4u: goto label_2f05c4;
            case 0x2F0678u: goto label_2f0678;
            case 0x2F069Cu: goto label_2f069c;
            case 0x2F07B4u: goto label_2f07b4;
            case 0x2F07E0u: goto label_2f07e0;
            case 0x2F0868u: goto label_2f0868;
            case 0x2F0880u: goto label_2f0880;
            case 0x2F0908u: goto label_2f0908;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F05C4u;
label_2f05c4:
    // 0x2f05c4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2f05c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f05c8:
    // 0x2f05c8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f05c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2f05cc:
    // 0x2f05cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f05ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f05d0:
    // 0x2f05d0: 0x24a515d0  addiu       $a1, $a1, 0x15D0
    ctx->pc = 0x2f05d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5584));
label_2f05d4:
    // 0x2f05d4: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2f05d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2f05d8:
    // 0x2f05d8: 0x320f809  jalr        $t9
label_2f05dc:
    if (ctx->pc == 0x2F05DCu) {
        ctx->pc = 0x2F05DCu;
            // 0x2f05dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F05E0u;
        goto label_2f05e0;
    }
    ctx->pc = 0x2F05D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F05E0u);
        ctx->pc = 0x2F05DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F05D8u;
            // 0x2f05dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F05E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F05E0u; }
            if (ctx->pc != 0x2F05E0u) { return; }
        }
        }
    }
    ctx->pc = 0x2F05E0u;
label_2f05e0:
    // 0x2f05e0: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2f05e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2f05e4:
    // 0x2f05e4: 0x8e45066c  lw          $a1, 0x66C($s2)
    ctx->pc = 0x2f05e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1644)));
label_2f05e8:
    // 0x2f05e8: 0xc068524  jal         func_1A1490
label_2f05ec:
    if (ctx->pc == 0x2F05ECu) {
        ctx->pc = 0x2F05ECu;
            // 0x2f05ec: 0x8e440668  lw          $a0, 0x668($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1640)));
        ctx->pc = 0x2F05F0u;
        goto label_2f05f0;
    }
    ctx->pc = 0x2F05E8u;
    SET_GPR_U32(ctx, 31, 0x2F05F0u);
    ctx->pc = 0x2F05ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F05E8u;
            // 0x2f05ec: 0x8e440668  lw          $a0, 0x668($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1640)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1490u;
    if (runtime->hasFunction(0x1A1490u)) {
        auto targetFn = runtime->lookupFunction(0x1A1490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F05F0u; }
        if (ctx->pc != 0x2F05F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckGetItemLimmitOver__Fii_0x1a1490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F05F0u; }
        if (ctx->pc != 0x2F05F0u) { return; }
    }
    ctx->pc = 0x2F05F0u;
label_2f05f0:
    // 0x2f05f0: 0x8e43066c  lw          $v1, 0x66C($s2)
    ctx->pc = 0x2f05f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1644)));
label_2f05f4:
    // 0x2f05f4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2f05f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2f05f8:
    // 0x2f05f8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_2f05fc:
    if (ctx->pc == 0x2F05FCu) {
        ctx->pc = 0x2F05FCu;
            // 0x2f05fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0600u;
        goto label_2f0600;
    }
    ctx->pc = 0x2F05F8u;
    {
        const bool branch_taken_0x2f05f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F05FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F05F8u;
            // 0x2f05fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f05f8) {
            ctx->pc = 0x2F0638u;
            goto label_2f0638;
        }
    }
    ctx->pc = 0x2F0600u;
label_2f0600:
    // 0x2f0600: 0xc054bb4  jal         func_152ED0
label_2f0604:
    if (ctx->pc == 0x2F0604u) {
        ctx->pc = 0x2F0604u;
            // 0x2f0604: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F0608u;
        goto label_2f0608;
    }
    ctx->pc = 0x2F0600u;
    SET_GPR_U32(ctx, 31, 0x2F0608u);
    ctx->pc = 0x2F0604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0600u;
            // 0x2f0604: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0608u; }
        if (ctx->pc != 0x2F0608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0608u; }
        if (ctx->pc != 0x2F0608u) { return; }
    }
    ctx->pc = 0x2F0608u;
label_2f0608:
    // 0x2f0608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f060c:
    // 0x2f060c: 0xc054cdc  jal         func_153370
label_2f0610:
    if (ctx->pc == 0x2F0610u) {
        ctx->pc = 0x2F0610u;
            // 0x2f0610: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F0614u;
        goto label_2f0614;
    }
    ctx->pc = 0x2F060Cu;
    SET_GPR_U32(ctx, 31, 0x2F0614u);
    ctx->pc = 0x2F0610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F060Cu;
            // 0x2f0610: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0614u; }
        if (ctx->pc != 0x2F0614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0614u; }
        if (ctx->pc != 0x2F0614u) { return; }
    }
    ctx->pc = 0x2F0614u;
label_2f0614:
    // 0x2f0614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0618:
    // 0x2f0618: 0xc0562c8  jal         func_158B20
label_2f061c:
    if (ctx->pc == 0x2F061Cu) {
        ctx->pc = 0x2F061Cu;
            // 0x2f061c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x2F0620u;
        goto label_2f0620;
    }
    ctx->pc = 0x2F0618u;
    SET_GPR_U32(ctx, 31, 0x2F0620u);
    ctx->pc = 0x2F061Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0618u;
            // 0x2f061c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0620u; }
        if (ctx->pc != 0x2F0620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0620u; }
        if (ctx->pc != 0x2F0620u) { return; }
    }
    ctx->pc = 0x2F0620u;
label_2f0620:
    // 0x2f0620: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2f0620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f0624:
    // 0x2f0624: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f0624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f0628:
    // 0x2f0628: 0xae03014c  sw          $v1, 0x14C($s0)
    ctx->pc = 0x2f0628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 3));
label_2f062c:
    // 0x2f062c: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x2f062cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_2f0630:
    // 0x2f0630: 0x1000012a  b           . + 4 + (0x12A << 2)
label_2f0634:
    if (ctx->pc == 0x2F0634u) {
        ctx->pc = 0x2F0634u;
            // 0x2f0634: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2F0638u;
        goto label_2f0638;
    }
    ctx->pc = 0x2F0630u;
    {
        const bool branch_taken_0x2f0630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0630u;
            // 0x2f0634: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0630) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0638u;
label_2f0638:
    // 0x2f0638: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2f0638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2f063c:
    // 0x2f063c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f063cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f0640:
    // 0x2f0640: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f0640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f0644:
    // 0x2f0644: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f0644u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f0648:
    // 0x2f0648: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f0648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f064c:
    // 0x2f064c: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x2f064cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_2f0650:
    // 0x2f0650: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2f0650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2f0654:
    // 0x2f0654: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2f0654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2f0658:
    // 0x2f0658: 0x320f809  jalr        $t9
label_2f065c:
    if (ctx->pc == 0x2F065Cu) {
        ctx->pc = 0x2F065Cu;
            // 0x2f065c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2F0660u;
        goto label_2f0660;
    }
    ctx->pc = 0x2F0658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F0660u);
        ctx->pc = 0x2F065Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0658u;
            // 0x2f065c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F0660u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F0660u; }
            if (ctx->pc != 0x2F0660u) { return; }
        }
        }
    }
    ctx->pc = 0x2F0660u;
label_2f0660:
    // 0x2f0660: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2f0660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2f0664:
    // 0x2f0664: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2f0664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2f0668:
    // 0x2f0668: 0xc063818  jal         func_18E060
label_2f066c:
    if (ctx->pc == 0x2F066Cu) {
        ctx->pc = 0x2F066Cu;
            // 0x2f066c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0670u;
        goto label_2f0670;
    }
    ctx->pc = 0x2F0668u;
    SET_GPR_U32(ctx, 31, 0x2F0670u);
    ctx->pc = 0x2F066Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0668u;
            // 0x2f066c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0670u; }
        if (ctx->pc != 0x2F0670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0670u; }
        if (ctx->pc != 0x2F0670u) { return; }
    }
    ctx->pc = 0x2F0670u;
label_2f0670:
    // 0x2f0670: 0x1000011a  b           . + 4 + (0x11A << 2)
label_2f0674:
    if (ctx->pc == 0x2F0674u) {
        ctx->pc = 0x2F0678u;
        goto label_2f0678;
    }
    ctx->pc = 0x2F0670u;
    {
        const bool branch_taken_0x2f0670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0670) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0678u;
label_2f0678:
    // 0x2f0678: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2f0678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f067c:
    // 0x2f067c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x2f067cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_2f0680:
    // 0x2f0680: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2f0684:
    if (ctx->pc == 0x2F0684u) {
        ctx->pc = 0x2F0684u;
            // 0x2f0684: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x2F0688u;
        goto label_2f0688;
    }
    ctx->pc = 0x2F0680u;
    {
        const bool branch_taken_0x2f0680 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0680u;
            // 0x2f0684: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0680) {
            ctx->pc = 0x2F068Cu;
            goto label_2f068c;
        }
    }
    ctx->pc = 0x2F0688u;
label_2f0688:
    // 0x2f0688: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x2f0688u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_2f068c:
    // 0x2f068c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2f068cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f0690:
    // 0x2f0690: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f0690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f0694:
    // 0x2f0694: 0x10000111  b           . + 4 + (0x111 << 2)
label_2f0698:
    if (ctx->pc == 0x2F0698u) {
        ctx->pc = 0x2F0698u;
            // 0x2f0698: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2F069Cu;
        goto label_2f069c;
    }
    ctx->pc = 0x2F0694u;
    {
        const bool branch_taken_0x2f0694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0694u;
            // 0x2f0698: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0694) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F069Cu;
label_2f069c:
    // 0x2f069c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2f069cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2f06a0:
    // 0x2f06a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f06a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f06a4:
    // 0x2f06a4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2f06a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2f06a8:
    // 0x2f06a8: 0x320f809  jalr        $t9
label_2f06ac:
    if (ctx->pc == 0x2F06ACu) {
        ctx->pc = 0x2F06ACu;
            // 0x2f06ac: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x2F06B0u;
        goto label_2f06b0;
    }
    ctx->pc = 0x2F06A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F06B0u);
        ctx->pc = 0x2F06ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F06A8u;
            // 0x2f06ac: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F06B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F06B0u; }
            if (ctx->pc != 0x2F06B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2F06B0u;
label_2f06b0:
    // 0x2f06b0: 0xc7a10170  lwc1        $f1, 0x170($sp)
    ctx->pc = 0x2f06b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f06b4:
    // 0x2f06b4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2f06b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_2f06b8:
    // 0x2f06b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f06b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2f06bc:
    // 0x2f06bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f06bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f06c0:
    // 0x2f06c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f06c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f06c4:
    // 0x2f06c4: 0x0  nop
    ctx->pc = 0x2f06c4u;
    // NOP
label_2f06c8:
    // 0x2f06c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2f06c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2f06cc:
    // 0x2f06cc: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2f06ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_2f06d0:
    // 0x2f06d0: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2f06d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2f06d4:
    // 0x2f06d4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2f06d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2f06d8:
    // 0x2f06d8: 0x320f809  jalr        $t9
label_2f06dc:
    if (ctx->pc == 0x2F06DCu) {
        ctx->pc = 0x2F06DCu;
            // 0x2f06dc: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x2F06E0u;
        goto label_2f06e0;
    }
    ctx->pc = 0x2F06D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F06E0u);
        ctx->pc = 0x2F06DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F06D8u;
            // 0x2f06dc: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F06E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F06E0u; }
            if (ctx->pc != 0x2F06E0u) { return; }
        }
        }
    }
    ctx->pc = 0x2F06E0u;
label_2f06e0:
    // 0x2f06e0: 0xc7a10170  lwc1        $f1, 0x170($sp)
    ctx->pc = 0x2f06e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f06e4:
    // 0x2f06e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f06e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2f06e8:
    // 0x2f06e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f06e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f06ec:
    // 0x2f06ec: 0x0  nop
    ctx->pc = 0x2f06ecu;
    // NOP
label_2f06f0:
    // 0x2f06f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f06f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f06f4:
    // 0x2f06f4: 0x0  nop
    ctx->pc = 0x2f06f4u;
    // NOP
label_2f06f8:
    // 0x2f06f8: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_2f06fc:
    if (ctx->pc == 0x2F06FCu) {
        ctx->pc = 0x2F0700u;
        goto label_2f0700;
    }
    ctx->pc = 0x2F06F8u;
    {
        const bool branch_taken_0x2f06f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f06f8) {
            ctx->pc = 0x2F07ACu;
            goto label_2f07ac;
        }
    }
    ctx->pc = 0x2F0700u;
label_2f0700:
    // 0x2f0700: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2f0700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2f0704:
    // 0x2f0704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0708:
    // 0x2f0708: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f0708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f070c:
    // 0x2f070c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f0710:
    // 0x2f0710: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x2f0710u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_2f0714:
    // 0x2f0714: 0xc054bb4  jal         func_152ED0
label_2f0718:
    if (ctx->pc == 0x2F0718u) {
        ctx->pc = 0x2F0718u;
            // 0x2f0718: 0xae400064  sw          $zero, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x2F071Cu;
        goto label_2f071c;
    }
    ctx->pc = 0x2F0714u;
    SET_GPR_U32(ctx, 31, 0x2F071Cu);
    ctx->pc = 0x2F0718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0714u;
            // 0x2f0718: 0xae400064  sw          $zero, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F071Cu; }
        if (ctx->pc != 0x2F071Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F071Cu; }
        if (ctx->pc != 0x2F071Cu) { return; }
    }
    ctx->pc = 0x2F071Cu;
label_2f071c:
    // 0x2f071c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f071cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0720:
    // 0x2f0720: 0xc054cdc  jal         func_153370
label_2f0724:
    if (ctx->pc == 0x2F0724u) {
        ctx->pc = 0x2F0724u;
            // 0x2f0724: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F0728u;
        goto label_2f0728;
    }
    ctx->pc = 0x2F0720u;
    SET_GPR_U32(ctx, 31, 0x2F0728u);
    ctx->pc = 0x2F0724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0720u;
            // 0x2f0724: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0728u; }
        if (ctx->pc != 0x2F0728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0728u; }
        if (ctx->pc != 0x2F0728u) { return; }
    }
    ctx->pc = 0x2F0728u;
label_2f0728:
    // 0x2f0728: 0x8e42066c  lw          $v0, 0x66C($s2)
    ctx->pc = 0x2f0728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1644)));
label_2f072c:
    // 0x2f072c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2f072cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2f0730:
    // 0x2f0730: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_2f0734:
    if (ctx->pc == 0x2F0734u) {
        ctx->pc = 0x2F0734u;
            // 0x2f0734: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2F0738u;
        goto label_2f0738;
    }
    ctx->pc = 0x2F0730u;
    {
        const bool branch_taken_0x2f0730 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0730u;
            // 0x2f0734: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0730) {
            ctx->pc = 0x2F074Cu;
            goto label_2f074c;
        }
    }
    ctx->pc = 0x2F0738u;
label_2f0738:
    // 0x2f0738: 0x8e440668  lw          $a0, 0x668($s2)
    ctx->pc = 0x2f0738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1640)));
label_2f073c:
    // 0x2f073c: 0xc0657f8  jal         func_195FE0
label_2f0740:
    if (ctx->pc == 0x2F0740u) {
        ctx->pc = 0x2F0740u;
            // 0x2f0740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F0744u;
        goto label_2f0744;
    }
    ctx->pc = 0x2F073Cu;
    SET_GPR_U32(ctx, 31, 0x2F0744u);
    ctx->pc = 0x2F0740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F073Cu;
            // 0x2f0740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195FE0u;
    if (runtime->hasFunction(0x195FE0u)) {
        auto targetFn = runtime->lookupFunction(0x195FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0744u; }
        if (ctx->pc != 0x2F0744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessageNo__Fii_0x195fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0744u; }
        if (ctx->pc != 0x2F0744u) { return; }
    }
    ctx->pc = 0x2F0744u;
label_2f0744:
    // 0x2f0744: 0x10000009  b           . + 4 + (0x9 << 2)
label_2f0748:
    if (ctx->pc == 0x2F0748u) {
        ctx->pc = 0x2F0748u;
            // 0x2f0748: 0xae021a04  sw          $v0, 0x1A04($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6660), GPR_U32(ctx, 2));
        ctx->pc = 0x2F074Cu;
        goto label_2f074c;
    }
    ctx->pc = 0x2F0744u;
    {
        const bool branch_taken_0x2f0744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0744u;
            // 0x2f0748: 0xae021a04  sw          $v0, 0x1A04($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0744) {
            ctx->pc = 0x2F076Cu;
            goto label_2f076c;
        }
    }
    ctx->pc = 0x2F074Cu;
label_2f074c:
    // 0x2f074c: 0x8e440668  lw          $a0, 0x668($s2)
    ctx->pc = 0x2f074cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1640)));
label_2f0750:
    // 0x2f0750: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f0750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0754:
    // 0x2f0754: 0xc0657f8  jal         func_195FE0
label_2f0758:
    if (ctx->pc == 0x2F0758u) {
        ctx->pc = 0x2F0758u;
            // 0x2f0758: 0x2413000b  addiu       $s3, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2F075Cu;
        goto label_2f075c;
    }
    ctx->pc = 0x2F0754u;
    SET_GPR_U32(ctx, 31, 0x2F075Cu);
    ctx->pc = 0x2F0758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0754u;
            // 0x2f0758: 0x2413000b  addiu       $s3, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195FE0u;
    if (runtime->hasFunction(0x195FE0u)) {
        auto targetFn = runtime->lookupFunction(0x195FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F075Cu; }
        if (ctx->pc != 0x2F075Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessageNo__Fii_0x195fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F075Cu; }
        if (ctx->pc != 0x2F075Cu) { return; }
    }
    ctx->pc = 0x2F075Cu;
label_2f075c:
    // 0x2f075c: 0xae021a04  sw          $v0, 0x1A04($s0)
    ctx->pc = 0x2f075cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6660), GPR_U32(ctx, 2));
label_2f0760:
    // 0x2f0760: 0x8e42066c  lw          $v0, 0x66C($s2)
    ctx->pc = 0x2f0760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1644)));
label_2f0764:
    // 0x2f0764: 0xae021a48  sw          $v0, 0x1A48($s0)
    ctx->pc = 0x2f0764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6728), GPR_U32(ctx, 2));
label_2f0768:
    // 0x2f0768: 0xae001a88  sw          $zero, 0x1A88($s0)
    ctx->pc = 0x2f0768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6792), GPR_U32(ctx, 0));
label_2f076c:
    // 0x2f076c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f076cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f0770:
    // 0x2f0770: 0xc0562c8  jal         func_158B20
label_2f0774:
    if (ctx->pc == 0x2F0774u) {
        ctx->pc = 0x2F0774u;
            // 0x2f0774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0778u;
        goto label_2f0778;
    }
    ctx->pc = 0x2F0770u;
    SET_GPR_U32(ctx, 31, 0x2F0778u);
    ctx->pc = 0x2F0774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0770u;
            // 0x2f0774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0778u; }
        if (ctx->pc != 0x2F0778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0778u; }
        if (ctx->pc != 0x2F0778u) { return; }
    }
    ctx->pc = 0x2F0778u;
label_2f0778:
    // 0x2f0778: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2f0778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f077c:
    // 0x2f077c: 0xc064218  jal         func_190860
label_2f0780:
    if (ctx->pc == 0x2F0780u) {
        ctx->pc = 0x2F0780u;
            // 0x2f0780: 0xae02014c  sw          $v0, 0x14C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
        ctx->pc = 0x2F0784u;
        goto label_2f0784;
    }
    ctx->pc = 0x2F077Cu;
    SET_GPR_U32(ctx, 31, 0x2F0784u);
    ctx->pc = 0x2F0780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F077Cu;
            // 0x2f0780: 0xae02014c  sw          $v0, 0x14C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0784u; }
        if (ctx->pc != 0x2F0784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0784u; }
        if (ctx->pc != 0x2F0784u) { return; }
    }
    ctx->pc = 0x2F0784u;
label_2f0784:
    // 0x2f0784: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f0784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0788:
    // 0x2f0788: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2f0788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2f078c:
    // 0x2f078c: 0xc063818  jal         func_18E060
label_2f0790:
    if (ctx->pc == 0x2F0790u) {
        ctx->pc = 0x2F0790u;
            // 0x2f0790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0794u;
        goto label_2f0794;
    }
    ctx->pc = 0x2F078Cu;
    SET_GPR_U32(ctx, 31, 0x2F0794u);
    ctx->pc = 0x2F0790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F078Cu;
            // 0x2f0790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0794u; }
        if (ctx->pc != 0x2F0794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0794u; }
        if (ctx->pc != 0x2F0794u) { return; }
    }
    ctx->pc = 0x2F0794u;
label_2f0794:
    // 0x2f0794: 0xc064220  jal         func_190880
label_2f0798:
    if (ctx->pc == 0x2F0798u) {
        ctx->pc = 0x2F079Cu;
        goto label_2f079c;
    }
    ctx->pc = 0x2F0794u;
    SET_GPR_U32(ctx, 31, 0x2F079Cu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F079Cu; }
        if (ctx->pc != 0x2F079Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F079Cu; }
        if (ctx->pc != 0x2F079Cu) { return; }
    }
    ctx->pc = 0x2F079Cu;
label_2f079c:
    // 0x2f079c: 0x8e450668  lw          $a1, 0x668($s2)
    ctx->pc = 0x2f079cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1640)));
label_2f07a0:
    // 0x2f07a0: 0x8e46066c  lw          $a2, 0x66C($s2)
    ctx->pc = 0x2f07a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1644)));
label_2f07a4:
    // 0x2f07a4: 0xc0bda04  jal         func_2F6810
label_2f07a8:
    if (ctx->pc == 0x2F07A8u) {
        ctx->pc = 0x2F07A8u;
            // 0x2f07a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F07ACu;
        goto label_2f07ac;
    }
    ctx->pc = 0x2F07A4u;
    SET_GPR_U32(ctx, 31, 0x2F07ACu);
    ctx->pc = 0x2F07A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F07A4u;
            // 0x2f07a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6810u;
    if (runtime->hasFunction(0x2F6810u)) {
        auto targetFn = runtime->lookupFunction(0x2F6810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F07ACu; }
        if (ctx->pc != 0x2F07ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__9CSaveDataFii_0x2f6810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F07ACu; }
        if (ctx->pc != 0x2F07ACu) { return; }
    }
    ctx->pc = 0x2F07ACu;
label_2f07ac:
    // 0x2f07ac: 0x100000cb  b           . + 4 + (0xCB << 2)
label_2f07b0:
    if (ctx->pc == 0x2F07B0u) {
        ctx->pc = 0x2F07B0u;
            // 0x2f07b0: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2F07B4u;
        goto label_2f07b4;
    }
    ctx->pc = 0x2F07ACu;
    {
        const bool branch_taken_0x2f07ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F07B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F07ACu;
            // 0x2f07b0: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f07ac) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F07B4u;
label_2f07b4:
    // 0x2f07b4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2f07b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f07b8:
    // 0x2f07b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f07b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f07bc:
    // 0x2f07bc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f07bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f07c0:
    // 0x2f07c0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2f07c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f07c4:
    // 0x2f07c4: 0x28410015  slti        $at, $v0, 0x15
    ctx->pc = 0x2f07c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
label_2f07c8:
    // 0x2f07c8: 0x142000c4  bnez        $at, . + 4 + (0xC4 << 2)
label_2f07cc:
    if (ctx->pc == 0x2F07CCu) {
        ctx->pc = 0x2F07D0u;
        goto label_2f07d0;
    }
    ctx->pc = 0x2F07C8u;
    {
        const bool branch_taken_0x2f07c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f07c8) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F07D0u;
label_2f07d0:
    // 0x2f07d0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2f07d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2f07d4:
    // 0x2f07d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f07d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f07d8:
    // 0x2f07d8: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_2f07dc:
    if (ctx->pc == 0x2F07DCu) {
        ctx->pc = 0x2F07DCu;
            // 0x2f07dc: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x2F07E0u;
        goto label_2f07e0;
    }
    ctx->pc = 0x2F07D8u;
    {
        const bool branch_taken_0x2f07d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F07DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F07D8u;
            // 0x2f07dc: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f07d8) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F07E0u;
label_2f07e0:
    // 0x2f07e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f07e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f07e4:
    // 0x2f07e4: 0xc0bb538  jal         func_2ED4E0
label_2f07e8:
    if (ctx->pc == 0x2F07E8u) {
        ctx->pc = 0x2F07E8u;
            // 0x2f07e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F07ECu;
        goto label_2f07ec;
    }
    ctx->pc = 0x2F07E4u;
    SET_GPR_U32(ctx, 31, 0x2F07ECu);
    ctx->pc = 0x2F07E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F07E4u;
            // 0x2f07e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F07ECu; }
        if (ctx->pc != 0x2F07ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F07ECu; }
        if (ctx->pc != 0x2F07ECu) { return; }
    }
    ctx->pc = 0x2F07ECu;
label_2f07ec:
    // 0x2f07ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f07f0:
    if (ctx->pc == 0x2F07F0u) {
        ctx->pc = 0x2F07F0u;
            // 0x2f07f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F07F4u;
        goto label_2f07f4;
    }
    ctx->pc = 0x2F07ECu;
    {
        const bool branch_taken_0x2f07ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F07F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F07ECu;
            // 0x2f07f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f07ec) {
            ctx->pc = 0x2F0804u;
            goto label_2f0804;
        }
    }
    ctx->pc = 0x2F07F4u;
label_2f07f4:
    // 0x2f07f4: 0xc0bb538  jal         func_2ED4E0
label_2f07f8:
    if (ctx->pc == 0x2F07F8u) {
        ctx->pc = 0x2F07F8u;
            // 0x2f07f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F07FCu;
        goto label_2f07fc;
    }
    ctx->pc = 0x2F07F4u;
    SET_GPR_U32(ctx, 31, 0x2F07FCu);
    ctx->pc = 0x2F07F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F07F4u;
            // 0x2f07f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F07FCu; }
        if (ctx->pc != 0x2F07FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F07FCu; }
        if (ctx->pc != 0x2F07FCu) { return; }
    }
    ctx->pc = 0x2F07FCu;
label_2f07fc:
    // 0x2f07fc: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
label_2f0800:
    if (ctx->pc == 0x2F0800u) {
        ctx->pc = 0x2F0804u;
        goto label_2f0804;
    }
    ctx->pc = 0x2F07FCu;
    {
        const bool branch_taken_0x2f07fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f07fc) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0804u;
label_2f0804:
    // 0x2f0804: 0x8e021ae4  lw          $v0, 0x1AE4($s0)
    ctx->pc = 0x2f0804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6884)));
label_2f0808:
    // 0x2f0808: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2f080c:
    if (ctx->pc == 0x2F080Cu) {
        ctx->pc = 0x2F080Cu;
            // 0x2f080c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2F0810u;
        goto label_2f0810;
    }
    ctx->pc = 0x2F0808u;
    {
        const bool branch_taken_0x2f0808 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F080Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0808u;
            // 0x2f080c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0808) {
            ctx->pc = 0x2F0814u;
            goto label_2f0814;
        }
    }
    ctx->pc = 0x2F0810u;
label_2f0810:
    // 0x2f0810: 0xae001b00  sw          $zero, 0x1B00($s0)
    ctx->pc = 0x2f0810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6912), GPR_U32(ctx, 0));
label_2f0814:
    // 0x2f0814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0818:
    // 0x2f0818: 0xc0547dc  jal         func_151F70
label_2f081c:
    if (ctx->pc == 0x2F081Cu) {
        ctx->pc = 0x2F081Cu;
            // 0x2f081c: 0xae021ae4  sw          $v0, 0x1AE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6884), GPR_U32(ctx, 2));
        ctx->pc = 0x2F0820u;
        goto label_2f0820;
    }
    ctx->pc = 0x2F0818u;
    SET_GPR_U32(ctx, 31, 0x2F0820u);
    ctx->pc = 0x2F081Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0818u;
            // 0x2f081c: 0xae021ae4  sw          $v0, 0x1AE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0820u; }
        if (ctx->pc != 0x2F0820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0820u; }
        if (ctx->pc != 0x2F0820u) { return; }
    }
    ctx->pc = 0x2F0820u;
label_2f0820:
    // 0x2f0820: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x2f0820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
label_2f0824:
    // 0x2f0824: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f0824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f0828:
    // 0x2f0828: 0xae0217e4  sw          $v0, 0x17E4($s0)
    ctx->pc = 0x2f0828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 2));
label_2f082c:
    // 0x2f082c: 0xae0017e8  sw          $zero, 0x17E8($s0)
    ctx->pc = 0x2f082cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6120), GPR_U32(ctx, 0));
label_2f0830:
    // 0x2f0830: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x2f0830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
label_2f0834:
    // 0x2f0834: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x2f0834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
label_2f0838:
    // 0x2f0838: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x2f0838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
label_2f083c:
    // 0x2f083c: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x2f083cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
label_2f0840:
    // 0x2f0840: 0xc064218  jal         func_190860
label_2f0844:
    if (ctx->pc == 0x2F0844u) {
        ctx->pc = 0x2F0844u;
            // 0x2f0844: 0xae00014c  sw          $zero, 0x14C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
        ctx->pc = 0x2F0848u;
        goto label_2f0848;
    }
    ctx->pc = 0x2F0840u;
    SET_GPR_U32(ctx, 31, 0x2F0848u);
    ctx->pc = 0x2F0844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0840u;
            // 0x2f0844: 0xae00014c  sw          $zero, 0x14C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0848u; }
        if (ctx->pc != 0x2F0848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0848u; }
        if (ctx->pc != 0x2F0848u) { return; }
    }
    ctx->pc = 0x2F0848u;
label_2f0848:
    // 0x2f0848: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f0848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f084c:
    // 0x2f084c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2f084cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2f0850:
    // 0x2f0850: 0xc063818  jal         func_18E060
label_2f0854:
    if (ctx->pc == 0x2F0854u) {
        ctx->pc = 0x2F0854u;
            // 0x2f0854: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0858u;
        goto label_2f0858;
    }
    ctx->pc = 0x2F0850u;
    SET_GPR_U32(ctx, 31, 0x2F0858u);
    ctx->pc = 0x2F0854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0850u;
            // 0x2f0854: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0858u; }
        if (ctx->pc != 0x2F0858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0858u; }
        if (ctx->pc != 0x2F0858u) { return; }
    }
    ctx->pc = 0x2F0858u;
label_2f0858:
    // 0x2f0858: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2f0858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2f085c:
    // 0x2f085c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f0860:
    // 0x2f0860: 0x1000009e  b           . + 4 + (0x9E << 2)
label_2f0864:
    if (ctx->pc == 0x2F0864u) {
        ctx->pc = 0x2F0864u;
            // 0x2f0864: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x2F0868u;
        goto label_2f0868;
    }
    ctx->pc = 0x2F0860u;
    {
        const bool branch_taken_0x2f0860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0860u;
            // 0x2f0864: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0860) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0868u;
label_2f0868:
    // 0x2f0868: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x2f0868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2f086c:
    // 0x2f086c: 0x8e8500d4  lw          $a1, 0xD4($s4)
    ctx->pc = 0x2f086cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_2f0870:
    // 0x2f0870: 0xc05819c  jal         func_160670
label_2f0874:
    if (ctx->pc == 0x2F0874u) {
        ctx->pc = 0x2F0874u;
            // 0x2f0874: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0878u;
        goto label_2f0878;
    }
    ctx->pc = 0x2F0870u;
    SET_GPR_U32(ctx, 31, 0x2F0878u);
    ctx->pc = 0x2F0874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0870u;
            // 0x2f0874: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160670u;
    if (runtime->hasFunction(0x160670u)) {
        auto targetFn = runtime->lookupFunction(0x160670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0878u; }
        if (ctx->pc != 0x2F0878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTrBox__4CMapFiP12CMapFlagData_0x160670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0878u; }
        if (ctx->pc != 0x2F0878u) { return; }
    }
    ctx->pc = 0x2F0878u;
label_2f0878:
    // 0x2f0878: 0x10000098  b           . + 4 + (0x98 << 2)
label_2f087c:
    if (ctx->pc == 0x2F087Cu) {
        ctx->pc = 0x2F087Cu;
            // 0x2f087c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F0880u;
        goto label_2f0880;
    }
    ctx->pc = 0x2F0878u;
    {
        const bool branch_taken_0x2f0878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F087Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0878u;
            // 0x2f087c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0878) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0880u;
label_2f0880:
    // 0x2f0880: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f0880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f0884:
    // 0x2f0884: 0xc0bb538  jal         func_2ED4E0
label_2f0888:
    if (ctx->pc == 0x2F0888u) {
        ctx->pc = 0x2F0888u;
            // 0x2f0888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F088Cu;
        goto label_2f088c;
    }
    ctx->pc = 0x2F0884u;
    SET_GPR_U32(ctx, 31, 0x2F088Cu);
    ctx->pc = 0x2F0888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0884u;
            // 0x2f0888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F088Cu; }
        if (ctx->pc != 0x2F088Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F088Cu; }
        if (ctx->pc != 0x2F088Cu) { return; }
    }
    ctx->pc = 0x2F088Cu;
label_2f088c:
    // 0x2f088c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f0890:
    if (ctx->pc == 0x2F0890u) {
        ctx->pc = 0x2F0890u;
            // 0x2f0890: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0894u;
        goto label_2f0894;
    }
    ctx->pc = 0x2F088Cu;
    {
        const bool branch_taken_0x2f088c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F088Cu;
            // 0x2f0890: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f088c) {
            ctx->pc = 0x2F08A4u;
            goto label_2f08a4;
        }
    }
    ctx->pc = 0x2F0894u;
label_2f0894:
    // 0x2f0894: 0xc0bb538  jal         func_2ED4E0
label_2f0898:
    if (ctx->pc == 0x2F0898u) {
        ctx->pc = 0x2F0898u;
            // 0x2f0898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F089Cu;
        goto label_2f089c;
    }
    ctx->pc = 0x2F0894u;
    SET_GPR_U32(ctx, 31, 0x2F089Cu);
    ctx->pc = 0x2F0898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0894u;
            // 0x2f0898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F089Cu; }
        if (ctx->pc != 0x2F089Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F089Cu; }
        if (ctx->pc != 0x2F089Cu) { return; }
    }
    ctx->pc = 0x2F089Cu;
label_2f089c:
    // 0x2f089c: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
label_2f08a0:
    if (ctx->pc == 0x2F08A0u) {
        ctx->pc = 0x2F08A4u;
        goto label_2f08a4;
    }
    ctx->pc = 0x2F089Cu;
    {
        const bool branch_taken_0x2f089c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f089c) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F08A4u;
label_2f08a4:
    // 0x2f08a4: 0x8e021ae4  lw          $v0, 0x1AE4($s0)
    ctx->pc = 0x2f08a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6884)));
label_2f08a8:
    // 0x2f08a8: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2f08ac:
    if (ctx->pc == 0x2F08ACu) {
        ctx->pc = 0x2F08ACu;
            // 0x2f08ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2F08B0u;
        goto label_2f08b0;
    }
    ctx->pc = 0x2F08A8u;
    {
        const bool branch_taken_0x2f08a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F08ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F08A8u;
            // 0x2f08ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f08a8) {
            ctx->pc = 0x2F08B4u;
            goto label_2f08b4;
        }
    }
    ctx->pc = 0x2F08B0u;
label_2f08b0:
    // 0x2f08b0: 0xae001b00  sw          $zero, 0x1B00($s0)
    ctx->pc = 0x2f08b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6912), GPR_U32(ctx, 0));
label_2f08b4:
    // 0x2f08b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f08b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f08b8:
    // 0x2f08b8: 0xc0547dc  jal         func_151F70
label_2f08bc:
    if (ctx->pc == 0x2F08BCu) {
        ctx->pc = 0x2F08BCu;
            // 0x2f08bc: 0xae021ae4  sw          $v0, 0x1AE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6884), GPR_U32(ctx, 2));
        ctx->pc = 0x2F08C0u;
        goto label_2f08c0;
    }
    ctx->pc = 0x2F08B8u;
    SET_GPR_U32(ctx, 31, 0x2F08C0u);
    ctx->pc = 0x2F08BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F08B8u;
            // 0x2f08bc: 0xae021ae4  sw          $v0, 0x1AE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F08C0u; }
        if (ctx->pc != 0x2F08C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F08C0u; }
        if (ctx->pc != 0x2F08C0u) { return; }
    }
    ctx->pc = 0x2F08C0u;
label_2f08c0:
    // 0x2f08c0: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x2f08c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
label_2f08c4:
    // 0x2f08c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f08c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f08c8:
    // 0x2f08c8: 0xae0217e4  sw          $v0, 0x17E4($s0)
    ctx->pc = 0x2f08c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 2));
label_2f08cc:
    // 0x2f08cc: 0xae0017e8  sw          $zero, 0x17E8($s0)
    ctx->pc = 0x2f08ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6120), GPR_U32(ctx, 0));
label_2f08d0:
    // 0x2f08d0: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x2f08d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
label_2f08d4:
    // 0x2f08d4: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x2f08d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
label_2f08d8:
    // 0x2f08d8: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x2f08d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
label_2f08dc:
    // 0x2f08dc: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x2f08dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
label_2f08e0:
    // 0x2f08e0: 0xc064218  jal         func_190860
label_2f08e4:
    if (ctx->pc == 0x2F08E4u) {
        ctx->pc = 0x2F08E4u;
            // 0x2f08e4: 0xae00014c  sw          $zero, 0x14C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
        ctx->pc = 0x2F08E8u;
        goto label_2f08e8;
    }
    ctx->pc = 0x2F08E0u;
    SET_GPR_U32(ctx, 31, 0x2F08E8u);
    ctx->pc = 0x2F08E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F08E0u;
            // 0x2f08e4: 0xae00014c  sw          $zero, 0x14C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F08E8u; }
        if (ctx->pc != 0x2F08E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F08E8u; }
        if (ctx->pc != 0x2F08E8u) { return; }
    }
    ctx->pc = 0x2F08E8u;
label_2f08e8:
    // 0x2f08e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f08e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f08ec:
    // 0x2f08ec: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2f08ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2f08f0:
    // 0x2f08f0: 0xc063818  jal         func_18E060
label_2f08f4:
    if (ctx->pc == 0x2F08F4u) {
        ctx->pc = 0x2F08F4u;
            // 0x2f08f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F08F8u;
        goto label_2f08f8;
    }
    ctx->pc = 0x2F08F0u;
    SET_GPR_U32(ctx, 31, 0x2F08F8u);
    ctx->pc = 0x2F08F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F08F0u;
            // 0x2f08f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F08F8u; }
        if (ctx->pc != 0x2F08F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F08F8u; }
        if (ctx->pc != 0x2F08F8u) { return; }
    }
    ctx->pc = 0x2F08F8u;
label_2f08f8:
    // 0x2f08f8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2f08f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2f08fc:
    // 0x2f08fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f08fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f0900:
    // 0x2f0900: 0x10000076  b           . + 4 + (0x76 << 2)
label_2f0904:
    if (ctx->pc == 0x2F0904u) {
        ctx->pc = 0x2F0904u;
            // 0x2f0904: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x2F0908u;
        goto label_2f0908;
    }
    ctx->pc = 0x2F0900u;
    {
        const bool branch_taken_0x2f0900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0900u;
            // 0x2f0904: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0900) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0908u;
label_2f0908:
    // 0x2f0908: 0x10000074  b           . + 4 + (0x74 << 2)
label_2f090c:
    if (ctx->pc == 0x2F090Cu) {
        ctx->pc = 0x2F090Cu;
            // 0x2f090c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F0910u;
        goto label_2f0910;
    }
    ctx->pc = 0x2F0908u;
    {
        const bool branch_taken_0x2f0908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F090Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0908u;
            // 0x2f090c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0908) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0910u;
label_2f0910:
    // 0x2f0910: 0x14430071  bne         $v0, $v1, . + 4 + (0x71 << 2)
label_2f0914:
    if (ctx->pc == 0x2F0914u) {
        ctx->pc = 0x2F0918u;
        goto label_2f0918;
    }
    ctx->pc = 0x2F0910u;
    {
        const bool branch_taken_0x2f0910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f0910) {
            ctx->pc = 0x2F0AD8u;
            goto label_2f0ad8;
        }
    }
    ctx->pc = 0x2F0918u;
label_2f0918:
    // 0x2f0918: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2f0918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2f091c:
    // 0x2f091c: 0x1043005c  beq         $v0, $v1, . + 4 + (0x5C << 2)
label_2f0920:
    if (ctx->pc == 0x2F0920u) {
        ctx->pc = 0x2F0924u;
        goto label_2f0924;
    }
    ctx->pc = 0x2F091Cu;
    {
        const bool branch_taken_0x2f091c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f091c) {
            ctx->pc = 0x2F0A90u;
            goto label_2f0a90;
        }
    }
    ctx->pc = 0x2F0924u;
label_2f0924:
    // 0x2f0924: 0x10440058  beq         $v0, $a0, . + 4 + (0x58 << 2)
label_2f0928:
    if (ctx->pc == 0x2F0928u) {
        ctx->pc = 0x2F092Cu;
        goto label_2f092c;
    }
    ctx->pc = 0x2F0924u;
    {
        const bool branch_taken_0x2f0924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f0924) {
            ctx->pc = 0x2F0A88u;
            goto label_2f0a88;
        }
    }
    ctx->pc = 0x2F092Cu;
label_2f092c:
    // 0x2f092c: 0x1045001e  beq         $v0, $a1, . + 4 + (0x1E << 2)
label_2f0930:
    if (ctx->pc == 0x2F0930u) {
        ctx->pc = 0x2F0930u;
            // 0x2f0930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0934u;
        goto label_2f0934;
    }
    ctx->pc = 0x2F092Cu;
    {
        const bool branch_taken_0x2f092c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2F0930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F092Cu;
            // 0x2f0930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f092c) {
            ctx->pc = 0x2F09A8u;
            goto label_2f09a8;
        }
    }
    ctx->pc = 0x2F0934u;
label_2f0934:
    // 0x2f0934: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2f0938:
    if (ctx->pc == 0x2F0938u) {
        ctx->pc = 0x2F093Cu;
        goto label_2f093c;
    }
    ctx->pc = 0x2F0934u;
    {
        const bool branch_taken_0x2f0934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0934) {
            ctx->pc = 0x2F0944u;
            goto label_2f0944;
        }
    }
    ctx->pc = 0x2F093Cu;
label_2f093c:
    // 0x2f093c: 0x10000067  b           . + 4 + (0x67 << 2)
label_2f0940:
    if (ctx->pc == 0x2F0940u) {
        ctx->pc = 0x2F0944u;
        goto label_2f0944;
    }
    ctx->pc = 0x2F093Cu;
    {
        const bool branch_taken_0x2f093c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f093c) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0944u;
label_2f0944:
    // 0x2f0944: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2f0944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f0948:
    // 0x2f0948: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f0948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2f094c:
    // 0x2f094c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f094cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f0950:
    // 0x2f0950: 0x24a515d0  addiu       $a1, $a1, 0x15D0
    ctx->pc = 0x2f0950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5584));
label_2f0954:
    // 0x2f0954: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2f0954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2f0958:
    // 0x2f0958: 0x320f809  jalr        $t9
label_2f095c:
    if (ctx->pc == 0x2F095Cu) {
        ctx->pc = 0x2F095Cu;
            // 0x2f095c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0960u;
        goto label_2f0960;
    }
    ctx->pc = 0x2F0958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F0960u);
        ctx->pc = 0x2F095Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0958u;
            // 0x2f095c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F0960u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F0960u; }
            if (ctx->pc != 0x2F0960u) { return; }
        }
        }
    }
    ctx->pc = 0x2F0960u;
label_2f0960:
    // 0x2f0960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0964:
    // 0x2f0964: 0xc054bb4  jal         func_152ED0
label_2f0968:
    if (ctx->pc == 0x2F0968u) {
        ctx->pc = 0x2F0968u;
            // 0x2f0968: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F096Cu;
        goto label_2f096c;
    }
    ctx->pc = 0x2F0964u;
    SET_GPR_U32(ctx, 31, 0x2F096Cu);
    ctx->pc = 0x2F0968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0964u;
            // 0x2f0968: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F096Cu; }
        if (ctx->pc != 0x2F096Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F096Cu; }
        if (ctx->pc != 0x2F096Cu) { return; }
    }
    ctx->pc = 0x2F096Cu;
label_2f096c:
    // 0x2f096c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f096cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0970:
    // 0x2f0970: 0xc054cdc  jal         func_153370
label_2f0974:
    if (ctx->pc == 0x2F0974u) {
        ctx->pc = 0x2F0974u;
            // 0x2f0974: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F0978u;
        goto label_2f0978;
    }
    ctx->pc = 0x2F0970u;
    SET_GPR_U32(ctx, 31, 0x2F0978u);
    ctx->pc = 0x2F0974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0970u;
            // 0x2f0974: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0978u; }
        if (ctx->pc != 0x2F0978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0978u; }
        if (ctx->pc != 0x2F0978u) { return; }
    }
    ctx->pc = 0x2F0978u;
label_2f0978:
    // 0x2f0978: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2f0978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2f097c:
    // 0x2f097c: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x2f097cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2f0980:
    // 0x2f0980: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x2f0980u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2f0984:
    // 0x2f0984: 0xc08dba8  jal         func_236EA0
label_2f0988:
    if (ctx->pc == 0x2F0988u) {
        ctx->pc = 0x2F0988u;
            // 0x2f0988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F098Cu;
        goto label_2f098c;
    }
    ctx->pc = 0x2F0984u;
    SET_GPR_U32(ctx, 31, 0x2F098Cu);
    ctx->pc = 0x2F0988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0984u;
            // 0x2f0988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236EA0u;
    if (runtime->hasFunction(0x236EA0u)) {
        auto targetFn = runtime->lookupFunction(0x236EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F098Cu; }
        if (ctx->pc != 0x2F098Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BookshelfMessageMake__FP6ClsMesiii_0x236ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F098Cu; }
        if (ctx->pc != 0x2F098Cu) { return; }
    }
    ctx->pc = 0x2F098Cu;
label_2f098c:
    // 0x2f098c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2f098cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f0990:
    // 0x2f0990: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f0990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0994:
    // 0x2f0994: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x2f0994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
label_2f0998:
    // 0x2f0998: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2f0998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2f099c:
    // 0x2f099c: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x2f099cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_2f09a0:
    // 0x2f09a0: 0x1000004e  b           . + 4 + (0x4E << 2)
label_2f09a4:
    if (ctx->pc == 0x2F09A4u) {
        ctx->pc = 0x2F09A4u;
            // 0x2f09a4: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2F09A8u;
        goto label_2f09a8;
    }
    ctx->pc = 0x2F09A0u;
    {
        const bool branch_taken_0x2f09a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F09A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F09A0u;
            // 0x2f09a4: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f09a0) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F09A8u;
label_2f09a8:
    // 0x2f09a8: 0xc054f84  jal         func_153E10
label_2f09ac:
    if (ctx->pc == 0x2F09ACu) {
        ctx->pc = 0x2F09B0u;
        goto label_2f09b0;
    }
    ctx->pc = 0x2F09A8u;
    SET_GPR_U32(ctx, 31, 0x2F09B0u);
    ctx->pc = 0x153E10u;
    if (runtime->hasFunction(0x153E10u)) {
        auto targetFn = runtime->lookupFunction(0x153E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F09B0u; }
        if (ctx->pc != 0x2F09B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        State__6ClsMesFv_0x153e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F09B0u; }
        if (ctx->pc != 0x2F09B0u) { return; }
    }
    ctx->pc = 0x2F09B0u;
label_2f09b0:
    // 0x2f09b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f09b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f09b4:
    // 0x2f09b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f09b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f09b8:
    // 0x2f09b8: 0xc0bb538  jal         func_2ED4E0
label_2f09bc:
    if (ctx->pc == 0x2F09BCu) {
        ctx->pc = 0x2F09BCu;
            // 0x2f09bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F09C0u;
        goto label_2f09c0;
    }
    ctx->pc = 0x2F09B8u;
    SET_GPR_U32(ctx, 31, 0x2F09C0u);
    ctx->pc = 0x2F09BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F09B8u;
            // 0x2f09bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F09C0u; }
        if (ctx->pc != 0x2F09C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F09C0u; }
        if (ctx->pc != 0x2F09C0u) { return; }
    }
    ctx->pc = 0x2F09C0u;
label_2f09c0:
    // 0x2f09c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f09c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f09c4:
    // 0x2f09c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2f09c8:
    if (ctx->pc == 0x2F09C8u) {
        ctx->pc = 0x2F09C8u;
            // 0x2f09c8: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2F09CCu;
        goto label_2f09cc;
    }
    ctx->pc = 0x2F09C4u;
    {
        const bool branch_taken_0x2f09c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F09C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F09C4u;
            // 0x2f09c8: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f09c4) {
            ctx->pc = 0x2F09E0u;
            goto label_2f09e0;
        }
    }
    ctx->pc = 0x2F09CCu;
label_2f09cc:
    // 0x2f09cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f09ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f09d0:
    // 0x2f09d0: 0xc0bb538  jal         func_2ED4E0
label_2f09d4:
    if (ctx->pc == 0x2F09D4u) {
        ctx->pc = 0x2F09D4u;
            // 0x2f09d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F09D8u;
        goto label_2f09d8;
    }
    ctx->pc = 0x2F09D0u;
    SET_GPR_U32(ctx, 31, 0x2F09D8u);
    ctx->pc = 0x2F09D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F09D0u;
            // 0x2f09d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F09D8u; }
        if (ctx->pc != 0x2F09D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F09D8u; }
        if (ctx->pc != 0x2F09D8u) { return; }
    }
    ctx->pc = 0x2F09D8u;
label_2f09d8:
    // 0x2f09d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f09d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f09dc:
    // 0x2f09dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f09dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f09e0:
    // 0x2f09e0: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
label_2f09e4:
    if (ctx->pc == 0x2F09E4u) {
        ctx->pc = 0x2F09E4u;
            // 0x2f09e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2F09E8u;
        goto label_2f09e8;
    }
    ctx->pc = 0x2F09E0u;
    {
        const bool branch_taken_0x2f09e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F09E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F09E0u;
            // 0x2f09e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f09e0) {
            ctx->pc = 0x2F0A64u;
            goto label_2f0a64;
        }
    }
    ctx->pc = 0x2F09E8u;
label_2f09e8:
    // 0x2f09e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f09e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f09ec:
    // 0x2f09ec: 0x12420011  beq         $s2, $v0, . + 4 + (0x11 << 2)
label_2f09f0:
    if (ctx->pc == 0x2F09F0u) {
        ctx->pc = 0x2F09F0u;
            // 0x2f09f0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2F09F4u;
        goto label_2f09f4;
    }
    ctx->pc = 0x2F09ECu;
    {
        const bool branch_taken_0x2f09ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F09F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F09ECu;
            // 0x2f09f0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f09ec) {
            ctx->pc = 0x2F0A34u;
            goto label_2f0a34;
        }
    }
    ctx->pc = 0x2F09F4u;
label_2f09f4:
    // 0x2f09f4: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
label_2f09f8:
    if (ctx->pc == 0x2F09F8u) {
        ctx->pc = 0x2F09FCu;
        goto label_2f09fc;
    }
    ctx->pc = 0x2F09F4u;
    {
        const bool branch_taken_0x2f09f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f09f4) {
            ctx->pc = 0x2F0A04u;
            goto label_2f0a04;
        }
    }
    ctx->pc = 0x2F09FCu;
label_2f09fc:
    // 0x2f09fc: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2f0a00:
    if (ctx->pc == 0x2F0A00u) {
        ctx->pc = 0x2F0A00u;
            // 0x2f0a00: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x2F0A04u;
        goto label_2f0a04;
    }
    ctx->pc = 0x2F09FCu;
    {
        const bool branch_taken_0x2f09fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F09FCu;
            // 0x2f0a00: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f09fc) {
            ctx->pc = 0x2F0A6Cu;
            goto label_2f0a6c;
        }
    }
    ctx->pc = 0x2F0A04u;
label_2f0a04:
    // 0x2f0a04: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_2f0a08:
    if (ctx->pc == 0x2F0A08u) {
        ctx->pc = 0x2F0A08u;
            // 0x2f0a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A0Cu;
        goto label_2f0a0c;
    }
    ctx->pc = 0x2F0A04u;
    {
        const bool branch_taken_0x2f0a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0A04u;
            // 0x2f0a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a04) {
            ctx->pc = 0x2F0A68u;
            goto label_2f0a68;
        }
    }
    ctx->pc = 0x2F0A0Cu;
label_2f0a0c:
    // 0x2f0a0c: 0xc054fb0  jal         func_153EC0
label_2f0a10:
    if (ctx->pc == 0x2F0A10u) {
        ctx->pc = 0x2F0A14u;
        goto label_2f0a14;
    }
    ctx->pc = 0x2F0A0Cu;
    SET_GPR_U32(ctx, 31, 0x2F0A14u);
    ctx->pc = 0x153EC0u;
    if (runtime->hasFunction(0x153EC0u)) {
        auto targetFn = runtime->lookupFunction(0x153EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0A14u; }
        if (ctx->pc != 0x2F0A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GoNextPage__6ClsMesFv_0x153ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0A14u; }
        if (ctx->pc != 0x2F0A14u) { return; }
    }
    ctx->pc = 0x2F0A14u;
label_2f0a14:
    // 0x2f0a14: 0xc064218  jal         func_190860
label_2f0a18:
    if (ctx->pc == 0x2F0A18u) {
        ctx->pc = 0x2F0A1Cu;
        goto label_2f0a1c;
    }
    ctx->pc = 0x2F0A14u;
    SET_GPR_U32(ctx, 31, 0x2F0A1Cu);
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0A1Cu; }
        if (ctx->pc != 0x2F0A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0A1Cu; }
        if (ctx->pc != 0x2F0A1Cu) { return; }
    }
    ctx->pc = 0x2F0A1Cu;
label_2f0a1c:
    // 0x2f0a1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f0a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0a20:
    // 0x2f0a20: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2f0a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2f0a24:
    // 0x2f0a24: 0xc063818  jal         func_18E060
label_2f0a28:
    if (ctx->pc == 0x2F0A28u) {
        ctx->pc = 0x2F0A28u;
            // 0x2f0a28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A2Cu;
        goto label_2f0a2c;
    }
    ctx->pc = 0x2F0A24u;
    SET_GPR_U32(ctx, 31, 0x2F0A2Cu);
    ctx->pc = 0x2F0A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0A24u;
            // 0x2f0a28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0A2Cu; }
        if (ctx->pc != 0x2F0A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0A2Cu; }
        if (ctx->pc != 0x2F0A2Cu) { return; }
    }
    ctx->pc = 0x2F0A2Cu;
label_2f0a2c:
    // 0x2f0a2c: 0x1000000e  b           . + 4 + (0xE << 2)
label_2f0a30:
    if (ctx->pc == 0x2F0A30u) {
        ctx->pc = 0x2F0A34u;
        goto label_2f0a34;
    }
    ctx->pc = 0x2F0A2Cu;
    {
        const bool branch_taken_0x2f0a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0a2c) {
            ctx->pc = 0x2F0A68u;
            goto label_2f0a68;
        }
    }
    ctx->pc = 0x2F0A34u;
label_2f0a34:
    // 0x2f0a34: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_2f0a38:
    if (ctx->pc == 0x2F0A38u) {
        ctx->pc = 0x2F0A38u;
            // 0x2f0a38: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2F0A3Cu;
        goto label_2f0a3c;
    }
    ctx->pc = 0x2F0A34u;
    {
        const bool branch_taken_0x2f0a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0A34u;
            // 0x2f0a38: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a34) {
            ctx->pc = 0x2F0A68u;
            goto label_2f0a68;
        }
    }
    ctx->pc = 0x2F0A3Cu;
label_2f0a3c:
    // 0x2f0a3c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f0a40:
    // 0x2f0a40: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x2f0a40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_2f0a44:
    // 0x2f0a44: 0xc064218  jal         func_190860
label_2f0a48:
    if (ctx->pc == 0x2F0A48u) {
        ctx->pc = 0x2F0A48u;
            // 0x2f0a48: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2F0A4Cu;
        goto label_2f0a4c;
    }
    ctx->pc = 0x2F0A44u;
    SET_GPR_U32(ctx, 31, 0x2F0A4Cu);
    ctx->pc = 0x2F0A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0A44u;
            // 0x2f0a48: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0A4Cu; }
        if (ctx->pc != 0x2F0A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0A4Cu; }
        if (ctx->pc != 0x2F0A4Cu) { return; }
    }
    ctx->pc = 0x2F0A4Cu;
label_2f0a4c:
    // 0x2f0a4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f0a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0a50:
    // 0x2f0a50: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2f0a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2f0a54:
    // 0x2f0a54: 0xc063818  jal         func_18E060
label_2f0a58:
    if (ctx->pc == 0x2F0A58u) {
        ctx->pc = 0x2F0A58u;
            // 0x2f0a58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A5Cu;
        goto label_2f0a5c;
    }
    ctx->pc = 0x2F0A54u;
    SET_GPR_U32(ctx, 31, 0x2F0A5Cu);
    ctx->pc = 0x2F0A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0A54u;
            // 0x2f0a58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0A5Cu; }
        if (ctx->pc != 0x2F0A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0A5Cu; }
        if (ctx->pc != 0x2F0A5Cu) { return; }
    }
    ctx->pc = 0x2F0A5Cu;
label_2f0a5c:
    // 0x2f0a5c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f0a60:
    if (ctx->pc == 0x2F0A60u) {
        ctx->pc = 0x2F0A64u;
        goto label_2f0a64;
    }
    ctx->pc = 0x2F0A5Cu;
    {
        const bool branch_taken_0x2f0a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0a5c) {
            ctx->pc = 0x2F0A68u;
            goto label_2f0a68;
        }
    }
    ctx->pc = 0x2F0A64u;
label_2f0a64:
    // 0x2f0a64: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x2f0a64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_2f0a68:
    // 0x2f0a68: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2f0a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f0a6c:
    // 0x2f0a6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f0a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f0a70:
    // 0x2f0a70: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f0a70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f0a74:
    // 0x2f0a74: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2f0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f0a78:
    // 0x2f0a78: 0x4410018  bgez        $v0, . + 4 + (0x18 << 2)
label_2f0a7c:
    if (ctx->pc == 0x2F0A7Cu) {
        ctx->pc = 0x2F0A7Cu;
            // 0x2f0a7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2F0A80u;
        goto label_2f0a80;
    }
    ctx->pc = 0x2F0A78u;
    {
        const bool branch_taken_0x2f0a78 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F0A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0A78u;
            // 0x2f0a7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a78) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0A80u;
label_2f0a80:
    // 0x2f0a80: 0x10000016  b           . + 4 + (0x16 << 2)
label_2f0a84:
    if (ctx->pc == 0x2F0A84u) {
        ctx->pc = 0x2F0A84u;
            // 0x2f0a84: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x2F0A88u;
        goto label_2f0a88;
    }
    ctx->pc = 0x2F0A80u;
    {
        const bool branch_taken_0x2f0a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0A80u;
            // 0x2f0a84: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a80) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0A88u;
label_2f0a88:
    // 0x2f0a88: 0x10000014  b           . + 4 + (0x14 << 2)
label_2f0a8c:
    if (ctx->pc == 0x2F0A8Cu) {
        ctx->pc = 0x2F0A8Cu;
            // 0x2f0a8c: 0xae830008  sw          $v1, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x2F0A90u;
        goto label_2f0a90;
    }
    ctx->pc = 0x2F0A88u;
    {
        const bool branch_taken_0x2f0a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0A88u;
            // 0x2f0a8c: 0xae830008  sw          $v1, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a88) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0A90u;
label_2f0a90:
    // 0x2f0a90: 0x8e021ae4  lw          $v0, 0x1AE4($s0)
    ctx->pc = 0x2f0a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6884)));
label_2f0a94:
    // 0x2f0a94: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2f0a98:
    if (ctx->pc == 0x2F0A98u) {
        ctx->pc = 0x2F0A98u;
            // 0x2f0a98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2F0A9Cu;
        goto label_2f0a9c;
    }
    ctx->pc = 0x2F0A94u;
    {
        const bool branch_taken_0x2f0a94 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F0A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0A94u;
            // 0x2f0a98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a94) {
            ctx->pc = 0x2F0AA0u;
            goto label_2f0aa0;
        }
    }
    ctx->pc = 0x2F0A9Cu;
label_2f0a9c:
    // 0x2f0a9c: 0xae001b00  sw          $zero, 0x1B00($s0)
    ctx->pc = 0x2f0a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6912), GPR_U32(ctx, 0));
label_2f0aa0:
    // 0x2f0aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0aa4:
    // 0x2f0aa4: 0xc0547dc  jal         func_151F70
label_2f0aa8:
    if (ctx->pc == 0x2F0AA8u) {
        ctx->pc = 0x2F0AA8u;
            // 0x2f0aa8: 0xae021ae4  sw          $v0, 0x1AE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6884), GPR_U32(ctx, 2));
        ctx->pc = 0x2F0AACu;
        goto label_2f0aac;
    }
    ctx->pc = 0x2F0AA4u;
    SET_GPR_U32(ctx, 31, 0x2F0AACu);
    ctx->pc = 0x2F0AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0AA4u;
            // 0x2f0aa8: 0xae021ae4  sw          $v0, 0x1AE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0AACu; }
        if (ctx->pc != 0x2F0AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0AACu; }
        if (ctx->pc != 0x2F0AACu) { return; }
    }
    ctx->pc = 0x2F0AACu;
label_2f0aac:
    // 0x2f0aac: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x2f0aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
label_2f0ab0:
    // 0x2f0ab0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f0ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f0ab4:
    // 0x2f0ab4: 0xae0217e4  sw          $v0, 0x17E4($s0)
    ctx->pc = 0x2f0ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 2));
label_2f0ab8:
    // 0x2f0ab8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f0ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0abc:
    // 0x2f0abc: 0xae0017e8  sw          $zero, 0x17E8($s0)
    ctx->pc = 0x2f0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6120), GPR_U32(ctx, 0));
label_2f0ac0:
    // 0x2f0ac0: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x2f0ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
label_2f0ac4:
    // 0x2f0ac4: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x2f0ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
label_2f0ac8:
    // 0x2f0ac8: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x2f0ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
label_2f0acc:
    // 0x2f0acc: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x2f0accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
label_2f0ad0:
    // 0x2f0ad0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f0ad4:
    if (ctx->pc == 0x2F0AD4u) {
        ctx->pc = 0x2F0AD4u;
            // 0x2f0ad4: 0xae00014c  sw          $zero, 0x14C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
        ctx->pc = 0x2F0AD8u;
        goto label_2f0ad8;
    }
    ctx->pc = 0x2F0AD0u;
    {
        const bool branch_taken_0x2f0ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0AD0u;
            // 0x2f0ad4: 0xae00014c  sw          $zero, 0x14C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0ad0) {
            ctx->pc = 0x2F0ADCu;
            goto label_2f0adc;
        }
    }
    ctx->pc = 0x2F0AD8u;
label_2f0ad8:
    // 0x2f0ad8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f0ad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f0adc:
    // 0x2f0adc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2f0ae0:
    if (ctx->pc == 0x2F0AE0u) {
        ctx->pc = 0x2F0AE0u;
            // 0x2f0ae0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0AE4u;
        goto label_2f0ae4;
    }
    ctx->pc = 0x2F0ADCu;
    {
        const bool branch_taken_0x2f0adc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0ADCu;
            // 0x2f0ae0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0adc) {
            ctx->pc = 0x2F0B00u;
            goto label_2f0b00;
        }
    }
    ctx->pc = 0x2F0AE4u;
label_2f0ae4:
    // 0x2f0ae4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f0ae8:
    // 0x2f0ae8: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_2f0aec:
    if (ctx->pc == 0x2F0AECu) {
        ctx->pc = 0x2F0AECu;
            // 0x2f0aec: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2F0AF0u;
        goto label_2f0af0;
    }
    ctx->pc = 0x2F0AE8u;
    {
        const bool branch_taken_0x2f0ae8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F0AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0AE8u;
            // 0x2f0aec: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0ae8) {
            ctx->pc = 0x2F0AFCu;
            goto label_2f0afc;
        }
    }
    ctx->pc = 0x2F0AF0u;
label_2f0af0:
    // 0x2f0af0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f0af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f0af4:
    // 0x2f0af4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f0af8:
    if (ctx->pc == 0x2F0AF8u) {
        ctx->pc = 0x2F0AF8u;
            // 0x2f0af8: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x2F0AFCu;
        goto label_2f0afc;
    }
    ctx->pc = 0x2F0AF4u;
    {
        const bool branch_taken_0x2f0af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0AF4u;
            // 0x2f0af8: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0af4) {
            ctx->pc = 0x2F0B00u;
            goto label_2f0b00;
        }
    }
    ctx->pc = 0x2F0AFCu;
label_2f0afc:
    // 0x2f0afc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f0afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f0b00:
    // 0x2f0b00: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2f0b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2f0b04:
    // 0x2f0b04: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2f0b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2f0b08:
    // 0x2f0b08: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2f0b08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2f0b0c:
    // 0x2f0b0c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2f0b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f0b10:
    // 0x2f0b10: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2f0b10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f0b14:
    // 0x2f0b14: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f0b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f0b18:
    // 0x2f0b18: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2f0b18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2f0b1c:
    // 0x2f0b1c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2f0b1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f0b20:
    // 0x2f0b20: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f0b20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f0b24:
    // 0x2f0b24: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f0b24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f0b28:
    // 0x2f0b28: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f0b28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f0b2c:
    // 0x2f0b2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f0b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f0b30:
    // 0x2f0b30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f0b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f0b34:
    // 0x2f0b34: 0x3e00008  jr          $ra
label_2f0b38:
    if (ctx->pc == 0x2F0B38u) {
        ctx->pc = 0x2F0B38u;
            // 0x2f0b38: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x2F0B3Cu;
        goto label_fallthrough_0x2f0b34;
    }
    ctx->pc = 0x2F0B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0B34u;
            // 0x2f0b38: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f0b34:
    ctx->pc = 0x2F0B3Cu;
}
