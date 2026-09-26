#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__15CMenuCostumeSelFv
// Address: 0x2bd640 - 0x2bdf14
void Draw__15CMenuCostumeSelFv_0x2bd640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__15CMenuCostumeSelFv_0x2bd640");
#endif

    switch (ctx->pc) {
        case 0x2bd640u: goto label_2bd640;
        case 0x2bd644u: goto label_2bd644;
        case 0x2bd648u: goto label_2bd648;
        case 0x2bd64cu: goto label_2bd64c;
        case 0x2bd650u: goto label_2bd650;
        case 0x2bd654u: goto label_2bd654;
        case 0x2bd658u: goto label_2bd658;
        case 0x2bd65cu: goto label_2bd65c;
        case 0x2bd660u: goto label_2bd660;
        case 0x2bd664u: goto label_2bd664;
        case 0x2bd668u: goto label_2bd668;
        case 0x2bd66cu: goto label_2bd66c;
        case 0x2bd670u: goto label_2bd670;
        case 0x2bd674u: goto label_2bd674;
        case 0x2bd678u: goto label_2bd678;
        case 0x2bd67cu: goto label_2bd67c;
        case 0x2bd680u: goto label_2bd680;
        case 0x2bd684u: goto label_2bd684;
        case 0x2bd688u: goto label_2bd688;
        case 0x2bd68cu: goto label_2bd68c;
        case 0x2bd690u: goto label_2bd690;
        case 0x2bd694u: goto label_2bd694;
        case 0x2bd698u: goto label_2bd698;
        case 0x2bd69cu: goto label_2bd69c;
        case 0x2bd6a0u: goto label_2bd6a0;
        case 0x2bd6a4u: goto label_2bd6a4;
        case 0x2bd6a8u: goto label_2bd6a8;
        case 0x2bd6acu: goto label_2bd6ac;
        case 0x2bd6b0u: goto label_2bd6b0;
        case 0x2bd6b4u: goto label_2bd6b4;
        case 0x2bd6b8u: goto label_2bd6b8;
        case 0x2bd6bcu: goto label_2bd6bc;
        case 0x2bd6c0u: goto label_2bd6c0;
        case 0x2bd6c4u: goto label_2bd6c4;
        case 0x2bd6c8u: goto label_2bd6c8;
        case 0x2bd6ccu: goto label_2bd6cc;
        case 0x2bd6d0u: goto label_2bd6d0;
        case 0x2bd6d4u: goto label_2bd6d4;
        case 0x2bd6d8u: goto label_2bd6d8;
        case 0x2bd6dcu: goto label_2bd6dc;
        case 0x2bd6e0u: goto label_2bd6e0;
        case 0x2bd6e4u: goto label_2bd6e4;
        case 0x2bd6e8u: goto label_2bd6e8;
        case 0x2bd6ecu: goto label_2bd6ec;
        case 0x2bd6f0u: goto label_2bd6f0;
        case 0x2bd6f4u: goto label_2bd6f4;
        case 0x2bd6f8u: goto label_2bd6f8;
        case 0x2bd6fcu: goto label_2bd6fc;
        case 0x2bd700u: goto label_2bd700;
        case 0x2bd704u: goto label_2bd704;
        case 0x2bd708u: goto label_2bd708;
        case 0x2bd70cu: goto label_2bd70c;
        case 0x2bd710u: goto label_2bd710;
        case 0x2bd714u: goto label_2bd714;
        case 0x2bd718u: goto label_2bd718;
        case 0x2bd71cu: goto label_2bd71c;
        case 0x2bd720u: goto label_2bd720;
        case 0x2bd724u: goto label_2bd724;
        case 0x2bd728u: goto label_2bd728;
        case 0x2bd72cu: goto label_2bd72c;
        case 0x2bd730u: goto label_2bd730;
        case 0x2bd734u: goto label_2bd734;
        case 0x2bd738u: goto label_2bd738;
        case 0x2bd73cu: goto label_2bd73c;
        case 0x2bd740u: goto label_2bd740;
        case 0x2bd744u: goto label_2bd744;
        case 0x2bd748u: goto label_2bd748;
        case 0x2bd74cu: goto label_2bd74c;
        case 0x2bd750u: goto label_2bd750;
        case 0x2bd754u: goto label_2bd754;
        case 0x2bd758u: goto label_2bd758;
        case 0x2bd75cu: goto label_2bd75c;
        case 0x2bd760u: goto label_2bd760;
        case 0x2bd764u: goto label_2bd764;
        case 0x2bd768u: goto label_2bd768;
        case 0x2bd76cu: goto label_2bd76c;
        case 0x2bd770u: goto label_2bd770;
        case 0x2bd774u: goto label_2bd774;
        case 0x2bd778u: goto label_2bd778;
        case 0x2bd77cu: goto label_2bd77c;
        case 0x2bd780u: goto label_2bd780;
        case 0x2bd784u: goto label_2bd784;
        case 0x2bd788u: goto label_2bd788;
        case 0x2bd78cu: goto label_2bd78c;
        case 0x2bd790u: goto label_2bd790;
        case 0x2bd794u: goto label_2bd794;
        case 0x2bd798u: goto label_2bd798;
        case 0x2bd79cu: goto label_2bd79c;
        case 0x2bd7a0u: goto label_2bd7a0;
        case 0x2bd7a4u: goto label_2bd7a4;
        case 0x2bd7a8u: goto label_2bd7a8;
        case 0x2bd7acu: goto label_2bd7ac;
        case 0x2bd7b0u: goto label_2bd7b0;
        case 0x2bd7b4u: goto label_2bd7b4;
        case 0x2bd7b8u: goto label_2bd7b8;
        case 0x2bd7bcu: goto label_2bd7bc;
        case 0x2bd7c0u: goto label_2bd7c0;
        case 0x2bd7c4u: goto label_2bd7c4;
        case 0x2bd7c8u: goto label_2bd7c8;
        case 0x2bd7ccu: goto label_2bd7cc;
        case 0x2bd7d0u: goto label_2bd7d0;
        case 0x2bd7d4u: goto label_2bd7d4;
        case 0x2bd7d8u: goto label_2bd7d8;
        case 0x2bd7dcu: goto label_2bd7dc;
        case 0x2bd7e0u: goto label_2bd7e0;
        case 0x2bd7e4u: goto label_2bd7e4;
        case 0x2bd7e8u: goto label_2bd7e8;
        case 0x2bd7ecu: goto label_2bd7ec;
        case 0x2bd7f0u: goto label_2bd7f0;
        case 0x2bd7f4u: goto label_2bd7f4;
        case 0x2bd7f8u: goto label_2bd7f8;
        case 0x2bd7fcu: goto label_2bd7fc;
        case 0x2bd800u: goto label_2bd800;
        case 0x2bd804u: goto label_2bd804;
        case 0x2bd808u: goto label_2bd808;
        case 0x2bd80cu: goto label_2bd80c;
        case 0x2bd810u: goto label_2bd810;
        case 0x2bd814u: goto label_2bd814;
        case 0x2bd818u: goto label_2bd818;
        case 0x2bd81cu: goto label_2bd81c;
        case 0x2bd820u: goto label_2bd820;
        case 0x2bd824u: goto label_2bd824;
        case 0x2bd828u: goto label_2bd828;
        case 0x2bd82cu: goto label_2bd82c;
        case 0x2bd830u: goto label_2bd830;
        case 0x2bd834u: goto label_2bd834;
        case 0x2bd838u: goto label_2bd838;
        case 0x2bd83cu: goto label_2bd83c;
        case 0x2bd840u: goto label_2bd840;
        case 0x2bd844u: goto label_2bd844;
        case 0x2bd848u: goto label_2bd848;
        case 0x2bd84cu: goto label_2bd84c;
        case 0x2bd850u: goto label_2bd850;
        case 0x2bd854u: goto label_2bd854;
        case 0x2bd858u: goto label_2bd858;
        case 0x2bd85cu: goto label_2bd85c;
        case 0x2bd860u: goto label_2bd860;
        case 0x2bd864u: goto label_2bd864;
        case 0x2bd868u: goto label_2bd868;
        case 0x2bd86cu: goto label_2bd86c;
        case 0x2bd870u: goto label_2bd870;
        case 0x2bd874u: goto label_2bd874;
        case 0x2bd878u: goto label_2bd878;
        case 0x2bd87cu: goto label_2bd87c;
        case 0x2bd880u: goto label_2bd880;
        case 0x2bd884u: goto label_2bd884;
        case 0x2bd888u: goto label_2bd888;
        case 0x2bd88cu: goto label_2bd88c;
        case 0x2bd890u: goto label_2bd890;
        case 0x2bd894u: goto label_2bd894;
        case 0x2bd898u: goto label_2bd898;
        case 0x2bd89cu: goto label_2bd89c;
        case 0x2bd8a0u: goto label_2bd8a0;
        case 0x2bd8a4u: goto label_2bd8a4;
        case 0x2bd8a8u: goto label_2bd8a8;
        case 0x2bd8acu: goto label_2bd8ac;
        case 0x2bd8b0u: goto label_2bd8b0;
        case 0x2bd8b4u: goto label_2bd8b4;
        case 0x2bd8b8u: goto label_2bd8b8;
        case 0x2bd8bcu: goto label_2bd8bc;
        case 0x2bd8c0u: goto label_2bd8c0;
        case 0x2bd8c4u: goto label_2bd8c4;
        case 0x2bd8c8u: goto label_2bd8c8;
        case 0x2bd8ccu: goto label_2bd8cc;
        case 0x2bd8d0u: goto label_2bd8d0;
        case 0x2bd8d4u: goto label_2bd8d4;
        case 0x2bd8d8u: goto label_2bd8d8;
        case 0x2bd8dcu: goto label_2bd8dc;
        case 0x2bd8e0u: goto label_2bd8e0;
        case 0x2bd8e4u: goto label_2bd8e4;
        case 0x2bd8e8u: goto label_2bd8e8;
        case 0x2bd8ecu: goto label_2bd8ec;
        case 0x2bd8f0u: goto label_2bd8f0;
        case 0x2bd8f4u: goto label_2bd8f4;
        case 0x2bd8f8u: goto label_2bd8f8;
        case 0x2bd8fcu: goto label_2bd8fc;
        case 0x2bd900u: goto label_2bd900;
        case 0x2bd904u: goto label_2bd904;
        case 0x2bd908u: goto label_2bd908;
        case 0x2bd90cu: goto label_2bd90c;
        case 0x2bd910u: goto label_2bd910;
        case 0x2bd914u: goto label_2bd914;
        case 0x2bd918u: goto label_2bd918;
        case 0x2bd91cu: goto label_2bd91c;
        case 0x2bd920u: goto label_2bd920;
        case 0x2bd924u: goto label_2bd924;
        case 0x2bd928u: goto label_2bd928;
        case 0x2bd92cu: goto label_2bd92c;
        case 0x2bd930u: goto label_2bd930;
        case 0x2bd934u: goto label_2bd934;
        case 0x2bd938u: goto label_2bd938;
        case 0x2bd93cu: goto label_2bd93c;
        case 0x2bd940u: goto label_2bd940;
        case 0x2bd944u: goto label_2bd944;
        case 0x2bd948u: goto label_2bd948;
        case 0x2bd94cu: goto label_2bd94c;
        case 0x2bd950u: goto label_2bd950;
        case 0x2bd954u: goto label_2bd954;
        case 0x2bd958u: goto label_2bd958;
        case 0x2bd95cu: goto label_2bd95c;
        case 0x2bd960u: goto label_2bd960;
        case 0x2bd964u: goto label_2bd964;
        case 0x2bd968u: goto label_2bd968;
        case 0x2bd96cu: goto label_2bd96c;
        case 0x2bd970u: goto label_2bd970;
        case 0x2bd974u: goto label_2bd974;
        case 0x2bd978u: goto label_2bd978;
        case 0x2bd97cu: goto label_2bd97c;
        case 0x2bd980u: goto label_2bd980;
        case 0x2bd984u: goto label_2bd984;
        case 0x2bd988u: goto label_2bd988;
        case 0x2bd98cu: goto label_2bd98c;
        case 0x2bd990u: goto label_2bd990;
        case 0x2bd994u: goto label_2bd994;
        case 0x2bd998u: goto label_2bd998;
        case 0x2bd99cu: goto label_2bd99c;
        case 0x2bd9a0u: goto label_2bd9a0;
        case 0x2bd9a4u: goto label_2bd9a4;
        case 0x2bd9a8u: goto label_2bd9a8;
        case 0x2bd9acu: goto label_2bd9ac;
        case 0x2bd9b0u: goto label_2bd9b0;
        case 0x2bd9b4u: goto label_2bd9b4;
        case 0x2bd9b8u: goto label_2bd9b8;
        case 0x2bd9bcu: goto label_2bd9bc;
        case 0x2bd9c0u: goto label_2bd9c0;
        case 0x2bd9c4u: goto label_2bd9c4;
        case 0x2bd9c8u: goto label_2bd9c8;
        case 0x2bd9ccu: goto label_2bd9cc;
        case 0x2bd9d0u: goto label_2bd9d0;
        case 0x2bd9d4u: goto label_2bd9d4;
        case 0x2bd9d8u: goto label_2bd9d8;
        case 0x2bd9dcu: goto label_2bd9dc;
        case 0x2bd9e0u: goto label_2bd9e0;
        case 0x2bd9e4u: goto label_2bd9e4;
        case 0x2bd9e8u: goto label_2bd9e8;
        case 0x2bd9ecu: goto label_2bd9ec;
        case 0x2bd9f0u: goto label_2bd9f0;
        case 0x2bd9f4u: goto label_2bd9f4;
        case 0x2bd9f8u: goto label_2bd9f8;
        case 0x2bd9fcu: goto label_2bd9fc;
        case 0x2bda00u: goto label_2bda00;
        case 0x2bda04u: goto label_2bda04;
        case 0x2bda08u: goto label_2bda08;
        case 0x2bda0cu: goto label_2bda0c;
        case 0x2bda10u: goto label_2bda10;
        case 0x2bda14u: goto label_2bda14;
        case 0x2bda18u: goto label_2bda18;
        case 0x2bda1cu: goto label_2bda1c;
        case 0x2bda20u: goto label_2bda20;
        case 0x2bda24u: goto label_2bda24;
        case 0x2bda28u: goto label_2bda28;
        case 0x2bda2cu: goto label_2bda2c;
        case 0x2bda30u: goto label_2bda30;
        case 0x2bda34u: goto label_2bda34;
        case 0x2bda38u: goto label_2bda38;
        case 0x2bda3cu: goto label_2bda3c;
        case 0x2bda40u: goto label_2bda40;
        case 0x2bda44u: goto label_2bda44;
        case 0x2bda48u: goto label_2bda48;
        case 0x2bda4cu: goto label_2bda4c;
        case 0x2bda50u: goto label_2bda50;
        case 0x2bda54u: goto label_2bda54;
        case 0x2bda58u: goto label_2bda58;
        case 0x2bda5cu: goto label_2bda5c;
        case 0x2bda60u: goto label_2bda60;
        case 0x2bda64u: goto label_2bda64;
        case 0x2bda68u: goto label_2bda68;
        case 0x2bda6cu: goto label_2bda6c;
        case 0x2bda70u: goto label_2bda70;
        case 0x2bda74u: goto label_2bda74;
        case 0x2bda78u: goto label_2bda78;
        case 0x2bda7cu: goto label_2bda7c;
        case 0x2bda80u: goto label_2bda80;
        case 0x2bda84u: goto label_2bda84;
        case 0x2bda88u: goto label_2bda88;
        case 0x2bda8cu: goto label_2bda8c;
        case 0x2bda90u: goto label_2bda90;
        case 0x2bda94u: goto label_2bda94;
        case 0x2bda98u: goto label_2bda98;
        case 0x2bda9cu: goto label_2bda9c;
        case 0x2bdaa0u: goto label_2bdaa0;
        case 0x2bdaa4u: goto label_2bdaa4;
        case 0x2bdaa8u: goto label_2bdaa8;
        case 0x2bdaacu: goto label_2bdaac;
        case 0x2bdab0u: goto label_2bdab0;
        case 0x2bdab4u: goto label_2bdab4;
        case 0x2bdab8u: goto label_2bdab8;
        case 0x2bdabcu: goto label_2bdabc;
        case 0x2bdac0u: goto label_2bdac0;
        case 0x2bdac4u: goto label_2bdac4;
        case 0x2bdac8u: goto label_2bdac8;
        case 0x2bdaccu: goto label_2bdacc;
        case 0x2bdad0u: goto label_2bdad0;
        case 0x2bdad4u: goto label_2bdad4;
        case 0x2bdad8u: goto label_2bdad8;
        case 0x2bdadcu: goto label_2bdadc;
        case 0x2bdae0u: goto label_2bdae0;
        case 0x2bdae4u: goto label_2bdae4;
        case 0x2bdae8u: goto label_2bdae8;
        case 0x2bdaecu: goto label_2bdaec;
        case 0x2bdaf0u: goto label_2bdaf0;
        case 0x2bdaf4u: goto label_2bdaf4;
        case 0x2bdaf8u: goto label_2bdaf8;
        case 0x2bdafcu: goto label_2bdafc;
        case 0x2bdb00u: goto label_2bdb00;
        case 0x2bdb04u: goto label_2bdb04;
        case 0x2bdb08u: goto label_2bdb08;
        case 0x2bdb0cu: goto label_2bdb0c;
        case 0x2bdb10u: goto label_2bdb10;
        case 0x2bdb14u: goto label_2bdb14;
        case 0x2bdb18u: goto label_2bdb18;
        case 0x2bdb1cu: goto label_2bdb1c;
        case 0x2bdb20u: goto label_2bdb20;
        case 0x2bdb24u: goto label_2bdb24;
        case 0x2bdb28u: goto label_2bdb28;
        case 0x2bdb2cu: goto label_2bdb2c;
        case 0x2bdb30u: goto label_2bdb30;
        case 0x2bdb34u: goto label_2bdb34;
        case 0x2bdb38u: goto label_2bdb38;
        case 0x2bdb3cu: goto label_2bdb3c;
        case 0x2bdb40u: goto label_2bdb40;
        case 0x2bdb44u: goto label_2bdb44;
        case 0x2bdb48u: goto label_2bdb48;
        case 0x2bdb4cu: goto label_2bdb4c;
        case 0x2bdb50u: goto label_2bdb50;
        case 0x2bdb54u: goto label_2bdb54;
        case 0x2bdb58u: goto label_2bdb58;
        case 0x2bdb5cu: goto label_2bdb5c;
        case 0x2bdb60u: goto label_2bdb60;
        case 0x2bdb64u: goto label_2bdb64;
        case 0x2bdb68u: goto label_2bdb68;
        case 0x2bdb6cu: goto label_2bdb6c;
        case 0x2bdb70u: goto label_2bdb70;
        case 0x2bdb74u: goto label_2bdb74;
        case 0x2bdb78u: goto label_2bdb78;
        case 0x2bdb7cu: goto label_2bdb7c;
        case 0x2bdb80u: goto label_2bdb80;
        case 0x2bdb84u: goto label_2bdb84;
        case 0x2bdb88u: goto label_2bdb88;
        case 0x2bdb8cu: goto label_2bdb8c;
        case 0x2bdb90u: goto label_2bdb90;
        case 0x2bdb94u: goto label_2bdb94;
        case 0x2bdb98u: goto label_2bdb98;
        case 0x2bdb9cu: goto label_2bdb9c;
        case 0x2bdba0u: goto label_2bdba0;
        case 0x2bdba4u: goto label_2bdba4;
        case 0x2bdba8u: goto label_2bdba8;
        case 0x2bdbacu: goto label_2bdbac;
        case 0x2bdbb0u: goto label_2bdbb0;
        case 0x2bdbb4u: goto label_2bdbb4;
        case 0x2bdbb8u: goto label_2bdbb8;
        case 0x2bdbbcu: goto label_2bdbbc;
        case 0x2bdbc0u: goto label_2bdbc0;
        case 0x2bdbc4u: goto label_2bdbc4;
        case 0x2bdbc8u: goto label_2bdbc8;
        case 0x2bdbccu: goto label_2bdbcc;
        case 0x2bdbd0u: goto label_2bdbd0;
        case 0x2bdbd4u: goto label_2bdbd4;
        case 0x2bdbd8u: goto label_2bdbd8;
        case 0x2bdbdcu: goto label_2bdbdc;
        case 0x2bdbe0u: goto label_2bdbe0;
        case 0x2bdbe4u: goto label_2bdbe4;
        case 0x2bdbe8u: goto label_2bdbe8;
        case 0x2bdbecu: goto label_2bdbec;
        case 0x2bdbf0u: goto label_2bdbf0;
        case 0x2bdbf4u: goto label_2bdbf4;
        case 0x2bdbf8u: goto label_2bdbf8;
        case 0x2bdbfcu: goto label_2bdbfc;
        case 0x2bdc00u: goto label_2bdc00;
        case 0x2bdc04u: goto label_2bdc04;
        case 0x2bdc08u: goto label_2bdc08;
        case 0x2bdc0cu: goto label_2bdc0c;
        case 0x2bdc10u: goto label_2bdc10;
        case 0x2bdc14u: goto label_2bdc14;
        case 0x2bdc18u: goto label_2bdc18;
        case 0x2bdc1cu: goto label_2bdc1c;
        case 0x2bdc20u: goto label_2bdc20;
        case 0x2bdc24u: goto label_2bdc24;
        case 0x2bdc28u: goto label_2bdc28;
        case 0x2bdc2cu: goto label_2bdc2c;
        case 0x2bdc30u: goto label_2bdc30;
        case 0x2bdc34u: goto label_2bdc34;
        case 0x2bdc38u: goto label_2bdc38;
        case 0x2bdc3cu: goto label_2bdc3c;
        case 0x2bdc40u: goto label_2bdc40;
        case 0x2bdc44u: goto label_2bdc44;
        case 0x2bdc48u: goto label_2bdc48;
        case 0x2bdc4cu: goto label_2bdc4c;
        case 0x2bdc50u: goto label_2bdc50;
        case 0x2bdc54u: goto label_2bdc54;
        case 0x2bdc58u: goto label_2bdc58;
        case 0x2bdc5cu: goto label_2bdc5c;
        case 0x2bdc60u: goto label_2bdc60;
        case 0x2bdc64u: goto label_2bdc64;
        case 0x2bdc68u: goto label_2bdc68;
        case 0x2bdc6cu: goto label_2bdc6c;
        case 0x2bdc70u: goto label_2bdc70;
        case 0x2bdc74u: goto label_2bdc74;
        case 0x2bdc78u: goto label_2bdc78;
        case 0x2bdc7cu: goto label_2bdc7c;
        case 0x2bdc80u: goto label_2bdc80;
        case 0x2bdc84u: goto label_2bdc84;
        case 0x2bdc88u: goto label_2bdc88;
        case 0x2bdc8cu: goto label_2bdc8c;
        case 0x2bdc90u: goto label_2bdc90;
        case 0x2bdc94u: goto label_2bdc94;
        case 0x2bdc98u: goto label_2bdc98;
        case 0x2bdc9cu: goto label_2bdc9c;
        case 0x2bdca0u: goto label_2bdca0;
        case 0x2bdca4u: goto label_2bdca4;
        case 0x2bdca8u: goto label_2bdca8;
        case 0x2bdcacu: goto label_2bdcac;
        case 0x2bdcb0u: goto label_2bdcb0;
        case 0x2bdcb4u: goto label_2bdcb4;
        case 0x2bdcb8u: goto label_2bdcb8;
        case 0x2bdcbcu: goto label_2bdcbc;
        case 0x2bdcc0u: goto label_2bdcc0;
        case 0x2bdcc4u: goto label_2bdcc4;
        case 0x2bdcc8u: goto label_2bdcc8;
        case 0x2bdcccu: goto label_2bdccc;
        case 0x2bdcd0u: goto label_2bdcd0;
        case 0x2bdcd4u: goto label_2bdcd4;
        case 0x2bdcd8u: goto label_2bdcd8;
        case 0x2bdcdcu: goto label_2bdcdc;
        case 0x2bdce0u: goto label_2bdce0;
        case 0x2bdce4u: goto label_2bdce4;
        case 0x2bdce8u: goto label_2bdce8;
        case 0x2bdcecu: goto label_2bdcec;
        case 0x2bdcf0u: goto label_2bdcf0;
        case 0x2bdcf4u: goto label_2bdcf4;
        case 0x2bdcf8u: goto label_2bdcf8;
        case 0x2bdcfcu: goto label_2bdcfc;
        case 0x2bdd00u: goto label_2bdd00;
        case 0x2bdd04u: goto label_2bdd04;
        case 0x2bdd08u: goto label_2bdd08;
        case 0x2bdd0cu: goto label_2bdd0c;
        case 0x2bdd10u: goto label_2bdd10;
        case 0x2bdd14u: goto label_2bdd14;
        case 0x2bdd18u: goto label_2bdd18;
        case 0x2bdd1cu: goto label_2bdd1c;
        case 0x2bdd20u: goto label_2bdd20;
        case 0x2bdd24u: goto label_2bdd24;
        case 0x2bdd28u: goto label_2bdd28;
        case 0x2bdd2cu: goto label_2bdd2c;
        case 0x2bdd30u: goto label_2bdd30;
        case 0x2bdd34u: goto label_2bdd34;
        case 0x2bdd38u: goto label_2bdd38;
        case 0x2bdd3cu: goto label_2bdd3c;
        case 0x2bdd40u: goto label_2bdd40;
        case 0x2bdd44u: goto label_2bdd44;
        case 0x2bdd48u: goto label_2bdd48;
        case 0x2bdd4cu: goto label_2bdd4c;
        case 0x2bdd50u: goto label_2bdd50;
        case 0x2bdd54u: goto label_2bdd54;
        case 0x2bdd58u: goto label_2bdd58;
        case 0x2bdd5cu: goto label_2bdd5c;
        case 0x2bdd60u: goto label_2bdd60;
        case 0x2bdd64u: goto label_2bdd64;
        case 0x2bdd68u: goto label_2bdd68;
        case 0x2bdd6cu: goto label_2bdd6c;
        case 0x2bdd70u: goto label_2bdd70;
        case 0x2bdd74u: goto label_2bdd74;
        case 0x2bdd78u: goto label_2bdd78;
        case 0x2bdd7cu: goto label_2bdd7c;
        case 0x2bdd80u: goto label_2bdd80;
        case 0x2bdd84u: goto label_2bdd84;
        case 0x2bdd88u: goto label_2bdd88;
        case 0x2bdd8cu: goto label_2bdd8c;
        case 0x2bdd90u: goto label_2bdd90;
        case 0x2bdd94u: goto label_2bdd94;
        case 0x2bdd98u: goto label_2bdd98;
        case 0x2bdd9cu: goto label_2bdd9c;
        case 0x2bdda0u: goto label_2bdda0;
        case 0x2bdda4u: goto label_2bdda4;
        case 0x2bdda8u: goto label_2bdda8;
        case 0x2bddacu: goto label_2bddac;
        case 0x2bddb0u: goto label_2bddb0;
        case 0x2bddb4u: goto label_2bddb4;
        case 0x2bddb8u: goto label_2bddb8;
        case 0x2bddbcu: goto label_2bddbc;
        case 0x2bddc0u: goto label_2bddc0;
        case 0x2bddc4u: goto label_2bddc4;
        case 0x2bddc8u: goto label_2bddc8;
        case 0x2bddccu: goto label_2bddcc;
        case 0x2bddd0u: goto label_2bddd0;
        case 0x2bddd4u: goto label_2bddd4;
        case 0x2bddd8u: goto label_2bddd8;
        case 0x2bdddcu: goto label_2bdddc;
        case 0x2bdde0u: goto label_2bdde0;
        case 0x2bdde4u: goto label_2bdde4;
        case 0x2bdde8u: goto label_2bdde8;
        case 0x2bddecu: goto label_2bddec;
        case 0x2bddf0u: goto label_2bddf0;
        case 0x2bddf4u: goto label_2bddf4;
        case 0x2bddf8u: goto label_2bddf8;
        case 0x2bddfcu: goto label_2bddfc;
        case 0x2bde00u: goto label_2bde00;
        case 0x2bde04u: goto label_2bde04;
        case 0x2bde08u: goto label_2bde08;
        case 0x2bde0cu: goto label_2bde0c;
        case 0x2bde10u: goto label_2bde10;
        case 0x2bde14u: goto label_2bde14;
        case 0x2bde18u: goto label_2bde18;
        case 0x2bde1cu: goto label_2bde1c;
        case 0x2bde20u: goto label_2bde20;
        case 0x2bde24u: goto label_2bde24;
        case 0x2bde28u: goto label_2bde28;
        case 0x2bde2cu: goto label_2bde2c;
        case 0x2bde30u: goto label_2bde30;
        case 0x2bde34u: goto label_2bde34;
        case 0x2bde38u: goto label_2bde38;
        case 0x2bde3cu: goto label_2bde3c;
        case 0x2bde40u: goto label_2bde40;
        case 0x2bde44u: goto label_2bde44;
        case 0x2bde48u: goto label_2bde48;
        case 0x2bde4cu: goto label_2bde4c;
        case 0x2bde50u: goto label_2bde50;
        case 0x2bde54u: goto label_2bde54;
        case 0x2bde58u: goto label_2bde58;
        case 0x2bde5cu: goto label_2bde5c;
        case 0x2bde60u: goto label_2bde60;
        case 0x2bde64u: goto label_2bde64;
        case 0x2bde68u: goto label_2bde68;
        case 0x2bde6cu: goto label_2bde6c;
        case 0x2bde70u: goto label_2bde70;
        case 0x2bde74u: goto label_2bde74;
        case 0x2bde78u: goto label_2bde78;
        case 0x2bde7cu: goto label_2bde7c;
        case 0x2bde80u: goto label_2bde80;
        case 0x2bde84u: goto label_2bde84;
        case 0x2bde88u: goto label_2bde88;
        case 0x2bde8cu: goto label_2bde8c;
        case 0x2bde90u: goto label_2bde90;
        case 0x2bde94u: goto label_2bde94;
        case 0x2bde98u: goto label_2bde98;
        case 0x2bde9cu: goto label_2bde9c;
        case 0x2bdea0u: goto label_2bdea0;
        case 0x2bdea4u: goto label_2bdea4;
        case 0x2bdea8u: goto label_2bdea8;
        case 0x2bdeacu: goto label_2bdeac;
        case 0x2bdeb0u: goto label_2bdeb0;
        case 0x2bdeb4u: goto label_2bdeb4;
        case 0x2bdeb8u: goto label_2bdeb8;
        case 0x2bdebcu: goto label_2bdebc;
        case 0x2bdec0u: goto label_2bdec0;
        case 0x2bdec4u: goto label_2bdec4;
        case 0x2bdec8u: goto label_2bdec8;
        case 0x2bdeccu: goto label_2bdecc;
        case 0x2bded0u: goto label_2bded0;
        case 0x2bded4u: goto label_2bded4;
        case 0x2bded8u: goto label_2bded8;
        case 0x2bdedcu: goto label_2bdedc;
        case 0x2bdee0u: goto label_2bdee0;
        case 0x2bdee4u: goto label_2bdee4;
        case 0x2bdee8u: goto label_2bdee8;
        case 0x2bdeecu: goto label_2bdeec;
        case 0x2bdef0u: goto label_2bdef0;
        case 0x2bdef4u: goto label_2bdef4;
        case 0x2bdef8u: goto label_2bdef8;
        case 0x2bdefcu: goto label_2bdefc;
        case 0x2bdf00u: goto label_2bdf00;
        case 0x2bdf04u: goto label_2bdf04;
        case 0x2bdf08u: goto label_2bdf08;
        case 0x2bdf0cu: goto label_2bdf0c;
        case 0x2bdf10u: goto label_2bdf10;
        default: break;
    }

    ctx->pc = 0x2bd640u;

label_2bd640:
    // 0x2bd640: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x2bd640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
label_2bd644:
    // 0x2bd644: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2bd644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2bd648:
    // 0x2bd648: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2bd648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2bd64c:
    // 0x2bd64c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2bd64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2bd650:
    // 0x2bd650: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2bd650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2bd654:
    // 0x2bd654: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2bd654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2bd658:
    // 0x2bd658: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2bd658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2bd65c:
    // 0x2bd65c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2bd65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2bd660:
    // 0x2bd660: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bd660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2bd664:
    // 0x2bd664: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bd664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2bd668:
    // 0x2bd668: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2bd668u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2bd66c:
    // 0x2bd66c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2bd66cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2bd670:
    // 0x2bd670: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2bd670u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2bd674:
    // 0x2bd674: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2bd674u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2bd678:
    // 0x2bd678: 0x8c8302d4  lw          $v1, 0x2D4($a0)
    ctx->pc = 0x2bd678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 724)));
label_2bd67c:
    // 0x2bd67c: 0x10600216  beqz        $v1, . + 4 + (0x216 << 2)
label_2bd680:
    if (ctx->pc == 0x2BD680u) {
        ctx->pc = 0x2BD680u;
            // 0x2bd680: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD684u;
        goto label_2bd684;
    }
    ctx->pc = 0x2BD67Cu;
    {
        const bool branch_taken_0x2bd67c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD67Cu;
            // 0x2bd680: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd67c) {
            ctx->pc = 0x2BDED8u;
            goto label_2bded8;
        }
    }
    ctx->pc = 0x2BD684u;
label_2bd684:
    // 0x2bd684: 0x8e990170  lw          $t9, 0x170($s4)
    ctx->pc = 0x2bd684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 368)));
label_2bd688:
    // 0x2bd688: 0x26840110  addiu       $a0, $s4, 0x110
    ctx->pc = 0x2bd688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
label_2bd68c:
    // 0x2bd68c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2bd68cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2bd690:
    // 0x2bd690: 0x320f809  jalr        $t9
label_2bd694:
    if (ctx->pc == 0x2BD694u) {
        ctx->pc = 0x2BD694u;
            // 0x2bd694: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2BD698u;
        goto label_2bd698;
    }
    ctx->pc = 0x2BD690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BD698u);
        ctx->pc = 0x2BD694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD690u;
            // 0x2bd694: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BD698u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BD698u; }
            if (ctx->pc != 0x2BD698u) { return; }
        }
        }
    }
    ctx->pc = 0x2BD698u;
label_2bd698:
    // 0x2bd698: 0x26840110  addiu       $a0, $s4, 0x110
    ctx->pc = 0x2bd698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
label_2bd69c:
    // 0x2bd69c: 0xc04c574  jal         func_1315D0
label_2bd6a0:
    if (ctx->pc == 0x2BD6A0u) {
        ctx->pc = 0x2BD6A0u;
            // 0x2bd6a0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2BD6A4u;
        goto label_2bd6a4;
    }
    ctx->pc = 0x2BD69Cu;
    SET_GPR_U32(ctx, 31, 0x2BD6A4u);
    ctx->pc = 0x2BD6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD69Cu;
            // 0x2bd6a0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD6A4u; }
        if (ctx->pc != 0x2BD6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD6A4u; }
        if (ctx->pc != 0x2BD6A4u) { return; }
    }
    ctx->pc = 0x2BD6A4u;
label_2bd6a4:
    // 0x2bd6a4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2bd6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2bd6a8:
    // 0x2bd6a8: 0xc050e28  jal         func_1438A0
label_2bd6ac:
    if (ctx->pc == 0x2BD6ACu) {
        ctx->pc = 0x2BD6ACu;
            // 0x2bd6ac: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2BD6B0u;
        goto label_2bd6b0;
    }
    ctx->pc = 0x2BD6A8u;
    SET_GPR_U32(ctx, 31, 0x2BD6B0u);
    ctx->pc = 0x2BD6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD6A8u;
            // 0x2bd6ac: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438A0u;
    if (runtime->hasFunction(0x1438A0u)) {
        auto targetFn = runtime->lookupFunction(0x1438A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD6B0u; }
        if (ctx->pc != 0x2BD6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetViewMatrix__FPA4_fPf_0x1438a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD6B0u; }
        if (ctx->pc != 0x2BD6B0u) { return; }
    }
    ctx->pc = 0x2BD6B0u;
label_2bd6b0:
    // 0x2bd6b0: 0x8e8202d4  lw          $v0, 0x2D4($s4)
    ctx->pc = 0x2bd6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 724)));
label_2bd6b4:
    // 0x2bd6b4: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x2bd6b4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
label_2bd6b8:
    // 0x2bd6b8: 0x26d61ef0  addiu       $s6, $s6, 0x1EF0
    ctx->pc = 0x2bd6b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 7920));
label_2bd6bc:
    // 0x2bd6bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bd6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd6c0:
    // 0x2bd6c0: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2bd6c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2bd6c4:
    // 0x2bd6c4: 0xc04ba14  jal         func_12E850
label_2bd6c8:
    if (ctx->pc == 0x2BD6C8u) {
        ctx->pc = 0x2BD6C8u;
            // 0x2bd6c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD6CCu;
        goto label_2bd6cc;
    }
    ctx->pc = 0x2BD6C4u;
    SET_GPR_U32(ctx, 31, 0x2BD6CCu);
    ctx->pc = 0x2BD6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD6C4u;
            // 0x2bd6c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD6CCu; }
        if (ctx->pc != 0x2BD6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD6CCu; }
        if (ctx->pc != 0x2BD6CCu) { return; }
    }
    ctx->pc = 0x2BD6CCu;
label_2bd6cc:
    // 0x2bd6cc: 0xc08cb14  jal         func_232C50
label_2bd6d0:
    if (ctx->pc == 0x2BD6D0u) {
        ctx->pc = 0x2BD6D4u;
        goto label_2bd6d4;
    }
    ctx->pc = 0x2BD6CCu;
    SET_GPR_U32(ctx, 31, 0x2BD6D4u);
    ctx->pc = 0x232C50u;
    if (runtime->hasFunction(0x232C50u)) {
        auto targetFn = runtime->lookupFunction(0x232C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD6D4u; }
        if (ctx->pc != 0x2BD6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuPrim__Fv_0x232c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD6D4u; }
        if (ctx->pc != 0x2BD6D4u) { return; }
    }
    ctx->pc = 0x2BD6D4u;
label_2bd6d4:
    // 0x2bd6d4: 0xc78084f8  lwc1        $f0, -0x7B08($gp)
    ctx->pc = 0x2bd6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bd6d8:
    // 0x2bd6d8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2bd6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2bd6dc:
    // 0x2bd6dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bd6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bd6e0:
    // 0x2bd6e0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x2bd6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_2bd6e4:
    // 0x2bd6e4: 0x27a202dc  addiu       $v0, $sp, 0x2DC
    ctx->pc = 0x2bd6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 732));
label_2bd6e8:
    // 0x2bd6e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bd6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd6ec:
    // 0x2bd6ec: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2bd6ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bd6f0:
    // 0x2bd6f0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2bd6f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bd6f4:
    // 0x2bd6f4: 0xc04f8e4  jal         func_13E390
label_2bd6f8:
    if (ctx->pc == 0x2BD6F8u) {
        ctx->pc = 0x2BD6F8u;
            // 0x2bd6f8: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x2BD6FCu;
        goto label_2bd6fc;
    }
    ctx->pc = 0x2BD6F4u;
    SET_GPR_U32(ctx, 31, 0x2BD6FCu);
    ctx->pc = 0x2BD6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD6F4u;
            // 0x2bd6f8: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD6FCu; }
        if (ctx->pc != 0x2BD6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD6FCu; }
        if (ctx->pc != 0x2BD6FCu) { return; }
    }
    ctx->pc = 0x2BD6FCu;
label_2bd6fc:
    // 0x2bd6fc: 0xc68c0224  lwc1        $f12, 0x224($s4)
    ctx->pc = 0x2bd6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2bd700:
    // 0x2bd700: 0x8e8502d4  lw          $a1, 0x2D4($s4)
    ctx->pc = 0x2bd700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 724)));
label_2bd704:
    // 0x2bd704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd708:
    // 0x2bd708: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x2bd708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_2bd70c:
    // 0x2bd70c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bd70cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd710:
    // 0x2bd710: 0x27a802dc  addiu       $t0, $sp, 0x2DC
    ctx->pc = 0x2bd710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 732));
label_2bd714:
    // 0x2bd714: 0xc088f58  jal         func_223D60
label_2bd718:
    if (ctx->pc == 0x2BD718u) {
        ctx->pc = 0x2BD718u;
            // 0x2bd718: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2BD71Cu;
        goto label_2bd71c;
    }
    ctx->pc = 0x2BD714u;
    SET_GPR_U32(ctx, 31, 0x2BD71Cu);
    ctx->pc = 0x2BD718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD714u;
            // 0x2bd718: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x223D60u;
    if (runtime->hasFunction(0x223D60u)) {
        auto targetFn = runtime->lookupFunction(0x223D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD71Cu; }
        if (ctx->pc != 0x2BD71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuTilePattern__FP11mgCDrawPrimP10mgCTextureff9mgRect_i_iPUc_0x223d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD71Cu; }
        if (ctx->pc != 0x2BD71Cu) { return; }
    }
    ctx->pc = 0x2BD71Cu;
label_2bd71c:
    // 0x2bd71c: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x2bd71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_2bd720:
    // 0x2bd720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bd720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd724:
    // 0x2bd724: 0x240600ea  addiu       $a2, $zero, 0xEA
    ctx->pc = 0x2bd724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
label_2bd728:
    // 0x2bd728: 0x240700c8  addiu       $a3, $zero, 0xC8
    ctx->pc = 0x2bd728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_2bd72c:
    // 0x2bd72c: 0xc04f8e4  jal         func_13E390
label_2bd730:
    if (ctx->pc == 0x2BD730u) {
        ctx->pc = 0x2BD730u;
            // 0x2bd730: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x2BD734u;
        goto label_2bd734;
    }
    ctx->pc = 0x2BD72Cu;
    SET_GPR_U32(ctx, 31, 0x2BD734u);
    ctx->pc = 0x2BD730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD72Cu;
            // 0x2bd730: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD734u; }
        if (ctx->pc != 0x2BD734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD734u; }
        if (ctx->pc != 0x2BD734u) { return; }
    }
    ctx->pc = 0x2BD734u;
label_2bd734:
    // 0x2bd734: 0x8e8402d4  lw          $a0, 0x2D4($s4)
    ctx->pc = 0x2bd734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 724)));
label_2bd738:
    // 0x2bd738: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2bd738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2bd73c:
    // 0x2bd73c: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2bd73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_2bd740:
    // 0x2bd740: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x2bd740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_2bd744:
    // 0x2bd744: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bd744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bd748:
    // 0x2bd748: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2bd748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2bd74c:
    // 0x2bd74c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2bd74cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2bd750:
    // 0x2bd750: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2bd750u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2bd754:
    // 0x2bd754: 0xc087fcc  jal         func_21FF30
label_2bd758:
    if (ctx->pc == 0x2BD758u) {
        ctx->pc = 0x2BD758u;
            // 0x2bd758: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2BD75Cu;
        goto label_2bd75c;
    }
    ctx->pc = 0x2BD754u;
    SET_GPR_U32(ctx, 31, 0x2BD75Cu);
    ctx->pc = 0x2BD758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD754u;
            // 0x2bd758: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD75Cu; }
        if (ctx->pc != 0x2BD75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD75Cu; }
        if (ctx->pc != 0x2BD75Cu) { return; }
    }
    ctx->pc = 0x2BD75Cu;
label_2bd75c:
    // 0x2bd75c: 0x87839c24  lh          $v1, -0x63DC($gp)
    ctx->pc = 0x2bd75cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941732)));
label_2bd760:
    // 0x2bd760: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bd760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2bd764:
    // 0x2bd764: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_2bd768:
    if (ctx->pc == 0x2BD768u) {
        ctx->pc = 0x2BD76Cu;
        goto label_2bd76c;
    }
    ctx->pc = 0x2BD764u;
    {
        const bool branch_taken_0x2bd764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bd764) {
            ctx->pc = 0x2BD7A4u;
            goto label_2bd7a4;
        }
    }
    ctx->pc = 0x2BD76Cu;
label_2bd76c:
    // 0x2bd76c: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x2bd76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_2bd770:
    // 0x2bd770: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bd770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2bd774:
    // 0x2bd774: 0xc04ba14  jal         func_12E850
label_2bd778:
    if (ctx->pc == 0x2BD778u) {
        ctx->pc = 0x2BD778u;
            // 0x2bd778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD77Cu;
        goto label_2bd77c;
    }
    ctx->pc = 0x2BD774u;
    SET_GPR_U32(ctx, 31, 0x2BD77Cu);
    ctx->pc = 0x2BD778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD774u;
            // 0x2bd778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD77Cu; }
        if (ctx->pc != 0x2BD77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD77Cu; }
        if (ctx->pc != 0x2BD77Cu) { return; }
    }
    ctx->pc = 0x2BD77Cu;
label_2bd77c:
    // 0x2bd77c: 0xc050df4  jal         func_1437D0
label_2bd780:
    if (ctx->pc == 0x2BD780u) {
        ctx->pc = 0x2BD780u;
            // 0x2bd780: 0x26840280  addiu       $a0, $s4, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 640));
        ctx->pc = 0x2BD784u;
        goto label_2bd784;
    }
    ctx->pc = 0x2BD77Cu;
    SET_GPR_U32(ctx, 31, 0x2BD784u);
    ctx->pc = 0x2BD780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD77Cu;
            // 0x2bd780: 0x26840280  addiu       $a0, $s4, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437D0u;
    if (runtime->hasFunction(0x1437D0u)) {
        auto targetFn = runtime->lookupFunction(0x1437D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD784u; }
        if (ctx->pc != 0x2BD784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetAmbient__FPf_0x1437d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD784u; }
        if (ctx->pc != 0x2BD784u) { return; }
    }
    ctx->pc = 0x2BD784u;
label_2bd784:
    // 0x2bd784: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2bd784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2bd788:
    // 0x2bd788: 0x8c24caa0  lw          $a0, -0x3560($at)
    ctx->pc = 0x2bd788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_2bd78c:
    // 0x2bd78c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bd78cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bd790:
    // 0x2bd790: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2bd790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2bd794:
    // 0x2bd794: 0x320f809  jalr        $t9
label_2bd798:
    if (ctx->pc == 0x2BD798u) {
        ctx->pc = 0x2BD79Cu;
        goto label_2bd79c;
    }
    ctx->pc = 0x2BD794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BD79Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BD79Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BD79Cu; }
            if (ctx->pc != 0x2BD79Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2BD79Cu;
label_2bd79c:
    // 0x2bd79c: 0xc050dec  jal         func_1437B0
label_2bd7a0:
    if (ctx->pc == 0x2BD7A0u) {
        ctx->pc = 0x2BD7A0u;
            // 0x2bd7a0: 0x26840280  addiu       $a0, $s4, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 640));
        ctx->pc = 0x2BD7A4u;
        goto label_2bd7a4;
    }
    ctx->pc = 0x2BD79Cu;
    SET_GPR_U32(ctx, 31, 0x2BD7A4u);
    ctx->pc = 0x2BD7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD79Cu;
            // 0x2bd7a0: 0x26840280  addiu       $a0, $s4, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD7A4u; }
        if (ctx->pc != 0x2BD7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD7A4u; }
        if (ctx->pc != 0x2BD7A4u) { return; }
    }
    ctx->pc = 0x2BD7A4u;
label_2bd7a4:
    // 0x2bd7a4: 0x8e8202d4  lw          $v0, 0x2D4($s4)
    ctx->pc = 0x2bd7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 724)));
label_2bd7a8:
    // 0x2bd7a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bd7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2bd7ac:
    // 0x2bd7ac: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2bd7acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2bd7b0:
    // 0x2bd7b0: 0xc04ba14  jal         func_12E850
label_2bd7b4:
    if (ctx->pc == 0x2BD7B4u) {
        ctx->pc = 0x2BD7B4u;
            // 0x2bd7b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD7B8u;
        goto label_2bd7b8;
    }
    ctx->pc = 0x2BD7B0u;
    SET_GPR_U32(ctx, 31, 0x2BD7B8u);
    ctx->pc = 0x2BD7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD7B0u;
            // 0x2bd7b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD7B8u; }
        if (ctx->pc != 0x2BD7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD7B8u; }
        if (ctx->pc != 0x2BD7B8u) { return; }
    }
    ctx->pc = 0x2BD7B8u;
label_2bd7b8:
    // 0x2bd7b8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2bd7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2bd7bc:
    // 0x2bd7bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bd7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd7c0:
    // 0x2bd7c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bd7c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd7c4:
    // 0x2bd7c4: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x2bd7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2bd7c8:
    // 0x2bd7c8: 0xc04f8e4  jal         func_13E390
label_2bd7cc:
    if (ctx->pc == 0x2BD7CCu) {
        ctx->pc = 0x2BD7CCu;
            // 0x2bd7cc: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x2BD7D0u;
        goto label_2bd7d0;
    }
    ctx->pc = 0x2BD7C8u;
    SET_GPR_U32(ctx, 31, 0x2BD7D0u);
    ctx->pc = 0x2BD7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD7C8u;
            // 0x2bd7cc: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD7D0u; }
        if (ctx->pc != 0x2BD7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD7D0u; }
        if (ctx->pc != 0x2BD7D0u) { return; }
    }
    ctx->pc = 0x2BD7D0u;
label_2bd7d0:
    // 0x2bd7d0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2bd7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2bd7d4:
    // 0x2bd7d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bd7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd7d8:
    // 0x2bd7d8: 0x240600b6  addiu       $a2, $zero, 0xB6
    ctx->pc = 0x2bd7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
label_2bd7dc:
    // 0x2bd7dc: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x2bd7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_2bd7e0:
    // 0x2bd7e0: 0xc04f8e4  jal         func_13E390
label_2bd7e4:
    if (ctx->pc == 0x2BD7E4u) {
        ctx->pc = 0x2BD7E4u;
            // 0x2bd7e4: 0x2408001a  addiu       $t0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->pc = 0x2BD7E8u;
        goto label_2bd7e8;
    }
    ctx->pc = 0x2BD7E0u;
    SET_GPR_U32(ctx, 31, 0x2BD7E8u);
    ctx->pc = 0x2BD7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD7E0u;
            // 0x2bd7e4: 0x2408001a  addiu       $t0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD7E8u; }
        if (ctx->pc != 0x2BD7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD7E8u; }
        if (ctx->pc != 0x2BD7E8u) { return; }
    }
    ctx->pc = 0x2BD7E8u;
label_2bd7e8:
    // 0x2bd7e8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2bd7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2bd7ec:
    // 0x2bd7ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bd7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd7f0:
    // 0x2bd7f0: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2bd7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_2bd7f4:
    // 0x2bd7f4: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x2bd7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2bd7f8:
    // 0x2bd7f8: 0xc04f8e4  jal         func_13E390
label_2bd7fc:
    if (ctx->pc == 0x2BD7FCu) {
        ctx->pc = 0x2BD7FCu;
            // 0x2bd7fc: 0x2408001a  addiu       $t0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->pc = 0x2BD800u;
        goto label_2bd800;
    }
    ctx->pc = 0x2BD7F8u;
    SET_GPR_U32(ctx, 31, 0x2BD800u);
    ctx->pc = 0x2BD7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD7F8u;
            // 0x2bd7fc: 0x2408001a  addiu       $t0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD800u; }
        if (ctx->pc != 0x2BD800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD800u; }
        if (ctx->pc != 0x2BD800u) { return; }
    }
    ctx->pc = 0x2BD800u;
label_2bd800:
    // 0x2bd800: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2bd800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2bd804:
    // 0x2bd804: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bd804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd808:
    // 0x2bd808: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2bd808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2bd80c:
    // 0x2bd80c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2bd80cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2bd810:
    // 0x2bd810: 0xc04f8e4  jal         func_13E390
label_2bd814:
    if (ctx->pc == 0x2BD814u) {
        ctx->pc = 0x2BD814u;
            // 0x2bd814: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x2BD818u;
        goto label_2bd818;
    }
    ctx->pc = 0x2BD810u;
    SET_GPR_U32(ctx, 31, 0x2BD818u);
    ctx->pc = 0x2BD814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD810u;
            // 0x2bd814: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD818u; }
        if (ctx->pc != 0x2BD818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD818u; }
        if (ctx->pc != 0x2BD818u) { return; }
    }
    ctx->pc = 0x2BD818u;
label_2bd818:
    // 0x2bd818: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2bd818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2bd81c:
    // 0x2bd81c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2bd81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2bd820:
    // 0x2bd820: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2bd820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2bd824:
    // 0x2bd824: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2bd824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bd828:
    // 0x2bd828: 0xc04f8e4  jal         func_13E390
label_2bd82c:
    if (ctx->pc == 0x2BD82Cu) {
        ctx->pc = 0x2BD82Cu;
            // 0x2bd82c: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x2BD830u;
        goto label_2bd830;
    }
    ctx->pc = 0x2BD828u;
    SET_GPR_U32(ctx, 31, 0x2BD830u);
    ctx->pc = 0x2BD82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD828u;
            // 0x2bd82c: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD830u; }
        if (ctx->pc != 0x2BD830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD830u; }
        if (ctx->pc != 0x2BD830u) { return; }
    }
    ctx->pc = 0x2BD830u;
label_2bd830:
    // 0x2bd830: 0x8e8301d0  lw          $v1, 0x1D0($s4)
    ctx->pc = 0x2bd830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bd834:
    // 0x2bd834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd838:
    // 0x2bd838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bd838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd83c:
    // 0x2bd83c: 0x24120050  addiu       $s2, $zero, 0x50
    ctx->pc = 0x2bd83cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2bd840:
    // 0x2bd840: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2bd840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2bd844:
    // 0x2bd844: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bd844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bd848:
    // 0x2bd848: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bd848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2bd84c:
    // 0x2bd84c: 0xc087ec4  jal         func_21FB10
label_2bd850:
    if (ctx->pc == 0x2BD850u) {
        ctx->pc = 0x2BD850u;
            // 0x2bd850: 0x2457006e  addiu       $s7, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->pc = 0x2BD854u;
        goto label_2bd854;
    }
    ctx->pc = 0x2BD84Cu;
    SET_GPR_U32(ctx, 31, 0x2BD854u);
    ctx->pc = 0x2BD850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD84Cu;
            // 0x2bd850: 0x2457006e  addiu       $s7, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD854u; }
        if (ctx->pc != 0x2BD854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD854u; }
        if (ctx->pc != 0x2BD854u) { return; }
    }
    ctx->pc = 0x2BD854u;
label_2bd854:
    // 0x2bd854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd858:
    // 0x2bd858: 0xc04d128  jal         func_1344A0
label_2bd85c:
    if (ctx->pc == 0x2BD85Cu) {
        ctx->pc = 0x2BD85Cu;
            // 0x2bd85c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2BD860u;
        goto label_2bd860;
    }
    ctx->pc = 0x2BD858u;
    SET_GPR_U32(ctx, 31, 0x2BD860u);
    ctx->pc = 0x2BD85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD858u;
            // 0x2bd85c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD860u; }
        if (ctx->pc != 0x2BD860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD860u; }
        if (ctx->pc != 0x2BD860u) { return; }
    }
    ctx->pc = 0x2BD860u;
label_2bd860:
    // 0x2bd860: 0x8e8502d4  lw          $a1, 0x2D4($s4)
    ctx->pc = 0x2bd860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 724)));
label_2bd864:
    // 0x2bd864: 0xc04d368  jal         func_134DA0
label_2bd868:
    if (ctx->pc == 0x2BD868u) {
        ctx->pc = 0x2BD868u;
            // 0x2bd868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD86Cu;
        goto label_2bd86c;
    }
    ctx->pc = 0x2BD864u;
    SET_GPR_U32(ctx, 31, 0x2BD86Cu);
    ctx->pc = 0x2BD868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD864u;
            // 0x2bd868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD86Cu; }
        if (ctx->pc != 0x2BD86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD86Cu; }
        if (ctx->pc != 0x2BD86Cu) { return; }
    }
    ctx->pc = 0x2BD86Cu;
label_2bd86c:
    // 0x2bd86c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bd86cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd870:
    // 0x2bd870: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2bd870u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd874:
    // 0x2bd874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd878:
    // 0x2bd878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bd878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd87c:
    // 0x2bd87c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bd87cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd880:
    // 0x2bd880: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bd880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd884:
    // 0x2bd884: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x2bd884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2bd888:
    // 0x2bd888: 0xc04d320  jal         func_134C80
label_2bd88c:
    if (ctx->pc == 0x2BD88Cu) {
        ctx->pc = 0x2BD88Cu;
            // 0x2bd88c: 0x2653001e  addiu       $s3, $s2, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 30));
        ctx->pc = 0x2BD890u;
        goto label_2bd890;
    }
    ctx->pc = 0x2BD888u;
    SET_GPR_U32(ctx, 31, 0x2BD890u);
    ctx->pc = 0x2BD88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD888u;
            // 0x2bd88c: 0x2653001e  addiu       $s3, $s2, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD890u; }
        if (ctx->pc != 0x2BD890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD890u; }
        if (ctx->pc != 0x2BD890u) { return; }
    }
    ctx->pc = 0x2BD890u;
label_2bd890:
    // 0x2bd890: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x2bd890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2bd894:
    // 0x2bd894: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2bd894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_2bd898:
    // 0x2bd898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bd89c:
    // 0x2bd89c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd8a0:
    // 0x2bd8a0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2bd8a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bd8a4:
    // 0x2bd8a4: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2bd8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2bd8a8:
    // 0x2bd8a8: 0xc087f98  jal         func_21FE60
label_2bd8ac:
    if (ctx->pc == 0x2BD8ACu) {
        ctx->pc = 0x2BD8ACu;
            // 0x2bd8ac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2BD8B0u;
        goto label_2bd8b0;
    }
    ctx->pc = 0x2BD8A8u;
    SET_GPR_U32(ctx, 31, 0x2BD8B0u);
    ctx->pc = 0x2BD8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD8A8u;
            // 0x2bd8ac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD8B0u; }
        if (ctx->pc != 0x2BD8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD8B0u; }
        if (ctx->pc != 0x2BD8B0u) { return; }
    }
    ctx->pc = 0x2BD8B0u;
label_2bd8b0:
    // 0x2bd8b0: 0x26630004  addiu       $v1, $s3, 0x4
    ctx->pc = 0x2bd8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2bd8b4:
    // 0x2bd8b4: 0x3c024294  lui         $v0, 0x4294
    ctx->pc = 0x2bd8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17044 << 16));
label_2bd8b8:
    // 0x2bd8b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd8b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bd8bc:
    // 0x2bd8bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd8c0:
    // 0x2bd8c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bd8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bd8c4:
    // 0x2bd8c4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2bd8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2bd8c8:
    // 0x2bd8c8: 0xc087f98  jal         func_21FE60
label_2bd8cc:
    if (ctx->pc == 0x2BD8CCu) {
        ctx->pc = 0x2BD8CCu;
            // 0x2bd8cc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2BD8D0u;
        goto label_2bd8d0;
    }
    ctx->pc = 0x2BD8C8u;
    SET_GPR_U32(ctx, 31, 0x2BD8D0u);
    ctx->pc = 0x2BD8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD8C8u;
            // 0x2bd8cc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD8D0u; }
        if (ctx->pc != 0x2BD8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD8D0u; }
        if (ctx->pc != 0x2BD8D0u) { return; }
    }
    ctx->pc = 0x2BD8D0u;
label_2bd8d0:
    // 0x2bd8d0: 0x2951021  addu        $v0, $s4, $s5
    ctx->pc = 0x2bd8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_2bd8d4:
    // 0x2bd8d4: 0xc047a42  jal         func_11E908
label_2bd8d8:
    if (ctx->pc == 0x2BD8D8u) {
        ctx->pc = 0x2BD8D8u;
            // 0x2bd8d8: 0xc44c029c  lwc1        $f12, 0x29C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BD8DCu;
        goto label_2bd8dc;
    }
    ctx->pc = 0x2BD8D4u;
    SET_GPR_U32(ctx, 31, 0x2BD8DCu);
    ctx->pc = 0x2BD8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD8D4u;
            // 0x2bd8d8: 0xc44c029c  lwc1        $f12, 0x29C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD8DCu; }
        if (ctx->pc != 0x2BD8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD8DCu; }
        if (ctx->pc != 0x2BD8DCu) { return; }
    }
    ctx->pc = 0x2BD8DCu;
label_2bd8dc:
    // 0x2bd8dc: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2bd8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_2bd8e0:
    // 0x2bd8e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bd8e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2bd8e4:
    // 0x2bd8e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2bd8e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bd8e8:
    // 0x2bd8e8: 0x0  nop
    ctx->pc = 0x2bd8e8u;
    // NOP
label_2bd8ec:
    // 0x2bd8ec: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2bd8ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2bd8f0:
    // 0x2bd8f0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2bd8f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bd8f4:
    // 0x2bd8f4: 0x0  nop
    ctx->pc = 0x2bd8f4u;
    // NOP
label_2bd8f8:
    // 0x2bd8f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2bd8fc:
    if (ctx->pc == 0x2BD8FCu) {
        ctx->pc = 0x2BD900u;
        goto label_2bd900;
    }
    ctx->pc = 0x2BD8F8u;
    {
        const bool branch_taken_0x2bd8f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd8f8) {
            ctx->pc = 0x2BD904u;
            goto label_2bd904;
        }
    }
    ctx->pc = 0x2BD900u;
label_2bd900:
    // 0x2bd900: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2bd900u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_2bd904:
    // 0x2bd904: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2bd904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_2bd908:
    // 0x2bd908: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2bd908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_2bd90c:
    // 0x2bd90c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bd90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bd910:
    // 0x2bd910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd914:
    // 0x2bd914: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2bd914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2bd918:
    // 0x2bd918: 0x26620003  addiu       $v0, $s3, 0x3
    ctx->pc = 0x2bd918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_2bd91c:
    // 0x2bd91c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd91cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bd920:
    // 0x2bd920: 0x0  nop
    ctx->pc = 0x2bd920u;
    // NOP
label_2bd924:
    // 0x2bd924: 0x46020d01  sub.s       $f20, $f1, $f2
    ctx->pc = 0x2bd924u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2bd928:
    // 0x2bd928: 0x24630049  addiu       $v1, $v1, 0x49
    ctx->pc = 0x2bd928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 73));
label_2bd92c:
    // 0x2bd92c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2bd92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_2bd930:
    // 0x2bd930: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x2bd930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_2bd934:
    // 0x2bd934: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bd934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bd938:
    // 0x2bd938: 0x0  nop
    ctx->pc = 0x2bd938u;
    // NOP
label_2bd93c:
    // 0x2bd93c: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x2bd93cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2bd940:
    // 0x2bd940: 0x46001540  add.s       $f21, $f2, $f0
    ctx->pc = 0x2bd940u;
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2bd944:
    // 0x2bd944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bd948:
    // 0x2bd948: 0x0  nop
    ctx->pc = 0x2bd948u;
    // NOP
label_2bd94c:
    // 0x2bd94c: 0x461605c0  add.s       $f23, $f0, $f22
    ctx->pc = 0x2bd94cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_2bd950:
    // 0x2bd950: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x2bd950u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2bd954:
    // 0x2bd954: 0xc087f98  jal         func_21FE60
label_2bd958:
    if (ctx->pc == 0x2BD958u) {
        ctx->pc = 0x2BD958u;
            // 0x2bd958: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x2BD95Cu;
        goto label_2bd95c;
    }
    ctx->pc = 0x2BD954u;
    SET_GPR_U32(ctx, 31, 0x2BD95Cu);
    ctx->pc = 0x2BD958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD954u;
            // 0x2bd958: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD95Cu; }
        if (ctx->pc != 0x2BD95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD95Cu; }
        if (ctx->pc != 0x2BD95Cu) { return; }
    }
    ctx->pc = 0x2BD95Cu;
label_2bd95c:
    // 0x2bd95c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2bd95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_2bd960:
    // 0x2bd960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd964:
    // 0x2bd964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bd968:
    // 0x2bd968: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x2bd968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2bd96c:
    // 0x2bd96c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x2bd96cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_2bd970:
    // 0x2bd970: 0xc087f98  jal         func_21FE60
label_2bd974:
    if (ctx->pc == 0x2BD974u) {
        ctx->pc = 0x2BD974u;
            // 0x2bd974: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->pc = 0x2BD978u;
        goto label_2bd978;
    }
    ctx->pc = 0x2BD970u;
    SET_GPR_U32(ctx, 31, 0x2BD978u);
    ctx->pc = 0x2BD974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD970u;
            // 0x2bd974: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD978u; }
        if (ctx->pc != 0x2BD978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD978u; }
        if (ctx->pc != 0x2BD978u) { return; }
    }
    ctx->pc = 0x2BD978u;
label_2bd978:
    // 0x2bd978: 0x8e8201d0  lw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bd978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bd97c:
    // 0x2bd97c: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
label_2bd980:
    if (ctx->pc == 0x2BD980u) {
        ctx->pc = 0x2BD980u;
            // 0x2bd980: 0x240500a4  addiu       $a1, $zero, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
        ctx->pc = 0x2BD984u;
        goto label_2bd984;
    }
    ctx->pc = 0x2BD97Cu;
    {
        const bool branch_taken_0x2bd97c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BD980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD97Cu;
            // 0x2bd980: 0x240500a4  addiu       $a1, $zero, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd97c) {
            ctx->pc = 0x2BD9A0u;
            goto label_2bd9a0;
        }
    }
    ctx->pc = 0x2BD984u;
label_2bd984:
    // 0x2bd984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd988:
    // 0x2bd988: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2bd988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bd98c:
    // 0x2bd98c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2bd98cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bd990:
    // 0x2bd990: 0xc04d320  jal         func_134C80
label_2bd994:
    if (ctx->pc == 0x2BD994u) {
        ctx->pc = 0x2BD994u;
            // 0x2bd994: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2BD998u;
        goto label_2bd998;
    }
    ctx->pc = 0x2BD990u;
    SET_GPR_U32(ctx, 31, 0x2BD998u);
    ctx->pc = 0x2BD994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD990u;
            // 0x2bd994: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD998u; }
        if (ctx->pc != 0x2BD998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD998u; }
        if (ctx->pc != 0x2BD998u) { return; }
    }
    ctx->pc = 0x2BD998u;
label_2bd998:
    // 0x2bd998: 0x10000007  b           . + 4 + (0x7 << 2)
label_2bd99c:
    if (ctx->pc == 0x2BD99Cu) {
        ctx->pc = 0x2BD9A0u;
        goto label_2bd9a0;
    }
    ctx->pc = 0x2BD998u;
    {
        const bool branch_taken_0x2bd998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd998) {
            ctx->pc = 0x2BD9B8u;
            goto label_2bd9b8;
        }
    }
    ctx->pc = 0x2BD9A0u;
label_2bd9a0:
    // 0x2bd9a0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2bd9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2bd9a4:
    // 0x2bd9a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd9a8:
    // 0x2bd9a8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2bd9a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bd9ac:
    // 0x2bd9ac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2bd9acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bd9b0:
    // 0x2bd9b0: 0xc04d320  jal         func_134C80
label_2bd9b4:
    if (ctx->pc == 0x2BD9B4u) {
        ctx->pc = 0x2BD9B4u;
            // 0x2bd9b4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD9B8u;
        goto label_2bd9b8;
    }
    ctx->pc = 0x2BD9B0u;
    SET_GPR_U32(ctx, 31, 0x2BD9B8u);
    ctx->pc = 0x2BD9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD9B0u;
            // 0x2bd9b4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD9B8u; }
        if (ctx->pc != 0x2BD9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD9B8u; }
        if (ctx->pc != 0x2BD9B8u) { return; }
    }
    ctx->pc = 0x2BD9B8u;
label_2bd9b8:
    // 0x2bd9b8: 0x3c024238  lui         $v0, 0x4238
    ctx->pc = 0x2bd9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16952 << 16));
label_2bd9bc:
    // 0x2bd9bc: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2bd9bcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bd9c0:
    // 0x2bd9c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd9c4:
    // 0x2bd9c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bd9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bd9c8:
    // 0x2bd9c8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2bd9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2bd9cc:
    // 0x2bd9cc: 0xc087f98  jal         func_21FE60
label_2bd9d0:
    if (ctx->pc == 0x2BD9D0u) {
        ctx->pc = 0x2BD9D0u;
            // 0x2bd9d0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2BD9D4u;
        goto label_2bd9d4;
    }
    ctx->pc = 0x2BD9CCu;
    SET_GPR_U32(ctx, 31, 0x2BD9D4u);
    ctx->pc = 0x2BD9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD9CCu;
            // 0x2bd9d0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD9D4u; }
        if (ctx->pc != 0x2BD9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD9D4u; }
        if (ctx->pc != 0x2BD9D4u) { return; }
    }
    ctx->pc = 0x2BD9D4u;
label_2bd9d4:
    // 0x2bd9d4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2bd9d4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bd9d8:
    // 0x2bd9d8: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2bd9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
label_2bd9dc:
    // 0x2bd9dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bd9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bd9e0:
    // 0x2bd9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd9e4:
    // 0x2bd9e4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2bd9e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2bd9e8:
    // 0x2bd9e8: 0xc087f98  jal         func_21FE60
label_2bd9ec:
    if (ctx->pc == 0x2BD9ECu) {
        ctx->pc = 0x2BD9ECu;
            // 0x2bd9ec: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x2BD9F0u;
        goto label_2bd9f0;
    }
    ctx->pc = 0x2BD9E8u;
    SET_GPR_U32(ctx, 31, 0x2BD9F0u);
    ctx->pc = 0x2BD9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD9E8u;
            // 0x2bd9ec: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD9F0u; }
        if (ctx->pc != 0x2BD9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD9F0u; }
        if (ctx->pc != 0x2BD9F0u) { return; }
    }
    ctx->pc = 0x2BD9F0u;
label_2bd9f0:
    // 0x2bd9f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bd9f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2bd9f4:
    // 0x2bd9f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd9f8:
    // 0x2bd9f8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2bd9f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_2bd9fc:
    // 0x2bd9fc: 0xc087f98  jal         func_21FE60
label_2bda00:
    if (ctx->pc == 0x2BDA00u) {
        ctx->pc = 0x2BDA00u;
            // 0x2bda00: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x2BDA04u;
        goto label_2bda04;
    }
    ctx->pc = 0x2BD9FCu;
    SET_GPR_U32(ctx, 31, 0x2BDA04u);
    ctx->pc = 0x2BDA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD9FCu;
            // 0x2bda00: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDA04u; }
        if (ctx->pc != 0x2BDA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDA04u; }
        if (ctx->pc != 0x2BDA04u) { return; }
    }
    ctx->pc = 0x2BDA04u;
label_2bda04:
    // 0x2bda04: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2bda04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2bda08:
    // 0x2bda08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bda08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bda0c:
    // 0x2bda0c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2bda0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_2bda10:
    // 0x2bda10: 0xc087f98  jal         func_21FE60
label_2bda14:
    if (ctx->pc == 0x2BDA14u) {
        ctx->pc = 0x2BDA14u;
            // 0x2bda14: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x2BDA18u;
        goto label_2bda18;
    }
    ctx->pc = 0x2BDA10u;
    SET_GPR_U32(ctx, 31, 0x2BDA18u);
    ctx->pc = 0x2BDA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDA10u;
            // 0x2bda14: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDA18u; }
        if (ctx->pc != 0x2BDA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDA18u; }
        if (ctx->pc != 0x2BDA18u) { return; }
    }
    ctx->pc = 0x2BDA18u;
label_2bda18:
    // 0x2bda18: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2bda18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2bda1c:
    // 0x2bda1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2bda1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2bda20:
    // 0x2bda20: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2bda20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_2bda24:
    // 0x2bda24: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x2bda24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_2bda28:
    // 0x2bda28: 0x26520042  addiu       $s2, $s2, 0x42
    ctx->pc = 0x2bda28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 66));
label_2bda2c:
    // 0x2bda2c: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x2bda2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_2bda30:
    // 0x2bda30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2bda30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2bda34:
    // 0x2bda34: 0x1440ff8f  bnez        $v0, . + 4 + (-0x71 << 2)
label_2bda38:
    if (ctx->pc == 0x2BDA38u) {
        ctx->pc = 0x2BDA38u;
            // 0x2bda38: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->pc = 0x2BDA3Cu;
        goto label_2bda3c;
    }
    ctx->pc = 0x2BDA34u;
    {
        const bool branch_taken_0x2bda34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDA34u;
            // 0x2bda38: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda34) {
            ctx->pc = 0x2BD874u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bd874;
        }
    }
    ctx->pc = 0x2BDA3Cu;
label_2bda3c:
    // 0x2bda3c: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x2bda3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_2bda40:
    // 0x2bda40: 0x2651000a  addiu       $s1, $s2, 0xA
    ctx->pc = 0x2bda40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
label_2bda44:
    // 0x2bda44: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
label_2bda48:
    if (ctx->pc == 0x2BDA48u) {
        ctx->pc = 0x2BDA48u;
            // 0x2bda48: 0x26320028  addiu       $s2, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->pc = 0x2BDA4Cu;
        goto label_2bda4c;
    }
    ctx->pc = 0x2BDA44u;
    {
        const bool branch_taken_0x2bda44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDA44u;
            // 0x2bda48: 0x26320028  addiu       $s2, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda44) {
            ctx->pc = 0x2BDBB8u;
            goto label_2bdbb8;
        }
    }
    ctx->pc = 0x2BDA4Cu;
label_2bda4c:
    // 0x2bda4c: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x2bda4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2bda50:
    // 0x2bda50: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2bda54:
    if (ctx->pc == 0x2BDA54u) {
        ctx->pc = 0x2BDA54u;
            // 0x2bda54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDA58u;
        goto label_2bda58;
    }
    ctx->pc = 0x2BDA50u;
    {
        const bool branch_taken_0x2bda50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDA50u;
            // 0x2bda54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda50) {
            ctx->pc = 0x2BDA64u;
            goto label_2bda64;
        }
    }
    ctx->pc = 0x2BDA58u;
label_2bda58:
    // 0x2bda58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bda58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2bda5c:
    // 0x2bda5c: 0x14620056  bne         $v1, $v0, . + 4 + (0x56 << 2)
label_2bda60:
    if (ctx->pc == 0x2BDA60u) {
        ctx->pc = 0x2BDA64u;
        goto label_2bda64;
    }
    ctx->pc = 0x2BDA5Cu;
    {
        const bool branch_taken_0x2bda5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bda5c) {
            ctx->pc = 0x2BDBB8u;
            goto label_2bdbb8;
        }
    }
    ctx->pc = 0x2BDA64u;
label_2bda64:
    // 0x2bda64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bda64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bda68:
    // 0x2bda68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bda68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bda6c:
    // 0x2bda6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bda6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bda70:
    // 0x2bda70: 0xc04d320  jal         func_134C80
label_2bda74:
    if (ctx->pc == 0x2BDA74u) {
        ctx->pc = 0x2BDA74u;
            // 0x2bda74: 0x24080030  addiu       $t0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x2BDA78u;
        goto label_2bda78;
    }
    ctx->pc = 0x2BDA70u;
    SET_GPR_U32(ctx, 31, 0x2BDA78u);
    ctx->pc = 0x2BDA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDA70u;
            // 0x2bda74: 0x24080030  addiu       $t0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDA78u; }
        if (ctx->pc != 0x2BDA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDA78u; }
        if (ctx->pc != 0x2BDA78u) { return; }
    }
    ctx->pc = 0x2BDA78u;
label_2bda78:
    // 0x2bda78: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x2bda78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2bda7c:
    // 0x2bda7c: 0x3c0242e8  lui         $v0, 0x42E8
    ctx->pc = 0x2bda7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17128 << 16));
label_2bda80:
    // 0x2bda80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bda80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bda84:
    // 0x2bda84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bda84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bda88:
    // 0x2bda88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bda88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bda8c:
    // 0x2bda8c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2bda8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2bda90:
    // 0x2bda90: 0xc087f98  jal         func_21FE60
label_2bda94:
    if (ctx->pc == 0x2BDA94u) {
        ctx->pc = 0x2BDA94u;
            // 0x2bda94: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2BDA98u;
        goto label_2bda98;
    }
    ctx->pc = 0x2BDA90u;
    SET_GPR_U32(ctx, 31, 0x2BDA98u);
    ctx->pc = 0x2BDA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDA90u;
            // 0x2bda94: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDA98u; }
        if (ctx->pc != 0x2BDA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDA98u; }
        if (ctx->pc != 0x2BDA98u) { return; }
    }
    ctx->pc = 0x2BDA98u;
label_2bda98:
    // 0x2bda98: 0x8e8301d0  lw          $v1, 0x1D0($s4)
    ctx->pc = 0x2bda98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bda9c:
    // 0x2bda9c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bda9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2bdaa0:
    // 0x2bdaa0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_2bdaa4:
    if (ctx->pc == 0x2BDAA4u) {
        ctx->pc = 0x2BDAA4u;
            // 0x2bdaa4: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2BDAA8u;
        goto label_2bdaa8;
    }
    ctx->pc = 0x2BDAA0u;
    {
        const bool branch_taken_0x2bdaa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BDAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDAA0u;
            // 0x2bdaa4: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdaa0) {
            ctx->pc = 0x2BDAC8u;
            goto label_2bdac8;
        }
    }
    ctx->pc = 0x2BDAA8u;
label_2bdaa8:
    // 0x2bdaa8: 0x240500a4  addiu       $a1, $zero, 0xA4
    ctx->pc = 0x2bdaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
label_2bdaac:
    // 0x2bdaac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bdab0:
    // 0x2bdab0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2bdab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bdab4:
    // 0x2bdab4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2bdab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bdab8:
    // 0x2bdab8: 0xc04d320  jal         func_134C80
label_2bdabc:
    if (ctx->pc == 0x2BDABCu) {
        ctx->pc = 0x2BDABCu;
            // 0x2bdabc: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2BDAC0u;
        goto label_2bdac0;
    }
    ctx->pc = 0x2BDAB8u;
    SET_GPR_U32(ctx, 31, 0x2BDAC0u);
    ctx->pc = 0x2BDABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDAB8u;
            // 0x2bdabc: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDAC0u; }
        if (ctx->pc != 0x2BDAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDAC0u; }
        if (ctx->pc != 0x2BDAC0u) { return; }
    }
    ctx->pc = 0x2BDAC0u;
label_2bdac0:
    // 0x2bdac0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2bdac4:
    if (ctx->pc == 0x2BDAC4u) {
        ctx->pc = 0x2BDAC8u;
        goto label_2bdac8;
    }
    ctx->pc = 0x2BDAC0u;
    {
        const bool branch_taken_0x2bdac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdac0) {
            ctx->pc = 0x2BDADCu;
            goto label_2bdadc;
        }
    }
    ctx->pc = 0x2BDAC8u;
label_2bdac8:
    // 0x2bdac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bdacc:
    // 0x2bdacc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2bdaccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bdad0:
    // 0x2bdad0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2bdad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bdad4:
    // 0x2bdad4: 0xc04d320  jal         func_134C80
label_2bdad8:
    if (ctx->pc == 0x2BDAD8u) {
        ctx->pc = 0x2BDAD8u;
            // 0x2bdad8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDADCu;
        goto label_2bdadc;
    }
    ctx->pc = 0x2BDAD4u;
    SET_GPR_U32(ctx, 31, 0x2BDADCu);
    ctx->pc = 0x2BDAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDAD4u;
            // 0x2bdad8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDADCu; }
        if (ctx->pc != 0x2BDADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDADCu; }
        if (ctx->pc != 0x2BDADCu) { return; }
    }
    ctx->pc = 0x2BDADCu;
label_2bdadc:
    // 0x2bdadc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2bdadcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bdae0:
    // 0x2bdae0: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x2bdae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
label_2bdae4:
    // 0x2bdae4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bdae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bdae8:
    // 0x2bdae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bdaec:
    // 0x2bdaec: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2bdaecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2bdaf0:
    // 0x2bdaf0: 0xc087f98  jal         func_21FE60
label_2bdaf4:
    if (ctx->pc == 0x2BDAF4u) {
        ctx->pc = 0x2BDAF4u;
            // 0x2bdaf4: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x2BDAF8u;
        goto label_2bdaf8;
    }
    ctx->pc = 0x2BDAF0u;
    SET_GPR_U32(ctx, 31, 0x2BDAF8u);
    ctx->pc = 0x2BDAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDAF0u;
            // 0x2bdaf4: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDAF8u; }
        if (ctx->pc != 0x2BDAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDAF8u; }
        if (ctx->pc != 0x2BDAF8u) { return; }
    }
    ctx->pc = 0x2BDAF8u;
label_2bdaf8:
    // 0x2bdaf8: 0x86830258  lh          $v1, 0x258($s4)
    ctx->pc = 0x2bdaf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 600)));
label_2bdafc:
    // 0x2bdafc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bdafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bdb00:
    // 0x2bdb00: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
label_2bdb04:
    if (ctx->pc == 0x2BDB04u) {
        ctx->pc = 0x2BDB04u;
            // 0x2bdb04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB08u;
        goto label_2bdb08;
    }
    ctx->pc = 0x2BDB00u;
    {
        const bool branch_taken_0x2bdb00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BDB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDB00u;
            // 0x2bdb04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb00) {
            ctx->pc = 0x2BDBBCu;
            goto label_2bdbbc;
        }
    }
    ctx->pc = 0x2BDB08u;
label_2bdb08:
    // 0x2bdb08: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2bdb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2bdb0c:
    // 0x2bdb0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bdb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb10:
    // 0x2bdb10: 0x2406009c  addiu       $a2, $zero, 0x9C
    ctx->pc = 0x2bdb10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_2bdb14:
    // 0x2bdb14: 0x240700aa  addiu       $a3, $zero, 0xAA
    ctx->pc = 0x2bdb14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_2bdb18:
    // 0x2bdb18: 0xc04f8e4  jal         func_13E390
label_2bdb1c:
    if (ctx->pc == 0x2BDB1Cu) {
        ctx->pc = 0x2BDB1Cu;
            // 0x2bdb1c: 0x2408001a  addiu       $t0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->pc = 0x2BDB20u;
        goto label_2bdb20;
    }
    ctx->pc = 0x2BDB18u;
    SET_GPR_U32(ctx, 31, 0x2BDB20u);
    ctx->pc = 0x2BDB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDB18u;
            // 0x2bdb1c: 0x2408001a  addiu       $t0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB20u; }
        if (ctx->pc != 0x2BDB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB20u; }
        if (ctx->pc != 0x2BDB20u) { return; }
    }
    ctx->pc = 0x2BDB20u;
label_2bdb20:
    // 0x2bdb20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb24:
    // 0x2bdb24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bdb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb28:
    // 0x2bdb28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bdb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb2c:
    // 0x2bdb2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bdb2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb30:
    // 0x2bdb30: 0xc04d320  jal         func_134C80
label_2bdb34:
    if (ctx->pc == 0x2BDB34u) {
        ctx->pc = 0x2BDB34u;
            // 0x2bdb34: 0x24080030  addiu       $t0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x2BDB38u;
        goto label_2bdb38;
    }
    ctx->pc = 0x2BDB30u;
    SET_GPR_U32(ctx, 31, 0x2BDB38u);
    ctx->pc = 0x2BDB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDB30u;
            // 0x2bdb34: 0x24080030  addiu       $t0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB38u; }
        if (ctx->pc != 0x2BDB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB38u; }
        if (ctx->pc != 0x2BDB38u) { return; }
    }
    ctx->pc = 0x2BDB38u;
label_2bdb38:
    // 0x2bdb38: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x2bdb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2bdb3c:
    // 0x2bdb3c: 0x3c02429c  lui         $v0, 0x429C
    ctx->pc = 0x2bdb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17052 << 16));
label_2bdb40:
    // 0x2bdb40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bdb40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bdb44:
    // 0x2bdb44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb48:
    // 0x2bdb48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bdb48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bdb4c:
    // 0x2bdb4c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2bdb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2bdb50:
    // 0x2bdb50: 0xc087f98  jal         func_21FE60
label_2bdb54:
    if (ctx->pc == 0x2BDB54u) {
        ctx->pc = 0x2BDB54u;
            // 0x2bdb54: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2BDB58u;
        goto label_2bdb58;
    }
    ctx->pc = 0x2BDB50u;
    SET_GPR_U32(ctx, 31, 0x2BDB58u);
    ctx->pc = 0x2BDB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDB50u;
            // 0x2bdb54: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB58u; }
        if (ctx->pc != 0x2BDB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB58u; }
        if (ctx->pc != 0x2BDB58u) { return; }
    }
    ctx->pc = 0x2BDB58u;
label_2bdb58:
    // 0x2bdb58: 0x8e8301d0  lw          $v1, 0x1D0($s4)
    ctx->pc = 0x2bdb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bdb5c:
    // 0x2bdb5c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bdb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2bdb60:
    // 0x2bdb60: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_2bdb64:
    if (ctx->pc == 0x2BDB64u) {
        ctx->pc = 0x2BDB64u;
            // 0x2bdb64: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2BDB68u;
        goto label_2bdb68;
    }
    ctx->pc = 0x2BDB60u;
    {
        const bool branch_taken_0x2bdb60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BDB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDB60u;
            // 0x2bdb64: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb60) {
            ctx->pc = 0x2BDB88u;
            goto label_2bdb88;
        }
    }
    ctx->pc = 0x2BDB68u;
label_2bdb68:
    // 0x2bdb68: 0x240500a4  addiu       $a1, $zero, 0xA4
    ctx->pc = 0x2bdb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
label_2bdb6c:
    // 0x2bdb6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb70:
    // 0x2bdb70: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2bdb70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb74:
    // 0x2bdb74: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2bdb74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb78:
    // 0x2bdb78: 0xc04d320  jal         func_134C80
label_2bdb7c:
    if (ctx->pc == 0x2BDB7Cu) {
        ctx->pc = 0x2BDB7Cu;
            // 0x2bdb7c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2BDB80u;
        goto label_2bdb80;
    }
    ctx->pc = 0x2BDB78u;
    SET_GPR_U32(ctx, 31, 0x2BDB80u);
    ctx->pc = 0x2BDB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDB78u;
            // 0x2bdb7c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB80u; }
        if (ctx->pc != 0x2BDB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB80u; }
        if (ctx->pc != 0x2BDB80u) { return; }
    }
    ctx->pc = 0x2BDB80u;
label_2bdb80:
    // 0x2bdb80: 0x10000006  b           . + 4 + (0x6 << 2)
label_2bdb84:
    if (ctx->pc == 0x2BDB84u) {
        ctx->pc = 0x2BDB88u;
        goto label_2bdb88;
    }
    ctx->pc = 0x2BDB80u;
    {
        const bool branch_taken_0x2bdb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdb80) {
            ctx->pc = 0x2BDB9Cu;
            goto label_2bdb9c;
        }
    }
    ctx->pc = 0x2BDB88u;
label_2bdb88:
    // 0x2bdb88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb8c:
    // 0x2bdb8c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2bdb8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb90:
    // 0x2bdb90: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2bdb90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb94:
    // 0x2bdb94: 0xc04d320  jal         func_134C80
label_2bdb98:
    if (ctx->pc == 0x2BDB98u) {
        ctx->pc = 0x2BDB98u;
            // 0x2bdb98: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB9Cu;
        goto label_2bdb9c;
    }
    ctx->pc = 0x2BDB94u;
    SET_GPR_U32(ctx, 31, 0x2BDB9Cu);
    ctx->pc = 0x2BDB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDB94u;
            // 0x2bdb98: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB9Cu; }
        if (ctx->pc != 0x2BDB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB9Cu; }
        if (ctx->pc != 0x2BDB9Cu) { return; }
    }
    ctx->pc = 0x2BDB9Cu;
label_2bdb9c:
    // 0x2bdb9c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2bdb9cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bdba0:
    // 0x2bdba0: 0x3c024294  lui         $v0, 0x4294
    ctx->pc = 0x2bdba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17044 << 16));
label_2bdba4:
    // 0x2bdba4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bdba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bdba8:
    // 0x2bdba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bdbac:
    // 0x2bdbac: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2bdbacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2bdbb0:
    // 0x2bdbb0: 0xc087f98  jal         func_21FE60
label_2bdbb4:
    if (ctx->pc == 0x2BDBB4u) {
        ctx->pc = 0x2BDBB4u;
            // 0x2bdbb4: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x2BDBB8u;
        goto label_2bdbb8;
    }
    ctx->pc = 0x2BDBB0u;
    SET_GPR_U32(ctx, 31, 0x2BDBB8u);
    ctx->pc = 0x2BDBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDBB0u;
            // 0x2bdbb4: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDBB8u; }
        if (ctx->pc != 0x2BDBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDBB8u; }
        if (ctx->pc != 0x2BDBB8u) { return; }
    }
    ctx->pc = 0x2BDBB8u;
label_2bdbb8:
    // 0x2bdbb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bdbbc:
    // 0x2bdbbc: 0xc04d1a4  jal         func_134690
label_2bdbc0:
    if (ctx->pc == 0x2BDBC0u) {
        ctx->pc = 0x2BDBC4u;
        goto label_2bdbc4;
    }
    ctx->pc = 0x2BDBBCu;
    SET_GPR_U32(ctx, 31, 0x2BDBC4u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDBC4u; }
        if (ctx->pc != 0x2BDBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDBC4u; }
        if (ctx->pc != 0x2BDBC4u) { return; }
    }
    ctx->pc = 0x2BDBC4u;
label_2bdbc4:
    // 0x2bdbc4: 0x8e8301d0  lw          $v1, 0x1D0($s4)
    ctx->pc = 0x2bdbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bdbc8:
    // 0x2bdbc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bdbc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bdbcc:
    // 0x2bdbcc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bdbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2bdbd0:
    // 0x2bdbd0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2bdbd4:
    if (ctx->pc == 0x2BDBD4u) {
        ctx->pc = 0x2BDBD4u;
            // 0x2bdbd4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2BDBD8u;
        goto label_2bdbd8;
    }
    ctx->pc = 0x2BDBD0u;
    {
        const bool branch_taken_0x2bdbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BDBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDBD0u;
            // 0x2bdbd4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdbd0) {
            ctx->pc = 0x2BDBE8u;
            goto label_2bdbe8;
        }
    }
    ctx->pc = 0x2BDBD8u;
label_2bdbd8:
    // 0x2bdbd8: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2bdbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
label_2bdbdc:
    // 0x2bdbdc: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x2bdbdcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bdbe0:
    // 0x2bdbe0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bdbe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bdbe4:
    // 0x2bdbe4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bdbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2bdbe8:
    // 0x2bdbe8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2bdbec:
    if (ctx->pc == 0x2BDBECu) {
        ctx->pc = 0x2BDBECu;
            // 0x2bdbec: 0x3c024080  lui         $v0, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
        ctx->pc = 0x2BDBF0u;
        goto label_2bdbf0;
    }
    ctx->pc = 0x2BDBE8u;
    {
        const bool branch_taken_0x2bdbe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BDBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDBE8u;
            // 0x2bdbec: 0x3c024080  lui         $v0, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdbe8) {
            ctx->pc = 0x2BDC00u;
            goto label_2bdc00;
        }
    }
    ctx->pc = 0x2BDBF0u;
label_2bdbf0:
    // 0x2bdbf0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2bdbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_2bdbf4:
    // 0x2bdbf4: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x2bdbf4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bdbf8:
    // 0x2bdbf8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bdbf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bdbfc:
    // 0x2bdbfc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2bdbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_2bdc00:
    // 0x2bdc00: 0x268402c0  addiu       $a0, $s4, 0x2C0
    ctx->pc = 0x2bdc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
label_2bdc04:
    // 0x2bdc04: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2bdc04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2bdc08:
    // 0x2bdc08: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2bdc08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2bdc0c:
    // 0x2bdc0c: 0xc094514  jal         func_251450
label_2bdc10:
    if (ctx->pc == 0x2BDC10u) {
        ctx->pc = 0x2BDC10u;
            // 0x2bdc10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC14u;
        goto label_2bdc14;
    }
    ctx->pc = 0x2BDC0Cu;
    SET_GPR_U32(ctx, 31, 0x2BDC14u);
    ctx->pc = 0x2BDC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDC0Cu;
            // 0x2bdc10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC14u; }
        if (ctx->pc != 0x2BDC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC14u; }
        if (ctx->pc != 0x2BDC14u) { return; }
    }
    ctx->pc = 0x2BDC14u;
label_2bdc14:
    // 0x2bdc14: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x2bdc14u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bdc18:
    // 0x2bdc18: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2bdc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_2bdc1c:
    // 0x2bdc1c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2bdc1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2bdc20:
    // 0x2bdc20: 0x268402c4  addiu       $a0, $s4, 0x2C4
    ctx->pc = 0x2bdc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 708));
label_2bdc24:
    // 0x2bdc24: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2bdc24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2bdc28:
    // 0x2bdc28: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2bdc28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2bdc2c:
    // 0x2bdc2c: 0xc094514  jal         func_251450
label_2bdc30:
    if (ctx->pc == 0x2BDC30u) {
        ctx->pc = 0x2BDC30u;
            // 0x2bdc30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC34u;
        goto label_2bdc34;
    }
    ctx->pc = 0x2BDC2Cu;
    SET_GPR_U32(ctx, 31, 0x2BDC34u);
    ctx->pc = 0x2BDC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDC2Cu;
            // 0x2bdc30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC34u; }
        if (ctx->pc != 0x2BDC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC34u; }
        if (ctx->pc != 0x2BDC34u) { return; }
    }
    ctx->pc = 0x2BDC34u;
label_2bdc34:
    // 0x2bdc34: 0x8e8202d8  lw          $v0, 0x2D8($s4)
    ctx->pc = 0x2bdc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 728)));
label_2bdc38:
    // 0x2bdc38: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_2bdc3c:
    if (ctx->pc == 0x2BDC3Cu) {
        ctx->pc = 0x2BDC40u;
        goto label_2bdc40;
    }
    ctx->pc = 0x2BDC38u;
    {
        const bool branch_taken_0x2bdc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdc38) {
            ctx->pc = 0x2BDD50u;
            goto label_2bdd50;
        }
    }
    ctx->pc = 0x2BDC40u;
label_2bdc40:
    // 0x2bdc40: 0x8e820294  lw          $v0, 0x294($s4)
    ctx->pc = 0x2bdc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 660)));
label_2bdc44:
    // 0x2bdc44: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_2bdc48:
    if (ctx->pc == 0x2BDC48u) {
        ctx->pc = 0x2BDC4Cu;
        goto label_2bdc4c;
    }
    ctx->pc = 0x2BDC44u;
    {
        const bool branch_taken_0x2bdc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdc44) {
            ctx->pc = 0x2BDD50u;
            goto label_2bdd50;
        }
    }
    ctx->pc = 0x2BDC4Cu;
label_2bdc4c:
    // 0x2bdc4c: 0xc047964  jal         func_11E590
label_2bdc50:
    if (ctx->pc == 0x2BDC50u) {
        ctx->pc = 0x2BDC50u;
            // 0x2bdc50: 0xc68c02c8  lwc1        $f12, 0x2C8($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BDC54u;
        goto label_2bdc54;
    }
    ctx->pc = 0x2BDC4Cu;
    SET_GPR_U32(ctx, 31, 0x2BDC54u);
    ctx->pc = 0x2BDC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDC4Cu;
            // 0x2bdc50: 0xc68c02c8  lwc1        $f12, 0x2C8($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC54u; }
        if (ctx->pc != 0x2BDC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC54u; }
        if (ctx->pc != 0x2BDC54u) { return; }
    }
    ctx->pc = 0x2BDC54u;
label_2bdc54:
    // 0x2bdc54: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2bdc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_2bdc58:
    // 0x2bdc58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bdc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2bdc5c:
    // 0x2bdc5c: 0xc68102c0  lwc1        $f1, 0x2C0($s4)
    ctx->pc = 0x2bdc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bdc60:
    // 0x2bdc60: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bdc60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2bdc64:
    // 0x2bdc64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bdc64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2bdc68:
    // 0x2bdc68: 0xe7a002d0  swc1        $f0, 0x2D0($sp)
    ctx->pc = 0x2bdc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
label_2bdc6c:
    // 0x2bdc6c: 0xc047a42  jal         func_11E908
label_2bdc70:
    if (ctx->pc == 0x2BDC70u) {
        ctx->pc = 0x2BDC70u;
            // 0x2bdc70: 0xc68c02cc  lwc1        $f12, 0x2CC($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BDC74u;
        goto label_2bdc74;
    }
    ctx->pc = 0x2BDC6Cu;
    SET_GPR_U32(ctx, 31, 0x2BDC74u);
    ctx->pc = 0x2BDC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDC6Cu;
            // 0x2bdc70: 0xc68c02cc  lwc1        $f12, 0x2CC($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC74u; }
        if (ctx->pc != 0x2BDC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC74u; }
        if (ctx->pc != 0x2BDC74u) { return; }
    }
    ctx->pc = 0x2BDC74u;
label_2bdc74:
    // 0x2bdc74: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2bdc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_2bdc78:
    // 0x2bdc78: 0x27a502d0  addiu       $a1, $sp, 0x2D0
    ctx->pc = 0x2bdc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_2bdc7c:
    // 0x2bdc7c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bdc7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2bdc80:
    // 0x2bdc80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bdc80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bdc84:
    // 0x2bdc84: 0xc68102c4  lwc1        $f1, 0x2C4($s4)
    ctx->pc = 0x2bdc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bdc88:
    // 0x2bdc88: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bdc88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2bdc8c:
    // 0x2bdc8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2bdc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2bdc90:
    // 0x2bdc90: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bdc90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2bdc94:
    // 0x2bdc94: 0xe7a002d4  swc1        $f0, 0x2D4($sp)
    ctx->pc = 0x2bdc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 724), bits); }
label_2bdc98:
    // 0x2bdc98: 0x8e8402d8  lw          $a0, 0x2D8($s4)
    ctx->pc = 0x2bdc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 728)));
label_2bdc9c:
    // 0x2bdc9c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2bdc9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2bdca0:
    // 0x2bdca0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bdca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bdca4:
    // 0x2bdca4: 0xc088e94  jal         func_223A50
label_2bdca8:
    if (ctx->pc == 0x2BDCA8u) {
        ctx->pc = 0x2BDCA8u;
            // 0x2bdca8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2BDCACu;
        goto label_2bdcac;
    }
    ctx->pc = 0x2BDCA4u;
    SET_GPR_U32(ctx, 31, 0x2BDCACu);
    ctx->pc = 0x2BDCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDCA4u;
            // 0x2bdca8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223A50u;
    if (runtime->hasFunction(0x223A50u)) {
        auto targetFn = runtime->lookupFunction(0x223A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDCACu; }
        if (ctx->pc != 0x2BDCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCursorDraw__FP10mgCTexturePffiif_0x223a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDCACu; }
        if (ctx->pc != 0x2BDCACu) { return; }
    }
    ctx->pc = 0x2BDCACu;
label_2bdcac:
    // 0x2bdcac: 0xc68202c8  lwc1        $f2, 0x2C8($s4)
    ctx->pc = 0x2bdcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2bdcb0:
    // 0x2bdcb0: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x2bdcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
label_2bdcb4:
    // 0x2bdcb4: 0x34437750  ori         $v1, $v0, 0x7750
    ctx->pc = 0x2bdcb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_2bdcb8:
    // 0x2bdcb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bdcb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bdcbc:
    // 0x2bdcbc: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x2bdcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
label_2bdcc0:
    // 0x2bdcc0: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2bdcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_2bdcc4:
    // 0x2bdcc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdcc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bdcc8:
    // 0x2bdcc8: 0x0  nop
    ctx->pc = 0x2bdcc8u;
    // NOP
label_2bdccc:
    // 0x2bdccc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2bdcccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2bdcd0:
    // 0x2bdcd0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2bdcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2bdcd4:
    // 0x2bdcd4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2bdcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2bdcd8:
    // 0x2bdcd8: 0xe68102c8  swc1        $f1, 0x2C8($s4)
    ctx->pc = 0x2bdcd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 712), bits); }
label_2bdcdc:
    // 0x2bdcdc: 0xc68102cc  lwc1        $f1, 0x2CC($s4)
    ctx->pc = 0x2bdcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bdce0:
    // 0x2bdce0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2bdce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2bdce4:
    // 0x2bdce4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bdce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2bdce8:
    // 0x2bdce8: 0xe68002cc  swc1        $f0, 0x2CC($s4)
    ctx->pc = 0x2bdce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 716), bits); }
label_2bdcec:
    // 0x2bdcec: 0xc68102c8  lwc1        $f1, 0x2C8($s4)
    ctx->pc = 0x2bdcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bdcf0:
    // 0x2bdcf0: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2bdcf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bdcf4:
    // 0x2bdcf4: 0x0  nop
    ctx->pc = 0x2bdcf4u;
    // NOP
label_2bdcf8:
    // 0x2bdcf8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_2bdcfc:
    if (ctx->pc == 0x2BDCFCu) {
        ctx->pc = 0x2BDCFCu;
            // 0x2bdcfc: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->pc = 0x2BDD00u;
        goto label_2bdd00;
    }
    ctx->pc = 0x2BDCF8u;
    {
        const bool branch_taken_0x2bdcf8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDCF8u;
            // 0x2bdcfc: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdcf8) {
            ctx->pc = 0x2BDD14u;
            goto label_2bdd14;
        }
    }
    ctx->pc = 0x2BDD00u;
label_2bdd00:
    // 0x2bdd00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2bdd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2bdd04:
    // 0x2bdd04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdd04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bdd08:
    // 0x2bdd08: 0x0  nop
    ctx->pc = 0x2bdd08u;
    // NOP
label_2bdd0c:
    // 0x2bdd0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bdd0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2bdd10:
    // 0x2bdd10: 0xe68002c8  swc1        $f0, 0x2C8($s4)
    ctx->pc = 0x2bdd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 712), bits); }
label_2bdd14:
    // 0x2bdd14: 0xc68102cc  lwc1        $f1, 0x2CC($s4)
    ctx->pc = 0x2bdd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bdd18:
    // 0x2bdd18: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2bdd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2bdd1c:
    // 0x2bdd1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2bdd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2bdd20:
    // 0x2bdd20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdd20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bdd24:
    // 0x2bdd24: 0x0  nop
    ctx->pc = 0x2bdd24u;
    // NOP
label_2bdd28:
    // 0x2bdd28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bdd28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bdd2c:
    // 0x2bdd2c: 0x0  nop
    ctx->pc = 0x2bdd2cu;
    // NOP
label_2bdd30:
    // 0x2bdd30: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_2bdd34:
    if (ctx->pc == 0x2BDD34u) {
        ctx->pc = 0x2BDD38u;
        goto label_2bdd38;
    }
    ctx->pc = 0x2BDD30u;
    {
        const bool branch_taken_0x2bdd30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bdd30) {
            ctx->pc = 0x2BDD50u;
            goto label_2bdd50;
        }
    }
    ctx->pc = 0x2BDD38u;
label_2bdd38:
    // 0x2bdd38: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2bdd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_2bdd3c:
    // 0x2bdd3c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2bdd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2bdd40:
    // 0x2bdd40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdd40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bdd44:
    // 0x2bdd44: 0x0  nop
    ctx->pc = 0x2bdd44u;
    // NOP
label_2bdd48:
    // 0x2bdd48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bdd48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2bdd4c:
    // 0x2bdd4c: 0xe68002cc  swc1        $f0, 0x2CC($s4)
    ctx->pc = 0x2bdd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 716), bits); }
label_2bdd50:
    // 0x2bdd50: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bdd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bdd54:
    // 0x2bdd54: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bdd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2bdd58:
    // 0x2bdd58: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x2bdd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
label_2bdd5c:
    // 0x2bdd5c: 0xc04ba14  jal         func_12E850
label_2bdd60:
    if (ctx->pc == 0x2BDD60u) {
        ctx->pc = 0x2BDD60u;
            // 0x2bdd60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDD64u;
        goto label_2bdd64;
    }
    ctx->pc = 0x2BDD5Cu;
    SET_GPR_U32(ctx, 31, 0x2BDD64u);
    ctx->pc = 0x2BDD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDD5Cu;
            // 0x2bdd60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDD64u; }
        if (ctx->pc != 0x2BDD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDD64u; }
        if (ctx->pc != 0x2BDD64u) { return; }
    }
    ctx->pc = 0x2BDD64u;
label_2bdd64:
    // 0x2bdd64: 0x8e8302d0  lw          $v1, 0x2D0($s4)
    ctx->pc = 0x2bdd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
label_2bdd68:
    // 0x2bdd68: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_2bdd6c:
    if (ctx->pc == 0x2BDD6Cu) {
        ctx->pc = 0x2BDD6Cu;
            // 0x2bdd6c: 0x24100072  addiu       $s0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->pc = 0x2BDD70u;
        goto label_2bdd70;
    }
    ctx->pc = 0x2BDD68u;
    {
        const bool branch_taken_0x2bdd68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDD68u;
            // 0x2bdd6c: 0x24100072  addiu       $s0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd68) {
            ctx->pc = 0x2BDDF8u;
            goto label_2bddf8;
        }
    }
    ctx->pc = 0x2BDD70u;
label_2bdd70:
    // 0x2bdd70: 0xc0873cc  jal         func_21CF30
label_2bdd74:
    if (ctx->pc == 0x2BDD74u) {
        ctx->pc = 0x2BDD74u;
            // 0x2bdd74: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x2BDD78u;
        goto label_2bdd78;
    }
    ctx->pc = 0x2BDD70u;
    SET_GPR_U32(ctx, 31, 0x2BDD78u);
    ctx->pc = 0x2BDD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDD70u;
            // 0x2bdd74: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDD78u; }
        if (ctx->pc != 0x2BDD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDD78u; }
        if (ctx->pc != 0x2BDD78u) { return; }
    }
    ctx->pc = 0x2BDD78u;
label_2bdd78:
    // 0x2bdd78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bdd78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bdd7c:
    // 0x2bdd7c: 0x278384fc  addiu       $v1, $gp, -0x7B04
    ctx->pc = 0x2bdd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935804));
label_2bdd80:
    // 0x2bdd80: 0x8e8202d0  lw          $v0, 0x2D0($s4)
    ctx->pc = 0x2bdd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
label_2bdd84:
    // 0x2bdd84: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2bdd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2bdd88:
    // 0x2bdd88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bdd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bdd8c:
    // 0x2bdd8c: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2bdd8cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2bdd90:
    // 0x2bdd90: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2bdd90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2bdd94:
    // 0x2bdd94: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2bdd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2bdd98:
    // 0x2bdd98: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bdd98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2bdd9c:
    // 0x2bdd9c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2bdd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2bdda0:
    // 0x2bdda0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bdda0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2bdda4:
    // 0x2bdda4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bdda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bdda8:
    // 0x2bdda8: 0xc065dc0  jal         func_197700
label_2bddac:
    if (ctx->pc == 0x2BDDACu) {
        ctx->pc = 0x2BDDACu;
            // 0x2bddac: 0x24440170  addiu       $a0, $v0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
        ctx->pc = 0x2BDDB0u;
        goto label_2bddb0;
    }
    ctx->pc = 0x2BDDA8u;
    SET_GPR_U32(ctx, 31, 0x2BDDB0u);
    ctx->pc = 0x2BDDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDDA8u;
            // 0x2bddac: 0x24440170  addiu       $a0, $v0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDDB0u; }
        if (ctx->pc != 0x2BDDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDDB0u; }
        if (ctx->pc != 0x2BDDB0u) { return; }
    }
    ctx->pc = 0x2BDDB0u;
label_2bddb0:
    // 0x2bddb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bddb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bddb4:
    // 0x2bddb4: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_2bddb8:
    if (ctx->pc == 0x2BDDB8u) {
        ctx->pc = 0x2BDDB8u;
            // 0x2bddb8: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x2BDDBCu;
        goto label_2bddbc;
    }
    ctx->pc = 0x2BDDB4u;
    {
        const bool branch_taken_0x2bddb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDDB4u;
            // 0x2bddb8: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bddb4) {
            ctx->pc = 0x2BDDE8u;
            goto label_2bdde8;
        }
    }
    ctx->pc = 0x2BDDBCu;
label_2bddbc:
    // 0x2bddbc: 0xc0b5160  jal         func_2D4580
label_2bddc0:
    if (ctx->pc == 0x2BDDC0u) {
        ctx->pc = 0x2BDDC4u;
        goto label_2bddc4;
    }
    ctx->pc = 0x2BDDBCu;
    SET_GPR_U32(ctx, 31, 0x2BDDC4u);
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDDC4u; }
        if (ctx->pc != 0x2BDDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDDC4u; }
        if (ctx->pc != 0x2BDDC4u) { return; }
    }
    ctx->pc = 0x2BDDC4u;
label_2bddc4:
    // 0x2bddc4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2bddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2bddc8:
    // 0x2bddc8: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x2bddc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_2bddcc:
    // 0x2bddcc: 0xc0b5130  jal         func_2D44C0
label_2bddd0:
    if (ctx->pc == 0x2BDDD0u) {
        ctx->pc = 0x2BDDD0u;
            // 0x2bddd0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDDD4u;
        goto label_2bddd4;
    }
    ctx->pc = 0x2BDDCCu;
    SET_GPR_U32(ctx, 31, 0x2BDDD4u);
    ctx->pc = 0x2BDDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDDCCu;
            // 0x2bddd0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDDD4u; }
        if (ctx->pc != 0x2BDDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDDD4u; }
        if (ctx->pc != 0x2BDDD4u) { return; }
    }
    ctx->pc = 0x2BDDD4u;
label_2bddd4:
    // 0x2bddd4: 0x8fa601e4  lw          $a2, 0x1E4($sp)
    ctx->pc = 0x2bddd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_2bddd8:
    // 0x2bddd8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2bddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2bdddc:
    // 0x2bdddc: 0x8fa701e8  lw          $a3, 0x1E8($sp)
    ctx->pc = 0x2bdddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2bdde0:
    // 0x2bdde0: 0xc0b5688  jal         func_2D5A20
label_2bdde4:
    if (ctx->pc == 0x2BDDE4u) {
        ctx->pc = 0x2BDDE4u;
            // 0x2bdde4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDDE8u;
        goto label_2bdde8;
    }
    ctx->pc = 0x2BDDE0u;
    SET_GPR_U32(ctx, 31, 0x2BDDE8u);
    ctx->pc = 0x2BDDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDDE0u;
            // 0x2bdde4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDDE8u; }
        if (ctx->pc != 0x2BDDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDDE8u; }
        if (ctx->pc != 0x2BDDE8u) { return; }
    }
    ctx->pc = 0x2BDDE8u;
label_2bdde8:
    // 0x2bdde8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2bdde8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2bddec:
    // 0x2bddec: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x2bddecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_2bddf0:
    // 0x2bddf0: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_2bddf4:
    if (ctx->pc == 0x2BDDF4u) {
        ctx->pc = 0x2BDDF4u;
            // 0x2bddf4: 0x26100042  addiu       $s0, $s0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 66));
        ctx->pc = 0x2BDDF8u;
        goto label_2bddf8;
    }
    ctx->pc = 0x2BDDF0u;
    {
        const bool branch_taken_0x2bddf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDDF0u;
            // 0x2bddf4: 0x26100042  addiu       $s0, $s0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bddf0) {
            ctx->pc = 0x2BDD7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bdd7c;
        }
    }
    ctx->pc = 0x2BDDF8u;
label_2bddf8:
    // 0x2bddf8: 0x8e8302ac  lw          $v1, 0x2AC($s4)
    ctx->pc = 0x2bddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 684)));
label_2bddfc:
    // 0x2bddfc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2bde00:
    if (ctx->pc == 0x2BDE00u) {
        ctx->pc = 0x2BDE00u;
            // 0x2bde00: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2BDE04u;
        goto label_2bde04;
    }
    ctx->pc = 0x2BDDFCu;
    {
        const bool branch_taken_0x2bddfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDDFCu;
            // 0x2bde00: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bddfc) {
            ctx->pc = 0x2BDE18u;
            goto label_2bde18;
        }
    }
    ctx->pc = 0x2BDE04u;
label_2bde04:
    // 0x2bde04: 0xc087898  jal         func_21E260
label_2bde08:
    if (ctx->pc == 0x2BDE08u) {
        ctx->pc = 0x2BDE08u;
            // 0x2bde08: 0x8c24ca40  lw          $a0, -0x35C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
        ctx->pc = 0x2BDE0Cu;
        goto label_2bde0c;
    }
    ctx->pc = 0x2BDE04u;
    SET_GPR_U32(ctx, 31, 0x2BDE0Cu);
    ctx->pc = 0x2BDE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDE04u;
            // 0x2bde08: 0x8c24ca40  lw          $a0, -0x35C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE0Cu; }
        if (ctx->pc != 0x2BDE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE0Cu; }
        if (ctx->pc != 0x2BDE0Cu) { return; }
    }
    ctx->pc = 0x2BDE0Cu;
label_2bde0c:
    // 0x2bde0c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bde0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bde10:
    // 0x2bde10: 0xc0878c8  jal         func_21E320
label_2bde14:
    if (ctx->pc == 0x2BDE14u) {
        ctx->pc = 0x2BDE14u;
            // 0x2bde14: 0x8c24ca40  lw          $a0, -0x35C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
        ctx->pc = 0x2BDE18u;
        goto label_2bde18;
    }
    ctx->pc = 0x2BDE10u;
    SET_GPR_U32(ctx, 31, 0x2BDE18u);
    ctx->pc = 0x2BDE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDE10u;
            // 0x2bde14: 0x8c24ca40  lw          $a0, -0x35C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE18u; }
        if (ctx->pc != 0x2BDE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE18u; }
        if (ctx->pc != 0x2BDE18u) { return; }
    }
    ctx->pc = 0x2BDE18u;
label_2bde18:
    // 0x2bde18: 0x8e8302b0  lw          $v1, 0x2B0($s4)
    ctx->pc = 0x2bde18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 688)));
label_2bde1c:
    // 0x2bde1c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2bde20:
    if (ctx->pc == 0x2BDE20u) {
        ctx->pc = 0x2BDE20u;
            // 0x2bde20: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2BDE24u;
        goto label_2bde24;
    }
    ctx->pc = 0x2BDE1Cu;
    {
        const bool branch_taken_0x2bde1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDE1Cu;
            // 0x2bde20: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde1c) {
            ctx->pc = 0x2BDE38u;
            goto label_2bde38;
        }
    }
    ctx->pc = 0x2BDE24u;
label_2bde24:
    // 0x2bde24: 0xc087898  jal         func_21E260
label_2bde28:
    if (ctx->pc == 0x2BDE28u) {
        ctx->pc = 0x2BDE28u;
            // 0x2bde28: 0x8c24ca5c  lw          $a0, -0x35A4($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
        ctx->pc = 0x2BDE2Cu;
        goto label_2bde2c;
    }
    ctx->pc = 0x2BDE24u;
    SET_GPR_U32(ctx, 31, 0x2BDE2Cu);
    ctx->pc = 0x2BDE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDE24u;
            // 0x2bde28: 0x8c24ca5c  lw          $a0, -0x35A4($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE2Cu; }
        if (ctx->pc != 0x2BDE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE2Cu; }
        if (ctx->pc != 0x2BDE2Cu) { return; }
    }
    ctx->pc = 0x2BDE2Cu;
label_2bde2c:
    // 0x2bde2c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bde2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bde30:
    // 0x2bde30: 0xc0878c8  jal         func_21E320
label_2bde34:
    if (ctx->pc == 0x2BDE34u) {
        ctx->pc = 0x2BDE34u;
            // 0x2bde34: 0x8c24ca5c  lw          $a0, -0x35A4($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
        ctx->pc = 0x2BDE38u;
        goto label_2bde38;
    }
    ctx->pc = 0x2BDE30u;
    SET_GPR_U32(ctx, 31, 0x2BDE38u);
    ctx->pc = 0x2BDE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDE30u;
            // 0x2bde34: 0x8c24ca5c  lw          $a0, -0x35A4($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE38u; }
        if (ctx->pc != 0x2BDE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE38u; }
        if (ctx->pc != 0x2BDE38u) { return; }
    }
    ctx->pc = 0x2BDE38u;
label_2bde38:
    // 0x2bde38: 0x8e8302b4  lw          $v1, 0x2B4($s4)
    ctx->pc = 0x2bde38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 692)));
label_2bde3c:
    // 0x2bde3c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_2bde40:
    if (ctx->pc == 0x2BDE40u) {
        ctx->pc = 0x2BDE44u;
        goto label_2bde44;
    }
    ctx->pc = 0x2BDE3Cu;
    {
        const bool branch_taken_0x2bde3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bde3c) {
            ctx->pc = 0x2BDED8u;
            goto label_2bded8;
        }
    }
    ctx->pc = 0x2BDE44u;
label_2bde44:
    // 0x2bde44: 0x8e8302ac  lw          $v1, 0x2AC($s4)
    ctx->pc = 0x2bde44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 684)));
label_2bde48:
    // 0x2bde48: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
label_2bde4c:
    if (ctx->pc == 0x2BDE4Cu) {
        ctx->pc = 0x2BDE50u;
        goto label_2bde50;
    }
    ctx->pc = 0x2BDE48u;
    {
        const bool branch_taken_0x2bde48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bde48) {
            ctx->pc = 0x2BDED8u;
            goto label_2bded8;
        }
    }
    ctx->pc = 0x2BDE50u;
label_2bde50:
    // 0x2bde50: 0x8e8302b0  lw          $v1, 0x2B0($s4)
    ctx->pc = 0x2bde50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 688)));
label_2bde54:
    // 0x2bde54: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
label_2bde58:
    if (ctx->pc == 0x2BDE58u) {
        ctx->pc = 0x2BDE5Cu;
        goto label_2bde5c;
    }
    ctx->pc = 0x2BDE54u;
    {
        const bool branch_taken_0x2bde54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bde54) {
            ctx->pc = 0x2BDED8u;
            goto label_2bded8;
        }
    }
    ctx->pc = 0x2BDE5Cu;
label_2bde5c:
    // 0x2bde5c: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x2bde5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
label_2bde60:
    // 0x2bde60: 0x8f898ad0  lw          $t1, -0x7530($gp)
    ctx->pc = 0x2bde60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_2bde64:
    // 0x2bde64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bde64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bde68:
    // 0x2bde68: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x2bde68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
label_2bde6c:
    // 0x2bde6c: 0x3c0343b8  lui         $v1, 0x43B8
    ctx->pc = 0x2bde6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17336 << 16));
label_2bde70:
    // 0x2bde70: 0x25084d18  addiu       $t0, $t0, 0x4D18
    ctx->pc = 0x2bde70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19736));
label_2bde74:
    // 0x2bde74: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2bde74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_2bde78:
    // 0x2bde78: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2bde78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2bde7c:
    // 0x2bde7c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2bde7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2bde80:
    // 0x2bde80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bde80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bde84:
    // 0x2bde84: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2bde84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2bde88:
    // 0x2bde88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bde88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bde8c:
    // 0x2bde8c: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x2bde8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_2bde90:
    // 0x2bde90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bde90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bde94:
    // 0x2bde94: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2bde94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_2bde98:
    // 0x2bde98: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2bde98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2bde9c:
    // 0x2bde9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bde9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bdea0:
    // 0x2bdea0: 0xc0887b8  jal         func_221EE0
label_2bdea4:
    if (ctx->pc == 0x2BDEA4u) {
        ctx->pc = 0x2BDEA4u;
            // 0x2bdea4: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2BDEA8u;
        goto label_2bdea8;
    }
    ctx->pc = 0x2BDEA0u;
    SET_GPR_U32(ctx, 31, 0x2BDEA8u);
    ctx->pc = 0x2BDEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDEA0u;
            // 0x2bdea4: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDEA8u; }
        if (ctx->pc != 0x2BDEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDEA8u; }
        if (ctx->pc != 0x2BDEA8u) { return; }
    }
    ctx->pc = 0x2BDEA8u;
label_2bdea8:
    // 0x2bdea8: 0xc0873cc  jal         func_21CF30
label_2bdeac:
    if (ctx->pc == 0x2BDEACu) {
        ctx->pc = 0x2BDEACu;
            // 0x2bdeac: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x2BDEB0u;
        goto label_2bdeb0;
    }
    ctx->pc = 0x2BDEA8u;
    SET_GPR_U32(ctx, 31, 0x2BDEB0u);
    ctx->pc = 0x2BDEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDEA8u;
            // 0x2bdeac: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDEB0u; }
        if (ctx->pc != 0x2BDEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDEB0u; }
        if (ctx->pc != 0x2BDEB0u) { return; }
    }
    ctx->pc = 0x2BDEB0u;
label_2bdeb0:
    // 0x2bdeb0: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x2bdeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_2bdeb4:
    // 0x2bdeb4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2bdeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2bdeb8:
    // 0x2bdeb8: 0x24424d00  addiu       $v0, $v0, 0x4D00
    ctx->pc = 0x2bdeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19712));
label_2bdebc:
    // 0x2bdebc: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2bdebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_2bdec0:
    // 0x2bdec0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x2bdec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2bdec4:
    // 0x2bdec4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bdec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2bdec8:
    // 0x2bdec8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bdec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bdecc:
    // 0x2bdecc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2bdeccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bded0:
    // 0x2bded0: 0xc0b5688  jal         func_2D5A20
label_2bded4:
    if (ctx->pc == 0x2BDED4u) {
        ctx->pc = 0x2BDED4u;
            // 0x2bded4: 0x24070178  addiu       $a3, $zero, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
        ctx->pc = 0x2BDED8u;
        goto label_2bded8;
    }
    ctx->pc = 0x2BDED0u;
    SET_GPR_U32(ctx, 31, 0x2BDED8u);
    ctx->pc = 0x2BDED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDED0u;
            // 0x2bded4: 0x24070178  addiu       $a3, $zero, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDED8u; }
        if (ctx->pc != 0x2BDED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDED8u; }
        if (ctx->pc != 0x2BDED8u) { return; }
    }
    ctx->pc = 0x2BDED8u;
label_2bded8:
    // 0x2bded8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2bded8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2bdedc:
    // 0x2bdedc: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2bdedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2bdee0:
    // 0x2bdee0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2bdee0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2bdee4:
    // 0x2bdee4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2bdee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2bdee8:
    // 0x2bdee8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2bdee8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2bdeec:
    // 0x2bdeec: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2bdeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2bdef0:
    // 0x2bdef0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2bdef0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2bdef4:
    // 0x2bdef4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2bdef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2bdef8:
    // 0x2bdef8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2bdef8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2bdefc:
    // 0x2bdefc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2bdefcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bdf00:
    // 0x2bdf00: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2bdf00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bdf04:
    // 0x2bdf04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bdf04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bdf08:
    // 0x2bdf08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bdf08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bdf0c:
    // 0x2bdf0c: 0x3e00008  jr          $ra
label_2bdf10:
    if (ctx->pc == 0x2BDF10u) {
        ctx->pc = 0x2BDF10u;
            // 0x2bdf10: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->pc = 0x2BDF14u;
        goto label_fallthrough_0x2bdf0c;
    }
    ctx->pc = 0x2BDF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF0Cu;
            // 0x2bdf10: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bdf0c:
    ctx->pc = 0x2BDF14u;
}
