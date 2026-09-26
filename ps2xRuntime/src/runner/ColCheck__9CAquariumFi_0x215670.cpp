#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ColCheck__9CAquariumFi
// Address: 0x215670 - 0x215d68
void ColCheck__9CAquariumFi_0x215670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColCheck__9CAquariumFi_0x215670");
#endif

    switch (ctx->pc) {
        case 0x215670u: goto label_215670;
        case 0x215674u: goto label_215674;
        case 0x215678u: goto label_215678;
        case 0x21567cu: goto label_21567c;
        case 0x215680u: goto label_215680;
        case 0x215684u: goto label_215684;
        case 0x215688u: goto label_215688;
        case 0x21568cu: goto label_21568c;
        case 0x215690u: goto label_215690;
        case 0x215694u: goto label_215694;
        case 0x215698u: goto label_215698;
        case 0x21569cu: goto label_21569c;
        case 0x2156a0u: goto label_2156a0;
        case 0x2156a4u: goto label_2156a4;
        case 0x2156a8u: goto label_2156a8;
        case 0x2156acu: goto label_2156ac;
        case 0x2156b0u: goto label_2156b0;
        case 0x2156b4u: goto label_2156b4;
        case 0x2156b8u: goto label_2156b8;
        case 0x2156bcu: goto label_2156bc;
        case 0x2156c0u: goto label_2156c0;
        case 0x2156c4u: goto label_2156c4;
        case 0x2156c8u: goto label_2156c8;
        case 0x2156ccu: goto label_2156cc;
        case 0x2156d0u: goto label_2156d0;
        case 0x2156d4u: goto label_2156d4;
        case 0x2156d8u: goto label_2156d8;
        case 0x2156dcu: goto label_2156dc;
        case 0x2156e0u: goto label_2156e0;
        case 0x2156e4u: goto label_2156e4;
        case 0x2156e8u: goto label_2156e8;
        case 0x2156ecu: goto label_2156ec;
        case 0x2156f0u: goto label_2156f0;
        case 0x2156f4u: goto label_2156f4;
        case 0x2156f8u: goto label_2156f8;
        case 0x2156fcu: goto label_2156fc;
        case 0x215700u: goto label_215700;
        case 0x215704u: goto label_215704;
        case 0x215708u: goto label_215708;
        case 0x21570cu: goto label_21570c;
        case 0x215710u: goto label_215710;
        case 0x215714u: goto label_215714;
        case 0x215718u: goto label_215718;
        case 0x21571cu: goto label_21571c;
        case 0x215720u: goto label_215720;
        case 0x215724u: goto label_215724;
        case 0x215728u: goto label_215728;
        case 0x21572cu: goto label_21572c;
        case 0x215730u: goto label_215730;
        case 0x215734u: goto label_215734;
        case 0x215738u: goto label_215738;
        case 0x21573cu: goto label_21573c;
        case 0x215740u: goto label_215740;
        case 0x215744u: goto label_215744;
        case 0x215748u: goto label_215748;
        case 0x21574cu: goto label_21574c;
        case 0x215750u: goto label_215750;
        case 0x215754u: goto label_215754;
        case 0x215758u: goto label_215758;
        case 0x21575cu: goto label_21575c;
        case 0x215760u: goto label_215760;
        case 0x215764u: goto label_215764;
        case 0x215768u: goto label_215768;
        case 0x21576cu: goto label_21576c;
        case 0x215770u: goto label_215770;
        case 0x215774u: goto label_215774;
        case 0x215778u: goto label_215778;
        case 0x21577cu: goto label_21577c;
        case 0x215780u: goto label_215780;
        case 0x215784u: goto label_215784;
        case 0x215788u: goto label_215788;
        case 0x21578cu: goto label_21578c;
        case 0x215790u: goto label_215790;
        case 0x215794u: goto label_215794;
        case 0x215798u: goto label_215798;
        case 0x21579cu: goto label_21579c;
        case 0x2157a0u: goto label_2157a0;
        case 0x2157a4u: goto label_2157a4;
        case 0x2157a8u: goto label_2157a8;
        case 0x2157acu: goto label_2157ac;
        case 0x2157b0u: goto label_2157b0;
        case 0x2157b4u: goto label_2157b4;
        case 0x2157b8u: goto label_2157b8;
        case 0x2157bcu: goto label_2157bc;
        case 0x2157c0u: goto label_2157c0;
        case 0x2157c4u: goto label_2157c4;
        case 0x2157c8u: goto label_2157c8;
        case 0x2157ccu: goto label_2157cc;
        case 0x2157d0u: goto label_2157d0;
        case 0x2157d4u: goto label_2157d4;
        case 0x2157d8u: goto label_2157d8;
        case 0x2157dcu: goto label_2157dc;
        case 0x2157e0u: goto label_2157e0;
        case 0x2157e4u: goto label_2157e4;
        case 0x2157e8u: goto label_2157e8;
        case 0x2157ecu: goto label_2157ec;
        case 0x2157f0u: goto label_2157f0;
        case 0x2157f4u: goto label_2157f4;
        case 0x2157f8u: goto label_2157f8;
        case 0x2157fcu: goto label_2157fc;
        case 0x215800u: goto label_215800;
        case 0x215804u: goto label_215804;
        case 0x215808u: goto label_215808;
        case 0x21580cu: goto label_21580c;
        case 0x215810u: goto label_215810;
        case 0x215814u: goto label_215814;
        case 0x215818u: goto label_215818;
        case 0x21581cu: goto label_21581c;
        case 0x215820u: goto label_215820;
        case 0x215824u: goto label_215824;
        case 0x215828u: goto label_215828;
        case 0x21582cu: goto label_21582c;
        case 0x215830u: goto label_215830;
        case 0x215834u: goto label_215834;
        case 0x215838u: goto label_215838;
        case 0x21583cu: goto label_21583c;
        case 0x215840u: goto label_215840;
        case 0x215844u: goto label_215844;
        case 0x215848u: goto label_215848;
        case 0x21584cu: goto label_21584c;
        case 0x215850u: goto label_215850;
        case 0x215854u: goto label_215854;
        case 0x215858u: goto label_215858;
        case 0x21585cu: goto label_21585c;
        case 0x215860u: goto label_215860;
        case 0x215864u: goto label_215864;
        case 0x215868u: goto label_215868;
        case 0x21586cu: goto label_21586c;
        case 0x215870u: goto label_215870;
        case 0x215874u: goto label_215874;
        case 0x215878u: goto label_215878;
        case 0x21587cu: goto label_21587c;
        case 0x215880u: goto label_215880;
        case 0x215884u: goto label_215884;
        case 0x215888u: goto label_215888;
        case 0x21588cu: goto label_21588c;
        case 0x215890u: goto label_215890;
        case 0x215894u: goto label_215894;
        case 0x215898u: goto label_215898;
        case 0x21589cu: goto label_21589c;
        case 0x2158a0u: goto label_2158a0;
        case 0x2158a4u: goto label_2158a4;
        case 0x2158a8u: goto label_2158a8;
        case 0x2158acu: goto label_2158ac;
        case 0x2158b0u: goto label_2158b0;
        case 0x2158b4u: goto label_2158b4;
        case 0x2158b8u: goto label_2158b8;
        case 0x2158bcu: goto label_2158bc;
        case 0x2158c0u: goto label_2158c0;
        case 0x2158c4u: goto label_2158c4;
        case 0x2158c8u: goto label_2158c8;
        case 0x2158ccu: goto label_2158cc;
        case 0x2158d0u: goto label_2158d0;
        case 0x2158d4u: goto label_2158d4;
        case 0x2158d8u: goto label_2158d8;
        case 0x2158dcu: goto label_2158dc;
        case 0x2158e0u: goto label_2158e0;
        case 0x2158e4u: goto label_2158e4;
        case 0x2158e8u: goto label_2158e8;
        case 0x2158ecu: goto label_2158ec;
        case 0x2158f0u: goto label_2158f0;
        case 0x2158f4u: goto label_2158f4;
        case 0x2158f8u: goto label_2158f8;
        case 0x2158fcu: goto label_2158fc;
        case 0x215900u: goto label_215900;
        case 0x215904u: goto label_215904;
        case 0x215908u: goto label_215908;
        case 0x21590cu: goto label_21590c;
        case 0x215910u: goto label_215910;
        case 0x215914u: goto label_215914;
        case 0x215918u: goto label_215918;
        case 0x21591cu: goto label_21591c;
        case 0x215920u: goto label_215920;
        case 0x215924u: goto label_215924;
        case 0x215928u: goto label_215928;
        case 0x21592cu: goto label_21592c;
        case 0x215930u: goto label_215930;
        case 0x215934u: goto label_215934;
        case 0x215938u: goto label_215938;
        case 0x21593cu: goto label_21593c;
        case 0x215940u: goto label_215940;
        case 0x215944u: goto label_215944;
        case 0x215948u: goto label_215948;
        case 0x21594cu: goto label_21594c;
        case 0x215950u: goto label_215950;
        case 0x215954u: goto label_215954;
        case 0x215958u: goto label_215958;
        case 0x21595cu: goto label_21595c;
        case 0x215960u: goto label_215960;
        case 0x215964u: goto label_215964;
        case 0x215968u: goto label_215968;
        case 0x21596cu: goto label_21596c;
        case 0x215970u: goto label_215970;
        case 0x215974u: goto label_215974;
        case 0x215978u: goto label_215978;
        case 0x21597cu: goto label_21597c;
        case 0x215980u: goto label_215980;
        case 0x215984u: goto label_215984;
        case 0x215988u: goto label_215988;
        case 0x21598cu: goto label_21598c;
        case 0x215990u: goto label_215990;
        case 0x215994u: goto label_215994;
        case 0x215998u: goto label_215998;
        case 0x21599cu: goto label_21599c;
        case 0x2159a0u: goto label_2159a0;
        case 0x2159a4u: goto label_2159a4;
        case 0x2159a8u: goto label_2159a8;
        case 0x2159acu: goto label_2159ac;
        case 0x2159b0u: goto label_2159b0;
        case 0x2159b4u: goto label_2159b4;
        case 0x2159b8u: goto label_2159b8;
        case 0x2159bcu: goto label_2159bc;
        case 0x2159c0u: goto label_2159c0;
        case 0x2159c4u: goto label_2159c4;
        case 0x2159c8u: goto label_2159c8;
        case 0x2159ccu: goto label_2159cc;
        case 0x2159d0u: goto label_2159d0;
        case 0x2159d4u: goto label_2159d4;
        case 0x2159d8u: goto label_2159d8;
        case 0x2159dcu: goto label_2159dc;
        case 0x2159e0u: goto label_2159e0;
        case 0x2159e4u: goto label_2159e4;
        case 0x2159e8u: goto label_2159e8;
        case 0x2159ecu: goto label_2159ec;
        case 0x2159f0u: goto label_2159f0;
        case 0x2159f4u: goto label_2159f4;
        case 0x2159f8u: goto label_2159f8;
        case 0x2159fcu: goto label_2159fc;
        case 0x215a00u: goto label_215a00;
        case 0x215a04u: goto label_215a04;
        case 0x215a08u: goto label_215a08;
        case 0x215a0cu: goto label_215a0c;
        case 0x215a10u: goto label_215a10;
        case 0x215a14u: goto label_215a14;
        case 0x215a18u: goto label_215a18;
        case 0x215a1cu: goto label_215a1c;
        case 0x215a20u: goto label_215a20;
        case 0x215a24u: goto label_215a24;
        case 0x215a28u: goto label_215a28;
        case 0x215a2cu: goto label_215a2c;
        case 0x215a30u: goto label_215a30;
        case 0x215a34u: goto label_215a34;
        case 0x215a38u: goto label_215a38;
        case 0x215a3cu: goto label_215a3c;
        case 0x215a40u: goto label_215a40;
        case 0x215a44u: goto label_215a44;
        case 0x215a48u: goto label_215a48;
        case 0x215a4cu: goto label_215a4c;
        case 0x215a50u: goto label_215a50;
        case 0x215a54u: goto label_215a54;
        case 0x215a58u: goto label_215a58;
        case 0x215a5cu: goto label_215a5c;
        case 0x215a60u: goto label_215a60;
        case 0x215a64u: goto label_215a64;
        case 0x215a68u: goto label_215a68;
        case 0x215a6cu: goto label_215a6c;
        case 0x215a70u: goto label_215a70;
        case 0x215a74u: goto label_215a74;
        case 0x215a78u: goto label_215a78;
        case 0x215a7cu: goto label_215a7c;
        case 0x215a80u: goto label_215a80;
        case 0x215a84u: goto label_215a84;
        case 0x215a88u: goto label_215a88;
        case 0x215a8cu: goto label_215a8c;
        case 0x215a90u: goto label_215a90;
        case 0x215a94u: goto label_215a94;
        case 0x215a98u: goto label_215a98;
        case 0x215a9cu: goto label_215a9c;
        case 0x215aa0u: goto label_215aa0;
        case 0x215aa4u: goto label_215aa4;
        case 0x215aa8u: goto label_215aa8;
        case 0x215aacu: goto label_215aac;
        case 0x215ab0u: goto label_215ab0;
        case 0x215ab4u: goto label_215ab4;
        case 0x215ab8u: goto label_215ab8;
        case 0x215abcu: goto label_215abc;
        case 0x215ac0u: goto label_215ac0;
        case 0x215ac4u: goto label_215ac4;
        case 0x215ac8u: goto label_215ac8;
        case 0x215accu: goto label_215acc;
        case 0x215ad0u: goto label_215ad0;
        case 0x215ad4u: goto label_215ad4;
        case 0x215ad8u: goto label_215ad8;
        case 0x215adcu: goto label_215adc;
        case 0x215ae0u: goto label_215ae0;
        case 0x215ae4u: goto label_215ae4;
        case 0x215ae8u: goto label_215ae8;
        case 0x215aecu: goto label_215aec;
        case 0x215af0u: goto label_215af0;
        case 0x215af4u: goto label_215af4;
        case 0x215af8u: goto label_215af8;
        case 0x215afcu: goto label_215afc;
        case 0x215b00u: goto label_215b00;
        case 0x215b04u: goto label_215b04;
        case 0x215b08u: goto label_215b08;
        case 0x215b0cu: goto label_215b0c;
        case 0x215b10u: goto label_215b10;
        case 0x215b14u: goto label_215b14;
        case 0x215b18u: goto label_215b18;
        case 0x215b1cu: goto label_215b1c;
        case 0x215b20u: goto label_215b20;
        case 0x215b24u: goto label_215b24;
        case 0x215b28u: goto label_215b28;
        case 0x215b2cu: goto label_215b2c;
        case 0x215b30u: goto label_215b30;
        case 0x215b34u: goto label_215b34;
        case 0x215b38u: goto label_215b38;
        case 0x215b3cu: goto label_215b3c;
        case 0x215b40u: goto label_215b40;
        case 0x215b44u: goto label_215b44;
        case 0x215b48u: goto label_215b48;
        case 0x215b4cu: goto label_215b4c;
        case 0x215b50u: goto label_215b50;
        case 0x215b54u: goto label_215b54;
        case 0x215b58u: goto label_215b58;
        case 0x215b5cu: goto label_215b5c;
        case 0x215b60u: goto label_215b60;
        case 0x215b64u: goto label_215b64;
        case 0x215b68u: goto label_215b68;
        case 0x215b6cu: goto label_215b6c;
        case 0x215b70u: goto label_215b70;
        case 0x215b74u: goto label_215b74;
        case 0x215b78u: goto label_215b78;
        case 0x215b7cu: goto label_215b7c;
        case 0x215b80u: goto label_215b80;
        case 0x215b84u: goto label_215b84;
        case 0x215b88u: goto label_215b88;
        case 0x215b8cu: goto label_215b8c;
        case 0x215b90u: goto label_215b90;
        case 0x215b94u: goto label_215b94;
        case 0x215b98u: goto label_215b98;
        case 0x215b9cu: goto label_215b9c;
        case 0x215ba0u: goto label_215ba0;
        case 0x215ba4u: goto label_215ba4;
        case 0x215ba8u: goto label_215ba8;
        case 0x215bacu: goto label_215bac;
        case 0x215bb0u: goto label_215bb0;
        case 0x215bb4u: goto label_215bb4;
        case 0x215bb8u: goto label_215bb8;
        case 0x215bbcu: goto label_215bbc;
        case 0x215bc0u: goto label_215bc0;
        case 0x215bc4u: goto label_215bc4;
        case 0x215bc8u: goto label_215bc8;
        case 0x215bccu: goto label_215bcc;
        case 0x215bd0u: goto label_215bd0;
        case 0x215bd4u: goto label_215bd4;
        case 0x215bd8u: goto label_215bd8;
        case 0x215bdcu: goto label_215bdc;
        case 0x215be0u: goto label_215be0;
        case 0x215be4u: goto label_215be4;
        case 0x215be8u: goto label_215be8;
        case 0x215becu: goto label_215bec;
        case 0x215bf0u: goto label_215bf0;
        case 0x215bf4u: goto label_215bf4;
        case 0x215bf8u: goto label_215bf8;
        case 0x215bfcu: goto label_215bfc;
        case 0x215c00u: goto label_215c00;
        case 0x215c04u: goto label_215c04;
        case 0x215c08u: goto label_215c08;
        case 0x215c0cu: goto label_215c0c;
        case 0x215c10u: goto label_215c10;
        case 0x215c14u: goto label_215c14;
        case 0x215c18u: goto label_215c18;
        case 0x215c1cu: goto label_215c1c;
        case 0x215c20u: goto label_215c20;
        case 0x215c24u: goto label_215c24;
        case 0x215c28u: goto label_215c28;
        case 0x215c2cu: goto label_215c2c;
        case 0x215c30u: goto label_215c30;
        case 0x215c34u: goto label_215c34;
        case 0x215c38u: goto label_215c38;
        case 0x215c3cu: goto label_215c3c;
        case 0x215c40u: goto label_215c40;
        case 0x215c44u: goto label_215c44;
        case 0x215c48u: goto label_215c48;
        case 0x215c4cu: goto label_215c4c;
        case 0x215c50u: goto label_215c50;
        case 0x215c54u: goto label_215c54;
        case 0x215c58u: goto label_215c58;
        case 0x215c5cu: goto label_215c5c;
        case 0x215c60u: goto label_215c60;
        case 0x215c64u: goto label_215c64;
        case 0x215c68u: goto label_215c68;
        case 0x215c6cu: goto label_215c6c;
        case 0x215c70u: goto label_215c70;
        case 0x215c74u: goto label_215c74;
        case 0x215c78u: goto label_215c78;
        case 0x215c7cu: goto label_215c7c;
        case 0x215c80u: goto label_215c80;
        case 0x215c84u: goto label_215c84;
        case 0x215c88u: goto label_215c88;
        case 0x215c8cu: goto label_215c8c;
        case 0x215c90u: goto label_215c90;
        case 0x215c94u: goto label_215c94;
        case 0x215c98u: goto label_215c98;
        case 0x215c9cu: goto label_215c9c;
        case 0x215ca0u: goto label_215ca0;
        case 0x215ca4u: goto label_215ca4;
        case 0x215ca8u: goto label_215ca8;
        case 0x215cacu: goto label_215cac;
        case 0x215cb0u: goto label_215cb0;
        case 0x215cb4u: goto label_215cb4;
        case 0x215cb8u: goto label_215cb8;
        case 0x215cbcu: goto label_215cbc;
        case 0x215cc0u: goto label_215cc0;
        case 0x215cc4u: goto label_215cc4;
        case 0x215cc8u: goto label_215cc8;
        case 0x215cccu: goto label_215ccc;
        case 0x215cd0u: goto label_215cd0;
        case 0x215cd4u: goto label_215cd4;
        case 0x215cd8u: goto label_215cd8;
        case 0x215cdcu: goto label_215cdc;
        case 0x215ce0u: goto label_215ce0;
        case 0x215ce4u: goto label_215ce4;
        case 0x215ce8u: goto label_215ce8;
        case 0x215cecu: goto label_215cec;
        case 0x215cf0u: goto label_215cf0;
        case 0x215cf4u: goto label_215cf4;
        case 0x215cf8u: goto label_215cf8;
        case 0x215cfcu: goto label_215cfc;
        case 0x215d00u: goto label_215d00;
        case 0x215d04u: goto label_215d04;
        case 0x215d08u: goto label_215d08;
        case 0x215d0cu: goto label_215d0c;
        case 0x215d10u: goto label_215d10;
        case 0x215d14u: goto label_215d14;
        case 0x215d18u: goto label_215d18;
        case 0x215d1cu: goto label_215d1c;
        case 0x215d20u: goto label_215d20;
        case 0x215d24u: goto label_215d24;
        case 0x215d28u: goto label_215d28;
        case 0x215d2cu: goto label_215d2c;
        case 0x215d30u: goto label_215d30;
        case 0x215d34u: goto label_215d34;
        case 0x215d38u: goto label_215d38;
        case 0x215d3cu: goto label_215d3c;
        case 0x215d40u: goto label_215d40;
        case 0x215d44u: goto label_215d44;
        case 0x215d48u: goto label_215d48;
        case 0x215d4cu: goto label_215d4c;
        case 0x215d50u: goto label_215d50;
        case 0x215d54u: goto label_215d54;
        case 0x215d58u: goto label_215d58;
        case 0x215d5cu: goto label_215d5c;
        case 0x215d60u: goto label_215d60;
        case 0x215d64u: goto label_215d64;
        default: break;
    }

    ctx->pc = 0x215670u;

label_215670:
    // 0x215670: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x215670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_215674:
    // 0x215674: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x215674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_215678:
    // 0x215678: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x215678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_21567c:
    // 0x21567c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x21567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_215680:
    // 0x215680: 0x5f080  sll         $fp, $a1, 2
    ctx->pc = 0x215680u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_215684:
    // 0x215684: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x215684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_215688:
    // 0x215688: 0x3c41021  addu        $v0, $fp, $a0
    ctx->pc = 0x215688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_21568c:
    // 0x21568c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x21568cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_215690:
    // 0x215690: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x215690u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_215694:
    // 0x215694: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x215694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_215698:
    // 0x215698: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x215698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_21569c:
    // 0x21569c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x21569cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2156a0:
    // 0x2156a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2156a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2156a4:
    // 0x2156a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2156a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2156a8:
    // 0x2156a8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2156a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2156ac:
    // 0x2156ac: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2156acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2156b0:
    // 0x2156b0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2156b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2156b4:
    // 0x2156b4: 0x8c5302b4  lw          $s3, 0x2B4($v0)
    ctx->pc = 0x2156b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_2156b8:
    // 0x2156b8: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_2156bc:
    if (ctx->pc == 0x2156BCu) {
        ctx->pc = 0x2156BCu;
            // 0x2156bc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2156C0u;
        goto label_2156c0;
    }
    ctx->pc = 0x2156B8u;
    {
        const bool branch_taken_0x2156b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2156BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2156B8u;
            // 0x2156bc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156b8) {
            ctx->pc = 0x2156C8u;
            goto label_2156c8;
        }
    }
    ctx->pc = 0x2156C0u;
label_2156c0:
    // 0x2156c0: 0x1000019a  b           . + 4 + (0x19A << 2)
label_2156c4:
    if (ctx->pc == 0x2156C4u) {
        ctx->pc = 0x2156C4u;
            // 0x2156c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2156C8u;
        goto label_2156c8;
    }
    ctx->pc = 0x2156C0u;
    {
        const bool branch_taken_0x2156c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2156C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2156C0u;
            // 0x2156c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156c0) {
            ctx->pc = 0x215D2Cu;
            goto label_215d2c;
        }
    }
    ctx->pc = 0x2156C8u;
label_2156c8:
    // 0x2156c8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2156c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2156cc:
    // 0x2156cc: 0x3c023e94  lui         $v0, 0x3E94
    ctx->pc = 0x2156ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16020 << 16));
label_2156d0:
    // 0x2156d0: 0xc66106a4  lwc1        $f1, 0x6A4($s3)
    ctx->pc = 0x2156d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2156d4:
    // 0x2156d4: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x2156d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
label_2156d8:
    // 0x2156d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2156d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2156dc:
    // 0x2156dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2156dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2156e0:
    // 0x2156e0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2156e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2156e4:
    // 0x2156e4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2156e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2156e8:
    // 0x2156e8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2156e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2156ec:
    // 0x2156ec: 0x320f809  jalr        $t9
label_2156f0:
    if (ctx->pc == 0x2156F0u) {
        ctx->pc = 0x2156F0u;
            // 0x2156f0: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x2156F4u;
        goto label_2156f4;
    }
    ctx->pc = 0x2156ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2156F4u);
        ctx->pc = 0x2156F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2156ECu;
            // 0x2156f0: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2156F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2156F4u; }
            if (ctx->pc != 0x2156F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2156F4u;
label_2156f4:
    // 0x2156f4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2156f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2156f8:
    // 0x2156f8: 0x26660670  addiu       $a2, $s3, 0x670
    ctx->pc = 0x2156f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1648));
label_2156fc:
    // 0x2156fc: 0xc041c38  jal         func_1070E0
label_215700:
    if (ctx->pc == 0x215700u) {
        ctx->pc = 0x215700u;
            // 0x215700: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x215704u;
        goto label_215704;
    }
    ctx->pc = 0x2156FCu;
    SET_GPR_U32(ctx, 31, 0x215704u);
    ctx->pc = 0x215700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2156FCu;
            // 0x215700: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215704u; }
        if (ctx->pc != 0x215704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215704u; }
        if (ctx->pc != 0x215704u) { return; }
    }
    ctx->pc = 0x215704u;
label_215704:
    // 0x215704: 0xae600924  sw          $zero, 0x924($s3)
    ctx->pc = 0x215704u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2340), GPR_U32(ctx, 0));
label_215708:
    // 0x215708: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x215708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_21570c:
    // 0x21570c: 0x866306ae  lh          $v1, 0x6AE($s3)
    ctx->pc = 0x21570cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1710)));
label_215710:
    // 0x215710: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_215714:
    if (ctx->pc == 0x215714u) {
        ctx->pc = 0x215714u;
            // 0x215714: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x215718u;
        goto label_215718;
    }
    ctx->pc = 0x215710u;
    {
        const bool branch_taken_0x215710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x215714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215710u;
            // 0x215714: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215710) {
            ctx->pc = 0x21571Cu;
            goto label_21571c;
        }
    }
    ctx->pc = 0x215718u;
label_215718:
    // 0x215718: 0x267106c0  addiu       $s1, $s3, 0x6C0
    ctx->pc = 0x215718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1728));
label_21571c:
    // 0x21571c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215720:
    // 0x215720: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_215724:
    if (ctx->pc == 0x215724u) {
        ctx->pc = 0x215724u;
            // 0x215724: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x215728u;
        goto label_215728;
    }
    ctx->pc = 0x215720u;
    {
        const bool branch_taken_0x215720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x215724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215720u;
            // 0x215724: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215720) {
            ctx->pc = 0x21572Cu;
            goto label_21572c;
        }
    }
    ctx->pc = 0x215728u;
label_215728:
    // 0x215728: 0x267106c0  addiu       $s1, $s3, 0x6C0
    ctx->pc = 0x215728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1728));
label_21572c:
    // 0x21572c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_215730:
    if (ctx->pc == 0x215730u) {
        ctx->pc = 0x215730u;
            // 0x215730: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x215734u;
        goto label_215734;
    }
    ctx->pc = 0x21572Cu;
    {
        const bool branch_taken_0x21572c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x215730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21572Cu;
            // 0x215730: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21572c) {
            ctx->pc = 0x21573Cu;
            goto label_21573c;
        }
    }
    ctx->pc = 0x215734u;
label_215734:
    // 0x215734: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_215738:
    if (ctx->pc == 0x215738u) {
        ctx->pc = 0x21573Cu;
        goto label_21573c;
    }
    ctx->pc = 0x215734u;
    {
        const bool branch_taken_0x215734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215734) {
            ctx->pc = 0x215740u;
            goto label_215740;
        }
    }
    ctx->pc = 0x21573Cu;
label_21573c:
    // 0x21573c: 0x267106c0  addiu       $s1, $s3, 0x6C0
    ctx->pc = 0x21573cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1728));
label_215740:
    // 0x215740: 0x8f8391b4  lw          $v1, -0x6E4C($gp)
    ctx->pc = 0x215740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939060)));
label_215744:
    // 0x215744: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x215744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_215748:
    // 0x215748: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x215748u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_21574c:
    // 0x21574c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_215750:
    if (ctx->pc == 0x215750u) {
        ctx->pc = 0x215750u;
            // 0x215750: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x215754u;
        goto label_215754;
    }
    ctx->pc = 0x21574Cu;
    {
        const bool branch_taken_0x21574c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x215750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21574Cu;
            // 0x215750: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21574c) {
            ctx->pc = 0x215768u;
            goto label_215768;
        }
    }
    ctx->pc = 0x215754u;
label_215754:
    // 0x215754: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x215754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_215758:
    // 0x215758: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_21575c:
    if (ctx->pc == 0x21575Cu) {
        ctx->pc = 0x21575Cu;
            // 0x21575c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x215760u;
        goto label_215760;
    }
    ctx->pc = 0x215758u;
    {
        const bool branch_taken_0x215758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21575Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215758u;
            // 0x21575c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215758) {
            ctx->pc = 0x215768u;
            goto label_215768;
        }
    }
    ctx->pc = 0x215760u;
label_215760:
    // 0x215760: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_215764:
    if (ctx->pc == 0x215764u) {
        ctx->pc = 0x215764u;
            // 0x215764: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x215768u;
        goto label_215768;
    }
    ctx->pc = 0x215760u;
    {
        const bool branch_taken_0x215760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x215764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215760u;
            // 0x215764: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215760) {
            ctx->pc = 0x215770u;
            goto label_215770;
        }
    }
    ctx->pc = 0x215768u;
label_215768:
    // 0x215768: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x215768u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21576c:
    // 0x21576c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21576cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215770:
    // 0x215770: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x215770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215774:
    // 0x215774: 0x12170076  beq         $s0, $s7, . + 4 + (0x76 << 2)
label_215778:
    if (ctx->pc == 0x215778u) {
        ctx->pc = 0x215778u;
            // 0x215778: 0x2921021  addu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->pc = 0x21577Cu;
        goto label_21577c;
    }
    ctx->pc = 0x215774u;
    {
        const bool branch_taken_0x215774 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 23));
        ctx->pc = 0x215778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215774u;
            // 0x215778: 0x2921021  addu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215774) {
            ctx->pc = 0x215950u;
            goto label_215950;
        }
    }
    ctx->pc = 0x21577Cu;
label_21577c:
    // 0x21577c: 0x8c4402b4  lw          $a0, 0x2B4($v0)
    ctx->pc = 0x21577cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_215780:
    // 0x215780: 0x10800073  beqz        $a0, . + 4 + (0x73 << 2)
label_215784:
    if (ctx->pc == 0x215784u) {
        ctx->pc = 0x215788u;
        goto label_215788;
    }
    ctx->pc = 0x215780u;
    {
        const bool branch_taken_0x215780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x215780) {
            ctx->pc = 0x215950u;
            goto label_215950;
        }
    }
    ctx->pc = 0x215788u;
label_215788:
    // 0x215788: 0xc48106a4  lwc1        $f1, 0x6A4($a0)
    ctx->pc = 0x215788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21578c:
    // 0x21578c: 0x3c023e85  lui         $v0, 0x3E85
    ctx->pc = 0x21578cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16005 << 16));
label_215790:
    // 0x215790: 0x34421eb8  ori         $v0, $v0, 0x1EB8
    ctx->pc = 0x215790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
label_215794:
    // 0x215794: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x215794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_215798:
    // 0x215798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21579c:
    // 0x21579c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x21579cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2157a0:
    // 0x2157a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2157a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2157a4:
    // 0x2157a4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2157a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2157a8:
    // 0x2157a8: 0x320f809  jalr        $t9
label_2157ac:
    if (ctx->pc == 0x2157ACu) {
        ctx->pc = 0x2157ACu;
            // 0x2157ac: 0x4600a540  add.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x2157B0u;
        goto label_2157b0;
    }
    ctx->pc = 0x2157A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2157B0u);
        ctx->pc = 0x2157ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2157A8u;
            // 0x2157ac: 0x4600a540  add.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2157B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2157B0u; }
            if (ctx->pc != 0x2157B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2157B0u;
label_2157b0:
    // 0x2157b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2157b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2157b4:
    // 0x2157b4: 0xc04c018  jal         func_130060
label_2157b8:
    if (ctx->pc == 0x2157B8u) {
        ctx->pc = 0x2157B8u;
            // 0x2157b8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2157BCu;
        goto label_2157bc;
    }
    ctx->pc = 0x2157B4u;
    SET_GPR_U32(ctx, 31, 0x2157BCu);
    ctx->pc = 0x2157B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2157B4u;
            // 0x2157b8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2157BCu; }
        if (ctx->pc != 0x2157BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2157BCu; }
        if (ctx->pc != 0x2157BCu) { return; }
    }
    ctx->pc = 0x2157BCu;
label_2157bc:
    // 0x2157bc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2157bcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2157c0:
    // 0x2157c0: 0x4615b034  c.lt.s      $f22, $f21
    ctx->pc = 0x2157c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2157c4:
    // 0x2157c4: 0x0  nop
    ctx->pc = 0x2157c4u;
    // NOP
label_2157c8:
    // 0x2157c8: 0x45000061  bc1f        . + 4 + (0x61 << 2)
label_2157cc:
    if (ctx->pc == 0x2157CCu) {
        ctx->pc = 0x2157CCu;
            // 0x2157cc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2157D0u;
        goto label_2157d0;
    }
    ctx->pc = 0x2157C8u;
    {
        const bool branch_taken_0x2157c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2157CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2157C8u;
            // 0x2157cc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2157c8) {
            ctx->pc = 0x215950u;
            goto label_215950;
        }
    }
    ctx->pc = 0x2157D0u;
label_2157d0:
    // 0x2157d0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2157d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2157d4:
    // 0x2157d4: 0xc041c3e  jal         func_1070F8
label_2157d8:
    if (ctx->pc == 0x2157D8u) {
        ctx->pc = 0x2157D8u;
            // 0x2157d8: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2157DCu;
        goto label_2157dc;
    }
    ctx->pc = 0x2157D4u;
    SET_GPR_U32(ctx, 31, 0x2157DCu);
    ctx->pc = 0x2157D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2157D4u;
            // 0x2157d8: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2157DCu; }
        if (ctx->pc != 0x2157DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2157DCu; }
        if (ctx->pc != 0x2157DCu) { return; }
    }
    ctx->pc = 0x2157DCu;
label_2157dc:
    // 0x2157dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2157dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2157e0:
    // 0x2157e0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2157e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2157e4:
    // 0x2157e4: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x2157e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_2157e8:
    // 0x2157e8: 0xc041be0  jal         func_106F80
label_2157ec:
    if (ctx->pc == 0x2157ECu) {
        ctx->pc = 0x2157ECu;
            // 0x2157ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2157F0u;
        goto label_2157f0;
    }
    ctx->pc = 0x2157E8u;
    SET_GPR_U32(ctx, 31, 0x2157F0u);
    ctx->pc = 0x2157ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2157E8u;
            // 0x2157ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2157F0u; }
        if (ctx->pc != 0x2157F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2157F0u; }
        if (ctx->pc != 0x2157F0u) { return; }
    }
    ctx->pc = 0x2157F0u;
label_2157f0:
    // 0x2157f0: 0xc7a200e0  lwc1        $f2, 0xE0($sp)
    ctx->pc = 0x2157f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2157f4:
    // 0x2157f4: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2157f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_2157f8:
    // 0x2157f8: 0x4616ad41  sub.s       $f21, $f21, $f22
    ctx->pc = 0x2157f8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
label_2157fc:
    // 0x2157fc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2157fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_215800:
    // 0x215800: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x215800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_215804:
    // 0x215804: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x215804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_215808:
    // 0x215808: 0xc6630670  lwc1        $f3, 0x670($s3)
    ctx->pc = 0x215808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21580c:
    // 0x21580c: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x21580cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_215810:
    // 0x215810: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x215810u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_215814:
    // 0x215814: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x215814u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_215818:
    // 0x215818: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x215818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21581c:
    // 0x21581c: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x21581cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_215820:
    // 0x215820: 0x26640670  addiu       $a0, $s3, 0x670
    ctx->pc = 0x215820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1648));
label_215824:
    // 0x215824: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x215824u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_215828:
    // 0x215828: 0xc6620674  lwc1        $f2, 0x674($s3)
    ctx->pc = 0x215828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21582c:
    // 0x21582c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x21582cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_215830:
    // 0x215830: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x215830u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_215834:
    // 0x215834: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x215834u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_215838:
    // 0x215838: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x215838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21583c:
    // 0x21583c: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x21583cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_215840:
    // 0x215840: 0xc6610678  lwc1        $f1, 0x678($s3)
    ctx->pc = 0x215840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215844:
    // 0x215844: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x215844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_215848:
    // 0x215848: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x215848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_21584c:
    // 0x21584c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x21584cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_215850:
    // 0x215850: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x215850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_215854:
    // 0x215854: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x215854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_215858:
    // 0x215858: 0xc041c4a  jal         func_107128
label_21585c:
    if (ctx->pc == 0x21585Cu) {
        ctx->pc = 0x21585Cu;
            // 0x21585c: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->pc = 0x215860u;
        goto label_215860;
    }
    ctx->pc = 0x215858u;
    SET_GPR_U32(ctx, 31, 0x215860u);
    ctx->pc = 0x21585Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215858u;
            // 0x21585c: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215860u; }
        if (ctx->pc != 0x215860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215860u; }
        if (ctx->pc != 0x215860u) { return; }
    }
    ctx->pc = 0x215860u;
label_215860:
    // 0x215860: 0x16c0003b  bnez        $s6, . + 4 + (0x3B << 2)
label_215864:
    if (ctx->pc == 0x215864u) {
        ctx->pc = 0x215868u;
        goto label_215868;
    }
    ctx->pc = 0x215860u;
    {
        const bool branch_taken_0x215860 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x215860) {
            ctx->pc = 0x215950u;
            goto label_215950;
        }
    }
    ctx->pc = 0x215868u;
label_215868:
    // 0x215868: 0x866306ae  lh          $v1, 0x6AE($s3)
    ctx->pc = 0x215868u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1710)));
label_21586c:
    // 0x21586c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x21586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_215870:
    // 0x215870: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_215874:
    if (ctx->pc == 0x215874u) {
        ctx->pc = 0x215874u;
            // 0x215874: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x215878u;
        goto label_215878;
    }
    ctx->pc = 0x215870u;
    {
        const bool branch_taken_0x215870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x215874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215870u;
            // 0x215874: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215870) {
            ctx->pc = 0x215880u;
            goto label_215880;
        }
    }
    ctx->pc = 0x215878u;
label_215878:
    // 0x215878: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_21587c:
    if (ctx->pc == 0x21587Cu) {
        ctx->pc = 0x215880u;
        goto label_215880;
    }
    ctx->pc = 0x215878u;
    {
        const bool branch_taken_0x215878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215878) {
            ctx->pc = 0x2158A0u;
            goto label_2158a0;
        }
    }
    ctx->pc = 0x215880u;
label_215880:
    // 0x215880: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x215880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_215884:
    // 0x215884: 0xc083584  jal         func_20D610
label_215888:
    if (ctx->pc == 0x215888u) {
        ctx->pc = 0x215888u;
            // 0x215888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21588Cu;
        goto label_21588c;
    }
    ctx->pc = 0x215884u;
    SET_GPR_U32(ctx, 31, 0x21588Cu);
    ctx->pc = 0x215888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215884u;
            // 0x215888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D610u;
    if (runtime->hasFunction(0x20D610u)) {
        auto targetFn = runtime->lookupFunction(0x20D610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21588Cu; }
        if (ctx->pc != 0x21588Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFatigue__9CAquaFishFi_0x20d610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21588Cu; }
        if (ctx->pc != 0x21588Cu) { return; }
    }
    ctx->pc = 0x21588Cu;
label_21588c:
    // 0x21588c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_215890:
    if (ctx->pc == 0x215890u) {
        ctx->pc = 0x215894u;
        goto label_215894;
    }
    ctx->pc = 0x21588Cu;
    {
        const bool branch_taken_0x21588c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21588c) {
            ctx->pc = 0x2158A0u;
            goto label_2158a0;
        }
    }
    ctx->pc = 0x215894u;
label_215894:
    // 0x215894: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x215894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_215898:
    // 0x215898: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x215898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21589c:
    // 0x21589c: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x21589cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_2158a0:
    // 0x2158a0: 0x866306ae  lh          $v1, 0x6AE($s3)
    ctx->pc = 0x2158a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1710)));
label_2158a4:
    // 0x2158a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2158a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2158a8:
    // 0x2158a8: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_2158ac:
    if (ctx->pc == 0x2158ACu) {
        ctx->pc = 0x2158B0u;
        goto label_2158b0;
    }
    ctx->pc = 0x2158A8u;
    {
        const bool branch_taken_0x2158a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2158a8) {
            ctx->pc = 0x215908u;
            goto label_215908;
        }
    }
    ctx->pc = 0x2158B0u;
label_2158b0:
    // 0x2158b0: 0x8e640938  lw          $a0, 0x938($s3)
    ctx->pc = 0x2158b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2360)));
label_2158b4:
    // 0x2158b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2158b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2158b8:
    // 0x2158b8: 0xc065d30  jal         func_1974C0
label_2158bc:
    if (ctx->pc == 0x2158BCu) {
        ctx->pc = 0x2158BCu;
            // 0x2158bc: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->pc = 0x2158C0u;
        goto label_2158c0;
    }
    ctx->pc = 0x2158B8u;
    SET_GPR_U32(ctx, 31, 0x2158C0u);
    ctx->pc = 0x2158BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2158B8u;
            // 0x2158bc: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1974C0u;
    if (runtime->hasFunction(0x1974C0u)) {
        auto targetFn = runtime->lookupFunction(0x1974C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158C0u; }
        if (ctx->pc != 0x2158C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFishHp__13CGameDataUsedFi_0x1974c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158C0u; }
        if (ctx->pc != 0x2158C0u) { return; }
    }
    ctx->pc = 0x2158C0u;
label_2158c0:
    // 0x2158c0: 0xc0941b0  jal         func_2506C0
label_2158c4:
    if (ctx->pc == 0x2158C4u) {
        ctx->pc = 0x2158C4u;
            // 0x2158c4: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x2158C8u;
        goto label_2158c8;
    }
    ctx->pc = 0x2158C0u;
    SET_GPR_U32(ctx, 31, 0x2158C8u);
    ctx->pc = 0x2158C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2158C0u;
            // 0x2158c4: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158C8u; }
        if (ctx->pc != 0x2158C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158C8u; }
        if (ctx->pc != 0x2158C8u) { return; }
    }
    ctx->pc = 0x2158C8u;
label_2158c8:
    // 0x2158c8: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x2158c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_2158cc:
    // 0x2158cc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_2158d0:
    if (ctx->pc == 0x2158D0u) {
        ctx->pc = 0x2158D4u;
        goto label_2158d4;
    }
    ctx->pc = 0x2158CCu;
    {
        const bool branch_taken_0x2158cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2158cc) {
            ctx->pc = 0x2158E0u;
            goto label_2158e0;
        }
    }
    ctx->pc = 0x2158D4u;
label_2158d4:
    // 0x2158d4: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2158d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2158d8:
    // 0x2158d8: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x2158d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_2158dc:
    // 0x2158dc: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2158dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_2158e0:
    // 0x2158e0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2158e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2158e4:
    // 0x2158e4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2158e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2158e8:
    // 0x2158e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2158e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2158ec:
    // 0x2158ec: 0xc041c4a  jal         func_107128
label_2158f0:
    if (ctx->pc == 0x2158F0u) {
        ctx->pc = 0x2158F0u;
            // 0x2158f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2158F4u;
        goto label_2158f4;
    }
    ctx->pc = 0x2158ECu;
    SET_GPR_U32(ctx, 31, 0x2158F4u);
    ctx->pc = 0x2158F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2158ECu;
            // 0x2158f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158F4u; }
        if (ctx->pc != 0x2158F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158F4u; }
        if (ctx->pc != 0x2158F4u) { return; }
    }
    ctx->pc = 0x2158F4u;
label_2158f4:
    // 0x2158f4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2158f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2158f8:
    // 0x2158f8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2158f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2158fc:
    // 0x2158fc: 0x2484c470  addiu       $a0, $a0, -0x3B90
    ctx->pc = 0x2158fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952048));
label_215900:
    // 0x215900: 0xc041c38  jal         func_1070E0
label_215904:
    if (ctx->pc == 0x215904u) {
        ctx->pc = 0x215904u;
            // 0x215904: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x215908u;
        goto label_215908;
    }
    ctx->pc = 0x215900u;
    SET_GPR_U32(ctx, 31, 0x215908u);
    ctx->pc = 0x215904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215900u;
            // 0x215904: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215908u; }
        if (ctx->pc != 0x215908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215908u; }
        if (ctx->pc != 0x215908u) { return; }
    }
    ctx->pc = 0x215908u;
label_215908:
    // 0x215908: 0x8e620924  lw          $v0, 0x924($s3)
    ctx->pc = 0x215908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2340)));
label_21590c:
    // 0x21590c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x21590cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_215910:
    // 0x215910: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_215914:
    if (ctx->pc == 0x215914u) {
        ctx->pc = 0x215914u;
            // 0x215914: 0xae620924  sw          $v0, 0x924($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2340), GPR_U32(ctx, 2));
        ctx->pc = 0x215918u;
        goto label_215918;
    }
    ctx->pc = 0x215910u;
    {
        const bool branch_taken_0x215910 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x215914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215910u;
            // 0x215914: 0xae620924  sw          $v0, 0x924($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215910) {
            ctx->pc = 0x215950u;
            goto label_215950;
        }
    }
    ctx->pc = 0x215918u;
label_215918:
    // 0x215918: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x215918u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_21591c:
    // 0x21591c: 0x1450000c  bne         $v0, $s0, . + 4 + (0xC << 2)
label_215920:
    if (ctx->pc == 0x215920u) {
        ctx->pc = 0x215924u;
        goto label_215924;
    }
    ctx->pc = 0x21591Cu;
    {
        const bool branch_taken_0x21591c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x21591c) {
            ctx->pc = 0x215950u;
            goto label_215950;
        }
    }
    ctx->pc = 0x215924u;
label_215924:
    // 0x215924: 0x8e630924  lw          $v1, 0x924($s3)
    ctx->pc = 0x215924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2340)));
label_215928:
    // 0x215928: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x215928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_21592c:
    // 0x21592c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x21592cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_215930:
    // 0x215930: 0xae630924  sw          $v1, 0x924($s3)
    ctx->pc = 0x215930u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2340), GPR_U32(ctx, 3));
label_215934:
    // 0x215934: 0x866306ae  lh          $v1, 0x6AE($s3)
    ctx->pc = 0x215934u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1710)));
label_215938:
    // 0x215938: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_21593c:
    if (ctx->pc == 0x21593Cu) {
        ctx->pc = 0x215940u;
        goto label_215940;
    }
    ctx->pc = 0x215938u;
    {
        const bool branch_taken_0x215938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215938) {
            ctx->pc = 0x215950u;
            goto label_215950;
        }
    }
    ctx->pc = 0x215940u;
label_215940:
    // 0x215940: 0x866206c0  lh          $v0, 0x6C0($s3)
    ctx->pc = 0x215940u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1728)));
label_215944:
    // 0x215944: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_215948:
    if (ctx->pc == 0x215948u) {
        ctx->pc = 0x215948u;
            // 0x215948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21594Cu;
        goto label_21594c;
    }
    ctx->pc = 0x215944u;
    {
        const bool branch_taken_0x215944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215944u;
            // 0x215948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215944) {
            ctx->pc = 0x215950u;
            goto label_215950;
        }
    }
    ctx->pc = 0x21594Cu;
label_21594c:
    // 0x21594c: 0xa66206c0  sh          $v0, 0x6C0($s3)
    ctx->pc = 0x21594cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1728), (uint16_t)GPR_U32(ctx, 2));
label_215950:
    // 0x215950: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x215950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_215954:
    // 0x215954: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x215954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_215958:
    // 0x215958: 0x1440ff86  bnez        $v0, . + 4 + (-0x7A << 2)
label_21595c:
    if (ctx->pc == 0x21595Cu) {
        ctx->pc = 0x21595Cu;
            // 0x21595c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x215960u;
        goto label_215960;
    }
    ctx->pc = 0x215958u;
    {
        const bool branch_taken_0x215958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21595Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215958u;
            // 0x21595c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215958) {
            ctx->pc = 0x215774u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215774;
        }
    }
    ctx->pc = 0x215960u;
label_215960:
    // 0x215960: 0x8f83920c  lw          $v1, -0x6DF4($gp)
    ctx->pc = 0x215960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939148)));
label_215964:
    // 0x215964: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x215964u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
label_215968:
    // 0x215968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21596c:
    // 0x21596c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x21596cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_215970:
    // 0x215970: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_215974:
    if (ctx->pc == 0x215974u) {
        ctx->pc = 0x215974u;
            // 0x215974: 0x2610f4b0  addiu       $s0, $s0, -0xB50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964400));
        ctx->pc = 0x215978u;
        goto label_215978;
    }
    ctx->pc = 0x215970u;
    {
        const bool branch_taken_0x215970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x215974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215970u;
            // 0x215974: 0x2610f4b0  addiu       $s0, $s0, -0xB50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215970) {
            ctx->pc = 0x215980u;
            goto label_215980;
        }
    }
    ctx->pc = 0x215978u;
label_215978:
    // 0x215978: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x215978u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
label_21597c:
    // 0x21597c: 0x2610f5d0  addiu       $s0, $s0, -0xA30
    ctx->pc = 0x21597cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964688));
label_215980:
    // 0x215980: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x215980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_215984:
    // 0x215984: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_215988:
    if (ctx->pc == 0x215988u) {
        ctx->pc = 0x215988u;
            // 0x215988: 0x27828230  addiu       $v0, $gp, -0x7DD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935088));
        ctx->pc = 0x21598Cu;
        goto label_21598c;
    }
    ctx->pc = 0x215984u;
    {
        const bool branch_taken_0x215984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x215988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215984u;
            // 0x215988: 0x27828230  addiu       $v0, $gp, -0x7DD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215984) {
            ctx->pc = 0x215994u;
            goto label_215994;
        }
    }
    ctx->pc = 0x21598Cu;
label_21598c:
    // 0x21598c: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x21598cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
label_215990:
    // 0x215990: 0x2610f6f0  addiu       $s0, $s0, -0x910
    ctx->pc = 0x215990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964976));
label_215994:
    // 0x215994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x215994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_215998:
    // 0x215998: 0x80520000  lb          $s2, 0x0($v0)
    ctx->pc = 0x215998u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21599c:
    // 0x21599c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x21599cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2159a0:
    // 0x2159a0: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
label_2159a4:
    if (ctx->pc == 0x2159A4u) {
        ctx->pc = 0x2159A4u;
            // 0x2159a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2159A8u;
        goto label_2159a8;
    }
    ctx->pc = 0x2159A0u;
    {
        const bool branch_taken_0x2159a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2159A0u;
            // 0x2159a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159a0) {
            ctx->pc = 0x215A98u;
            goto label_215a98;
        }
    }
    ctx->pc = 0x2159A8u;
label_2159a8:
    // 0x2159a8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2159a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2159ac:
    // 0x2159ac: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2159acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2159b0:
    // 0x2159b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2159b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2159b4:
    // 0x2159b4: 0xc04c018  jal         func_130060
label_2159b8:
    if (ctx->pc == 0x2159B8u) {
        ctx->pc = 0x2159B8u;
            // 0x2159b8: 0x46140580  add.s       $f22, $f0, $f20 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x2159BCu;
        goto label_2159bc;
    }
    ctx->pc = 0x2159B4u;
    SET_GPR_U32(ctx, 31, 0x2159BCu);
    ctx->pc = 0x2159B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2159B4u;
            // 0x2159b8: 0x46140580  add.s       $f22, $f0, $f20 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159BCu; }
        if (ctx->pc != 0x2159BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159BCu; }
        if (ctx->pc != 0x2159BCu) { return; }
    }
    ctx->pc = 0x2159BCu;
label_2159bc:
    // 0x2159bc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2159bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2159c0:
    // 0x2159c0: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x2159c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2159c4:
    // 0x2159c4: 0x0  nop
    ctx->pc = 0x2159c4u;
    // NOP
label_2159c8:
    // 0x2159c8: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_2159cc:
    if (ctx->pc == 0x2159CCu) {
        ctx->pc = 0x2159CCu;
            // 0x2159cc: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x2159D0u;
        goto label_2159d0;
    }
    ctx->pc = 0x2159C8u;
    {
        const bool branch_taken_0x2159c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2159CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2159C8u;
            // 0x2159cc: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159c8) {
            ctx->pc = 0x215A88u;
            goto label_215a88;
        }
    }
    ctx->pc = 0x2159D0u;
label_2159d0:
    // 0x2159d0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2159d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2159d4:
    // 0x2159d4: 0xc041c3e  jal         func_1070F8
label_2159d8:
    if (ctx->pc == 0x2159D8u) {
        ctx->pc = 0x2159D8u;
            // 0x2159d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2159DCu;
        goto label_2159dc;
    }
    ctx->pc = 0x2159D4u;
    SET_GPR_U32(ctx, 31, 0x2159DCu);
    ctx->pc = 0x2159D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2159D4u;
            // 0x2159d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159DCu; }
        if (ctx->pc != 0x2159DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159DCu; }
        if (ctx->pc != 0x2159DCu) { return; }
    }
    ctx->pc = 0x2159DCu;
label_2159dc:
    // 0x2159dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2159dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2159e0:
    // 0x2159e0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2159e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2159e4:
    // 0x2159e4: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x2159e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_2159e8:
    // 0x2159e8: 0xc041be0  jal         func_106F80
label_2159ec:
    if (ctx->pc == 0x2159ECu) {
        ctx->pc = 0x2159ECu;
            // 0x2159ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2159F0u;
        goto label_2159f0;
    }
    ctx->pc = 0x2159E8u;
    SET_GPR_U32(ctx, 31, 0x2159F0u);
    ctx->pc = 0x2159ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2159E8u;
            // 0x2159ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159F0u; }
        if (ctx->pc != 0x2159F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159F0u; }
        if (ctx->pc != 0x2159F0u) { return; }
    }
    ctx->pc = 0x2159F0u;
label_2159f0:
    // 0x2159f0: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x2159f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2159f4:
    // 0x2159f4: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2159f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_2159f8:
    // 0x2159f8: 0x4615b581  sub.s       $f22, $f22, $f21
    ctx->pc = 0x2159f8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
label_2159fc:
    // 0x2159fc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2159fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_215a00:
    // 0x215a00: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x215a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_215a04:
    // 0x215a04: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x215a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_215a08:
    // 0x215a08: 0xc6630670  lwc1        $f3, 0x670($s3)
    ctx->pc = 0x215a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_215a0c:
    // 0x215a0c: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x215a0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
label_215a10:
    // 0x215a10: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x215a10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_215a14:
    // 0x215a14: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x215a14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_215a18:
    // 0x215a18: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x215a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215a1c:
    // 0x215a1c: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x215a1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_215a20:
    // 0x215a20: 0x26640670  addiu       $a0, $s3, 0x670
    ctx->pc = 0x215a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1648));
label_215a24:
    // 0x215a24: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x215a24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_215a28:
    // 0x215a28: 0xc6620674  lwc1        $f2, 0x674($s3)
    ctx->pc = 0x215a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_215a2c:
    // 0x215a2c: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x215a2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_215a30:
    // 0x215a30: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x215a30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_215a34:
    // 0x215a34: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x215a34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_215a38:
    // 0x215a38: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x215a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215a3c:
    // 0x215a3c: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x215a3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_215a40:
    // 0x215a40: 0xc6610678  lwc1        $f1, 0x678($s3)
    ctx->pc = 0x215a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215a44:
    // 0x215a44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x215a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_215a48:
    // 0x215a48: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x215a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_215a4c:
    // 0x215a4c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x215a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_215a50:
    // 0x215a50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x215a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_215a54:
    // 0x215a54: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x215a54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_215a58:
    // 0x215a58: 0xc041c4a  jal         func_107128
label_215a5c:
    if (ctx->pc == 0x215A5Cu) {
        ctx->pc = 0x215A5Cu;
            // 0x215a5c: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->pc = 0x215A60u;
        goto label_215a60;
    }
    ctx->pc = 0x215A58u;
    SET_GPR_U32(ctx, 31, 0x215A60u);
    ctx->pc = 0x215A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215A58u;
            // 0x215a5c: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A60u; }
        if (ctx->pc != 0x215A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A60u; }
        if (ctx->pc != 0x215A60u) { return; }
    }
    ctx->pc = 0x215A60u;
label_215a60:
    // 0x215a60: 0xc6600674  lwc1        $f0, 0x674($s3)
    ctx->pc = 0x215a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215a64:
    // 0x215a64: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x215a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
label_215a68:
    // 0x215a68: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x215a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_215a6c:
    // 0x215a6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x215a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_215a70:
    // 0x215a70: 0x0  nop
    ctx->pc = 0x215a70u;
    // NOP
label_215a74:
    // 0x215a74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x215a74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_215a78:
    // 0x215a78: 0xe6600674  swc1        $f0, 0x674($s3)
    ctx->pc = 0x215a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1652), bits); }
label_215a7c:
    // 0x215a7c: 0x8e620924  lw          $v0, 0x924($s3)
    ctx->pc = 0x215a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2340)));
label_215a80:
    // 0x215a80: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x215a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_215a84:
    // 0x215a84: 0xae620924  sw          $v0, 0x924($s3)
    ctx->pc = 0x215a84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2340), GPR_U32(ctx, 2));
label_215a88:
    // 0x215a88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x215a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_215a8c:
    // 0x215a8c: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x215a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_215a90:
    // 0x215a90: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
label_215a94:
    if (ctx->pc == 0x215A94u) {
        ctx->pc = 0x215A94u;
            // 0x215a94: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x215A98u;
        goto label_215a98;
    }
    ctx->pc = 0x215A90u;
    {
        const bool branch_taken_0x215a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215A90u;
            // 0x215a94: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a90) {
            ctx->pc = 0x2159A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2159a8;
        }
    }
    ctx->pc = 0x215A98u;
label_215a98:
    // 0x215a98: 0x8e840320  lw          $a0, 0x320($s4)
    ctx->pc = 0x215a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_215a9c:
    // 0x215a9c: 0x1080005b  beqz        $a0, . + 4 + (0x5B << 2)
label_215aa0:
    if (ctx->pc == 0x215AA0u) {
        ctx->pc = 0x215AA4u;
        goto label_215aa4;
    }
    ctx->pc = 0x215A9Cu;
    {
        const bool branch_taken_0x215a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x215a9c) {
            ctx->pc = 0x215C0Cu;
            goto label_215c0c;
        }
    }
    ctx->pc = 0x215AA4u;
label_215aa4:
    // 0x215aa4: 0x90830690  lbu         $v1, 0x690($a0)
    ctx->pc = 0x215aa4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1680)));
label_215aa8:
    // 0x215aa8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x215aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_215aac:
    // 0x215aac: 0x14620057  bne         $v1, $v0, . + 4 + (0x57 << 2)
label_215ab0:
    if (ctx->pc == 0x215AB0u) {
        ctx->pc = 0x215AB4u;
        goto label_215ab4;
    }
    ctx->pc = 0x215AACu;
    {
        const bool branch_taken_0x215aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215aac) {
            ctx->pc = 0x215C0Cu;
            goto label_215c0c;
        }
    }
    ctx->pc = 0x215AB4u;
label_215ab4:
    // 0x215ab4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x215ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_215ab8:
    // 0x215ab8: 0xc495010c  lwc1        $f21, 0x10C($a0)
    ctx->pc = 0x215ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_215abc:
    // 0x215abc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x215abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_215ac0:
    // 0x215ac0: 0x320f809  jalr        $t9
label_215ac4:
    if (ctx->pc == 0x215AC4u) {
        ctx->pc = 0x215AC4u;
            // 0x215ac4: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x215AC8u;
        goto label_215ac8;
    }
    ctx->pc = 0x215AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x215AC8u);
        ctx->pc = 0x215AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215AC0u;
            // 0x215ac4: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x215AC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x215AC8u; }
            if (ctx->pc != 0x215AC8u) { return; }
        }
        }
    }
    ctx->pc = 0x215AC8u;
label_215ac8:
    // 0x215ac8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x215ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_215acc:
    // 0x215acc: 0xc04c018  jal         func_130060
label_215ad0:
    if (ctx->pc == 0x215AD0u) {
        ctx->pc = 0x215AD0u;
            // 0x215ad0: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x215AD4u;
        goto label_215ad4;
    }
    ctx->pc = 0x215ACCu;
    SET_GPR_U32(ctx, 31, 0x215AD4u);
    ctx->pc = 0x215AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215ACCu;
            // 0x215ad0: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215AD4u; }
        if (ctx->pc != 0x215AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215AD4u; }
        if (ctx->pc != 0x215AD4u) { return; }
    }
    ctx->pc = 0x215AD4u;
label_215ad4:
    // 0x215ad4: 0x3c023f87  lui         $v0, 0x3F87
    ctx->pc = 0x215ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16263 << 16));
label_215ad8:
    // 0x215ad8: 0x3442ae14  ori         $v0, $v0, 0xAE14
    ctx->pc = 0x215ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44564);
label_215adc:
    // 0x215adc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x215adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_215ae0:
    // 0x215ae0: 0x0  nop
    ctx->pc = 0x215ae0u;
    // NOP
label_215ae4:
    // 0x215ae4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x215ae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_215ae8:
    // 0x215ae8: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x215ae8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_215aec:
    // 0x215aec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x215aecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_215af0:
    // 0x215af0: 0x0  nop
    ctx->pc = 0x215af0u;
    // NOP
label_215af4:
    // 0x215af4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_215af8:
    if (ctx->pc == 0x215AF8u) {
        ctx->pc = 0x215AF8u;
            // 0x215af8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x215AFCu;
        goto label_215afc;
    }
    ctx->pc = 0x215AF4u;
    {
        const bool branch_taken_0x215af4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215AF4u;
            // 0x215af8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215af4) {
            ctx->pc = 0x215B1Cu;
            goto label_215b1c;
        }
    }
    ctx->pc = 0x215AFCu;
label_215afc:
    // 0x215afc: 0x8e630924  lw          $v1, 0x924($s3)
    ctx->pc = 0x215afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2340)));
label_215b00:
    // 0x215b00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x215b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_215b04:
    // 0x215b04: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x215b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_215b08:
    // 0x215b08: 0xae630924  sw          $v1, 0x924($s3)
    ctx->pc = 0x215b08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2340), GPR_U32(ctx, 3));
label_215b0c:
    // 0x215b0c: 0x866306ae  lh          $v1, 0x6AE($s3)
    ctx->pc = 0x215b0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1710)));
label_215b10:
    // 0x215b10: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_215b14:
    if (ctx->pc == 0x215B14u) {
        ctx->pc = 0x215B18u;
        goto label_215b18;
    }
    ctx->pc = 0x215B10u;
    {
        const bool branch_taken_0x215b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215b10) {
            ctx->pc = 0x215B1Cu;
            goto label_215b1c;
        }
    }
    ctx->pc = 0x215B18u;
label_215b18:
    // 0x215b18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x215b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215b1c:
    // 0x215b1c: 0x1080003c  beqz        $a0, . + 4 + (0x3C << 2)
label_215b20:
    if (ctx->pc == 0x215B20u) {
        ctx->pc = 0x215B20u;
            // 0x215b20: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x215B24u;
        goto label_215b24;
    }
    ctx->pc = 0x215B1Cu;
    {
        const bool branch_taken_0x215b1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215B1Cu;
            // 0x215b20: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b1c) {
            ctx->pc = 0x215C10u;
            goto label_215c10;
        }
    }
    ctx->pc = 0x215B24u;
label_215b24:
    // 0x215b24: 0x8e820320  lw          $v0, 0x320($s4)
    ctx->pc = 0x215b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_215b28:
    // 0x215b28: 0x84420680  lh          $v0, 0x680($v0)
    ctx->pc = 0x215b28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1664)));
label_215b2c:
    // 0x215b2c: 0xc065af8  jal         func_196BE0
label_215b30:
    if (ctx->pc == 0x215B30u) {
        ctx->pc = 0x215B30u;
            // 0x215b30: 0xa6620920  sh          $v0, 0x920($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2336), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x215B34u;
        goto label_215b34;
    }
    ctx->pc = 0x215B2Cu;
    SET_GPR_U32(ctx, 31, 0x215B34u);
    ctx->pc = 0x215B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215B2Cu;
            // 0x215b30: 0xa6620920  sh          $v0, 0x920($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2336), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B34u; }
        if (ctx->pc != 0x215B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B34u; }
        if (ctx->pc != 0x215B34u) { return; }
    }
    ctx->pc = 0x215B34u;
label_215b34:
    // 0x215b34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_215b38:
    if (ctx->pc == 0x215B38u) {
        ctx->pc = 0x215B3Cu;
        goto label_215b3c;
    }
    ctx->pc = 0x215B34u;
    {
        const bool branch_taken_0x215b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215b34) {
            ctx->pc = 0x215B4Cu;
            goto label_215b4c;
        }
    }
    ctx->pc = 0x215B3Cu;
label_215b3c:
    // 0x215b3c: 0x86650920  lh          $a1, 0x920($s3)
    ctx->pc = 0x215b3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2336)));
label_215b40:
    // 0x215b40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x215b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_215b44:
    // 0x215b44: 0xc067a30  jal         func_19E8C0
label_215b48:
    if (ctx->pc == 0x215B48u) {
        ctx->pc = 0x215B48u;
            // 0x215b48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x215B4Cu;
        goto label_215b4c;
    }
    ctx->pc = 0x215B44u;
    SET_GPR_U32(ctx, 31, 0x215B4Cu);
    ctx->pc = 0x215B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215B44u;
            // 0x215b48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E8C0u;
    if (runtime->hasFunction(0x19E8C0u)) {
        auto targetFn = runtime->lookupFunction(0x19E8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B4Cu; }
        if (ctx->pc != 0x215B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem__16CUserDataManagerFii_0x19e8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B4Cu; }
        if (ctx->pc != 0x215B4Cu) { return; }
    }
    ctx->pc = 0x215B4Cu;
label_215b4c:
    // 0x215b4c: 0xae800320  sw          $zero, 0x320($s4)
    ctx->pc = 0x215b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 0));
label_215b50:
    // 0x215b50: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x215b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_215b54:
    // 0x215b54: 0x8c23c480  lw          $v1, -0x3B80($at)
    ctx->pc = 0x215b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952064)));
label_215b58:
    // 0x215b58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x215b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_215b5c:
    // 0x215b5c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x215b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_215b60:
    // 0x215b60: 0xa4600008  sh          $zero, 0x8($v1)
    ctx->pc = 0x215b60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 0));
label_215b64:
    // 0x215b64: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x215b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_215b68:
    // 0x215b68: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x215b68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_215b6c:
    // 0x215b6c: 0x8c23c484  lw          $v1, -0x3B7C($at)
    ctx->pc = 0x215b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952068)));
label_215b70:
    // 0x215b70: 0xa4600008  sh          $zero, 0x8($v1)
    ctx->pc = 0x215b70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 0));
label_215b74:
    // 0x215b74: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x215b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_215b78:
    // 0x215b78: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x215b78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_215b7c:
    // 0x215b7c: 0x8c23c488  lw          $v1, -0x3B78($at)
    ctx->pc = 0x215b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952072)));
label_215b80:
    // 0x215b80: 0xa4600008  sh          $zero, 0x8($v1)
    ctx->pc = 0x215b80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 0));
label_215b84:
    // 0x215b84: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x215b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_215b88:
    // 0x215b88: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x215b88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_215b8c:
    // 0x215b8c: 0x8c23c48c  lw          $v1, -0x3B74($at)
    ctx->pc = 0x215b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952076)));
label_215b90:
    // 0x215b90: 0xa4600008  sh          $zero, 0x8($v1)
    ctx->pc = 0x215b90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 0));
label_215b94:
    // 0x215b94: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x215b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_215b98:
    // 0x215b98: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x215b98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_215b9c:
    // 0x215b9c: 0x8c23c490  lw          $v1, -0x3B70($at)
    ctx->pc = 0x215b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952080)));
label_215ba0:
    // 0x215ba0: 0xa4600008  sh          $zero, 0x8($v1)
    ctx->pc = 0x215ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 0));
label_215ba4:
    // 0x215ba4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x215ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_215ba8:
    // 0x215ba8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x215ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_215bac:
    // 0x215bac: 0x8c23c494  lw          $v1, -0x3B6C($at)
    ctx->pc = 0x215bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952084)));
label_215bb0:
    // 0x215bb0: 0xa4600008  sh          $zero, 0x8($v1)
    ctx->pc = 0x215bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 0));
label_215bb4:
    // 0x215bb4: 0xc0941b0  jal         func_2506C0
label_215bb8:
    if (ctx->pc == 0x215BB8u) {
        ctx->pc = 0x215BB8u;
            // 0x215bb8: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x215BBCu;
        goto label_215bbc;
    }
    ctx->pc = 0x215BB4u;
    SET_GPR_U32(ctx, 31, 0x215BBCu);
    ctx->pc = 0x215BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215BB4u;
            // 0x215bb8: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215BBCu; }
        if (ctx->pc != 0x215BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215BBCu; }
        if (ctx->pc != 0x215BBCu) { return; }
    }
    ctx->pc = 0x215BBCu;
label_215bbc:
    // 0x215bbc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x215bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_215bc0:
    // 0x215bc0: 0x27838280  addiu       $v1, $gp, -0x7D80
    ctx->pc = 0x215bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935168));
label_215bc4:
    // 0x215bc4: 0x2484c480  addiu       $a0, $a0, -0x3B80
    ctx->pc = 0x215bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952064));
label_215bc8:
    // 0x215bc8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x215bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_215bcc:
    // 0x215bcc: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x215bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
label_215bd0:
    // 0x215bd0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x215bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_215bd4:
    // 0x215bd4: 0xc083bd4  jal         func_20EF50
label_215bd8:
    if (ctx->pc == 0x215BD8u) {
        ctx->pc = 0x215BD8u;
            // 0x215bd8: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x215BDCu;
        goto label_215bdc;
    }
    ctx->pc = 0x215BD4u;
    SET_GPR_U32(ctx, 31, 0x215BDCu);
    ctx->pc = 0x215BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215BD4u;
            // 0x215bd8: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20EF50u;
    if (runtime->hasFunction(0x20EF50u)) {
        auto targetFn = runtime->lookupFunction(0x20EF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215BDCu; }
        if (ctx->pc != 0x215BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartFishEffect__12CAquaFishEffFi_0x20ef50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215BDCu; }
        if (ctx->pc != 0x215BDCu) { return; }
    }
    ctx->pc = 0x215BDCu;
label_215bdc:
    // 0x215bdc: 0x86630920  lh          $v1, 0x920($s3)
    ctx->pc = 0x215bdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2336)));
label_215be0:
    // 0x215be0: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x215be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_215be4:
    // 0x215be4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_215be8:
    if (ctx->pc == 0x215BE8u) {
        ctx->pc = 0x215BECu;
        goto label_215bec;
    }
    ctx->pc = 0x215BE4u;
    {
        const bool branch_taken_0x215be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215be4) {
            ctx->pc = 0x215C0Cu;
            goto label_215c0c;
        }
    }
    ctx->pc = 0x215BECu;
label_215bec:
    // 0x215bec: 0xa697031a  sh          $s7, 0x31A($s4)
    ctx->pc = 0x215becu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 794), (uint16_t)GPR_U32(ctx, 23));
label_215bf0:
    // 0x215bf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x215bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215bf4:
    // 0x215bf4: 0x8e640938  lw          $a0, 0x938($s3)
    ctx->pc = 0x215bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2360)));
label_215bf8:
    // 0x215bf8: 0xc065dc0  jal         func_197700
label_215bfc:
    if (ctx->pc == 0x215BFCu) {
        ctx->pc = 0x215BFCu;
            // 0x215bfc: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->pc = 0x215C00u;
        goto label_215c00;
    }
    ctx->pc = 0x215BF8u;
    SET_GPR_U32(ctx, 31, 0x215C00u);
    ctx->pc = 0x215BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215BF8u;
            // 0x215bfc: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215C00u; }
        if (ctx->pc != 0x215C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215C00u; }
        if (ctx->pc != 0x215C00u) { return; }
    }
    ctx->pc = 0x215C00u;
label_215c00:
    // 0x215c00: 0x268402da  addiu       $a0, $s4, 0x2DA
    ctx->pc = 0x215c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 730));
label_215c04:
    // 0x215c04: 0xc04a3dc  jal         func_128F70
label_215c08:
    if (ctx->pc == 0x215C08u) {
        ctx->pc = 0x215C08u;
            // 0x215c08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x215C0Cu;
        goto label_215c0c;
    }
    ctx->pc = 0x215C04u;
    SET_GPR_U32(ctx, 31, 0x215C0Cu);
    ctx->pc = 0x215C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215C04u;
            // 0x215c08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215C0Cu; }
        if (ctx->pc != 0x215C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215C0Cu; }
        if (ctx->pc != 0x215C0Cu) { return; }
    }
    ctx->pc = 0x215C0Cu;
label_215c0c:
    // 0x215c0c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x215c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_215c10:
    // 0x215c10: 0x26660670  addiu       $a2, $s3, 0x670
    ctx->pc = 0x215c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1648));
label_215c14:
    // 0x215c14: 0xc041c38  jal         func_1070E0
label_215c18:
    if (ctx->pc == 0x215C18u) {
        ctx->pc = 0x215C18u;
            // 0x215c18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x215C1Cu;
        goto label_215c1c;
    }
    ctx->pc = 0x215C14u;
    SET_GPR_U32(ctx, 31, 0x215C1Cu);
    ctx->pc = 0x215C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215C14u;
            // 0x215c18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215C1Cu; }
        if (ctx->pc != 0x215C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215C1Cu; }
        if (ctx->pc != 0x215C1Cu) { return; }
    }
    ctx->pc = 0x215C1Cu;
label_215c1c:
    // 0x215c1c: 0x3c024019  lui         $v0, 0x4019
    ctx->pc = 0x215c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16409 << 16));
label_215c20:
    // 0x215c20: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x215c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_215c24:
    // 0x215c24: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x215c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_215c28:
    // 0x215c28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x215c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215c2c:
    // 0x215c2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x215c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_215c30:
    // 0x215c30: 0xc083258  jal         func_20C960
label_215c34:
    if (ctx->pc == 0x215C34u) {
        ctx->pc = 0x215C34u;
            // 0x215c34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x215C38u;
        goto label_215c38;
    }
    ctx->pc = 0x215C30u;
    SET_GPR_U32(ctx, 31, 0x215C38u);
    ctx->pc = 0x215C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215C30u;
            // 0x215c34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C960u;
    if (runtime->hasFunction(0x20C960u)) {
        auto targetFn = runtime->lookupFunction(0x20C960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215C38u; }
        if (ctx->pc != 0x215C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_aquarium_limmit_check__FPffif_0x20c960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215C38u; }
        if (ctx->pc != 0x215C38u) { return; }
    }
    ctx->pc = 0x215C38u;
label_215c38:
    // 0x215c38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_215c3c:
    if (ctx->pc == 0x215C3Cu) {
        ctx->pc = 0x215C40u;
        goto label_215c40;
    }
    ctx->pc = 0x215C38u;
    {
        const bool branch_taken_0x215c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215c38) {
            ctx->pc = 0x215C4Cu;
            goto label_215c4c;
        }
    }
    ctx->pc = 0x215C40u;
label_215c40:
    // 0x215c40: 0x8e620924  lw          $v0, 0x924($s3)
    ctx->pc = 0x215c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2340)));
label_215c44:
    // 0x215c44: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x215c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_215c48:
    // 0x215c48: 0xae620924  sw          $v0, 0x924($s3)
    ctx->pc = 0x215c48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2340), GPR_U32(ctx, 2));
label_215c4c:
    // 0x215c4c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x215c4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_215c50:
    // 0x215c50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x215c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_215c54:
    // 0x215c54: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x215c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_215c58:
    // 0x215c58: 0x320f809  jalr        $t9
label_215c5c:
    if (ctx->pc == 0x215C5Cu) {
        ctx->pc = 0x215C5Cu;
            // 0x215c5c: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x215C60u;
        goto label_215c60;
    }
    ctx->pc = 0x215C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x215C60u);
        ctx->pc = 0x215C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215C58u;
            // 0x215c5c: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x215C60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x215C60u; }
            if (ctx->pc != 0x215C60u) { return; }
        }
        }
    }
    ctx->pc = 0x215C60u;
label_215c60:
    // 0x215c60: 0xc6600694  lwc1        $f0, 0x694($s3)
    ctx->pc = 0x215c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215c64:
    // 0x215c64: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x215c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_215c68:
    // 0x215c68: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x215c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_215c6c:
    // 0x215c6c: 0x27b00114  addiu       $s0, $sp, 0x114
    ctx->pc = 0x215c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_215c70:
    // 0x215c70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x215c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_215c74:
    // 0x215c74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x215c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215c78:
    // 0x215c78: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x215c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_215c7c:
    // 0x215c7c: 0xc66d0684  lwc1        $f13, 0x684($s3)
    ctx->pc = 0x215c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_215c80:
    // 0x215c80: 0x46000b83  div.s       $f14, $f1, $f0
    ctx->pc = 0x215c80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_215c84:
    // 0x215c84: 0x0  nop
    ctx->pc = 0x215c84u;
    // NOP
label_215c88:
    // 0x215c88: 0x0  nop
    ctx->pc = 0x215c88u;
    // NOP
label_215c8c:
    // 0x215c8c: 0xc04c2d8  jal         func_130B60
label_215c90:
    if (ctx->pc == 0x215C90u) {
        ctx->pc = 0x215C94u;
        goto label_215c94;
    }
    ctx->pc = 0x215C8Cu;
    SET_GPR_U32(ctx, 31, 0x215C94u);
    ctx->pc = 0x130B60u;
    if (runtime->hasFunction(0x130B60u)) {
        auto targetFn = runtime->lookupFunction(0x130B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215C94u; }
        if (ctx->pc != 0x215C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleInterpolate__Ffffi_0x130b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215C94u; }
        if (ctx->pc != 0x215C94u) { return; }
    }
    ctx->pc = 0x215C94u;
label_215c94:
    // 0x215c94: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x215c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_215c98:
    // 0x215c98: 0xc7ac0110  lwc1        $f12, 0x110($sp)
    ctx->pc = 0x215c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_215c9c:
    // 0x215c9c: 0xc66d0680  lwc1        $f13, 0x680($s3)
    ctx->pc = 0x215c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_215ca0:
    // 0x215ca0: 0xc66e0690  lwc1        $f14, 0x690($s3)
    ctx->pc = 0x215ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_215ca4:
    // 0x215ca4: 0xc04c2d8  jal         func_130B60
label_215ca8:
    if (ctx->pc == 0x215CA8u) {
        ctx->pc = 0x215CA8u;
            // 0x215ca8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x215CACu;
        goto label_215cac;
    }
    ctx->pc = 0x215CA4u;
    SET_GPR_U32(ctx, 31, 0x215CACu);
    ctx->pc = 0x215CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215CA4u;
            // 0x215ca8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130B60u;
    if (runtime->hasFunction(0x130B60u)) {
        auto targetFn = runtime->lookupFunction(0x130B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215CACu; }
        if (ctx->pc != 0x215CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleInterpolate__Ffffi_0x130b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215CACu; }
        if (ctx->pc != 0x215CACu) { return; }
    }
    ctx->pc = 0x215CACu;
label_215cac:
    // 0x215cac: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x215cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_215cb0:
    // 0x215cb0: 0x3c023ea0  lui         $v0, 0x3EA0
    ctx->pc = 0x215cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16032 << 16));
label_215cb4:
    // 0x215cb4: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x215cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215cb8:
    // 0x215cb8: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x215cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
label_215cbc:
    // 0x215cbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x215cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_215cc0:
    // 0x215cc0: 0x0  nop
    ctx->pc = 0x215cc0u;
    // NOP
label_215cc4:
    // 0x215cc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x215cc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_215cc8:
    // 0x215cc8: 0x0  nop
    ctx->pc = 0x215cc8u;
    // NOP
label_215ccc:
    // 0x215ccc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_215cd0:
    if (ctx->pc == 0x215CD0u) {
        ctx->pc = 0x215CD4u;
        goto label_215cd4;
    }
    ctx->pc = 0x215CCCu;
    {
        const bool branch_taken_0x215ccc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215ccc) {
            ctx->pc = 0x215CD8u;
            goto label_215cd8;
        }
    }
    ctx->pc = 0x215CD4u;
label_215cd4:
    // 0x215cd4: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x215cd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_215cd8:
    // 0x215cd8: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x215cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215cdc:
    // 0x215cdc: 0x3c02bea0  lui         $v0, 0xBEA0
    ctx->pc = 0x215cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48800 << 16));
label_215ce0:
    // 0x215ce0: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x215ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
label_215ce4:
    // 0x215ce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x215ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_215ce8:
    // 0x215ce8: 0x0  nop
    ctx->pc = 0x215ce8u;
    // NOP
label_215cec:
    // 0x215cec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x215cecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_215cf0:
    // 0x215cf0: 0x0  nop
    ctx->pc = 0x215cf0u;
    // NOP
label_215cf4:
    // 0x215cf4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_215cf8:
    if (ctx->pc == 0x215CF8u) {
        ctx->pc = 0x215CFCu;
        goto label_215cfc;
    }
    ctx->pc = 0x215CF4u;
    {
        const bool branch_taken_0x215cf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215cf4) {
            ctx->pc = 0x215D00u;
            goto label_215d00;
        }
    }
    ctx->pc = 0x215CFCu;
label_215cfc:
    // 0x215cfc: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x215cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_215d00:
    // 0x215d00: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x215d00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_215d04:
    // 0x215d04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x215d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_215d08:
    // 0x215d08: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x215d08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_215d0c:
    // 0x215d0c: 0x320f809  jalr        $t9
label_215d10:
    if (ctx->pc == 0x215D10u) {
        ctx->pc = 0x215D10u;
            // 0x215d10: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x215D14u;
        goto label_215d14;
    }
    ctx->pc = 0x215D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x215D14u);
        ctx->pc = 0x215D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215D0Cu;
            // 0x215d10: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x215D14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x215D14u; }
            if (ctx->pc != 0x215D14u) { return; }
        }
        }
    }
    ctx->pc = 0x215D14u;
label_215d14:
    // 0x215d14: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x215d14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_215d18:
    // 0x215d18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x215d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_215d1c:
    // 0x215d1c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x215d1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_215d20:
    // 0x215d20: 0x320f809  jalr        $t9
label_215d24:
    if (ctx->pc == 0x215D24u) {
        ctx->pc = 0x215D24u;
            // 0x215d24: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x215D28u;
        goto label_215d28;
    }
    ctx->pc = 0x215D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x215D28u);
        ctx->pc = 0x215D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215D20u;
            // 0x215d24: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x215D28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x215D28u; }
            if (ctx->pc != 0x215D28u) { return; }
        }
        }
    }
    ctx->pc = 0x215D28u;
label_215d28:
    // 0x215d28: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x215d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_215d2c:
    // 0x215d2c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x215d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_215d30:
    // 0x215d30: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x215d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_215d34:
    // 0x215d34: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x215d34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_215d38:
    // 0x215d38: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x215d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_215d3c:
    // 0x215d3c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x215d3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_215d40:
    // 0x215d40: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x215d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_215d44:
    // 0x215d44: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x215d44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_215d48:
    // 0x215d48: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x215d48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_215d4c:
    // 0x215d4c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x215d4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_215d50:
    // 0x215d50: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x215d50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_215d54:
    // 0x215d54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x215d54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_215d58:
    // 0x215d58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x215d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_215d5c:
    // 0x215d5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x215d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_215d60:
    // 0x215d60: 0x3e00008  jr          $ra
label_215d64:
    if (ctx->pc == 0x215D64u) {
        ctx->pc = 0x215D64u;
            // 0x215d64: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x215D68u;
        goto label_fallthrough_0x215d60;
    }
    ctx->pc = 0x215D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215D60u;
            // 0x215d64: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x215d60:
    ctx->pc = 0x215D68u;
}
