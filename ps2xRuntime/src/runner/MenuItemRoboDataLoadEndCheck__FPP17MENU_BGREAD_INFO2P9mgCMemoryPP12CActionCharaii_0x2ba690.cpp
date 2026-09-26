#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemRoboDataLoadEndCheck__FPP17MENU_BGREAD_INFO2P9mgCMemoryPP12CActionCharaii
// Address: 0x2ba690 - 0x2baed0
void MenuItemRoboDataLoadEndCheck__FPP17MENU_BGREAD_INFO2P9mgCMemoryPP12CActionCharaii_0x2ba690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemRoboDataLoadEndCheck__FPP17MENU_BGREAD_INFO2P9mgCMemoryPP12CActionCharaii_0x2ba690");
#endif

    switch (ctx->pc) {
        case 0x2ba690u: goto label_2ba690;
        case 0x2ba694u: goto label_2ba694;
        case 0x2ba698u: goto label_2ba698;
        case 0x2ba69cu: goto label_2ba69c;
        case 0x2ba6a0u: goto label_2ba6a0;
        case 0x2ba6a4u: goto label_2ba6a4;
        case 0x2ba6a8u: goto label_2ba6a8;
        case 0x2ba6acu: goto label_2ba6ac;
        case 0x2ba6b0u: goto label_2ba6b0;
        case 0x2ba6b4u: goto label_2ba6b4;
        case 0x2ba6b8u: goto label_2ba6b8;
        case 0x2ba6bcu: goto label_2ba6bc;
        case 0x2ba6c0u: goto label_2ba6c0;
        case 0x2ba6c4u: goto label_2ba6c4;
        case 0x2ba6c8u: goto label_2ba6c8;
        case 0x2ba6ccu: goto label_2ba6cc;
        case 0x2ba6d0u: goto label_2ba6d0;
        case 0x2ba6d4u: goto label_2ba6d4;
        case 0x2ba6d8u: goto label_2ba6d8;
        case 0x2ba6dcu: goto label_2ba6dc;
        case 0x2ba6e0u: goto label_2ba6e0;
        case 0x2ba6e4u: goto label_2ba6e4;
        case 0x2ba6e8u: goto label_2ba6e8;
        case 0x2ba6ecu: goto label_2ba6ec;
        case 0x2ba6f0u: goto label_2ba6f0;
        case 0x2ba6f4u: goto label_2ba6f4;
        case 0x2ba6f8u: goto label_2ba6f8;
        case 0x2ba6fcu: goto label_2ba6fc;
        case 0x2ba700u: goto label_2ba700;
        case 0x2ba704u: goto label_2ba704;
        case 0x2ba708u: goto label_2ba708;
        case 0x2ba70cu: goto label_2ba70c;
        case 0x2ba710u: goto label_2ba710;
        case 0x2ba714u: goto label_2ba714;
        case 0x2ba718u: goto label_2ba718;
        case 0x2ba71cu: goto label_2ba71c;
        case 0x2ba720u: goto label_2ba720;
        case 0x2ba724u: goto label_2ba724;
        case 0x2ba728u: goto label_2ba728;
        case 0x2ba72cu: goto label_2ba72c;
        case 0x2ba730u: goto label_2ba730;
        case 0x2ba734u: goto label_2ba734;
        case 0x2ba738u: goto label_2ba738;
        case 0x2ba73cu: goto label_2ba73c;
        case 0x2ba740u: goto label_2ba740;
        case 0x2ba744u: goto label_2ba744;
        case 0x2ba748u: goto label_2ba748;
        case 0x2ba74cu: goto label_2ba74c;
        case 0x2ba750u: goto label_2ba750;
        case 0x2ba754u: goto label_2ba754;
        case 0x2ba758u: goto label_2ba758;
        case 0x2ba75cu: goto label_2ba75c;
        case 0x2ba760u: goto label_2ba760;
        case 0x2ba764u: goto label_2ba764;
        case 0x2ba768u: goto label_2ba768;
        case 0x2ba76cu: goto label_2ba76c;
        case 0x2ba770u: goto label_2ba770;
        case 0x2ba774u: goto label_2ba774;
        case 0x2ba778u: goto label_2ba778;
        case 0x2ba77cu: goto label_2ba77c;
        case 0x2ba780u: goto label_2ba780;
        case 0x2ba784u: goto label_2ba784;
        case 0x2ba788u: goto label_2ba788;
        case 0x2ba78cu: goto label_2ba78c;
        case 0x2ba790u: goto label_2ba790;
        case 0x2ba794u: goto label_2ba794;
        case 0x2ba798u: goto label_2ba798;
        case 0x2ba79cu: goto label_2ba79c;
        case 0x2ba7a0u: goto label_2ba7a0;
        case 0x2ba7a4u: goto label_2ba7a4;
        case 0x2ba7a8u: goto label_2ba7a8;
        case 0x2ba7acu: goto label_2ba7ac;
        case 0x2ba7b0u: goto label_2ba7b0;
        case 0x2ba7b4u: goto label_2ba7b4;
        case 0x2ba7b8u: goto label_2ba7b8;
        case 0x2ba7bcu: goto label_2ba7bc;
        case 0x2ba7c0u: goto label_2ba7c0;
        case 0x2ba7c4u: goto label_2ba7c4;
        case 0x2ba7c8u: goto label_2ba7c8;
        case 0x2ba7ccu: goto label_2ba7cc;
        case 0x2ba7d0u: goto label_2ba7d0;
        case 0x2ba7d4u: goto label_2ba7d4;
        case 0x2ba7d8u: goto label_2ba7d8;
        case 0x2ba7dcu: goto label_2ba7dc;
        case 0x2ba7e0u: goto label_2ba7e0;
        case 0x2ba7e4u: goto label_2ba7e4;
        case 0x2ba7e8u: goto label_2ba7e8;
        case 0x2ba7ecu: goto label_2ba7ec;
        case 0x2ba7f0u: goto label_2ba7f0;
        case 0x2ba7f4u: goto label_2ba7f4;
        case 0x2ba7f8u: goto label_2ba7f8;
        case 0x2ba7fcu: goto label_2ba7fc;
        case 0x2ba800u: goto label_2ba800;
        case 0x2ba804u: goto label_2ba804;
        case 0x2ba808u: goto label_2ba808;
        case 0x2ba80cu: goto label_2ba80c;
        case 0x2ba810u: goto label_2ba810;
        case 0x2ba814u: goto label_2ba814;
        case 0x2ba818u: goto label_2ba818;
        case 0x2ba81cu: goto label_2ba81c;
        case 0x2ba820u: goto label_2ba820;
        case 0x2ba824u: goto label_2ba824;
        case 0x2ba828u: goto label_2ba828;
        case 0x2ba82cu: goto label_2ba82c;
        case 0x2ba830u: goto label_2ba830;
        case 0x2ba834u: goto label_2ba834;
        case 0x2ba838u: goto label_2ba838;
        case 0x2ba83cu: goto label_2ba83c;
        case 0x2ba840u: goto label_2ba840;
        case 0x2ba844u: goto label_2ba844;
        case 0x2ba848u: goto label_2ba848;
        case 0x2ba84cu: goto label_2ba84c;
        case 0x2ba850u: goto label_2ba850;
        case 0x2ba854u: goto label_2ba854;
        case 0x2ba858u: goto label_2ba858;
        case 0x2ba85cu: goto label_2ba85c;
        case 0x2ba860u: goto label_2ba860;
        case 0x2ba864u: goto label_2ba864;
        case 0x2ba868u: goto label_2ba868;
        case 0x2ba86cu: goto label_2ba86c;
        case 0x2ba870u: goto label_2ba870;
        case 0x2ba874u: goto label_2ba874;
        case 0x2ba878u: goto label_2ba878;
        case 0x2ba87cu: goto label_2ba87c;
        case 0x2ba880u: goto label_2ba880;
        case 0x2ba884u: goto label_2ba884;
        case 0x2ba888u: goto label_2ba888;
        case 0x2ba88cu: goto label_2ba88c;
        case 0x2ba890u: goto label_2ba890;
        case 0x2ba894u: goto label_2ba894;
        case 0x2ba898u: goto label_2ba898;
        case 0x2ba89cu: goto label_2ba89c;
        case 0x2ba8a0u: goto label_2ba8a0;
        case 0x2ba8a4u: goto label_2ba8a4;
        case 0x2ba8a8u: goto label_2ba8a8;
        case 0x2ba8acu: goto label_2ba8ac;
        case 0x2ba8b0u: goto label_2ba8b0;
        case 0x2ba8b4u: goto label_2ba8b4;
        case 0x2ba8b8u: goto label_2ba8b8;
        case 0x2ba8bcu: goto label_2ba8bc;
        case 0x2ba8c0u: goto label_2ba8c0;
        case 0x2ba8c4u: goto label_2ba8c4;
        case 0x2ba8c8u: goto label_2ba8c8;
        case 0x2ba8ccu: goto label_2ba8cc;
        case 0x2ba8d0u: goto label_2ba8d0;
        case 0x2ba8d4u: goto label_2ba8d4;
        case 0x2ba8d8u: goto label_2ba8d8;
        case 0x2ba8dcu: goto label_2ba8dc;
        case 0x2ba8e0u: goto label_2ba8e0;
        case 0x2ba8e4u: goto label_2ba8e4;
        case 0x2ba8e8u: goto label_2ba8e8;
        case 0x2ba8ecu: goto label_2ba8ec;
        case 0x2ba8f0u: goto label_2ba8f0;
        case 0x2ba8f4u: goto label_2ba8f4;
        case 0x2ba8f8u: goto label_2ba8f8;
        case 0x2ba8fcu: goto label_2ba8fc;
        case 0x2ba900u: goto label_2ba900;
        case 0x2ba904u: goto label_2ba904;
        case 0x2ba908u: goto label_2ba908;
        case 0x2ba90cu: goto label_2ba90c;
        case 0x2ba910u: goto label_2ba910;
        case 0x2ba914u: goto label_2ba914;
        case 0x2ba918u: goto label_2ba918;
        case 0x2ba91cu: goto label_2ba91c;
        case 0x2ba920u: goto label_2ba920;
        case 0x2ba924u: goto label_2ba924;
        case 0x2ba928u: goto label_2ba928;
        case 0x2ba92cu: goto label_2ba92c;
        case 0x2ba930u: goto label_2ba930;
        case 0x2ba934u: goto label_2ba934;
        case 0x2ba938u: goto label_2ba938;
        case 0x2ba93cu: goto label_2ba93c;
        case 0x2ba940u: goto label_2ba940;
        case 0x2ba944u: goto label_2ba944;
        case 0x2ba948u: goto label_2ba948;
        case 0x2ba94cu: goto label_2ba94c;
        case 0x2ba950u: goto label_2ba950;
        case 0x2ba954u: goto label_2ba954;
        case 0x2ba958u: goto label_2ba958;
        case 0x2ba95cu: goto label_2ba95c;
        case 0x2ba960u: goto label_2ba960;
        case 0x2ba964u: goto label_2ba964;
        case 0x2ba968u: goto label_2ba968;
        case 0x2ba96cu: goto label_2ba96c;
        case 0x2ba970u: goto label_2ba970;
        case 0x2ba974u: goto label_2ba974;
        case 0x2ba978u: goto label_2ba978;
        case 0x2ba97cu: goto label_2ba97c;
        case 0x2ba980u: goto label_2ba980;
        case 0x2ba984u: goto label_2ba984;
        case 0x2ba988u: goto label_2ba988;
        case 0x2ba98cu: goto label_2ba98c;
        case 0x2ba990u: goto label_2ba990;
        case 0x2ba994u: goto label_2ba994;
        case 0x2ba998u: goto label_2ba998;
        case 0x2ba99cu: goto label_2ba99c;
        case 0x2ba9a0u: goto label_2ba9a0;
        case 0x2ba9a4u: goto label_2ba9a4;
        case 0x2ba9a8u: goto label_2ba9a8;
        case 0x2ba9acu: goto label_2ba9ac;
        case 0x2ba9b0u: goto label_2ba9b0;
        case 0x2ba9b4u: goto label_2ba9b4;
        case 0x2ba9b8u: goto label_2ba9b8;
        case 0x2ba9bcu: goto label_2ba9bc;
        case 0x2ba9c0u: goto label_2ba9c0;
        case 0x2ba9c4u: goto label_2ba9c4;
        case 0x2ba9c8u: goto label_2ba9c8;
        case 0x2ba9ccu: goto label_2ba9cc;
        case 0x2ba9d0u: goto label_2ba9d0;
        case 0x2ba9d4u: goto label_2ba9d4;
        case 0x2ba9d8u: goto label_2ba9d8;
        case 0x2ba9dcu: goto label_2ba9dc;
        case 0x2ba9e0u: goto label_2ba9e0;
        case 0x2ba9e4u: goto label_2ba9e4;
        case 0x2ba9e8u: goto label_2ba9e8;
        case 0x2ba9ecu: goto label_2ba9ec;
        case 0x2ba9f0u: goto label_2ba9f0;
        case 0x2ba9f4u: goto label_2ba9f4;
        case 0x2ba9f8u: goto label_2ba9f8;
        case 0x2ba9fcu: goto label_2ba9fc;
        case 0x2baa00u: goto label_2baa00;
        case 0x2baa04u: goto label_2baa04;
        case 0x2baa08u: goto label_2baa08;
        case 0x2baa0cu: goto label_2baa0c;
        case 0x2baa10u: goto label_2baa10;
        case 0x2baa14u: goto label_2baa14;
        case 0x2baa18u: goto label_2baa18;
        case 0x2baa1cu: goto label_2baa1c;
        case 0x2baa20u: goto label_2baa20;
        case 0x2baa24u: goto label_2baa24;
        case 0x2baa28u: goto label_2baa28;
        case 0x2baa2cu: goto label_2baa2c;
        case 0x2baa30u: goto label_2baa30;
        case 0x2baa34u: goto label_2baa34;
        case 0x2baa38u: goto label_2baa38;
        case 0x2baa3cu: goto label_2baa3c;
        case 0x2baa40u: goto label_2baa40;
        case 0x2baa44u: goto label_2baa44;
        case 0x2baa48u: goto label_2baa48;
        case 0x2baa4cu: goto label_2baa4c;
        case 0x2baa50u: goto label_2baa50;
        case 0x2baa54u: goto label_2baa54;
        case 0x2baa58u: goto label_2baa58;
        case 0x2baa5cu: goto label_2baa5c;
        case 0x2baa60u: goto label_2baa60;
        case 0x2baa64u: goto label_2baa64;
        case 0x2baa68u: goto label_2baa68;
        case 0x2baa6cu: goto label_2baa6c;
        case 0x2baa70u: goto label_2baa70;
        case 0x2baa74u: goto label_2baa74;
        case 0x2baa78u: goto label_2baa78;
        case 0x2baa7cu: goto label_2baa7c;
        case 0x2baa80u: goto label_2baa80;
        case 0x2baa84u: goto label_2baa84;
        case 0x2baa88u: goto label_2baa88;
        case 0x2baa8cu: goto label_2baa8c;
        case 0x2baa90u: goto label_2baa90;
        case 0x2baa94u: goto label_2baa94;
        case 0x2baa98u: goto label_2baa98;
        case 0x2baa9cu: goto label_2baa9c;
        case 0x2baaa0u: goto label_2baaa0;
        case 0x2baaa4u: goto label_2baaa4;
        case 0x2baaa8u: goto label_2baaa8;
        case 0x2baaacu: goto label_2baaac;
        case 0x2baab0u: goto label_2baab0;
        case 0x2baab4u: goto label_2baab4;
        case 0x2baab8u: goto label_2baab8;
        case 0x2baabcu: goto label_2baabc;
        case 0x2baac0u: goto label_2baac0;
        case 0x2baac4u: goto label_2baac4;
        case 0x2baac8u: goto label_2baac8;
        case 0x2baaccu: goto label_2baacc;
        case 0x2baad0u: goto label_2baad0;
        case 0x2baad4u: goto label_2baad4;
        case 0x2baad8u: goto label_2baad8;
        case 0x2baadcu: goto label_2baadc;
        case 0x2baae0u: goto label_2baae0;
        case 0x2baae4u: goto label_2baae4;
        case 0x2baae8u: goto label_2baae8;
        case 0x2baaecu: goto label_2baaec;
        case 0x2baaf0u: goto label_2baaf0;
        case 0x2baaf4u: goto label_2baaf4;
        case 0x2baaf8u: goto label_2baaf8;
        case 0x2baafcu: goto label_2baafc;
        case 0x2bab00u: goto label_2bab00;
        case 0x2bab04u: goto label_2bab04;
        case 0x2bab08u: goto label_2bab08;
        case 0x2bab0cu: goto label_2bab0c;
        case 0x2bab10u: goto label_2bab10;
        case 0x2bab14u: goto label_2bab14;
        case 0x2bab18u: goto label_2bab18;
        case 0x2bab1cu: goto label_2bab1c;
        case 0x2bab20u: goto label_2bab20;
        case 0x2bab24u: goto label_2bab24;
        case 0x2bab28u: goto label_2bab28;
        case 0x2bab2cu: goto label_2bab2c;
        case 0x2bab30u: goto label_2bab30;
        case 0x2bab34u: goto label_2bab34;
        case 0x2bab38u: goto label_2bab38;
        case 0x2bab3cu: goto label_2bab3c;
        case 0x2bab40u: goto label_2bab40;
        case 0x2bab44u: goto label_2bab44;
        case 0x2bab48u: goto label_2bab48;
        case 0x2bab4cu: goto label_2bab4c;
        case 0x2bab50u: goto label_2bab50;
        case 0x2bab54u: goto label_2bab54;
        case 0x2bab58u: goto label_2bab58;
        case 0x2bab5cu: goto label_2bab5c;
        case 0x2bab60u: goto label_2bab60;
        case 0x2bab64u: goto label_2bab64;
        case 0x2bab68u: goto label_2bab68;
        case 0x2bab6cu: goto label_2bab6c;
        case 0x2bab70u: goto label_2bab70;
        case 0x2bab74u: goto label_2bab74;
        case 0x2bab78u: goto label_2bab78;
        case 0x2bab7cu: goto label_2bab7c;
        case 0x2bab80u: goto label_2bab80;
        case 0x2bab84u: goto label_2bab84;
        case 0x2bab88u: goto label_2bab88;
        case 0x2bab8cu: goto label_2bab8c;
        case 0x2bab90u: goto label_2bab90;
        case 0x2bab94u: goto label_2bab94;
        case 0x2bab98u: goto label_2bab98;
        case 0x2bab9cu: goto label_2bab9c;
        case 0x2baba0u: goto label_2baba0;
        case 0x2baba4u: goto label_2baba4;
        case 0x2baba8u: goto label_2baba8;
        case 0x2babacu: goto label_2babac;
        case 0x2babb0u: goto label_2babb0;
        case 0x2babb4u: goto label_2babb4;
        case 0x2babb8u: goto label_2babb8;
        case 0x2babbcu: goto label_2babbc;
        case 0x2babc0u: goto label_2babc0;
        case 0x2babc4u: goto label_2babc4;
        case 0x2babc8u: goto label_2babc8;
        case 0x2babccu: goto label_2babcc;
        case 0x2babd0u: goto label_2babd0;
        case 0x2babd4u: goto label_2babd4;
        case 0x2babd8u: goto label_2babd8;
        case 0x2babdcu: goto label_2babdc;
        case 0x2babe0u: goto label_2babe0;
        case 0x2babe4u: goto label_2babe4;
        case 0x2babe8u: goto label_2babe8;
        case 0x2babecu: goto label_2babec;
        case 0x2babf0u: goto label_2babf0;
        case 0x2babf4u: goto label_2babf4;
        case 0x2babf8u: goto label_2babf8;
        case 0x2babfcu: goto label_2babfc;
        case 0x2bac00u: goto label_2bac00;
        case 0x2bac04u: goto label_2bac04;
        case 0x2bac08u: goto label_2bac08;
        case 0x2bac0cu: goto label_2bac0c;
        case 0x2bac10u: goto label_2bac10;
        case 0x2bac14u: goto label_2bac14;
        case 0x2bac18u: goto label_2bac18;
        case 0x2bac1cu: goto label_2bac1c;
        case 0x2bac20u: goto label_2bac20;
        case 0x2bac24u: goto label_2bac24;
        case 0x2bac28u: goto label_2bac28;
        case 0x2bac2cu: goto label_2bac2c;
        case 0x2bac30u: goto label_2bac30;
        case 0x2bac34u: goto label_2bac34;
        case 0x2bac38u: goto label_2bac38;
        case 0x2bac3cu: goto label_2bac3c;
        case 0x2bac40u: goto label_2bac40;
        case 0x2bac44u: goto label_2bac44;
        case 0x2bac48u: goto label_2bac48;
        case 0x2bac4cu: goto label_2bac4c;
        case 0x2bac50u: goto label_2bac50;
        case 0x2bac54u: goto label_2bac54;
        case 0x2bac58u: goto label_2bac58;
        case 0x2bac5cu: goto label_2bac5c;
        case 0x2bac60u: goto label_2bac60;
        case 0x2bac64u: goto label_2bac64;
        case 0x2bac68u: goto label_2bac68;
        case 0x2bac6cu: goto label_2bac6c;
        case 0x2bac70u: goto label_2bac70;
        case 0x2bac74u: goto label_2bac74;
        case 0x2bac78u: goto label_2bac78;
        case 0x2bac7cu: goto label_2bac7c;
        case 0x2bac80u: goto label_2bac80;
        case 0x2bac84u: goto label_2bac84;
        case 0x2bac88u: goto label_2bac88;
        case 0x2bac8cu: goto label_2bac8c;
        case 0x2bac90u: goto label_2bac90;
        case 0x2bac94u: goto label_2bac94;
        case 0x2bac98u: goto label_2bac98;
        case 0x2bac9cu: goto label_2bac9c;
        case 0x2baca0u: goto label_2baca0;
        case 0x2baca4u: goto label_2baca4;
        case 0x2baca8u: goto label_2baca8;
        case 0x2bacacu: goto label_2bacac;
        case 0x2bacb0u: goto label_2bacb0;
        case 0x2bacb4u: goto label_2bacb4;
        case 0x2bacb8u: goto label_2bacb8;
        case 0x2bacbcu: goto label_2bacbc;
        case 0x2bacc0u: goto label_2bacc0;
        case 0x2bacc4u: goto label_2bacc4;
        case 0x2bacc8u: goto label_2bacc8;
        case 0x2bacccu: goto label_2baccc;
        case 0x2bacd0u: goto label_2bacd0;
        case 0x2bacd4u: goto label_2bacd4;
        case 0x2bacd8u: goto label_2bacd8;
        case 0x2bacdcu: goto label_2bacdc;
        case 0x2bace0u: goto label_2bace0;
        case 0x2bace4u: goto label_2bace4;
        case 0x2bace8u: goto label_2bace8;
        case 0x2bacecu: goto label_2bacec;
        case 0x2bacf0u: goto label_2bacf0;
        case 0x2bacf4u: goto label_2bacf4;
        case 0x2bacf8u: goto label_2bacf8;
        case 0x2bacfcu: goto label_2bacfc;
        case 0x2bad00u: goto label_2bad00;
        case 0x2bad04u: goto label_2bad04;
        case 0x2bad08u: goto label_2bad08;
        case 0x2bad0cu: goto label_2bad0c;
        case 0x2bad10u: goto label_2bad10;
        case 0x2bad14u: goto label_2bad14;
        case 0x2bad18u: goto label_2bad18;
        case 0x2bad1cu: goto label_2bad1c;
        case 0x2bad20u: goto label_2bad20;
        case 0x2bad24u: goto label_2bad24;
        case 0x2bad28u: goto label_2bad28;
        case 0x2bad2cu: goto label_2bad2c;
        case 0x2bad30u: goto label_2bad30;
        case 0x2bad34u: goto label_2bad34;
        case 0x2bad38u: goto label_2bad38;
        case 0x2bad3cu: goto label_2bad3c;
        case 0x2bad40u: goto label_2bad40;
        case 0x2bad44u: goto label_2bad44;
        case 0x2bad48u: goto label_2bad48;
        case 0x2bad4cu: goto label_2bad4c;
        case 0x2bad50u: goto label_2bad50;
        case 0x2bad54u: goto label_2bad54;
        case 0x2bad58u: goto label_2bad58;
        case 0x2bad5cu: goto label_2bad5c;
        case 0x2bad60u: goto label_2bad60;
        case 0x2bad64u: goto label_2bad64;
        case 0x2bad68u: goto label_2bad68;
        case 0x2bad6cu: goto label_2bad6c;
        case 0x2bad70u: goto label_2bad70;
        case 0x2bad74u: goto label_2bad74;
        case 0x2bad78u: goto label_2bad78;
        case 0x2bad7cu: goto label_2bad7c;
        case 0x2bad80u: goto label_2bad80;
        case 0x2bad84u: goto label_2bad84;
        case 0x2bad88u: goto label_2bad88;
        case 0x2bad8cu: goto label_2bad8c;
        case 0x2bad90u: goto label_2bad90;
        case 0x2bad94u: goto label_2bad94;
        case 0x2bad98u: goto label_2bad98;
        case 0x2bad9cu: goto label_2bad9c;
        case 0x2bada0u: goto label_2bada0;
        case 0x2bada4u: goto label_2bada4;
        case 0x2bada8u: goto label_2bada8;
        case 0x2badacu: goto label_2badac;
        case 0x2badb0u: goto label_2badb0;
        case 0x2badb4u: goto label_2badb4;
        case 0x2badb8u: goto label_2badb8;
        case 0x2badbcu: goto label_2badbc;
        case 0x2badc0u: goto label_2badc0;
        case 0x2badc4u: goto label_2badc4;
        case 0x2badc8u: goto label_2badc8;
        case 0x2badccu: goto label_2badcc;
        case 0x2badd0u: goto label_2badd0;
        case 0x2badd4u: goto label_2badd4;
        case 0x2badd8u: goto label_2badd8;
        case 0x2baddcu: goto label_2baddc;
        case 0x2bade0u: goto label_2bade0;
        case 0x2bade4u: goto label_2bade4;
        case 0x2bade8u: goto label_2bade8;
        case 0x2badecu: goto label_2badec;
        case 0x2badf0u: goto label_2badf0;
        case 0x2badf4u: goto label_2badf4;
        case 0x2badf8u: goto label_2badf8;
        case 0x2badfcu: goto label_2badfc;
        case 0x2bae00u: goto label_2bae00;
        case 0x2bae04u: goto label_2bae04;
        case 0x2bae08u: goto label_2bae08;
        case 0x2bae0cu: goto label_2bae0c;
        case 0x2bae10u: goto label_2bae10;
        case 0x2bae14u: goto label_2bae14;
        case 0x2bae18u: goto label_2bae18;
        case 0x2bae1cu: goto label_2bae1c;
        case 0x2bae20u: goto label_2bae20;
        case 0x2bae24u: goto label_2bae24;
        case 0x2bae28u: goto label_2bae28;
        case 0x2bae2cu: goto label_2bae2c;
        case 0x2bae30u: goto label_2bae30;
        case 0x2bae34u: goto label_2bae34;
        case 0x2bae38u: goto label_2bae38;
        case 0x2bae3cu: goto label_2bae3c;
        case 0x2bae40u: goto label_2bae40;
        case 0x2bae44u: goto label_2bae44;
        case 0x2bae48u: goto label_2bae48;
        case 0x2bae4cu: goto label_2bae4c;
        case 0x2bae50u: goto label_2bae50;
        case 0x2bae54u: goto label_2bae54;
        case 0x2bae58u: goto label_2bae58;
        case 0x2bae5cu: goto label_2bae5c;
        case 0x2bae60u: goto label_2bae60;
        case 0x2bae64u: goto label_2bae64;
        case 0x2bae68u: goto label_2bae68;
        case 0x2bae6cu: goto label_2bae6c;
        case 0x2bae70u: goto label_2bae70;
        case 0x2bae74u: goto label_2bae74;
        case 0x2bae78u: goto label_2bae78;
        case 0x2bae7cu: goto label_2bae7c;
        case 0x2bae80u: goto label_2bae80;
        case 0x2bae84u: goto label_2bae84;
        case 0x2bae88u: goto label_2bae88;
        case 0x2bae8cu: goto label_2bae8c;
        case 0x2bae90u: goto label_2bae90;
        case 0x2bae94u: goto label_2bae94;
        case 0x2bae98u: goto label_2bae98;
        case 0x2bae9cu: goto label_2bae9c;
        case 0x2baea0u: goto label_2baea0;
        case 0x2baea4u: goto label_2baea4;
        case 0x2baea8u: goto label_2baea8;
        case 0x2baeacu: goto label_2baeac;
        case 0x2baeb0u: goto label_2baeb0;
        case 0x2baeb4u: goto label_2baeb4;
        case 0x2baeb8u: goto label_2baeb8;
        case 0x2baebcu: goto label_2baebc;
        case 0x2baec0u: goto label_2baec0;
        case 0x2baec4u: goto label_2baec4;
        case 0x2baec8u: goto label_2baec8;
        case 0x2baeccu: goto label_2baecc;
        default: break;
    }

    ctx->pc = 0x2ba690u;

label_2ba690:
    // 0x2ba690: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2ba690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_2ba694:
    // 0x2ba694: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2ba694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
label_2ba698:
    // 0x2ba698: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2ba698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2ba69c:
    // 0x2ba69c: 0x2442d0a0  addiu       $v0, $v0, -0x2F60
    ctx->pc = 0x2ba69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955168));
label_2ba6a0:
    // 0x2ba6a0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2ba6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2ba6a4:
    // 0x2ba6a4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ba6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2ba6a8:
    // 0x2ba6a8: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2ba6a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ba6ac:
    // 0x2ba6ac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ba6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2ba6b0:
    // 0x2ba6b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ba6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2ba6b4:
    // 0x2ba6b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ba6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2ba6b8:
    // 0x2ba6b8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2ba6b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ba6bc:
    // 0x2ba6bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ba6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ba6c0:
    // 0x2ba6c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ba6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ba6c4:
    // 0x2ba6c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ba6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ba6c8:
    // 0x2ba6c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ba6cc:
    // 0x2ba6cc: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x2ba6ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
label_2ba6d0:
    // 0x2ba6d0: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x2ba6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
label_2ba6d4:
    // 0x2ba6d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ba6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba6d8:
    // 0x2ba6d8: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x2ba6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_2ba6dc:
    // 0x2ba6dc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ba6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2ba6e0:
    // 0x2ba6e0: 0xafa800a4  sw          $t0, 0xA4($sp)
    ctx->pc = 0x2ba6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 8));
label_2ba6e4:
    // 0x2ba6e4: 0x26311ef0  addiu       $s1, $s1, 0x1EF0
    ctx->pc = 0x2ba6e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
label_2ba6e8:
    // 0x2ba6e8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2ba6e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2ba6ec:
    // 0x2ba6ec: 0x8f9494a4  lw          $s4, -0x6B5C($gp)
    ctx->pc = 0x2ba6ecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2ba6f0:
    // 0x2ba6f0: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x2ba6f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_2ba6f4:
    // 0x2ba6f4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2ba6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_2ba6f8:
    // 0x2ba6f8: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
label_2ba6fc:
    if (ctx->pc == 0x2BA6FCu) {
        ctx->pc = 0x2BA6FCu;
            // 0x2ba6fc: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->pc = 0x2BA700u;
        goto label_2ba700;
    }
    ctx->pc = 0x2BA6F8u;
    {
        const bool branch_taken_0x2ba6f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA6F8u;
            // 0x2ba6fc: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba6f8) {
            ctx->pc = 0x2BA734u;
            goto label_2ba734;
        }
    }
    ctx->pc = 0x2BA700u;
label_2ba700:
    // 0x2ba700: 0x83829b77  lb          $v0, -0x6489($gp)
    ctx->pc = 0x2ba700u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941559)));
label_2ba704:
    // 0x2ba704: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2ba708:
    if (ctx->pc == 0x2BA708u) {
        ctx->pc = 0x2BA708u;
            // 0x2ba708: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA70Cu;
        goto label_2ba70c;
    }
    ctx->pc = 0x2BA704u;
    {
        const bool branch_taken_0x2ba704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA704u;
            // 0x2ba708: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba704) {
            ctx->pc = 0x2BA734u;
            goto label_2ba734;
        }
    }
    ctx->pc = 0x2BA70Cu;
label_2ba70c:
    // 0x2ba70c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ba70cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba710:
    // 0x2ba710: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ba710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ba714:
    // 0x2ba714: 0xc0a0ed8  jal         func_283B60
label_2ba718:
    if (ctx->pc == 0x2BA718u) {
        ctx->pc = 0x2BA718u;
            // 0x2ba718: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA71Cu;
        goto label_2ba71c;
    }
    ctx->pc = 0x2BA714u;
    SET_GPR_U32(ctx, 31, 0x2BA71Cu);
    ctx->pc = 0x2BA718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA714u;
            // 0x2ba718: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA71Cu; }
        if (ctx->pc != 0x2BA71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA71Cu; }
        if (ctx->pc != 0x2BA71Cu) { return; }
    }
    ctx->pc = 0x2BA71Cu;
label_2ba71c:
    // 0x2ba71c: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x2ba71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_2ba720:
    // 0x2ba720: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ba720u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2ba724:
    // 0x2ba724: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x2ba724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
label_2ba728:
    // 0x2ba728: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x2ba728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_2ba72c:
    // 0x2ba72c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2ba730:
    if (ctx->pc == 0x2BA730u) {
        ctx->pc = 0x2BA730u;
            // 0x2ba730: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x2BA734u;
        goto label_2ba734;
    }
    ctx->pc = 0x2BA72Cu;
    {
        const bool branch_taken_0x2ba72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA72Cu;
            // 0x2ba730: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba72c) {
            ctx->pc = 0x2BA710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ba710;
        }
    }
    ctx->pc = 0x2BA734u;
label_2ba734:
    // 0x2ba734: 0x0  nop
    ctx->pc = 0x2ba734u;
    // NOP
label_2ba738:
    // 0x2ba738: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2ba738u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2ba73c:
    // 0x2ba73c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ba73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ba740:
    // 0x2ba740: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2ba744:
    if (ctx->pc == 0x2BA744u) {
        ctx->pc = 0x2BA748u;
        goto label_2ba748;
    }
    ctx->pc = 0x2BA740u;
    {
        const bool branch_taken_0x2ba740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ba740) {
            ctx->pc = 0x2BA75Cu;
            goto label_2ba75c;
        }
    }
    ctx->pc = 0x2BA748u;
label_2ba748:
    // 0x2ba748: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x2ba748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2ba74c:
    // 0x2ba74c: 0xc04b950  jal         func_12E540
label_2ba750:
    if (ctx->pc == 0x2BA750u) {
        ctx->pc = 0x2BA750u;
            // 0x2ba750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA754u;
        goto label_2ba754;
    }
    ctx->pc = 0x2BA74Cu;
    SET_GPR_U32(ctx, 31, 0x2BA754u);
    ctx->pc = 0x2BA750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA74Cu;
            // 0x2ba750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA754u; }
        if (ctx->pc != 0x2BA754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA754u; }
        if (ctx->pc != 0x2BA754u) { return; }
    }
    ctx->pc = 0x2BA754u;
label_2ba754:
    // 0x2ba754: 0x10000017  b           . + 4 + (0x17 << 2)
label_2ba758:
    if (ctx->pc == 0x2BA758u) {
        ctx->pc = 0x2BA758u;
            // 0x2ba758: 0x83829b72  lb          $v0, -0x648E($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941554)));
        ctx->pc = 0x2BA75Cu;
        goto label_2ba75c;
    }
    ctx->pc = 0x2BA754u;
    {
        const bool branch_taken_0x2ba754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA754u;
            // 0x2ba758: 0x83829b72  lb          $v0, -0x648E($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941554)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba754) {
            ctx->pc = 0x2BA7B4u;
            goto label_2ba7b4;
        }
    }
    ctx->pc = 0x2BA75Cu;
label_2ba75c:
    // 0x2ba75c: 0x83829b74  lb          $v0, -0x648C($gp)
    ctx->pc = 0x2ba75cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941556)));
label_2ba760:
    // 0x2ba760: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_2ba764:
    if (ctx->pc == 0x2BA764u) {
        ctx->pc = 0x2BA768u;
        goto label_2ba768;
    }
    ctx->pc = 0x2BA760u;
    {
        const bool branch_taken_0x2ba760 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2ba760) {
            ctx->pc = 0x2BA774u;
            goto label_2ba774;
        }
    }
    ctx->pc = 0x2BA768u;
label_2ba768:
    // 0x2ba768: 0x83829b75  lb          $v0, -0x648B($gp)
    ctx->pc = 0x2ba768u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941557)));
label_2ba76c:
    // 0x2ba76c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ba770:
    if (ctx->pc == 0x2BA770u) {
        ctx->pc = 0x2BA770u;
            // 0x2ba770: 0x1e082a  slt         $at, $zero, $fp (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
        ctx->pc = 0x2BA774u;
        goto label_2ba774;
    }
    ctx->pc = 0x2BA76Cu;
    {
        const bool branch_taken_0x2ba76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA76Cu;
            // 0x2ba770: 0x1e082a  slt         $at, $zero, $fp (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba76c) {
            ctx->pc = 0x2BA788u;
            goto label_2ba788;
        }
    }
    ctx->pc = 0x2BA774u;
label_2ba774:
    // 0x2ba774: 0x83839b72  lb          $v1, -0x648E($gp)
    ctx->pc = 0x2ba774u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941554)));
label_2ba778:
    // 0x2ba778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ba778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ba77c:
    // 0x2ba77c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_2ba780:
    if (ctx->pc == 0x2BA780u) {
        ctx->pc = 0x2BA784u;
        goto label_2ba784;
    }
    ctx->pc = 0x2BA77Cu;
    {
        const bool branch_taken_0x2ba77c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ba77c) {
            ctx->pc = 0x2BA7B0u;
            goto label_2ba7b0;
        }
    }
    ctx->pc = 0x2BA784u;
label_2ba784:
    // 0x2ba784: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x2ba784u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_2ba788:
    // 0x2ba788: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_2ba78c:
    if (ctx->pc == 0x2BA78Cu) {
        ctx->pc = 0x2BA78Cu;
            // 0x2ba78c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA790u;
        goto label_2ba790;
    }
    ctx->pc = 0x2BA788u;
    {
        const bool branch_taken_0x2ba788 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA788u;
            // 0x2ba78c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba788) {
            ctx->pc = 0x2BA7B0u;
            goto label_2ba7b0;
        }
    }
    ctx->pc = 0x2BA790u;
label_2ba790:
    // 0x2ba790: 0xc04b950  jal         func_12E540
label_2ba794:
    if (ctx->pc == 0x2BA794u) {
        ctx->pc = 0x2BA794u;
            // 0x2ba794: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA798u;
        goto label_2ba798;
    }
    ctx->pc = 0x2BA790u;
    SET_GPR_U32(ctx, 31, 0x2BA798u);
    ctx->pc = 0x2BA794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA790u;
            // 0x2ba794: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA798u; }
        if (ctx->pc != 0x2BA798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA798u; }
        if (ctx->pc != 0x2BA798u) { return; }
    }
    ctx->pc = 0x2BA798u;
label_2ba798:
    // 0x2ba798: 0x83829b77  lb          $v0, -0x6489($gp)
    ctx->pc = 0x2ba798u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941559)));
label_2ba79c:
    // 0x2ba79c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ba7a0:
    if (ctx->pc == 0x2BA7A0u) {
        ctx->pc = 0x2BA7A4u;
        goto label_2ba7a4;
    }
    ctx->pc = 0x2BA79Cu;
    {
        const bool branch_taken_0x2ba79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba79c) {
            ctx->pc = 0x2BA7B0u;
            goto label_2ba7b0;
        }
    }
    ctx->pc = 0x2BA7A4u;
label_2ba7a4:
    // 0x2ba7a4: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x2ba7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2ba7a8:
    // 0x2ba7a8: 0xc04b950  jal         func_12E540
label_2ba7ac:
    if (ctx->pc == 0x2BA7ACu) {
        ctx->pc = 0x2BA7ACu;
            // 0x2ba7ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA7B0u;
        goto label_2ba7b0;
    }
    ctx->pc = 0x2BA7A8u;
    SET_GPR_U32(ctx, 31, 0x2BA7B0u);
    ctx->pc = 0x2BA7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA7A8u;
            // 0x2ba7ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA7B0u; }
        if (ctx->pc != 0x2BA7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA7B0u; }
        if (ctx->pc != 0x2BA7B0u) { return; }
    }
    ctx->pc = 0x2BA7B0u;
label_2ba7b0:
    // 0x2ba7b0: 0x83829b72  lb          $v0, -0x648E($gp)
    ctx->pc = 0x2ba7b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941554)));
label_2ba7b4:
    // 0x2ba7b4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2ba7b8:
    if (ctx->pc == 0x2BA7B8u) {
        ctx->pc = 0x2BA7BCu;
        goto label_2ba7bc;
    }
    ctx->pc = 0x2BA7B4u;
    {
        const bool branch_taken_0x2ba7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba7b4) {
            ctx->pc = 0x2BA7F4u;
            goto label_2ba7f4;
        }
    }
    ctx->pc = 0x2BA7BCu;
label_2ba7bc:
    // 0x2ba7bc: 0x83829b74  lb          $v0, -0x648C($gp)
    ctx->pc = 0x2ba7bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941556)));
label_2ba7c0:
    // 0x2ba7c0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2ba7c4:
    if (ctx->pc == 0x2BA7C4u) {
        ctx->pc = 0x2BA7C8u;
        goto label_2ba7c8;
    }
    ctx->pc = 0x2BA7C0u;
    {
        const bool branch_taken_0x2ba7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba7c0) {
            ctx->pc = 0x2BA7F4u;
            goto label_2ba7f4;
        }
    }
    ctx->pc = 0x2BA7C8u;
label_2ba7c8:
    // 0x2ba7c8: 0x83829b77  lb          $v0, -0x6489($gp)
    ctx->pc = 0x2ba7c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941559)));
label_2ba7cc:
    // 0x2ba7cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ba7d0:
    if (ctx->pc == 0x2BA7D0u) {
        ctx->pc = 0x2BA7D4u;
        goto label_2ba7d4;
    }
    ctx->pc = 0x2BA7CCu;
    {
        const bool branch_taken_0x2ba7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba7cc) {
            ctx->pc = 0x2BA7E0u;
            goto label_2ba7e0;
        }
    }
    ctx->pc = 0x2BA7D4u;
label_2ba7d4:
    // 0x2ba7d4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2ba7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ba7d8:
    // 0x2ba7d8: 0xc0ae988  jal         func_2BA620
label_2ba7dc:
    if (ctx->pc == 0x2BA7DCu) {
        ctx->pc = 0x2BA7DCu;
            // 0x2ba7dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA7E0u;
        goto label_2ba7e0;
    }
    ctx->pc = 0x2BA7D8u;
    SET_GPR_U32(ctx, 31, 0x2BA7E0u);
    ctx->pc = 0x2BA7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA7D8u;
            // 0x2ba7dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA620u;
    if (runtime->hasFunction(0x2BA620u)) {
        auto targetFn = runtime->lookupFunction(0x2BA620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA7E0u; }
        if (ctx->pc != 0x2BA7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteOutLineMenu__FP12CActionCharai_0x2ba620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA7E0u; }
        if (ctx->pc != 0x2BA7E0u) { return; }
    }
    ctx->pc = 0x2BA7E0u;
label_2ba7e0:
    // 0x2ba7e0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2ba7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2ba7e4:
    // 0x2ba7e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2ba7e8:
    if (ctx->pc == 0x2BA7E8u) {
        ctx->pc = 0x2BA7ECu;
        goto label_2ba7ec;
    }
    ctx->pc = 0x2BA7E4u;
    {
        const bool branch_taken_0x2ba7e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba7e4) {
            ctx->pc = 0x2BA7F4u;
            goto label_2ba7f4;
        }
    }
    ctx->pc = 0x2BA7ECu;
label_2ba7ec:
    // 0x2ba7ec: 0xc0ae988  jal         func_2BA620
label_2ba7f0:
    if (ctx->pc == 0x2BA7F0u) {
        ctx->pc = 0x2BA7F0u;
            // 0x2ba7f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BA7F4u;
        goto label_2ba7f4;
    }
    ctx->pc = 0x2BA7ECu;
    SET_GPR_U32(ctx, 31, 0x2BA7F4u);
    ctx->pc = 0x2BA7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA7ECu;
            // 0x2ba7f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA620u;
    if (runtime->hasFunction(0x2BA620u)) {
        auto targetFn = runtime->lookupFunction(0x2BA620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA7F4u; }
        if (ctx->pc != 0x2BA7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteOutLineMenu__FP12CActionCharai_0x2ba620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA7F4u; }
        if (ctx->pc != 0x2BA7F4u) { return; }
    }
    ctx->pc = 0x2BA7F4u;
label_2ba7f4:
    // 0x2ba7f4: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2ba7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_2ba7f8:
    // 0x2ba7f8: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2ba7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
label_2ba7fc:
    // 0x2ba7fc: 0x24634c40  addiu       $v1, $v1, 0x4C40
    ctx->pc = 0x2ba7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19520));
label_2ba800:
    // 0x2ba800: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2ba800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_2ba804:
    // 0x2ba804: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x2ba804u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2ba808:
    // 0x2ba808: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x2ba808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2ba80c:
    // 0x2ba80c: 0x2442d0c0  addiu       $v0, $v0, -0x2F40
    ctx->pc = 0x2ba80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955200));
label_2ba810:
    // 0x2ba810: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2ba810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2ba814:
    // 0x2ba814: 0x24a5d0e0  addiu       $a1, $a1, -0x2F20
    ctx->pc = 0x2ba814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955232));
label_2ba818:
    // 0x2ba818: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2ba818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2ba81c:
    // 0x2ba81c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ba81cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba820:
    // 0x2ba820: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ba820u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba824:
    // 0x2ba824: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x2ba824u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_2ba828:
    // 0x2ba828: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x2ba828u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
label_2ba82c:
    // 0x2ba82c: 0xfd030010  sd          $v1, 0x10($t0)
    ctx->pc = 0x2ba82cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 3));
label_2ba830:
    // 0x2ba830: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2ba830u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2ba834:
    // 0x2ba834: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x2ba834u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_2ba838:
    // 0x2ba838: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x2ba838u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_2ba83c:
    // 0x2ba83c: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x2ba83cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_2ba840:
    // 0x2ba840: 0x8f839b6c  lw          $v1, -0x6494($gp)
    ctx->pc = 0x2ba840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
label_2ba844:
    // 0x2ba844: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x2ba844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_2ba848:
    // 0x2ba848: 0x24660060  addiu       $a2, $v1, 0x60
    ctx->pc = 0x2ba848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2ba84c:
    // 0x2ba84c: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x2ba84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_2ba850:
    // 0x2ba850: 0x24620090  addiu       $v0, $v1, 0x90
    ctx->pc = 0x2ba850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_2ba854:
    // 0x2ba854: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x2ba854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_2ba858:
    // 0x2ba858: 0xafa600f8  sw          $a2, 0xF8($sp)
    ctx->pc = 0x2ba858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 6));
label_2ba85c:
    // 0x2ba85c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2ba85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_2ba860:
    // 0x2ba860: 0xafa600fc  sw          $a2, 0xFC($sp)
    ctx->pc = 0x2ba860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 6));
label_2ba864:
    // 0x2ba864: 0xafa60104  sw          $a2, 0x104($sp)
    ctx->pc = 0x2ba864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 6));
label_2ba868:
    // 0x2ba868: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2ba868u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2ba86c:
    // 0x2ba86c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2ba86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ba870:
    // 0x2ba870: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x2ba870u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_2ba874:
    // 0x2ba874: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2ba874u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_2ba878:
    // 0x2ba878: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x2ba878u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
label_2ba87c:
    // 0x2ba87c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2ba87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_2ba880:
    // 0x2ba880: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2ba880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2ba884:
    // 0x2ba884: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x2ba884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_2ba888:
    // 0x2ba888: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2ba888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2ba88c:
    // 0x2ba88c: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x2ba88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_2ba890:
    // 0x2ba890: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2ba890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2ba894:
    // 0x2ba894: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x2ba894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_2ba898:
    // 0x2ba898: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2ba898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2ba89c:
    // 0x2ba89c: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x2ba89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_2ba8a0:
    // 0x2ba8a0: 0x27a2011c  addiu       $v0, $sp, 0x11C
    ctx->pc = 0x2ba8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_2ba8a4:
    // 0x2ba8a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2ba8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2ba8a8:
    // 0x2ba8a8: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x2ba8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_2ba8ac:
    // 0x2ba8ac: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x2ba8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_2ba8b0:
    // 0x2ba8b0: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x2ba8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2ba8b4:
    // 0x2ba8b4: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x2ba8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_2ba8b8:
    // 0x2ba8b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2ba8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2ba8bc:
    // 0x2ba8bc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2ba8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2ba8c0:
    // 0x2ba8c0: 0x53b021  addu        $s6, $v0, $s3
    ctx->pc = 0x2ba8c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2ba8c4:
    // 0x2ba8c4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2ba8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2ba8c8:
    // 0x2ba8c8: 0x10600111  beqz        $v1, . + 4 + (0x111 << 2)
label_2ba8cc:
    if (ctx->pc == 0x2BA8CCu) {
        ctx->pc = 0x2BA8D0u;
        goto label_2ba8d0;
    }
    ctx->pc = 0x2BA8C8u;
    {
        const bool branch_taken_0x2ba8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba8c8) {
            ctx->pc = 0x2BAD10u;
            goto label_2bad10;
        }
    }
    ctx->pc = 0x2BA8D0u;
label_2ba8d0:
    // 0x2ba8d0: 0x80620070  lb          $v0, 0x70($v1)
    ctx->pc = 0x2ba8d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
label_2ba8d4:
    // 0x2ba8d4: 0x1040010e  beqz        $v0, . + 4 + (0x10E << 2)
label_2ba8d8:
    if (ctx->pc == 0x2BA8D8u) {
        ctx->pc = 0x2BA8D8u;
            // 0x2ba8d8: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->pc = 0x2BA8DCu;
        goto label_2ba8dc;
    }
    ctx->pc = 0x2BA8D4u;
    {
        const bool branch_taken_0x2ba8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA8D4u;
            // 0x2ba8d8: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8d4) {
            ctx->pc = 0x2BAD10u;
            goto label_2bad10;
        }
    }
    ctx->pc = 0x2BA8DCu;
label_2ba8dc:
    // 0x2ba8dc: 0xc094504  jal         func_251410
label_2ba8e0:
    if (ctx->pc == 0x2BA8E0u) {
        ctx->pc = 0x2BA8E4u;
        goto label_2ba8e4;
    }
    ctx->pc = 0x2BA8DCu;
    SET_GPR_U32(ctx, 31, 0x2BA8E4u);
    ctx->pc = 0x251410u;
    if (runtime->hasFunction(0x251410u)) {
        auto targetFn = runtime->lookupFunction(0x251410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA8E4u; }
        if (ctx->pc != 0x2BA8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGInfo__FPc_0x251410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA8E4u; }
        if (ctx->pc != 0x2BA8E4u) { return; }
    }
    ctx->pc = 0x2BA8E4u;
label_2ba8e4:
    // 0x2ba8e4: 0x1040010a  beqz        $v0, . + 4 + (0x10A << 2)
label_2ba8e8:
    if (ctx->pc == 0x2BA8E8u) {
        ctx->pc = 0x2BA8ECu;
        goto label_2ba8ec;
    }
    ctx->pc = 0x2BA8E4u;
    {
        const bool branch_taken_0x2ba8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba8e4) {
            ctx->pc = 0x2BAD10u;
            goto label_2bad10;
        }
    }
    ctx->pc = 0x2BA8ECu;
label_2ba8ec:
    // 0x2ba8ec: 0x8c570110  lw          $s7, 0x110($v0)
    ctx->pc = 0x2ba8ecu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_2ba8f0:
    // 0x2ba8f0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2ba8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2ba8f4:
    // 0x2ba8f4: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2ba8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_2ba8f8:
    // 0x2ba8f8: 0x24540110  addiu       $s4, $v0, 0x110
    ctx->pc = 0x2ba8f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
label_2ba8fc:
    // 0x2ba8fc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2ba8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ba900:
    // 0x2ba900: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ba900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ba904:
    // 0x2ba904: 0xac640074  sw          $a0, 0x74($v1)
    ctx->pc = 0x2ba904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 4));
label_2ba908:
    // 0x2ba908: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2ba908u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2ba90c:
    // 0x2ba90c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2ba910:
    if (ctx->pc == 0x2BA910u) {
        ctx->pc = 0x2BA914u;
        goto label_2ba914;
    }
    ctx->pc = 0x2BA90Cu;
    {
        const bool branch_taken_0x2ba90c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ba90c) {
            ctx->pc = 0x2BA918u;
            goto label_2ba918;
        }
    }
    ctx->pc = 0x2BA914u;
label_2ba914:
    // 0x2ba914: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2ba914u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2ba918:
    // 0x2ba918: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ba918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ba91c:
    // 0x2ba91c: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
label_2ba920:
    if (ctx->pc == 0x2BA920u) {
        ctx->pc = 0x2BA924u;
        goto label_2ba924;
    }
    ctx->pc = 0x2BA91Cu;
    {
        const bool branch_taken_0x2ba91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ba91c) {
            ctx->pc = 0x2BAA38u;
            goto label_2baa38;
        }
    }
    ctx->pc = 0x2BA924u;
label_2ba924:
    // 0x2ba924: 0x1642002d  bne         $s2, $v0, . + 4 + (0x2D << 2)
label_2ba928:
    if (ctx->pc == 0x2BA928u) {
        ctx->pc = 0x2BA928u;
            // 0x2ba928: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2BA92Cu;
        goto label_2ba92c;
    }
    ctx->pc = 0x2BA924u;
    {
        const bool branch_taken_0x2ba924 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA924u;
            // 0x2ba928: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba924) {
            ctx->pc = 0x2BA9DCu;
            goto label_2ba9dc;
        }
    }
    ctx->pc = 0x2BA92Cu;
label_2ba92c:
    // 0x2ba92c: 0x262401d8  addiu       $a0, $s1, 0x1D8
    ctx->pc = 0x2ba92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
label_2ba930:
    // 0x2ba930: 0xc04a3dc  jal         func_128F70
label_2ba934:
    if (ctx->pc == 0x2BA934u) {
        ctx->pc = 0x2BA934u;
            // 0x2ba934: 0x24a5f488  addiu       $a1, $a1, -0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964360));
        ctx->pc = 0x2BA938u;
        goto label_2ba938;
    }
    ctx->pc = 0x2BA930u;
    SET_GPR_U32(ctx, 31, 0x2BA938u);
    ctx->pc = 0x2BA934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA930u;
            // 0x2ba934: 0x24a5f488  addiu       $a1, $a1, -0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA938u; }
        if (ctx->pc != 0x2BA938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA938u; }
        if (ctx->pc != 0x2BA938u) { return; }
    }
    ctx->pc = 0x2BA938u;
label_2ba938:
    // 0x2ba938: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x2ba938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_2ba93c:
    // 0x2ba93c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ba93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ba940:
    // 0x2ba940: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2ba944:
    if (ctx->pc == 0x2BA944u) {
        ctx->pc = 0x2BA948u;
        goto label_2ba948;
    }
    ctx->pc = 0x2BA940u;
    {
        const bool branch_taken_0x2ba940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba940) {
            ctx->pc = 0x2BA950u;
            goto label_2ba950;
        }
    }
    ctx->pc = 0x2BA948u;
label_2ba948:
    // 0x2ba948: 0xc05d398  jal         func_174E60
label_2ba94c:
    if (ctx->pc == 0x2BA94Cu) {
        ctx->pc = 0x2BA950u;
        goto label_2ba950;
    }
    ctx->pc = 0x2BA948u;
    SET_GPR_U32(ctx, 31, 0x2BA950u);
    ctx->pc = 0x174E60u;
    if (runtime->hasFunction(0x174E60u)) {
        auto targetFn = runtime->lookupFunction(0x174E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA950u; }
        if (ctx->pc != 0x2BA950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteImage__11CCharacter2Fv_0x174e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA950u; }
        if (ctx->pc != 0x2BA950u) { return; }
    }
    ctx->pc = 0x2BA950u;
label_2ba950:
    // 0x2ba950: 0x27a2011c  addiu       $v0, $sp, 0x11C
    ctx->pc = 0x2ba950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_2ba954:
    // 0x2ba954: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ba954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ba958:
    // 0x2ba958: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2ba95c:
    if (ctx->pc == 0x2BA95Cu) {
        ctx->pc = 0x2BA960u;
        goto label_2ba960;
    }
    ctx->pc = 0x2BA958u;
    {
        const bool branch_taken_0x2ba958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba958) {
            ctx->pc = 0x2BA968u;
            goto label_2ba968;
        }
    }
    ctx->pc = 0x2BA960u;
label_2ba960:
    // 0x2ba960: 0xc05d398  jal         func_174E60
label_2ba964:
    if (ctx->pc == 0x2BA964u) {
        ctx->pc = 0x2BA968u;
        goto label_2ba968;
    }
    ctx->pc = 0x2BA960u;
    SET_GPR_U32(ctx, 31, 0x2BA968u);
    ctx->pc = 0x174E60u;
    if (runtime->hasFunction(0x174E60u)) {
        auto targetFn = runtime->lookupFunction(0x174E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA968u; }
        if (ctx->pc != 0x2BA968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteImage__11CCharacter2Fv_0x174e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA968u; }
        if (ctx->pc != 0x2BA968u) { return; }
    }
    ctx->pc = 0x2BA968u;
label_2ba968:
    // 0x2ba968: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x2ba968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_2ba96c:
    // 0x2ba96c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ba96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ba970:
    // 0x2ba970: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2ba974:
    if (ctx->pc == 0x2BA974u) {
        ctx->pc = 0x2BA978u;
        goto label_2ba978;
    }
    ctx->pc = 0x2BA970u;
    {
        const bool branch_taken_0x2ba970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba970) {
            ctx->pc = 0x2BA980u;
            goto label_2ba980;
        }
    }
    ctx->pc = 0x2BA978u;
label_2ba978:
    // 0x2ba978: 0xc05d398  jal         func_174E60
label_2ba97c:
    if (ctx->pc == 0x2BA97Cu) {
        ctx->pc = 0x2BA980u;
        goto label_2ba980;
    }
    ctx->pc = 0x2BA978u;
    SET_GPR_U32(ctx, 31, 0x2BA980u);
    ctx->pc = 0x174E60u;
    if (runtime->hasFunction(0x174E60u)) {
        auto targetFn = runtime->lookupFunction(0x174E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA980u; }
        if (ctx->pc != 0x2BA980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteImage__11CCharacter2Fv_0x174e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA980u; }
        if (ctx->pc != 0x2BA980u) { return; }
    }
    ctx->pc = 0x2BA980u;
label_2ba980:
    // 0x2ba980: 0xa22001d8  sb          $zero, 0x1D8($s1)
    ctx->pc = 0x2ba980u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 472), (uint8_t)GPR_U32(ctx, 0));
label_2ba984:
    // 0x2ba984: 0x83829b77  lb          $v0, -0x6489($gp)
    ctx->pc = 0x2ba984u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941559)));
label_2ba988:
    // 0x2ba988: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_2ba98c:
    if (ctx->pc == 0x2BA98Cu) {
        ctx->pc = 0x2BA990u;
        goto label_2ba990;
    }
    ctx->pc = 0x2BA988u;
    {
        const bool branch_taken_0x2ba988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba988) {
            ctx->pc = 0x2BAA38u;
            goto label_2baa38;
        }
    }
    ctx->pc = 0x2BA990u;
label_2ba990:
    // 0x2ba990: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2ba990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2ba994:
    // 0x2ba994: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2ba998:
    if (ctx->pc == 0x2BA998u) {
        ctx->pc = 0x2BA99Cu;
        goto label_2ba99c;
    }
    ctx->pc = 0x2BA994u;
    {
        const bool branch_taken_0x2ba994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba994) {
            ctx->pc = 0x2BA9A4u;
            goto label_2ba9a4;
        }
    }
    ctx->pc = 0x2BA99Cu;
label_2ba99c:
    // 0x2ba99c: 0xc05d398  jal         func_174E60
label_2ba9a0:
    if (ctx->pc == 0x2BA9A0u) {
        ctx->pc = 0x2BA9A4u;
        goto label_2ba9a4;
    }
    ctx->pc = 0x2BA99Cu;
    SET_GPR_U32(ctx, 31, 0x2BA9A4u);
    ctx->pc = 0x174E60u;
    if (runtime->hasFunction(0x174E60u)) {
        auto targetFn = runtime->lookupFunction(0x174E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA9A4u; }
        if (ctx->pc != 0x2BA9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteImage__11CCharacter2Fv_0x174e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA9A4u; }
        if (ctx->pc != 0x2BA9A4u) { return; }
    }
    ctx->pc = 0x2BA9A4u;
label_2ba9a4:
    // 0x2ba9a4: 0x0  nop
    ctx->pc = 0x2ba9a4u;
    // NOP
label_2ba9a8:
    // 0x2ba9a8: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x2ba9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2ba9ac:
    // 0x2ba9ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2ba9b0:
    if (ctx->pc == 0x2BA9B0u) {
        ctx->pc = 0x2BA9B4u;
        goto label_2ba9b4;
    }
    ctx->pc = 0x2BA9ACu;
    {
        const bool branch_taken_0x2ba9ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba9ac) {
            ctx->pc = 0x2BA9BCu;
            goto label_2ba9bc;
        }
    }
    ctx->pc = 0x2BA9B4u;
label_2ba9b4:
    // 0x2ba9b4: 0xc05d398  jal         func_174E60
label_2ba9b8:
    if (ctx->pc == 0x2BA9B8u) {
        ctx->pc = 0x2BA9BCu;
        goto label_2ba9bc;
    }
    ctx->pc = 0x2BA9B4u;
    SET_GPR_U32(ctx, 31, 0x2BA9BCu);
    ctx->pc = 0x174E60u;
    if (runtime->hasFunction(0x174E60u)) {
        auto targetFn = runtime->lookupFunction(0x174E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA9BCu; }
        if (ctx->pc != 0x2BA9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteImage__11CCharacter2Fv_0x174e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA9BCu; }
        if (ctx->pc != 0x2BA9BCu) { return; }
    }
    ctx->pc = 0x2BA9BCu;
label_2ba9bc:
    // 0x2ba9bc: 0x0  nop
    ctx->pc = 0x2ba9bcu;
    // NOP
label_2ba9c0:
    // 0x2ba9c0: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2ba9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2ba9c4:
    // 0x2ba9c4: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_2ba9c8:
    if (ctx->pc == 0x2BA9C8u) {
        ctx->pc = 0x2BA9CCu;
        goto label_2ba9cc;
    }
    ctx->pc = 0x2BA9C4u;
    {
        const bool branch_taken_0x2ba9c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba9c4) {
            ctx->pc = 0x2BAA38u;
            goto label_2baa38;
        }
    }
    ctx->pc = 0x2BA9CCu;
label_2ba9cc:
    // 0x2ba9cc: 0xc05d398  jal         func_174E60
label_2ba9d0:
    if (ctx->pc == 0x2BA9D0u) {
        ctx->pc = 0x2BA9D4u;
        goto label_2ba9d4;
    }
    ctx->pc = 0x2BA9CCu;
    SET_GPR_U32(ctx, 31, 0x2BA9D4u);
    ctx->pc = 0x174E60u;
    if (runtime->hasFunction(0x174E60u)) {
        auto targetFn = runtime->lookupFunction(0x174E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA9D4u; }
        if (ctx->pc != 0x2BA9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteImage__11CCharacter2Fv_0x174e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA9D4u; }
        if (ctx->pc != 0x2BA9D4u) { return; }
    }
    ctx->pc = 0x2BA9D4u;
label_2ba9d4:
    // 0x2ba9d4: 0x10000018  b           . + 4 + (0x18 << 2)
label_2ba9d8:
    if (ctx->pc == 0x2BA9D8u) {
        ctx->pc = 0x2BA9DCu;
        goto label_2ba9dc;
    }
    ctx->pc = 0x2BA9D4u;
    {
        const bool branch_taken_0x2ba9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba9d4) {
            ctx->pc = 0x2BAA38u;
            goto label_2baa38;
        }
    }
    ctx->pc = 0x2BA9DCu;
label_2ba9dc:
    // 0x2ba9dc: 0x0  nop
    ctx->pc = 0x2ba9dcu;
    // NOP
label_2ba9e0:
    // 0x2ba9e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ba9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ba9e4:
    // 0x2ba9e4: 0x12420014  beq         $s2, $v0, . + 4 + (0x14 << 2)
label_2ba9e8:
    if (ctx->pc == 0x2BA9E8u) {
        ctx->pc = 0x2BA9E8u;
            // 0x2ba9e8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2BA9ECu;
        goto label_2ba9ec;
    }
    ctx->pc = 0x2BA9E4u;
    {
        const bool branch_taken_0x2ba9e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA9E4u;
            // 0x2ba9e8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba9e4) {
            ctx->pc = 0x2BAA38u;
            goto label_2baa38;
        }
    }
    ctx->pc = 0x2BA9ECu;
label_2ba9ec:
    // 0x2ba9ec: 0x12420012  beq         $s2, $v0, . + 4 + (0x12 << 2)
label_2ba9f0:
    if (ctx->pc == 0x2BA9F0u) {
        ctx->pc = 0x2BA9F4u;
        goto label_2ba9f4;
    }
    ctx->pc = 0x2BA9ECu;
    {
        const bool branch_taken_0x2ba9ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ba9ec) {
            ctx->pc = 0x2BAA38u;
            goto label_2baa38;
        }
    }
    ctx->pc = 0x2BA9F4u;
label_2ba9f4:
    // 0x2ba9f4: 0x8e950000  lw          $s5, 0x0($s4)
    ctx->pc = 0x2ba9f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ba9f8:
    // 0x2ba9f8: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_2ba9fc:
    if (ctx->pc == 0x2BA9FCu) {
        ctx->pc = 0x2BA9FCu;
            // 0x2ba9fc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2BAA00u;
        goto label_2baa00;
    }
    ctx->pc = 0x2BA9F8u;
    {
        const bool branch_taken_0x2ba9f8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA9F8u;
            // 0x2ba9fc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba9f8) {
            ctx->pc = 0x2BAA18u;
            goto label_2baa18;
        }
    }
    ctx->pc = 0x2BAA00u;
label_2baa00:
    // 0x2baa00: 0x262401d8  addiu       $a0, $s1, 0x1D8
    ctx->pc = 0x2baa00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
label_2baa04:
    // 0x2baa04: 0xc04a3dc  jal         func_128F70
label_2baa08:
    if (ctx->pc == 0x2BAA08u) {
        ctx->pc = 0x2BAA08u;
            // 0x2baa08: 0x24a5f488  addiu       $a1, $a1, -0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964360));
        ctx->pc = 0x2BAA0Cu;
        goto label_2baa0c;
    }
    ctx->pc = 0x2BAA04u;
    SET_GPR_U32(ctx, 31, 0x2BAA0Cu);
    ctx->pc = 0x2BAA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAA04u;
            // 0x2baa08: 0x24a5f488  addiu       $a1, $a1, -0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA0Cu; }
        if (ctx->pc != 0x2BAA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA0Cu; }
        if (ctx->pc != 0x2BAA0Cu) { return; }
    }
    ctx->pc = 0x2BAA0Cu;
label_2baa0c:
    // 0x2baa0c: 0xc05d398  jal         func_174E60
label_2baa10:
    if (ctx->pc == 0x2BAA10u) {
        ctx->pc = 0x2BAA10u;
            // 0x2baa10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA14u;
        goto label_2baa14;
    }
    ctx->pc = 0x2BAA0Cu;
    SET_GPR_U32(ctx, 31, 0x2BAA14u);
    ctx->pc = 0x2BAA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAA0Cu;
            // 0x2baa10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174E60u;
    if (runtime->hasFunction(0x174E60u)) {
        auto targetFn = runtime->lookupFunction(0x174E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA14u; }
        if (ctx->pc != 0x2BAA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteImage__11CCharacter2Fv_0x174e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA14u; }
        if (ctx->pc != 0x2BAA14u) { return; }
    }
    ctx->pc = 0x2BAA14u;
label_2baa14:
    // 0x2baa14: 0xa22001d8  sb          $zero, 0x1D8($s1)
    ctx->pc = 0x2baa14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 472), (uint8_t)GPR_U32(ctx, 0));
label_2baa18:
    // 0x2baa18: 0x83829b77  lb          $v0, -0x6489($gp)
    ctx->pc = 0x2baa18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941559)));
label_2baa1c:
    // 0x2baa1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2baa20:
    if (ctx->pc == 0x2BAA20u) {
        ctx->pc = 0x2BAA20u;
            // 0x2baa20: 0x27d1021  addu        $v0, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->pc = 0x2BAA24u;
        goto label_2baa24;
    }
    ctx->pc = 0x2BAA1Cu;
    {
        const bool branch_taken_0x2baa1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAA1Cu;
            // 0x2baa20: 0x27d1021  addu        $v0, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa1c) {
            ctx->pc = 0x2BAA38u;
            goto label_2baa38;
        }
    }
    ctx->pc = 0x2BAA24u;
label_2baa24:
    // 0x2baa24: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x2baa24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_2baa28:
    // 0x2baa28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2baa2c:
    if (ctx->pc == 0x2BAA2Cu) {
        ctx->pc = 0x2BAA30u;
        goto label_2baa30;
    }
    ctx->pc = 0x2BAA28u;
    {
        const bool branch_taken_0x2baa28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baa28) {
            ctx->pc = 0x2BAA38u;
            goto label_2baa38;
        }
    }
    ctx->pc = 0x2BAA30u;
label_2baa30:
    // 0x2baa30: 0xc05d398  jal         func_174E60
label_2baa34:
    if (ctx->pc == 0x2BAA34u) {
        ctx->pc = 0x2BAA38u;
        goto label_2baa38;
    }
    ctx->pc = 0x2BAA30u;
    SET_GPR_U32(ctx, 31, 0x2BAA38u);
    ctx->pc = 0x174E60u;
    if (runtime->hasFunction(0x174E60u)) {
        auto targetFn = runtime->lookupFunction(0x174E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA38u; }
        if (ctx->pc != 0x2BAA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteImage__11CCharacter2Fv_0x174e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA38u; }
        if (ctx->pc != 0x2BAA38u) { return; }
    }
    ctx->pc = 0x2BAA38u;
label_2baa38:
    // 0x2baa38: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2baa38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2baa3c:
    // 0x2baa3c: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_2baa40:
    if (ctx->pc == 0x2BAA40u) {
        ctx->pc = 0x2BAA40u;
            // 0x2baa40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2BAA44u;
        goto label_2baa44;
    }
    ctx->pc = 0x2BAA3Cu;
    {
        const bool branch_taken_0x2baa3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAA3Cu;
            // 0x2baa40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa3c) {
            ctx->pc = 0x2BAB44u;
            goto label_2bab44;
        }
    }
    ctx->pc = 0x2BAA44u;
label_2baa44:
    // 0x2baa44: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2baa48:
    if (ctx->pc == 0x2BAA48u) {
        ctx->pc = 0x2BAA4Cu;
        goto label_2baa4c;
    }
    ctx->pc = 0x2BAA44u;
    {
        const bool branch_taken_0x2baa44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2baa44) {
            ctx->pc = 0x2BAA54u;
            goto label_2baa54;
        }
    }
    ctx->pc = 0x2BAA4Cu;
label_2baa4c:
    // 0x2baa4c: 0x100000ae  b           . + 4 + (0xAE << 2)
label_2baa50:
    if (ctx->pc == 0x2BAA50u) {
        ctx->pc = 0x2BAA54u;
        goto label_2baa54;
    }
    ctx->pc = 0x2BAA4Cu;
    {
        const bool branch_taken_0x2baa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baa4c) {
            ctx->pc = 0x2BAD08u;
            goto label_2bad08;
        }
    }
    ctx->pc = 0x2BAA54u;
label_2baa54:
    // 0x2baa54: 0x0  nop
    ctx->pc = 0x2baa54u;
    // NOP
label_2baa58:
    // 0x2baa58: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
label_2baa5c:
    if (ctx->pc == 0x2BAA5Cu) {
        ctx->pc = 0x2BAA60u;
        goto label_2baa60;
    }
    ctx->pc = 0x2BAA58u;
    {
        const bool branch_taken_0x2baa58 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x2baa58) {
            ctx->pc = 0x2BAA68u;
            goto label_2baa68;
        }
    }
    ctx->pc = 0x2BAA60u;
label_2baa60:
    // 0x2baa60: 0x8fb000b0  lw          $s0, 0xB0($sp)
    ctx->pc = 0x2baa60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2baa64:
    // 0x2baa64: 0x0  nop
    ctx->pc = 0x2baa64u;
    // NOP
label_2baa68:
    // 0x2baa68: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2baa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_2baa6c:
    // 0x2baa6c: 0x8c5400f0  lw          $s4, 0xF0($v0)
    ctx->pc = 0x2baa6cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_2baa70:
    // 0x2baa70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2baa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2baa74:
    // 0x2baa74: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
label_2baa78:
    if (ctx->pc == 0x2BAA78u) {
        ctx->pc = 0x2BAA78u;
            // 0x2baa78: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2BAA7Cu;
        goto label_2baa7c;
    }
    ctx->pc = 0x2BAA74u;
    {
        const bool branch_taken_0x2baa74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BAA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAA74u;
            // 0x2baa78: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa74) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BAA7Cu;
label_2baa7c:
    // 0x2baa7c: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
label_2baa80:
    if (ctx->pc == 0x2BAA80u) {
        ctx->pc = 0x2BAA84u;
        goto label_2baa84;
    }
    ctx->pc = 0x2BAA7Cu;
    {
        const bool branch_taken_0x2baa7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2baa7c) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BAA84u;
label_2baa84:
    // 0x2baa84: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_2baa88:
    if (ctx->pc == 0x2BAA88u) {
        ctx->pc = 0x2BAA8Cu;
        goto label_2baa8c;
    }
    ctx->pc = 0x2BAA84u;
    {
        const bool branch_taken_0x2baa84 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baa84) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BAA8Cu;
label_2baa8c:
    // 0x2baa8c: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x2baa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
label_2baa90:
    // 0x2baa90: 0xae80001c  sw          $zero, 0x1C($s4)
    ctx->pc = 0x2baa90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
label_2baa94:
    // 0x2baa94: 0x0  nop
    ctx->pc = 0x2baa94u;
    // NOP
label_2baa98:
    // 0x2baa98: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
label_2baa9c:
    if (ctx->pc == 0x2BAA9Cu) {
        ctx->pc = 0x2BAA9Cu;
            // 0x2baa9c: 0x27d1021  addu        $v0, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->pc = 0x2BAAA0u;
        goto label_2baaa0;
    }
    ctx->pc = 0x2BAA98u;
    {
        const bool branch_taken_0x2baa98 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAA98u;
            // 0x2baa9c: 0x27d1021  addu        $v0, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa98) {
            ctx->pc = 0x2BAAB4u;
            goto label_2baab4;
        }
    }
    ctx->pc = 0x2BAAA0u;
label_2baaa0:
    // 0x2baaa0: 0xc05aa6c  jal         func_16A9B0
label_2baaa4:
    if (ctx->pc == 0x2BAAA4u) {
        ctx->pc = 0x2BAAA4u;
            // 0x2baaa4: 0x8c4400b0  lw          $a0, 0xB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
        ctx->pc = 0x2BAAA8u;
        goto label_2baaa8;
    }
    ctx->pc = 0x2BAAA0u;
    SET_GPR_U32(ctx, 31, 0x2BAAA8u);
    ctx->pc = 0x2BAAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAAA0u;
            // 0x2baaa4: 0x8c4400b0  lw          $a0, 0xB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A9B0u;
    if (runtime->hasFunction(0x16A9B0u)) {
        auto targetFn = runtime->lookupFunction(0x16A9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAAA8u; }
        if (ctx->pc != 0x2BAAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllDeleteDamage__12CActionCharaFv_0x16a9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAAA8u; }
        if (ctx->pc != 0x2BAAA8u) { return; }
    }
    ctx->pc = 0x2BAAA8u;
label_2baaa8:
    // 0x2baaa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2baaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2baaac:
    // 0x2baaac: 0xc04bc54  jal         func_12F150
label_2baab0:
    if (ctx->pc == 0x2BAAB0u) {
        ctx->pc = 0x2BAAB0u;
            // 0x2baab0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAAB4u;
        goto label_2baab4;
    }
    ctx->pc = 0x2BAAACu;
    SET_GPR_U32(ctx, 31, 0x2BAAB4u);
    ctx->pc = 0x2BAAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAAACu;
            // 0x2baab0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F150u;
    if (runtime->hasFunction(0x12F150u)) {
        auto targetFn = runtime->lookupFunction(0x12F150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAAB4u; }
        if (ctx->pc != 0x2BAAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexAnime__17mgCTextureManagerFi_0x12f150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAAB4u; }
        if (ctx->pc != 0x2BAAB4u) { return; }
    }
    ctx->pc = 0x2BAAB4u;
label_2baab4:
    // 0x2baab4: 0x0  nop
    ctx->pc = 0x2baab4u;
    // NOP
label_2baab8:
    // 0x2baab8: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2baab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_2baabc:
    // 0x2baabc: 0x8c5500b0  lw          $s5, 0xB0($v0)
    ctx->pc = 0x2baabcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_2baac0:
    // 0x2baac0: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
label_2baac4:
    if (ctx->pc == 0x2BAAC4u) {
        ctx->pc = 0x2BAAC8u;
        goto label_2baac8;
    }
    ctx->pc = 0x2BAAC0u;
    {
        const bool branch_taken_0x2baac0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baac0) {
            ctx->pc = 0x2BAB0Cu;
            goto label_2bab0c;
        }
    }
    ctx->pc = 0x2BAAC8u;
label_2baac8:
    // 0x2baac8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2baac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2baacc:
    // 0x2baacc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2baaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2baad0:
    // 0x2baad0: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2baad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2baad4:
    // 0x2baad4: 0x320f809  jalr        $t9
label_2baad8:
    if (ctx->pc == 0x2BAAD8u) {
        ctx->pc = 0x2BAAD8u;
            // 0x2baad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAADCu;
        goto label_2baadc;
    }
    ctx->pc = 0x2BAAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BAADCu);
        ctx->pc = 0x2BAAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAAD4u;
            // 0x2baad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BAADCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BAADCu; }
            if (ctx->pc != 0x2BAADCu) { return; }
        }
        }
    }
    ctx->pc = 0x2BAADCu;
label_2baadc:
    // 0x2baadc: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2baadcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2baae0:
    // 0x2baae0: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2baae0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2baae4:
    // 0x2baae4: 0x8faa00a4  lw          $t2, 0xA4($sp)
    ctx->pc = 0x2baae4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2baae8:
    // 0x2baae8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2baae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2baaec:
    // 0x2baaec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2baaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2baaf0:
    // 0x2baaf0: 0x24c64c28  addiu       $a2, $a2, 0x4C28
    ctx->pc = 0x2baaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19496));
label_2baaf4:
    // 0x2baaf4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2baaf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2baaf8:
    // 0x2baaf8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2baaf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2baafc:
    // 0x2baafc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2baafcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bab00:
    // 0x2bab00: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x2bab00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_2bab04:
    // 0x2bab04: 0x320f809  jalr        $t9
label_2bab08:
    if (ctx->pc == 0x2BAB08u) {
        ctx->pc = 0x2BAB08u;
            // 0x2bab08: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB0Cu;
        goto label_2bab0c;
    }
    ctx->pc = 0x2BAB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BAB0Cu);
        ctx->pc = 0x2BAB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAB04u;
            // 0x2bab08: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BAB0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB0Cu; }
            if (ctx->pc != 0x2BAB0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2BAB0Cu;
label_2bab0c:
    // 0x2bab0c: 0x0  nop
    ctx->pc = 0x2bab0cu;
    // NOP
label_2bab10:
    // 0x2bab10: 0x1200007d  beqz        $s0, . + 4 + (0x7D << 2)
label_2bab14:
    if (ctx->pc == 0x2BAB14u) {
        ctx->pc = 0x2BAB18u;
        goto label_2bab18;
    }
    ctx->pc = 0x2BAB10u;
    {
        const bool branch_taken_0x2bab10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bab10) {
            ctx->pc = 0x2BAD08u;
            goto label_2bad08;
        }
    }
    ctx->pc = 0x2BAB18u;
label_2bab18:
    // 0x2bab18: 0xc0abf58  jal         func_2AFD60
label_2bab1c:
    if (ctx->pc == 0x2BAB1Cu) {
        ctx->pc = 0x2BAB20u;
        goto label_2bab20;
    }
    ctx->pc = 0x2BAB18u;
    SET_GPR_U32(ctx, 31, 0x2BAB20u);
    ctx->pc = 0x2AFD60u;
    if (runtime->hasFunction(0x2AFD60u)) {
        auto targetFn = runtime->lookupFunction(0x2AFD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB20u; }
        if (ctx->pc != 0x2BAB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBattleLoop__Fv_0x2afd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB20u; }
        if (ctx->pc != 0x2BAB20u) { return; }
    }
    ctx->pc = 0x2BAB20u;
label_2bab20:
    // 0x2bab20: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
label_2bab24:
    if (ctx->pc == 0x2BAB24u) {
        ctx->pc = 0x2BAB24u;
            // 0x2bab24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BAB28u;
        goto label_2bab28;
    }
    ctx->pc = 0x2BAB20u;
    {
        const bool branch_taken_0x2bab20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAB20u;
            // 0x2bab24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab20) {
            ctx->pc = 0x2BAD08u;
            goto label_2bad08;
        }
    }
    ctx->pc = 0x2BAB28u;
label_2bab28:
    // 0x2bab28: 0x16420077  bne         $s2, $v0, . + 4 + (0x77 << 2)
label_2bab2c:
    if (ctx->pc == 0x2BAB2Cu) {
        ctx->pc = 0x2BAB2Cu;
            // 0x2bab2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB30u;
        goto label_2bab30;
    }
    ctx->pc = 0x2BAB28u;
    {
        const bool branch_taken_0x2bab28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BAB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAB28u;
            // 0x2bab2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab28) {
            ctx->pc = 0x2BAD08u;
            goto label_2bad08;
        }
    }
    ctx->pc = 0x2BAB30u;
label_2bab30:
    // 0x2bab30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bab30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bab34:
    // 0x2bab34: 0xc07a358  jal         func_1E8D60
label_2bab38:
    if (ctx->pc == 0x2BAB38u) {
        ctx->pc = 0x2BAB38u;
            // 0x2bab38: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2BAB3Cu;
        goto label_2bab3c;
    }
    ctx->pc = 0x2BAB34u;
    SET_GPR_U32(ctx, 31, 0x2BAB3Cu);
    ctx->pc = 0x2BAB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAB34u;
            // 0x2bab38: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8D60u;
    if (runtime->hasFunction(0x1E8D60u)) {
        auto targetFn = runtime->lookupFunction(0x1E8D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB3Cu; }
        if (ctx->pc != 0x2BAB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSwordBlurEffect__FP11CCharacter2P9mgCMemoryi_0x1e8d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB3Cu; }
        if (ctx->pc != 0x2BAB3Cu) { return; }
    }
    ctx->pc = 0x2BAB3Cu;
label_2bab3c:
    // 0x2bab3c: 0x10000072  b           . + 4 + (0x72 << 2)
label_2bab40:
    if (ctx->pc == 0x2BAB40u) {
        ctx->pc = 0x2BAB44u;
        goto label_2bab44;
    }
    ctx->pc = 0x2BAB3Cu;
    {
        const bool branch_taken_0x2bab3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bab3c) {
            ctx->pc = 0x2BAD08u;
            goto label_2bad08;
        }
    }
    ctx->pc = 0x2BAB44u;
label_2bab44:
    // 0x2bab44: 0x0  nop
    ctx->pc = 0x2bab44u;
    // NOP
label_2bab48:
    // 0x2bab48: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2bab48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2bab4c:
    // 0x2bab4c: 0x262401d8  addiu       $a0, $s1, 0x1D8
    ctx->pc = 0x2bab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
label_2bab50:
    // 0x2bab50: 0xc04a3dc  jal         func_128F70
label_2bab54:
    if (ctx->pc == 0x2BAB54u) {
        ctx->pc = 0x2BAB54u;
            // 0x2bab54: 0x24a5f488  addiu       $a1, $a1, -0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964360));
        ctx->pc = 0x2BAB58u;
        goto label_2bab58;
    }
    ctx->pc = 0x2BAB50u;
    SET_GPR_U32(ctx, 31, 0x2BAB58u);
    ctx->pc = 0x2BAB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAB50u;
            // 0x2bab54: 0x24a5f488  addiu       $a1, $a1, -0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB58u; }
        if (ctx->pc != 0x2BAB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB58u; }
        if (ctx->pc != 0x2BAB58u) { return; }
    }
    ctx->pc = 0x2BAB58u;
label_2bab58:
    // 0x2bab58: 0x8e950000  lw          $s5, 0x0($s4)
    ctx->pc = 0x2bab58u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2bab5c:
    // 0x2bab5c: 0x12a00029  beqz        $s5, . + 4 + (0x29 << 2)
label_2bab60:
    if (ctx->pc == 0x2BAB60u) {
        ctx->pc = 0x2BAB64u;
        goto label_2bab64;
    }
    ctx->pc = 0x2BAB5Cu;
    {
        const bool branch_taken_0x2bab5c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bab5c) {
            ctx->pc = 0x2BAC04u;
            goto label_2bac04;
        }
    }
    ctx->pc = 0x2BAB64u;
label_2bab64:
    // 0x2bab64: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
label_2bab68:
    if (ctx->pc == 0x2BAB68u) {
        ctx->pc = 0x2BAB6Cu;
        goto label_2bab6c;
    }
    ctx->pc = 0x2BAB64u;
    {
        const bool branch_taken_0x2bab64 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x2bab64) {
            ctx->pc = 0x2BAB74u;
            goto label_2bab74;
        }
    }
    ctx->pc = 0x2BAB6Cu;
label_2bab6c:
    // 0x2bab6c: 0x8fb00110  lw          $s0, 0x110($sp)
    ctx->pc = 0x2bab6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2bab70:
    // 0x2bab70: 0x0  nop
    ctx->pc = 0x2bab70u;
    // NOP
label_2bab74:
    // 0x2bab74: 0x0  nop
    ctx->pc = 0x2bab74u;
    // NOP
label_2bab78:
    // 0x2bab78: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_2bab7c:
    if (ctx->pc == 0x2BAB7Cu) {
        ctx->pc = 0x2BAB7Cu;
            // 0x2bab7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB80u;
        goto label_2bab80;
    }
    ctx->pc = 0x2BAB78u;
    {
        const bool branch_taken_0x2bab78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAB78u;
            // 0x2bab7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab78) {
            ctx->pc = 0x2BAB88u;
            goto label_2bab88;
        }
    }
    ctx->pc = 0x2BAB80u;
label_2bab80:
    // 0x2bab80: 0xc04bc54  jal         func_12F150
label_2bab84:
    if (ctx->pc == 0x2BAB84u) {
        ctx->pc = 0x2BAB84u;
            // 0x2bab84: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB88u;
        goto label_2bab88;
    }
    ctx->pc = 0x2BAB80u;
    SET_GPR_U32(ctx, 31, 0x2BAB88u);
    ctx->pc = 0x2BAB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAB80u;
            // 0x2bab84: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F150u;
    if (runtime->hasFunction(0x12F150u)) {
        auto targetFn = runtime->lookupFunction(0x12F150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB88u; }
        if (ctx->pc != 0x2BAB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexAnime__17mgCTextureManagerFi_0x12f150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB88u; }
        if (ctx->pc != 0x2BAB88u) { return; }
    }
    ctx->pc = 0x2BAB88u;
label_2bab88:
    // 0x2bab88: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2bab88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_2bab8c:
    // 0x2bab8c: 0x8c5400d0  lw          $s4, 0xD0($v0)
    ctx->pc = 0x2bab8cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
label_2bab90:
    // 0x2bab90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bab90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2bab94:
    // 0x2bab94: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
label_2bab98:
    if (ctx->pc == 0x2BAB98u) {
        ctx->pc = 0x2BAB98u;
            // 0x2bab98: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2BAB9Cu;
        goto label_2bab9c;
    }
    ctx->pc = 0x2BAB94u;
    {
        const bool branch_taken_0x2bab94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BAB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAB94u;
            // 0x2bab98: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab94) {
            ctx->pc = 0x2BABB4u;
            goto label_2babb4;
        }
    }
    ctx->pc = 0x2BAB9Cu;
label_2bab9c:
    // 0x2bab9c: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
label_2baba0:
    if (ctx->pc == 0x2BABA0u) {
        ctx->pc = 0x2BABA4u;
        goto label_2baba4;
    }
    ctx->pc = 0x2BAB9Cu;
    {
        const bool branch_taken_0x2bab9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bab9c) {
            ctx->pc = 0x2BABB4u;
            goto label_2babb4;
        }
    }
    ctx->pc = 0x2BABA4u;
label_2baba4:
    // 0x2baba4: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_2baba8:
    if (ctx->pc == 0x2BABA8u) {
        ctx->pc = 0x2BABACu;
        goto label_2babac;
    }
    ctx->pc = 0x2BABA4u;
    {
        const bool branch_taken_0x2baba4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baba4) {
            ctx->pc = 0x2BABB4u;
            goto label_2babb4;
        }
    }
    ctx->pc = 0x2BABACu;
label_2babac:
    // 0x2babac: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x2babacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
label_2babb0:
    // 0x2babb0: 0xae80001c  sw          $zero, 0x1C($s4)
    ctx->pc = 0x2babb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
label_2babb4:
    // 0x2babb4: 0x0  nop
    ctx->pc = 0x2babb4u;
    // NOP
label_2babb8:
    // 0x2babb8: 0xc04e780  jal         func_139E00
label_2babbc:
    if (ctx->pc == 0x2BABBCu) {
        ctx->pc = 0x2BABBCu;
            // 0x2babbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BABC0u;
        goto label_2babc0;
    }
    ctx->pc = 0x2BABB8u;
    SET_GPR_U32(ctx, 31, 0x2BABC0u);
    ctx->pc = 0x2BABBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BABB8u;
            // 0x2babbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BABC0u; }
        if (ctx->pc != 0x2BABC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BABC0u; }
        if (ctx->pc != 0x2BABC0u) { return; }
    }
    ctx->pc = 0x2BABC0u;
label_2babc0:
    // 0x2babc0: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2babc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2babc4:
    // 0x2babc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2babc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2babc8:
    // 0x2babc8: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2babc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2babcc:
    // 0x2babcc: 0x320f809  jalr        $t9
label_2babd0:
    if (ctx->pc == 0x2BABD0u) {
        ctx->pc = 0x2BABD0u;
            // 0x2babd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BABD4u;
        goto label_2babd4;
    }
    ctx->pc = 0x2BABCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BABD4u);
        ctx->pc = 0x2BABD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BABCCu;
            // 0x2babd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BABD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BABD4u; }
            if (ctx->pc != 0x2BABD4u) { return; }
        }
        }
    }
    ctx->pc = 0x2BABD4u;
label_2babd4:
    // 0x2babd4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2babd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2babd8:
    // 0x2babd8: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2babd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2babdc:
    // 0x2babdc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2babdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2babe0:
    // 0x2babe0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2babe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2babe4:
    // 0x2babe4: 0x24c64c28  addiu       $a2, $a2, 0x4C28
    ctx->pc = 0x2babe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19496));
label_2babe8:
    // 0x2babe8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2babe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2babec:
    // 0x2babec: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2babecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2babf0:
    // 0x2babf0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2babf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2babf4:
    // 0x2babf4: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x2babf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2babf8:
    // 0x2babf8: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x2babf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_2babfc:
    // 0x2babfc: 0x320f809  jalr        $t9
label_2bac00:
    if (ctx->pc == 0x2BAC00u) {
        ctx->pc = 0x2BAC00u;
            // 0x2bac00: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAC04u;
        goto label_2bac04;
    }
    ctx->pc = 0x2BABFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BAC04u);
        ctx->pc = 0x2BAC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BABFCu;
            // 0x2bac00: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BAC04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BAC04u; }
            if (ctx->pc != 0x2BAC04u) { return; }
        }
        }
    }
    ctx->pc = 0x2BAC04u;
label_2bac04:
    // 0x2bac04: 0x0  nop
    ctx->pc = 0x2bac04u;
    // NOP
label_2bac08:
    // 0x2bac08: 0xa22001d8  sb          $zero, 0x1D8($s1)
    ctx->pc = 0x2bac08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 472), (uint8_t)GPR_U32(ctx, 0));
label_2bac0c:
    // 0x2bac0c: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2bac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_2bac10:
    // 0x2bac10: 0x8c5500b0  lw          $s5, 0xB0($v0)
    ctx->pc = 0x2bac10u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_2bac14:
    // 0x2bac14: 0x12a0003c  beqz        $s5, . + 4 + (0x3C << 2)
label_2bac18:
    if (ctx->pc == 0x2BAC18u) {
        ctx->pc = 0x2BAC1Cu;
        goto label_2bac1c;
    }
    ctx->pc = 0x2BAC14u;
    {
        const bool branch_taken_0x2bac14 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bac14) {
            ctx->pc = 0x2BAD08u;
            goto label_2bad08;
        }
    }
    ctx->pc = 0x2BAC1Cu;
label_2bac1c:
    // 0x2bac1c: 0x83829b77  lb          $v0, -0x6489($gp)
    ctx->pc = 0x2bac1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941559)));
label_2bac20:
    // 0x2bac20: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_2bac24:
    if (ctx->pc == 0x2BAC24u) {
        ctx->pc = 0x2BAC28u;
        goto label_2bac28;
    }
    ctx->pc = 0x2BAC20u;
    {
        const bool branch_taken_0x2bac20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bac20) {
            ctx->pc = 0x2BAD08u;
            goto label_2bad08;
        }
    }
    ctx->pc = 0x2BAC28u;
label_2bac28:
    // 0x2bac28: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
label_2bac2c:
    if (ctx->pc == 0x2BAC2Cu) {
        ctx->pc = 0x2BAC30u;
        goto label_2bac30;
    }
    ctx->pc = 0x2BAC28u;
    {
        const bool branch_taken_0x2bac28 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x2bac28) {
            ctx->pc = 0x2BAC38u;
            goto label_2bac38;
        }
    }
    ctx->pc = 0x2BAC30u;
label_2bac30:
    // 0x2bac30: 0x8fb000b0  lw          $s0, 0xB0($sp)
    ctx->pc = 0x2bac30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2bac34:
    // 0x2bac34: 0x0  nop
    ctx->pc = 0x2bac34u;
    // NOP
label_2bac38:
    // 0x2bac38: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_2bac3c:
    if (ctx->pc == 0x2BAC3Cu) {
        ctx->pc = 0x2BAC40u;
        goto label_2bac40;
    }
    ctx->pc = 0x2BAC38u;
    {
        const bool branch_taken_0x2bac38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bac38) {
            ctx->pc = 0x2BAC4Cu;
            goto label_2bac4c;
        }
    }
    ctx->pc = 0x2BAC40u;
label_2bac40:
    // 0x2bac40: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x2bac40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2bac44:
    // 0x2bac44: 0xc04bc54  jal         func_12F150
label_2bac48:
    if (ctx->pc == 0x2BAC48u) {
        ctx->pc = 0x2BAC48u;
            // 0x2bac48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAC4Cu;
        goto label_2bac4c;
    }
    ctx->pc = 0x2BAC44u;
    SET_GPR_U32(ctx, 31, 0x2BAC4Cu);
    ctx->pc = 0x2BAC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAC44u;
            // 0x2bac48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F150u;
    if (runtime->hasFunction(0x12F150u)) {
        auto targetFn = runtime->lookupFunction(0x12F150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAC4Cu; }
        if (ctx->pc != 0x2BAC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexAnime__17mgCTextureManagerFi_0x12f150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAC4Cu; }
        if (ctx->pc != 0x2BAC4Cu) { return; }
    }
    ctx->pc = 0x2BAC4Cu;
label_2bac4c:
    // 0x2bac4c: 0x0  nop
    ctx->pc = 0x2bac4cu;
    // NOP
label_2bac50:
    // 0x2bac50: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2bac50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_2bac54:
    // 0x2bac54: 0x8c5400f0  lw          $s4, 0xF0($v0)
    ctx->pc = 0x2bac54u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_2bac58:
    // 0x2bac58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2bac5c:
    // 0x2bac5c: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
label_2bac60:
    if (ctx->pc == 0x2BAC60u) {
        ctx->pc = 0x2BAC60u;
            // 0x2bac60: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2BAC64u;
        goto label_2bac64;
    }
    ctx->pc = 0x2BAC5Cu;
    {
        const bool branch_taken_0x2bac5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BAC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAC5Cu;
            // 0x2bac60: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bac5c) {
            ctx->pc = 0x2BAC7Cu;
            goto label_2bac7c;
        }
    }
    ctx->pc = 0x2BAC64u;
label_2bac64:
    // 0x2bac64: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
label_2bac68:
    if (ctx->pc == 0x2BAC68u) {
        ctx->pc = 0x2BAC6Cu;
        goto label_2bac6c;
    }
    ctx->pc = 0x2BAC64u;
    {
        const bool branch_taken_0x2bac64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bac64) {
            ctx->pc = 0x2BAC7Cu;
            goto label_2bac7c;
        }
    }
    ctx->pc = 0x2BAC6Cu;
label_2bac6c:
    // 0x2bac6c: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_2bac70:
    if (ctx->pc == 0x2BAC70u) {
        ctx->pc = 0x2BAC74u;
        goto label_2bac74;
    }
    ctx->pc = 0x2BAC6Cu;
    {
        const bool branch_taken_0x2bac6c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bac6c) {
            ctx->pc = 0x2BAC7Cu;
            goto label_2bac7c;
        }
    }
    ctx->pc = 0x2BAC74u;
label_2bac74:
    // 0x2bac74: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x2bac74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
label_2bac78:
    // 0x2bac78: 0xae80001c  sw          $zero, 0x1C($s4)
    ctx->pc = 0x2bac78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
label_2bac7c:
    // 0x2bac7c: 0x0  nop
    ctx->pc = 0x2bac7cu;
    // NOP
label_2bac80:
    // 0x2bac80: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2bac80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2bac84:
    // 0x2bac84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bac84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2bac88:
    // 0x2bac88: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2bac88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2bac8c:
    // 0x2bac8c: 0x320f809  jalr        $t9
label_2bac90:
    if (ctx->pc == 0x2BAC90u) {
        ctx->pc = 0x2BAC90u;
            // 0x2bac90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAC94u;
        goto label_2bac94;
    }
    ctx->pc = 0x2BAC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BAC94u);
        ctx->pc = 0x2BAC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAC8Cu;
            // 0x2bac90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BAC94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BAC94u; }
            if (ctx->pc != 0x2BAC94u) { return; }
        }
        }
    }
    ctx->pc = 0x2BAC94u;
label_2bac94:
    // 0x2bac94: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2bac94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2bac98:
    // 0x2bac98: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2bac98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2bac9c:
    // 0x2bac9c: 0x8faa00a4  lw          $t2, 0xA4($sp)
    ctx->pc = 0x2bac9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2baca0:
    // 0x2baca0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2baca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2baca4:
    // 0x2baca4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2baca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2baca8:
    // 0x2baca8: 0x24c64c28  addiu       $a2, $a2, 0x4C28
    ctx->pc = 0x2baca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19496));
label_2bacac:
    // 0x2bacac: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2bacacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bacb0:
    // 0x2bacb0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2bacb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bacb4:
    // 0x2bacb4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2bacb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bacb8:
    // 0x2bacb8: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x2bacb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_2bacbc:
    // 0x2bacbc: 0x320f809  jalr        $t9
label_2bacc0:
    if (ctx->pc == 0x2BACC0u) {
        ctx->pc = 0x2BACC0u;
            // 0x2bacc0: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BACC4u;
        goto label_2bacc4;
    }
    ctx->pc = 0x2BACBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BACC4u);
        ctx->pc = 0x2BACC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BACBCu;
            // 0x2bacc0: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BACC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BACC4u; }
            if (ctx->pc != 0x2BACC4u) { return; }
        }
        }
    }
    ctx->pc = 0x2BACC4u;
label_2bacc4:
    // 0x2bacc4: 0xc0abf58  jal         func_2AFD60
label_2bacc8:
    if (ctx->pc == 0x2BACC8u) {
        ctx->pc = 0x2BACCCu;
        goto label_2baccc;
    }
    ctx->pc = 0x2BACC4u;
    SET_GPR_U32(ctx, 31, 0x2BACCCu);
    ctx->pc = 0x2AFD60u;
    if (runtime->hasFunction(0x2AFD60u)) {
        auto targetFn = runtime->lookupFunction(0x2AFD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BACCCu; }
        if (ctx->pc != 0x2BACCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBattleLoop__Fv_0x2afd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BACCCu; }
        if (ctx->pc != 0x2BACCCu) { return; }
    }
    ctx->pc = 0x2BACCCu;
label_2baccc:
    // 0x2baccc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2bacd0:
    if (ctx->pc == 0x2BACD0u) {
        ctx->pc = 0x2BACD4u;
        goto label_2bacd4;
    }
    ctx->pc = 0x2BACCCu;
    {
        const bool branch_taken_0x2baccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baccc) {
            ctx->pc = 0x2BAD08u;
            goto label_2bad08;
        }
    }
    ctx->pc = 0x2BACD4u;
label_2bacd4:
    // 0x2bacd4: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_2bacd8:
    if (ctx->pc == 0x2BACD8u) {
        ctx->pc = 0x2BACDCu;
        goto label_2bacdc;
    }
    ctx->pc = 0x2BACD4u;
    {
        const bool branch_taken_0x2bacd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bacd4) {
            ctx->pc = 0x2BACECu;
            goto label_2bacec;
        }
    }
    ctx->pc = 0x2BACDCu;
label_2bacdc:
    // 0x2bacdc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2bacdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2bace0:
    // 0x2bace0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bace0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bace4:
    // 0x2bace4: 0xc07a358  jal         func_1E8D60
label_2bace8:
    if (ctx->pc == 0x2BACE8u) {
        ctx->pc = 0x2BACE8u;
            // 0x2bace8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2BACECu;
        goto label_2bacec;
    }
    ctx->pc = 0x2BACE4u;
    SET_GPR_U32(ctx, 31, 0x2BACECu);
    ctx->pc = 0x2BACE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BACE4u;
            // 0x2bace8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8D60u;
    if (runtime->hasFunction(0x1E8D60u)) {
        auto targetFn = runtime->lookupFunction(0x1E8D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BACECu; }
        if (ctx->pc != 0x2BACECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSwordBlurEffect__FP11CCharacter2P9mgCMemoryi_0x1e8d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BACECu; }
        if (ctx->pc != 0x2BACECu) { return; }
    }
    ctx->pc = 0x2BACECu;
label_2bacec:
    // 0x2bacec: 0x0  nop
    ctx->pc = 0x2bacecu;
    // NOP
label_2bacf0:
    // 0x2bacf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bacf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bacf4:
    // 0x2bacf4: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
label_2bacf8:
    if (ctx->pc == 0x2BACF8u) {
        ctx->pc = 0x2BACF8u;
            // 0x2bacf8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BACFCu;
        goto label_2bacfc;
    }
    ctx->pc = 0x2BACF4u;
    {
        const bool branch_taken_0x2bacf4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BACF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BACF4u;
            // 0x2bacf8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bacf4) {
            ctx->pc = 0x2BAD08u;
            goto label_2bad08;
        }
    }
    ctx->pc = 0x2BACFCu;
label_2bacfc:
    // 0x2bacfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bacfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bad00:
    // 0x2bad00: 0xc07a358  jal         func_1E8D60
label_2bad04:
    if (ctx->pc == 0x2BAD04u) {
        ctx->pc = 0x2BAD04u;
            // 0x2bad04: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2BAD08u;
        goto label_2bad08;
    }
    ctx->pc = 0x2BAD00u;
    SET_GPR_U32(ctx, 31, 0x2BAD08u);
    ctx->pc = 0x2BAD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD00u;
            // 0x2bad04: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8D60u;
    if (runtime->hasFunction(0x1E8D60u)) {
        auto targetFn = runtime->lookupFunction(0x1E8D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD08u; }
        if (ctx->pc != 0x2BAD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSwordBlurEffect__FP11CCharacter2P9mgCMemoryi_0x1e8d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD08u; }
        if (ctx->pc != 0x2BAD08u) { return; }
    }
    ctx->pc = 0x2BAD08u;
label_2bad08:
    // 0x2bad08: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2bad08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2bad0c:
    // 0x2bad0c: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x2bad0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_2bad10:
    // 0x2bad10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2bad10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2bad14:
    // 0x2bad14: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x2bad14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_2bad18:
    // 0x2bad18: 0x1440fee8  bnez        $v0, . + 4 + (-0x118 << 2)
label_2bad1c:
    if (ctx->pc == 0x2BAD1Cu) {
        ctx->pc = 0x2BAD1Cu;
            // 0x2bad1c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x2BAD20u;
        goto label_2bad20;
    }
    ctx->pc = 0x2BAD18u;
    {
        const bool branch_taken_0x2bad18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD18u;
            // 0x2bad1c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad18) {
            ctx->pc = 0x2BA8BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ba8bc;
        }
    }
    ctx->pc = 0x2BAD20u;
label_2bad20:
    // 0x2bad20: 0x83829b72  lb          $v0, -0x648E($gp)
    ctx->pc = 0x2bad20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941554)));
label_2bad24:
    // 0x2bad24: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_2bad28:
    if (ctx->pc == 0x2BAD28u) {
        ctx->pc = 0x2BAD2Cu;
        goto label_2bad2c;
    }
    ctx->pc = 0x2BAD24u;
    {
        const bool branch_taken_0x2bad24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bad24) {
            ctx->pc = 0x2BAD74u;
            goto label_2bad74;
        }
    }
    ctx->pc = 0x2BAD2Cu;
label_2bad2c:
    // 0x2bad2c: 0x83829b74  lb          $v0, -0x648C($gp)
    ctx->pc = 0x2bad2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941556)));
label_2bad30:
    // 0x2bad30: 0x441000f  bgez        $v0, . + 4 + (0xF << 2)
label_2bad34:
    if (ctx->pc == 0x2BAD34u) {
        ctx->pc = 0x2BAD34u;
            // 0x2bad34: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2BAD38u;
        goto label_2bad38;
    }
    ctx->pc = 0x2BAD30u;
    {
        const bool branch_taken_0x2bad30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BAD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD30u;
            // 0x2bad34: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad30) {
            ctx->pc = 0x2BAD70u;
            goto label_2bad70;
        }
    }
    ctx->pc = 0x2BAD38u;
label_2bad38:
    // 0x2bad38: 0x83839b75  lb          $v1, -0x648B($gp)
    ctx->pc = 0x2bad38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941557)));
label_2bad3c:
    // 0x2bad3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bad40:
    // 0x2bad40: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2bad44:
    if (ctx->pc == 0x2BAD44u) {
        ctx->pc = 0x2BAD44u;
            // 0x2bad44: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2BAD48u;
        goto label_2bad48;
    }
    ctx->pc = 0x2BAD40u;
    {
        const bool branch_taken_0x2bad40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BAD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD40u;
            // 0x2bad44: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad40) {
            ctx->pc = 0x2BAD54u;
            goto label_2bad54;
        }
    }
    ctx->pc = 0x2BAD48u;
label_2bad48:
    // 0x2bad48: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x2bad48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_2bad4c:
    // 0x2bad4c: 0x10000009  b           . + 4 + (0x9 << 2)
label_2bad50:
    if (ctx->pc == 0x2BAD50u) {
        ctx->pc = 0x2BAD50u;
            // 0x2bad50: 0xa3829b75  sb          $v0, -0x648B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2BAD54u;
        goto label_2bad54;
    }
    ctx->pc = 0x2BAD4Cu;
    {
        const bool branch_taken_0x2bad4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD4Cu;
            // 0x2bad50: 0xa3829b75  sb          $v0, -0x648B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad4c) {
            ctx->pc = 0x2BAD74u;
            goto label_2bad74;
        }
    }
    ctx->pc = 0x2BAD54u;
label_2bad54:
    // 0x2bad54: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2bad58:
    if (ctx->pc == 0x2BAD58u) {
        ctx->pc = 0x2BAD58u;
            // 0x2bad58: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2BAD5Cu;
        goto label_2bad5c;
    }
    ctx->pc = 0x2BAD54u;
    {
        const bool branch_taken_0x2bad54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BAD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD54u;
            // 0x2bad58: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad54) {
            ctx->pc = 0x2BAD68u;
            goto label_2bad68;
        }
    }
    ctx->pc = 0x2BAD5Cu;
label_2bad5c:
    // 0x2bad5c: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x2bad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_2bad60:
    // 0x2bad60: 0x10000004  b           . + 4 + (0x4 << 2)
label_2bad64:
    if (ctx->pc == 0x2BAD64u) {
        ctx->pc = 0x2BAD64u;
            // 0x2bad64: 0xa3829b75  sb          $v0, -0x648B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2BAD68u;
        goto label_2bad68;
    }
    ctx->pc = 0x2BAD60u;
    {
        const bool branch_taken_0x2bad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD60u;
            // 0x2bad64: 0xa3829b75  sb          $v0, -0x648B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad60) {
            ctx->pc = 0x2BAD74u;
            goto label_2bad74;
        }
    }
    ctx->pc = 0x2BAD68u;
label_2bad68:
    // 0x2bad68: 0x10000002  b           . + 4 + (0x2 << 2)
label_2bad6c:
    if (ctx->pc == 0x2BAD6Cu) {
        ctx->pc = 0x2BAD6Cu;
            // 0x2bad6c: 0xa3829b75  sb          $v0, -0x648B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2BAD70u;
        goto label_2bad70;
    }
    ctx->pc = 0x2BAD68u;
    {
        const bool branch_taken_0x2bad68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD68u;
            // 0x2bad6c: 0xa3829b75  sb          $v0, -0x648B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad68) {
            ctx->pc = 0x2BAD74u;
            goto label_2bad74;
        }
    }
    ctx->pc = 0x2BAD70u;
label_2bad70:
    // 0x2bad70: 0xa3829b75  sb          $v0, -0x648B($gp)
    ctx->pc = 0x2bad70u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
label_2bad74:
    // 0x2bad74: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2bad74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2bad78:
    // 0x2bad78: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2bad78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2bad7c:
    // 0x2bad7c: 0xc094504  jal         func_251410
label_2bad80:
    if (ctx->pc == 0x2BAD80u) {
        ctx->pc = 0x2BAD80u;
            // 0x2bad80: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x2BAD84u;
        goto label_2bad84;
    }
    ctx->pc = 0x2BAD7Cu;
    SET_GPR_U32(ctx, 31, 0x2BAD84u);
    ctx->pc = 0x2BAD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD7Cu;
            // 0x2bad80: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251410u;
    if (runtime->hasFunction(0x251410u)) {
        auto targetFn = runtime->lookupFunction(0x251410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD84u; }
        if (ctx->pc != 0x2BAD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGInfo__FPc_0x251410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD84u; }
        if (ctx->pc != 0x2BAD84u) { return; }
    }
    ctx->pc = 0x2BAD84u;
label_2bad84:
    // 0x2bad84: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_2bad88:
    if (ctx->pc == 0x2BAD88u) {
        ctx->pc = 0x2BAD8Cu;
        goto label_2bad8c;
    }
    ctx->pc = 0x2BAD84u;
    {
        const bool branch_taken_0x2bad84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bad84) {
            ctx->pc = 0x2BAE0Cu;
            goto label_2bae0c;
        }
    }
    ctx->pc = 0x2BAD8Cu;
label_2bad8c:
    // 0x2bad8c: 0x8f859b6c  lw          $a1, -0x6494($gp)
    ctx->pc = 0x2bad8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
label_2bad90:
    // 0x2bad90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2bad90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bad94:
    // 0x2bad94: 0x83849b70  lb          $a0, -0x6490($gp)
    ctx->pc = 0x2bad94u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2bad98:
    // 0x2bad98: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2bad9c:
    if (ctx->pc == 0x2BAD9Cu) {
        ctx->pc = 0x2BAD9Cu;
            // 0x2bad9c: 0x24a700c0  addiu       $a3, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->pc = 0x2BADA0u;
        goto label_2bada0;
    }
    ctx->pc = 0x2BAD98u;
    {
        const bool branch_taken_0x2bad98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BAD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD98u;
            // 0x2bad9c: 0x24a700c0  addiu       $a3, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad98) {
            ctx->pc = 0x2BADA8u;
            goto label_2bada8;
        }
    }
    ctx->pc = 0x2BADA0u;
label_2bada0:
    // 0x2bada0: 0x1000000c  b           . + 4 + (0xC << 2)
label_2bada4:
    if (ctx->pc == 0x2BADA4u) {
        ctx->pc = 0x2BADA4u;
            // 0x2bada4: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x2BADA8u;
        goto label_2bada8;
    }
    ctx->pc = 0x2BADA0u;
    {
        const bool branch_taken_0x2bada0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BADA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BADA0u;
            // 0x2bada4: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bada0) {
            ctx->pc = 0x2BADD4u;
            goto label_2badd4;
        }
    }
    ctx->pc = 0x2BADA8u;
label_2bada8:
    // 0x2bada8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2bada8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2badac:
    // 0x2badac: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_2badb0:
    if (ctx->pc == 0x2BADB0u) {
        ctx->pc = 0x2BADB4u;
        goto label_2badb4;
    }
    ctx->pc = 0x2BADACu;
    {
        const bool branch_taken_0x2badac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2badac) {
            ctx->pc = 0x2BAE00u;
            goto label_2bae00;
        }
    }
    ctx->pc = 0x2BADB4u;
label_2badb4:
    // 0x2badb4: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x2badb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
label_2badb8:
    // 0x2badb8: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x2badb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
label_2badbc:
    // 0x2badbc: 0x8c460114  lw          $a2, 0x114($v0)
    ctx->pc = 0x2badbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
label_2badc0:
    // 0x2badc0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2badc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2badc4:
    // 0x2badc4: 0xc05c430  jal         func_1710C0
label_2badc8:
    if (ctx->pc == 0x2BADC8u) {
        ctx->pc = 0x2BADC8u;
            // 0x2badc8: 0x8c450110  lw          $a1, 0x110($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
        ctx->pc = 0x2BADCCu;
        goto label_2badcc;
    }
    ctx->pc = 0x2BADC4u;
    SET_GPR_U32(ctx, 31, 0x2BADCCu);
    ctx->pc = 0x2BADC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BADC4u;
            // 0x2badc8: 0x8c450110  lw          $a1, 0x110($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1710C0u;
    if (runtime->hasFunction(0x1710C0u)) {
        auto targetFn = runtime->lookupFunction(0x1710C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BADCCu; }
        if (ctx->pc != 0x2BADCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadActionFile__12CActionCharaFPciP9mgCMemory_0x1710c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BADCCu; }
        if (ctx->pc != 0x2BADCCu) { return; }
    }
    ctx->pc = 0x2BADCCu;
label_2badcc:
    // 0x2badcc: 0x1000000d  b           . + 4 + (0xD << 2)
label_2badd0:
    if (ctx->pc == 0x2BADD0u) {
        ctx->pc = 0x2BADD0u;
            // 0x2badd0: 0x83829b75  lb          $v0, -0x648B($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941557)));
        ctx->pc = 0x2BADD4u;
        goto label_2badd4;
    }
    ctx->pc = 0x2BADCCu;
    {
        const bool branch_taken_0x2badcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BADD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BADCCu;
            // 0x2badd0: 0x83829b75  lb          $v0, -0x648B($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941557)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2badcc) {
            ctx->pc = 0x2BAE04u;
            goto label_2bae04;
        }
    }
    ctx->pc = 0x2BADD4u;
label_2badd4:
    // 0x2badd4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2badd8:
    if (ctx->pc == 0x2BADD8u) {
        ctx->pc = 0x2BADDCu;
        goto label_2baddc;
    }
    ctx->pc = 0x2BADD4u;
    {
        const bool branch_taken_0x2badd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2badd4) {
            ctx->pc = 0x2BADF4u;
            goto label_2badf4;
        }
    }
    ctx->pc = 0x2BADDCu;
label_2baddc:
    // 0x2baddc: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x2baddcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
label_2bade0:
    // 0x2bade0: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x2bade0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
label_2bade4:
    // 0x2bade4: 0x8c460114  lw          $a2, 0x114($v0)
    ctx->pc = 0x2bade4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
label_2bade8:
    // 0x2bade8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2bade8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2badec:
    // 0x2badec: 0xc05c430  jal         func_1710C0
label_2badf0:
    if (ctx->pc == 0x2BADF0u) {
        ctx->pc = 0x2BADF0u;
            // 0x2badf0: 0x8c450110  lw          $a1, 0x110($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
        ctx->pc = 0x2BADF4u;
        goto label_2badf4;
    }
    ctx->pc = 0x2BADECu;
    SET_GPR_U32(ctx, 31, 0x2BADF4u);
    ctx->pc = 0x2BADF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BADECu;
            // 0x2badf0: 0x8c450110  lw          $a1, 0x110($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1710C0u;
    if (runtime->hasFunction(0x1710C0u)) {
        auto targetFn = runtime->lookupFunction(0x1710C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BADF4u; }
        if (ctx->pc != 0x2BADF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadActionFile__12CActionCharaFPciP9mgCMemory_0x1710c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BADF4u; }
        if (ctx->pc != 0x2BADF4u) { return; }
    }
    ctx->pc = 0x2BADF4u;
label_2badf4:
    // 0x2badf4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2badf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2badf8:
    // 0x2badf8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2badf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2badfc:
    // 0x2badfc: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x2badfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_2bae00:
    // 0x2bae00: 0x83829b75  lb          $v0, -0x648B($gp)
    ctx->pc = 0x2bae00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941557)));
label_2bae04:
    // 0x2bae04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bae08:
    // 0x2bae08: 0xa3829b75  sb          $v0, -0x648B($gp)
    ctx->pc = 0x2bae08u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
label_2bae0c:
    // 0x2bae0c: 0x83829b72  lb          $v0, -0x648E($gp)
    ctx->pc = 0x2bae0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941554)));
label_2bae10:
    // 0x2bae10: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_2bae14:
    if (ctx->pc == 0x2BAE14u) {
        ctx->pc = 0x2BAE18u;
        goto label_2bae18;
    }
    ctx->pc = 0x2BAE10u;
    {
        const bool branch_taken_0x2bae10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bae10) {
            ctx->pc = 0x2BAE60u;
            goto label_2bae60;
        }
    }
    ctx->pc = 0x2BAE18u;
label_2bae18:
    // 0x2bae18: 0x83839b74  lb          $v1, -0x648C($gp)
    ctx->pc = 0x2bae18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941556)));
label_2bae1c:
    // 0x2bae1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bae20:
    // 0x2bae20: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_2bae24:
    if (ctx->pc == 0x2BAE24u) {
        ctx->pc = 0x2BAE28u;
        goto label_2bae28;
    }
    ctx->pc = 0x2BAE20u;
    {
        const bool branch_taken_0x2bae20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bae20) {
            ctx->pc = 0x2BAE60u;
            goto label_2bae60;
        }
    }
    ctx->pc = 0x2BAE28u;
label_2bae28:
    // 0x2bae28: 0x83829b75  lb          $v0, -0x648B($gp)
    ctx->pc = 0x2bae28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941557)));
label_2bae2c:
    // 0x2bae2c: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x2bae2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_2bae30:
    // 0x2bae30: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_2bae34:
    if (ctx->pc == 0x2BAE34u) {
        ctx->pc = 0x2BAE38u;
        goto label_2bae38;
    }
    ctx->pc = 0x2BAE30u;
    {
        const bool branch_taken_0x2bae30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bae30) {
            ctx->pc = 0x2BAE60u;
            goto label_2bae60;
        }
    }
    ctx->pc = 0x2BAE38u;
label_2bae38:
    // 0x2bae38: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2bae38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2bae3c:
    // 0x2bae3c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2bae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_2bae40:
    // 0x2bae40: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2bae40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2bae44:
    // 0x2bae44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bae44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bae48:
    // 0x2bae48: 0xc04e780  jal         func_139E00
label_2bae4c:
    if (ctx->pc == 0x2BAE4Cu) {
        ctx->pc = 0x2BAE4Cu;
            // 0x2bae4c: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x2BAE50u;
        goto label_2bae50;
    }
    ctx->pc = 0x2BAE48u;
    SET_GPR_U32(ctx, 31, 0x2BAE50u);
    ctx->pc = 0x2BAE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAE48u;
            // 0x2bae4c: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAE50u; }
        if (ctx->pc != 0x2BAE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAE50u; }
        if (ctx->pc != 0x2BAE50u) { return; }
    }
    ctx->pc = 0x2BAE50u;
label_2bae50:
    // 0x2bae50: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2bae50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2bae54:
    // 0x2bae54: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x2bae54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2bae58:
    // 0x2bae58: 0xc0ae8c0  jal         func_2BA300
label_2bae5c:
    if (ctx->pc == 0x2BAE5Cu) {
        ctx->pc = 0x2BAE5Cu;
            // 0x2bae5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BAE60u;
        goto label_2bae60;
    }
    ctx->pc = 0x2BAE58u;
    SET_GPR_U32(ctx, 31, 0x2BAE60u);
    ctx->pc = 0x2BAE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAE58u;
            // 0x2bae5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA300u;
    if (runtime->hasFunction(0x2BA300u)) {
        auto targetFn = runtime->lookupFunction(0x2BA300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAE60u; }
        if (ctx->pc != 0x2BAE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemRoboDataLoad__FP9mgCMemoryPP17MENU_BGREAD_INFO2i_0x2ba300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAE60u; }
        if (ctx->pc != 0x2BAE60u) { return; }
    }
    ctx->pc = 0x2BAE60u;
label_2bae60:
    // 0x2bae60: 0x83839b72  lb          $v1, -0x648E($gp)
    ctx->pc = 0x2bae60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941554)));
label_2bae64:
    // 0x2bae64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bae68:
    // 0x2bae68: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2bae6c:
    if (ctx->pc == 0x2BAE6Cu) {
        ctx->pc = 0x2BAE70u;
        goto label_2bae70;
    }
    ctx->pc = 0x2BAE68u;
    {
        const bool branch_taken_0x2bae68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bae68) {
            ctx->pc = 0x2BAE88u;
            goto label_2bae88;
        }
    }
    ctx->pc = 0x2BAE70u;
label_2bae70:
    // 0x2bae70: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_2bae74:
    if (ctx->pc == 0x2BAE74u) {
        ctx->pc = 0x2BAE78u;
        goto label_2bae78;
    }
    ctx->pc = 0x2BAE70u;
    {
        const bool branch_taken_0x2bae70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bae70) {
            ctx->pc = 0x2BAE9Cu;
            goto label_2bae9c;
        }
    }
    ctx->pc = 0x2BAE78u;
label_2bae78:
    // 0x2bae78: 0x83829b75  lb          $v0, -0x648B($gp)
    ctx->pc = 0x2bae78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941557)));
label_2bae7c:
    // 0x2bae7c: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x2bae7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_2bae80:
    // 0x2bae80: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_2bae84:
    if (ctx->pc == 0x2BAE84u) {
        ctx->pc = 0x2BAE88u;
        goto label_2bae88;
    }
    ctx->pc = 0x2BAE80u;
    {
        const bool branch_taken_0x2bae80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bae80) {
            ctx->pc = 0x2BAE9Cu;
            goto label_2bae9c;
        }
    }
    ctx->pc = 0x2BAE88u;
label_2bae88:
    // 0x2bae88: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x2bae88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2bae8c:
    // 0x2bae8c: 0xc0aed10  jal         func_2BB440
label_2bae90:
    if (ctx->pc == 0x2BAE90u) {
        ctx->pc = 0x2BAE90u;
            // 0x2bae90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2BAE94u;
        goto label_2bae94;
    }
    ctx->pc = 0x2BAE8Cu;
    SET_GPR_U32(ctx, 31, 0x2BAE94u);
    ctx->pc = 0x2BAE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAE8Cu;
            // 0x2bae90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB440u;
    if (runtime->hasFunction(0x2BB440u)) {
        auto targetFn = runtime->lookupFunction(0x2BB440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAE94u; }
        if (ctx->pc != 0x2BAE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoadEndCheckAfter__FPP17MENU_BGREAD_INFO2i_0x2bb440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAE94u; }
        if (ctx->pc != 0x2BAE94u) { return; }
    }
    ctx->pc = 0x2BAE94u;
label_2bae94:
    // 0x2bae94: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2bae94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2bae98:
    // 0x2bae98: 0xa3829b74  sb          $v0, -0x648C($gp)
    ctx->pc = 0x2bae98u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
label_2bae9c:
    // 0x2bae9c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2bae9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2baea0:
    // 0x2baea0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2baea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2baea4:
    // 0x2baea4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2baea4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2baea8:
    // 0x2baea8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2baea8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2baeac:
    // 0x2baeac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2baeacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2baeb0:
    // 0x2baeb0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2baeb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2baeb4:
    // 0x2baeb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2baeb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2baeb8:
    // 0x2baeb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2baeb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2baebc:
    // 0x2baebc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2baebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2baec0:
    // 0x2baec0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2baec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2baec4:
    // 0x2baec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2baec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2baec8:
    // 0x2baec8: 0x3e00008  jr          $ra
label_2baecc:
    if (ctx->pc == 0x2BAECCu) {
        ctx->pc = 0x2BAECCu;
            // 0x2baecc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x2BAED0u;
        goto label_fallthrough_0x2baec8;
    }
    ctx->pc = 0x2BAEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAEC8u;
            // 0x2baecc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2baec8:
    ctx->pc = 0x2BAED0u;
}
