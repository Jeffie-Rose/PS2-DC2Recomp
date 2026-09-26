#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoopDungeonMain__Fv
// Address: 0x1cea00 - 0x1cf084
void LoopDungeonMain__Fv_0x1cea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoopDungeonMain__Fv_0x1cea00");
#endif

    switch (ctx->pc) {
        case 0x1cea00u: goto label_1cea00;
        case 0x1cea04u: goto label_1cea04;
        case 0x1cea08u: goto label_1cea08;
        case 0x1cea0cu: goto label_1cea0c;
        case 0x1cea10u: goto label_1cea10;
        case 0x1cea14u: goto label_1cea14;
        case 0x1cea18u: goto label_1cea18;
        case 0x1cea1cu: goto label_1cea1c;
        case 0x1cea20u: goto label_1cea20;
        case 0x1cea24u: goto label_1cea24;
        case 0x1cea28u: goto label_1cea28;
        case 0x1cea2cu: goto label_1cea2c;
        case 0x1cea30u: goto label_1cea30;
        case 0x1cea34u: goto label_1cea34;
        case 0x1cea38u: goto label_1cea38;
        case 0x1cea3cu: goto label_1cea3c;
        case 0x1cea40u: goto label_1cea40;
        case 0x1cea44u: goto label_1cea44;
        case 0x1cea48u: goto label_1cea48;
        case 0x1cea4cu: goto label_1cea4c;
        case 0x1cea50u: goto label_1cea50;
        case 0x1cea54u: goto label_1cea54;
        case 0x1cea58u: goto label_1cea58;
        case 0x1cea5cu: goto label_1cea5c;
        case 0x1cea60u: goto label_1cea60;
        case 0x1cea64u: goto label_1cea64;
        case 0x1cea68u: goto label_1cea68;
        case 0x1cea6cu: goto label_1cea6c;
        case 0x1cea70u: goto label_1cea70;
        case 0x1cea74u: goto label_1cea74;
        case 0x1cea78u: goto label_1cea78;
        case 0x1cea7cu: goto label_1cea7c;
        case 0x1cea80u: goto label_1cea80;
        case 0x1cea84u: goto label_1cea84;
        case 0x1cea88u: goto label_1cea88;
        case 0x1cea8cu: goto label_1cea8c;
        case 0x1cea90u: goto label_1cea90;
        case 0x1cea94u: goto label_1cea94;
        case 0x1cea98u: goto label_1cea98;
        case 0x1cea9cu: goto label_1cea9c;
        case 0x1ceaa0u: goto label_1ceaa0;
        case 0x1ceaa4u: goto label_1ceaa4;
        case 0x1ceaa8u: goto label_1ceaa8;
        case 0x1ceaacu: goto label_1ceaac;
        case 0x1ceab0u: goto label_1ceab0;
        case 0x1ceab4u: goto label_1ceab4;
        case 0x1ceab8u: goto label_1ceab8;
        case 0x1ceabcu: goto label_1ceabc;
        case 0x1ceac0u: goto label_1ceac0;
        case 0x1ceac4u: goto label_1ceac4;
        case 0x1ceac8u: goto label_1ceac8;
        case 0x1ceaccu: goto label_1ceacc;
        case 0x1cead0u: goto label_1cead0;
        case 0x1cead4u: goto label_1cead4;
        case 0x1cead8u: goto label_1cead8;
        case 0x1ceadcu: goto label_1ceadc;
        case 0x1ceae0u: goto label_1ceae0;
        case 0x1ceae4u: goto label_1ceae4;
        case 0x1ceae8u: goto label_1ceae8;
        case 0x1ceaecu: goto label_1ceaec;
        case 0x1ceaf0u: goto label_1ceaf0;
        case 0x1ceaf4u: goto label_1ceaf4;
        case 0x1ceaf8u: goto label_1ceaf8;
        case 0x1ceafcu: goto label_1ceafc;
        case 0x1ceb00u: goto label_1ceb00;
        case 0x1ceb04u: goto label_1ceb04;
        case 0x1ceb08u: goto label_1ceb08;
        case 0x1ceb0cu: goto label_1ceb0c;
        case 0x1ceb10u: goto label_1ceb10;
        case 0x1ceb14u: goto label_1ceb14;
        case 0x1ceb18u: goto label_1ceb18;
        case 0x1ceb1cu: goto label_1ceb1c;
        case 0x1ceb20u: goto label_1ceb20;
        case 0x1ceb24u: goto label_1ceb24;
        case 0x1ceb28u: goto label_1ceb28;
        case 0x1ceb2cu: goto label_1ceb2c;
        case 0x1ceb30u: goto label_1ceb30;
        case 0x1ceb34u: goto label_1ceb34;
        case 0x1ceb38u: goto label_1ceb38;
        case 0x1ceb3cu: goto label_1ceb3c;
        case 0x1ceb40u: goto label_1ceb40;
        case 0x1ceb44u: goto label_1ceb44;
        case 0x1ceb48u: goto label_1ceb48;
        case 0x1ceb4cu: goto label_1ceb4c;
        case 0x1ceb50u: goto label_1ceb50;
        case 0x1ceb54u: goto label_1ceb54;
        case 0x1ceb58u: goto label_1ceb58;
        case 0x1ceb5cu: goto label_1ceb5c;
        case 0x1ceb60u: goto label_1ceb60;
        case 0x1ceb64u: goto label_1ceb64;
        case 0x1ceb68u: goto label_1ceb68;
        case 0x1ceb6cu: goto label_1ceb6c;
        case 0x1ceb70u: goto label_1ceb70;
        case 0x1ceb74u: goto label_1ceb74;
        case 0x1ceb78u: goto label_1ceb78;
        case 0x1ceb7cu: goto label_1ceb7c;
        case 0x1ceb80u: goto label_1ceb80;
        case 0x1ceb84u: goto label_1ceb84;
        case 0x1ceb88u: goto label_1ceb88;
        case 0x1ceb8cu: goto label_1ceb8c;
        case 0x1ceb90u: goto label_1ceb90;
        case 0x1ceb94u: goto label_1ceb94;
        case 0x1ceb98u: goto label_1ceb98;
        case 0x1ceb9cu: goto label_1ceb9c;
        case 0x1ceba0u: goto label_1ceba0;
        case 0x1ceba4u: goto label_1ceba4;
        case 0x1ceba8u: goto label_1ceba8;
        case 0x1cebacu: goto label_1cebac;
        case 0x1cebb0u: goto label_1cebb0;
        case 0x1cebb4u: goto label_1cebb4;
        case 0x1cebb8u: goto label_1cebb8;
        case 0x1cebbcu: goto label_1cebbc;
        case 0x1cebc0u: goto label_1cebc0;
        case 0x1cebc4u: goto label_1cebc4;
        case 0x1cebc8u: goto label_1cebc8;
        case 0x1cebccu: goto label_1cebcc;
        case 0x1cebd0u: goto label_1cebd0;
        case 0x1cebd4u: goto label_1cebd4;
        case 0x1cebd8u: goto label_1cebd8;
        case 0x1cebdcu: goto label_1cebdc;
        case 0x1cebe0u: goto label_1cebe0;
        case 0x1cebe4u: goto label_1cebe4;
        case 0x1cebe8u: goto label_1cebe8;
        case 0x1cebecu: goto label_1cebec;
        case 0x1cebf0u: goto label_1cebf0;
        case 0x1cebf4u: goto label_1cebf4;
        case 0x1cebf8u: goto label_1cebf8;
        case 0x1cebfcu: goto label_1cebfc;
        case 0x1cec00u: goto label_1cec00;
        case 0x1cec04u: goto label_1cec04;
        case 0x1cec08u: goto label_1cec08;
        case 0x1cec0cu: goto label_1cec0c;
        case 0x1cec10u: goto label_1cec10;
        case 0x1cec14u: goto label_1cec14;
        case 0x1cec18u: goto label_1cec18;
        case 0x1cec1cu: goto label_1cec1c;
        case 0x1cec20u: goto label_1cec20;
        case 0x1cec24u: goto label_1cec24;
        case 0x1cec28u: goto label_1cec28;
        case 0x1cec2cu: goto label_1cec2c;
        case 0x1cec30u: goto label_1cec30;
        case 0x1cec34u: goto label_1cec34;
        case 0x1cec38u: goto label_1cec38;
        case 0x1cec3cu: goto label_1cec3c;
        case 0x1cec40u: goto label_1cec40;
        case 0x1cec44u: goto label_1cec44;
        case 0x1cec48u: goto label_1cec48;
        case 0x1cec4cu: goto label_1cec4c;
        case 0x1cec50u: goto label_1cec50;
        case 0x1cec54u: goto label_1cec54;
        case 0x1cec58u: goto label_1cec58;
        case 0x1cec5cu: goto label_1cec5c;
        case 0x1cec60u: goto label_1cec60;
        case 0x1cec64u: goto label_1cec64;
        case 0x1cec68u: goto label_1cec68;
        case 0x1cec6cu: goto label_1cec6c;
        case 0x1cec70u: goto label_1cec70;
        case 0x1cec74u: goto label_1cec74;
        case 0x1cec78u: goto label_1cec78;
        case 0x1cec7cu: goto label_1cec7c;
        case 0x1cec80u: goto label_1cec80;
        case 0x1cec84u: goto label_1cec84;
        case 0x1cec88u: goto label_1cec88;
        case 0x1cec8cu: goto label_1cec8c;
        case 0x1cec90u: goto label_1cec90;
        case 0x1cec94u: goto label_1cec94;
        case 0x1cec98u: goto label_1cec98;
        case 0x1cec9cu: goto label_1cec9c;
        case 0x1ceca0u: goto label_1ceca0;
        case 0x1ceca4u: goto label_1ceca4;
        case 0x1ceca8u: goto label_1ceca8;
        case 0x1cecacu: goto label_1cecac;
        case 0x1cecb0u: goto label_1cecb0;
        case 0x1cecb4u: goto label_1cecb4;
        case 0x1cecb8u: goto label_1cecb8;
        case 0x1cecbcu: goto label_1cecbc;
        case 0x1cecc0u: goto label_1cecc0;
        case 0x1cecc4u: goto label_1cecc4;
        case 0x1cecc8u: goto label_1cecc8;
        case 0x1cecccu: goto label_1ceccc;
        case 0x1cecd0u: goto label_1cecd0;
        case 0x1cecd4u: goto label_1cecd4;
        case 0x1cecd8u: goto label_1cecd8;
        case 0x1cecdcu: goto label_1cecdc;
        case 0x1cece0u: goto label_1cece0;
        case 0x1cece4u: goto label_1cece4;
        case 0x1cece8u: goto label_1cece8;
        case 0x1cececu: goto label_1cecec;
        case 0x1cecf0u: goto label_1cecf0;
        case 0x1cecf4u: goto label_1cecf4;
        case 0x1cecf8u: goto label_1cecf8;
        case 0x1cecfcu: goto label_1cecfc;
        case 0x1ced00u: goto label_1ced00;
        case 0x1ced04u: goto label_1ced04;
        case 0x1ced08u: goto label_1ced08;
        case 0x1ced0cu: goto label_1ced0c;
        case 0x1ced10u: goto label_1ced10;
        case 0x1ced14u: goto label_1ced14;
        case 0x1ced18u: goto label_1ced18;
        case 0x1ced1cu: goto label_1ced1c;
        case 0x1ced20u: goto label_1ced20;
        case 0x1ced24u: goto label_1ced24;
        case 0x1ced28u: goto label_1ced28;
        case 0x1ced2cu: goto label_1ced2c;
        case 0x1ced30u: goto label_1ced30;
        case 0x1ced34u: goto label_1ced34;
        case 0x1ced38u: goto label_1ced38;
        case 0x1ced3cu: goto label_1ced3c;
        case 0x1ced40u: goto label_1ced40;
        case 0x1ced44u: goto label_1ced44;
        case 0x1ced48u: goto label_1ced48;
        case 0x1ced4cu: goto label_1ced4c;
        case 0x1ced50u: goto label_1ced50;
        case 0x1ced54u: goto label_1ced54;
        case 0x1ced58u: goto label_1ced58;
        case 0x1ced5cu: goto label_1ced5c;
        case 0x1ced60u: goto label_1ced60;
        case 0x1ced64u: goto label_1ced64;
        case 0x1ced68u: goto label_1ced68;
        case 0x1ced6cu: goto label_1ced6c;
        case 0x1ced70u: goto label_1ced70;
        case 0x1ced74u: goto label_1ced74;
        case 0x1ced78u: goto label_1ced78;
        case 0x1ced7cu: goto label_1ced7c;
        case 0x1ced80u: goto label_1ced80;
        case 0x1ced84u: goto label_1ced84;
        case 0x1ced88u: goto label_1ced88;
        case 0x1ced8cu: goto label_1ced8c;
        case 0x1ced90u: goto label_1ced90;
        case 0x1ced94u: goto label_1ced94;
        case 0x1ced98u: goto label_1ced98;
        case 0x1ced9cu: goto label_1ced9c;
        case 0x1ceda0u: goto label_1ceda0;
        case 0x1ceda4u: goto label_1ceda4;
        case 0x1ceda8u: goto label_1ceda8;
        case 0x1cedacu: goto label_1cedac;
        case 0x1cedb0u: goto label_1cedb0;
        case 0x1cedb4u: goto label_1cedb4;
        case 0x1cedb8u: goto label_1cedb8;
        case 0x1cedbcu: goto label_1cedbc;
        case 0x1cedc0u: goto label_1cedc0;
        case 0x1cedc4u: goto label_1cedc4;
        case 0x1cedc8u: goto label_1cedc8;
        case 0x1cedccu: goto label_1cedcc;
        case 0x1cedd0u: goto label_1cedd0;
        case 0x1cedd4u: goto label_1cedd4;
        case 0x1cedd8u: goto label_1cedd8;
        case 0x1ceddcu: goto label_1ceddc;
        case 0x1cede0u: goto label_1cede0;
        case 0x1cede4u: goto label_1cede4;
        case 0x1cede8u: goto label_1cede8;
        case 0x1cedecu: goto label_1cedec;
        case 0x1cedf0u: goto label_1cedf0;
        case 0x1cedf4u: goto label_1cedf4;
        case 0x1cedf8u: goto label_1cedf8;
        case 0x1cedfcu: goto label_1cedfc;
        case 0x1cee00u: goto label_1cee00;
        case 0x1cee04u: goto label_1cee04;
        case 0x1cee08u: goto label_1cee08;
        case 0x1cee0cu: goto label_1cee0c;
        case 0x1cee10u: goto label_1cee10;
        case 0x1cee14u: goto label_1cee14;
        case 0x1cee18u: goto label_1cee18;
        case 0x1cee1cu: goto label_1cee1c;
        case 0x1cee20u: goto label_1cee20;
        case 0x1cee24u: goto label_1cee24;
        case 0x1cee28u: goto label_1cee28;
        case 0x1cee2cu: goto label_1cee2c;
        case 0x1cee30u: goto label_1cee30;
        case 0x1cee34u: goto label_1cee34;
        case 0x1cee38u: goto label_1cee38;
        case 0x1cee3cu: goto label_1cee3c;
        case 0x1cee40u: goto label_1cee40;
        case 0x1cee44u: goto label_1cee44;
        case 0x1cee48u: goto label_1cee48;
        case 0x1cee4cu: goto label_1cee4c;
        case 0x1cee50u: goto label_1cee50;
        case 0x1cee54u: goto label_1cee54;
        case 0x1cee58u: goto label_1cee58;
        case 0x1cee5cu: goto label_1cee5c;
        case 0x1cee60u: goto label_1cee60;
        case 0x1cee64u: goto label_1cee64;
        case 0x1cee68u: goto label_1cee68;
        case 0x1cee6cu: goto label_1cee6c;
        case 0x1cee70u: goto label_1cee70;
        case 0x1cee74u: goto label_1cee74;
        case 0x1cee78u: goto label_1cee78;
        case 0x1cee7cu: goto label_1cee7c;
        case 0x1cee80u: goto label_1cee80;
        case 0x1cee84u: goto label_1cee84;
        case 0x1cee88u: goto label_1cee88;
        case 0x1cee8cu: goto label_1cee8c;
        case 0x1cee90u: goto label_1cee90;
        case 0x1cee94u: goto label_1cee94;
        case 0x1cee98u: goto label_1cee98;
        case 0x1cee9cu: goto label_1cee9c;
        case 0x1ceea0u: goto label_1ceea0;
        case 0x1ceea4u: goto label_1ceea4;
        case 0x1ceea8u: goto label_1ceea8;
        case 0x1ceeacu: goto label_1ceeac;
        case 0x1ceeb0u: goto label_1ceeb0;
        case 0x1ceeb4u: goto label_1ceeb4;
        case 0x1ceeb8u: goto label_1ceeb8;
        case 0x1ceebcu: goto label_1ceebc;
        case 0x1ceec0u: goto label_1ceec0;
        case 0x1ceec4u: goto label_1ceec4;
        case 0x1ceec8u: goto label_1ceec8;
        case 0x1ceeccu: goto label_1ceecc;
        case 0x1ceed0u: goto label_1ceed0;
        case 0x1ceed4u: goto label_1ceed4;
        case 0x1ceed8u: goto label_1ceed8;
        case 0x1ceedcu: goto label_1ceedc;
        case 0x1ceee0u: goto label_1ceee0;
        case 0x1ceee4u: goto label_1ceee4;
        case 0x1ceee8u: goto label_1ceee8;
        case 0x1ceeecu: goto label_1ceeec;
        case 0x1ceef0u: goto label_1ceef0;
        case 0x1ceef4u: goto label_1ceef4;
        case 0x1ceef8u: goto label_1ceef8;
        case 0x1ceefcu: goto label_1ceefc;
        case 0x1cef00u: goto label_1cef00;
        case 0x1cef04u: goto label_1cef04;
        case 0x1cef08u: goto label_1cef08;
        case 0x1cef0cu: goto label_1cef0c;
        case 0x1cef10u: goto label_1cef10;
        case 0x1cef14u: goto label_1cef14;
        case 0x1cef18u: goto label_1cef18;
        case 0x1cef1cu: goto label_1cef1c;
        case 0x1cef20u: goto label_1cef20;
        case 0x1cef24u: goto label_1cef24;
        case 0x1cef28u: goto label_1cef28;
        case 0x1cef2cu: goto label_1cef2c;
        case 0x1cef30u: goto label_1cef30;
        case 0x1cef34u: goto label_1cef34;
        case 0x1cef38u: goto label_1cef38;
        case 0x1cef3cu: goto label_1cef3c;
        case 0x1cef40u: goto label_1cef40;
        case 0x1cef44u: goto label_1cef44;
        case 0x1cef48u: goto label_1cef48;
        case 0x1cef4cu: goto label_1cef4c;
        case 0x1cef50u: goto label_1cef50;
        case 0x1cef54u: goto label_1cef54;
        case 0x1cef58u: goto label_1cef58;
        case 0x1cef5cu: goto label_1cef5c;
        case 0x1cef60u: goto label_1cef60;
        case 0x1cef64u: goto label_1cef64;
        case 0x1cef68u: goto label_1cef68;
        case 0x1cef6cu: goto label_1cef6c;
        case 0x1cef70u: goto label_1cef70;
        case 0x1cef74u: goto label_1cef74;
        case 0x1cef78u: goto label_1cef78;
        case 0x1cef7cu: goto label_1cef7c;
        case 0x1cef80u: goto label_1cef80;
        case 0x1cef84u: goto label_1cef84;
        case 0x1cef88u: goto label_1cef88;
        case 0x1cef8cu: goto label_1cef8c;
        case 0x1cef90u: goto label_1cef90;
        case 0x1cef94u: goto label_1cef94;
        case 0x1cef98u: goto label_1cef98;
        case 0x1cef9cu: goto label_1cef9c;
        case 0x1cefa0u: goto label_1cefa0;
        case 0x1cefa4u: goto label_1cefa4;
        case 0x1cefa8u: goto label_1cefa8;
        case 0x1cefacu: goto label_1cefac;
        case 0x1cefb0u: goto label_1cefb0;
        case 0x1cefb4u: goto label_1cefb4;
        case 0x1cefb8u: goto label_1cefb8;
        case 0x1cefbcu: goto label_1cefbc;
        case 0x1cefc0u: goto label_1cefc0;
        case 0x1cefc4u: goto label_1cefc4;
        case 0x1cefc8u: goto label_1cefc8;
        case 0x1cefccu: goto label_1cefcc;
        case 0x1cefd0u: goto label_1cefd0;
        case 0x1cefd4u: goto label_1cefd4;
        case 0x1cefd8u: goto label_1cefd8;
        case 0x1cefdcu: goto label_1cefdc;
        case 0x1cefe0u: goto label_1cefe0;
        case 0x1cefe4u: goto label_1cefe4;
        case 0x1cefe8u: goto label_1cefe8;
        case 0x1cefecu: goto label_1cefec;
        case 0x1ceff0u: goto label_1ceff0;
        case 0x1ceff4u: goto label_1ceff4;
        case 0x1ceff8u: goto label_1ceff8;
        case 0x1ceffcu: goto label_1ceffc;
        case 0x1cf000u: goto label_1cf000;
        case 0x1cf004u: goto label_1cf004;
        case 0x1cf008u: goto label_1cf008;
        case 0x1cf00cu: goto label_1cf00c;
        case 0x1cf010u: goto label_1cf010;
        case 0x1cf014u: goto label_1cf014;
        case 0x1cf018u: goto label_1cf018;
        case 0x1cf01cu: goto label_1cf01c;
        case 0x1cf020u: goto label_1cf020;
        case 0x1cf024u: goto label_1cf024;
        case 0x1cf028u: goto label_1cf028;
        case 0x1cf02cu: goto label_1cf02c;
        case 0x1cf030u: goto label_1cf030;
        case 0x1cf034u: goto label_1cf034;
        case 0x1cf038u: goto label_1cf038;
        case 0x1cf03cu: goto label_1cf03c;
        case 0x1cf040u: goto label_1cf040;
        case 0x1cf044u: goto label_1cf044;
        case 0x1cf048u: goto label_1cf048;
        case 0x1cf04cu: goto label_1cf04c;
        case 0x1cf050u: goto label_1cf050;
        case 0x1cf054u: goto label_1cf054;
        case 0x1cf058u: goto label_1cf058;
        case 0x1cf05cu: goto label_1cf05c;
        case 0x1cf060u: goto label_1cf060;
        case 0x1cf064u: goto label_1cf064;
        case 0x1cf068u: goto label_1cf068;
        case 0x1cf06cu: goto label_1cf06c;
        case 0x1cf070u: goto label_1cf070;
        case 0x1cf074u: goto label_1cf074;
        case 0x1cf078u: goto label_1cf078;
        case 0x1cf07cu: goto label_1cf07c;
        case 0x1cf080u: goto label_1cf080;
        default: break;
    }

    ctx->pc = 0x1cea00u;

label_1cea00:
    // 0x1cea00: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x1cea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
label_1cea04:
    // 0x1cea04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cea04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cea08:
    // 0x1cea08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cea08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cea0c:
    // 0x1cea0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cea0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cea10:
    // 0x1cea10: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cea10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cea14:
    // 0x1cea14: 0xc0a0f58  jal         func_283D60
label_1cea18:
    if (ctx->pc == 0x1CEA18u) {
        ctx->pc = 0x1CEA18u;
            // 0x1cea18: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x1CEA1Cu;
        goto label_1cea1c;
    }
    ctx->pc = 0x1CEA14u;
    SET_GPR_U32(ctx, 31, 0x1CEA1Cu);
    ctx->pc = 0x1CEA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA14u;
            // 0x1cea18: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA1Cu; }
        if (ctx->pc != 0x1CEA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA1Cu; }
        if (ctx->pc != 0x1CEA1Cu) { return; }
    }
    ctx->pc = 0x1CEA1Cu;
label_1cea1c:
    // 0x1cea1c: 0xaf828db4  sw          $v0, -0x724C($gp)
    ctx->pc = 0x1cea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938036), GPR_U32(ctx, 2));
label_1cea20:
    // 0x1cea20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1cea20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1cea24:
    // 0x1cea24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cea24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cea28:
    // 0x1cea28: 0xc049c86  jal         func_127218
label_1cea2c:
    if (ctx->pc == 0x1CEA2Cu) {
        ctx->pc = 0x1CEA2Cu;
            // 0x1cea2c: 0x240601d0  addiu       $a2, $zero, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
        ctx->pc = 0x1CEA30u;
        goto label_1cea30;
    }
    ctx->pc = 0x1CEA28u;
    SET_GPR_U32(ctx, 31, 0x1CEA30u);
    ctx->pc = 0x1CEA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA28u;
            // 0x1cea2c: 0x240601d0  addiu       $a2, $zero, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA30u; }
        if (ctx->pc != 0x1CEA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA30u; }
        if (ctx->pc != 0x1CEA30u) { return; }
    }
    ctx->pc = 0x1CEA30u;
label_1cea30:
    // 0x1cea30: 0x8f848db4  lw          $a0, -0x724C($gp)
    ctx->pc = 0x1cea30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1cea34:
    // 0x1cea34: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1cea38:
    if (ctx->pc == 0x1CEA38u) {
        ctx->pc = 0x1CEA3Cu;
        goto label_1cea3c;
    }
    ctx->pc = 0x1CEA34u;
    {
        const bool branch_taken_0x1cea34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cea34) {
            ctx->pc = 0x1CEA6Cu;
            goto label_1cea6c;
        }
    }
    ctx->pc = 0x1CEA3Cu;
label_1cea3c:
    // 0x1cea3c: 0xc058524  jal         func_161490
label_1cea40:
    if (ctx->pc == 0x1CEA40u) {
        ctx->pc = 0x1CEA40u;
            // 0x1cea40: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1CEA44u;
        goto label_1cea44;
    }
    ctx->pc = 0x1CEA3Cu;
    SET_GPR_U32(ctx, 31, 0x1CEA44u);
    ctx->pc = 0x1CEA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA3Cu;
            // 0x1cea40: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161490u;
    if (runtime->hasFunction(0x161490u)) {
        auto targetFn = runtime->lookupFunction(0x161490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA44u; }
        if (ctx->pc != 0x1CEA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightInfo__4CMapFP16CMapLightingInfo_0x161490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA44u; }
        if (ctx->pc != 0x1CEA44u) { return; }
    }
    ctx->pc = 0x1CEA44u;
label_1cea44:
    // 0x1cea44: 0xc0c3948  jal         func_30E520
label_1cea48:
    if (ctx->pc == 0x1CEA48u) {
        ctx->pc = 0x1CEA4Cu;
        goto label_1cea4c;
    }
    ctx->pc = 0x1CEA44u;
    SET_GPR_U32(ctx, 31, 0x1CEA4Cu);
    ctx->pc = 0x30E520u;
    if (runtime->hasFunction(0x30E520u)) {
        auto targetFn = runtime->lookupFunction(0x30E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA4Cu; }
        if (ctx->pc != 0x1CEA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PhotoAddProjection__Fv_0x30e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA4Cu; }
        if (ctx->pc != 0x1CEA4Cu) { return; }
    }
    ctx->pc = 0x1CEA4Cu;
label_1cea4c:
    // 0x1cea4c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1cea4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cea50:
    // 0x1cea50: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1cea50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1cea54:
    // 0x1cea54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cea54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cea58:
    // 0x1cea58: 0x3c024743  lui         $v0, 0x4743
    ctx->pc = 0x1cea58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18243 << 16));
label_1cea5c:
    // 0x1cea5c: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x1cea5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
label_1cea60:
    // 0x1cea60: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1cea60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1cea64:
    // 0x1cea64: 0xc050d80  jal         func_143600
label_1cea68:
    if (ctx->pc == 0x1CEA68u) {
        ctx->pc = 0x1CEA68u;
            // 0x1cea68: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1CEA6Cu;
        goto label_1cea6c;
    }
    ctx->pc = 0x1CEA64u;
    SET_GPR_U32(ctx, 31, 0x1CEA6Cu);
    ctx->pc = 0x1CEA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA64u;
            // 0x1cea68: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x143600u;
    if (runtime->hasFunction(0x143600u)) {
        auto targetFn = runtime->lookupFunction(0x143600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA6Cu; }
        if (ctx->pc != 0x1CEA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetRenderInfo__Ffff_0x143600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA6Cu; }
        if (ctx->pc != 0x1CEA6Cu) { return; }
    }
    ctx->pc = 0x1CEA6Cu;
label_1cea6c:
    // 0x1cea6c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cea6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cea70:
    // 0x1cea70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cea70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cea74:
    // 0x1cea74: 0x8c31f6e0  lw          $s1, -0x920($at)
    ctx->pc = 0x1cea74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964960)));
label_1cea78:
    // 0x1cea78: 0x12220027  beq         $s1, $v0, . + 4 + (0x27 << 2)
label_1cea7c:
    if (ctx->pc == 0x1CEA7Cu) {
        ctx->pc = 0x1CEA7Cu;
            // 0x1cea7c: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1CEA80u;
        goto label_1cea80;
    }
    ctx->pc = 0x1CEA78u;
    {
        const bool branch_taken_0x1cea78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CEA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA78u;
            // 0x1cea7c: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea78) {
            ctx->pc = 0x1CEB18u;
            goto label_1ceb18;
        }
    }
    ctx->pc = 0x1CEA80u;
label_1cea80:
    // 0x1cea80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cea80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cea84:
    // 0x1cea84: 0x12220019  beq         $s1, $v0, . + 4 + (0x19 << 2)
label_1cea88:
    if (ctx->pc == 0x1CEA88u) {
        ctx->pc = 0x1CEA88u;
            // 0x1cea88: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1CEA8Cu;
        goto label_1cea8c;
    }
    ctx->pc = 0x1CEA84u;
    {
        const bool branch_taken_0x1cea84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CEA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA84u;
            // 0x1cea88: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea84) {
            ctx->pc = 0x1CEAECu;
            goto label_1ceaec;
        }
    }
    ctx->pc = 0x1CEA8Cu;
label_1cea8c:
    // 0x1cea8c: 0x12220013  beq         $s1, $v0, . + 4 + (0x13 << 2)
label_1cea90:
    if (ctx->pc == 0x1CEA90u) {
        ctx->pc = 0x1CEA90u;
            // 0x1cea90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CEA94u;
        goto label_1cea94;
    }
    ctx->pc = 0x1CEA8Cu;
    {
        const bool branch_taken_0x1cea8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CEA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA8Cu;
            // 0x1cea90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea8c) {
            ctx->pc = 0x1CEADCu;
            goto label_1ceadc;
        }
    }
    ctx->pc = 0x1CEA94u;
label_1cea94:
    // 0x1cea94: 0x12220011  beq         $s1, $v0, . + 4 + (0x11 << 2)
label_1cea98:
    if (ctx->pc == 0x1CEA98u) {
        ctx->pc = 0x1CEA9Cu;
        goto label_1cea9c;
    }
    ctx->pc = 0x1CEA94u;
    {
        const bool branch_taken_0x1cea94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cea94) {
            ctx->pc = 0x1CEADCu;
            goto label_1ceadc;
        }
    }
    ctx->pc = 0x1CEA9Cu;
label_1cea9c:
    // 0x1cea9c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_1ceaa0:
    if (ctx->pc == 0x1CEAA0u) {
        ctx->pc = 0x1CEAA4u;
        goto label_1ceaa4;
    }
    ctx->pc = 0x1CEA9Cu;
    {
        const bool branch_taken_0x1cea9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cea9c) {
            ctx->pc = 0x1CEAACu;
            goto label_1ceaac;
        }
    }
    ctx->pc = 0x1CEAA4u;
label_1ceaa4:
    // 0x1ceaa4: 0x10000023  b           . + 4 + (0x23 << 2)
label_1ceaa8:
    if (ctx->pc == 0x1CEAA8u) {
        ctx->pc = 0x1CEAA8u;
            // 0x1ceaa8: 0x8f828dac  lw          $v0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x1CEAACu;
        goto label_1ceaac;
    }
    ctx->pc = 0x1CEAA4u;
    {
        const bool branch_taken_0x1ceaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEAA4u;
            // 0x1ceaa8: 0x8f828dac  lw          $v0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceaa4) {
            ctx->pc = 0x1CEB34u;
            goto label_1ceb34;
        }
    }
    ctx->pc = 0x1CEAACu;
label_1ceaac:
    // 0x1ceaac: 0xc074500  jal         func_1D1400
label_1ceab0:
    if (ctx->pc == 0x1CEAB0u) {
        ctx->pc = 0x1CEAB4u;
        goto label_1ceab4;
    }
    ctx->pc = 0x1CEAACu;
    SET_GPR_U32(ctx, 31, 0x1CEAB4u);
    ctx->pc = 0x1D1400u;
    if (runtime->hasFunction(0x1D1400u)) {
        auto targetFn = runtime->lookupFunction(0x1D1400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAB4u; }
        if (ctx->pc != 0x1CEAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DngMainKey__Fv_0x1d1400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAB4u; }
        if (ctx->pc != 0x1CEAB4u) { return; }
    }
    ctx->pc = 0x1CEAB4u;
label_1ceab4:
    // 0x1ceab4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ceab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ceab8:
    // 0x1ceab8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ceab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ceabc:
    // 0x1ceabc: 0x8c23f6e0  lw          $v1, -0x920($at)
    ctx->pc = 0x1ceabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964960)));
label_1ceac0:
    // 0x1ceac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ceac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ceac4:
    // 0x1ceac4: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
label_1ceac8:
    if (ctx->pc == 0x1CEAC8u) {
        ctx->pc = 0x1CEACCu;
        goto label_1ceacc;
    }
    ctx->pc = 0x1CEAC4u;
    {
        const bool branch_taken_0x1ceac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ceac4) {
            ctx->pc = 0x1CEB30u;
            goto label_1ceb30;
        }
    }
    ctx->pc = 0x1CEACCu;
label_1ceacc:
    // 0x1ceacc: 0xc0741b0  jal         func_1D06C0
label_1cead0:
    if (ctx->pc == 0x1CEAD0u) {
        ctx->pc = 0x1CEAD4u;
        goto label_1cead4;
    }
    ctx->pc = 0x1CEACCu;
    SET_GPR_U32(ctx, 31, 0x1CEAD4u);
    ctx->pc = 0x1D06C0u;
    if (runtime->hasFunction(0x1D06C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D06C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAD4u; }
        if (ctx->pc != 0x1CEAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DngStep__Fv_0x1d06c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAD4u; }
        if (ctx->pc != 0x1CEAD4u) { return; }
    }
    ctx->pc = 0x1CEAD4u;
label_1cead4:
    // 0x1cead4: 0x10000016  b           . + 4 + (0x16 << 2)
label_1cead8:
    if (ctx->pc == 0x1CEAD8u) {
        ctx->pc = 0x1CEADCu;
        goto label_1ceadc;
    }
    ctx->pc = 0x1CEAD4u;
    {
        const bool branch_taken_0x1cead4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cead4) {
            ctx->pc = 0x1CEB30u;
            goto label_1ceb30;
        }
    }
    ctx->pc = 0x1CEADCu;
label_1ceadc:
    // 0x1ceadc: 0xc08cffc  jal         func_233FF0
label_1ceae0:
    if (ctx->pc == 0x1CEAE0u) {
        ctx->pc = 0x1CEAE4u;
        goto label_1ceae4;
    }
    ctx->pc = 0x1CEADCu;
    SET_GPR_U32(ctx, 31, 0x1CEAE4u);
    ctx->pc = 0x233FF0u;
    if (runtime->hasFunction(0x233FF0u)) {
        auto targetFn = runtime->lookupFunction(0x233FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAE4u; }
        if (ctx->pc != 0x1CEAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainKey__Fv_0x233ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAE4u; }
        if (ctx->pc != 0x1CEAE4u) { return; }
    }
    ctx->pc = 0x1CEAE4u;
label_1ceae4:
    // 0x1ceae4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1ceae8:
    if (ctx->pc == 0x1CEAE8u) {
        ctx->pc = 0x1CEAE8u;
            // 0x1ceae8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CEAECu;
        goto label_1ceaec;
    }
    ctx->pc = 0x1CEAE4u;
    {
        const bool branch_taken_0x1ceae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEAE4u;
            // 0x1ceae8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceae4) {
            ctx->pc = 0x1CEB30u;
            goto label_1ceb30;
        }
    }
    ctx->pc = 0x1CEAECu;
label_1ceaec:
    // 0x1ceaec: 0xc0744d8  jal         func_1D1360
label_1ceaf0:
    if (ctx->pc == 0x1CEAF0u) {
        ctx->pc = 0x1CEAF4u;
        goto label_1ceaf4;
    }
    ctx->pc = 0x1CEAECu;
    SET_GPR_U32(ctx, 31, 0x1CEAF4u);
    ctx->pc = 0x1D1360u;
    if (runtime->hasFunction(0x1D1360u)) {
        auto targetFn = runtime->lookupFunction(0x1D1360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAF4u; }
        if (ctx->pc != 0x1CEAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunMainEvent__Fv_0x1d1360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAF4u; }
        if (ctx->pc != 0x1CEAF4u) { return; }
    }
    ctx->pc = 0x1CEAF4u;
label_1ceaf4:
    // 0x1ceaf4: 0xc0741b0  jal         func_1D06C0
label_1ceaf8:
    if (ctx->pc == 0x1CEAF8u) {
        ctx->pc = 0x1CEAF8u;
            // 0x1ceaf8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CEAFCu;
        goto label_1ceafc;
    }
    ctx->pc = 0x1CEAF4u;
    SET_GPR_U32(ctx, 31, 0x1CEAFCu);
    ctx->pc = 0x1CEAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEAF4u;
            // 0x1ceaf8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D06C0u;
    if (runtime->hasFunction(0x1D06C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D06C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAFCu; }
        if (ctx->pc != 0x1CEAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DngStep__Fv_0x1d06c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAFCu; }
        if (ctx->pc != 0x1CEAFCu) { return; }
    }
    ctx->pc = 0x1CEAFCu;
label_1ceafc:
    // 0x1ceafc: 0xc09fc8c  jal         func_27F230
label_1ceb00:
    if (ctx->pc == 0x1CEB00u) {
        ctx->pc = 0x1CEB04u;
        goto label_1ceb04;
    }
    ctx->pc = 0x1CEAFCu;
    SET_GPR_U32(ctx, 31, 0x1CEB04u);
    ctx->pc = 0x27F230u;
    if (runtime->hasFunction(0x27F230u)) {
        auto targetFn = runtime->lookupFunction(0x27F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB04u; }
        if (ctx->pc != 0x1CEB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChkEventEditStart__Fv_0x27f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB04u; }
        if (ctx->pc != 0x1CEB04u) { return; }
    }
    ctx->pc = 0x1CEB04u;
label_1ceb04:
    // 0x1ceb04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1ceb08:
    if (ctx->pc == 0x1CEB08u) {
        ctx->pc = 0x1CEB08u;
            // 0x1ceb08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1CEB0Cu;
        goto label_1ceb0c;
    }
    ctx->pc = 0x1CEB04u;
    {
        const bool branch_taken_0x1ceb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB04u;
            // 0x1ceb08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb04) {
            ctx->pc = 0x1CEB30u;
            goto label_1ceb30;
        }
    }
    ctx->pc = 0x1CEB0Cu;
label_1ceb0c:
    // 0x1ceb0c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ceb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ceb10:
    // 0x1ceb10: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ceb14:
    if (ctx->pc == 0x1CEB14u) {
        ctx->pc = 0x1CEB14u;
            // 0x1ceb14: 0xac22f6e0  sw          $v0, -0x920($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 2));
        ctx->pc = 0x1CEB18u;
        goto label_1ceb18;
    }
    ctx->pc = 0x1CEB10u;
    {
        const bool branch_taken_0x1ceb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB10u;
            // 0x1ceb14: 0xac22f6e0  sw          $v0, -0x920($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb10) {
            ctx->pc = 0x1CEB30u;
            goto label_1ceb30;
        }
    }
    ctx->pc = 0x1CEB18u;
label_1ceb18:
    // 0x1ceb18: 0xc09fcd0  jal         func_27F340
label_1ceb1c:
    if (ctx->pc == 0x1CEB1Cu) {
        ctx->pc = 0x1CEB1Cu;
            // 0x1ceb1c: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->pc = 0x1CEB20u;
        goto label_1ceb20;
    }
    ctx->pc = 0x1CEB18u;
    SET_GPR_U32(ctx, 31, 0x1CEB20u);
    ctx->pc = 0x1CEB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB18u;
            // 0x1ceb1c: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F340u;
    if (runtime->hasFunction(0x27F340u)) {
        auto targetFn = runtime->lookupFunction(0x27F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB20u; }
        if (ctx->pc != 0x1CEB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EventEdit__FP9mgCMemory_0x27f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB20u; }
        if (ctx->pc != 0x1CEB20u) { return; }
    }
    ctx->pc = 0x1CEB20u;
label_1ceb20:
    // 0x1ceb20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1ceb24:
    if (ctx->pc == 0x1CEB24u) {
        ctx->pc = 0x1CEB24u;
            // 0x1ceb24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1CEB28u;
        goto label_1ceb28;
    }
    ctx->pc = 0x1CEB20u;
    {
        const bool branch_taken_0x1ceb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB20u;
            // 0x1ceb24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb20) {
            ctx->pc = 0x1CEB30u;
            goto label_1ceb30;
        }
    }
    ctx->pc = 0x1CEB28u;
label_1ceb28:
    // 0x1ceb28: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ceb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ceb2c:
    // 0x1ceb2c: 0xac22f6e0  sw          $v0, -0x920($at)
    ctx->pc = 0x1ceb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 2));
label_1ceb30:
    // 0x1ceb30: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1ceb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1ceb34:
    // 0x1ceb34: 0xc05f664  jal         func_17D990
label_1ceb38:
    if (ctx->pc == 0x1CEB38u) {
        ctx->pc = 0x1CEB38u;
            // 0x1ceb38: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x1CEB3Cu;
        goto label_1ceb3c;
    }
    ctx->pc = 0x1CEB34u;
    SET_GPR_U32(ctx, 31, 0x1CEB3Cu);
    ctx->pc = 0x1CEB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB34u;
            // 0x1ceb38: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D990u;
    if (runtime->hasFunction(0x17D990u)) {
        auto targetFn = runtime->lookupFunction(0x17D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB3Cu; }
        if (ctx->pc != 0x1CEB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeStep__10CFadeInOutFv_0x17d990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB3Cu; }
        if (ctx->pc != 0x1CEB3Cu) { return; }
    }
    ctx->pc = 0x1CEB3Cu;
label_1ceb3c:
    // 0x1ceb3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ceb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ceb40:
    // 0x1ceb40: 0x1222003c  beq         $s1, $v0, . + 4 + (0x3C << 2)
label_1ceb44:
    if (ctx->pc == 0x1CEB44u) {
        ctx->pc = 0x1CEB44u;
            // 0x1ceb44: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1CEB48u;
        goto label_1ceb48;
    }
    ctx->pc = 0x1CEB40u;
    {
        const bool branch_taken_0x1ceb40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CEB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB40u;
            // 0x1ceb44: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb40) {
            ctx->pc = 0x1CEC34u;
            goto label_1cec34;
        }
    }
    ctx->pc = 0x1CEB48u;
label_1ceb48:
    // 0x1ceb48: 0x1222002e  beq         $s1, $v0, . + 4 + (0x2E << 2)
label_1ceb4c:
    if (ctx->pc == 0x1CEB4Cu) {
        ctx->pc = 0x1CEB4Cu;
            // 0x1ceb4c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1CEB50u;
        goto label_1ceb50;
    }
    ctx->pc = 0x1CEB48u;
    {
        const bool branch_taken_0x1ceb48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CEB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB48u;
            // 0x1ceb4c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb48) {
            ctx->pc = 0x1CEC04u;
            goto label_1cec04;
        }
    }
    ctx->pc = 0x1CEB50u;
label_1ceb50:
    // 0x1ceb50: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_1ceb54:
    if (ctx->pc == 0x1CEB54u) {
        ctx->pc = 0x1CEB54u;
            // 0x1ceb54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1CEB58u;
        goto label_1ceb58;
    }
    ctx->pc = 0x1CEB50u;
    {
        const bool branch_taken_0x1ceb50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CEB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB50u;
            // 0x1ceb54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb50) {
            ctx->pc = 0x1CEB70u;
            goto label_1ceb70;
        }
    }
    ctx->pc = 0x1CEB58u;
label_1ceb58:
    // 0x1ceb58: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
label_1ceb5c:
    if (ctx->pc == 0x1CEB5Cu) {
        ctx->pc = 0x1CEB60u;
        goto label_1ceb60;
    }
    ctx->pc = 0x1CEB58u;
    {
        const bool branch_taken_0x1ceb58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ceb58) {
            ctx->pc = 0x1CEB70u;
            goto label_1ceb70;
        }
    }
    ctx->pc = 0x1CEB60u;
label_1ceb60:
    // 0x1ceb60: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_1ceb64:
    if (ctx->pc == 0x1CEB64u) {
        ctx->pc = 0x1CEB68u;
        goto label_1ceb68;
    }
    ctx->pc = 0x1CEB60u;
    {
        const bool branch_taken_0x1ceb60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ceb60) {
            ctx->pc = 0x1CEB70u;
            goto label_1ceb70;
        }
    }
    ctx->pc = 0x1CEB68u;
label_1ceb68:
    // 0x1ceb68: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_1ceb6c:
    if (ctx->pc == 0x1CEB6Cu) {
        ctx->pc = 0x1CEB6Cu;
            // 0x1ceb6c: 0x27a302ac  addiu       $v1, $sp, 0x2AC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 684));
        ctx->pc = 0x1CEB70u;
        goto label_1ceb70;
    }
    ctx->pc = 0x1CEB68u;
    {
        const bool branch_taken_0x1ceb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB68u;
            // 0x1ceb6c: 0x27a302ac  addiu       $v1, $sp, 0x2AC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 684));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb68) {
            ctx->pc = 0x1CEEBCu;
            goto label_1ceebc;
        }
    }
    ctx->pc = 0x1CEB70u;
label_1ceb70:
    // 0x1ceb70: 0xc073c24  jal         func_1CF090
label_1ceb74:
    if (ctx->pc == 0x1CEB74u) {
        ctx->pc = 0x1CEB78u;
        goto label_1ceb78;
    }
    ctx->pc = 0x1CEB70u;
    SET_GPR_U32(ctx, 31, 0x1CEB78u);
    ctx->pc = 0x1CF090u;
    if (runtime->hasFunction(0x1CF090u)) {
        auto targetFn = runtime->lookupFunction(0x1CF090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB78u; }
        if (ctx->pc != 0x1CEB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DngMainDraw__Fv_0x1cf090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB78u; }
        if (ctx->pc != 0x1CEB78u) { return; }
    }
    ctx->pc = 0x1CEB78u;
label_1ceb78:
    // 0x1ceb78: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ceb78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ceb7c:
    // 0x1ceb7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ceb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ceb80:
    // 0x1ceb80: 0x8c23f6e0  lw          $v1, -0x920($at)
    ctx->pc = 0x1ceb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964960)));
label_1ceb84:
    // 0x1ceb84: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1ceb88:
    if (ctx->pc == 0x1CEB88u) {
        ctx->pc = 0x1CEB88u;
            // 0x1ceb88: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1CEB8Cu;
        goto label_1ceb8c;
    }
    ctx->pc = 0x1CEB84u;
    {
        const bool branch_taken_0x1ceb84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CEB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB84u;
            // 0x1ceb88: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb84) {
            ctx->pc = 0x1CEB94u;
            goto label_1ceb94;
        }
    }
    ctx->pc = 0x1CEB8Cu;
label_1ceb8c:
    // 0x1ceb8c: 0x146200ca  bne         $v1, $v0, . + 4 + (0xCA << 2)
label_1ceb90:
    if (ctx->pc == 0x1CEB90u) {
        ctx->pc = 0x1CEB94u;
        goto label_1ceb94;
    }
    ctx->pc = 0x1CEB8Cu;
    {
        const bool branch_taken_0x1ceb8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ceb8c) {
            ctx->pc = 0x1CEEB8u;
            goto label_1ceeb8;
        }
    }
    ctx->pc = 0x1CEB94u;
label_1ceb94:
    // 0x1ceb94: 0x83828dfc  lb          $v0, -0x7204($gp)
    ctx->pc = 0x1ceb94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938108)));
label_1ceb98:
    // 0x1ceb98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ceb9c:
    if (ctx->pc == 0x1CEB9Cu) {
        ctx->pc = 0x1CEB9Cu;
            // 0x1ceb9c: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x1CEBA0u;
        goto label_1ceba0;
    }
    ctx->pc = 0x1CEB98u;
    {
        const bool branch_taken_0x1ceb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB98u;
            // 0x1ceb9c: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb98) {
            ctx->pc = 0x1CEBB0u;
            goto label_1cebb0;
        }
    }
    ctx->pc = 0x1CEBA0u;
label_1ceba0:
    // 0x1ceba0: 0xc04e640  jal         func_139900
label_1ceba4:
    if (ctx->pc == 0x1CEBA4u) {
        ctx->pc = 0x1CEBA4u;
            // 0x1ceba4: 0x24848890  addiu       $a0, $a0, -0x7770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936720));
        ctx->pc = 0x1CEBA8u;
        goto label_1ceba8;
    }
    ctx->pc = 0x1CEBA0u;
    SET_GPR_U32(ctx, 31, 0x1CEBA8u);
    ctx->pc = 0x1CEBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEBA0u;
            // 0x1ceba4: 0x24848890  addiu       $a0, $a0, -0x7770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEBA8u; }
        if (ctx->pc != 0x1CEBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEBA8u; }
        if (ctx->pc != 0x1CEBA8u) { return; }
    }
    ctx->pc = 0x1CEBA8u;
label_1ceba8:
    // 0x1ceba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ceba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cebac:
    // 0x1cebac: 0xa3828dfc  sb          $v0, -0x7204($gp)
    ctx->pc = 0x1cebacu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938108), (uint8_t)GPR_U32(ctx, 2));
label_1cebb0:
    // 0x1cebb0: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1cebb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cebb4:
    // 0x1cebb4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1cebb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_1cebb8:
    // 0x1cebb8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1cebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_1cebbc:
    // 0x1cebbc: 0x24848890  addiu       $a0, $a0, -0x7770
    ctx->pc = 0x1cebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936720));
label_1cebc0:
    // 0x1cebc0: 0xc04e79c  jal         func_139E70
label_1cebc4:
    if (ctx->pc == 0x1CEBC4u) {
        ctx->pc = 0x1CEBC4u;
            // 0x1cebc4: 0x34460d40  ori         $a2, $v0, 0xD40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3392);
        ctx->pc = 0x1CEBC8u;
        goto label_1cebc8;
    }
    ctx->pc = 0x1CEBC0u;
    SET_GPR_U32(ctx, 31, 0x1CEBC8u);
    ctx->pc = 0x1CEBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEBC0u;
            // 0x1cebc4: 0x34460d40  ori         $a2, $v0, 0xD40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3392);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEBC8u; }
        if (ctx->pc != 0x1CEBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEBC8u; }
        if (ctx->pc != 0x1CEBC8u) { return; }
    }
    ctx->pc = 0x1CEBC8u;
label_1cebc8:
    // 0x1cebc8: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1cebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
label_1cebcc:
    // 0x1cebcc: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1cebccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1cebd0:
    // 0x1cebd0: 0x24638890  addiu       $v1, $v1, -0x7770
    ctx->pc = 0x1cebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936720));
label_1cebd4:
    // 0x1cebd4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cebd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cebd8:
    // 0x1cebd8: 0xac23d5f0  sw          $v1, -0x2A10($at)
    ctx->pc = 0x1cebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956528), GPR_U32(ctx, 3));
label_1cebdc:
    // 0x1cebdc: 0x2442f3e0  addiu       $v0, $v0, -0xC20
    ctx->pc = 0x1cebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964192));
label_1cebe0:
    // 0x1cebe0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cebe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cebe4:
    // 0x1cebe4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cebe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cebe8:
    // 0x1cebe8: 0xc0a3370  jal         func_28CDC0
label_1cebec:
    if (ctx->pc == 0x1CEBECu) {
        ctx->pc = 0x1CEBECu;
            // 0x1cebec: 0xac22d5f4  sw          $v0, -0x2A0C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956532), GPR_U32(ctx, 2));
        ctx->pc = 0x1CEBF0u;
        goto label_1cebf0;
    }
    ctx->pc = 0x1CEBE8u;
    SET_GPR_U32(ctx, 31, 0x1CEBF0u);
    ctx->pc = 0x1CEBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEBE8u;
            // 0x1cebec: 0xac22d5f4  sw          $v0, -0x2A0C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CDC0u;
    if (runtime->hasFunction(0x28CDC0u)) {
        auto targetFn = runtime->lookupFunction(0x28CDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEBF0u; }
        if (ctx->pc != 0x1CEBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoopSoundManager__Fi_0x28cdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEBF0u; }
        if (ctx->pc != 0x1CEBF0u) { return; }
    }
    ctx->pc = 0x1CEBF0u;
label_1cebf0:
    // 0x1cebf0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1cebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_1cebf4:
    // 0x1cebf4: 0xc08cb7c  jal         func_232DF0
label_1cebf8:
    if (ctx->pc == 0x1CEBF8u) {
        ctx->pc = 0x1CEBF8u;
            // 0x1cebf8: 0x2484d5f0  addiu       $a0, $a0, -0x2A10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956528));
        ctx->pc = 0x1CEBFCu;
        goto label_1cebfc;
    }
    ctx->pc = 0x1CEBF4u;
    SET_GPR_U32(ctx, 31, 0x1CEBFCu);
    ctx->pc = 0x1CEBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEBF4u;
            // 0x1cebf8: 0x2484d5f0  addiu       $a0, $a0, -0x2A10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232DF0u;
    if (runtime->hasFunction(0x232DF0u)) {
        auto targetFn = runtime->lookupFunction(0x232DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEBFCu; }
        if (ctx->pc != 0x1CEBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainInit__FP13MENU_INIT_ARG_0x232df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEBFCu; }
        if (ctx->pc != 0x1CEBFCu) { return; }
    }
    ctx->pc = 0x1CEBFCu;
label_1cebfc:
    // 0x1cebfc: 0x100000ae  b           . + 4 + (0xAE << 2)
label_1cec00:
    if (ctx->pc == 0x1CEC00u) {
        ctx->pc = 0x1CEC04u;
        goto label_1cec04;
    }
    ctx->pc = 0x1CEBFCu;
    {
        const bool branch_taken_0x1cebfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cebfc) {
            ctx->pc = 0x1CEEB8u;
            goto label_1ceeb8;
        }
    }
    ctx->pc = 0x1CEC04u;
label_1cec04:
    // 0x1cec04: 0xc08d0a4  jal         func_234290
label_1cec08:
    if (ctx->pc == 0x1CEC08u) {
        ctx->pc = 0x1CEC0Cu;
        goto label_1cec0c;
    }
    ctx->pc = 0x1CEC04u;
    SET_GPR_U32(ctx, 31, 0x1CEC0Cu);
    ctx->pc = 0x234290u;
    if (runtime->hasFunction(0x234290u)) {
        auto targetFn = runtime->lookupFunction(0x234290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC0Cu; }
        if (ctx->pc != 0x1CEC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainDraw__Fv_0x234290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC0Cu; }
        if (ctx->pc != 0x1CEC0Cu) { return; }
    }
    ctx->pc = 0x1CEC0Cu;
label_1cec0c:
    // 0x1cec0c: 0xc064c3c  jal         func_1930F0
label_1cec10:
    if (ctx->pc == 0x1CEC10u) {
        ctx->pc = 0x1CEC14u;
        goto label_1cec14;
    }
    ctx->pc = 0x1CEC0Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC14u);
    ctx->pc = 0x1930F0u;
    if (runtime->hasFunction(0x1930F0u)) {
        auto targetFn = runtime->lookupFunction(0x1930F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC14u; }
        if (ctx->pc != 0x1CEC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutForE3__Fv_0x1930f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC14u; }
        if (ctx->pc != 0x1CEC14u) { return; }
    }
    ctx->pc = 0x1CEC14u;
label_1cec14:
    // 0x1cec14: 0x120000a8  beqz        $s0, . + 4 + (0xA8 << 2)
label_1cec18:
    if (ctx->pc == 0x1CEC18u) {
        ctx->pc = 0x1CEC1Cu;
        goto label_1cec1c;
    }
    ctx->pc = 0x1CEC14u;
    {
        const bool branch_taken_0x1cec14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cec14) {
            ctx->pc = 0x1CEEB8u;
            goto label_1ceeb8;
        }
    }
    ctx->pc = 0x1CEC1Cu;
label_1cec1c:
    // 0x1cec1c: 0xc08cf24  jal         func_233C90
label_1cec20:
    if (ctx->pc == 0x1CEC20u) {
        ctx->pc = 0x1CEC24u;
        goto label_1cec24;
    }
    ctx->pc = 0x1CEC1Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC24u);
    ctx->pc = 0x233C90u;
    if (runtime->hasFunction(0x233C90u)) {
        auto targetFn = runtime->lookupFunction(0x233C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC24u; }
        if (ctx->pc != 0x1CEC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainExit__Fv_0x233c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC24u; }
        if (ctx->pc != 0x1CEC24u) { return; }
    }
    ctx->pc = 0x1CEC24u;
label_1cec24:
    // 0x1cec24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cec24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cec28:
    // 0x1cec28: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cec28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cec2c:
    // 0x1cec2c: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_1cec30:
    if (ctx->pc == 0x1CEC30u) {
        ctx->pc = 0x1CEC30u;
            // 0x1cec30: 0xac22f6e0  sw          $v0, -0x920($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 2));
        ctx->pc = 0x1CEC34u;
        goto label_1cec34;
    }
    ctx->pc = 0x1CEC2Cu;
    {
        const bool branch_taken_0x1cec2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEC2Cu;
            // 0x1cec30: 0xac22f6e0  sw          $v0, -0x920($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec2c) {
            ctx->pc = 0x1CEEB8u;
            goto label_1ceeb8;
        }
    }
    ctx->pc = 0x1CEC34u;
label_1cec34:
    // 0x1cec34: 0xc08d0a4  jal         func_234290
label_1cec38:
    if (ctx->pc == 0x1CEC38u) {
        ctx->pc = 0x1CEC3Cu;
        goto label_1cec3c;
    }
    ctx->pc = 0x1CEC34u;
    SET_GPR_U32(ctx, 31, 0x1CEC3Cu);
    ctx->pc = 0x234290u;
    if (runtime->hasFunction(0x234290u)) {
        auto targetFn = runtime->lookupFunction(0x234290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC3Cu; }
        if (ctx->pc != 0x1CEC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainDraw__Fv_0x234290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC3Cu; }
        if (ctx->pc != 0x1CEC3Cu) { return; }
    }
    ctx->pc = 0x1CEC3Cu;
label_1cec3c:
    // 0x1cec3c: 0xc064c3c  jal         func_1930F0
label_1cec40:
    if (ctx->pc == 0x1CEC40u) {
        ctx->pc = 0x1CEC44u;
        goto label_1cec44;
    }
    ctx->pc = 0x1CEC3Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC44u);
    ctx->pc = 0x1930F0u;
    if (runtime->hasFunction(0x1930F0u)) {
        auto targetFn = runtime->lookupFunction(0x1930F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC44u; }
        if (ctx->pc != 0x1CEC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutForE3__Fv_0x1930f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC44u; }
        if (ctx->pc != 0x1CEC44u) { return; }
    }
    ctx->pc = 0x1CEC44u;
label_1cec44:
    // 0x1cec44: 0x1200009c  beqz        $s0, . + 4 + (0x9C << 2)
label_1cec48:
    if (ctx->pc == 0x1CEC48u) {
        ctx->pc = 0x1CEC4Cu;
        goto label_1cec4c;
    }
    ctx->pc = 0x1CEC44u;
    {
        const bool branch_taken_0x1cec44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cec44) {
            ctx->pc = 0x1CEEB8u;
            goto label_1ceeb8;
        }
    }
    ctx->pc = 0x1CEC4Cu;
label_1cec4c:
    // 0x1cec4c: 0xc08cf24  jal         func_233C90
label_1cec50:
    if (ctx->pc == 0x1CEC50u) {
        ctx->pc = 0x1CEC54u;
        goto label_1cec54;
    }
    ctx->pc = 0x1CEC4Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC54u);
    ctx->pc = 0x233C90u;
    if (runtime->hasFunction(0x233C90u)) {
        auto targetFn = runtime->lookupFunction(0x233C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC54u; }
        if (ctx->pc != 0x1CEC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainExit__Fv_0x233c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC54u; }
        if (ctx->pc != 0x1CEC54u) { return; }
    }
    ctx->pc = 0x1CEC54u;
label_1cec54:
    // 0x1cec54: 0xc0a3370  jal         func_28CDC0
label_1cec58:
    if (ctx->pc == 0x1CEC58u) {
        ctx->pc = 0x1CEC58u;
            // 0x1cec58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CEC5Cu;
        goto label_1cec5c;
    }
    ctx->pc = 0x1CEC54u;
    SET_GPR_U32(ctx, 31, 0x1CEC5Cu);
    ctx->pc = 0x1CEC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEC54u;
            // 0x1cec58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CDC0u;
    if (runtime->hasFunction(0x28CDC0u)) {
        auto targetFn = runtime->lookupFunction(0x28CDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC5Cu; }
        if (ctx->pc != 0x1CEC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoopSoundManager__Fi_0x28cdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC5Cu; }
        if (ctx->pc != 0x1CEC5Cu) { return; }
    }
    ctx->pc = 0x1CEC5Cu;
label_1cec5c:
    // 0x1cec5c: 0xc074f84  jal         func_1D3E10
label_1cec60:
    if (ctx->pc == 0x1CEC60u) {
        ctx->pc = 0x1CEC64u;
        goto label_1cec64;
    }
    ctx->pc = 0x1CEC5Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC64u);
    ctx->pc = 0x1D3E10u;
    if (runtime->hasFunction(0x1D3E10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC64u; }
        if (ctx->pc != 0x1CEC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckWeaponEnable__Fv_0x1d3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC64u; }
        if (ctx->pc != 0x1CEC64u) { return; }
    }
    ctx->pc = 0x1CEC64u;
label_1cec64:
    // 0x1cec64: 0x8f858db0  lw          $a1, -0x7250($gp)
    ctx->pc = 0x1cec64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cec68:
    // 0x1cec68: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cec68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cec6c:
    // 0x1cec6c: 0xac20f6e0  sw          $zero, -0x920($at)
    ctx->pc = 0x1cec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 0));
label_1cec70:
    // 0x1cec70: 0x80a20049  lb          $v0, 0x49($a1)
    ctx->pc = 0x1cec70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 73)));
label_1cec74:
    // 0x1cec74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1cec78:
    if (ctx->pc == 0x1CEC78u) {
        ctx->pc = 0x1CEC78u;
            // 0x1cec78: 0x24a60049  addiu       $a2, $a1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 73));
        ctx->pc = 0x1CEC7Cu;
        goto label_1cec7c;
    }
    ctx->pc = 0x1CEC74u;
    {
        const bool branch_taken_0x1cec74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEC74u;
            // 0x1cec78: 0x24a60049  addiu       $a2, $a1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec74) {
            ctx->pc = 0x1CEC9Cu;
            goto label_1cec9c;
        }
    }
    ctx->pc = 0x1CEC7Cu;
label_1cec7c:
    // 0x1cec7c: 0x80a40048  lb          $a0, 0x48($a1)
    ctx->pc = 0x1cec7cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 72)));
label_1cec80:
    // 0x1cec80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cec80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cec84:
    // 0x1cec84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cec84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cec88:
    // 0x1cec88: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x1cec88u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
label_1cec8c:
    // 0x1cec8c: 0xa0a30048  sb          $v1, 0x48($a1)
    ctx->pc = 0x1cec8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 72), (uint8_t)GPR_U32(ctx, 3));
label_1cec90:
    // 0x1cec90: 0xaca0004c  sw          $zero, 0x4C($a1)
    ctx->pc = 0x1cec90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
label_1cec94:
    // 0x1cec94: 0xaca20050  sw          $v0, 0x50($a1)
    ctx->pc = 0x1cec94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 2));
label_1cec98:
    // 0x1cec98: 0xaca2004c  sw          $v0, 0x4C($a1)
    ctx->pc = 0x1cec98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
label_1cec9c:
    // 0x1cec9c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cec9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1ceca0:
    // 0x1ceca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ceca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ceca4:
    // 0x1ceca4: 0x8c23d62c  lw          $v1, -0x29D4($at)
    ctx->pc = 0x1ceca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956588)));
label_1ceca8:
    // 0x1ceca8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1cecac:
    if (ctx->pc == 0x1CECACu) {
        ctx->pc = 0x1CECB0u;
        goto label_1cecb0;
    }
    ctx->pc = 0x1CECA8u;
    {
        const bool branch_taken_0x1ceca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ceca8) {
            ctx->pc = 0x1CECC0u;
            goto label_1cecc0;
        }
    }
    ctx->pc = 0x1CECB0u;
label_1cecb0:
    // 0x1cecb0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cecb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cecb4:
    // 0x1cecb4: 0x8c22d630  lw          $v0, -0x29D0($at)
    ctx->pc = 0x1cecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956592)));
label_1cecb8:
    // 0x1cecb8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cecb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cecbc:
    // 0x1cecbc: 0xac22d628  sw          $v0, -0x29D8($at)
    ctx->pc = 0x1cecbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956584), GPR_U32(ctx, 2));
label_1cecc0:
    // 0x1cecc0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cecc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cecc4:
    // 0x1cecc4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1cecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1cecc8:
    // 0x1cecc8: 0x8c23d62c  lw          $v1, -0x29D4($at)
    ctx->pc = 0x1cecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956588)));
label_1ceccc:
    // 0x1ceccc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1cecd0:
    if (ctx->pc == 0x1CECD0u) {
        ctx->pc = 0x1CECD4u;
        goto label_1cecd4;
    }
    ctx->pc = 0x1CECCCu;
    {
        const bool branch_taken_0x1ceccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ceccc) {
            ctx->pc = 0x1CECE4u;
            goto label_1cece4;
        }
    }
    ctx->pc = 0x1CECD4u;
label_1cecd4:
    // 0x1cecd4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cecd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cecd8:
    // 0x1cecd8: 0x8c22d630  lw          $v0, -0x29D0($at)
    ctx->pc = 0x1cecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956592)));
label_1cecdc:
    // 0x1cecdc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cecdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cece0:
    // 0x1cece0: 0xac22d628  sw          $v0, -0x29D8($at)
    ctx->pc = 0x1cece0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956584), GPR_U32(ctx, 2));
label_1cece4:
    // 0x1cece4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cece4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cece8:
    // 0x1cece8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cece8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cecec:
    // 0x1cecec: 0x8c23d62c  lw          $v1, -0x29D4($at)
    ctx->pc = 0x1cececu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956588)));
label_1cecf0:
    // 0x1cecf0: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
label_1cecf4:
    if (ctx->pc == 0x1CECF4u) {
        ctx->pc = 0x1CECF8u;
        goto label_1cecf8;
    }
    ctx->pc = 0x1CECF0u;
    {
        const bool branch_taken_0x1cecf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cecf0) {
            ctx->pc = 0x1CED78u;
            goto label_1ced78;
        }
    }
    ctx->pc = 0x1CECF8u;
label_1cecf8:
    // 0x1cecf8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cecf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cecfc:
    // 0x1cecfc: 0x8c22d638  lw          $v0, -0x29C8($at)
    ctx->pc = 0x1cecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
label_1ced00:
    // 0x1ced00: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1ced04:
    if (ctx->pc == 0x1CED04u) {
        ctx->pc = 0x1CED08u;
        goto label_1ced08;
    }
    ctx->pc = 0x1CED00u;
    {
        const bool branch_taken_0x1ced00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ced00) {
            ctx->pc = 0x1CED78u;
            goto label_1ced78;
        }
    }
    ctx->pc = 0x1CED08u;
label_1ced08:
    // 0x1ced08: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1ced08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1ced0c:
    // 0x1ced0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ced0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ced10:
    // 0x1ced10: 0xc049c86  jal         func_127218
label_1ced14:
    if (ctx->pc == 0x1CED14u) {
        ctx->pc = 0x1CED14u;
            // 0x1ced14: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x1CED18u;
        goto label_1ced18;
    }
    ctx->pc = 0x1CED10u;
    SET_GPR_U32(ctx, 31, 0x1CED18u);
    ctx->pc = 0x1CED14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED10u;
            // 0x1ced14: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED18u; }
        if (ctx->pc != 0x1CED18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED18u; }
        if (ctx->pc != 0x1CED18u) { return; }
    }
    ctx->pc = 0x1CED18u;
label_1ced18:
    // 0x1ced18: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1ced18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_1ced1c:
    // 0x1ced1c: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1ced1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_1ced20:
    // 0x1ced20: 0x24a58ee0  addiu       $a1, $a1, -0x7120
    ctx->pc = 0x1ced20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938336));
label_1ced24:
    // 0x1ced24: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ced24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ced28:
    // 0x1ced28: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1ced28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1ced2c:
    // 0x1ced2c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1ced2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ced30:
    // 0x1ced30: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x1ced30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_1ced34:
    // 0x1ced34: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1ced34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_1ced38:
    // 0x1ced38: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x1ced38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
label_1ced3c:
    // 0x1ced3c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1ced3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_1ced40:
    // 0x1ced40: 0x8c22f6e4  lw          $v0, -0x91C($at)
    ctx->pc = 0x1ced40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964964)));
label_1ced44:
    // 0x1ced44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ced44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ced48:
    // 0x1ced48: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1ced48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1ced4c:
    // 0x1ced4c: 0xc0b49fc  jal         func_2D27F0
label_1ced50:
    if (ctx->pc == 0x1CED50u) {
        ctx->pc = 0x1CED50u;
            // 0x1ced50: 0x8c440250  lw          $a0, 0x250($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
        ctx->pc = 0x1CED54u;
        goto label_1ced54;
    }
    ctx->pc = 0x1CED4Cu;
    SET_GPR_U32(ctx, 31, 0x1CED54u);
    ctx->pc = 0x1CED50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED4Cu;
            // 0x1ced50: 0x8c440250  lw          $a0, 0x250($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED54u; }
        if (ctx->pc != 0x1CED54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED54u; }
        if (ctx->pc != 0x1CED54u) { return; }
    }
    ctx->pc = 0x1CED54u;
label_1ced54:
    // 0x1ced54: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x1ced54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
label_1ced58:
    // 0x1ced58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ced58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ced5c:
    // 0x1ced5c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ced5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1ced60:
    // 0x1ced60: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1ced60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1ced64:
    // 0x1ced64: 0xc064240  jal         func_190900
label_1ced68:
    if (ctx->pc == 0x1CED68u) {
        ctx->pc = 0x1CED68u;
            // 0x1ced68: 0xafa20248  sw          $v0, 0x248($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
        ctx->pc = 0x1CED6Cu;
        goto label_1ced6c;
    }
    ctx->pc = 0x1CED64u;
    SET_GPR_U32(ctx, 31, 0x1CED6Cu);
    ctx->pc = 0x1CED68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED64u;
            // 0x1ced68: 0xafa20248  sw          $v0, 0x248($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190900u;
    if (runtime->hasFunction(0x190900u)) {
        auto targetFn = runtime->lookupFunction(0x190900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED6Cu; }
        if (ctx->pc != 0x1CED6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextLoop__Fi13INIT_LOOP_ARG_0x190900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED6Cu; }
        if (ctx->pc != 0x1CED6Cu) { return; }
    }
    ctx->pc = 0x1CED6Cu;
label_1ced6c:
    // 0x1ced6c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ced6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ced70:
    // 0x1ced70: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ced70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ced74:
    // 0x1ced74: 0xac22f6e0  sw          $v0, -0x920($at)
    ctx->pc = 0x1ced74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 2));
label_1ced78:
    // 0x1ced78: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ced78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1ced7c:
    // 0x1ced7c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1ced7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ced80:
    // 0x1ced80: 0x8c23d62c  lw          $v1, -0x29D4($at)
    ctx->pc = 0x1ced80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956588)));
label_1ced84:
    // 0x1ced84: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1ced88:
    if (ctx->pc == 0x1CED88u) {
        ctx->pc = 0x1CED8Cu;
        goto label_1ced8c;
    }
    ctx->pc = 0x1CED84u;
    {
        const bool branch_taken_0x1ced84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ced84) {
            ctx->pc = 0x1CEDB8u;
            goto label_1cedb8;
        }
    }
    ctx->pc = 0x1CED8Cu;
label_1ced8c:
    // 0x1ced8c: 0xc0c0fc8  jal         func_303F20
label_1ced90:
    if (ctx->pc == 0x1CED90u) {
        ctx->pc = 0x1CED94u;
        goto label_1ced94;
    }
    ctx->pc = 0x1CED8Cu;
    SET_GPR_U32(ctx, 31, 0x1CED94u);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED94u; }
        if (ctx->pc != 0x1CED94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED94u; }
        if (ctx->pc != 0x1CED94u) { return; }
    }
    ctx->pc = 0x1CED94u;
label_1ced94:
    // 0x1ced94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ced98:
    if (ctx->pc == 0x1CED98u) {
        ctx->pc = 0x1CED9Cu;
        goto label_1ced9c;
    }
    ctx->pc = 0x1CED94u;
    {
        const bool branch_taken_0x1ced94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ced94) {
            ctx->pc = 0x1CEDB8u;
            goto label_1cedb8;
        }
    }
    ctx->pc = 0x1CED9Cu;
label_1ced9c:
    // 0x1ced9c: 0xc0c0fcc  jal         func_303F30
label_1ceda0:
    if (ctx->pc == 0x1CEDA0u) {
        ctx->pc = 0x1CEDA4u;
        goto label_1ceda4;
    }
    ctx->pc = 0x1CED9Cu;
    SET_GPR_U32(ctx, 31, 0x1CEDA4u);
    ctx->pc = 0x303F30u;
    if (runtime->hasFunction(0x303F30u)) {
        auto targetFn = runtime->lookupFunction(0x303F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEDA4u; }
        if (ctx->pc != 0x1CEDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSubGameNo__Fv_0x303f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEDA4u; }
        if (ctx->pc != 0x1CEDA4u) { return; }
    }
    ctx->pc = 0x1CEDA4u;
label_1ceda4:
    // 0x1ceda4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ceda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ceda8:
    // 0x1ceda8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1cedac:
    if (ctx->pc == 0x1CEDACu) {
        ctx->pc = 0x1CEDB0u;
        goto label_1cedb0;
    }
    ctx->pc = 0x1CEDA8u;
    {
        const bool branch_taken_0x1ceda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ceda8) {
            ctx->pc = 0x1CEDB8u;
            goto label_1cedb8;
        }
    }
    ctx->pc = 0x1CEDB0u;
label_1cedb0:
    // 0x1cedb0: 0xc0c1090  jal         func_304240
label_1cedb4:
    if (ctx->pc == 0x1CEDB4u) {
        ctx->pc = 0x1CEDB8u;
        goto label_1cedb8;
    }
    ctx->pc = 0x1CEDB0u;
    SET_GPR_U32(ctx, 31, 0x1CEDB8u);
    ctx->pc = 0x304240u;
    if (runtime->hasFunction(0x304240u)) {
        auto targetFn = runtime->lookupFunction(0x304240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEDB8u; }
        if (ctx->pc != 0x1CEDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgExitSubGame__Fv_0x304240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEDB8u; }
        if (ctx->pc != 0x1CEDB8u) { return; }
    }
    ctx->pc = 0x1CEDB8u;
label_1cedb8:
    // 0x1cedb8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cedb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cedbc:
    // 0x1cedbc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1cedbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1cedc0:
    // 0x1cedc0: 0x8c23d62c  lw          $v1, -0x29D4($at)
    ctx->pc = 0x1cedc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956588)));
label_1cedc4:
    // 0x1cedc4: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
label_1cedc8:
    if (ctx->pc == 0x1CEDC8u) {
        ctx->pc = 0x1CEDCCu;
        goto label_1cedcc;
    }
    ctx->pc = 0x1CEDC4u;
    {
        const bool branch_taken_0x1cedc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cedc4) {
            ctx->pc = 0x1CEEB0u;
            goto label_1ceeb0;
        }
    }
    ctx->pc = 0x1CEDCCu;
label_1cedcc:
    // 0x1cedcc: 0xafa00298  sw          $zero, 0x298($sp)
    ctx->pc = 0x1cedccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 0));
label_1cedd0:
    // 0x1cedd0: 0x27a60284  addiu       $a2, $sp, 0x284
    ctx->pc = 0x1cedd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
label_1cedd4:
    // 0x1cedd4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1cedd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1cedd8:
    // 0x1cedd8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1cedd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1ceddc:
    // 0x1ceddc: 0x8f838dac  lw          $v1, -0x7254($gp)
    ctx->pc = 0x1ceddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cede0:
    // 0x1cede0: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1cede0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1cede4:
    // 0x1cede4: 0xafa00280  sw          $zero, 0x280($sp)
    ctx->pc = 0x1cede4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
label_1cede8:
    // 0x1cede8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cede8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cedec:
    // 0x1cedec: 0xafa0029c  sw          $zero, 0x29C($sp)
    ctx->pc = 0x1cedecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 0));
label_1cedf0:
    // 0x1cedf0: 0x27b00290  addiu       $s0, $sp, 0x290
    ctx->pc = 0x1cedf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_1cedf4:
    // 0x1cedf4: 0xafa00288  sw          $zero, 0x288($sp)
    ctx->pc = 0x1cedf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 0));
label_1cedf8:
    // 0x1cedf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cedf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cedfc:
    // 0x1cedfc: 0xafa0028c  sw          $zero, 0x28C($sp)
    ctx->pc = 0x1cedfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 0));
label_1cee00:
    // 0x1cee00: 0xac653e68  sw          $a1, 0x3E68($v1)
    ctx->pc = 0x1cee00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15976), GPR_U32(ctx, 5));
label_1cee04:
    // 0x1cee04: 0x8f838dac  lw          $v1, -0x7254($gp)
    ctx->pc = 0x1cee04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cee08:
    // 0x1cee08: 0xac643e6c  sw          $a0, 0x3E6C($v1)
    ctx->pc = 0x1cee08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15980), GPR_U32(ctx, 4));
label_1cee0c:
    // 0x1cee0c: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cee10:
    // 0x1cee10: 0x8c23d630  lw          $v1, -0x29D0($at)
    ctx->pc = 0x1cee10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956592)));
label_1cee14:
    // 0x1cee14: 0xafa40270  sw          $a0, 0x270($sp)
    ctx->pc = 0x1cee14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 4));
label_1cee18:
    // 0x1cee18: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1cee18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1cee1c:
    // 0x1cee1c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cee1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cee20:
    // 0x1cee20: 0x8c23d634  lw          $v1, -0x29CC($at)
    ctx->pc = 0x1cee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956596)));
label_1cee24:
    // 0x1cee24: 0xafa30294  sw          $v1, 0x294($sp)
    ctx->pc = 0x1cee24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 3));
label_1cee28:
    // 0x1cee28: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cee28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cee2c:
    // 0x1cee2c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1cee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1cee30:
    // 0x1cee30: 0xc0c0fd0  jal         func_303F40
label_1cee34:
    if (ctx->pc == 0x1CEE34u) {
        ctx->pc = 0x1CEE34u;
            // 0x1cee34: 0xac20d62c  sw          $zero, -0x29D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 0));
        ctx->pc = 0x1CEE38u;
        goto label_1cee38;
    }
    ctx->pc = 0x1CEE30u;
    SET_GPR_U32(ctx, 31, 0x1CEE38u);
    ctx->pc = 0x1CEE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE30u;
            // 0x1cee34: 0xac20d62c  sw          $zero, -0x29D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303F40u;
    if (runtime->hasFunction(0x303F40u)) {
        auto targetFn = runtime->lookupFunction(0x303F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE38u; }
        if (ctx->pc != 0x1CEE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowSubGameInfo__Fv_0x303f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE38u; }
        if (ctx->pc != 0x1CEE38u) { return; }
    }
    ctx->pc = 0x1CEE38u;
label_1cee38:
    // 0x1cee38: 0xc08cb10  jal         func_232C40
label_1cee3c:
    if (ctx->pc == 0x1CEE3Cu) {
        ctx->pc = 0x1CEE3Cu;
            // 0x1cee3c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE40u;
        goto label_1cee40;
    }
    ctx->pc = 0x1CEE38u;
    SET_GPR_U32(ctx, 31, 0x1CEE40u);
    ctx->pc = 0x1CEE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE38u;
            // 0x1cee3c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232C40u;
    if (runtime->hasFunction(0x232C40u)) {
        auto targetFn = runtime->lookupFunction(0x232C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE40u; }
        if (ctx->pc != 0x1CEE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuEtcFlag__Fv_0x232c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE40u; }
        if (ctx->pc != 0x1CEE40u) { return; }
    }
    ctx->pc = 0x1CEE40u;
label_1cee40:
    // 0x1cee40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cee40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1cee44:
    // 0x1cee44: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1cee48:
    if (ctx->pc == 0x1CEE48u) {
        ctx->pc = 0x1CEE48u;
            // 0x1cee48: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CEE4Cu;
        goto label_1cee4c;
    }
    ctx->pc = 0x1CEE44u;
    {
        const bool branch_taken_0x1cee44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE44u;
            // 0x1cee48: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee44) {
            ctx->pc = 0x1CEE70u;
            goto label_1cee70;
        }
    }
    ctx->pc = 0x1CEE4Cu;
label_1cee4c:
    // 0x1cee4c: 0xc0c0fc8  jal         func_303F20
label_1cee50:
    if (ctx->pc == 0x1CEE50u) {
        ctx->pc = 0x1CEE54u;
        goto label_1cee54;
    }
    ctx->pc = 0x1CEE4Cu;
    SET_GPR_U32(ctx, 31, 0x1CEE54u);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE54u; }
        if (ctx->pc != 0x1CEE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE54u; }
        if (ctx->pc != 0x1CEE54u) { return; }
    }
    ctx->pc = 0x1CEE54u;
label_1cee54:
    // 0x1cee54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1cee58:
    if (ctx->pc == 0x1CEE58u) {
        ctx->pc = 0x1CEE5Cu;
        goto label_1cee5c;
    }
    ctx->pc = 0x1CEE54u;
    {
        const bool branch_taken_0x1cee54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cee54) {
            ctx->pc = 0x1CEE6Cu;
            goto label_1cee6c;
        }
    }
    ctx->pc = 0x1CEE5Cu;
label_1cee5c:
    // 0x1cee5c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1cee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1cee60:
    // 0x1cee60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cee60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cee64:
    // 0x1cee64: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1cee68:
    if (ctx->pc == 0x1CEE68u) {
        ctx->pc = 0x1CEE68u;
            // 0x1cee68: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x1CEE6Cu;
        goto label_1cee6c;
    }
    ctx->pc = 0x1CEE64u;
    {
        const bool branch_taken_0x1cee64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CEE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE64u;
            // 0x1cee68: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee64) {
            ctx->pc = 0x1CEE80u;
            goto label_1cee80;
        }
    }
    ctx->pc = 0x1CEE6Cu;
label_1cee6c:
    // 0x1cee6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cee70:
    // 0x1cee70: 0xc0c0ff0  jal         func_303FC0
label_1cee74:
    if (ctx->pc == 0x1CEE74u) {
        ctx->pc = 0x1CEE74u;
            // 0x1cee74: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x1CEE78u;
        goto label_1cee78;
    }
    ctx->pc = 0x1CEE70u;
    SET_GPR_U32(ctx, 31, 0x1CEE78u);
    ctx->pc = 0x1CEE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE70u;
            // 0x1cee74: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303FC0u;
    if (runtime->hasFunction(0x303FC0u)) {
        auto targetFn = runtime->lookupFunction(0x303FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE78u; }
        if (ctx->pc != 0x1CEE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgInitSubGame__FiP11SubGameInfo_0x303fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE78u; }
        if (ctx->pc != 0x1CEE78u) { return; }
    }
    ctx->pc = 0x1CEE78u;
label_1cee78:
    // 0x1cee78: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cee7c:
    if (ctx->pc == 0x1CEE7Cu) {
        ctx->pc = 0x1CEE7Cu;
            // 0x1cee7c: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1CEE80u;
        goto label_1cee80;
    }
    ctx->pc = 0x1CEE78u;
    {
        const bool branch_taken_0x1cee78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE78u;
            // 0x1cee7c: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee78) {
            ctx->pc = 0x1CEE8Cu;
            goto label_1cee8c;
        }
    }
    ctx->pc = 0x1CEE80u;
label_1cee80:
    // 0x1cee80: 0xc0c10b0  jal         func_3042C0
label_1cee84:
    if (ctx->pc == 0x1CEE84u) {
        ctx->pc = 0x1CEE88u;
        goto label_1cee88;
    }
    ctx->pc = 0x1CEE80u;
    SET_GPR_U32(ctx, 31, 0x1CEE88u);
    ctx->pc = 0x3042C0u;
    if (runtime->hasFunction(0x3042C0u)) {
        auto targetFn = runtime->lookupFunction(0x3042C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE88u; }
        if (ctx->pc != 0x1CEE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgRestartSubGame__FP11SubGameInfo_0x3042c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE88u; }
        if (ctx->pc != 0x1CEE88u) { return; }
    }
    ctx->pc = 0x1CEE88u;
label_1cee88:
    // 0x1cee88: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1cee88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1cee8c:
    // 0x1cee8c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cee8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cee90:
    // 0x1cee90: 0xc05af24  jal         func_16BC90
label_1cee94:
    if (ctx->pc == 0x1CEE94u) {
        ctx->pc = 0x1CEE94u;
            // 0x1cee94: 0x24a57278  addiu       $a1, $a1, 0x7278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29304));
        ctx->pc = 0x1CEE98u;
        goto label_1cee98;
    }
    ctx->pc = 0x1CEE90u;
    SET_GPR_U32(ctx, 31, 0x1CEE98u);
    ctx->pc = 0x1CEE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE90u;
            // 0x1cee94: 0x24a57278  addiu       $a1, $a1, 0x7278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE98u; }
        if (ctx->pc != 0x1CEE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE98u; }
        if (ctx->pc != 0x1CEE98u) { return; }
    }
    ctx->pc = 0x1CEE98u;
label_1cee98:
    // 0x1cee98: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1cee98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cee9c:
    // 0x1cee9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cee9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ceea0:
    // 0x1ceea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ceea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ceea4:
    // 0x1ceea4: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x1ceea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_1ceea8:
    // 0x1ceea8: 0x320f809  jalr        $t9
label_1ceeac:
    if (ctx->pc == 0x1CEEACu) {
        ctx->pc = 0x1CEEACu;
            // 0x1ceeac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CEEB0u;
        goto label_1ceeb0;
    }
    ctx->pc = 0x1CEEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CEEB0u);
        ctx->pc = 0x1CEEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEEA8u;
            // 0x1ceeac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CEEB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CEEB0u; }
            if (ctx->pc != 0x1CEEB0u) { return; }
        }
        }
    }
    ctx->pc = 0x1CEEB0u;
label_1ceeb0:
    // 0x1ceeb0: 0xc074fb0  jal         func_1D3EC0
label_1ceeb4:
    if (ctx->pc == 0x1CEEB4u) {
        ctx->pc = 0x1CEEB4u;
            // 0x1ceeb4: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1CEEB8u;
        goto label_1ceeb8;
    }
    ctx->pc = 0x1CEEB0u;
    SET_GPR_U32(ctx, 31, 0x1CEEB8u);
    ctx->pc = 0x1CEEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEEB0u;
            // 0x1ceeb4: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EC0u;
    if (runtime->hasFunction(0x1D3EC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEEB8u; }
        if (ctx->pc != 0x1CEEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetEyeView__FP12CActionChara_0x1d3ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEEB8u; }
        if (ctx->pc != 0x1CEEB8u) { return; }
    }
    ctx->pc = 0x1CEEB8u;
label_1ceeb8:
    // 0x1ceeb8: 0x27a302ac  addiu       $v1, $sp, 0x2AC
    ctx->pc = 0x1ceeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 684));
label_1ceebc:
    // 0x1ceebc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ceebcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1ceec0:
    // 0x1ceec0: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1ceec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1ceec4:
    // 0x1ceec4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ceec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ceec8:
    // 0x1ceec8: 0x8f828ad4  lw          $v0, -0x752C($gp)
    ctx->pc = 0x1ceec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
label_1ceecc:
    // 0x1ceecc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1ceed0:
    if (ctx->pc == 0x1CEED0u) {
        ctx->pc = 0x1CEED0u;
            // 0x1ceed0: 0xafa002a8  sw          $zero, 0x2A8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 0));
        ctx->pc = 0x1CEED4u;
        goto label_1ceed4;
    }
    ctx->pc = 0x1CEECCu;
    {
        const bool branch_taken_0x1ceecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEECCu;
            // 0x1ceed0: 0xafa002a8  sw          $zero, 0x2A8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceecc) {
            ctx->pc = 0x1CEF38u;
            goto label_1cef38;
        }
    }
    ctx->pc = 0x1CEED4u;
label_1ceed4:
    // 0x1ceed4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ceed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ceed8:
    // 0x1ceed8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ceed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ceedc:
    // 0x1ceedc: 0x8c23f6e0  lw          $v1, -0x920($at)
    ctx->pc = 0x1ceedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964960)));
label_1ceee0:
    // 0x1ceee0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1ceee4:
    if (ctx->pc == 0x1CEEE4u) {
        ctx->pc = 0x1CEEE8u;
        goto label_1ceee8;
    }
    ctx->pc = 0x1CEEE0u;
    {
        const bool branch_taken_0x1ceee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ceee0) {
            ctx->pc = 0x1CEF00u;
            goto label_1cef00;
        }
    }
    ctx->pc = 0x1CEEE8u;
label_1ceee8:
    // 0x1ceee8: 0xc095574  jal         func_2555D0
label_1ceeec:
    if (ctx->pc == 0x1CEEECu) {
        ctx->pc = 0x1CEEF0u;
        goto label_1ceef0;
    }
    ctx->pc = 0x1CEEE8u;
    SET_GPR_U32(ctx, 31, 0x1CEEF0u);
    ctx->pc = 0x2555D0u;
    if (runtime->hasFunction(0x2555D0u)) {
        auto targetFn = runtime->lookupFunction(0x2555D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEEF0u; }
        if (ctx->pc != 0x1CEEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEventSkip__Fv_0x2555d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEEF0u; }
        if (ctx->pc != 0x1CEEF0u) { return; }
    }
    ctx->pc = 0x1CEEF0u;
label_1ceef0:
    // 0x1ceef0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ceef4:
    if (ctx->pc == 0x1CEEF4u) {
        ctx->pc = 0x1CEEF8u;
        goto label_1ceef8;
    }
    ctx->pc = 0x1CEEF0u;
    {
        const bool branch_taken_0x1ceef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ceef0) {
            ctx->pc = 0x1CEF00u;
            goto label_1cef00;
        }
    }
    ctx->pc = 0x1CEEF8u;
label_1ceef8:
    // 0x1ceef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ceef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ceefc:
    // 0x1ceefc: 0xafa202a8  sw          $v0, 0x2A8($sp)
    ctx->pc = 0x1ceefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 2));
label_1cef00:
    // 0x1cef00: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1cef00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1cef04:
    // 0x1cef04: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1cef04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1cef08:
    // 0x1cef08: 0xc0bb538  jal         func_2ED4E0
label_1cef0c:
    if (ctx->pc == 0x1CEF0Cu) {
        ctx->pc = 0x1CEF0Cu;
            // 0x1cef0c: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->pc = 0x1CEF10u;
        goto label_1cef10;
    }
    ctx->pc = 0x1CEF08u;
    SET_GPR_U32(ctx, 31, 0x1CEF10u);
    ctx->pc = 0x1CEF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF08u;
            // 0x1cef0c: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF10u; }
        if (ctx->pc != 0x1CEF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF10u; }
        if (ctx->pc != 0x1CEF10u) { return; }
    }
    ctx->pc = 0x1CEF10u;
label_1cef10:
    // 0x1cef10: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1cef14:
    if (ctx->pc == 0x1CEF14u) {
        ctx->pc = 0x1CEF14u;
            // 0x1cef14: 0x27a402a8  addiu       $a0, $sp, 0x2A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
        ctx->pc = 0x1CEF18u;
        goto label_1cef18;
    }
    ctx->pc = 0x1CEF10u;
    {
        const bool branch_taken_0x1cef10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF10u;
            // 0x1cef14: 0x27a402a8  addiu       $a0, $sp, 0x2A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef10) {
            ctx->pc = 0x1CEF30u;
            goto label_1cef30;
        }
    }
    ctx->pc = 0x1CEF18u;
label_1cef18:
    // 0x1cef18: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1cef18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1cef1c:
    // 0x1cef1c: 0xc052a3c  jal         func_14A8F0
label_1cef20:
    if (ctx->pc == 0x1CEF20u) {
        ctx->pc = 0x1CEF20u;
            // 0x1cef20: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1CEF24u;
        goto label_1cef24;
    }
    ctx->pc = 0x1CEF1Cu;
    SET_GPR_U32(ctx, 31, 0x1CEF24u);
    ctx->pc = 0x1CEF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF1Cu;
            // 0x1cef20: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A8F0u;
    if (runtime->hasFunction(0x14A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x14A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF24u; }
        if (ctx->pc != 0x1CEF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Connect__8CGamePadFv_0x14a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF24u; }
        if (ctx->pc != 0x1CEF24u) { return; }
    }
    ctx->pc = 0x1CEF24u;
label_1cef24:
    // 0x1cef24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1cef28:
    if (ctx->pc == 0x1CEF28u) {
        ctx->pc = 0x1CEF2Cu;
        goto label_1cef2c;
    }
    ctx->pc = 0x1CEF24u;
    {
        const bool branch_taken_0x1cef24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cef24) {
            ctx->pc = 0x1CEF38u;
            goto label_1cef38;
        }
    }
    ctx->pc = 0x1CEF2Cu;
label_1cef2c:
    // 0x1cef2c: 0x27a402a8  addiu       $a0, $sp, 0x2A8
    ctx->pc = 0x1cef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
label_1cef30:
    // 0x1cef30: 0xc0c2728  jal         func_309CA0
label_1cef34:
    if (ctx->pc == 0x1CEF34u) {
        ctx->pc = 0x1CEF38u;
        goto label_1cef38;
    }
    ctx->pc = 0x1CEF30u;
    SET_GPR_U32(ctx, 31, 0x1CEF38u);
    ctx->pc = 0x309CA0u;
    if (runtime->hasFunction(0x309CA0u)) {
        auto targetFn = runtime->lookupFunction(0x309CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF38u; }
        if (ctx->pc != 0x1CEF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseStart__FP10PAUSE_INFO_0x309ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF38u; }
        if (ctx->pc != 0x1CEF38u) { return; }
    }
    ctx->pc = 0x1CEF38u;
label_1cef38:
    // 0x1cef38: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x1cef38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_1cef3c:
    // 0x1cef3c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1cef40:
    if (ctx->pc == 0x1CEF40u) {
        ctx->pc = 0x1CEF44u;
        goto label_1cef44;
    }
    ctx->pc = 0x1CEF3Cu;
    {
        const bool branch_taken_0x1cef3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cef3c) {
            ctx->pc = 0x1CEF88u;
            goto label_1cef88;
        }
    }
    ctx->pc = 0x1CEF44u;
label_1cef44:
    // 0x1cef44: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cef48:
    // 0x1cef48: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1cef48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1cef4c:
    // 0x1cef4c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1cef4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_1cef50:
    // 0x1cef50: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1cef54:
    if (ctx->pc == 0x1CEF54u) {
        ctx->pc = 0x1CEF54u;
            // 0x1cef54: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1CEF58u;
        goto label_1cef58;
    }
    ctx->pc = 0x1CEF50u;
    {
        const bool branch_taken_0x1cef50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF50u;
            // 0x1cef54: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef50) {
            ctx->pc = 0x1CEF88u;
            goto label_1cef88;
        }
    }
    ctx->pc = 0x1CEF58u;
label_1cef58:
    // 0x1cef58: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1cef58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1cef5c:
    // 0x1cef5c: 0xc052cf0  jal         func_14B3C0
label_1cef60:
    if (ctx->pc == 0x1CEF60u) {
        ctx->pc = 0x1CEF60u;
            // 0x1cef60: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1CEF64u;
        goto label_1cef64;
    }
    ctx->pc = 0x1CEF5Cu;
    SET_GPR_U32(ctx, 31, 0x1CEF64u);
    ctx->pc = 0x1CEF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF5Cu;
            // 0x1cef60: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF64u; }
        if (ctx->pc != 0x1CEF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF64u; }
        if (ctx->pc != 0x1CEF64u) { return; }
    }
    ctx->pc = 0x1CEF64u;
label_1cef64:
    // 0x1cef64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1cef68:
    if (ctx->pc == 0x1CEF68u) {
        ctx->pc = 0x1CEF68u;
            // 0x1cef68: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1CEF6Cu;
        goto label_1cef6c;
    }
    ctx->pc = 0x1CEF64u;
    {
        const bool branch_taken_0x1cef64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF64u;
            // 0x1cef68: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef64) {
            ctx->pc = 0x1CEF88u;
            goto label_1cef88;
        }
    }
    ctx->pc = 0x1CEF6Cu;
label_1cef6c:
    // 0x1cef6c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1cef6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cef70:
    // 0x1cef70: 0xc052cf0  jal         func_14B3C0
label_1cef74:
    if (ctx->pc == 0x1CEF74u) {
        ctx->pc = 0x1CEF74u;
            // 0x1cef74: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1CEF78u;
        goto label_1cef78;
    }
    ctx->pc = 0x1CEF70u;
    SET_GPR_U32(ctx, 31, 0x1CEF78u);
    ctx->pc = 0x1CEF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF70u;
            // 0x1cef74: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF78u; }
        if (ctx->pc != 0x1CEF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF78u; }
        if (ctx->pc != 0x1CEF78u) { return; }
    }
    ctx->pc = 0x1CEF78u;
label_1cef78:
    // 0x1cef78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1cef7c:
    if (ctx->pc == 0x1CEF7Cu) {
        ctx->pc = 0x1CEF7Cu;
            // 0x1cef7c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1CEF80u;
        goto label_1cef80;
    }
    ctx->pc = 0x1CEF78u;
    {
        const bool branch_taken_0x1cef78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF78u;
            // 0x1cef7c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef78) {
            ctx->pc = 0x1CEF88u;
            goto label_1cef88;
        }
    }
    ctx->pc = 0x1CEF80u;
label_1cef80:
    // 0x1cef80: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cef80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cef84:
    // 0x1cef84: 0xac22f6e0  sw          $v0, -0x920($at)
    ctx->pc = 0x1cef84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 2));
label_1cef88:
    // 0x1cef88: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1cef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cef8c:
    // 0x1cef8c: 0x24432f64  addiu       $v1, $v0, 0x2F64
    ctx->pc = 0x1cef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12132));
label_1cef90:
    // 0x1cef90: 0x8c422f64  lw          $v0, 0x2F64($v0)
    ctx->pc = 0x1cef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12132)));
label_1cef94:
    // 0x1cef94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1cef98:
    if (ctx->pc == 0x1CEF98u) {
        ctx->pc = 0x1CEF9Cu;
        goto label_1cef9c;
    }
    ctx->pc = 0x1CEF94u;
    {
        const bool branch_taken_0x1cef94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cef94) {
            ctx->pc = 0x1CEFACu;
            goto label_1cefac;
        }
    }
    ctx->pc = 0x1CEF9Cu;
label_1cef9c:
    // 0x1cef9c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1cef9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1cefa0:
    // 0x1cefa0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cefa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cefa4:
    // 0x1cefa4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cefa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cefa8:
    // 0x1cefa8: 0xac22f6e0  sw          $v0, -0x920($at)
    ctx->pc = 0x1cefa8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 2));
label_1cefac:
    // 0x1cefac: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cefacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cefb0:
    // 0x1cefb0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cefb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cefb4:
    // 0x1cefb4: 0x8c23f6e0  lw          $v1, -0x920($at)
    ctx->pc = 0x1cefb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964960)));
label_1cefb8:
    // 0x1cefb8: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
label_1cefbc:
    if (ctx->pc == 0x1CEFBCu) {
        ctx->pc = 0x1CEFBCu;
            // 0x1cefbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CEFC0u;
        goto label_1cefc0;
    }
    ctx->pc = 0x1CEFB8u;
    {
        const bool branch_taken_0x1cefb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CEFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEFB8u;
            // 0x1cefbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cefb8) {
            ctx->pc = 0x1CF070u;
            goto label_1cf070;
        }
    }
    ctx->pc = 0x1CEFC0u;
label_1cefc0:
    // 0x1cefc0: 0xc0c10d4  jal         func_304350
label_1cefc4:
    if (ctx->pc == 0x1CEFC4u) {
        ctx->pc = 0x1CEFC8u;
        goto label_1cefc8;
    }
    ctx->pc = 0x1CEFC0u;
    SET_GPR_U32(ctx, 31, 0x1CEFC8u);
    ctx->pc = 0x304350u;
    if (runtime->hasFunction(0x304350u)) {
        auto targetFn = runtime->lookupFunction(0x304350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEFC8u; }
        if (ctx->pc != 0x1CEFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgBreakSubGame__Fv_0x304350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEFC8u; }
        if (ctx->pc != 0x1CEFC8u) { return; }
    }
    ctx->pc = 0x1CEFC8u;
label_1cefc8:
    // 0x1cefc8: 0xc0685ac  jal         func_1A16B0
label_1cefcc:
    if (ctx->pc == 0x1CEFCCu) {
        ctx->pc = 0x1CEFD0u;
        goto label_1cefd0;
    }
    ctx->pc = 0x1CEFC8u;
    SET_GPR_U32(ctx, 31, 0x1CEFD0u);
    ctx->pc = 0x1A16B0u;
    if (runtime->hasFunction(0x1A16B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A16B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEFD0u; }
        if (ctx->pc != 0x1CEFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemDngKey__Fv_0x1a16b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEFD0u; }
        if (ctx->pc != 0x1CEFD0u) { return; }
    }
    ctx->pc = 0x1CEFD0u;
label_1cefd0:
    // 0x1cefd0: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cefd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cefd4:
    // 0x1cefd4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1cefd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1cefd8:
    // 0x1cefd8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1cefd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_1cefdc:
    // 0x1cefdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1cefe0:
    if (ctx->pc == 0x1CEFE0u) {
        ctx->pc = 0x1CEFE4u;
        goto label_1cefe4;
    }
    ctx->pc = 0x1CEFDCu;
    {
        const bool branch_taken_0x1cefdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cefdc) {
            ctx->pc = 0x1CEFECu;
            goto label_1cefec;
        }
    }
    ctx->pc = 0x1CEFE4u;
label_1cefe4:
    // 0x1cefe4: 0xc0685f0  jal         func_1A17C0
label_1cefe8:
    if (ctx->pc == 0x1CEFE8u) {
        ctx->pc = 0x1CEFECu;
        goto label_1cefec;
    }
    ctx->pc = 0x1CEFE4u;
    SET_GPR_U32(ctx, 31, 0x1CEFECu);
    ctx->pc = 0x1A17C0u;
    if (runtime->hasFunction(0x1A17C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A17C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEFECu; }
        if (ctx->pc != 0x1CEFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayerPartyCure__Fv_0x1a17c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEFECu; }
        if (ctx->pc != 0x1CEFECu) { return; }
    }
    ctx->pc = 0x1CEFECu;
label_1cefec:
    // 0x1cefec: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1cefecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1ceff0:
    // 0x1ceff0: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x1ceff0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_1ceff4:
    // 0x1ceff4: 0x3042fff8  andi        $v0, $v0, 0xFFF8
    ctx->pc = 0x1ceff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65528);
label_1ceff8:
    // 0x1ceff8: 0xc098a1c  jal         func_262870
label_1ceffc:
    if (ctx->pc == 0x1CEFFCu) {
        ctx->pc = 0x1CEFFCu;
            // 0x1ceffc: 0xa462000c  sh          $v0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1CF000u;
        goto label_1cf000;
    }
    ctx->pc = 0x1CEFF8u;
    SET_GPR_U32(ctx, 31, 0x1CF000u);
    ctx->pc = 0x1CEFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEFF8u;
            // 0x1ceffc: 0xa462000c  sh          $v0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262870u;
    if (runtime->hasFunction(0x262870u)) {
        auto targetFn = runtime->lookupFunction(0x262870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF000u; }
        if (ctx->pc != 0x1CF000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdEventTermination__Fv_0x262870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF000u; }
        if (ctx->pc != 0x1CF000u) { return; }
    }
    ctx->pc = 0x1CF000u;
label_1cf000:
    // 0x1cf000: 0xc0523b8  jal         func_148EE0
label_1cf004:
    if (ctx->pc == 0x1CF004u) {
        ctx->pc = 0x1CF008u;
        goto label_1cf008;
    }
    ctx->pc = 0x1CF000u;
    SET_GPR_U32(ctx, 31, 0x1CF008u);
    ctx->pc = 0x148EE0u;
    if (runtime->hasFunction(0x148EE0u)) {
        auto targetFn = runtime->lookupFunction(0x148EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF008u; }
        if (ctx->pc != 0x1CF008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BreakReadBG__Fv_0x148ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF008u; }
        if (ctx->pc != 0x1CF008u) { return; }
    }
    ctx->pc = 0x1CF008u;
label_1cf008:
    // 0x1cf008: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x1cf008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1cf00c:
    // 0x1cf00c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1cf00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_1cf010:
    // 0x1cf010: 0x34434d96  ori         $v1, $v0, 0x4D96
    ctx->pc = 0x1cf010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19862);
label_1cf014:
    // 0x1cf014: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cf014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cf018:
    // 0x1cf018: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1cf018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1cf01c:
    // 0x1cf01c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1cf01cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cf020:
    // 0x1cf020: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1cf024:
    if (ctx->pc == 0x1CF024u) {
        ctx->pc = 0x1CF024u;
            // 0x1cf024: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF028u;
        goto label_1cf028;
    }
    ctx->pc = 0x1CF020u;
    {
        const bool branch_taken_0x1cf020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF020u;
            // 0x1cf024: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf020) {
            ctx->pc = 0x1CF030u;
            goto label_1cf030;
        }
    }
    ctx->pc = 0x1CF028u;
label_1cf028:
    // 0x1cf028: 0xc0670f4  jal         func_19C3D0
label_1cf02c:
    if (ctx->pc == 0x1CF02Cu) {
        ctx->pc = 0x1CF030u;
        goto label_1cf030;
    }
    ctx->pc = 0x1CF028u;
    SET_GPR_U32(ctx, 31, 0x1CF030u);
    ctx->pc = 0x19C3D0u;
    if (runtime->hasFunction(0x19C3D0u)) {
        auto targetFn = runtime->lookupFunction(0x19C3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF030u; }
        if (ctx->pc != 0x1CF030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveChrNo__16CUserDataManagerFi_0x19c3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF030u; }
        if (ctx->pc != 0x1CF030u) { return; }
    }
    ctx->pc = 0x1CF030u;
label_1cf030:
    // 0x1cf030: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x1cf030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1cf034:
    // 0x1cf034: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1cf034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_1cf038:
    // 0x1cf038: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cf038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cf03c:
    // 0x1cf03c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1cf03cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_1cf040:
    // 0x1cf040: 0x84234d96  lh          $v1, 0x4D96($at)
    ctx->pc = 0x1cf040u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
label_1cf044:
    // 0x1cf044: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1cf048:
    if (ctx->pc == 0x1CF048u) {
        ctx->pc = 0x1CF048u;
            // 0x1cf048: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CF04Cu;
        goto label_1cf04c;
    }
    ctx->pc = 0x1CF044u;
    {
        const bool branch_taken_0x1cf044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF044u;
            // 0x1cf048: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf044) {
            ctx->pc = 0x1CF054u;
            goto label_1cf054;
        }
    }
    ctx->pc = 0x1CF04Cu;
label_1cf04c:
    // 0x1cf04c: 0xc0670f4  jal         func_19C3D0
label_1cf050:
    if (ctx->pc == 0x1CF050u) {
        ctx->pc = 0x1CF054u;
        goto label_1cf054;
    }
    ctx->pc = 0x1CF04Cu;
    SET_GPR_U32(ctx, 31, 0x1CF054u);
    ctx->pc = 0x19C3D0u;
    if (runtime->hasFunction(0x19C3D0u)) {
        auto targetFn = runtime->lookupFunction(0x19C3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF054u; }
        if (ctx->pc != 0x1CF054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveChrNo__16CUserDataManagerFi_0x19c3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF054u; }
        if (ctx->pc != 0x1CF054u) { return; }
    }
    ctx->pc = 0x1CF054u;
label_1cf054:
    // 0x1cf054: 0xc0a9fc0  jal         func_2A7F00
label_1cf058:
    if (ctx->pc == 0x1CF058u) {
        ctx->pc = 0x1CF058u;
            // 0x1cf058: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x1CF05Cu;
        goto label_1cf05c;
    }
    ctx->pc = 0x1CF054u;
    SET_GPR_U32(ctx, 31, 0x1CF05Cu);
    ctx->pc = 0x1CF058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF054u;
            // 0x1cf058: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7F00u;
    if (runtime->hasFunction(0x2A7F00u)) {
        auto targetFn = runtime->lookupFunction(0x2A7F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF05Cu; }
        if (ctx->pc != 0x1CF05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopSeSrc__6CSceneFv_0x2a7f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF05Cu; }
        if (ctx->pc != 0x1CF05Cu) { return; }
    }
    ctx->pc = 0x1CF05Cu;
label_1cf05c:
    // 0x1cf05c: 0xc0635f0  jal         func_18D7C0
label_1cf060:
    if (ctx->pc == 0x1CF060u) {
        ctx->pc = 0x1CF060u;
            // 0x1cf060: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CF064u;
        goto label_1cf064;
    }
    ctx->pc = 0x1CF05Cu;
    SET_GPR_U32(ctx, 31, 0x1CF064u);
    ctx->pc = 0x1CF060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF05Cu;
            // 0x1cf060: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF064u; }
        if (ctx->pc != 0x1CF064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF064u; }
        if (ctx->pc != 0x1CF064u) { return; }
    }
    ctx->pc = 0x1CF064u;
label_1cf064:
    // 0x1cf064: 0xc0633f8  jal         func_18CFE0
label_1cf068:
    if (ctx->pc == 0x1CF068u) {
        ctx->pc = 0x1CF068u;
            // 0x1cf068: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CF06Cu;
        goto label_1cf06c;
    }
    ctx->pc = 0x1CF064u;
    SET_GPR_U32(ctx, 31, 0x1CF06Cu);
    ctx->pc = 0x1CF068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF064u;
            // 0x1cf068: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CFE0u;
    if (runtime->hasFunction(0x18CFE0u)) {
        auto targetFn = runtime->lookupFunction(0x18CFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF06Cu; }
        if (ctx->pc != 0x1CF06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStopVoice__Fi_0x18cfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF06Cu; }
        if (ctx->pc != 0x1CF06Cu) { return; }
    }
    ctx->pc = 0x1CF06Cu;
label_1cf06c:
    // 0x1cf06c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf070:
    // 0x1cf070: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cf070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cf074:
    // 0x1cf074: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cf074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cf078:
    // 0x1cf078: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cf078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cf07c:
    // 0x1cf07c: 0x3e00008  jr          $ra
label_1cf080:
    if (ctx->pc == 0x1CF080u) {
        ctx->pc = 0x1CF080u;
            // 0x1cf080: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->pc = 0x1CF084u;
        goto label_fallthrough_0x1cf07c;
    }
    ctx->pc = 0x1CF07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF07Cu;
            // 0x1cf080: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1cf07c:
    ctx->pc = 0x1CF084u;
}
