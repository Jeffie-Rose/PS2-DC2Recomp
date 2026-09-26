#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BuggyControl__FP6CScene
// Address: 0x315510 - 0x316000
void BuggyControl__FP6CScene_0x315510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuggyControl__FP6CScene_0x315510");
#endif

    switch (ctx->pc) {
        case 0x315510u: goto label_315510;
        case 0x315514u: goto label_315514;
        case 0x315518u: goto label_315518;
        case 0x31551cu: goto label_31551c;
        case 0x315520u: goto label_315520;
        case 0x315524u: goto label_315524;
        case 0x315528u: goto label_315528;
        case 0x31552cu: goto label_31552c;
        case 0x315530u: goto label_315530;
        case 0x315534u: goto label_315534;
        case 0x315538u: goto label_315538;
        case 0x31553cu: goto label_31553c;
        case 0x315540u: goto label_315540;
        case 0x315544u: goto label_315544;
        case 0x315548u: goto label_315548;
        case 0x31554cu: goto label_31554c;
        case 0x315550u: goto label_315550;
        case 0x315554u: goto label_315554;
        case 0x315558u: goto label_315558;
        case 0x31555cu: goto label_31555c;
        case 0x315560u: goto label_315560;
        case 0x315564u: goto label_315564;
        case 0x315568u: goto label_315568;
        case 0x31556cu: goto label_31556c;
        case 0x315570u: goto label_315570;
        case 0x315574u: goto label_315574;
        case 0x315578u: goto label_315578;
        case 0x31557cu: goto label_31557c;
        case 0x315580u: goto label_315580;
        case 0x315584u: goto label_315584;
        case 0x315588u: goto label_315588;
        case 0x31558cu: goto label_31558c;
        case 0x315590u: goto label_315590;
        case 0x315594u: goto label_315594;
        case 0x315598u: goto label_315598;
        case 0x31559cu: goto label_31559c;
        case 0x3155a0u: goto label_3155a0;
        case 0x3155a4u: goto label_3155a4;
        case 0x3155a8u: goto label_3155a8;
        case 0x3155acu: goto label_3155ac;
        case 0x3155b0u: goto label_3155b0;
        case 0x3155b4u: goto label_3155b4;
        case 0x3155b8u: goto label_3155b8;
        case 0x3155bcu: goto label_3155bc;
        case 0x3155c0u: goto label_3155c0;
        case 0x3155c4u: goto label_3155c4;
        case 0x3155c8u: goto label_3155c8;
        case 0x3155ccu: goto label_3155cc;
        case 0x3155d0u: goto label_3155d0;
        case 0x3155d4u: goto label_3155d4;
        case 0x3155d8u: goto label_3155d8;
        case 0x3155dcu: goto label_3155dc;
        case 0x3155e0u: goto label_3155e0;
        case 0x3155e4u: goto label_3155e4;
        case 0x3155e8u: goto label_3155e8;
        case 0x3155ecu: goto label_3155ec;
        case 0x3155f0u: goto label_3155f0;
        case 0x3155f4u: goto label_3155f4;
        case 0x3155f8u: goto label_3155f8;
        case 0x3155fcu: goto label_3155fc;
        case 0x315600u: goto label_315600;
        case 0x315604u: goto label_315604;
        case 0x315608u: goto label_315608;
        case 0x31560cu: goto label_31560c;
        case 0x315610u: goto label_315610;
        case 0x315614u: goto label_315614;
        case 0x315618u: goto label_315618;
        case 0x31561cu: goto label_31561c;
        case 0x315620u: goto label_315620;
        case 0x315624u: goto label_315624;
        case 0x315628u: goto label_315628;
        case 0x31562cu: goto label_31562c;
        case 0x315630u: goto label_315630;
        case 0x315634u: goto label_315634;
        case 0x315638u: goto label_315638;
        case 0x31563cu: goto label_31563c;
        case 0x315640u: goto label_315640;
        case 0x315644u: goto label_315644;
        case 0x315648u: goto label_315648;
        case 0x31564cu: goto label_31564c;
        case 0x315650u: goto label_315650;
        case 0x315654u: goto label_315654;
        case 0x315658u: goto label_315658;
        case 0x31565cu: goto label_31565c;
        case 0x315660u: goto label_315660;
        case 0x315664u: goto label_315664;
        case 0x315668u: goto label_315668;
        case 0x31566cu: goto label_31566c;
        case 0x315670u: goto label_315670;
        case 0x315674u: goto label_315674;
        case 0x315678u: goto label_315678;
        case 0x31567cu: goto label_31567c;
        case 0x315680u: goto label_315680;
        case 0x315684u: goto label_315684;
        case 0x315688u: goto label_315688;
        case 0x31568cu: goto label_31568c;
        case 0x315690u: goto label_315690;
        case 0x315694u: goto label_315694;
        case 0x315698u: goto label_315698;
        case 0x31569cu: goto label_31569c;
        case 0x3156a0u: goto label_3156a0;
        case 0x3156a4u: goto label_3156a4;
        case 0x3156a8u: goto label_3156a8;
        case 0x3156acu: goto label_3156ac;
        case 0x3156b0u: goto label_3156b0;
        case 0x3156b4u: goto label_3156b4;
        case 0x3156b8u: goto label_3156b8;
        case 0x3156bcu: goto label_3156bc;
        case 0x3156c0u: goto label_3156c0;
        case 0x3156c4u: goto label_3156c4;
        case 0x3156c8u: goto label_3156c8;
        case 0x3156ccu: goto label_3156cc;
        case 0x3156d0u: goto label_3156d0;
        case 0x3156d4u: goto label_3156d4;
        case 0x3156d8u: goto label_3156d8;
        case 0x3156dcu: goto label_3156dc;
        case 0x3156e0u: goto label_3156e0;
        case 0x3156e4u: goto label_3156e4;
        case 0x3156e8u: goto label_3156e8;
        case 0x3156ecu: goto label_3156ec;
        case 0x3156f0u: goto label_3156f0;
        case 0x3156f4u: goto label_3156f4;
        case 0x3156f8u: goto label_3156f8;
        case 0x3156fcu: goto label_3156fc;
        case 0x315700u: goto label_315700;
        case 0x315704u: goto label_315704;
        case 0x315708u: goto label_315708;
        case 0x31570cu: goto label_31570c;
        case 0x315710u: goto label_315710;
        case 0x315714u: goto label_315714;
        case 0x315718u: goto label_315718;
        case 0x31571cu: goto label_31571c;
        case 0x315720u: goto label_315720;
        case 0x315724u: goto label_315724;
        case 0x315728u: goto label_315728;
        case 0x31572cu: goto label_31572c;
        case 0x315730u: goto label_315730;
        case 0x315734u: goto label_315734;
        case 0x315738u: goto label_315738;
        case 0x31573cu: goto label_31573c;
        case 0x315740u: goto label_315740;
        case 0x315744u: goto label_315744;
        case 0x315748u: goto label_315748;
        case 0x31574cu: goto label_31574c;
        case 0x315750u: goto label_315750;
        case 0x315754u: goto label_315754;
        case 0x315758u: goto label_315758;
        case 0x31575cu: goto label_31575c;
        case 0x315760u: goto label_315760;
        case 0x315764u: goto label_315764;
        case 0x315768u: goto label_315768;
        case 0x31576cu: goto label_31576c;
        case 0x315770u: goto label_315770;
        case 0x315774u: goto label_315774;
        case 0x315778u: goto label_315778;
        case 0x31577cu: goto label_31577c;
        case 0x315780u: goto label_315780;
        case 0x315784u: goto label_315784;
        case 0x315788u: goto label_315788;
        case 0x31578cu: goto label_31578c;
        case 0x315790u: goto label_315790;
        case 0x315794u: goto label_315794;
        case 0x315798u: goto label_315798;
        case 0x31579cu: goto label_31579c;
        case 0x3157a0u: goto label_3157a0;
        case 0x3157a4u: goto label_3157a4;
        case 0x3157a8u: goto label_3157a8;
        case 0x3157acu: goto label_3157ac;
        case 0x3157b0u: goto label_3157b0;
        case 0x3157b4u: goto label_3157b4;
        case 0x3157b8u: goto label_3157b8;
        case 0x3157bcu: goto label_3157bc;
        case 0x3157c0u: goto label_3157c0;
        case 0x3157c4u: goto label_3157c4;
        case 0x3157c8u: goto label_3157c8;
        case 0x3157ccu: goto label_3157cc;
        case 0x3157d0u: goto label_3157d0;
        case 0x3157d4u: goto label_3157d4;
        case 0x3157d8u: goto label_3157d8;
        case 0x3157dcu: goto label_3157dc;
        case 0x3157e0u: goto label_3157e0;
        case 0x3157e4u: goto label_3157e4;
        case 0x3157e8u: goto label_3157e8;
        case 0x3157ecu: goto label_3157ec;
        case 0x3157f0u: goto label_3157f0;
        case 0x3157f4u: goto label_3157f4;
        case 0x3157f8u: goto label_3157f8;
        case 0x3157fcu: goto label_3157fc;
        case 0x315800u: goto label_315800;
        case 0x315804u: goto label_315804;
        case 0x315808u: goto label_315808;
        case 0x31580cu: goto label_31580c;
        case 0x315810u: goto label_315810;
        case 0x315814u: goto label_315814;
        case 0x315818u: goto label_315818;
        case 0x31581cu: goto label_31581c;
        case 0x315820u: goto label_315820;
        case 0x315824u: goto label_315824;
        case 0x315828u: goto label_315828;
        case 0x31582cu: goto label_31582c;
        case 0x315830u: goto label_315830;
        case 0x315834u: goto label_315834;
        case 0x315838u: goto label_315838;
        case 0x31583cu: goto label_31583c;
        case 0x315840u: goto label_315840;
        case 0x315844u: goto label_315844;
        case 0x315848u: goto label_315848;
        case 0x31584cu: goto label_31584c;
        case 0x315850u: goto label_315850;
        case 0x315854u: goto label_315854;
        case 0x315858u: goto label_315858;
        case 0x31585cu: goto label_31585c;
        case 0x315860u: goto label_315860;
        case 0x315864u: goto label_315864;
        case 0x315868u: goto label_315868;
        case 0x31586cu: goto label_31586c;
        case 0x315870u: goto label_315870;
        case 0x315874u: goto label_315874;
        case 0x315878u: goto label_315878;
        case 0x31587cu: goto label_31587c;
        case 0x315880u: goto label_315880;
        case 0x315884u: goto label_315884;
        case 0x315888u: goto label_315888;
        case 0x31588cu: goto label_31588c;
        case 0x315890u: goto label_315890;
        case 0x315894u: goto label_315894;
        case 0x315898u: goto label_315898;
        case 0x31589cu: goto label_31589c;
        case 0x3158a0u: goto label_3158a0;
        case 0x3158a4u: goto label_3158a4;
        case 0x3158a8u: goto label_3158a8;
        case 0x3158acu: goto label_3158ac;
        case 0x3158b0u: goto label_3158b0;
        case 0x3158b4u: goto label_3158b4;
        case 0x3158b8u: goto label_3158b8;
        case 0x3158bcu: goto label_3158bc;
        case 0x3158c0u: goto label_3158c0;
        case 0x3158c4u: goto label_3158c4;
        case 0x3158c8u: goto label_3158c8;
        case 0x3158ccu: goto label_3158cc;
        case 0x3158d0u: goto label_3158d0;
        case 0x3158d4u: goto label_3158d4;
        case 0x3158d8u: goto label_3158d8;
        case 0x3158dcu: goto label_3158dc;
        case 0x3158e0u: goto label_3158e0;
        case 0x3158e4u: goto label_3158e4;
        case 0x3158e8u: goto label_3158e8;
        case 0x3158ecu: goto label_3158ec;
        case 0x3158f0u: goto label_3158f0;
        case 0x3158f4u: goto label_3158f4;
        case 0x3158f8u: goto label_3158f8;
        case 0x3158fcu: goto label_3158fc;
        case 0x315900u: goto label_315900;
        case 0x315904u: goto label_315904;
        case 0x315908u: goto label_315908;
        case 0x31590cu: goto label_31590c;
        case 0x315910u: goto label_315910;
        case 0x315914u: goto label_315914;
        case 0x315918u: goto label_315918;
        case 0x31591cu: goto label_31591c;
        case 0x315920u: goto label_315920;
        case 0x315924u: goto label_315924;
        case 0x315928u: goto label_315928;
        case 0x31592cu: goto label_31592c;
        case 0x315930u: goto label_315930;
        case 0x315934u: goto label_315934;
        case 0x315938u: goto label_315938;
        case 0x31593cu: goto label_31593c;
        case 0x315940u: goto label_315940;
        case 0x315944u: goto label_315944;
        case 0x315948u: goto label_315948;
        case 0x31594cu: goto label_31594c;
        case 0x315950u: goto label_315950;
        case 0x315954u: goto label_315954;
        case 0x315958u: goto label_315958;
        case 0x31595cu: goto label_31595c;
        case 0x315960u: goto label_315960;
        case 0x315964u: goto label_315964;
        case 0x315968u: goto label_315968;
        case 0x31596cu: goto label_31596c;
        case 0x315970u: goto label_315970;
        case 0x315974u: goto label_315974;
        case 0x315978u: goto label_315978;
        case 0x31597cu: goto label_31597c;
        case 0x315980u: goto label_315980;
        case 0x315984u: goto label_315984;
        case 0x315988u: goto label_315988;
        case 0x31598cu: goto label_31598c;
        case 0x315990u: goto label_315990;
        case 0x315994u: goto label_315994;
        case 0x315998u: goto label_315998;
        case 0x31599cu: goto label_31599c;
        case 0x3159a0u: goto label_3159a0;
        case 0x3159a4u: goto label_3159a4;
        case 0x3159a8u: goto label_3159a8;
        case 0x3159acu: goto label_3159ac;
        case 0x3159b0u: goto label_3159b0;
        case 0x3159b4u: goto label_3159b4;
        case 0x3159b8u: goto label_3159b8;
        case 0x3159bcu: goto label_3159bc;
        case 0x3159c0u: goto label_3159c0;
        case 0x3159c4u: goto label_3159c4;
        case 0x3159c8u: goto label_3159c8;
        case 0x3159ccu: goto label_3159cc;
        case 0x3159d0u: goto label_3159d0;
        case 0x3159d4u: goto label_3159d4;
        case 0x3159d8u: goto label_3159d8;
        case 0x3159dcu: goto label_3159dc;
        case 0x3159e0u: goto label_3159e0;
        case 0x3159e4u: goto label_3159e4;
        case 0x3159e8u: goto label_3159e8;
        case 0x3159ecu: goto label_3159ec;
        case 0x3159f0u: goto label_3159f0;
        case 0x3159f4u: goto label_3159f4;
        case 0x3159f8u: goto label_3159f8;
        case 0x3159fcu: goto label_3159fc;
        case 0x315a00u: goto label_315a00;
        case 0x315a04u: goto label_315a04;
        case 0x315a08u: goto label_315a08;
        case 0x315a0cu: goto label_315a0c;
        case 0x315a10u: goto label_315a10;
        case 0x315a14u: goto label_315a14;
        case 0x315a18u: goto label_315a18;
        case 0x315a1cu: goto label_315a1c;
        case 0x315a20u: goto label_315a20;
        case 0x315a24u: goto label_315a24;
        case 0x315a28u: goto label_315a28;
        case 0x315a2cu: goto label_315a2c;
        case 0x315a30u: goto label_315a30;
        case 0x315a34u: goto label_315a34;
        case 0x315a38u: goto label_315a38;
        case 0x315a3cu: goto label_315a3c;
        case 0x315a40u: goto label_315a40;
        case 0x315a44u: goto label_315a44;
        case 0x315a48u: goto label_315a48;
        case 0x315a4cu: goto label_315a4c;
        case 0x315a50u: goto label_315a50;
        case 0x315a54u: goto label_315a54;
        case 0x315a58u: goto label_315a58;
        case 0x315a5cu: goto label_315a5c;
        case 0x315a60u: goto label_315a60;
        case 0x315a64u: goto label_315a64;
        case 0x315a68u: goto label_315a68;
        case 0x315a6cu: goto label_315a6c;
        case 0x315a70u: goto label_315a70;
        case 0x315a74u: goto label_315a74;
        case 0x315a78u: goto label_315a78;
        case 0x315a7cu: goto label_315a7c;
        case 0x315a80u: goto label_315a80;
        case 0x315a84u: goto label_315a84;
        case 0x315a88u: goto label_315a88;
        case 0x315a8cu: goto label_315a8c;
        case 0x315a90u: goto label_315a90;
        case 0x315a94u: goto label_315a94;
        case 0x315a98u: goto label_315a98;
        case 0x315a9cu: goto label_315a9c;
        case 0x315aa0u: goto label_315aa0;
        case 0x315aa4u: goto label_315aa4;
        case 0x315aa8u: goto label_315aa8;
        case 0x315aacu: goto label_315aac;
        case 0x315ab0u: goto label_315ab0;
        case 0x315ab4u: goto label_315ab4;
        case 0x315ab8u: goto label_315ab8;
        case 0x315abcu: goto label_315abc;
        case 0x315ac0u: goto label_315ac0;
        case 0x315ac4u: goto label_315ac4;
        case 0x315ac8u: goto label_315ac8;
        case 0x315accu: goto label_315acc;
        case 0x315ad0u: goto label_315ad0;
        case 0x315ad4u: goto label_315ad4;
        case 0x315ad8u: goto label_315ad8;
        case 0x315adcu: goto label_315adc;
        case 0x315ae0u: goto label_315ae0;
        case 0x315ae4u: goto label_315ae4;
        case 0x315ae8u: goto label_315ae8;
        case 0x315aecu: goto label_315aec;
        case 0x315af0u: goto label_315af0;
        case 0x315af4u: goto label_315af4;
        case 0x315af8u: goto label_315af8;
        case 0x315afcu: goto label_315afc;
        case 0x315b00u: goto label_315b00;
        case 0x315b04u: goto label_315b04;
        case 0x315b08u: goto label_315b08;
        case 0x315b0cu: goto label_315b0c;
        case 0x315b10u: goto label_315b10;
        case 0x315b14u: goto label_315b14;
        case 0x315b18u: goto label_315b18;
        case 0x315b1cu: goto label_315b1c;
        case 0x315b20u: goto label_315b20;
        case 0x315b24u: goto label_315b24;
        case 0x315b28u: goto label_315b28;
        case 0x315b2cu: goto label_315b2c;
        case 0x315b30u: goto label_315b30;
        case 0x315b34u: goto label_315b34;
        case 0x315b38u: goto label_315b38;
        case 0x315b3cu: goto label_315b3c;
        case 0x315b40u: goto label_315b40;
        case 0x315b44u: goto label_315b44;
        case 0x315b48u: goto label_315b48;
        case 0x315b4cu: goto label_315b4c;
        case 0x315b50u: goto label_315b50;
        case 0x315b54u: goto label_315b54;
        case 0x315b58u: goto label_315b58;
        case 0x315b5cu: goto label_315b5c;
        case 0x315b60u: goto label_315b60;
        case 0x315b64u: goto label_315b64;
        case 0x315b68u: goto label_315b68;
        case 0x315b6cu: goto label_315b6c;
        case 0x315b70u: goto label_315b70;
        case 0x315b74u: goto label_315b74;
        case 0x315b78u: goto label_315b78;
        case 0x315b7cu: goto label_315b7c;
        case 0x315b80u: goto label_315b80;
        case 0x315b84u: goto label_315b84;
        case 0x315b88u: goto label_315b88;
        case 0x315b8cu: goto label_315b8c;
        case 0x315b90u: goto label_315b90;
        case 0x315b94u: goto label_315b94;
        case 0x315b98u: goto label_315b98;
        case 0x315b9cu: goto label_315b9c;
        case 0x315ba0u: goto label_315ba0;
        case 0x315ba4u: goto label_315ba4;
        case 0x315ba8u: goto label_315ba8;
        case 0x315bacu: goto label_315bac;
        case 0x315bb0u: goto label_315bb0;
        case 0x315bb4u: goto label_315bb4;
        case 0x315bb8u: goto label_315bb8;
        case 0x315bbcu: goto label_315bbc;
        case 0x315bc0u: goto label_315bc0;
        case 0x315bc4u: goto label_315bc4;
        case 0x315bc8u: goto label_315bc8;
        case 0x315bccu: goto label_315bcc;
        case 0x315bd0u: goto label_315bd0;
        case 0x315bd4u: goto label_315bd4;
        case 0x315bd8u: goto label_315bd8;
        case 0x315bdcu: goto label_315bdc;
        case 0x315be0u: goto label_315be0;
        case 0x315be4u: goto label_315be4;
        case 0x315be8u: goto label_315be8;
        case 0x315becu: goto label_315bec;
        case 0x315bf0u: goto label_315bf0;
        case 0x315bf4u: goto label_315bf4;
        case 0x315bf8u: goto label_315bf8;
        case 0x315bfcu: goto label_315bfc;
        case 0x315c00u: goto label_315c00;
        case 0x315c04u: goto label_315c04;
        case 0x315c08u: goto label_315c08;
        case 0x315c0cu: goto label_315c0c;
        case 0x315c10u: goto label_315c10;
        case 0x315c14u: goto label_315c14;
        case 0x315c18u: goto label_315c18;
        case 0x315c1cu: goto label_315c1c;
        case 0x315c20u: goto label_315c20;
        case 0x315c24u: goto label_315c24;
        case 0x315c28u: goto label_315c28;
        case 0x315c2cu: goto label_315c2c;
        case 0x315c30u: goto label_315c30;
        case 0x315c34u: goto label_315c34;
        case 0x315c38u: goto label_315c38;
        case 0x315c3cu: goto label_315c3c;
        case 0x315c40u: goto label_315c40;
        case 0x315c44u: goto label_315c44;
        case 0x315c48u: goto label_315c48;
        case 0x315c4cu: goto label_315c4c;
        case 0x315c50u: goto label_315c50;
        case 0x315c54u: goto label_315c54;
        case 0x315c58u: goto label_315c58;
        case 0x315c5cu: goto label_315c5c;
        case 0x315c60u: goto label_315c60;
        case 0x315c64u: goto label_315c64;
        case 0x315c68u: goto label_315c68;
        case 0x315c6cu: goto label_315c6c;
        case 0x315c70u: goto label_315c70;
        case 0x315c74u: goto label_315c74;
        case 0x315c78u: goto label_315c78;
        case 0x315c7cu: goto label_315c7c;
        case 0x315c80u: goto label_315c80;
        case 0x315c84u: goto label_315c84;
        case 0x315c88u: goto label_315c88;
        case 0x315c8cu: goto label_315c8c;
        case 0x315c90u: goto label_315c90;
        case 0x315c94u: goto label_315c94;
        case 0x315c98u: goto label_315c98;
        case 0x315c9cu: goto label_315c9c;
        case 0x315ca0u: goto label_315ca0;
        case 0x315ca4u: goto label_315ca4;
        case 0x315ca8u: goto label_315ca8;
        case 0x315cacu: goto label_315cac;
        case 0x315cb0u: goto label_315cb0;
        case 0x315cb4u: goto label_315cb4;
        case 0x315cb8u: goto label_315cb8;
        case 0x315cbcu: goto label_315cbc;
        case 0x315cc0u: goto label_315cc0;
        case 0x315cc4u: goto label_315cc4;
        case 0x315cc8u: goto label_315cc8;
        case 0x315cccu: goto label_315ccc;
        case 0x315cd0u: goto label_315cd0;
        case 0x315cd4u: goto label_315cd4;
        case 0x315cd8u: goto label_315cd8;
        case 0x315cdcu: goto label_315cdc;
        case 0x315ce0u: goto label_315ce0;
        case 0x315ce4u: goto label_315ce4;
        case 0x315ce8u: goto label_315ce8;
        case 0x315cecu: goto label_315cec;
        case 0x315cf0u: goto label_315cf0;
        case 0x315cf4u: goto label_315cf4;
        case 0x315cf8u: goto label_315cf8;
        case 0x315cfcu: goto label_315cfc;
        case 0x315d00u: goto label_315d00;
        case 0x315d04u: goto label_315d04;
        case 0x315d08u: goto label_315d08;
        case 0x315d0cu: goto label_315d0c;
        case 0x315d10u: goto label_315d10;
        case 0x315d14u: goto label_315d14;
        case 0x315d18u: goto label_315d18;
        case 0x315d1cu: goto label_315d1c;
        case 0x315d20u: goto label_315d20;
        case 0x315d24u: goto label_315d24;
        case 0x315d28u: goto label_315d28;
        case 0x315d2cu: goto label_315d2c;
        case 0x315d30u: goto label_315d30;
        case 0x315d34u: goto label_315d34;
        case 0x315d38u: goto label_315d38;
        case 0x315d3cu: goto label_315d3c;
        case 0x315d40u: goto label_315d40;
        case 0x315d44u: goto label_315d44;
        case 0x315d48u: goto label_315d48;
        case 0x315d4cu: goto label_315d4c;
        case 0x315d50u: goto label_315d50;
        case 0x315d54u: goto label_315d54;
        case 0x315d58u: goto label_315d58;
        case 0x315d5cu: goto label_315d5c;
        case 0x315d60u: goto label_315d60;
        case 0x315d64u: goto label_315d64;
        case 0x315d68u: goto label_315d68;
        case 0x315d6cu: goto label_315d6c;
        case 0x315d70u: goto label_315d70;
        case 0x315d74u: goto label_315d74;
        case 0x315d78u: goto label_315d78;
        case 0x315d7cu: goto label_315d7c;
        case 0x315d80u: goto label_315d80;
        case 0x315d84u: goto label_315d84;
        case 0x315d88u: goto label_315d88;
        case 0x315d8cu: goto label_315d8c;
        case 0x315d90u: goto label_315d90;
        case 0x315d94u: goto label_315d94;
        case 0x315d98u: goto label_315d98;
        case 0x315d9cu: goto label_315d9c;
        case 0x315da0u: goto label_315da0;
        case 0x315da4u: goto label_315da4;
        case 0x315da8u: goto label_315da8;
        case 0x315dacu: goto label_315dac;
        case 0x315db0u: goto label_315db0;
        case 0x315db4u: goto label_315db4;
        case 0x315db8u: goto label_315db8;
        case 0x315dbcu: goto label_315dbc;
        case 0x315dc0u: goto label_315dc0;
        case 0x315dc4u: goto label_315dc4;
        case 0x315dc8u: goto label_315dc8;
        case 0x315dccu: goto label_315dcc;
        case 0x315dd0u: goto label_315dd0;
        case 0x315dd4u: goto label_315dd4;
        case 0x315dd8u: goto label_315dd8;
        case 0x315ddcu: goto label_315ddc;
        case 0x315de0u: goto label_315de0;
        case 0x315de4u: goto label_315de4;
        case 0x315de8u: goto label_315de8;
        case 0x315decu: goto label_315dec;
        case 0x315df0u: goto label_315df0;
        case 0x315df4u: goto label_315df4;
        case 0x315df8u: goto label_315df8;
        case 0x315dfcu: goto label_315dfc;
        case 0x315e00u: goto label_315e00;
        case 0x315e04u: goto label_315e04;
        case 0x315e08u: goto label_315e08;
        case 0x315e0cu: goto label_315e0c;
        case 0x315e10u: goto label_315e10;
        case 0x315e14u: goto label_315e14;
        case 0x315e18u: goto label_315e18;
        case 0x315e1cu: goto label_315e1c;
        case 0x315e20u: goto label_315e20;
        case 0x315e24u: goto label_315e24;
        case 0x315e28u: goto label_315e28;
        case 0x315e2cu: goto label_315e2c;
        case 0x315e30u: goto label_315e30;
        case 0x315e34u: goto label_315e34;
        case 0x315e38u: goto label_315e38;
        case 0x315e3cu: goto label_315e3c;
        case 0x315e40u: goto label_315e40;
        case 0x315e44u: goto label_315e44;
        case 0x315e48u: goto label_315e48;
        case 0x315e4cu: goto label_315e4c;
        case 0x315e50u: goto label_315e50;
        case 0x315e54u: goto label_315e54;
        case 0x315e58u: goto label_315e58;
        case 0x315e5cu: goto label_315e5c;
        case 0x315e60u: goto label_315e60;
        case 0x315e64u: goto label_315e64;
        case 0x315e68u: goto label_315e68;
        case 0x315e6cu: goto label_315e6c;
        case 0x315e70u: goto label_315e70;
        case 0x315e74u: goto label_315e74;
        case 0x315e78u: goto label_315e78;
        case 0x315e7cu: goto label_315e7c;
        case 0x315e80u: goto label_315e80;
        case 0x315e84u: goto label_315e84;
        case 0x315e88u: goto label_315e88;
        case 0x315e8cu: goto label_315e8c;
        case 0x315e90u: goto label_315e90;
        case 0x315e94u: goto label_315e94;
        case 0x315e98u: goto label_315e98;
        case 0x315e9cu: goto label_315e9c;
        case 0x315ea0u: goto label_315ea0;
        case 0x315ea4u: goto label_315ea4;
        case 0x315ea8u: goto label_315ea8;
        case 0x315eacu: goto label_315eac;
        case 0x315eb0u: goto label_315eb0;
        case 0x315eb4u: goto label_315eb4;
        case 0x315eb8u: goto label_315eb8;
        case 0x315ebcu: goto label_315ebc;
        case 0x315ec0u: goto label_315ec0;
        case 0x315ec4u: goto label_315ec4;
        case 0x315ec8u: goto label_315ec8;
        case 0x315eccu: goto label_315ecc;
        case 0x315ed0u: goto label_315ed0;
        case 0x315ed4u: goto label_315ed4;
        case 0x315ed8u: goto label_315ed8;
        case 0x315edcu: goto label_315edc;
        case 0x315ee0u: goto label_315ee0;
        case 0x315ee4u: goto label_315ee4;
        case 0x315ee8u: goto label_315ee8;
        case 0x315eecu: goto label_315eec;
        case 0x315ef0u: goto label_315ef0;
        case 0x315ef4u: goto label_315ef4;
        case 0x315ef8u: goto label_315ef8;
        case 0x315efcu: goto label_315efc;
        case 0x315f00u: goto label_315f00;
        case 0x315f04u: goto label_315f04;
        case 0x315f08u: goto label_315f08;
        case 0x315f0cu: goto label_315f0c;
        case 0x315f10u: goto label_315f10;
        case 0x315f14u: goto label_315f14;
        case 0x315f18u: goto label_315f18;
        case 0x315f1cu: goto label_315f1c;
        case 0x315f20u: goto label_315f20;
        case 0x315f24u: goto label_315f24;
        case 0x315f28u: goto label_315f28;
        case 0x315f2cu: goto label_315f2c;
        case 0x315f30u: goto label_315f30;
        case 0x315f34u: goto label_315f34;
        case 0x315f38u: goto label_315f38;
        case 0x315f3cu: goto label_315f3c;
        case 0x315f40u: goto label_315f40;
        case 0x315f44u: goto label_315f44;
        case 0x315f48u: goto label_315f48;
        case 0x315f4cu: goto label_315f4c;
        case 0x315f50u: goto label_315f50;
        case 0x315f54u: goto label_315f54;
        case 0x315f58u: goto label_315f58;
        case 0x315f5cu: goto label_315f5c;
        case 0x315f60u: goto label_315f60;
        case 0x315f64u: goto label_315f64;
        case 0x315f68u: goto label_315f68;
        case 0x315f6cu: goto label_315f6c;
        case 0x315f70u: goto label_315f70;
        case 0x315f74u: goto label_315f74;
        case 0x315f78u: goto label_315f78;
        case 0x315f7cu: goto label_315f7c;
        case 0x315f80u: goto label_315f80;
        case 0x315f84u: goto label_315f84;
        case 0x315f88u: goto label_315f88;
        case 0x315f8cu: goto label_315f8c;
        case 0x315f90u: goto label_315f90;
        case 0x315f94u: goto label_315f94;
        case 0x315f98u: goto label_315f98;
        case 0x315f9cu: goto label_315f9c;
        case 0x315fa0u: goto label_315fa0;
        case 0x315fa4u: goto label_315fa4;
        case 0x315fa8u: goto label_315fa8;
        case 0x315facu: goto label_315fac;
        case 0x315fb0u: goto label_315fb0;
        case 0x315fb4u: goto label_315fb4;
        case 0x315fb8u: goto label_315fb8;
        case 0x315fbcu: goto label_315fbc;
        case 0x315fc0u: goto label_315fc0;
        case 0x315fc4u: goto label_315fc4;
        case 0x315fc8u: goto label_315fc8;
        case 0x315fccu: goto label_315fcc;
        case 0x315fd0u: goto label_315fd0;
        case 0x315fd4u: goto label_315fd4;
        case 0x315fd8u: goto label_315fd8;
        case 0x315fdcu: goto label_315fdc;
        case 0x315fe0u: goto label_315fe0;
        case 0x315fe4u: goto label_315fe4;
        case 0x315fe8u: goto label_315fe8;
        case 0x315fecu: goto label_315fec;
        case 0x315ff0u: goto label_315ff0;
        case 0x315ff4u: goto label_315ff4;
        case 0x315ff8u: goto label_315ff8;
        case 0x315ffcu: goto label_315ffc;
        default: break;
    }

    ctx->pc = 0x315510u;

label_315510:
    // 0x315510: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x315510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
label_315514:
    // 0x315514: 0x34215f10  ori         $at, $at, 0x5F10
    ctx->pc = 0x315514u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24336);
label_315518:
    // 0x315518: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x315518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_31551c:
    // 0x31551c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31551cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_315520:
    // 0x315520: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x315520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_315524:
    // 0x315524: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x315524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_315528:
    // 0x315528: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x315528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31552c:
    // 0x31552c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31552cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_315530:
    // 0x315530: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x315530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_315534:
    // 0x315534: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x315534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_315538:
    // 0x315538: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x315538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_31553c:
    // 0x31553c: 0x320f809  jalr        $t9
label_315540:
    if (ctx->pc == 0x315540u) {
        ctx->pc = 0x315540u;
            // 0x315540: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x315544u;
        goto label_315544;
    }
    ctx->pc = 0x31553Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315544u);
        ctx->pc = 0x315540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31553Cu;
            // 0x315540: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x315544u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315544u; }
            if (ctx->pc != 0x315544u) { return; }
        }
        }
    }
    ctx->pc = 0x315544u;
label_315544:
    // 0x315544: 0x8f82a284  lw          $v0, -0x5D7C($gp)
    ctx->pc = 0x315544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_315548:
    // 0x315548: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x315548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_31554c:
    // 0x31554c: 0x24a52778  addiu       $a1, $a1, 0x2778
    ctx->pc = 0x31554cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10104));
label_315550:
    // 0x315550: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x315550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_315554:
    // 0x315554: 0xc04ddb4  jal         func_1376D0
label_315558:
    if (ctx->pc == 0x315558u) {
        ctx->pc = 0x315558u;
            // 0x315558: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31555Cu;
        goto label_31555c;
    }
    ctx->pc = 0x315554u;
    SET_GPR_U32(ctx, 31, 0x31555Cu);
    ctx->pc = 0x315558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315554u;
            // 0x315558: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31555Cu; }
        if (ctx->pc != 0x31555Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31555Cu; }
        if (ctx->pc != 0x31555Cu) { return; }
    }
    ctx->pc = 0x31555Cu;
label_31555c:
    // 0x31555c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31555cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315560:
    // 0x315560: 0x3401a060  ori         $at, $zero, 0xA060
    ctx->pc = 0x315560u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41056);
label_315564:
    // 0x315564: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x315564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_315568:
    // 0x315568: 0x3a11821  addu        $v1, $sp, $at
    ctx->pc = 0x315568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_31556c:
    // 0x31556c: 0x2442e780  addiu       $v0, $v0, -0x1880
    ctx->pc = 0x31556cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961024));
label_315570:
    // 0x315570: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x315570u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_315574:
    // 0x315574: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_315578:
    if (ctx->pc == 0x315578u) {
        ctx->pc = 0x315578u;
            // 0x315578: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x31557Cu;
        goto label_31557c;
    }
    ctx->pc = 0x315574u;
    {
        const bool branch_taken_0x315574 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x315578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315574u;
            // 0x315578: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315574) {
            ctx->pc = 0x3155F4u;
            goto label_3155f4;
        }
    }
    ctx->pc = 0x31557Cu;
label_31557c:
    // 0x31557c: 0x3401a050  ori         $at, $zero, 0xA050
    ctx->pc = 0x31557cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41040);
label_315580:
    // 0x315580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x315580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315584:
    // 0x315584: 0xc04de0c  jal         func_137830
label_315588:
    if (ctx->pc == 0x315588u) {
        ctx->pc = 0x315588u;
            // 0x315588: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x31558Cu;
        goto label_31558c;
    }
    ctx->pc = 0x315584u;
    SET_GPR_U32(ctx, 31, 0x31558Cu);
    ctx->pc = 0x315588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315584u;
            // 0x315588: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31558Cu; }
        if (ctx->pc != 0x31558Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31558Cu; }
        if (ctx->pc != 0x31558Cu) { return; }
    }
    ctx->pc = 0x31558Cu;
label_31558c:
    // 0x31558c: 0x3401a080  ori         $at, $zero, 0xA080
    ctx->pc = 0x31558cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41088);
label_315590:
    // 0x315590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x315590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315594:
    // 0x315594: 0xc04dc0c  jal         func_137030
label_315598:
    if (ctx->pc == 0x315598u) {
        ctx->pc = 0x315598u;
            // 0x315598: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x31559Cu;
        goto label_31559c;
    }
    ctx->pc = 0x315594u;
    SET_GPR_U32(ctx, 31, 0x31559Cu);
    ctx->pc = 0x315598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315594u;
            // 0x315598: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31559Cu; }
        if (ctx->pc != 0x31559Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31559Cu; }
        if (ctx->pc != 0x31559Cu) { return; }
    }
    ctx->pc = 0x31559Cu;
label_31559c:
    // 0x31559c: 0x3401a060  ori         $at, $zero, 0xA060
    ctx->pc = 0x31559cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41056);
label_3155a0:
    // 0x3155a0: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x3155a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_3155a4:
    // 0x3155a4: 0x3401a080  ori         $at, $zero, 0xA080
    ctx->pc = 0x3155a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41088);
label_3155a8:
    // 0x3155a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3155a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3155ac:
    // 0x3155ac: 0xc041bb0  jal         func_106EC0
label_3155b0:
    if (ctx->pc == 0x3155B0u) {
        ctx->pc = 0x3155B0u;
            // 0x3155b0: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x3155B4u;
        goto label_3155b4;
    }
    ctx->pc = 0x3155ACu;
    SET_GPR_U32(ctx, 31, 0x3155B4u);
    ctx->pc = 0x3155B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3155ACu;
            // 0x3155b0: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3155B4u; }
        if (ctx->pc != 0x3155B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3155B4u; }
        if (ctx->pc != 0x3155B4u) { return; }
    }
    ctx->pc = 0x3155B4u;
label_3155b4:
    // 0x3155b4: 0x3401a0c0  ori         $at, $zero, 0xA0C0
    ctx->pc = 0x3155b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41152);
label_3155b8:
    // 0x3155b8: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x3155b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_3155bc:
    // 0x3155bc: 0x3401a0d0  ori         $at, $zero, 0xA0D0
    ctx->pc = 0x3155bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41168);
label_3155c0:
    // 0x3155c0: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x3155c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_3155c4:
    // 0x3155c4: 0x3401a050  ori         $at, $zero, 0xA050
    ctx->pc = 0x3155c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41040);
label_3155c8:
    // 0x3155c8: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x3155c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_3155cc:
    // 0x3155cc: 0x3401a060  ori         $at, $zero, 0xA060
    ctx->pc = 0x3155ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41056);
label_3155d0:
    // 0x3155d0: 0xc04bd2c  jal         func_12F4B0
label_3155d4:
    if (ctx->pc == 0x3155D4u) {
        ctx->pc = 0x3155D4u;
            // 0x3155d4: 0x3a13821  addu        $a3, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x3155D8u;
        goto label_3155d8;
    }
    ctx->pc = 0x3155D0u;
    SET_GPR_U32(ctx, 31, 0x3155D8u);
    ctx->pc = 0x3155D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3155D0u;
            // 0x3155d4: 0x3a13821  addu        $a3, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4B0u;
    if (runtime->hasFunction(0x12F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3155D8u; }
        if (ctx->pc != 0x3155D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPf_0x12f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3155D8u; }
        if (ctx->pc != 0x3155D8u) { return; }
    }
    ctx->pc = 0x3155D8u;
label_3155d8:
    // 0x3155d8: 0x3401a0c0  ori         $at, $zero, 0xA0C0
    ctx->pc = 0x3155d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41152);
label_3155dc:
    // 0x3155dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3155dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3155e0:
    // 0x3155e0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3155e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3155e4:
    // 0x3155e4: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x3155e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_3155e8:
    // 0x3155e8: 0xc0b1ed4  jal         func_2C7B50
label_3155ec:
    if (ctx->pc == 0x3155ECu) {
        ctx->pc = 0x3155ECu;
            // 0x3155ec: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x3155F0u;
        goto label_3155f0;
    }
    ctx->pc = 0x3155E8u;
    SET_GPR_U32(ctx, 31, 0x3155F0u);
    ctx->pc = 0x3155ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3155E8u;
            // 0x3155ec: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B50u;
    if (runtime->hasFunction(0x2C7B50u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3155F0u; }
        if (ctx->pc != 0x3155F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3155F0u; }
        if (ctx->pc != 0x3155F0u) { return; }
    }
    ctx->pc = 0x3155F0u;
label_3155f0:
    // 0x3155f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3155f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3155f4:
    // 0x3155f4: 0x8f83a2e4  lw          $v1, -0x5D1C($gp)
    ctx->pc = 0x3155f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943460)));
label_3155f8:
    // 0x3155f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3155f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3155fc:
    // 0x3155fc: 0x10650147  beq         $v1, $a1, . + 4 + (0x147 << 2)
label_315600:
    if (ctx->pc == 0x315600u) {
        ctx->pc = 0x315600u;
            // 0x315600: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x315604u;
        goto label_315604;
    }
    ctx->pc = 0x3155FCu;
    {
        const bool branch_taken_0x3155fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x315600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3155FCu;
            // 0x315600: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3155fc) {
            ctx->pc = 0x315B1Cu;
            goto label_315b1c;
        }
    }
    ctx->pc = 0x315604u;
label_315604:
    // 0x315604: 0x106400b0  beq         $v1, $a0, . + 4 + (0xB0 << 2)
label_315608:
    if (ctx->pc == 0x315608u) {
        ctx->pc = 0x315608u;
            // 0x315608: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x31560Cu;
        goto label_31560c;
    }
    ctx->pc = 0x315604u;
    {
        const bool branch_taken_0x315604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x315608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315604u;
            // 0x315608: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315604) {
            ctx->pc = 0x3158C8u;
            goto label_3158c8;
        }
    }
    ctx->pc = 0x31560Cu;
label_31560c:
    // 0x31560c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_315610:
    if (ctx->pc == 0x315610u) {
        ctx->pc = 0x315610u;
            // 0x315610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315614u;
        goto label_315614;
    }
    ctx->pc = 0x31560Cu;
    {
        const bool branch_taken_0x31560c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x315610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31560Cu;
            // 0x315610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31560c) {
            ctx->pc = 0x315660u;
            goto label_315660;
        }
    }
    ctx->pc = 0x315614u;
label_315614:
    // 0x315614: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_315618:
    if (ctx->pc == 0x315618u) {
        ctx->pc = 0x31561Cu;
        goto label_31561c;
    }
    ctx->pc = 0x315614u;
    {
        const bool branch_taken_0x315614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x315614) {
            ctx->pc = 0x315624u;
            goto label_315624;
        }
    }
    ctx->pc = 0x31561Cu;
label_31561c:
    // 0x31561c: 0x1000018a  b           . + 4 + (0x18A << 2)
label_315620:
    if (ctx->pc == 0x315620u) {
        ctx->pc = 0x315620u;
            // 0x315620: 0x8f84a284  lw          $a0, -0x5D7C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
        ctx->pc = 0x315624u;
        goto label_315624;
    }
    ctx->pc = 0x31561Cu;
    {
        const bool branch_taken_0x31561c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31561Cu;
            // 0x315620: 0x8f84a284  lw          $a0, -0x5D7C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31561c) {
            ctx->pc = 0x315C48u;
            goto label_315c48;
        }
    }
    ctx->pc = 0x315624u;
label_315624:
    // 0x315624: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x315624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_315628:
    // 0x315628: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x315628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_31562c:
    // 0x31562c: 0x24a52868  addiu       $a1, $a1, 0x2868
    ctx->pc = 0x31562cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10344));
label_315630:
    // 0x315630: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x315630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_315634:
    // 0x315634: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x315634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_315638:
    // 0x315638: 0x320f809  jalr        $t9
label_31563c:
    if (ctx->pc == 0x31563Cu) {
        ctx->pc = 0x31563Cu;
            // 0x31563c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315640u;
        goto label_315640;
    }
    ctx->pc = 0x315638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315640u);
        ctx->pc = 0x31563Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315638u;
            // 0x31563c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x315640u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315640u; }
            if (ctx->pc != 0x315640u) { return; }
        }
        }
    }
    ctx->pc = 0x315640u;
label_315640:
    // 0x315640: 0x8f82a2f4  lw          $v0, -0x5D0C($gp)
    ctx->pc = 0x315640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943476)));
label_315644:
    // 0x315644: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x315644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_315648:
    // 0x315648: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x315648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31564c:
    // 0x31564c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_315650:
    // 0x315650: 0xc0c550c  jal         func_315430
label_315654:
    if (ctx->pc == 0x315654u) {
        ctx->pc = 0x315654u;
            // 0x315654: 0xaf82a2f4  sw          $v0, -0x5D0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943476), GPR_U32(ctx, 2));
        ctx->pc = 0x315658u;
        goto label_315658;
    }
    ctx->pc = 0x315650u;
    SET_GPR_U32(ctx, 31, 0x315658u);
    ctx->pc = 0x315654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315650u;
            // 0x315654: 0xaf82a2f4  sw          $v0, -0x5D0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943476), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x315430u;
    if (runtime->hasFunction(0x315430u)) {
        auto targetFn = runtime->lookupFunction(0x315430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315658u; }
        if (ctx->pc != 0x315658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBuggyLoopSe__FP6CScenei_0x315430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315658u; }
        if (ctx->pc != 0x315658u) { return; }
    }
    ctx->pc = 0x315658u;
label_315658:
    // 0x315658: 0x1000017a  b           . + 4 + (0x17A << 2)
label_31565c:
    if (ctx->pc == 0x31565Cu) {
        ctx->pc = 0x315660u;
        goto label_315660;
    }
    ctx->pc = 0x315658u;
    {
        const bool branch_taken_0x315658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315658) {
            ctx->pc = 0x315C44u;
            goto label_315c44;
        }
    }
    ctx->pc = 0x315660u;
label_315660:
    // 0x315660: 0xc0c550c  jal         func_315430
label_315664:
    if (ctx->pc == 0x315664u) {
        ctx->pc = 0x315668u;
        goto label_315668;
    }
    ctx->pc = 0x315660u;
    SET_GPR_U32(ctx, 31, 0x315668u);
    ctx->pc = 0x315430u;
    if (runtime->hasFunction(0x315430u)) {
        auto targetFn = runtime->lookupFunction(0x315430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315668u; }
        if (ctx->pc != 0x315668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBuggyLoopSe__FP6CScenei_0x315430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315668u; }
        if (ctx->pc != 0x315668u) { return; }
    }
    ctx->pc = 0x315668u;
label_315668:
    // 0x315668: 0x8f84a2e8  lw          $a0, -0x5D18($gp)
    ctx->pc = 0x315668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943464)));
label_31566c:
    // 0x31566c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31566cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_315670:
    // 0x315670: 0x1082008c  beq         $a0, $v0, . + 4 + (0x8C << 2)
label_315674:
    if (ctx->pc == 0x315674u) {
        ctx->pc = 0x315674u;
            // 0x315674: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x315678u;
        goto label_315678;
    }
    ctx->pc = 0x315670u;
    {
        const bool branch_taken_0x315670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x315674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315670u;
            // 0x315674: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315670) {
            ctx->pc = 0x3158A4u;
            goto label_3158a4;
        }
    }
    ctx->pc = 0x315678u;
label_315678:
    // 0x315678: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
label_31567c:
    if (ctx->pc == 0x31567Cu) {
        ctx->pc = 0x315680u;
        goto label_315680;
    }
    ctx->pc = 0x315678u;
    {
        const bool branch_taken_0x315678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x315678) {
            ctx->pc = 0x31574Cu;
            goto label_31574c;
        }
    }
    ctx->pc = 0x315680u;
label_315680:
    // 0x315680: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_315684:
    if (ctx->pc == 0x315684u) {
        ctx->pc = 0x315688u;
        goto label_315688;
    }
    ctx->pc = 0x315680u;
    {
        const bool branch_taken_0x315680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x315680) {
            ctx->pc = 0x315690u;
            goto label_315690;
        }
    }
    ctx->pc = 0x315688u;
label_315688:
    // 0x315688: 0x1000016e  b           . + 4 + (0x16E << 2)
label_31568c:
    if (ctx->pc == 0x31568Cu) {
        ctx->pc = 0x315690u;
        goto label_315690;
    }
    ctx->pc = 0x315688u;
    {
        const bool branch_taken_0x315688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315688) {
            ctx->pc = 0x315C44u;
            goto label_315c44;
        }
    }
    ctx->pc = 0x315690u;
label_315690:
    // 0x315690: 0x8f82a2f8  lw          $v0, -0x5D08($gp)
    ctx->pc = 0x315690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943480)));
label_315694:
    // 0x315694: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_315698:
    if (ctx->pc == 0x315698u) {
        ctx->pc = 0x31569Cu;
        goto label_31569c;
    }
    ctx->pc = 0x315694u;
    {
        const bool branch_taken_0x315694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x315694) {
            ctx->pc = 0x3156C0u;
            goto label_3156c0;
        }
    }
    ctx->pc = 0x31569Cu;
label_31569c:
    // 0x31569c: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x31569cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_3156a0:
    // 0x3156a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3156a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_3156a4:
    // 0x3156a4: 0x24a52870  addiu       $a1, $a1, 0x2870
    ctx->pc = 0x3156a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10352));
label_3156a8:
    // 0x3156a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3156a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3156ac:
    // 0x3156ac: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x3156acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_3156b0:
    // 0x3156b0: 0x320f809  jalr        $t9
label_3156b4:
    if (ctx->pc == 0x3156B4u) {
        ctx->pc = 0x3156B4u;
            // 0x3156b4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x3156B8u;
        goto label_3156b8;
    }
    ctx->pc = 0x3156B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3156B8u);
        ctx->pc = 0x3156B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3156B0u;
            // 0x3156b4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3156B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3156B8u; }
            if (ctx->pc != 0x3156B8u) { return; }
        }
        }
    }
    ctx->pc = 0x3156B8u;
label_3156b8:
    // 0x3156b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3156bc:
    if (ctx->pc == 0x3156BCu) {
        ctx->pc = 0x3156C0u;
        goto label_3156c0;
    }
    ctx->pc = 0x3156B8u;
    {
        const bool branch_taken_0x3156b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3156b8) {
            ctx->pc = 0x3156DCu;
            goto label_3156dc;
        }
    }
    ctx->pc = 0x3156C0u;
label_3156c0:
    // 0x3156c0: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x3156c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_3156c4:
    // 0x3156c4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3156c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_3156c8:
    // 0x3156c8: 0x24a52880  addiu       $a1, $a1, 0x2880
    ctx->pc = 0x3156c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10368));
label_3156cc:
    // 0x3156cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3156ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3156d0:
    // 0x3156d0: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x3156d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_3156d4:
    // 0x3156d4: 0x320f809  jalr        $t9
label_3156d8:
    if (ctx->pc == 0x3156D8u) {
        ctx->pc = 0x3156D8u;
            // 0x3156d8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x3156DCu;
        goto label_3156dc;
    }
    ctx->pc = 0x3156D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3156DCu);
        ctx->pc = 0x3156D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3156D4u;
            // 0x3156d8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3156DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3156DCu; }
            if (ctx->pc != 0x3156DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3156DCu;
label_3156dc:
    // 0x3156dc: 0xc04a0ea  jal         func_1283A8
label_3156e0:
    if (ctx->pc == 0x3156E0u) {
        ctx->pc = 0x3156E4u;
        goto label_3156e4;
    }
    ctx->pc = 0x3156DCu;
    SET_GPR_U32(ctx, 31, 0x3156E4u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3156E4u; }
        if (ctx->pc != 0x3156E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3156E4u; }
        if (ctx->pc != 0x3156E4u) { return; }
    }
    ctx->pc = 0x3156E4u;
label_3156e4:
    // 0x3156e4: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x3156e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
label_3156e8:
    // 0x3156e8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_3156ec:
    if (ctx->pc == 0x3156ECu) {
        ctx->pc = 0x3156ECu;
            // 0x3156ec: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x3156F0u;
        goto label_3156f0;
    }
    ctx->pc = 0x3156E8u;
    {
        const bool branch_taken_0x3156e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3156ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3156E8u;
            // 0x3156ec: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3156e8) {
            ctx->pc = 0x3156FCu;
            goto label_3156fc;
        }
    }
    ctx->pc = 0x3156F0u;
label_3156f0:
    // 0x3156f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3156f4:
    if (ctx->pc == 0x3156F4u) {
        ctx->pc = 0x3156F8u;
        goto label_3156f8;
    }
    ctx->pc = 0x3156F0u;
    {
        const bool branch_taken_0x3156f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3156f0) {
            ctx->pc = 0x3156FCu;
            goto label_3156fc;
        }
    }
    ctx->pc = 0x3156F8u;
label_3156f8:
    // 0x3156f8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3156f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_3156fc:
    // 0x3156fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_315700:
    if (ctx->pc == 0x315700u) {
        ctx->pc = 0x315700u;
            // 0x315700: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x315704u;
        goto label_315704;
    }
    ctx->pc = 0x3156FCu;
    {
        const bool branch_taken_0x3156fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3156FCu;
            // 0x315700: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3156fc) {
            ctx->pc = 0x315720u;
            goto label_315720;
        }
    }
    ctx->pc = 0x315704u;
label_315704:
    // 0x315704: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x315704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_315708:
    // 0x315708: 0x3c020082  lui         $v0, 0x82
    ctx->pc = 0x315708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)130 << 16));
label_31570c:
    // 0x31570c: 0x2484f9a0  addiu       $a0, $a0, -0x660
    ctx->pc = 0x31570cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965664));
label_315710:
    // 0x315710: 0xc0c1194  jal         func_304650
label_315714:
    if (ctx->pc == 0x315714u) {
        ctx->pc = 0x315714u;
            // 0x315714: 0x3445ebb4  ori         $a1, $v0, 0xEBB4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60340);
        ctx->pc = 0x315718u;
        goto label_315718;
    }
    ctx->pc = 0x315710u;
    SET_GPR_U32(ctx, 31, 0x315718u);
    ctx->pc = 0x315714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315710u;
            // 0x315714: 0x3445ebb4  ori         $a1, $v0, 0xEBB4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60340);
        ctx->in_delay_slot = false;
    ctx->pc = 0x304650u;
    if (runtime->hasFunction(0x304650u)) {
        auto targetFn = runtime->lookupFunction(0x304650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315718u; }
        if (ctx->pc != 0x315718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Open__12sgCPlayVoiceFi_0x304650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315718u; }
        if (ctx->pc != 0x315718u) { return; }
    }
    ctx->pc = 0x315718u;
label_315718:
    // 0x315718: 0x10000005  b           . + 4 + (0x5 << 2)
label_31571c:
    if (ctx->pc == 0x31571Cu) {
        ctx->pc = 0x315720u;
        goto label_315720;
    }
    ctx->pc = 0x315718u;
    {
        const bool branch_taken_0x315718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315718) {
            ctx->pc = 0x315730u;
            goto label_315730;
        }
    }
    ctx->pc = 0x315720u;
label_315720:
    // 0x315720: 0x3c020082  lui         $v0, 0x82
    ctx->pc = 0x315720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)130 << 16));
label_315724:
    // 0x315724: 0x2484f9a0  addiu       $a0, $a0, -0x660
    ctx->pc = 0x315724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965664));
label_315728:
    // 0x315728: 0xc0c1194  jal         func_304650
label_31572c:
    if (ctx->pc == 0x31572Cu) {
        ctx->pc = 0x31572Cu;
            // 0x31572c: 0x3445ebbe  ori         $a1, $v0, 0xEBBE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60350);
        ctx->pc = 0x315730u;
        goto label_315730;
    }
    ctx->pc = 0x315728u;
    SET_GPR_U32(ctx, 31, 0x315730u);
    ctx->pc = 0x31572Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315728u;
            // 0x31572c: 0x3445ebbe  ori         $a1, $v0, 0xEBBE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60350);
        ctx->in_delay_slot = false;
    ctx->pc = 0x304650u;
    if (runtime->hasFunction(0x304650u)) {
        auto targetFn = runtime->lookupFunction(0x304650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315730u; }
        if (ctx->pc != 0x315730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Open__12sgCPlayVoiceFi_0x304650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315730u; }
        if (ctx->pc != 0x315730u) { return; }
    }
    ctx->pc = 0x315730u;
label_315730:
    // 0x315730: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x315730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_315734:
    // 0x315734: 0xc0c11c8  jal         func_304720
label_315738:
    if (ctx->pc == 0x315738u) {
        ctx->pc = 0x315738u;
            // 0x315738: 0x2484f9a0  addiu       $a0, $a0, -0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965664));
        ctx->pc = 0x31573Cu;
        goto label_31573c;
    }
    ctx->pc = 0x315734u;
    SET_GPR_U32(ctx, 31, 0x31573Cu);
    ctx->pc = 0x315738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315734u;
            // 0x315738: 0x2484f9a0  addiu       $a0, $a0, -0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304720u;
    if (runtime->hasFunction(0x304720u)) {
        auto targetFn = runtime->lookupFunction(0x304720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31573Cu; }
        if (ctx->pc != 0x31573Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Play__12sgCPlayVoiceFv_0x304720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31573Cu; }
        if (ctx->pc != 0x31573Cu) { return; }
    }
    ctx->pc = 0x31573Cu;
label_31573c:
    // 0x31573c: 0x8f82a2e8  lw          $v0, -0x5D18($gp)
    ctx->pc = 0x31573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943464)));
label_315740:
    // 0x315740: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x315740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_315744:
    // 0x315744: 0x1000013f  b           . + 4 + (0x13F << 2)
label_315748:
    if (ctx->pc == 0x315748u) {
        ctx->pc = 0x315748u;
            // 0x315748: 0xaf82a2e8  sw          $v0, -0x5D18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943464), GPR_U32(ctx, 2));
        ctx->pc = 0x31574Cu;
        goto label_31574c;
    }
    ctx->pc = 0x315744u;
    {
        const bool branch_taken_0x315744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315744u;
            // 0x315748: 0xaf82a2e8  sw          $v0, -0x5D18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315744) {
            ctx->pc = 0x315C44u;
            goto label_315c44;
        }
    }
    ctx->pc = 0x31574Cu;
label_31574c:
    // 0x31574c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31574cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_315750:
    // 0x315750: 0xc0c550c  jal         func_315430
label_315754:
    if (ctx->pc == 0x315754u) {
        ctx->pc = 0x315754u;
            // 0x315754: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x315758u;
        goto label_315758;
    }
    ctx->pc = 0x315750u;
    SET_GPR_U32(ctx, 31, 0x315758u);
    ctx->pc = 0x315754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315750u;
            // 0x315754: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x315430u;
    if (runtime->hasFunction(0x315430u)) {
        auto targetFn = runtime->lookupFunction(0x315430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315758u; }
        if (ctx->pc != 0x315758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBuggyLoopSe__FP6CScenei_0x315430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315758u; }
        if (ctx->pc != 0x315758u) { return; }
    }
    ctx->pc = 0x315758u;
label_315758:
    // 0x315758: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x315758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_31575c:
    // 0x31575c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31575cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_315760:
    // 0x315760: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x315760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_315764:
    // 0x315764: 0x320f809  jalr        $t9
label_315768:
    if (ctx->pc == 0x315768u) {
        ctx->pc = 0x31576Cu;
        goto label_31576c;
    }
    ctx->pc = 0x315764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31576Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x31576Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31576Cu; }
            if (ctx->pc != 0x31576Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31576Cu;
label_31576c:
    // 0x31576c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_315770:
    if (ctx->pc == 0x315770u) {
        ctx->pc = 0x315774u;
        goto label_315774;
    }
    ctx->pc = 0x31576Cu;
    {
        const bool branch_taken_0x31576c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31576c) {
            ctx->pc = 0x315780u;
            goto label_315780;
        }
    }
    ctx->pc = 0x315774u;
label_315774:
    // 0x315774: 0x8f82a2e8  lw          $v0, -0x5D18($gp)
    ctx->pc = 0x315774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943464)));
label_315778:
    // 0x315778: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x315778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_31577c:
    // 0x31577c: 0xaf82a2e8  sw          $v0, -0x5D18($gp)
    ctx->pc = 0x31577cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943464), GPR_U32(ctx, 2));
label_315780:
    // 0x315780: 0x8f82a304  lw          $v0, -0x5CFC($gp)
    ctx->pc = 0x315780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943492)));
label_315784:
    // 0x315784: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x315784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315788:
    // 0x315788: 0x1c40003e  bgtz        $v0, . + 4 + (0x3E << 2)
label_31578c:
    if (ctx->pc == 0x31578Cu) {
        ctx->pc = 0x31578Cu;
            // 0x31578c: 0xaf89a300  sw          $t1, -0x5D00($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943488), GPR_U32(ctx, 9));
        ctx->pc = 0x315790u;
        goto label_315790;
    }
    ctx->pc = 0x315788u;
    {
        const bool branch_taken_0x315788 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x31578Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315788u;
            // 0x31578c: 0xaf89a300  sw          $t1, -0x5D00($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943488), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315788) {
            ctx->pc = 0x315884u;
            goto label_315884;
        }
    }
    ctx->pc = 0x315790u;
label_315790:
    // 0x315790: 0x3401a050  ori         $at, $zero, 0xA050
    ctx->pc = 0x315790u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41040);
label_315794:
    // 0x315794: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x315794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315798:
    // 0x315798: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x315798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_31579c:
    // 0x31579c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x31579cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3157a0:
    // 0x3157a0: 0x3401a060  ori         $at, $zero, 0xA060
    ctx->pc = 0x3157a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41056);
label_3157a4:
    // 0x3157a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3157a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3157a8:
    // 0x3157a8: 0x3a13821  addu        $a3, $sp, $at
    ctx->pc = 0x3157a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_3157ac:
    // 0x3157ac: 0x3401a070  ori         $at, $zero, 0xA070
    ctx->pc = 0x3157acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41072);
label_3157b0:
    // 0x3157b0: 0xc053794  jal         func_14DE50
label_3157b4:
    if (ctx->pc == 0x3157B4u) {
        ctx->pc = 0x3157B4u;
            // 0x3157b4: 0x3a14021  addu        $t0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x3157B8u;
        goto label_3157b8;
    }
    ctx->pc = 0x3157B0u;
    SET_GPR_U32(ctx, 31, 0x3157B8u);
    ctx->pc = 0x3157B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3157B0u;
            // 0x3157b4: 0x3a14021  addu        $t0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3157B8u; }
        if (ctx->pc != 0x3157B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3157B8u; }
        if (ctx->pc != 0x3157B8u) { return; }
    }
    ctx->pc = 0x3157B8u;
label_3157b8:
    // 0x3157b8: 0x4400032  bltz        $v0, . + 4 + (0x32 << 2)
label_3157bc:
    if (ctx->pc == 0x3157BCu) {
        ctx->pc = 0x3157C0u;
        goto label_3157c0;
    }
    ctx->pc = 0x3157B8u;
    {
        const bool branch_taken_0x3157b8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3157b8) {
            ctx->pc = 0x315884u;
            goto label_315884;
        }
    }
    ctx->pc = 0x3157C0u;
label_3157c0:
    // 0x3157c0: 0x8f84a29c  lw          $a0, -0x5D64($gp)
    ctx->pc = 0x3157c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943388)));
label_3157c4:
    // 0x3157c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3157c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3157c8:
    // 0x3157c8: 0xaf83a304  sw          $v1, -0x5CFC($gp)
    ctx->pc = 0x3157c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943492), GPR_U32(ctx, 3));
label_3157cc:
    // 0x3157cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3157ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3157d0:
    // 0x3157d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3157d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3157d4:
    // 0x3157d4: 0x0  nop
    ctx->pc = 0x3157d4u;
    // NOP
label_3157d8:
    // 0x3157d8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3157d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3157dc:
    // 0x3157dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3157dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3157e0:
    // 0x3157e0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3157e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3157e4:
    // 0x3157e4: 0x320f809  jalr        $t9
label_3157e8:
    if (ctx->pc == 0x3157E8u) {
        ctx->pc = 0x3157E8u;
            // 0x3157e8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3157ECu;
        goto label_3157ec;
    }
    ctx->pc = 0x3157E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3157ECu);
        ctx->pc = 0x3157E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3157E4u;
            // 0x3157e8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3157ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3157ECu; }
            if (ctx->pc != 0x3157ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3157ECu;
label_3157ec:
    // 0x3157ec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3157ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_3157f0:
    // 0x3157f0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3157f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3157f4:
    // 0x3157f4: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x3157f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_3157f8:
    // 0x3157f8: 0x8f84a29c  lw          $a0, -0x5D64($gp)
    ctx->pc = 0x3157f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943388)));
label_3157fc:
    // 0x3157fc: 0xc421a074  lwc1        $f1, -0x5F8C($at)
    ctx->pc = 0x3157fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315800:
    // 0x315800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315804:
    // 0x315804: 0x3401a070  ori         $at, $zero, 0xA070
    ctx->pc = 0x315804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41072);
label_315808:
    // 0x315808: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x315808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_31580c:
    // 0x31580c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x31580cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_315810:
    // 0x315810: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x315810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_315814:
    // 0x315814: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x315814u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_315818:
    // 0x315818: 0xe420a074  swc1        $f0, -0x5F8C($at)
    ctx->pc = 0x315818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294942836), bits); }
label_31581c:
    // 0x31581c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31581cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_315820:
    // 0x315820: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x315820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_315824:
    // 0x315824: 0x320f809  jalr        $t9
label_315828:
    if (ctx->pc == 0x315828u) {
        ctx->pc = 0x31582Cu;
        goto label_31582c;
    }
    ctx->pc = 0x315824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31582Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x31582Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31582Cu; }
            if (ctx->pc != 0x31582Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31582Cu;
label_31582c:
    // 0x31582c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x31582cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_315830:
    // 0x315830: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x315830u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_315834:
    // 0x315834: 0xc423a050  lwc1        $f3, -0x5FB0($at)
    ctx->pc = 0x315834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_315838:
    // 0x315838: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x315838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_31583c:
    // 0x31583c: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x31583cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_315840:
    // 0x315840: 0xc422a060  lwc1        $f2, -0x5FA0($at)
    ctx->pc = 0x315840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_315844:
    // 0x315844: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x315844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_315848:
    // 0x315848: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x315848u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_31584c:
    // 0x31584c: 0xc421a058  lwc1        $f1, -0x5FA8($at)
    ctx->pc = 0x31584cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315850:
    // 0x315850: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x315850u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_315854:
    // 0x315854: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x315854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_315858:
    // 0x315858: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x315858u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_31585c:
    // 0x31585c: 0xc420a068  lwc1        $f0, -0x5F98($at)
    ctx->pc = 0x31585cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315860:
    // 0x315860: 0xc047c76  jal         func_11F1D8
label_315864:
    if (ctx->pc == 0x315864u) {
        ctx->pc = 0x315864u;
            // 0x315864: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x315868u;
        goto label_315868;
    }
    ctx->pc = 0x315860u;
    SET_GPR_U32(ctx, 31, 0x315868u);
    ctx->pc = 0x315864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315860u;
            // 0x315864: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315868u; }
        if (ctx->pc != 0x315868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315868u; }
        if (ctx->pc != 0x315868u) { return; }
    }
    ctx->pc = 0x315868u;
label_315868:
    // 0x315868: 0x8f84a29c  lw          $a0, -0x5D64($gp)
    ctx->pc = 0x315868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943388)));
label_31586c:
    // 0x31586c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31586cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_315870:
    // 0x315870: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x315870u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_315874:
    // 0x315874: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x315874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_315878:
    // 0x315878: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x315878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_31587c:
    // 0x31587c: 0x320f809  jalr        $t9
label_315880:
    if (ctx->pc == 0x315880u) {
        ctx->pc = 0x315880u;
            // 0x315880: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x315884u;
        goto label_315884;
    }
    ctx->pc = 0x31587Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315884u);
        ctx->pc = 0x315880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31587Cu;
            // 0x315880: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x315884u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315884u; }
            if (ctx->pc != 0x315884u) { return; }
        }
        }
    }
    ctx->pc = 0x315884u;
label_315884:
    // 0x315884: 0xc781a2f0  lwc1        $f1, -0x5D10($gp)
    ctx->pc = 0x315884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315888:
    // 0x315888: 0x3c023aa3  lui         $v0, 0x3AA3
    ctx->pc = 0x315888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15011 << 16));
label_31588c:
    // 0x31588c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x31588cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_315890:
    // 0x315890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315894:
    // 0x315894: 0x0  nop
    ctx->pc = 0x315894u;
    // NOP
label_315898:
    // 0x315898: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x315898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31589c:
    // 0x31589c: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_3158a0:
    if (ctx->pc == 0x3158A0u) {
        ctx->pc = 0x3158A0u;
            // 0x3158a0: 0xe780a2f0  swc1        $f0, -0x5D10($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943472), bits); }
        ctx->pc = 0x3158A4u;
        goto label_3158a4;
    }
    ctx->pc = 0x31589Cu;
    {
        const bool branch_taken_0x31589c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3158A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31589Cu;
            // 0x3158a0: 0xe780a2f0  swc1        $f0, -0x5D10($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943472), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31589c) {
            ctx->pc = 0x315C44u;
            goto label_315c44;
        }
    }
    ctx->pc = 0x3158A4u;
label_3158a4:
    // 0x3158a4: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x3158a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_3158a8:
    // 0x3158a8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3158a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_3158ac:
    // 0x3158ac: 0x24a52868  addiu       $a1, $a1, 0x2868
    ctx->pc = 0x3158acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10344));
label_3158b0:
    // 0x3158b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3158b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3158b4:
    // 0x3158b4: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x3158b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_3158b8:
    // 0x3158b8: 0x320f809  jalr        $t9
label_3158bc:
    if (ctx->pc == 0x3158BCu) {
        ctx->pc = 0x3158BCu;
            // 0x3158bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3158C0u;
        goto label_3158c0;
    }
    ctx->pc = 0x3158B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3158C0u);
        ctx->pc = 0x3158BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3158B8u;
            // 0x3158bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3158C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3158C0u; }
            if (ctx->pc != 0x3158C0u) { return; }
        }
        }
    }
    ctx->pc = 0x3158C0u;
label_3158c0:
    // 0x3158c0: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_3158c4:
    if (ctx->pc == 0x3158C4u) {
        ctx->pc = 0x3158C4u;
            // 0x3158c4: 0xaf80a2f4  sw          $zero, -0x5D0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943476), GPR_U32(ctx, 0));
        ctx->pc = 0x3158C8u;
        goto label_3158c8;
    }
    ctx->pc = 0x3158C0u;
    {
        const bool branch_taken_0x3158c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3158C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3158C0u;
            // 0x3158c4: 0xaf80a2f4  sw          $zero, -0x5D0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3158c0) {
            ctx->pc = 0x315C44u;
            goto label_315c44;
        }
    }
    ctx->pc = 0x3158C8u;
label_3158c8:
    // 0x3158c8: 0x8f83a2e8  lw          $v1, -0x5D18($gp)
    ctx->pc = 0x3158c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943464)));
label_3158cc:
    // 0x3158cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3158ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3158d0:
    // 0x3158d0: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
label_3158d4:
    if (ctx->pc == 0x3158D4u) {
        ctx->pc = 0x3158D8u;
        goto label_3158d8;
    }
    ctx->pc = 0x3158D0u;
    {
        const bool branch_taken_0x3158d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3158d0) {
            ctx->pc = 0x315A98u;
            goto label_315a98;
        }
    }
    ctx->pc = 0x3158D8u;
label_3158d8:
    // 0x3158d8: 0x10650057  beq         $v1, $a1, . + 4 + (0x57 << 2)
label_3158dc:
    if (ctx->pc == 0x3158DCu) {
        ctx->pc = 0x3158E0u;
        goto label_3158e0;
    }
    ctx->pc = 0x3158D8u;
    {
        const bool branch_taken_0x3158d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3158d8) {
            ctx->pc = 0x315A38u;
            goto label_315a38;
        }
    }
    ctx->pc = 0x3158E0u;
label_3158e0:
    // 0x3158e0: 0x10640025  beq         $v1, $a0, . + 4 + (0x25 << 2)
label_3158e4:
    if (ctx->pc == 0x3158E4u) {
        ctx->pc = 0x3158E4u;
            // 0x3158e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3158E8u;
        goto label_3158e8;
    }
    ctx->pc = 0x3158E0u;
    {
        const bool branch_taken_0x3158e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3158E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3158E0u;
            // 0x3158e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3158e0) {
            ctx->pc = 0x315978u;
            goto label_315978;
        }
    }
    ctx->pc = 0x3158E8u;
label_3158e8:
    // 0x3158e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3158ec:
    if (ctx->pc == 0x3158ECu) {
        ctx->pc = 0x3158F0u;
        goto label_3158f0;
    }
    ctx->pc = 0x3158E8u;
    {
        const bool branch_taken_0x3158e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3158e8) {
            ctx->pc = 0x3158F8u;
            goto label_3158f8;
        }
    }
    ctx->pc = 0x3158F0u;
label_3158f0:
    // 0x3158f0: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_3158f4:
    if (ctx->pc == 0x3158F4u) {
        ctx->pc = 0x3158F8u;
        goto label_3158f8;
    }
    ctx->pc = 0x3158F0u;
    {
        const bool branch_taken_0x3158f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3158f0) {
            ctx->pc = 0x315C44u;
            goto label_315c44;
        }
    }
    ctx->pc = 0x3158F8u;
label_3158f8:
    // 0x3158f8: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x3158f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_3158fc:
    // 0x3158fc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3158fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_315900:
    // 0x315900: 0x24a52890  addiu       $a1, $a1, 0x2890
    ctx->pc = 0x315900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10384));
label_315904:
    // 0x315904: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x315904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_315908:
    // 0x315908: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x315908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_31590c:
    // 0x31590c: 0x320f809  jalr        $t9
label_315910:
    if (ctx->pc == 0x315910u) {
        ctx->pc = 0x315910u;
            // 0x315910: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x315914u;
        goto label_315914;
    }
    ctx->pc = 0x31590Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315914u);
        ctx->pc = 0x315910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31590Cu;
            // 0x315910: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x315914u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315914u; }
            if (ctx->pc != 0x315914u) { return; }
        }
        }
    }
    ctx->pc = 0x315914u;
label_315914:
    // 0x315914: 0x8f82a2e8  lw          $v0, -0x5D18($gp)
    ctx->pc = 0x315914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943464)));
label_315918:
    // 0x315918: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x315918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31591c:
    // 0x31591c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x31591cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_315920:
    // 0x315920: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x315920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_315924:
    // 0x315924: 0xc0c550c  jal         func_315430
label_315928:
    if (ctx->pc == 0x315928u) {
        ctx->pc = 0x315928u;
            // 0x315928: 0xaf82a2e8  sw          $v0, -0x5D18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943464), GPR_U32(ctx, 2));
        ctx->pc = 0x31592Cu;
        goto label_31592c;
    }
    ctx->pc = 0x315924u;
    SET_GPR_U32(ctx, 31, 0x31592Cu);
    ctx->pc = 0x315928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315924u;
            // 0x315928: 0xaf82a2e8  sw          $v0, -0x5D18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x315430u;
    if (runtime->hasFunction(0x315430u)) {
        auto targetFn = runtime->lookupFunction(0x315430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31592Cu; }
        if (ctx->pc != 0x31592Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBuggyLoopSe__FP6CScenei_0x315430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31592Cu; }
        if (ctx->pc != 0x31592Cu) { return; }
    }
    ctx->pc = 0x31592Cu;
label_31592c:
    // 0x31592c: 0xc04a0ea  jal         func_1283A8
label_315930:
    if (ctx->pc == 0x315930u) {
        ctx->pc = 0x315934u;
        goto label_315934;
    }
    ctx->pc = 0x31592Cu;
    SET_GPR_U32(ctx, 31, 0x315934u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315934u; }
        if (ctx->pc != 0x315934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315934u; }
        if (ctx->pc != 0x315934u) { return; }
    }
    ctx->pc = 0x315934u;
label_315934:
    // 0x315934: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x315934u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
label_315938:
    // 0x315938: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_31593c:
    if (ctx->pc == 0x31593Cu) {
        ctx->pc = 0x31593Cu;
            // 0x31593c: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->pc = 0x315940u;
        goto label_315940;
    }
    ctx->pc = 0x315938u;
    {
        const bool branch_taken_0x315938 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x31593Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315938u;
            // 0x31593c: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x315938) {
            ctx->pc = 0x31594Cu;
            goto label_31594c;
        }
    }
    ctx->pc = 0x315940u;
label_315940:
    // 0x315940: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_315944:
    if (ctx->pc == 0x315944u) {
        ctx->pc = 0x315948u;
        goto label_315948;
    }
    ctx->pc = 0x315940u;
    {
        const bool branch_taken_0x315940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x315940) {
            ctx->pc = 0x31594Cu;
            goto label_31594c;
        }
    }
    ctx->pc = 0x315948u;
label_315948:
    // 0x315948: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x315948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_31594c:
    // 0x31594c: 0x144000bd  bnez        $v0, . + 4 + (0xBD << 2)
label_315950:
    if (ctx->pc == 0x315950u) {
        ctx->pc = 0x315950u;
            // 0x315950: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x315954u;
        goto label_315954;
    }
    ctx->pc = 0x31594Cu;
    {
        const bool branch_taken_0x31594c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31594Cu;
            // 0x315950: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31594c) {
            ctx->pc = 0x315C44u;
            goto label_315c44;
        }
    }
    ctx->pc = 0x315954u;
label_315954:
    // 0x315954: 0x3c020082  lui         $v0, 0x82
    ctx->pc = 0x315954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)130 << 16));
label_315958:
    // 0x315958: 0x2484f9a0  addiu       $a0, $a0, -0x660
    ctx->pc = 0x315958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965664));
label_31595c:
    // 0x31595c: 0xc0c1194  jal         func_304650
label_315960:
    if (ctx->pc == 0x315960u) {
        ctx->pc = 0x315960u;
            // 0x315960: 0x3445ebaa  ori         $a1, $v0, 0xEBAA (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60330);
        ctx->pc = 0x315964u;
        goto label_315964;
    }
    ctx->pc = 0x31595Cu;
    SET_GPR_U32(ctx, 31, 0x315964u);
    ctx->pc = 0x315960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31595Cu;
            // 0x315960: 0x3445ebaa  ori         $a1, $v0, 0xEBAA (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60330);
        ctx->in_delay_slot = false;
    ctx->pc = 0x304650u;
    if (runtime->hasFunction(0x304650u)) {
        auto targetFn = runtime->lookupFunction(0x304650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315964u; }
        if (ctx->pc != 0x315964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Open__12sgCPlayVoiceFi_0x304650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315964u; }
        if (ctx->pc != 0x315964u) { return; }
    }
    ctx->pc = 0x315964u;
label_315964:
    // 0x315964: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x315964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_315968:
    // 0x315968: 0xc0c11c8  jal         func_304720
label_31596c:
    if (ctx->pc == 0x31596Cu) {
        ctx->pc = 0x31596Cu;
            // 0x31596c: 0x2484f9a0  addiu       $a0, $a0, -0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965664));
        ctx->pc = 0x315970u;
        goto label_315970;
    }
    ctx->pc = 0x315968u;
    SET_GPR_U32(ctx, 31, 0x315970u);
    ctx->pc = 0x31596Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315968u;
            // 0x31596c: 0x2484f9a0  addiu       $a0, $a0, -0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304720u;
    if (runtime->hasFunction(0x304720u)) {
        auto targetFn = runtime->lookupFunction(0x304720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315970u; }
        if (ctx->pc != 0x315970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Play__12sgCPlayVoiceFv_0x304720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315970u; }
        if (ctx->pc != 0x315970u) { return; }
    }
    ctx->pc = 0x315970u;
label_315970:
    // 0x315970: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_315974:
    if (ctx->pc == 0x315974u) {
        ctx->pc = 0x315978u;
        goto label_315978;
    }
    ctx->pc = 0x315970u;
    {
        const bool branch_taken_0x315970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315970) {
            ctx->pc = 0x315C44u;
            goto label_315c44;
        }
    }
    ctx->pc = 0x315978u;
label_315978:
    // 0x315978: 0xc0c550c  jal         func_315430
label_31597c:
    if (ctx->pc == 0x31597Cu) {
        ctx->pc = 0x315980u;
        goto label_315980;
    }
    ctx->pc = 0x315978u;
    SET_GPR_U32(ctx, 31, 0x315980u);
    ctx->pc = 0x315430u;
    if (runtime->hasFunction(0x315430u)) {
        auto targetFn = runtime->lookupFunction(0x315430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315980u; }
        if (ctx->pc != 0x315980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBuggyLoopSe__FP6CScenei_0x315430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315980u; }
        if (ctx->pc != 0x315980u) { return; }
    }
    ctx->pc = 0x315980u;
label_315980:
    // 0x315980: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x315980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_315984:
    // 0x315984: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x315984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_315988:
    // 0x315988: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x315988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_31598c:
    // 0x31598c: 0x320f809  jalr        $t9
label_315990:
    if (ctx->pc == 0x315990u) {
        ctx->pc = 0x315994u;
        goto label_315994;
    }
    ctx->pc = 0x31598Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315994u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x315994u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315994u; }
            if (ctx->pc != 0x315994u) { return; }
        }
        }
    }
    ctx->pc = 0x315994u;
label_315994:
    // 0x315994: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x315994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_315998:
    // 0x315998: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x315998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_31599c:
    // 0x31599c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31599cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3159a0:
    // 0x3159a0: 0x0  nop
    ctx->pc = 0x3159a0u;
    // NOP
label_3159a4:
    // 0x3159a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3159a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3159a8:
    // 0x3159a8: 0x0  nop
    ctx->pc = 0x3159a8u;
    // NOP
label_3159ac:
    // 0x3159ac: 0x450100a5  bc1t        . + 4 + (0xA5 << 2)
label_3159b0:
    if (ctx->pc == 0x3159B0u) {
        ctx->pc = 0x3159B4u;
        goto label_3159b4;
    }
    ctx->pc = 0x3159ACu;
    {
        const bool branch_taken_0x3159ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3159ac) {
            ctx->pc = 0x315C44u;
            goto label_315c44;
        }
    }
    ctx->pc = 0x3159B4u;
label_3159b4:
    // 0x3159b4: 0x8f84a2e8  lw          $a0, -0x5D18($gp)
    ctx->pc = 0x3159b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943464)));
label_3159b8:
    // 0x3159b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3159b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3159bc:
    // 0x3159bc: 0x8f83a2f8  lw          $v1, -0x5D08($gp)
    ctx->pc = 0x3159bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943480)));
label_3159c0:
    // 0x3159c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3159c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3159c4:
    // 0x3159c4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_3159c8:
    if (ctx->pc == 0x3159C8u) {
        ctx->pc = 0x3159C8u;
            // 0x3159c8: 0xaf84a2e8  sw          $a0, -0x5D18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943464), GPR_U32(ctx, 4));
        ctx->pc = 0x3159CCu;
        goto label_3159cc;
    }
    ctx->pc = 0x3159C4u;
    {
        const bool branch_taken_0x3159c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3159C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3159C4u;
            // 0x3159c8: 0xaf84a2e8  sw          $a0, -0x5D18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943464), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3159c4) {
            ctx->pc = 0x3159FCu;
            goto label_3159fc;
        }
    }
    ctx->pc = 0x3159CCu;
label_3159cc:
    // 0x3159cc: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x3159ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3159d0:
    // 0x3159d0: 0x3c02c375  lui         $v0, 0xC375
    ctx->pc = 0x3159d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50037 << 16));
label_3159d4:
    // 0x3159d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3159d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3159d8:
    // 0x3159d8: 0x3c024282  lui         $v0, 0x4282
    ctx->pc = 0x3159d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17026 << 16));
label_3159dc:
    // 0x3159dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3159dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3159e0:
    // 0x3159e0: 0x0  nop
    ctx->pc = 0x3159e0u;
    // NOP
label_3159e4:
    // 0x3159e4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3159e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3159e8:
    // 0x3159e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3159e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3159ec:
    // 0x3159ec: 0x0  nop
    ctx->pc = 0x3159ecu;
    // NOP
label_3159f0:
    // 0x3159f0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3159f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_3159f4:
    // 0x3159f4: 0x1000000b  b           . + 4 + (0xB << 2)
label_3159f8:
    if (ctx->pc == 0x3159F8u) {
        ctx->pc = 0x3159F8u;
            // 0x3159f8: 0xe420f980  swc1        $f0, -0x680($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294965632), bits); }
        ctx->pc = 0x3159FCu;
        goto label_3159fc;
    }
    ctx->pc = 0x3159F4u;
    {
        const bool branch_taken_0x3159f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3159F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3159F4u;
            // 0x3159f8: 0xe420f980  swc1        $f0, -0x680($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294965632), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3159f4) {
            ctx->pc = 0x315A24u;
            goto label_315a24;
        }
    }
    ctx->pc = 0x3159FCu;
label_3159fc:
    // 0x3159fc: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x3159fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315a00:
    // 0x315a00: 0x3c024375  lui         $v0, 0x4375
    ctx->pc = 0x315a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17269 << 16));
label_315a04:
    // 0x315a04: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x315a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_315a08:
    // 0x315a08: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x315a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_315a0c:
    // 0x315a0c: 0x3c024282  lui         $v0, 0x4282
    ctx->pc = 0x315a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17026 << 16));
label_315a10:
    // 0x315a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315a14:
    // 0x315a14: 0x0  nop
    ctx->pc = 0x315a14u;
    // NOP
label_315a18:
    // 0x315a18: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x315a18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_315a1c:
    // 0x315a1c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x315a1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_315a20:
    // 0x315a20: 0xe420f980  swc1        $f0, -0x680($at)
    ctx->pc = 0x315a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294965632), bits); }
label_315a24:
    // 0x315a24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x315a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_315a28:
    // 0x315a28: 0xc0c550c  jal         func_315430
label_315a2c:
    if (ctx->pc == 0x315A2Cu) {
        ctx->pc = 0x315A2Cu;
            // 0x315a2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x315A30u;
        goto label_315a30;
    }
    ctx->pc = 0x315A28u;
    SET_GPR_U32(ctx, 31, 0x315A30u);
    ctx->pc = 0x315A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315A28u;
            // 0x315a2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x315430u;
    if (runtime->hasFunction(0x315430u)) {
        auto targetFn = runtime->lookupFunction(0x315430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315A30u; }
        if (ctx->pc != 0x315A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBuggyLoopSe__FP6CScenei_0x315430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315A30u; }
        if (ctx->pc != 0x315A30u) { return; }
    }
    ctx->pc = 0x315A30u;
label_315a30:
    // 0x315a30: 0x10000084  b           . + 4 + (0x84 << 2)
label_315a34:
    if (ctx->pc == 0x315A34u) {
        ctx->pc = 0x315A38u;
        goto label_315a38;
    }
    ctx->pc = 0x315A30u;
    {
        const bool branch_taken_0x315a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315a30) {
            ctx->pc = 0x315C44u;
            goto label_315c44;
        }
    }
    ctx->pc = 0x315A38u;
label_315a38:
    // 0x315a38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x315a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_315a3c:
    // 0x315a3c: 0xc0c550c  jal         func_315430
label_315a40:
    if (ctx->pc == 0x315A40u) {
        ctx->pc = 0x315A40u;
            // 0x315a40: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x315A44u;
        goto label_315a44;
    }
    ctx->pc = 0x315A3Cu;
    SET_GPR_U32(ctx, 31, 0x315A44u);
    ctx->pc = 0x315A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315A3Cu;
            // 0x315a40: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x315430u;
    if (runtime->hasFunction(0x315430u)) {
        auto targetFn = runtime->lookupFunction(0x315430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315A44u; }
        if (ctx->pc != 0x315A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBuggyLoopSe__FP6CScenei_0x315430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315A44u; }
        if (ctx->pc != 0x315A44u) { return; }
    }
    ctx->pc = 0x315A44u;
label_315a44:
    // 0x315a44: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x315a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_315a48:
    // 0x315a48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x315a48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_315a4c:
    // 0x315a4c: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x315a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_315a50:
    // 0x315a50: 0x320f809  jalr        $t9
label_315a54:
    if (ctx->pc == 0x315A54u) {
        ctx->pc = 0x315A58u;
        goto label_315a58;
    }
    ctx->pc = 0x315A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315A58u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x315A58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315A58u; }
            if (ctx->pc != 0x315A58u) { return; }
        }
        }
    }
    ctx->pc = 0x315A58u;
label_315a58:
    // 0x315a58: 0x3c023f54  lui         $v0, 0x3F54
    ctx->pc = 0x315a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16212 << 16));
label_315a5c:
    // 0x315a5c: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x315a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
label_315a60:
    // 0x315a60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315a64:
    // 0x315a64: 0x0  nop
    ctx->pc = 0x315a64u;
    // NOP
label_315a68:
    // 0x315a68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x315a68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315a6c:
    // 0x315a6c: 0x0  nop
    ctx->pc = 0x315a6cu;
    // NOP
label_315a70:
    // 0x315a70: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_315a74:
    if (ctx->pc == 0x315A74u) {
        ctx->pc = 0x315A74u;
            // 0x315a74: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x315A78u;
        goto label_315a78;
    }
    ctx->pc = 0x315A70u;
    {
        const bool branch_taken_0x315a70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x315A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315A70u;
            // 0x315a74: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a70) {
            ctx->pc = 0x315A84u;
            goto label_315a84;
        }
    }
    ctx->pc = 0x315A78u;
label_315a78:
    // 0x315a78: 0x8f82a2e8  lw          $v0, -0x5D18($gp)
    ctx->pc = 0x315a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943464)));
label_315a7c:
    // 0x315a7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x315a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_315a80:
    // 0x315a80: 0xaf82a2e8  sw          $v0, -0x5D18($gp)
    ctx->pc = 0x315a80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943464), GPR_U32(ctx, 2));
label_315a84:
    // 0x315a84: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x315a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315a88:
    // 0x315a88: 0xc420f980  lwc1        $f0, -0x680($at)
    ctx->pc = 0x315a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315a8c:
    // 0x315a8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x315a8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_315a90:
    // 0x315a90: 0x1000006c  b           . + 4 + (0x6C << 2)
label_315a94:
    if (ctx->pc == 0x315A94u) {
        ctx->pc = 0x315A94u;
            // 0x315a94: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->pc = 0x315A98u;
        goto label_315a98;
    }
    ctx->pc = 0x315A90u;
    {
        const bool branch_taken_0x315a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315A90u;
            // 0x315a94: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a90) {
            ctx->pc = 0x315C44u;
            goto label_315c44;
        }
    }
    ctx->pc = 0x315A98u;
label_315a98:
    // 0x315a98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x315a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_315a9c:
    // 0x315a9c: 0xc0c550c  jal         func_315430
label_315aa0:
    if (ctx->pc == 0x315AA0u) {
        ctx->pc = 0x315AA0u;
            // 0x315aa0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x315AA4u;
        goto label_315aa4;
    }
    ctx->pc = 0x315A9Cu;
    SET_GPR_U32(ctx, 31, 0x315AA4u);
    ctx->pc = 0x315AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315A9Cu;
            // 0x315aa0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x315430u;
    if (runtime->hasFunction(0x315430u)) {
        auto targetFn = runtime->lookupFunction(0x315430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315AA4u; }
        if (ctx->pc != 0x315AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBuggyLoopSe__FP6CScenei_0x315430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315AA4u; }
        if (ctx->pc != 0x315AA4u) { return; }
    }
    ctx->pc = 0x315AA4u;
label_315aa4:
    // 0x315aa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x315aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_315aa8:
    // 0x315aa8: 0xc0c550c  jal         func_315430
label_315aac:
    if (ctx->pc == 0x315AACu) {
        ctx->pc = 0x315AACu;
            // 0x315aac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x315AB0u;
        goto label_315ab0;
    }
    ctx->pc = 0x315AA8u;
    SET_GPR_U32(ctx, 31, 0x315AB0u);
    ctx->pc = 0x315AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315AA8u;
            // 0x315aac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x315430u;
    if (runtime->hasFunction(0x315430u)) {
        auto targetFn = runtime->lookupFunction(0x315430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315AB0u; }
        if (ctx->pc != 0x315AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBuggyLoopSe__FP6CScenei_0x315430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315AB0u; }
        if (ctx->pc != 0x315AB0u) { return; }
    }
    ctx->pc = 0x315AB0u;
label_315ab0:
    // 0x315ab0: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x315ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_315ab4:
    // 0x315ab4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x315ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_315ab8:
    // 0x315ab8: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x315ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_315abc:
    // 0x315abc: 0x320f809  jalr        $t9
label_315ac0:
    if (ctx->pc == 0x315AC0u) {
        ctx->pc = 0x315AC4u;
        goto label_315ac4;
    }
    ctx->pc = 0x315ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315AC4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x315AC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315AC4u; }
            if (ctx->pc != 0x315AC4u) { return; }
        }
        }
    }
    ctx->pc = 0x315AC4u;
label_315ac4:
    // 0x315ac4: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_315ac8:
    if (ctx->pc == 0x315AC8u) {
        ctx->pc = 0x315ACCu;
        goto label_315acc;
    }
    ctx->pc = 0x315AC4u;
    {
        const bool branch_taken_0x315ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x315ac4) {
            ctx->pc = 0x315C44u;
            goto label_315c44;
        }
    }
    ctx->pc = 0x315ACCu;
label_315acc:
    // 0x315acc: 0x8f82a2e8  lw          $v0, -0x5D18($gp)
    ctx->pc = 0x315accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943464)));
label_315ad0:
    // 0x315ad0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x315ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_315ad4:
    // 0x315ad4: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x315ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_315ad8:
    // 0x315ad8: 0x24a52868  addiu       $a1, $a1, 0x2868
    ctx->pc = 0x315ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10344));
label_315adc:
    // 0x315adc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x315adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_315ae0:
    // 0x315ae0: 0xaf82a2e8  sw          $v0, -0x5D18($gp)
    ctx->pc = 0x315ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943464), GPR_U32(ctx, 2));
label_315ae4:
    // 0x315ae4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x315ae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_315ae8:
    // 0x315ae8: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x315ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_315aec:
    // 0x315aec: 0x320f809  jalr        $t9
label_315af0:
    if (ctx->pc == 0x315AF0u) {
        ctx->pc = 0x315AF0u;
            // 0x315af0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x315AF4u;
        goto label_315af4;
    }
    ctx->pc = 0x315AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315AF4u);
        ctx->pc = 0x315AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315AECu;
            // 0x315af0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x315AF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315AF4u; }
            if (ctx->pc != 0x315AF4u) { return; }
        }
        }
    }
    ctx->pc = 0x315AF4u;
label_315af4:
    // 0x315af4: 0x8f83a2f8  lw          $v1, -0x5D08($gp)
    ctx->pc = 0x315af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943480)));
label_315af8:
    // 0x315af8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315afc:
    // 0x315afc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_315b00:
    if (ctx->pc == 0x315B00u) {
        ctx->pc = 0x315B00u;
            // 0x315b00: 0xaf80a2f4  sw          $zero, -0x5D0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943476), GPR_U32(ctx, 0));
        ctx->pc = 0x315B04u;
        goto label_315b04;
    }
    ctx->pc = 0x315AFCu;
    {
        const bool branch_taken_0x315afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x315B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315AFCu;
            // 0x315b00: 0xaf80a2f4  sw          $zero, -0x5D0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315afc) {
            ctx->pc = 0x315B0Cu;
            goto label_315b0c;
        }
    }
    ctx->pc = 0x315B04u;
label_315b04:
    // 0x315b04: 0x10000002  b           . + 4 + (0x2 << 2)
label_315b08:
    if (ctx->pc == 0x315B08u) {
        ctx->pc = 0x315B08u;
            // 0x315b08: 0xaf80a2f8  sw          $zero, -0x5D08($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943480), GPR_U32(ctx, 0));
        ctx->pc = 0x315B0Cu;
        goto label_315b0c;
    }
    ctx->pc = 0x315B04u;
    {
        const bool branch_taken_0x315b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315B04u;
            // 0x315b08: 0xaf80a2f8  sw          $zero, -0x5D08($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943480), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315b04) {
            ctx->pc = 0x315B10u;
            goto label_315b10;
        }
    }
    ctx->pc = 0x315B0Cu;
label_315b0c:
    // 0x315b0c: 0xaf82a2f8  sw          $v0, -0x5D08($gp)
    ctx->pc = 0x315b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943480), GPR_U32(ctx, 2));
label_315b10:
    // 0x315b10: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x315b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_315b14:
    // 0x315b14: 0x1000004b  b           . + 4 + (0x4B << 2)
label_315b18:
    if (ctx->pc == 0x315B18u) {
        ctx->pc = 0x315B18u;
            // 0x315b18: 0xac20f980  sw          $zero, -0x680($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294965632), GPR_U32(ctx, 0));
        ctx->pc = 0x315B1Cu;
        goto label_315b1c;
    }
    ctx->pc = 0x315B14u;
    {
        const bool branch_taken_0x315b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315B14u;
            // 0x315b18: 0xac20f980  sw          $zero, -0x680($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294965632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315b14) {
            ctx->pc = 0x315C44u;
            goto label_315c44;
        }
    }
    ctx->pc = 0x315B1Cu;
label_315b1c:
    // 0x315b1c: 0x8f83a2e8  lw          $v1, -0x5D18($gp)
    ctx->pc = 0x315b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943464)));
label_315b20:
    // 0x315b20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315b24:
    // 0x315b24: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
label_315b28:
    if (ctx->pc == 0x315B28u) {
        ctx->pc = 0x315B2Cu;
        goto label_315b2c;
    }
    ctx->pc = 0x315B24u;
    {
        const bool branch_taken_0x315b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x315b24) {
            ctx->pc = 0x315C1Cu;
            goto label_315c1c;
        }
    }
    ctx->pc = 0x315B2Cu;
label_315b2c:
    // 0x315b2c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_315b30:
    if (ctx->pc == 0x315B30u) {
        ctx->pc = 0x315B34u;
        goto label_315b34;
    }
    ctx->pc = 0x315B2Cu;
    {
        const bool branch_taken_0x315b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x315b2c) {
            ctx->pc = 0x315B3Cu;
            goto label_315b3c;
        }
    }
    ctx->pc = 0x315B34u;
label_315b34:
    // 0x315b34: 0x10000043  b           . + 4 + (0x43 << 2)
label_315b38:
    if (ctx->pc == 0x315B38u) {
        ctx->pc = 0x315B3Cu;
        goto label_315b3c;
    }
    ctx->pc = 0x315B34u;
    {
        const bool branch_taken_0x315b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315b34) {
            ctx->pc = 0x315C44u;
            goto label_315c44;
        }
    }
    ctx->pc = 0x315B3Cu;
label_315b3c:
    // 0x315b3c: 0x8f84a2d8  lw          $a0, -0x5D28($gp)
    ctx->pc = 0x315b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943448)));
label_315b40:
    // 0x315b40: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x315b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_315b44:
    // 0x315b44: 0xc063818  jal         func_18E060
label_315b48:
    if (ctx->pc == 0x315B48u) {
        ctx->pc = 0x315B48u;
            // 0x315b48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315B4Cu;
        goto label_315b4c;
    }
    ctx->pc = 0x315B44u;
    SET_GPR_U32(ctx, 31, 0x315B4Cu);
    ctx->pc = 0x315B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315B44u;
            // 0x315b48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315B4Cu; }
        if (ctx->pc != 0x315B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315B4Cu; }
        if (ctx->pc != 0x315B4Cu) { return; }
    }
    ctx->pc = 0x315B4Cu;
label_315b4c:
    // 0x315b4c: 0x8f83a2fc  lw          $v1, -0x5D04($gp)
    ctx->pc = 0x315b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943484)));
label_315b50:
    // 0x315b50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315b54:
    // 0x315b54: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_315b58:
    if (ctx->pc == 0x315B58u) {
        ctx->pc = 0x315B5Cu;
        goto label_315b5c;
    }
    ctx->pc = 0x315B54u;
    {
        const bool branch_taken_0x315b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x315b54) {
            ctx->pc = 0x315B80u;
            goto label_315b80;
        }
    }
    ctx->pc = 0x315B5Cu;
label_315b5c:
    // 0x315b5c: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x315b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_315b60:
    // 0x315b60: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x315b60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_315b64:
    // 0x315b64: 0x24a528a0  addiu       $a1, $a1, 0x28A0
    ctx->pc = 0x315b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10400));
label_315b68:
    // 0x315b68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x315b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_315b6c:
    // 0x315b6c: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x315b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_315b70:
    // 0x315b70: 0x320f809  jalr        $t9
label_315b74:
    if (ctx->pc == 0x315B74u) {
        ctx->pc = 0x315B74u;
            // 0x315b74: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x315B78u;
        goto label_315b78;
    }
    ctx->pc = 0x315B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315B78u);
        ctx->pc = 0x315B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315B70u;
            // 0x315b74: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x315B78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315B78u; }
            if (ctx->pc != 0x315B78u) { return; }
        }
        }
    }
    ctx->pc = 0x315B78u;
label_315b78:
    // 0x315b78: 0x10000009  b           . + 4 + (0x9 << 2)
label_315b7c:
    if (ctx->pc == 0x315B7Cu) {
        ctx->pc = 0x315B7Cu;
            // 0x315b7c: 0x8f83a2e8  lw          $v1, -0x5D18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943464)));
        ctx->pc = 0x315B80u;
        goto label_315b80;
    }
    ctx->pc = 0x315B78u;
    {
        const bool branch_taken_0x315b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315B78u;
            // 0x315b7c: 0x8f83a2e8  lw          $v1, -0x5D18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315b78) {
            ctx->pc = 0x315BA0u;
            goto label_315ba0;
        }
    }
    ctx->pc = 0x315B80u;
label_315b80:
    // 0x315b80: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x315b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_315b84:
    // 0x315b84: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x315b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_315b88:
    // 0x315b88: 0x24a528b0  addiu       $a1, $a1, 0x28B0
    ctx->pc = 0x315b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10416));
label_315b8c:
    // 0x315b8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x315b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_315b90:
    // 0x315b90: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x315b90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_315b94:
    // 0x315b94: 0x320f809  jalr        $t9
label_315b98:
    if (ctx->pc == 0x315B98u) {
        ctx->pc = 0x315B98u;
            // 0x315b98: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x315B9Cu;
        goto label_315b9c;
    }
    ctx->pc = 0x315B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315B9Cu);
        ctx->pc = 0x315B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315B94u;
            // 0x315b98: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x315B9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315B9Cu; }
            if (ctx->pc != 0x315B9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x315B9Cu;
label_315b9c:
    // 0x315b9c: 0x8f83a2e8  lw          $v1, -0x5D18($gp)
    ctx->pc = 0x315b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943464)));
label_315ba0:
    // 0x315ba0: 0x8f828644  lw          $v0, -0x79BC($gp)
    ctx->pc = 0x315ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936132)));
label_315ba4:
    // 0x315ba4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x315ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_315ba8:
    // 0x315ba8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x315ba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_315bac:
    // 0x315bac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_315bb0:
    if (ctx->pc == 0x315BB0u) {
        ctx->pc = 0x315BB0u;
            // 0x315bb0: 0xaf83a2e8  sw          $v1, -0x5D18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943464), GPR_U32(ctx, 3));
        ctx->pc = 0x315BB4u;
        goto label_315bb4;
    }
    ctx->pc = 0x315BACu;
    {
        const bool branch_taken_0x315bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315BACu;
            // 0x315bb0: 0xaf83a2e8  sw          $v1, -0x5D18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bac) {
            ctx->pc = 0x315BC8u;
            goto label_315bc8;
        }
    }
    ctx->pc = 0x315BB4u;
label_315bb4:
    // 0x315bb4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x315bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_315bb8:
    // 0x315bb8: 0x3c020082  lui         $v0, 0x82
    ctx->pc = 0x315bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)130 << 16));
label_315bbc:
    // 0x315bbc: 0x2484f9a0  addiu       $a0, $a0, -0x660
    ctx->pc = 0x315bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965664));
label_315bc0:
    // 0x315bc0: 0xc0c1194  jal         func_304650
label_315bc4:
    if (ctx->pc == 0x315BC4u) {
        ctx->pc = 0x315BC4u;
            // 0x315bc4: 0x3445ebc8  ori         $a1, $v0, 0xEBC8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60360);
        ctx->pc = 0x315BC8u;
        goto label_315bc8;
    }
    ctx->pc = 0x315BC0u;
    SET_GPR_U32(ctx, 31, 0x315BC8u);
    ctx->pc = 0x315BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315BC0u;
            // 0x315bc4: 0x3445ebc8  ori         $a1, $v0, 0xEBC8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60360);
        ctx->in_delay_slot = false;
    ctx->pc = 0x304650u;
    if (runtime->hasFunction(0x304650u)) {
        auto targetFn = runtime->lookupFunction(0x304650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315BC8u; }
        if (ctx->pc != 0x315BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Open__12sgCPlayVoiceFi_0x304650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315BC8u; }
        if (ctx->pc != 0x315BC8u) { return; }
    }
    ctx->pc = 0x315BC8u;
label_315bc8:
    // 0x315bc8: 0x8f838644  lw          $v1, -0x79BC($gp)
    ctx->pc = 0x315bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936132)));
label_315bcc:
    // 0x315bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315bd0:
    // 0x315bd0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_315bd4:
    if (ctx->pc == 0x315BD4u) {
        ctx->pc = 0x315BD4u;
            // 0x315bd4: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x315BD8u;
        goto label_315bd8;
    }
    ctx->pc = 0x315BD0u;
    {
        const bool branch_taken_0x315bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x315BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315BD0u;
            // 0x315bd4: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bd0) {
            ctx->pc = 0x315BE8u;
            goto label_315be8;
        }
    }
    ctx->pc = 0x315BD8u;
label_315bd8:
    // 0x315bd8: 0x3c020082  lui         $v0, 0x82
    ctx->pc = 0x315bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)130 << 16));
label_315bdc:
    // 0x315bdc: 0x2484f9a0  addiu       $a0, $a0, -0x660
    ctx->pc = 0x315bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965664));
label_315be0:
    // 0x315be0: 0xc0c1194  jal         func_304650
label_315be4:
    if (ctx->pc == 0x315BE4u) {
        ctx->pc = 0x315BE4u;
            // 0x315be4: 0x3445ebd2  ori         $a1, $v0, 0xEBD2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60370);
        ctx->pc = 0x315BE8u;
        goto label_315be8;
    }
    ctx->pc = 0x315BE0u;
    SET_GPR_U32(ctx, 31, 0x315BE8u);
    ctx->pc = 0x315BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315BE0u;
            // 0x315be4: 0x3445ebd2  ori         $a1, $v0, 0xEBD2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60370);
        ctx->in_delay_slot = false;
    ctx->pc = 0x304650u;
    if (runtime->hasFunction(0x304650u)) {
        auto targetFn = runtime->lookupFunction(0x304650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315BE8u; }
        if (ctx->pc != 0x315BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Open__12sgCPlayVoiceFi_0x304650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315BE8u; }
        if (ctx->pc != 0x315BE8u) { return; }
    }
    ctx->pc = 0x315BE8u;
label_315be8:
    // 0x315be8: 0x8f828644  lw          $v0, -0x79BC($gp)
    ctx->pc = 0x315be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936132)));
label_315bec:
    // 0x315bec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_315bf0:
    if (ctx->pc == 0x315BF0u) {
        ctx->pc = 0x315BF4u;
        goto label_315bf4;
    }
    ctx->pc = 0x315BECu;
    {
        const bool branch_taken_0x315bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315bec) {
            ctx->pc = 0x315C08u;
            goto label_315c08;
        }
    }
    ctx->pc = 0x315BF4u;
label_315bf4:
    // 0x315bf4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x315bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_315bf8:
    // 0x315bf8: 0x3c020082  lui         $v0, 0x82
    ctx->pc = 0x315bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)130 << 16));
label_315bfc:
    // 0x315bfc: 0x2484f9a0  addiu       $a0, $a0, -0x660
    ctx->pc = 0x315bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965664));
label_315c00:
    // 0x315c00: 0xc0c1194  jal         func_304650
label_315c04:
    if (ctx->pc == 0x315C04u) {
        ctx->pc = 0x315C04u;
            // 0x315c04: 0x3445ebdc  ori         $a1, $v0, 0xEBDC (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60380);
        ctx->pc = 0x315C08u;
        goto label_315c08;
    }
    ctx->pc = 0x315C00u;
    SET_GPR_U32(ctx, 31, 0x315C08u);
    ctx->pc = 0x315C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315C00u;
            // 0x315c04: 0x3445ebdc  ori         $a1, $v0, 0xEBDC (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60380);
        ctx->in_delay_slot = false;
    ctx->pc = 0x304650u;
    if (runtime->hasFunction(0x304650u)) {
        auto targetFn = runtime->lookupFunction(0x304650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315C08u; }
        if (ctx->pc != 0x315C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Open__12sgCPlayVoiceFi_0x304650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315C08u; }
        if (ctx->pc != 0x315C08u) { return; }
    }
    ctx->pc = 0x315C08u;
label_315c08:
    // 0x315c08: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x315c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_315c0c:
    // 0x315c0c: 0xc0c11c8  jal         func_304720
label_315c10:
    if (ctx->pc == 0x315C10u) {
        ctx->pc = 0x315C10u;
            // 0x315c10: 0x2484f9a0  addiu       $a0, $a0, -0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965664));
        ctx->pc = 0x315C14u;
        goto label_315c14;
    }
    ctx->pc = 0x315C0Cu;
    SET_GPR_U32(ctx, 31, 0x315C14u);
    ctx->pc = 0x315C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315C0Cu;
            // 0x315c10: 0x2484f9a0  addiu       $a0, $a0, -0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304720u;
    if (runtime->hasFunction(0x304720u)) {
        auto targetFn = runtime->lookupFunction(0x304720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315C14u; }
        if (ctx->pc != 0x315C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Play__12sgCPlayVoiceFv_0x304720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315C14u; }
        if (ctx->pc != 0x315C14u) { return; }
    }
    ctx->pc = 0x315C14u;
label_315c14:
    // 0x315c14: 0x1000000b  b           . + 4 + (0xB << 2)
label_315c18:
    if (ctx->pc == 0x315C18u) {
        ctx->pc = 0x315C1Cu;
        goto label_315c1c;
    }
    ctx->pc = 0x315C14u;
    {
        const bool branch_taken_0x315c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315c14) {
            ctx->pc = 0x315C44u;
            goto label_315c44;
        }
    }
    ctx->pc = 0x315C1Cu;
label_315c1c:
    // 0x315c1c: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x315c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_315c20:
    // 0x315c20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x315c20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_315c24:
    // 0x315c24: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x315c24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_315c28:
    // 0x315c28: 0x320f809  jalr        $t9
label_315c2c:
    if (ctx->pc == 0x315C2Cu) {
        ctx->pc = 0x315C30u;
        goto label_315c30;
    }
    ctx->pc = 0x315C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315C30u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x315C30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315C30u; }
            if (ctx->pc != 0x315C30u) { return; }
        }
        }
    }
    ctx->pc = 0x315C30u;
label_315c30:
    // 0x315c30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_315c34:
    if (ctx->pc == 0x315C34u) {
        ctx->pc = 0x315C34u;
            // 0x315c34: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x315C38u;
        goto label_315c38;
    }
    ctx->pc = 0x315C30u;
    {
        const bool branch_taken_0x315c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315C30u;
            // 0x315c34: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c30) {
            ctx->pc = 0x315C44u;
            goto label_315c44;
        }
    }
    ctx->pc = 0x315C38u;
label_315c38:
    // 0x315c38: 0xaf80a2e4  sw          $zero, -0x5D1C($gp)
    ctx->pc = 0x315c38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943460), GPR_U32(ctx, 0));
label_315c3c:
    // 0x315c3c: 0xaf82a2f4  sw          $v0, -0x5D0C($gp)
    ctx->pc = 0x315c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943476), GPR_U32(ctx, 2));
label_315c40:
    // 0x315c40: 0xaf80a2e8  sw          $zero, -0x5D18($gp)
    ctx->pc = 0x315c40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943464), GPR_U32(ctx, 0));
label_315c44:
    // 0x315c44: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x315c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_315c48:
    // 0x315c48: 0x3401a0e0  ori         $at, $zero, 0xA0E0
    ctx->pc = 0x315c48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41184);
label_315c4c:
    // 0x315c4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315c50:
    // 0x315c50: 0xc05d3d4  jal         func_174F50
label_315c54:
    if (ctx->pc == 0x315C54u) {
        ctx->pc = 0x315C54u;
            // 0x315c54: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x315C58u;
        goto label_315c58;
    }
    ctx->pc = 0x315C50u;
    SET_GPR_U32(ctx, 31, 0x315C58u);
    ctx->pc = 0x315C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315C50u;
            // 0x315c54: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315C58u; }
        if (ctx->pc != 0x315C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315C58u; }
        if (ctx->pc != 0x315C58u) { return; }
    }
    ctx->pc = 0x315C58u;
label_315c58:
    // 0x315c58: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x315c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_315c5c:
    // 0x315c5c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x315c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_315c60:
    // 0x315c60: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x315c60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_315c64:
    // 0x315c64: 0xc421a0e4  lwc1        $f1, -0x5F1C($at)
    ctx->pc = 0x315c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315c68:
    // 0x315c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315c6c:
    // 0x315c6c: 0x0  nop
    ctx->pc = 0x315c6cu;
    // NOP
label_315c70:
    // 0x315c70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x315c70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315c74:
    // 0x315c74: 0x0  nop
    ctx->pc = 0x315c74u;
    // NOP
label_315c78:
    // 0x315c78: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_315c7c:
    if (ctx->pc == 0x315C7Cu) {
        ctx->pc = 0x315C80u;
        goto label_315c80;
    }
    ctx->pc = 0x315C78u;
    {
        const bool branch_taken_0x315c78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x315c78) {
            ctx->pc = 0x315C9Cu;
            goto label_315c9c;
        }
    }
    ctx->pc = 0x315C80u;
label_315c80:
    // 0x315c80: 0x8f84a2cc  lw          $a0, -0x5D34($gp)
    ctx->pc = 0x315c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943436)));
label_315c84:
    // 0x315c84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x315c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315c88:
    // 0x315c88: 0x8f87a2a4  lw          $a3, -0x5D5C($gp)
    ctx->pc = 0x315c88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943396)));
label_315c8c:
    // 0x315c8c: 0xc0b886c  jal         func_2E21B0
label_315c90:
    if (ctx->pc == 0x315C90u) {
        ctx->pc = 0x315C90u;
            // 0x315c90: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x315C94u;
        goto label_315c94;
    }
    ctx->pc = 0x315C8Cu;
    SET_GPR_U32(ctx, 31, 0x315C94u);
    ctx->pc = 0x315C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315C8Cu;
            // 0x315c90: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E21B0u;
    if (runtime->hasFunction(0x2E21B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E21B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315C94u; }
        if (ctx->pc != 0x315C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Pause__16CEffectScriptManFiii_0x2e21b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315C94u; }
        if (ctx->pc != 0x315C94u) { return; }
    }
    ctx->pc = 0x315C94u;
label_315c94:
    // 0x315c94: 0x10000007  b           . + 4 + (0x7 << 2)
label_315c98:
    if (ctx->pc == 0x315C98u) {
        ctx->pc = 0x315C98u;
            // 0x315c98: 0x8f82a2f4  lw          $v0, -0x5D0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943476)));
        ctx->pc = 0x315C9Cu;
        goto label_315c9c;
    }
    ctx->pc = 0x315C94u;
    {
        const bool branch_taken_0x315c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315C94u;
            // 0x315c98: 0x8f82a2f4  lw          $v0, -0x5D0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c94) {
            ctx->pc = 0x315CB4u;
            goto label_315cb4;
        }
    }
    ctx->pc = 0x315C9Cu;
label_315c9c:
    // 0x315c9c: 0x8f84a2cc  lw          $a0, -0x5D34($gp)
    ctx->pc = 0x315c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943436)));
label_315ca0:
    // 0x315ca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315ca4:
    // 0x315ca4: 0x8f87a2a4  lw          $a3, -0x5D5C($gp)
    ctx->pc = 0x315ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943396)));
label_315ca8:
    // 0x315ca8: 0xc0b886c  jal         func_2E21B0
label_315cac:
    if (ctx->pc == 0x315CACu) {
        ctx->pc = 0x315CACu;
            // 0x315cac: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x315CB0u;
        goto label_315cb0;
    }
    ctx->pc = 0x315CA8u;
    SET_GPR_U32(ctx, 31, 0x315CB0u);
    ctx->pc = 0x315CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315CA8u;
            // 0x315cac: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E21B0u;
    if (runtime->hasFunction(0x2E21B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E21B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315CB0u; }
        if (ctx->pc != 0x315CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Pause__16CEffectScriptManFiii_0x2e21b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315CB0u; }
        if (ctx->pc != 0x315CB0u) { return; }
    }
    ctx->pc = 0x315CB0u;
label_315cb0:
    // 0x315cb0: 0x8f82a2f4  lw          $v0, -0x5D0C($gp)
    ctx->pc = 0x315cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943476)));
label_315cb4:
    // 0x315cb4: 0x1c40002c  bgtz        $v0, . + 4 + (0x2C << 2)
label_315cb8:
    if (ctx->pc == 0x315CB8u) {
        ctx->pc = 0x315CBCu;
        goto label_315cbc;
    }
    ctx->pc = 0x315CB4u;
    {
        const bool branch_taken_0x315cb4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x315cb4) {
            ctx->pc = 0x315D68u;
            goto label_315d68;
        }
    }
    ctx->pc = 0x315CBCu;
label_315cbc:
    // 0x315cbc: 0x8382a31c  lb          $v0, -0x5CE4($gp)
    ctx->pc = 0x315cbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943516)));
label_315cc0:
    // 0x315cc0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_315cc4:
    if (ctx->pc == 0x315CC4u) {
        ctx->pc = 0x315CC4u;
            // 0x315cc4: 0xaf80a2e8  sw          $zero, -0x5D18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943464), GPR_U32(ctx, 0));
        ctx->pc = 0x315CC8u;
        goto label_315cc8;
    }
    ctx->pc = 0x315CC0u;
    {
        const bool branch_taken_0x315cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315CC0u;
            // 0x315cc4: 0xaf80a2e8  sw          $zero, -0x5D18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315cc0) {
            ctx->pc = 0x315CD4u;
            goto label_315cd4;
        }
    }
    ctx->pc = 0x315CC8u;
label_315cc8:
    // 0x315cc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315ccc:
    // 0x315ccc: 0xaf80a318  sw          $zero, -0x5CE8($gp)
    ctx->pc = 0x315cccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943512), GPR_U32(ctx, 0));
label_315cd0:
    // 0x315cd0: 0xa382a31c  sb          $v0, -0x5CE4($gp)
    ctx->pc = 0x315cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943516), (uint8_t)GPR_U32(ctx, 2));
label_315cd4:
    // 0x315cd4: 0x8f83a318  lw          $v1, -0x5CE8($gp)
    ctx->pc = 0x315cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943512)));
label_315cd8:
    // 0x315cd8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x315cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_315cdc:
    // 0x315cdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x315cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_315ce0:
    // 0x315ce0: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x315ce0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_315ce4:
    // 0x315ce4: 0x0  nop
    ctx->pc = 0x315ce4u;
    // NOP
label_315ce8:
    // 0x315ce8: 0x0  nop
    ctx->pc = 0x315ce8u;
    // NOP
label_315cec:
    // 0x315cec: 0x1810  mfhi        $v1
    ctx->pc = 0x315cecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_315cf0:
    // 0x315cf0: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_315cf4:
    if (ctx->pc == 0x315CF4u) {
        ctx->pc = 0x315CF4u;
            // 0x315cf4: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->pc = 0x315CF8u;
        goto label_315cf8;
    }
    ctx->pc = 0x315CF0u;
    {
        const bool branch_taken_0x315cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x315CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315CF0u;
            // 0x315cf4: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315cf0) {
            ctx->pc = 0x315D4Cu;
            goto label_315d4c;
        }
    }
    ctx->pc = 0x315CF8u;
label_315cf8:
    // 0x315cf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315cfc:
    // 0x315cfc: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_315d00:
    if (ctx->pc == 0x315D00u) {
        ctx->pc = 0x315D00u;
            // 0x315d00: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x315D04u;
        goto label_315d04;
    }
    ctx->pc = 0x315CFCu;
    {
        const bool branch_taken_0x315cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x315D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315CFCu;
            // 0x315d00: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315cfc) {
            ctx->pc = 0x315D3Cu;
            goto label_315d3c;
        }
    }
    ctx->pc = 0x315D04u;
label_315d04:
    // 0x315d04: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_315d08:
    if (ctx->pc == 0x315D08u) {
        ctx->pc = 0x315D0Cu;
        goto label_315d0c;
    }
    ctx->pc = 0x315D04u;
    {
        const bool branch_taken_0x315d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x315d04) {
            ctx->pc = 0x315D14u;
            goto label_315d14;
        }
    }
    ctx->pc = 0x315D0Cu;
label_315d0c:
    // 0x315d0c: 0x10000014  b           . + 4 + (0x14 << 2)
label_315d10:
    if (ctx->pc == 0x315D10u) {
        ctx->pc = 0x315D10u;
            // 0x315d10: 0x8f82a318  lw          $v0, -0x5CE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943512)));
        ctx->pc = 0x315D14u;
        goto label_315d14;
    }
    ctx->pc = 0x315D0Cu;
    {
        const bool branch_taken_0x315d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315D0Cu;
            // 0x315d10: 0x8f82a318  lw          $v0, -0x5CE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d0c) {
            ctx->pc = 0x315D60u;
            goto label_315d60;
        }
    }
    ctx->pc = 0x315D14u;
label_315d14:
    // 0x315d14: 0xc04a0ea  jal         func_1283A8
label_315d18:
    if (ctx->pc == 0x315D18u) {
        ctx->pc = 0x315D18u;
            // 0x315d18: 0xaf80a2e4  sw          $zero, -0x5D1C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943460), GPR_U32(ctx, 0));
        ctx->pc = 0x315D1Cu;
        goto label_315d1c;
    }
    ctx->pc = 0x315D14u;
    SET_GPR_U32(ctx, 31, 0x315D1Cu);
    ctx->pc = 0x315D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315D14u;
            // 0x315d18: 0xaf80a2e4  sw          $zero, -0x5D1C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943460), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315D1Cu; }
        if (ctx->pc != 0x315D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315D1Cu; }
        if (ctx->pc != 0x315D1Cu) { return; }
    }
    ctx->pc = 0x315D1Cu;
label_315d1c:
    // 0x315d1c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x315d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_315d20:
    // 0x315d20: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x315d20u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_315d24:
    // 0x315d24: 0x0  nop
    ctx->pc = 0x315d24u;
    // NOP
label_315d28:
    // 0x315d28: 0x0  nop
    ctx->pc = 0x315d28u;
    // NOP
label_315d2c:
    // 0x315d2c: 0x1010  mfhi        $v0
    ctx->pc = 0x315d2cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_315d30:
    // 0x315d30: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x315d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_315d34:
    // 0x315d34: 0x10000009  b           . + 4 + (0x9 << 2)
label_315d38:
    if (ctx->pc == 0x315D38u) {
        ctx->pc = 0x315D38u;
            // 0x315d38: 0xaf82a2f4  sw          $v0, -0x5D0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943476), GPR_U32(ctx, 2));
        ctx->pc = 0x315D3Cu;
        goto label_315d3c;
    }
    ctx->pc = 0x315D34u;
    {
        const bool branch_taken_0x315d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315D34u;
            // 0x315d38: 0xaf82a2f4  sw          $v0, -0x5D0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943476), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d34) {
            ctx->pc = 0x315D5Cu;
            goto label_315d5c;
        }
    }
    ctx->pc = 0x315D3Cu;
label_315d3c:
    // 0x315d3c: 0xaf84a2e4  sw          $a0, -0x5D1C($gp)
    ctx->pc = 0x315d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943460), GPR_U32(ctx, 4));
label_315d40:
    // 0x315d40: 0x3442869f  ori         $v0, $v0, 0x869F
    ctx->pc = 0x315d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_315d44:
    // 0x315d44: 0x10000005  b           . + 4 + (0x5 << 2)
label_315d48:
    if (ctx->pc == 0x315D48u) {
        ctx->pc = 0x315D48u;
            // 0x315d48: 0xaf82a2f4  sw          $v0, -0x5D0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943476), GPR_U32(ctx, 2));
        ctx->pc = 0x315D4Cu;
        goto label_315d4c;
    }
    ctx->pc = 0x315D44u;
    {
        const bool branch_taken_0x315d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315D44u;
            // 0x315d48: 0xaf82a2f4  sw          $v0, -0x5D0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943476), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d44) {
            ctx->pc = 0x315D5Cu;
            goto label_315d5c;
        }
    }
    ctx->pc = 0x315D4Cu;
label_315d4c:
    // 0x315d4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x315d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315d50:
    // 0x315d50: 0x34424237  ori         $v0, $v0, 0x4237
    ctx->pc = 0x315d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16951);
label_315d54:
    // 0x315d54: 0xaf83a2e4  sw          $v1, -0x5D1C($gp)
    ctx->pc = 0x315d54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943460), GPR_U32(ctx, 3));
label_315d58:
    // 0x315d58: 0xaf82a2f4  sw          $v0, -0x5D0C($gp)
    ctx->pc = 0x315d58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943476), GPR_U32(ctx, 2));
label_315d5c:
    // 0x315d5c: 0x8f82a318  lw          $v0, -0x5CE8($gp)
    ctx->pc = 0x315d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943512)));
label_315d60:
    // 0x315d60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x315d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_315d64:
    // 0x315d64: 0xaf82a318  sw          $v0, -0x5CE8($gp)
    ctx->pc = 0x315d64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943512), GPR_U32(ctx, 2));
label_315d68:
    // 0x315d68: 0x8f83a2e4  lw          $v1, -0x5D1C($gp)
    ctx->pc = 0x315d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943460)));
label_315d6c:
    // 0x315d6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315d70:
    // 0x315d70: 0x10620094  beq         $v1, $v0, . + 4 + (0x94 << 2)
label_315d74:
    if (ctx->pc == 0x315D74u) {
        ctx->pc = 0x315D78u;
        goto label_315d78;
    }
    ctx->pc = 0x315D70u;
    {
        const bool branch_taken_0x315d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x315d70) {
            ctx->pc = 0x315FC4u;
            goto label_315fc4;
        }
    }
    ctx->pc = 0x315D78u;
label_315d78:
    // 0x315d78: 0xc04c3b8  jal         func_130EE0
label_315d7c:
    if (ctx->pc == 0x315D7Cu) {
        ctx->pc = 0x315D80u;
        goto label_315d80;
    }
    ctx->pc = 0x315D78u;
    SET_GPR_U32(ctx, 31, 0x315D80u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315D80u; }
        if (ctx->pc != 0x315D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315D80u; }
        if (ctx->pc != 0x315D80u) { return; }
    }
    ctx->pc = 0x315D80u;
label_315d80:
    // 0x315d80: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x315d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_315d84:
    // 0x315d84: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x315d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_315d88:
    // 0x315d88: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x315d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_315d8c:
    // 0x315d8c: 0xc421f980  lwc1        $f1, -0x680($at)
    ctx->pc = 0x315d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315d90:
    // 0x315d90: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x315d90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_315d94:
    // 0x315d94: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x315d94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_315d98:
    // 0x315d98: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x315d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_315d9c:
    // 0x315d9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x315d9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_315da0:
    // 0x315da0: 0xc04c3b8  jal         func_130EE0
label_315da4:
    if (ctx->pc == 0x315DA4u) {
        ctx->pc = 0x315DA4u;
            // 0x315da4: 0xe420f980  swc1        $f0, -0x680($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294965632), bits); }
        ctx->pc = 0x315DA8u;
        goto label_315da8;
    }
    ctx->pc = 0x315DA0u;
    SET_GPR_U32(ctx, 31, 0x315DA8u);
    ctx->pc = 0x315DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315DA0u;
            // 0x315da4: 0xe420f980  swc1        $f0, -0x680($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294965632), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315DA8u; }
        if (ctx->pc != 0x315DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315DA8u; }
        if (ctx->pc != 0x315DA8u) { return; }
    }
    ctx->pc = 0x315DA8u;
label_315da8:
    // 0x315da8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x315da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_315dac:
    // 0x315dac: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x315dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_315db0:
    // 0x315db0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x315db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_315db4:
    // 0x315db4: 0xc422f988  lwc1        $f2, -0x678($at)
    ctx->pc = 0x315db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_315db8:
    // 0x315db8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x315db8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_315dbc:
    // 0x315dbc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x315dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_315dc0:
    // 0x315dc0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x315dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_315dc4:
    // 0x315dc4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x315dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_315dc8:
    // 0x315dc8: 0xc421f980  lwc1        $f1, -0x680($at)
    ctx->pc = 0x315dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315dcc:
    // 0x315dcc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x315dccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_315dd0:
    // 0x315dd0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x315dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_315dd4:
    // 0x315dd4: 0xe420f988  swc1        $f0, -0x678($at)
    ctx->pc = 0x315dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294965640), bits); }
label_315dd8:
    // 0x315dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315ddc:
    // 0x315ddc: 0x0  nop
    ctx->pc = 0x315ddcu;
    // NOP
label_315de0:
    // 0x315de0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x315de0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315de4:
    // 0x315de4: 0x0  nop
    ctx->pc = 0x315de4u;
    // NOP
label_315de8:
    // 0x315de8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_315dec:
    if (ctx->pc == 0x315DECu) {
        ctx->pc = 0x315DF0u;
        goto label_315df0;
    }
    ctx->pc = 0x315DE8u;
    {
        const bool branch_taken_0x315de8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x315de8) {
            ctx->pc = 0x315DF8u;
            goto label_315df8;
        }
    }
    ctx->pc = 0x315DF0u;
label_315df0:
    // 0x315df0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x315df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_315df4:
    // 0x315df4: 0xe420f980  swc1        $f0, -0x680($at)
    ctx->pc = 0x315df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294965632), bits); }
label_315df8:
    // 0x315df8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x315df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_315dfc:
    // 0x315dfc: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x315dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
label_315e00:
    // 0x315e00: 0xc420f980  lwc1        $f0, -0x680($at)
    ctx->pc = 0x315e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315e04:
    // 0x315e04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315e08:
    // 0x315e08: 0x0  nop
    ctx->pc = 0x315e08u;
    // NOP
label_315e0c:
    // 0x315e0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x315e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315e10:
    // 0x315e10: 0x0  nop
    ctx->pc = 0x315e10u;
    // NOP
label_315e14:
    // 0x315e14: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_315e18:
    if (ctx->pc == 0x315E18u) {
        ctx->pc = 0x315E1Cu;
        goto label_315e1c;
    }
    ctx->pc = 0x315E14u;
    {
        const bool branch_taken_0x315e14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x315e14) {
            ctx->pc = 0x315E24u;
            goto label_315e24;
        }
    }
    ctx->pc = 0x315E1Cu;
label_315e1c:
    // 0x315e1c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x315e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_315e20:
    // 0x315e20: 0xe421f980  swc1        $f1, -0x680($at)
    ctx->pc = 0x315e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294965632), bits); }
label_315e24:
    // 0x315e24: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x315e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_315e28:
    // 0x315e28: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x315e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_315e2c:
    // 0x315e2c: 0xc421f988  lwc1        $f1, -0x678($at)
    ctx->pc = 0x315e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315e30:
    // 0x315e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315e34:
    // 0x315e34: 0x0  nop
    ctx->pc = 0x315e34u;
    // NOP
label_315e38:
    // 0x315e38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x315e38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315e3c:
    // 0x315e3c: 0x0  nop
    ctx->pc = 0x315e3cu;
    // NOP
label_315e40:
    // 0x315e40: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_315e44:
    if (ctx->pc == 0x315E44u) {
        ctx->pc = 0x315E48u;
        goto label_315e48;
    }
    ctx->pc = 0x315E40u;
    {
        const bool branch_taken_0x315e40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x315e40) {
            ctx->pc = 0x315E50u;
            goto label_315e50;
        }
    }
    ctx->pc = 0x315E48u;
label_315e48:
    // 0x315e48: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x315e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_315e4c:
    // 0x315e4c: 0xe420f988  swc1        $f0, -0x678($at)
    ctx->pc = 0x315e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294965640), bits); }
label_315e50:
    // 0x315e50: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x315e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_315e54:
    // 0x315e54: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x315e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
label_315e58:
    // 0x315e58: 0xc421f988  lwc1        $f1, -0x678($at)
    ctx->pc = 0x315e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315e5c:
    // 0x315e5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315e60:
    // 0x315e60: 0x0  nop
    ctx->pc = 0x315e60u;
    // NOP
label_315e64:
    // 0x315e64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x315e64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315e68:
    // 0x315e68: 0x0  nop
    ctx->pc = 0x315e68u;
    // NOP
label_315e6c:
    // 0x315e6c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_315e70:
    if (ctx->pc == 0x315E70u) {
        ctx->pc = 0x315E74u;
        goto label_315e74;
    }
    ctx->pc = 0x315E6Cu;
    {
        const bool branch_taken_0x315e6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x315e6c) {
            ctx->pc = 0x315E7Cu;
            goto label_315e7c;
        }
    }
    ctx->pc = 0x315E74u;
label_315e74:
    // 0x315e74: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x315e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_315e78:
    // 0x315e78: 0xe420f988  swc1        $f0, -0x678($at)
    ctx->pc = 0x315e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294965640), bits); }
label_315e7c:
    // 0x315e7c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x315e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_315e80:
    // 0x315e80: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x315e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_315e84:
    // 0x315e84: 0xc421f980  lwc1        $f1, -0x680($at)
    ctx->pc = 0x315e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315e88:
    // 0x315e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315e8c:
    // 0x315e8c: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x315e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_315e90:
    // 0x315e90: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x315e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_315e94:
    // 0x315e94: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x315e94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_315e98:
    // 0x315e98: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x315e98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_315e9c:
    // 0x315e9c: 0xc420f988  lwc1        $f0, -0x678($at)
    ctx->pc = 0x315e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315ea0:
    // 0x315ea0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x315ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315ea4:
    // 0x315ea4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x315ea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_315ea8:
    // 0x315ea8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x315ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_315eac:
    // 0x315eac: 0x8f83a2f8  lw          $v1, -0x5D08($gp)
    ctx->pc = 0x315eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943480)));
label_315eb0:
    // 0x315eb0: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_315eb4:
    if (ctx->pc == 0x315EB4u) {
        ctx->pc = 0x315EB8u;
        goto label_315eb8;
    }
    ctx->pc = 0x315EB0u;
    {
        const bool branch_taken_0x315eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x315eb0) {
            ctx->pc = 0x315F10u;
            goto label_315f10;
        }
    }
    ctx->pc = 0x315EB8u;
label_315eb8:
    // 0x315eb8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x315eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315ebc:
    // 0x315ebc: 0x3c0243ac  lui         $v0, 0x43AC
    ctx->pc = 0x315ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17324 << 16));
label_315ec0:
    // 0x315ec0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x315ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_315ec4:
    // 0x315ec4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315ec8:
    // 0x315ec8: 0x0  nop
    ctx->pc = 0x315ec8u;
    // NOP
label_315ecc:
    // 0x315ecc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x315eccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315ed0:
    // 0x315ed0: 0x0  nop
    ctx->pc = 0x315ed0u;
    // NOP
label_315ed4:
    // 0x315ed4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_315ed8:
    if (ctx->pc == 0x315ED8u) {
        ctx->pc = 0x315ED8u;
            // 0x315ed8: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x315EDCu;
        goto label_315edc;
    }
    ctx->pc = 0x315ED4u;
    {
        const bool branch_taken_0x315ed4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x315ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315ED4u;
            // 0x315ed8: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ed4) {
            ctx->pc = 0x315EE4u;
            goto label_315ee4;
        }
    }
    ctx->pc = 0x315EDCu;
label_315edc:
    // 0x315edc: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x315edcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_315ee0:
    // 0x315ee0: 0xac20f980  sw          $zero, -0x680($at)
    ctx->pc = 0x315ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965632), GPR_U32(ctx, 0));
label_315ee4:
    // 0x315ee4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x315ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315ee8:
    // 0x315ee8: 0x3c024311  lui         $v0, 0x4311
    ctx->pc = 0x315ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17169 << 16));
label_315eec:
    // 0x315eec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315ef0:
    // 0x315ef0: 0x0  nop
    ctx->pc = 0x315ef0u;
    // NOP
label_315ef4:
    // 0x315ef4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x315ef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315ef8:
    // 0x315ef8: 0x0  nop
    ctx->pc = 0x315ef8u;
    // NOP
label_315efc:
    // 0x315efc: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_315f00:
    if (ctx->pc == 0x315F00u) {
        ctx->pc = 0x315F00u;
            // 0x315f00: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x315F04u;
        goto label_315f04;
    }
    ctx->pc = 0x315EFCu;
    {
        const bool branch_taken_0x315efc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315EFCu;
            // 0x315f00: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315efc) {
            ctx->pc = 0x315F64u;
            goto label_315f64;
        }
    }
    ctx->pc = 0x315F04u;
label_315f04:
    // 0x315f04: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x315f04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_315f08:
    // 0x315f08: 0x10000016  b           . + 4 + (0x16 << 2)
label_315f0c:
    if (ctx->pc == 0x315F0Cu) {
        ctx->pc = 0x315F0Cu;
            // 0x315f0c: 0xac20f980  sw          $zero, -0x680($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294965632), GPR_U32(ctx, 0));
        ctx->pc = 0x315F10u;
        goto label_315f10;
    }
    ctx->pc = 0x315F08u;
    {
        const bool branch_taken_0x315f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315F08u;
            // 0x315f0c: 0xac20f980  sw          $zero, -0x680($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294965632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f08) {
            ctx->pc = 0x315F64u;
            goto label_315f64;
        }
    }
    ctx->pc = 0x315F10u;
label_315f10:
    // 0x315f10: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x315f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315f14:
    // 0x315f14: 0x3c02c311  lui         $v0, 0xC311
    ctx->pc = 0x315f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49937 << 16));
label_315f18:
    // 0x315f18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315f1c:
    // 0x315f1c: 0x0  nop
    ctx->pc = 0x315f1cu;
    // NOP
label_315f20:
    // 0x315f20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x315f20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315f24:
    // 0x315f24: 0x0  nop
    ctx->pc = 0x315f24u;
    // NOP
label_315f28:
    // 0x315f28: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_315f2c:
    if (ctx->pc == 0x315F2Cu) {
        ctx->pc = 0x315F2Cu;
            // 0x315f2c: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x315F30u;
        goto label_315f30;
    }
    ctx->pc = 0x315F28u;
    {
        const bool branch_taken_0x315f28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x315F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315F28u;
            // 0x315f2c: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f28) {
            ctx->pc = 0x315F38u;
            goto label_315f38;
        }
    }
    ctx->pc = 0x315F30u;
label_315f30:
    // 0x315f30: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x315f30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_315f34:
    // 0x315f34: 0xac20f980  sw          $zero, -0x680($at)
    ctx->pc = 0x315f34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965632), GPR_U32(ctx, 0));
label_315f38:
    // 0x315f38: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x315f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315f3c:
    // 0x315f3c: 0x3c02c3ac  lui         $v0, 0xC3AC
    ctx->pc = 0x315f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50092 << 16));
label_315f40:
    // 0x315f40: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x315f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_315f44:
    // 0x315f44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315f48:
    // 0x315f48: 0x0  nop
    ctx->pc = 0x315f48u;
    // NOP
label_315f4c:
    // 0x315f4c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x315f4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315f50:
    // 0x315f50: 0x0  nop
    ctx->pc = 0x315f50u;
    // NOP
label_315f54:
    // 0x315f54: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_315f58:
    if (ctx->pc == 0x315F58u) {
        ctx->pc = 0x315F58u;
            // 0x315f58: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x315F5Cu;
        goto label_315f5c;
    }
    ctx->pc = 0x315F54u;
    {
        const bool branch_taken_0x315f54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315F54u;
            // 0x315f58: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f54) {
            ctx->pc = 0x315F64u;
            goto label_315f64;
        }
    }
    ctx->pc = 0x315F5Cu;
label_315f5c:
    // 0x315f5c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x315f5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_315f60:
    // 0x315f60: 0xac20f980  sw          $zero, -0x680($at)
    ctx->pc = 0x315f60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965632), GPR_U32(ctx, 0));
label_315f64:
    // 0x315f64: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x315f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315f68:
    // 0x315f68: 0x3c02c489  lui         $v0, 0xC489
    ctx->pc = 0x315f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50313 << 16));
label_315f6c:
    // 0x315f6c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x315f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_315f70:
    // 0x315f70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315f74:
    // 0x315f74: 0x0  nop
    ctx->pc = 0x315f74u;
    // NOP
label_315f78:
    // 0x315f78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x315f78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315f7c:
    // 0x315f7c: 0x0  nop
    ctx->pc = 0x315f7cu;
    // NOP
label_315f80:
    // 0x315f80: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_315f84:
    if (ctx->pc == 0x315F84u) {
        ctx->pc = 0x315F88u;
        goto label_315f88;
    }
    ctx->pc = 0x315F80u;
    {
        const bool branch_taken_0x315f80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x315f80) {
            ctx->pc = 0x315F94u;
            goto label_315f94;
        }
    }
    ctx->pc = 0x315F88u;
label_315f88:
    // 0x315f88: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x315f88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_315f8c:
    // 0x315f8c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x315f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_315f90:
    // 0x315f90: 0xac20f988  sw          $zero, -0x678($at)
    ctx->pc = 0x315f90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965640), GPR_U32(ctx, 0));
label_315f94:
    // 0x315f94: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x315f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315f98:
    // 0x315f98: 0x3c02c4a8  lui         $v0, 0xC4A8
    ctx->pc = 0x315f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50344 << 16));
label_315f9c:
    // 0x315f9c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x315f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_315fa0:
    // 0x315fa0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315fa4:
    // 0x315fa4: 0x0  nop
    ctx->pc = 0x315fa4u;
    // NOP
label_315fa8:
    // 0x315fa8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x315fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315fac:
    // 0x315fac: 0x0  nop
    ctx->pc = 0x315facu;
    // NOP
label_315fb0:
    // 0x315fb0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_315fb4:
    if (ctx->pc == 0x315FB4u) {
        ctx->pc = 0x315FB8u;
        goto label_315fb8;
    }
    ctx->pc = 0x315FB0u;
    {
        const bool branch_taken_0x315fb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x315fb0) {
            ctx->pc = 0x315FC4u;
            goto label_315fc4;
        }
    }
    ctx->pc = 0x315FB8u;
label_315fb8:
    // 0x315fb8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x315fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_315fbc:
    // 0x315fbc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x315fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_315fc0:
    // 0x315fc0: 0xac20f988  sw          $zero, -0x678($at)
    ctx->pc = 0x315fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965640), GPR_U32(ctx, 0));
label_315fc4:
    // 0x315fc4: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x315fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_315fc8:
    // 0x315fc8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x315fc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_315fcc:
    // 0x315fcc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x315fccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_315fd0:
    // 0x315fd0: 0x320f809  jalr        $t9
label_315fd4:
    if (ctx->pc == 0x315FD4u) {
        ctx->pc = 0x315FD4u;
            // 0x315fd4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x315FD8u;
        goto label_315fd8;
    }
    ctx->pc = 0x315FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315FD8u);
        ctx->pc = 0x315FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315FD0u;
            // 0x315fd4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x315FD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315FD8u; }
            if (ctx->pc != 0x315FD8u) { return; }
        }
        }
    }
    ctx->pc = 0x315FD8u;
label_315fd8:
    // 0x315fd8: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x315fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_315fdc:
    // 0x315fdc: 0xc0c11cc  jal         func_304730
label_315fe0:
    if (ctx->pc == 0x315FE0u) {
        ctx->pc = 0x315FE0u;
            // 0x315fe0: 0x2484f9a0  addiu       $a0, $a0, -0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965664));
        ctx->pc = 0x315FE4u;
        goto label_315fe4;
    }
    ctx->pc = 0x315FDCu;
    SET_GPR_U32(ctx, 31, 0x315FE4u);
    ctx->pc = 0x315FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315FDCu;
            // 0x315fe0: 0x2484f9a0  addiu       $a0, $a0, -0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304730u;
    if (runtime->hasFunction(0x304730u)) {
        auto targetFn = runtime->lookupFunction(0x304730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315FE4u; }
        if (ctx->pc != 0x315FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__12sgCPlayVoiceFv_0x304730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315FE4u; }
        if (ctx->pc != 0x315FE4u) { return; }
    }
    ctx->pc = 0x315FE4u;
label_315fe4:
    // 0x315fe4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x315fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_315fe8:
    // 0x315fe8: 0x3401a0f0  ori         $at, $zero, 0xA0F0
    ctx->pc = 0x315fe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41200);
label_315fec:
    // 0x315fec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x315fecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_315ff0:
    // 0x315ff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x315ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315ff4:
    // 0x315ff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x315ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_315ff8:
    // 0x315ff8: 0x3e00008  jr          $ra
label_315ffc:
    if (ctx->pc == 0x315FFCu) {
        ctx->pc = 0x315FFCu;
            // 0x315ffc: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x316000u;
        goto label_fallthrough_0x315ff8;
    }
    ctx->pc = 0x315FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315FF8u;
            // 0x315ffc: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x315ff8:
    ctx->pc = 0x316000u;
}
