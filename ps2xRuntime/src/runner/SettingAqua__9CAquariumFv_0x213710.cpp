#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SettingAqua__9CAquariumFv
// Address: 0x213710 - 0x214384
void SettingAqua__9CAquariumFv_0x213710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SettingAqua__9CAquariumFv_0x213710");
#endif

    switch (ctx->pc) {
        case 0x213710u: goto label_213710;
        case 0x213714u: goto label_213714;
        case 0x213718u: goto label_213718;
        case 0x21371cu: goto label_21371c;
        case 0x213720u: goto label_213720;
        case 0x213724u: goto label_213724;
        case 0x213728u: goto label_213728;
        case 0x21372cu: goto label_21372c;
        case 0x213730u: goto label_213730;
        case 0x213734u: goto label_213734;
        case 0x213738u: goto label_213738;
        case 0x21373cu: goto label_21373c;
        case 0x213740u: goto label_213740;
        case 0x213744u: goto label_213744;
        case 0x213748u: goto label_213748;
        case 0x21374cu: goto label_21374c;
        case 0x213750u: goto label_213750;
        case 0x213754u: goto label_213754;
        case 0x213758u: goto label_213758;
        case 0x21375cu: goto label_21375c;
        case 0x213760u: goto label_213760;
        case 0x213764u: goto label_213764;
        case 0x213768u: goto label_213768;
        case 0x21376cu: goto label_21376c;
        case 0x213770u: goto label_213770;
        case 0x213774u: goto label_213774;
        case 0x213778u: goto label_213778;
        case 0x21377cu: goto label_21377c;
        case 0x213780u: goto label_213780;
        case 0x213784u: goto label_213784;
        case 0x213788u: goto label_213788;
        case 0x21378cu: goto label_21378c;
        case 0x213790u: goto label_213790;
        case 0x213794u: goto label_213794;
        case 0x213798u: goto label_213798;
        case 0x21379cu: goto label_21379c;
        case 0x2137a0u: goto label_2137a0;
        case 0x2137a4u: goto label_2137a4;
        case 0x2137a8u: goto label_2137a8;
        case 0x2137acu: goto label_2137ac;
        case 0x2137b0u: goto label_2137b0;
        case 0x2137b4u: goto label_2137b4;
        case 0x2137b8u: goto label_2137b8;
        case 0x2137bcu: goto label_2137bc;
        case 0x2137c0u: goto label_2137c0;
        case 0x2137c4u: goto label_2137c4;
        case 0x2137c8u: goto label_2137c8;
        case 0x2137ccu: goto label_2137cc;
        case 0x2137d0u: goto label_2137d0;
        case 0x2137d4u: goto label_2137d4;
        case 0x2137d8u: goto label_2137d8;
        case 0x2137dcu: goto label_2137dc;
        case 0x2137e0u: goto label_2137e0;
        case 0x2137e4u: goto label_2137e4;
        case 0x2137e8u: goto label_2137e8;
        case 0x2137ecu: goto label_2137ec;
        case 0x2137f0u: goto label_2137f0;
        case 0x2137f4u: goto label_2137f4;
        case 0x2137f8u: goto label_2137f8;
        case 0x2137fcu: goto label_2137fc;
        case 0x213800u: goto label_213800;
        case 0x213804u: goto label_213804;
        case 0x213808u: goto label_213808;
        case 0x21380cu: goto label_21380c;
        case 0x213810u: goto label_213810;
        case 0x213814u: goto label_213814;
        case 0x213818u: goto label_213818;
        case 0x21381cu: goto label_21381c;
        case 0x213820u: goto label_213820;
        case 0x213824u: goto label_213824;
        case 0x213828u: goto label_213828;
        case 0x21382cu: goto label_21382c;
        case 0x213830u: goto label_213830;
        case 0x213834u: goto label_213834;
        case 0x213838u: goto label_213838;
        case 0x21383cu: goto label_21383c;
        case 0x213840u: goto label_213840;
        case 0x213844u: goto label_213844;
        case 0x213848u: goto label_213848;
        case 0x21384cu: goto label_21384c;
        case 0x213850u: goto label_213850;
        case 0x213854u: goto label_213854;
        case 0x213858u: goto label_213858;
        case 0x21385cu: goto label_21385c;
        case 0x213860u: goto label_213860;
        case 0x213864u: goto label_213864;
        case 0x213868u: goto label_213868;
        case 0x21386cu: goto label_21386c;
        case 0x213870u: goto label_213870;
        case 0x213874u: goto label_213874;
        case 0x213878u: goto label_213878;
        case 0x21387cu: goto label_21387c;
        case 0x213880u: goto label_213880;
        case 0x213884u: goto label_213884;
        case 0x213888u: goto label_213888;
        case 0x21388cu: goto label_21388c;
        case 0x213890u: goto label_213890;
        case 0x213894u: goto label_213894;
        case 0x213898u: goto label_213898;
        case 0x21389cu: goto label_21389c;
        case 0x2138a0u: goto label_2138a0;
        case 0x2138a4u: goto label_2138a4;
        case 0x2138a8u: goto label_2138a8;
        case 0x2138acu: goto label_2138ac;
        case 0x2138b0u: goto label_2138b0;
        case 0x2138b4u: goto label_2138b4;
        case 0x2138b8u: goto label_2138b8;
        case 0x2138bcu: goto label_2138bc;
        case 0x2138c0u: goto label_2138c0;
        case 0x2138c4u: goto label_2138c4;
        case 0x2138c8u: goto label_2138c8;
        case 0x2138ccu: goto label_2138cc;
        case 0x2138d0u: goto label_2138d0;
        case 0x2138d4u: goto label_2138d4;
        case 0x2138d8u: goto label_2138d8;
        case 0x2138dcu: goto label_2138dc;
        case 0x2138e0u: goto label_2138e0;
        case 0x2138e4u: goto label_2138e4;
        case 0x2138e8u: goto label_2138e8;
        case 0x2138ecu: goto label_2138ec;
        case 0x2138f0u: goto label_2138f0;
        case 0x2138f4u: goto label_2138f4;
        case 0x2138f8u: goto label_2138f8;
        case 0x2138fcu: goto label_2138fc;
        case 0x213900u: goto label_213900;
        case 0x213904u: goto label_213904;
        case 0x213908u: goto label_213908;
        case 0x21390cu: goto label_21390c;
        case 0x213910u: goto label_213910;
        case 0x213914u: goto label_213914;
        case 0x213918u: goto label_213918;
        case 0x21391cu: goto label_21391c;
        case 0x213920u: goto label_213920;
        case 0x213924u: goto label_213924;
        case 0x213928u: goto label_213928;
        case 0x21392cu: goto label_21392c;
        case 0x213930u: goto label_213930;
        case 0x213934u: goto label_213934;
        case 0x213938u: goto label_213938;
        case 0x21393cu: goto label_21393c;
        case 0x213940u: goto label_213940;
        case 0x213944u: goto label_213944;
        case 0x213948u: goto label_213948;
        case 0x21394cu: goto label_21394c;
        case 0x213950u: goto label_213950;
        case 0x213954u: goto label_213954;
        case 0x213958u: goto label_213958;
        case 0x21395cu: goto label_21395c;
        case 0x213960u: goto label_213960;
        case 0x213964u: goto label_213964;
        case 0x213968u: goto label_213968;
        case 0x21396cu: goto label_21396c;
        case 0x213970u: goto label_213970;
        case 0x213974u: goto label_213974;
        case 0x213978u: goto label_213978;
        case 0x21397cu: goto label_21397c;
        case 0x213980u: goto label_213980;
        case 0x213984u: goto label_213984;
        case 0x213988u: goto label_213988;
        case 0x21398cu: goto label_21398c;
        case 0x213990u: goto label_213990;
        case 0x213994u: goto label_213994;
        case 0x213998u: goto label_213998;
        case 0x21399cu: goto label_21399c;
        case 0x2139a0u: goto label_2139a0;
        case 0x2139a4u: goto label_2139a4;
        case 0x2139a8u: goto label_2139a8;
        case 0x2139acu: goto label_2139ac;
        case 0x2139b0u: goto label_2139b0;
        case 0x2139b4u: goto label_2139b4;
        case 0x2139b8u: goto label_2139b8;
        case 0x2139bcu: goto label_2139bc;
        case 0x2139c0u: goto label_2139c0;
        case 0x2139c4u: goto label_2139c4;
        case 0x2139c8u: goto label_2139c8;
        case 0x2139ccu: goto label_2139cc;
        case 0x2139d0u: goto label_2139d0;
        case 0x2139d4u: goto label_2139d4;
        case 0x2139d8u: goto label_2139d8;
        case 0x2139dcu: goto label_2139dc;
        case 0x2139e0u: goto label_2139e0;
        case 0x2139e4u: goto label_2139e4;
        case 0x2139e8u: goto label_2139e8;
        case 0x2139ecu: goto label_2139ec;
        case 0x2139f0u: goto label_2139f0;
        case 0x2139f4u: goto label_2139f4;
        case 0x2139f8u: goto label_2139f8;
        case 0x2139fcu: goto label_2139fc;
        case 0x213a00u: goto label_213a00;
        case 0x213a04u: goto label_213a04;
        case 0x213a08u: goto label_213a08;
        case 0x213a0cu: goto label_213a0c;
        case 0x213a10u: goto label_213a10;
        case 0x213a14u: goto label_213a14;
        case 0x213a18u: goto label_213a18;
        case 0x213a1cu: goto label_213a1c;
        case 0x213a20u: goto label_213a20;
        case 0x213a24u: goto label_213a24;
        case 0x213a28u: goto label_213a28;
        case 0x213a2cu: goto label_213a2c;
        case 0x213a30u: goto label_213a30;
        case 0x213a34u: goto label_213a34;
        case 0x213a38u: goto label_213a38;
        case 0x213a3cu: goto label_213a3c;
        case 0x213a40u: goto label_213a40;
        case 0x213a44u: goto label_213a44;
        case 0x213a48u: goto label_213a48;
        case 0x213a4cu: goto label_213a4c;
        case 0x213a50u: goto label_213a50;
        case 0x213a54u: goto label_213a54;
        case 0x213a58u: goto label_213a58;
        case 0x213a5cu: goto label_213a5c;
        case 0x213a60u: goto label_213a60;
        case 0x213a64u: goto label_213a64;
        case 0x213a68u: goto label_213a68;
        case 0x213a6cu: goto label_213a6c;
        case 0x213a70u: goto label_213a70;
        case 0x213a74u: goto label_213a74;
        case 0x213a78u: goto label_213a78;
        case 0x213a7cu: goto label_213a7c;
        case 0x213a80u: goto label_213a80;
        case 0x213a84u: goto label_213a84;
        case 0x213a88u: goto label_213a88;
        case 0x213a8cu: goto label_213a8c;
        case 0x213a90u: goto label_213a90;
        case 0x213a94u: goto label_213a94;
        case 0x213a98u: goto label_213a98;
        case 0x213a9cu: goto label_213a9c;
        case 0x213aa0u: goto label_213aa0;
        case 0x213aa4u: goto label_213aa4;
        case 0x213aa8u: goto label_213aa8;
        case 0x213aacu: goto label_213aac;
        case 0x213ab0u: goto label_213ab0;
        case 0x213ab4u: goto label_213ab4;
        case 0x213ab8u: goto label_213ab8;
        case 0x213abcu: goto label_213abc;
        case 0x213ac0u: goto label_213ac0;
        case 0x213ac4u: goto label_213ac4;
        case 0x213ac8u: goto label_213ac8;
        case 0x213accu: goto label_213acc;
        case 0x213ad0u: goto label_213ad0;
        case 0x213ad4u: goto label_213ad4;
        case 0x213ad8u: goto label_213ad8;
        case 0x213adcu: goto label_213adc;
        case 0x213ae0u: goto label_213ae0;
        case 0x213ae4u: goto label_213ae4;
        case 0x213ae8u: goto label_213ae8;
        case 0x213aecu: goto label_213aec;
        case 0x213af0u: goto label_213af0;
        case 0x213af4u: goto label_213af4;
        case 0x213af8u: goto label_213af8;
        case 0x213afcu: goto label_213afc;
        case 0x213b00u: goto label_213b00;
        case 0x213b04u: goto label_213b04;
        case 0x213b08u: goto label_213b08;
        case 0x213b0cu: goto label_213b0c;
        case 0x213b10u: goto label_213b10;
        case 0x213b14u: goto label_213b14;
        case 0x213b18u: goto label_213b18;
        case 0x213b1cu: goto label_213b1c;
        case 0x213b20u: goto label_213b20;
        case 0x213b24u: goto label_213b24;
        case 0x213b28u: goto label_213b28;
        case 0x213b2cu: goto label_213b2c;
        case 0x213b30u: goto label_213b30;
        case 0x213b34u: goto label_213b34;
        case 0x213b38u: goto label_213b38;
        case 0x213b3cu: goto label_213b3c;
        case 0x213b40u: goto label_213b40;
        case 0x213b44u: goto label_213b44;
        case 0x213b48u: goto label_213b48;
        case 0x213b4cu: goto label_213b4c;
        case 0x213b50u: goto label_213b50;
        case 0x213b54u: goto label_213b54;
        case 0x213b58u: goto label_213b58;
        case 0x213b5cu: goto label_213b5c;
        case 0x213b60u: goto label_213b60;
        case 0x213b64u: goto label_213b64;
        case 0x213b68u: goto label_213b68;
        case 0x213b6cu: goto label_213b6c;
        case 0x213b70u: goto label_213b70;
        case 0x213b74u: goto label_213b74;
        case 0x213b78u: goto label_213b78;
        case 0x213b7cu: goto label_213b7c;
        case 0x213b80u: goto label_213b80;
        case 0x213b84u: goto label_213b84;
        case 0x213b88u: goto label_213b88;
        case 0x213b8cu: goto label_213b8c;
        case 0x213b90u: goto label_213b90;
        case 0x213b94u: goto label_213b94;
        case 0x213b98u: goto label_213b98;
        case 0x213b9cu: goto label_213b9c;
        case 0x213ba0u: goto label_213ba0;
        case 0x213ba4u: goto label_213ba4;
        case 0x213ba8u: goto label_213ba8;
        case 0x213bacu: goto label_213bac;
        case 0x213bb0u: goto label_213bb0;
        case 0x213bb4u: goto label_213bb4;
        case 0x213bb8u: goto label_213bb8;
        case 0x213bbcu: goto label_213bbc;
        case 0x213bc0u: goto label_213bc0;
        case 0x213bc4u: goto label_213bc4;
        case 0x213bc8u: goto label_213bc8;
        case 0x213bccu: goto label_213bcc;
        case 0x213bd0u: goto label_213bd0;
        case 0x213bd4u: goto label_213bd4;
        case 0x213bd8u: goto label_213bd8;
        case 0x213bdcu: goto label_213bdc;
        case 0x213be0u: goto label_213be0;
        case 0x213be4u: goto label_213be4;
        case 0x213be8u: goto label_213be8;
        case 0x213becu: goto label_213bec;
        case 0x213bf0u: goto label_213bf0;
        case 0x213bf4u: goto label_213bf4;
        case 0x213bf8u: goto label_213bf8;
        case 0x213bfcu: goto label_213bfc;
        case 0x213c00u: goto label_213c00;
        case 0x213c04u: goto label_213c04;
        case 0x213c08u: goto label_213c08;
        case 0x213c0cu: goto label_213c0c;
        case 0x213c10u: goto label_213c10;
        case 0x213c14u: goto label_213c14;
        case 0x213c18u: goto label_213c18;
        case 0x213c1cu: goto label_213c1c;
        case 0x213c20u: goto label_213c20;
        case 0x213c24u: goto label_213c24;
        case 0x213c28u: goto label_213c28;
        case 0x213c2cu: goto label_213c2c;
        case 0x213c30u: goto label_213c30;
        case 0x213c34u: goto label_213c34;
        case 0x213c38u: goto label_213c38;
        case 0x213c3cu: goto label_213c3c;
        case 0x213c40u: goto label_213c40;
        case 0x213c44u: goto label_213c44;
        case 0x213c48u: goto label_213c48;
        case 0x213c4cu: goto label_213c4c;
        case 0x213c50u: goto label_213c50;
        case 0x213c54u: goto label_213c54;
        case 0x213c58u: goto label_213c58;
        case 0x213c5cu: goto label_213c5c;
        case 0x213c60u: goto label_213c60;
        case 0x213c64u: goto label_213c64;
        case 0x213c68u: goto label_213c68;
        case 0x213c6cu: goto label_213c6c;
        case 0x213c70u: goto label_213c70;
        case 0x213c74u: goto label_213c74;
        case 0x213c78u: goto label_213c78;
        case 0x213c7cu: goto label_213c7c;
        case 0x213c80u: goto label_213c80;
        case 0x213c84u: goto label_213c84;
        case 0x213c88u: goto label_213c88;
        case 0x213c8cu: goto label_213c8c;
        case 0x213c90u: goto label_213c90;
        case 0x213c94u: goto label_213c94;
        case 0x213c98u: goto label_213c98;
        case 0x213c9cu: goto label_213c9c;
        case 0x213ca0u: goto label_213ca0;
        case 0x213ca4u: goto label_213ca4;
        case 0x213ca8u: goto label_213ca8;
        case 0x213cacu: goto label_213cac;
        case 0x213cb0u: goto label_213cb0;
        case 0x213cb4u: goto label_213cb4;
        case 0x213cb8u: goto label_213cb8;
        case 0x213cbcu: goto label_213cbc;
        case 0x213cc0u: goto label_213cc0;
        case 0x213cc4u: goto label_213cc4;
        case 0x213cc8u: goto label_213cc8;
        case 0x213cccu: goto label_213ccc;
        case 0x213cd0u: goto label_213cd0;
        case 0x213cd4u: goto label_213cd4;
        case 0x213cd8u: goto label_213cd8;
        case 0x213cdcu: goto label_213cdc;
        case 0x213ce0u: goto label_213ce0;
        case 0x213ce4u: goto label_213ce4;
        case 0x213ce8u: goto label_213ce8;
        case 0x213cecu: goto label_213cec;
        case 0x213cf0u: goto label_213cf0;
        case 0x213cf4u: goto label_213cf4;
        case 0x213cf8u: goto label_213cf8;
        case 0x213cfcu: goto label_213cfc;
        case 0x213d00u: goto label_213d00;
        case 0x213d04u: goto label_213d04;
        case 0x213d08u: goto label_213d08;
        case 0x213d0cu: goto label_213d0c;
        case 0x213d10u: goto label_213d10;
        case 0x213d14u: goto label_213d14;
        case 0x213d18u: goto label_213d18;
        case 0x213d1cu: goto label_213d1c;
        case 0x213d20u: goto label_213d20;
        case 0x213d24u: goto label_213d24;
        case 0x213d28u: goto label_213d28;
        case 0x213d2cu: goto label_213d2c;
        case 0x213d30u: goto label_213d30;
        case 0x213d34u: goto label_213d34;
        case 0x213d38u: goto label_213d38;
        case 0x213d3cu: goto label_213d3c;
        case 0x213d40u: goto label_213d40;
        case 0x213d44u: goto label_213d44;
        case 0x213d48u: goto label_213d48;
        case 0x213d4cu: goto label_213d4c;
        case 0x213d50u: goto label_213d50;
        case 0x213d54u: goto label_213d54;
        case 0x213d58u: goto label_213d58;
        case 0x213d5cu: goto label_213d5c;
        case 0x213d60u: goto label_213d60;
        case 0x213d64u: goto label_213d64;
        case 0x213d68u: goto label_213d68;
        case 0x213d6cu: goto label_213d6c;
        case 0x213d70u: goto label_213d70;
        case 0x213d74u: goto label_213d74;
        case 0x213d78u: goto label_213d78;
        case 0x213d7cu: goto label_213d7c;
        case 0x213d80u: goto label_213d80;
        case 0x213d84u: goto label_213d84;
        case 0x213d88u: goto label_213d88;
        case 0x213d8cu: goto label_213d8c;
        case 0x213d90u: goto label_213d90;
        case 0x213d94u: goto label_213d94;
        case 0x213d98u: goto label_213d98;
        case 0x213d9cu: goto label_213d9c;
        case 0x213da0u: goto label_213da0;
        case 0x213da4u: goto label_213da4;
        case 0x213da8u: goto label_213da8;
        case 0x213dacu: goto label_213dac;
        case 0x213db0u: goto label_213db0;
        case 0x213db4u: goto label_213db4;
        case 0x213db8u: goto label_213db8;
        case 0x213dbcu: goto label_213dbc;
        case 0x213dc0u: goto label_213dc0;
        case 0x213dc4u: goto label_213dc4;
        case 0x213dc8u: goto label_213dc8;
        case 0x213dccu: goto label_213dcc;
        case 0x213dd0u: goto label_213dd0;
        case 0x213dd4u: goto label_213dd4;
        case 0x213dd8u: goto label_213dd8;
        case 0x213ddcu: goto label_213ddc;
        case 0x213de0u: goto label_213de0;
        case 0x213de4u: goto label_213de4;
        case 0x213de8u: goto label_213de8;
        case 0x213decu: goto label_213dec;
        case 0x213df0u: goto label_213df0;
        case 0x213df4u: goto label_213df4;
        case 0x213df8u: goto label_213df8;
        case 0x213dfcu: goto label_213dfc;
        case 0x213e00u: goto label_213e00;
        case 0x213e04u: goto label_213e04;
        case 0x213e08u: goto label_213e08;
        case 0x213e0cu: goto label_213e0c;
        case 0x213e10u: goto label_213e10;
        case 0x213e14u: goto label_213e14;
        case 0x213e18u: goto label_213e18;
        case 0x213e1cu: goto label_213e1c;
        case 0x213e20u: goto label_213e20;
        case 0x213e24u: goto label_213e24;
        case 0x213e28u: goto label_213e28;
        case 0x213e2cu: goto label_213e2c;
        case 0x213e30u: goto label_213e30;
        case 0x213e34u: goto label_213e34;
        case 0x213e38u: goto label_213e38;
        case 0x213e3cu: goto label_213e3c;
        case 0x213e40u: goto label_213e40;
        case 0x213e44u: goto label_213e44;
        case 0x213e48u: goto label_213e48;
        case 0x213e4cu: goto label_213e4c;
        case 0x213e50u: goto label_213e50;
        case 0x213e54u: goto label_213e54;
        case 0x213e58u: goto label_213e58;
        case 0x213e5cu: goto label_213e5c;
        case 0x213e60u: goto label_213e60;
        case 0x213e64u: goto label_213e64;
        case 0x213e68u: goto label_213e68;
        case 0x213e6cu: goto label_213e6c;
        case 0x213e70u: goto label_213e70;
        case 0x213e74u: goto label_213e74;
        case 0x213e78u: goto label_213e78;
        case 0x213e7cu: goto label_213e7c;
        case 0x213e80u: goto label_213e80;
        case 0x213e84u: goto label_213e84;
        case 0x213e88u: goto label_213e88;
        case 0x213e8cu: goto label_213e8c;
        case 0x213e90u: goto label_213e90;
        case 0x213e94u: goto label_213e94;
        case 0x213e98u: goto label_213e98;
        case 0x213e9cu: goto label_213e9c;
        case 0x213ea0u: goto label_213ea0;
        case 0x213ea4u: goto label_213ea4;
        case 0x213ea8u: goto label_213ea8;
        case 0x213eacu: goto label_213eac;
        case 0x213eb0u: goto label_213eb0;
        case 0x213eb4u: goto label_213eb4;
        case 0x213eb8u: goto label_213eb8;
        case 0x213ebcu: goto label_213ebc;
        case 0x213ec0u: goto label_213ec0;
        case 0x213ec4u: goto label_213ec4;
        case 0x213ec8u: goto label_213ec8;
        case 0x213eccu: goto label_213ecc;
        case 0x213ed0u: goto label_213ed0;
        case 0x213ed4u: goto label_213ed4;
        case 0x213ed8u: goto label_213ed8;
        case 0x213edcu: goto label_213edc;
        case 0x213ee0u: goto label_213ee0;
        case 0x213ee4u: goto label_213ee4;
        case 0x213ee8u: goto label_213ee8;
        case 0x213eecu: goto label_213eec;
        case 0x213ef0u: goto label_213ef0;
        case 0x213ef4u: goto label_213ef4;
        case 0x213ef8u: goto label_213ef8;
        case 0x213efcu: goto label_213efc;
        case 0x213f00u: goto label_213f00;
        case 0x213f04u: goto label_213f04;
        case 0x213f08u: goto label_213f08;
        case 0x213f0cu: goto label_213f0c;
        case 0x213f10u: goto label_213f10;
        case 0x213f14u: goto label_213f14;
        case 0x213f18u: goto label_213f18;
        case 0x213f1cu: goto label_213f1c;
        case 0x213f20u: goto label_213f20;
        case 0x213f24u: goto label_213f24;
        case 0x213f28u: goto label_213f28;
        case 0x213f2cu: goto label_213f2c;
        case 0x213f30u: goto label_213f30;
        case 0x213f34u: goto label_213f34;
        case 0x213f38u: goto label_213f38;
        case 0x213f3cu: goto label_213f3c;
        case 0x213f40u: goto label_213f40;
        case 0x213f44u: goto label_213f44;
        case 0x213f48u: goto label_213f48;
        case 0x213f4cu: goto label_213f4c;
        case 0x213f50u: goto label_213f50;
        case 0x213f54u: goto label_213f54;
        case 0x213f58u: goto label_213f58;
        case 0x213f5cu: goto label_213f5c;
        case 0x213f60u: goto label_213f60;
        case 0x213f64u: goto label_213f64;
        case 0x213f68u: goto label_213f68;
        case 0x213f6cu: goto label_213f6c;
        case 0x213f70u: goto label_213f70;
        case 0x213f74u: goto label_213f74;
        case 0x213f78u: goto label_213f78;
        case 0x213f7cu: goto label_213f7c;
        case 0x213f80u: goto label_213f80;
        case 0x213f84u: goto label_213f84;
        case 0x213f88u: goto label_213f88;
        case 0x213f8cu: goto label_213f8c;
        case 0x213f90u: goto label_213f90;
        case 0x213f94u: goto label_213f94;
        case 0x213f98u: goto label_213f98;
        case 0x213f9cu: goto label_213f9c;
        case 0x213fa0u: goto label_213fa0;
        case 0x213fa4u: goto label_213fa4;
        case 0x213fa8u: goto label_213fa8;
        case 0x213facu: goto label_213fac;
        case 0x213fb0u: goto label_213fb0;
        case 0x213fb4u: goto label_213fb4;
        case 0x213fb8u: goto label_213fb8;
        case 0x213fbcu: goto label_213fbc;
        case 0x213fc0u: goto label_213fc0;
        case 0x213fc4u: goto label_213fc4;
        case 0x213fc8u: goto label_213fc8;
        case 0x213fccu: goto label_213fcc;
        case 0x213fd0u: goto label_213fd0;
        case 0x213fd4u: goto label_213fd4;
        case 0x213fd8u: goto label_213fd8;
        case 0x213fdcu: goto label_213fdc;
        case 0x213fe0u: goto label_213fe0;
        case 0x213fe4u: goto label_213fe4;
        case 0x213fe8u: goto label_213fe8;
        case 0x213fecu: goto label_213fec;
        case 0x213ff0u: goto label_213ff0;
        case 0x213ff4u: goto label_213ff4;
        case 0x213ff8u: goto label_213ff8;
        case 0x213ffcu: goto label_213ffc;
        case 0x214000u: goto label_214000;
        case 0x214004u: goto label_214004;
        case 0x214008u: goto label_214008;
        case 0x21400cu: goto label_21400c;
        case 0x214010u: goto label_214010;
        case 0x214014u: goto label_214014;
        case 0x214018u: goto label_214018;
        case 0x21401cu: goto label_21401c;
        case 0x214020u: goto label_214020;
        case 0x214024u: goto label_214024;
        case 0x214028u: goto label_214028;
        case 0x21402cu: goto label_21402c;
        case 0x214030u: goto label_214030;
        case 0x214034u: goto label_214034;
        case 0x214038u: goto label_214038;
        case 0x21403cu: goto label_21403c;
        case 0x214040u: goto label_214040;
        case 0x214044u: goto label_214044;
        case 0x214048u: goto label_214048;
        case 0x21404cu: goto label_21404c;
        case 0x214050u: goto label_214050;
        case 0x214054u: goto label_214054;
        case 0x214058u: goto label_214058;
        case 0x21405cu: goto label_21405c;
        case 0x214060u: goto label_214060;
        case 0x214064u: goto label_214064;
        case 0x214068u: goto label_214068;
        case 0x21406cu: goto label_21406c;
        case 0x214070u: goto label_214070;
        case 0x214074u: goto label_214074;
        case 0x214078u: goto label_214078;
        case 0x21407cu: goto label_21407c;
        case 0x214080u: goto label_214080;
        case 0x214084u: goto label_214084;
        case 0x214088u: goto label_214088;
        case 0x21408cu: goto label_21408c;
        case 0x214090u: goto label_214090;
        case 0x214094u: goto label_214094;
        case 0x214098u: goto label_214098;
        case 0x21409cu: goto label_21409c;
        case 0x2140a0u: goto label_2140a0;
        case 0x2140a4u: goto label_2140a4;
        case 0x2140a8u: goto label_2140a8;
        case 0x2140acu: goto label_2140ac;
        case 0x2140b0u: goto label_2140b0;
        case 0x2140b4u: goto label_2140b4;
        case 0x2140b8u: goto label_2140b8;
        case 0x2140bcu: goto label_2140bc;
        case 0x2140c0u: goto label_2140c0;
        case 0x2140c4u: goto label_2140c4;
        case 0x2140c8u: goto label_2140c8;
        case 0x2140ccu: goto label_2140cc;
        case 0x2140d0u: goto label_2140d0;
        case 0x2140d4u: goto label_2140d4;
        case 0x2140d8u: goto label_2140d8;
        case 0x2140dcu: goto label_2140dc;
        case 0x2140e0u: goto label_2140e0;
        case 0x2140e4u: goto label_2140e4;
        case 0x2140e8u: goto label_2140e8;
        case 0x2140ecu: goto label_2140ec;
        case 0x2140f0u: goto label_2140f0;
        case 0x2140f4u: goto label_2140f4;
        case 0x2140f8u: goto label_2140f8;
        case 0x2140fcu: goto label_2140fc;
        case 0x214100u: goto label_214100;
        case 0x214104u: goto label_214104;
        case 0x214108u: goto label_214108;
        case 0x21410cu: goto label_21410c;
        case 0x214110u: goto label_214110;
        case 0x214114u: goto label_214114;
        case 0x214118u: goto label_214118;
        case 0x21411cu: goto label_21411c;
        case 0x214120u: goto label_214120;
        case 0x214124u: goto label_214124;
        case 0x214128u: goto label_214128;
        case 0x21412cu: goto label_21412c;
        case 0x214130u: goto label_214130;
        case 0x214134u: goto label_214134;
        case 0x214138u: goto label_214138;
        case 0x21413cu: goto label_21413c;
        case 0x214140u: goto label_214140;
        case 0x214144u: goto label_214144;
        case 0x214148u: goto label_214148;
        case 0x21414cu: goto label_21414c;
        case 0x214150u: goto label_214150;
        case 0x214154u: goto label_214154;
        case 0x214158u: goto label_214158;
        case 0x21415cu: goto label_21415c;
        case 0x214160u: goto label_214160;
        case 0x214164u: goto label_214164;
        case 0x214168u: goto label_214168;
        case 0x21416cu: goto label_21416c;
        case 0x214170u: goto label_214170;
        case 0x214174u: goto label_214174;
        case 0x214178u: goto label_214178;
        case 0x21417cu: goto label_21417c;
        case 0x214180u: goto label_214180;
        case 0x214184u: goto label_214184;
        case 0x214188u: goto label_214188;
        case 0x21418cu: goto label_21418c;
        case 0x214190u: goto label_214190;
        case 0x214194u: goto label_214194;
        case 0x214198u: goto label_214198;
        case 0x21419cu: goto label_21419c;
        case 0x2141a0u: goto label_2141a0;
        case 0x2141a4u: goto label_2141a4;
        case 0x2141a8u: goto label_2141a8;
        case 0x2141acu: goto label_2141ac;
        case 0x2141b0u: goto label_2141b0;
        case 0x2141b4u: goto label_2141b4;
        case 0x2141b8u: goto label_2141b8;
        case 0x2141bcu: goto label_2141bc;
        case 0x2141c0u: goto label_2141c0;
        case 0x2141c4u: goto label_2141c4;
        case 0x2141c8u: goto label_2141c8;
        case 0x2141ccu: goto label_2141cc;
        case 0x2141d0u: goto label_2141d0;
        case 0x2141d4u: goto label_2141d4;
        case 0x2141d8u: goto label_2141d8;
        case 0x2141dcu: goto label_2141dc;
        case 0x2141e0u: goto label_2141e0;
        case 0x2141e4u: goto label_2141e4;
        case 0x2141e8u: goto label_2141e8;
        case 0x2141ecu: goto label_2141ec;
        case 0x2141f0u: goto label_2141f0;
        case 0x2141f4u: goto label_2141f4;
        case 0x2141f8u: goto label_2141f8;
        case 0x2141fcu: goto label_2141fc;
        case 0x214200u: goto label_214200;
        case 0x214204u: goto label_214204;
        case 0x214208u: goto label_214208;
        case 0x21420cu: goto label_21420c;
        case 0x214210u: goto label_214210;
        case 0x214214u: goto label_214214;
        case 0x214218u: goto label_214218;
        case 0x21421cu: goto label_21421c;
        case 0x214220u: goto label_214220;
        case 0x214224u: goto label_214224;
        case 0x214228u: goto label_214228;
        case 0x21422cu: goto label_21422c;
        case 0x214230u: goto label_214230;
        case 0x214234u: goto label_214234;
        case 0x214238u: goto label_214238;
        case 0x21423cu: goto label_21423c;
        case 0x214240u: goto label_214240;
        case 0x214244u: goto label_214244;
        case 0x214248u: goto label_214248;
        case 0x21424cu: goto label_21424c;
        case 0x214250u: goto label_214250;
        case 0x214254u: goto label_214254;
        case 0x214258u: goto label_214258;
        case 0x21425cu: goto label_21425c;
        case 0x214260u: goto label_214260;
        case 0x214264u: goto label_214264;
        case 0x214268u: goto label_214268;
        case 0x21426cu: goto label_21426c;
        case 0x214270u: goto label_214270;
        case 0x214274u: goto label_214274;
        case 0x214278u: goto label_214278;
        case 0x21427cu: goto label_21427c;
        case 0x214280u: goto label_214280;
        case 0x214284u: goto label_214284;
        case 0x214288u: goto label_214288;
        case 0x21428cu: goto label_21428c;
        case 0x214290u: goto label_214290;
        case 0x214294u: goto label_214294;
        case 0x214298u: goto label_214298;
        case 0x21429cu: goto label_21429c;
        case 0x2142a0u: goto label_2142a0;
        case 0x2142a4u: goto label_2142a4;
        case 0x2142a8u: goto label_2142a8;
        case 0x2142acu: goto label_2142ac;
        case 0x2142b0u: goto label_2142b0;
        case 0x2142b4u: goto label_2142b4;
        case 0x2142b8u: goto label_2142b8;
        case 0x2142bcu: goto label_2142bc;
        case 0x2142c0u: goto label_2142c0;
        case 0x2142c4u: goto label_2142c4;
        case 0x2142c8u: goto label_2142c8;
        case 0x2142ccu: goto label_2142cc;
        case 0x2142d0u: goto label_2142d0;
        case 0x2142d4u: goto label_2142d4;
        case 0x2142d8u: goto label_2142d8;
        case 0x2142dcu: goto label_2142dc;
        case 0x2142e0u: goto label_2142e0;
        case 0x2142e4u: goto label_2142e4;
        case 0x2142e8u: goto label_2142e8;
        case 0x2142ecu: goto label_2142ec;
        case 0x2142f0u: goto label_2142f0;
        case 0x2142f4u: goto label_2142f4;
        case 0x2142f8u: goto label_2142f8;
        case 0x2142fcu: goto label_2142fc;
        case 0x214300u: goto label_214300;
        case 0x214304u: goto label_214304;
        case 0x214308u: goto label_214308;
        case 0x21430cu: goto label_21430c;
        case 0x214310u: goto label_214310;
        case 0x214314u: goto label_214314;
        case 0x214318u: goto label_214318;
        case 0x21431cu: goto label_21431c;
        case 0x214320u: goto label_214320;
        case 0x214324u: goto label_214324;
        case 0x214328u: goto label_214328;
        case 0x21432cu: goto label_21432c;
        case 0x214330u: goto label_214330;
        case 0x214334u: goto label_214334;
        case 0x214338u: goto label_214338;
        case 0x21433cu: goto label_21433c;
        case 0x214340u: goto label_214340;
        case 0x214344u: goto label_214344;
        case 0x214348u: goto label_214348;
        case 0x21434cu: goto label_21434c;
        case 0x214350u: goto label_214350;
        case 0x214354u: goto label_214354;
        case 0x214358u: goto label_214358;
        case 0x21435cu: goto label_21435c;
        case 0x214360u: goto label_214360;
        case 0x214364u: goto label_214364;
        case 0x214368u: goto label_214368;
        case 0x21436cu: goto label_21436c;
        case 0x214370u: goto label_214370;
        case 0x214374u: goto label_214374;
        case 0x214378u: goto label_214378;
        case 0x21437cu: goto label_21437c;
        case 0x214380u: goto label_214380;
        default: break;
    }

    ctx->pc = 0x213710u;

label_213710:
    // 0x213710: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x213710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_213714:
    // 0x213714: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x213714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_213718:
    // 0x213718: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x213718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_21371c:
    // 0x21371c: 0x24426588  addiu       $v0, $v0, 0x6588
    ctx->pc = 0x21371cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25992));
label_213720:
    // 0x213720: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x213720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_213724:
    // 0x213724: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x213724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_213728:
    // 0x213728: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x213728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_21372c:
    // 0x21372c: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x21372cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
label_213730:
    // 0x213730: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x213730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_213734:
    // 0x213734: 0x26f71ef0  addiu       $s7, $s7, 0x1EF0
    ctx->pc = 0x213734u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 7920));
label_213738:
    // 0x213738: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x213738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_21373c:
    // 0x21373c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x21373cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_213740:
    // 0x213740: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x213740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_213744:
    // 0x213744: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x213744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_213748:
    // 0x213748: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x213748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_21374c:
    // 0x21374c: 0x8f83920c  lw          $v1, -0x6DF4($gp)
    ctx->pc = 0x21374cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939148)));
label_213750:
    // 0x213750: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_213754:
    // 0x213754: 0x94720000  lhu         $s2, 0x0($v1)
    ctx->pc = 0x213754u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_213758:
    // 0x213758: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x213758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_21375c:
    // 0x21375c: 0x80510000  lb          $s1, 0x0($v0)
    ctx->pc = 0x21375cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_213760:
    // 0x213760: 0xc04e640  jal         func_139900
label_213764:
    if (ctx->pc == 0x213764u) {
        ctx->pc = 0x213764u;
            // 0x213764: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x213768u;
        goto label_213768;
    }
    ctx->pc = 0x213760u;
    SET_GPR_U32(ctx, 31, 0x213768u);
    ctx->pc = 0x213764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213760u;
            // 0x213764: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213768u; }
        if (ctx->pc != 0x213768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213768u; }
        if (ctx->pc != 0x213768u) { return; }
    }
    ctx->pc = 0x213768u;
label_213768:
    // 0x213768: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x213768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_21376c:
    // 0x21376c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x21376cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_213770:
    // 0x213770: 0x8c23d5b8  lw          $v1, -0x2A48($at)
    ctx->pc = 0x213770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956472)));
label_213774:
    // 0x213774: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x213774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_213778:
    // 0x213778: 0x8c25d5b4  lw          $a1, -0x2A4C($at)
    ctx->pc = 0x213778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956468)));
label_21377c:
    // 0x21377c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21377cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_213780:
    // 0x213780: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x213780u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_213784:
    // 0x213784: 0x8c22d5b0  lw          $v0, -0x2A50($at)
    ctx->pc = 0x213784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956464)));
label_213788:
    // 0x213788: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x213788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_21378c:
    // 0x21378c: 0xc04e79c  jal         func_139E70
label_213790:
    if (ctx->pc == 0x213790u) {
        ctx->pc = 0x213790u;
            // 0x213790: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x213794u;
        goto label_213794;
    }
    ctx->pc = 0x21378Cu;
    SET_GPR_U32(ctx, 31, 0x213794u);
    ctx->pc = 0x213790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21378Cu;
            // 0x213790: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213794u; }
        if (ctx->pc != 0x213794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213794u; }
        if (ctx->pc != 0x213794u) { return; }
    }
    ctx->pc = 0x213794u;
label_213794:
    // 0x213794: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x213794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_213798:
    // 0x213798: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x213798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_21379c:
    // 0x21379c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x21379cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2137a0:
    // 0x2137a0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x2137a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_2137a4:
    // 0x2137a4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2137a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2137a8:
    // 0x2137a8: 0x2442f820  addiu       $v0, $v0, -0x7E0
    ctx->pc = 0x2137a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965280));
label_2137ac:
    // 0x2137ac: 0x2484fbe0  addiu       $a0, $a0, -0x420
    ctx->pc = 0x2137acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966240));
label_2137b0:
    // 0x2137b0: 0x45b021  addu        $s6, $v0, $a1
    ctx->pc = 0x2137b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2137b4:
    // 0x2137b4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2137b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_2137b8:
    // 0x2137b8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2137b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2137bc:
    // 0x2137bc: 0x27a301c8  addiu       $v1, $sp, 0x1C8
    ctx->pc = 0x2137bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_2137c0:
    // 0x2137c0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2137c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2137c4:
    // 0x2137c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2137c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2137c8:
    // 0x2137c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2137c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2137cc:
    // 0x2137cc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2137ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_2137d0:
    // 0x2137d0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2137d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2137d4:
    // 0x2137d4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2137d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2137d8:
    // 0x2137d8: 0xc04e748  jal         func_139D20
label_2137dc:
    if (ctx->pc == 0x2137DCu) {
        ctx->pc = 0x2137DCu;
            // 0x2137dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2137E0u;
        goto label_2137e0;
    }
    ctx->pc = 0x2137D8u;
    SET_GPR_U32(ctx, 31, 0x2137E0u);
    ctx->pc = 0x2137DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2137D8u;
            // 0x2137dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2137E0u; }
        if (ctx->pc != 0x2137E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2137E0u; }
        if (ctx->pc != 0x2137E0u) { return; }
    }
    ctx->pc = 0x2137E0u;
label_2137e0:
    // 0x2137e0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2137e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2137e4:
    // 0x2137e4: 0xc04e638  jal         func_1398E0
label_2137e8:
    if (ctx->pc == 0x2137E8u) {
        ctx->pc = 0x2137E8u;
            // 0x2137e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2137ECu;
        goto label_2137ec;
    }
    ctx->pc = 0x2137E4u;
    SET_GPR_U32(ctx, 31, 0x2137ECu);
    ctx->pc = 0x2137E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2137E4u;
            // 0x2137e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2137ECu; }
        if (ctx->pc != 0x2137ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2137ECu; }
        if (ctx->pc != 0x2137ECu) { return; }
    }
    ctx->pc = 0x2137ECu;
label_2137ec:
    // 0x2137ec: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2137ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2137f0:
    // 0x2137f0: 0x3c03423c  lui         $v1, 0x423C
    ctx->pc = 0x2137f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16956 << 16));
label_2137f4:
    // 0x2137f4: 0x2484c440  addiu       $a0, $a0, -0x3BC0
    ctx->pc = 0x2137f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952000));
label_2137f8:
    // 0x2137f8: 0x2d43021  addu        $a2, $s6, $s4
    ctx->pc = 0x2137f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_2137fc:
    // 0x2137fc: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2137fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_213800:
    // 0x213800: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x213800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_213804:
    // 0x213804: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x213804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_213808:
    // 0x213808: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x213808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_21380c:
    // 0x21380c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x21380cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_213810:
    // 0x213810: 0x8c4701c8  lw          $a3, 0x1C8($v0)
    ctx->pc = 0x213810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 456)));
label_213814:
    // 0x213814: 0xc08344c  jal         func_20D130
label_213818:
    if (ctx->pc == 0x213818u) {
        ctx->pc = 0x213818u;
            // 0x213818: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x21381Cu;
        goto label_21381c;
    }
    ctx->pc = 0x213814u;
    SET_GPR_U32(ctx, 31, 0x21381Cu);
    ctx->pc = 0x213818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213814u;
            // 0x213818: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D130u;
    if (runtime->hasFunction(0x20D130u)) {
        auto targetFn = runtime->lookupFunction(0x20D130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21381Cu; }
        if (ctx->pc != 0x21381Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__7CBubbleFP9mgCMemoryPfif_0x20d130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21381Cu; }
        if (ctx->pc != 0x21381Cu) { return; }
    }
    ctx->pc = 0x21381Cu;
label_21381c:
    // 0x21381c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x21381cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_213820:
    // 0x213820: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x213820u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_213824:
    // 0x213824: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x213824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
label_213828:
    // 0x213828: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_21382c:
    if (ctx->pc == 0x21382Cu) {
        ctx->pc = 0x21382Cu;
            // 0x21382c: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x213830u;
        goto label_213830;
    }
    ctx->pc = 0x213828u;
    {
        const bool branch_taken_0x213828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21382Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213828u;
            // 0x21382c: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213828) {
            ctx->pc = 0x2137D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2137d4;
        }
    }
    ctx->pc = 0x213830u;
label_213830:
    // 0x213830: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x213830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213834:
    // 0x213834: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213838:
    // 0x213838: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x213838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
label_21383c:
    // 0x21383c: 0x2463c450  addiu       $v1, $v1, -0x3BB0
    ctx->pc = 0x21383cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952016));
label_213840:
    // 0x213840: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x213840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_213844:
    // 0x213844: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x213844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_213848:
    // 0x213848: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21384c:
    if (ctx->pc == 0x21384Cu) {
        ctx->pc = 0x213850u;
        goto label_213850;
    }
    ctx->pc = 0x213848u;
    {
        const bool branch_taken_0x213848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213848) {
            ctx->pc = 0x213860u;
            goto label_213860;
        }
    }
    ctx->pc = 0x213850u;
label_213850:
    // 0x213850: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x213850u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_213854:
    // 0x213854: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x213854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_213858:
    // 0x213858: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x213858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_21385c:
    // 0x21385c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x21385cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_213860:
    // 0x213860: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x213860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_213864:
    // 0x213864: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x213864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_213868:
    // 0x213868: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_21386c:
    if (ctx->pc == 0x21386Cu) {
        ctx->pc = 0x21386Cu;
            // 0x21386c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x213870u;
        goto label_213870;
    }
    ctx->pc = 0x213868u;
    {
        const bool branch_taken_0x213868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21386Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213868u;
            // 0x21386c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213868) {
            ctx->pc = 0x213840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_213840;
        }
    }
    ctx->pc = 0x213870u;
label_213870:
    // 0x213870: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x213870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_213874:
    // 0x213874: 0x27828278  addiu       $v0, $gp, -0x7D88
    ctx->pc = 0x213874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_213878:
    // 0x213878: 0xa78091fc  sh          $zero, -0x6E04($gp)
    ctx->pc = 0x213878u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939132), (uint16_t)GPR_U32(ctx, 0));
label_21387c:
    // 0x21387c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21387cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_213880:
    // 0x213880: 0xaf809200  sw          $zero, -0x6E00($gp)
    ctx->pc = 0x213880u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939136), GPR_U32(ctx, 0));
label_213884:
    // 0x213884: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x213884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_213888:
    // 0x213888: 0xaf8091f8  sw          $zero, -0x6E08($gp)
    ctx->pc = 0x213888u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939128), GPR_U32(ctx, 0));
label_21388c:
    // 0x21388c: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x21388cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_213890:
    // 0x213890: 0x8f829210  lw          $v0, -0x6DF0($gp)
    ctx->pc = 0x213890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939152)));
label_213894:
    // 0x213894: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x213894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_213898:
    // 0x213898: 0xc04e79c  jal         func_139E70
label_21389c:
    if (ctx->pc == 0x21389Cu) {
        ctx->pc = 0x21389Cu;
            // 0x21389c: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2138A0u;
        goto label_2138a0;
    }
    ctx->pc = 0x213898u;
    SET_GPR_U32(ctx, 31, 0x2138A0u);
    ctx->pc = 0x21389Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213898u;
            // 0x21389c: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2138A0u; }
        if (ctx->pc != 0x2138A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2138A0u; }
        if (ctx->pc != 0x2138A0u) { return; }
    }
    ctx->pc = 0x2138A0u;
label_2138a0:
    // 0x2138a0: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x2138a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2138a4:
    // 0x2138a4: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_2138a8:
    if (ctx->pc == 0x2138A8u) {
        ctx->pc = 0x2138A8u;
            // 0x2138a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2138ACu;
        goto label_2138ac;
    }
    ctx->pc = 0x2138A4u;
    {
        const bool branch_taken_0x2138a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2138A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2138A4u;
            // 0x2138a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2138a4) {
            ctx->pc = 0x213904u;
            goto label_213904;
        }
    }
    ctx->pc = 0x2138ACu;
label_2138ac:
    // 0x2138ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2138acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2138b0:
    // 0x2138b0: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x2138b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2138b4:
    // 0x2138b4: 0x8e070094  lw          $a3, 0x94($s0)
    ctx->pc = 0x2138b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2138b8:
    // 0x2138b8: 0x24440194  addiu       $a0, $v0, 0x194
    ctx->pc = 0x2138b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 404));
label_2138bc:
    // 0x2138bc: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x2138bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2138c0:
    // 0x2138c0: 0x311c0  sll         $v0, $v1, 7
    ctx->pc = 0x2138c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_2138c4:
    // 0x2138c4: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x2138c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_2138c8:
    // 0x2138c8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x2138c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2138cc:
    // 0x2138cc: 0x2406319c  addiu       $a2, $zero, 0x319C
    ctx->pc = 0x2138ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12700));
label_2138d0:
    // 0x2138d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2138d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2138d4:
    // 0x2138d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2138d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2138d8:
    // 0x2138d8: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x2138d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_2138dc:
    // 0x2138dc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2138dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2138e0:
    // 0x2138e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2138e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2138e4:
    // 0x2138e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2138e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2138e8:
    // 0x2138e8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2138e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2138ec:
    // 0x2138ec: 0xc04e79c  jal         func_139E70
label_2138f0:
    if (ctx->pc == 0x2138F0u) {
        ctx->pc = 0x2138F0u;
            // 0x2138f0: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x2138F4u;
        goto label_2138f4;
    }
    ctx->pc = 0x2138ECu;
    SET_GPR_U32(ctx, 31, 0x2138F4u);
    ctx->pc = 0x2138F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2138ECu;
            // 0x2138f0: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2138F4u; }
        if (ctx->pc != 0x2138F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2138F4u; }
        if (ctx->pc != 0x2138F4u) { return; }
    }
    ctx->pc = 0x2138F4u;
label_2138f4:
    // 0x2138f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2138f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2138f8:
    // 0x2138f8: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x2138f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2138fc:
    // 0x2138fc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_213900:
    if (ctx->pc == 0x213900u) {
        ctx->pc = 0x213900u;
            // 0x213900: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->pc = 0x213904u;
        goto label_213904;
    }
    ctx->pc = 0x2138FCu;
    {
        const bool branch_taken_0x2138fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2138FCu;
            // 0x213900: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2138fc) {
            ctx->pc = 0x2138B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2138b0;
        }
    }
    ctx->pc = 0x213904u;
label_213904:
    // 0x213904: 0x0  nop
    ctx->pc = 0x213904u;
    // NOP
label_213908:
    // 0x213908: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x213908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_21390c:
    // 0x21390c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x21390cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_213910:
    // 0x213910: 0x24a59fa0  addiu       $a1, $a1, -0x6060
    ctx->pc = 0x213910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942624));
label_213914:
    // 0x213914: 0xc04a234  jal         func_1288D0
label_213918:
    if (ctx->pc == 0x213918u) {
        ctx->pc = 0x213918u;
            // 0x213918: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21391Cu;
        goto label_21391c;
    }
    ctx->pc = 0x213914u;
    SET_GPR_U32(ctx, 31, 0x21391Cu);
    ctx->pc = 0x213918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213914u;
            // 0x213918: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21391Cu; }
        if (ctx->pc != 0x21391Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21391Cu; }
        if (ctx->pc != 0x21391Cu) { return; }
    }
    ctx->pc = 0x21391Cu;
label_21391c:
    // 0x21391c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21391cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_213920:
    // 0x213920: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x213920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_213924:
    // 0x213924: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x213924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213928:
    // 0x213928: 0xc0524dc  jal         func_149370
label_21392c:
    if (ctx->pc == 0x21392Cu) {
        ctx->pc = 0x21392Cu;
            // 0x21392c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213930u;
        goto label_213930;
    }
    ctx->pc = 0x213928u;
    SET_GPR_U32(ctx, 31, 0x213930u);
    ctx->pc = 0x21392Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213928u;
            // 0x21392c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213930u; }
        if (ctx->pc != 0x213930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213930u; }
        if (ctx->pc != 0x213930u) { return; }
    }
    ctx->pc = 0x213930u;
label_213930:
    // 0x213930: 0x10400288  beqz        $v0, . + 4 + (0x288 << 2)
label_213934:
    if (ctx->pc == 0x213934u) {
        ctx->pc = 0x213938u;
        goto label_213938;
    }
    ctx->pc = 0x213930u;
    {
        const bool branch_taken_0x213930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213930) {
            ctx->pc = 0x214354u;
            goto label_214354;
        }
    }
    ctx->pc = 0x213938u;
label_213938:
    // 0x213938: 0x860500b4  lh          $a1, 0xB4($s0)
    ctx->pc = 0x213938u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 180)));
label_21393c:
    // 0x21393c: 0xc04b950  jal         func_12E540
label_213940:
    if (ctx->pc == 0x213940u) {
        ctx->pc = 0x213940u;
            // 0x213940: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213944u;
        goto label_213944;
    }
    ctx->pc = 0x21393Cu;
    SET_GPR_U32(ctx, 31, 0x213944u);
    ctx->pc = 0x213940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21393Cu;
            // 0x213940: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213944u; }
        if (ctx->pc != 0x213944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213944u; }
        if (ctx->pc != 0x213944u) { return; }
    }
    ctx->pc = 0x213944u;
label_213944:
    // 0x213944: 0x860500b0  lh          $a1, 0xB0($s0)
    ctx->pc = 0x213944u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 176)));
label_213948:
    // 0x213948: 0xc04b950  jal         func_12E540
label_21394c:
    if (ctx->pc == 0x21394Cu) {
        ctx->pc = 0x21394Cu;
            // 0x21394c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213950u;
        goto label_213950;
    }
    ctx->pc = 0x213948u;
    SET_GPR_U32(ctx, 31, 0x213950u);
    ctx->pc = 0x21394Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213948u;
            // 0x21394c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213950u; }
        if (ctx->pc != 0x213950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213950u; }
        if (ctx->pc != 0x213950u) { return; }
    }
    ctx->pc = 0x213950u;
label_213950:
    // 0x213950: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x213950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_213954:
    // 0x213954: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x213954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_213958:
    // 0x213958: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x213958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_21395c:
    // 0x21395c: 0x24a59fc0  addiu       $a1, $a1, -0x6040
    ctx->pc = 0x21395cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942656));
label_213960:
    // 0x213960: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x213960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_213964:
    // 0x213964: 0xc052734  jal         func_149CD0
label_213968:
    if (ctx->pc == 0x213968u) {
        ctx->pc = 0x213968u;
            // 0x213968: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->pc = 0x21396Cu;
        goto label_21396c;
    }
    ctx->pc = 0x213964u;
    SET_GPR_U32(ctx, 31, 0x21396Cu);
    ctx->pc = 0x213968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213964u;
            // 0x213968: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21396Cu; }
        if (ctx->pc != 0x21396Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21396Cu; }
        if (ctx->pc != 0x21396Cu) { return; }
    }
    ctx->pc = 0x21396Cu;
label_21396c:
    // 0x21396c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x21396cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_213970:
    // 0x213970: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
label_213974:
    if (ctx->pc == 0x213974u) {
        ctx->pc = 0x213978u;
        goto label_213978;
    }
    ctx->pc = 0x213970u;
    {
        const bool branch_taken_0x213970 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x213970) {
            ctx->pc = 0x2139C4u;
            goto label_2139c4;
        }
    }
    ctx->pc = 0x213978u;
label_213978:
    // 0x213978: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x213978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_21397c:
    // 0x21397c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_213980:
    if (ctx->pc == 0x213980u) {
        ctx->pc = 0x213980u;
            // 0x213980: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x213984u;
        goto label_213984;
    }
    ctx->pc = 0x21397Cu;
    {
        const bool branch_taken_0x21397c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x213980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21397Cu;
            // 0x213980: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21397c) {
            ctx->pc = 0x21398Cu;
            goto label_21398c;
        }
    }
    ctx->pc = 0x213984u;
label_213984:
    // 0x213984: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x213984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_213988:
    // 0x213988: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x213988u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_21398c:
    // 0x21398c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x21398cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_213990:
    // 0x213990: 0xc04e748  jal         func_139D20
label_213994:
    if (ctx->pc == 0x213994u) {
        ctx->pc = 0x213994u;
            // 0x213994: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x213998u;
        goto label_213998;
    }
    ctx->pc = 0x213990u;
    SET_GPR_U32(ctx, 31, 0x213998u);
    ctx->pc = 0x213994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213990u;
            // 0x213994: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213998u; }
        if (ctx->pc != 0x213998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213998u; }
        if (ctx->pc != 0x213998u) { return; }
    }
    ctx->pc = 0x213998u;
label_213998:
    // 0x213998: 0x8fa601d8  lw          $a2, 0x1D8($sp)
    ctx->pc = 0x213998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_21399c:
    // 0x21399c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x21399cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2139a0:
    // 0x2139a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2139a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2139a4:
    // 0x2139a4: 0xc049c18  jal         func_127060
label_2139a8:
    if (ctx->pc == 0x2139A8u) {
        ctx->pc = 0x2139A8u;
            // 0x2139a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2139ACu;
        goto label_2139ac;
    }
    ctx->pc = 0x2139A4u;
    SET_GPR_U32(ctx, 31, 0x2139ACu);
    ctx->pc = 0x2139A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2139A4u;
            // 0x2139a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2139ACu; }
        if (ctx->pc != 0x2139ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2139ACu; }
        if (ctx->pc != 0x2139ACu) { return; }
    }
    ctx->pc = 0x2139ACu;
label_2139ac:
    // 0x2139ac: 0x860600b4  lh          $a2, 0xB4($s0)
    ctx->pc = 0x2139acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 180)));
label_2139b0:
    // 0x2139b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2139b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2139b4:
    // 0x2139b4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2139b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2139b8:
    // 0x2139b8: 0x26070070  addiu       $a3, $s0, 0x70
    ctx->pc = 0x2139b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_2139bc:
    // 0x2139bc: 0xc04b6a4  jal         func_12DA90
label_2139c0:
    if (ctx->pc == 0x2139C0u) {
        ctx->pc = 0x2139C0u;
            // 0x2139c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2139C4u;
        goto label_2139c4;
    }
    ctx->pc = 0x2139BCu;
    SET_GPR_U32(ctx, 31, 0x2139C4u);
    ctx->pc = 0x2139C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2139BCu;
            // 0x2139c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2139C4u; }
        if (ctx->pc != 0x2139C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2139C4u; }
        if (ctx->pc != 0x2139C4u) { return; }
    }
    ctx->pc = 0x2139C4u;
label_2139c4:
    // 0x2139c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2139c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2139c8:
    // 0x2139c8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2139c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2139cc:
    // 0x2139cc: 0x24a59fd0  addiu       $a1, $a1, -0x6030
    ctx->pc = 0x2139ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942672));
label_2139d0:
    // 0x2139d0: 0xc052734  jal         func_149CD0
label_2139d4:
    if (ctx->pc == 0x2139D4u) {
        ctx->pc = 0x2139D4u;
            // 0x2139d4: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->pc = 0x2139D8u;
        goto label_2139d8;
    }
    ctx->pc = 0x2139D0u;
    SET_GPR_U32(ctx, 31, 0x2139D8u);
    ctx->pc = 0x2139D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2139D0u;
            // 0x2139d4: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2139D8u; }
        if (ctx->pc != 0x2139D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2139D8u; }
        if (ctx->pc != 0x2139D8u) { return; }
    }
    ctx->pc = 0x2139D8u;
label_2139d8:
    // 0x2139d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2139dc:
    if (ctx->pc == 0x2139DCu) {
        ctx->pc = 0x2139DCu;
            // 0x2139dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2139E0u;
        goto label_2139e0;
    }
    ctx->pc = 0x2139D8u;
    {
        const bool branch_taken_0x2139d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2139DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2139D8u;
            // 0x2139dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2139d8) {
            ctx->pc = 0x2139F4u;
            goto label_2139f4;
        }
    }
    ctx->pc = 0x2139E0u;
label_2139e0:
    // 0x2139e0: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x2139e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_2139e4:
    // 0x2139e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2139e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2139e8:
    // 0x2139e8: 0xc04cb78  jal         func_132DE0
label_2139ec:
    if (ctx->pc == 0x2139ECu) {
        ctx->pc = 0x2139ECu;
            // 0x2139ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2139F0u;
        goto label_2139f0;
    }
    ctx->pc = 0x2139E8u;
    SET_GPR_U32(ctx, 31, 0x2139F0u);
    ctx->pc = 0x2139ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2139E8u;
            // 0x2139ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2139F0u; }
        if (ctx->pc != 0x2139F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2139F0u; }
        if (ctx->pc != 0x2139F0u) { return; }
    }
    ctx->pc = 0x2139F0u;
label_2139f0:
    // 0x2139f0: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x2139f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_2139f4:
    // 0x2139f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2139f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2139f8:
    // 0x2139f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2139f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2139fc:
    // 0x2139fc: 0x24a59fe0  addiu       $a1, $a1, -0x6020
    ctx->pc = 0x2139fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942688));
label_213a00:
    // 0x213a00: 0xc052734  jal         func_149CD0
label_213a04:
    if (ctx->pc == 0x213A04u) {
        ctx->pc = 0x213A04u;
            // 0x213a04: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->pc = 0x213A08u;
        goto label_213a08;
    }
    ctx->pc = 0x213A00u;
    SET_GPR_U32(ctx, 31, 0x213A08u);
    ctx->pc = 0x213A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213A00u;
            // 0x213a04: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213A08u; }
        if (ctx->pc != 0x213A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213A08u; }
        if (ctx->pc != 0x213A08u) { return; }
    }
    ctx->pc = 0x213A08u;
label_213a08:
    // 0x213a08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x213a08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_213a0c:
    // 0x213a0c: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
label_213a10:
    if (ctx->pc == 0x213A10u) {
        ctx->pc = 0x213A14u;
        goto label_213a14;
    }
    ctx->pc = 0x213A0Cu;
    {
        const bool branch_taken_0x213a0c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x213a0c) {
            ctx->pc = 0x213A60u;
            goto label_213a60;
        }
    }
    ctx->pc = 0x213A14u;
label_213a14:
    // 0x213a14: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x213a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_213a18:
    // 0x213a18: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_213a1c:
    if (ctx->pc == 0x213A1Cu) {
        ctx->pc = 0x213A1Cu;
            // 0x213a1c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x213A20u;
        goto label_213a20;
    }
    ctx->pc = 0x213A18u;
    {
        const bool branch_taken_0x213a18 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x213A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213A18u;
            // 0x213a1c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a18) {
            ctx->pc = 0x213A28u;
            goto label_213a28;
        }
    }
    ctx->pc = 0x213A20u;
label_213a20:
    // 0x213a20: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x213a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_213a24:
    // 0x213a24: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x213a24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_213a28:
    // 0x213a28: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x213a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_213a2c:
    // 0x213a2c: 0xc04e748  jal         func_139D20
label_213a30:
    if (ctx->pc == 0x213A30u) {
        ctx->pc = 0x213A30u;
            // 0x213a30: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x213A34u;
        goto label_213a34;
    }
    ctx->pc = 0x213A2Cu;
    SET_GPR_U32(ctx, 31, 0x213A34u);
    ctx->pc = 0x213A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213A2Cu;
            // 0x213a30: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213A34u; }
        if (ctx->pc != 0x213A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213A34u; }
        if (ctx->pc != 0x213A34u) { return; }
    }
    ctx->pc = 0x213A34u;
label_213a34:
    // 0x213a34: 0x8fa601d8  lw          $a2, 0x1D8($sp)
    ctx->pc = 0x213a34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_213a38:
    // 0x213a38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x213a38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_213a3c:
    // 0x213a3c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x213a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_213a40:
    // 0x213a40: 0xc049c18  jal         func_127060
label_213a44:
    if (ctx->pc == 0x213A44u) {
        ctx->pc = 0x213A44u;
            // 0x213a44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213A48u;
        goto label_213a48;
    }
    ctx->pc = 0x213A40u;
    SET_GPR_U32(ctx, 31, 0x213A48u);
    ctx->pc = 0x213A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213A40u;
            // 0x213a44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213A48u; }
        if (ctx->pc != 0x213A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213A48u; }
        if (ctx->pc != 0x213A48u) { return; }
    }
    ctx->pc = 0x213A48u;
label_213a48:
    // 0x213a48: 0x860600b0  lh          $a2, 0xB0($s0)
    ctx->pc = 0x213a48u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 176)));
label_213a4c:
    // 0x213a4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x213a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_213a50:
    // 0x213a50: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x213a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_213a54:
    // 0x213a54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x213a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213a58:
    // 0x213a58: 0xc04b6a4  jal         func_12DA90
label_213a5c:
    if (ctx->pc == 0x213A5Cu) {
        ctx->pc = 0x213A5Cu;
            // 0x213a5c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213A60u;
        goto label_213a60;
    }
    ctx->pc = 0x213A58u;
    SET_GPR_U32(ctx, 31, 0x213A60u);
    ctx->pc = 0x213A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213A58u;
            // 0x213a5c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213A60u; }
        if (ctx->pc != 0x213A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213A60u; }
        if (ctx->pc != 0x213A60u) { return; }
    }
    ctx->pc = 0x213A60u;
label_213a60:
    // 0x213a60: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x213a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_213a64:
    // 0x213a64: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x213a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_213a68:
    // 0x213a68: 0x24a59ff0  addiu       $a1, $a1, -0x6010
    ctx->pc = 0x213a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942704));
label_213a6c:
    // 0x213a6c: 0xc052734  jal         func_149CD0
label_213a70:
    if (ctx->pc == 0x213A70u) {
        ctx->pc = 0x213A70u;
            // 0x213a70: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->pc = 0x213A74u;
        goto label_213a74;
    }
    ctx->pc = 0x213A6Cu;
    SET_GPR_U32(ctx, 31, 0x213A74u);
    ctx->pc = 0x213A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213A6Cu;
            // 0x213a70: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213A74u; }
        if (ctx->pc != 0x213A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213A74u; }
        if (ctx->pc != 0x213A74u) { return; }
    }
    ctx->pc = 0x213A74u;
label_213a74:
    // 0x213a74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_213a78:
    if (ctx->pc == 0x213A78u) {
        ctx->pc = 0x213A78u;
            // 0x213a78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213A7Cu;
        goto label_213a7c;
    }
    ctx->pc = 0x213A74u;
    {
        const bool branch_taken_0x213a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213A74u;
            // 0x213a78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a74) {
            ctx->pc = 0x213A90u;
            goto label_213a90;
        }
    }
    ctx->pc = 0x213A7Cu;
label_213a7c:
    // 0x213a7c: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x213a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_213a80:
    // 0x213a80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x213a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213a84:
    // 0x213a84: 0xc04cb78  jal         func_132DE0
label_213a88:
    if (ctx->pc == 0x213A88u) {
        ctx->pc = 0x213A88u;
            // 0x213a88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213A8Cu;
        goto label_213a8c;
    }
    ctx->pc = 0x213A84u;
    SET_GPR_U32(ctx, 31, 0x213A8Cu);
    ctx->pc = 0x213A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213A84u;
            // 0x213a88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213A8Cu; }
        if (ctx->pc != 0x213A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213A8Cu; }
        if (ctx->pc != 0x213A8Cu) { return; }
    }
    ctx->pc = 0x213A8Cu;
label_213a8c:
    // 0x213a8c: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x213a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_213a90:
    // 0x213a90: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x213a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_213a94:
    // 0x213a94: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x213a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_213a98:
    // 0x213a98: 0x24a5a000  addiu       $a1, $a1, -0x6000
    ctx->pc = 0x213a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942720));
label_213a9c:
    // 0x213a9c: 0xc052734  jal         func_149CD0
label_213aa0:
    if (ctx->pc == 0x213AA0u) {
        ctx->pc = 0x213AA0u;
            // 0x213aa0: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->pc = 0x213AA4u;
        goto label_213aa4;
    }
    ctx->pc = 0x213A9Cu;
    SET_GPR_U32(ctx, 31, 0x213AA4u);
    ctx->pc = 0x213AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213A9Cu;
            // 0x213aa0: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213AA4u; }
        if (ctx->pc != 0x213AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213AA4u; }
        if (ctx->pc != 0x213AA4u) { return; }
    }
    ctx->pc = 0x213AA4u;
label_213aa4:
    // 0x213aa4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x213aa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_213aa8:
    // 0x213aa8: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
label_213aac:
    if (ctx->pc == 0x213AACu) {
        ctx->pc = 0x213AB0u;
        goto label_213ab0;
    }
    ctx->pc = 0x213AA8u;
    {
        const bool branch_taken_0x213aa8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x213aa8) {
            ctx->pc = 0x213AFCu;
            goto label_213afc;
        }
    }
    ctx->pc = 0x213AB0u;
label_213ab0:
    // 0x213ab0: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x213ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_213ab4:
    // 0x213ab4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_213ab8:
    if (ctx->pc == 0x213AB8u) {
        ctx->pc = 0x213AB8u;
            // 0x213ab8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x213ABCu;
        goto label_213abc;
    }
    ctx->pc = 0x213AB4u;
    {
        const bool branch_taken_0x213ab4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x213AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213AB4u;
            // 0x213ab8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ab4) {
            ctx->pc = 0x213AC4u;
            goto label_213ac4;
        }
    }
    ctx->pc = 0x213ABCu;
label_213abc:
    // 0x213abc: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x213abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_213ac0:
    // 0x213ac0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x213ac0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_213ac4:
    // 0x213ac4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x213ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_213ac8:
    // 0x213ac8: 0xc04e748  jal         func_139D20
label_213acc:
    if (ctx->pc == 0x213ACCu) {
        ctx->pc = 0x213ACCu;
            // 0x213acc: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x213AD0u;
        goto label_213ad0;
    }
    ctx->pc = 0x213AC8u;
    SET_GPR_U32(ctx, 31, 0x213AD0u);
    ctx->pc = 0x213ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213AC8u;
            // 0x213acc: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213AD0u; }
        if (ctx->pc != 0x213AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213AD0u; }
        if (ctx->pc != 0x213AD0u) { return; }
    }
    ctx->pc = 0x213AD0u;
label_213ad0:
    // 0x213ad0: 0x8fa601d8  lw          $a2, 0x1D8($sp)
    ctx->pc = 0x213ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_213ad4:
    // 0x213ad4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x213ad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_213ad8:
    // 0x213ad8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x213ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_213adc:
    // 0x213adc: 0xc049c18  jal         func_127060
label_213ae0:
    if (ctx->pc == 0x213AE0u) {
        ctx->pc = 0x213AE0u;
            // 0x213ae0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213AE4u;
        goto label_213ae4;
    }
    ctx->pc = 0x213ADCu;
    SET_GPR_U32(ctx, 31, 0x213AE4u);
    ctx->pc = 0x213AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213ADCu;
            // 0x213ae0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213AE4u; }
        if (ctx->pc != 0x213AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213AE4u; }
        if (ctx->pc != 0x213AE4u) { return; }
    }
    ctx->pc = 0x213AE4u;
label_213ae4:
    // 0x213ae4: 0x860600b2  lh          $a2, 0xB2($s0)
    ctx->pc = 0x213ae4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 178)));
label_213ae8:
    // 0x213ae8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x213ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_213aec:
    // 0x213aec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x213aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_213af0:
    // 0x213af0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x213af0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213af4:
    // 0x213af4: 0xc04b6a4  jal         func_12DA90
label_213af8:
    if (ctx->pc == 0x213AF8u) {
        ctx->pc = 0x213AF8u;
            // 0x213af8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213AFCu;
        goto label_213afc;
    }
    ctx->pc = 0x213AF4u;
    SET_GPR_U32(ctx, 31, 0x213AFCu);
    ctx->pc = 0x213AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213AF4u;
            // 0x213af8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213AFCu; }
        if (ctx->pc != 0x213AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213AFCu; }
        if (ctx->pc != 0x213AFCu) { return; }
    }
    ctx->pc = 0x213AFCu;
label_213afc:
    // 0x213afc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x213afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_213b00:
    // 0x213b00: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x213b00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_213b04:
    // 0x213b04: 0x24a5a010  addiu       $a1, $a1, -0x5FF0
    ctx->pc = 0x213b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942736));
label_213b08:
    // 0x213b08: 0xc052734  jal         func_149CD0
label_213b0c:
    if (ctx->pc == 0x213B0Cu) {
        ctx->pc = 0x213B0Cu;
            // 0x213b0c: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->pc = 0x213B10u;
        goto label_213b10;
    }
    ctx->pc = 0x213B08u;
    SET_GPR_U32(ctx, 31, 0x213B10u);
    ctx->pc = 0x213B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213B08u;
            // 0x213b0c: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B10u; }
        if (ctx->pc != 0x213B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B10u; }
        if (ctx->pc != 0x213B10u) { return; }
    }
    ctx->pc = 0x213B10u;
label_213b10:
    // 0x213b10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_213b14:
    if (ctx->pc == 0x213B14u) {
        ctx->pc = 0x213B18u;
        goto label_213b18;
    }
    ctx->pc = 0x213B10u;
    {
        const bool branch_taken_0x213b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213b10) {
            ctx->pc = 0x213B30u;
            goto label_213b30;
        }
    }
    ctx->pc = 0x213B18u;
label_213b18:
    // 0x213b18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x213b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_213b1c:
    // 0x213b1c: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x213b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_213b20:
    // 0x213b20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x213b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213b24:
    // 0x213b24: 0xc04cb78  jal         func_132DE0
label_213b28:
    if (ctx->pc == 0x213B28u) {
        ctx->pc = 0x213B28u;
            // 0x213b28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213B2Cu;
        goto label_213b2c;
    }
    ctx->pc = 0x213B24u;
    SET_GPR_U32(ctx, 31, 0x213B2Cu);
    ctx->pc = 0x213B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213B24u;
            // 0x213b28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B2Cu; }
        if (ctx->pc != 0x213B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B2Cu; }
        if (ctx->pc != 0x213B2Cu) { return; }
    }
    ctx->pc = 0x213B2Cu;
label_213b2c:
    // 0x213b2c: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x213b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_213b30:
    // 0x213b30: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x213b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_213b34:
    // 0x213b34: 0x26e401d8  addiu       $a0, $s7, 0x1D8
    ctx->pc = 0x213b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 472));
label_213b38:
    // 0x213b38: 0xc04a3dc  jal         func_128F70
label_213b3c:
    if (ctx->pc == 0x213B3Cu) {
        ctx->pc = 0x213B3Cu;
            // 0x213b3c: 0x24a5a020  addiu       $a1, $a1, -0x5FE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942752));
        ctx->pc = 0x213B40u;
        goto label_213b40;
    }
    ctx->pc = 0x213B38u;
    SET_GPR_U32(ctx, 31, 0x213B40u);
    ctx->pc = 0x213B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213B38u;
            // 0x213b3c: 0x24a5a020  addiu       $a1, $a1, -0x5FE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B40u; }
        if (ctx->pc != 0x213B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B40u; }
        if (ctx->pc != 0x213B40u) { return; }
    }
    ctx->pc = 0x213B40u;
label_213b40:
    // 0x213b40: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x213b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_213b44:
    // 0x213b44: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x213b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_213b48:
    // 0x213b48: 0x24a5a028  addiu       $a1, $a1, -0x5FD8
    ctx->pc = 0x213b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942760));
label_213b4c:
    // 0x213b4c: 0xc052734  jal         func_149CD0
label_213b50:
    if (ctx->pc == 0x213B50u) {
        ctx->pc = 0x213B50u;
            // 0x213b50: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->pc = 0x213B54u;
        goto label_213b54;
    }
    ctx->pc = 0x213B4Cu;
    SET_GPR_U32(ctx, 31, 0x213B54u);
    ctx->pc = 0x213B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213B4Cu;
            // 0x213b50: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B54u; }
        if (ctx->pc != 0x213B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B54u; }
        if (ctx->pc != 0x213B54u) { return; }
    }
    ctx->pc = 0x213B54u;
label_213b54:
    // 0x213b54: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x213b54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_213b58:
    // 0x213b58: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
label_213b5c:
    if (ctx->pc == 0x213B5Cu) {
        ctx->pc = 0x213B60u;
        goto label_213b60;
    }
    ctx->pc = 0x213B58u;
    {
        const bool branch_taken_0x213b58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x213b58) {
            ctx->pc = 0x213BACu;
            goto label_213bac;
        }
    }
    ctx->pc = 0x213B60u;
label_213b60:
    // 0x213b60: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x213b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_213b64:
    // 0x213b64: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_213b68:
    if (ctx->pc == 0x213B68u) {
        ctx->pc = 0x213B68u;
            // 0x213b68: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x213B6Cu;
        goto label_213b6c;
    }
    ctx->pc = 0x213B64u;
    {
        const bool branch_taken_0x213b64 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x213B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213B64u;
            // 0x213b68: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b64) {
            ctx->pc = 0x213B74u;
            goto label_213b74;
        }
    }
    ctx->pc = 0x213B6Cu;
label_213b6c:
    // 0x213b6c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x213b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_213b70:
    // 0x213b70: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x213b70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_213b74:
    // 0x213b74: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x213b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_213b78:
    // 0x213b78: 0xc04e748  jal         func_139D20
label_213b7c:
    if (ctx->pc == 0x213B7Cu) {
        ctx->pc = 0x213B7Cu;
            // 0x213b7c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x213B80u;
        goto label_213b80;
    }
    ctx->pc = 0x213B78u;
    SET_GPR_U32(ctx, 31, 0x213B80u);
    ctx->pc = 0x213B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213B78u;
            // 0x213b7c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B80u; }
        if (ctx->pc != 0x213B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B80u; }
        if (ctx->pc != 0x213B80u) { return; }
    }
    ctx->pc = 0x213B80u;
label_213b80:
    // 0x213b80: 0x8fa601d8  lw          $a2, 0x1D8($sp)
    ctx->pc = 0x213b80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_213b84:
    // 0x213b84: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x213b84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_213b88:
    // 0x213b88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x213b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_213b8c:
    // 0x213b8c: 0xc049c18  jal         func_127060
label_213b90:
    if (ctx->pc == 0x213B90u) {
        ctx->pc = 0x213B90u;
            // 0x213b90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213B94u;
        goto label_213b94;
    }
    ctx->pc = 0x213B8Cu;
    SET_GPR_U32(ctx, 31, 0x213B94u);
    ctx->pc = 0x213B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213B8Cu;
            // 0x213b90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B94u; }
        if (ctx->pc != 0x213B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B94u; }
        if (ctx->pc != 0x213B94u) { return; }
    }
    ctx->pc = 0x213B94u;
label_213b94:
    // 0x213b94: 0x860600bc  lh          $a2, 0xBC($s0)
    ctx->pc = 0x213b94u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 188)));
label_213b98:
    // 0x213b98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x213b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_213b9c:
    // 0x213b9c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x213b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_213ba0:
    // 0x213ba0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x213ba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213ba4:
    // 0x213ba4: 0xc04b6a4  jal         func_12DA90
label_213ba8:
    if (ctx->pc == 0x213BA8u) {
        ctx->pc = 0x213BA8u;
            // 0x213ba8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213BACu;
        goto label_213bac;
    }
    ctx->pc = 0x213BA4u;
    SET_GPR_U32(ctx, 31, 0x213BACu);
    ctx->pc = 0x213BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213BA4u;
            // 0x213ba8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213BACu; }
        if (ctx->pc != 0x213BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213BACu; }
        if (ctx->pc != 0x213BACu) { return; }
    }
    ctx->pc = 0x213BACu;
label_213bac:
    // 0x213bac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x213bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_213bb0:
    // 0x213bb0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x213bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_213bb4:
    // 0x213bb4: 0x24a5a038  addiu       $a1, $a1, -0x5FC8
    ctx->pc = 0x213bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942776));
label_213bb8:
    // 0x213bb8: 0xc052734  jal         func_149CD0
label_213bbc:
    if (ctx->pc == 0x213BBCu) {
        ctx->pc = 0x213BBCu;
            // 0x213bbc: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->pc = 0x213BC0u;
        goto label_213bc0;
    }
    ctx->pc = 0x213BB8u;
    SET_GPR_U32(ctx, 31, 0x213BC0u);
    ctx->pc = 0x213BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213BB8u;
            // 0x213bbc: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213BC0u; }
        if (ctx->pc != 0x213BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213BC0u; }
        if (ctx->pc != 0x213BC0u) { return; }
    }
    ctx->pc = 0x213BC0u;
label_213bc0:
    // 0x213bc0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_213bc4:
    if (ctx->pc == 0x213BC4u) {
        ctx->pc = 0x213BC4u;
            // 0x213bc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213BC8u;
        goto label_213bc8;
    }
    ctx->pc = 0x213BC0u;
    {
        const bool branch_taken_0x213bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213BC0u;
            // 0x213bc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213bc0) {
            ctx->pc = 0x213BDCu;
            goto label_213bdc;
        }
    }
    ctx->pc = 0x213BC8u;
label_213bc8:
    // 0x213bc8: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x213bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_213bcc:
    // 0x213bcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x213bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213bd0:
    // 0x213bd0: 0xc04cb78  jal         func_132DE0
label_213bd4:
    if (ctx->pc == 0x213BD4u) {
        ctx->pc = 0x213BD4u;
            // 0x213bd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213BD8u;
        goto label_213bd8;
    }
    ctx->pc = 0x213BD0u;
    SET_GPR_U32(ctx, 31, 0x213BD8u);
    ctx->pc = 0x213BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213BD0u;
            // 0x213bd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213BD8u; }
        if (ctx->pc != 0x213BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213BD8u; }
        if (ctx->pc != 0x213BD8u) { return; }
    }
    ctx->pc = 0x213BD8u;
label_213bd8:
    // 0x213bd8: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x213bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
label_213bdc:
    // 0x213bdc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x213bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_213be0:
    // 0x213be0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x213be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_213be4:
    // 0x213be4: 0x24a5a048  addiu       $a1, $a1, -0x5FB8
    ctx->pc = 0x213be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942792));
label_213be8:
    // 0x213be8: 0xc052734  jal         func_149CD0
label_213bec:
    if (ctx->pc == 0x213BECu) {
        ctx->pc = 0x213BECu;
            // 0x213bec: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->pc = 0x213BF0u;
        goto label_213bf0;
    }
    ctx->pc = 0x213BE8u;
    SET_GPR_U32(ctx, 31, 0x213BF0u);
    ctx->pc = 0x213BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213BE8u;
            // 0x213bec: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213BF0u; }
        if (ctx->pc != 0x213BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213BF0u; }
        if (ctx->pc != 0x213BF0u) { return; }
    }
    ctx->pc = 0x213BF0u;
label_213bf0:
    // 0x213bf0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_213bf4:
    if (ctx->pc == 0x213BF4u) {
        ctx->pc = 0x213BF4u;
            // 0x213bf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213BF8u;
        goto label_213bf8;
    }
    ctx->pc = 0x213BF0u;
    {
        const bool branch_taken_0x213bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213BF0u;
            // 0x213bf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213bf0) {
            ctx->pc = 0x213C50u;
            goto label_213c50;
        }
    }
    ctx->pc = 0x213BF8u;
label_213bf8:
    // 0x213bf8: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x213bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_213bfc:
    // 0x213bfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x213bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213c00:
    // 0x213c00: 0xc04cb78  jal         func_132DE0
label_213c04:
    if (ctx->pc == 0x213C04u) {
        ctx->pc = 0x213C04u;
            // 0x213c04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213C08u;
        goto label_213c08;
    }
    ctx->pc = 0x213C00u;
    SET_GPR_U32(ctx, 31, 0x213C08u);
    ctx->pc = 0x213C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213C00u;
            // 0x213c04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213C08u; }
        if (ctx->pc != 0x213C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213C08u; }
        if (ctx->pc != 0x213C08u) { return; }
    }
    ctx->pc = 0x213C08u;
label_213c08:
    // 0x213c08: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x213c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_213c0c:
    // 0x213c0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x213c0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_213c10:
    // 0x213c10: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x213c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_213c14:
    // 0x213c14: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x213c14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_213c18:
    // 0x213c18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x213c18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_213c1c:
    // 0x213c1c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x213c1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_213c20:
    // 0x213c20: 0x320f809  jalr        $t9
label_213c24:
    if (ctx->pc == 0x213C24u) {
        ctx->pc = 0x213C24u;
            // 0x213c24: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x213C28u;
        goto label_213c28;
    }
    ctx->pc = 0x213C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x213C28u);
        ctx->pc = 0x213C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213C20u;
            // 0x213c24: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x213C28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x213C28u; }
            if (ctx->pc != 0x213C28u) { return; }
        }
        }
    }
    ctx->pc = 0x213C28u;
label_213c28:
    // 0x213c28: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x213c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_213c2c:
    // 0x213c2c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x213c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_213c30:
    // 0x213c30: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x213c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
label_213c34:
    // 0x213c34: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x213c34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_213c38:
    // 0x213c38: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x213c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
label_213c3c:
    // 0x213c3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x213c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_213c40:
    // 0x213c40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x213c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_213c44:
    // 0x213c44: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x213c44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_213c48:
    // 0x213c48: 0x320f809  jalr        $t9
label_213c4c:
    if (ctx->pc == 0x213C4Cu) {
        ctx->pc = 0x213C4Cu;
            // 0x213c4c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x213C50u;
        goto label_213c50;
    }
    ctx->pc = 0x213C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x213C50u);
        ctx->pc = 0x213C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213C48u;
            // 0x213c4c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x213C50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x213C50u; }
            if (ctx->pc != 0x213C50u) { return; }
        }
        }
    }
    ctx->pc = 0x213C50u;
label_213c50:
    // 0x213c50: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x213c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_213c54:
    // 0x213c54: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x213c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_213c58:
    // 0x213c58: 0x24a5a058  addiu       $a1, $a1, -0x5FA8
    ctx->pc = 0x213c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942808));
label_213c5c:
    // 0x213c5c: 0xc052734  jal         func_149CD0
label_213c60:
    if (ctx->pc == 0x213C60u) {
        ctx->pc = 0x213C60u;
            // 0x213c60: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->pc = 0x213C64u;
        goto label_213c64;
    }
    ctx->pc = 0x213C5Cu;
    SET_GPR_U32(ctx, 31, 0x213C64u);
    ctx->pc = 0x213C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213C5Cu;
            // 0x213c60: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213C64u; }
        if (ctx->pc != 0x213C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213C64u; }
        if (ctx->pc != 0x213C64u) { return; }
    }
    ctx->pc = 0x213C64u;
label_213c64:
    // 0x213c64: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x213c64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_213c68:
    // 0x213c68: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
label_213c6c:
    if (ctx->pc == 0x213C6Cu) {
        ctx->pc = 0x213C70u;
        goto label_213c70;
    }
    ctx->pc = 0x213C68u;
    {
        const bool branch_taken_0x213c68 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x213c68) {
            ctx->pc = 0x213CBCu;
            goto label_213cbc;
        }
    }
    ctx->pc = 0x213C70u;
label_213c70:
    // 0x213c70: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x213c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_213c74:
    // 0x213c74: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_213c78:
    if (ctx->pc == 0x213C78u) {
        ctx->pc = 0x213C78u;
            // 0x213c78: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x213C7Cu;
        goto label_213c7c;
    }
    ctx->pc = 0x213C74u;
    {
        const bool branch_taken_0x213c74 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x213C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213C74u;
            // 0x213c78: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c74) {
            ctx->pc = 0x213C84u;
            goto label_213c84;
        }
    }
    ctx->pc = 0x213C7Cu;
label_213c7c:
    // 0x213c7c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x213c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_213c80:
    // 0x213c80: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x213c80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_213c84:
    // 0x213c84: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x213c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_213c88:
    // 0x213c88: 0xc04e748  jal         func_139D20
label_213c8c:
    if (ctx->pc == 0x213C8Cu) {
        ctx->pc = 0x213C8Cu;
            // 0x213c8c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x213C90u;
        goto label_213c90;
    }
    ctx->pc = 0x213C88u;
    SET_GPR_U32(ctx, 31, 0x213C90u);
    ctx->pc = 0x213C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213C88u;
            // 0x213c8c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213C90u; }
        if (ctx->pc != 0x213C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213C90u; }
        if (ctx->pc != 0x213C90u) { return; }
    }
    ctx->pc = 0x213C90u;
label_213c90:
    // 0x213c90: 0x8fa601d8  lw          $a2, 0x1D8($sp)
    ctx->pc = 0x213c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_213c94:
    // 0x213c94: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x213c94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_213c98:
    // 0x213c98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x213c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_213c9c:
    // 0x213c9c: 0xc049c18  jal         func_127060
label_213ca0:
    if (ctx->pc == 0x213CA0u) {
        ctx->pc = 0x213CA0u;
            // 0x213ca0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213CA4u;
        goto label_213ca4;
    }
    ctx->pc = 0x213C9Cu;
    SET_GPR_U32(ctx, 31, 0x213CA4u);
    ctx->pc = 0x213CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213C9Cu;
            // 0x213ca0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213CA4u; }
        if (ctx->pc != 0x213CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213CA4u; }
        if (ctx->pc != 0x213CA4u) { return; }
    }
    ctx->pc = 0x213CA4u;
label_213ca4:
    // 0x213ca4: 0x860600bc  lh          $a2, 0xBC($s0)
    ctx->pc = 0x213ca4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 188)));
label_213ca8:
    // 0x213ca8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x213ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_213cac:
    // 0x213cac: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x213cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_213cb0:
    // 0x213cb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x213cb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213cb4:
    // 0x213cb4: 0xc04b6a4  jal         func_12DA90
label_213cb8:
    if (ctx->pc == 0x213CB8u) {
        ctx->pc = 0x213CB8u;
            // 0x213cb8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213CBCu;
        goto label_213cbc;
    }
    ctx->pc = 0x213CB4u;
    SET_GPR_U32(ctx, 31, 0x213CBCu);
    ctx->pc = 0x213CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213CB4u;
            // 0x213cb8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213CBCu; }
        if (ctx->pc != 0x213CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213CBCu; }
        if (ctx->pc != 0x213CBCu) { return; }
    }
    ctx->pc = 0x213CBCu;
label_213cbc:
    // 0x213cbc: 0xa2e001d8  sb          $zero, 0x1D8($s7)
    ctx->pc = 0x213cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 472), (uint8_t)GPR_U32(ctx, 0));
label_213cc0:
    // 0x213cc0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x213cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_213cc4:
    // 0x213cc4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x213cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_213cc8:
    // 0x213cc8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x213cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_213ccc:
    // 0x213ccc: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x213cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
label_213cd0:
    // 0x213cd0: 0x24c6a070  addiu       $a2, $a2, -0x5F90
    ctx->pc = 0x213cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942832));
label_213cd4:
    // 0x213cd4: 0x860500bc  lh          $a1, 0xBC($s0)
    ctx->pc = 0x213cd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 188)));
label_213cd8:
    // 0x213cd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x213cd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213cdc:
    // 0x213cdc: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x213cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_213ce0:
    // 0x213ce0: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x213ce0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_213ce4:
    // 0x213ce4: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x213ce4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_213ce8:
    // 0x213ce8: 0xc04b450  jal         func_12D140
label_213cec:
    if (ctx->pc == 0x213CECu) {
        ctx->pc = 0x213CECu;
            // 0x213cec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213CF0u;
        goto label_213cf0;
    }
    ctx->pc = 0x213CE8u;
    SET_GPR_U32(ctx, 31, 0x213CF0u);
    ctx->pc = 0x213CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213CE8u;
            // 0x213cec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213CF0u; }
        if (ctx->pc != 0x213CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213CF0u; }
        if (ctx->pc != 0x213CF0u) { return; }
    }
    ctx->pc = 0x213CF0u;
label_213cf0:
    // 0x213cf0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x213cf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_213cf4:
    // 0x213cf4: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x213cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_213cf8:
    // 0x213cf8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x213cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_213cfc:
    // 0x213cfc: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x213cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_213d00:
    // 0x213d00: 0x2442fbf0  addiu       $v0, $v0, -0x410
    ctx->pc = 0x213d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966256));
label_213d04:
    // 0x213d04: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x213d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_213d08:
    // 0x213d08: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x213d08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_213d0c:
    // 0x213d0c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x213d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_213d10:
    // 0x213d10: 0x26080070  addiu       $t0, $s0, 0x70
    ctx->pc = 0x213d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_213d14:
    // 0x213d14: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x213d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_213d18:
    // 0x213d18: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x213d18u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_213d1c:
    // 0x213d1c: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x213d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
label_213d20:
    // 0x213d20: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x213d20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_213d24:
    // 0x213d24: 0xc061750  jal         func_185D40
label_213d28:
    if (ctx->pc == 0x213D28u) {
        ctx->pc = 0x213D28u;
            // 0x213d28: 0x7ce20000  sq          $v0, 0x0($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x213D2Cu;
        goto label_213d2c;
    }
    ctx->pc = 0x213D24u;
    SET_GPR_U32(ctx, 31, 0x213D2Cu);
    ctx->pc = 0x213D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213D24u;
            // 0x213d28: 0x7ce20000  sq          $v0, 0x0($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185D40u;
    if (runtime->hasFunction(0x185D40u)) {
        auto targetFn = runtime->lookupFunction(0x185D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213D2Cu; }
        if (ctx->pc != 0x213D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateWaterFrame__FiiPfPfP9mgCMemory_0x185d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213D2Cu; }
        if (ctx->pc != 0x213D2Cu) { return; }
    }
    ctx->pc = 0x213D2Cu;
label_213d2c:
    // 0x213d2c: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x213d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
label_213d30:
    // 0x213d30: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x213d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_213d34:
    // 0x213d34: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_213d38:
    if (ctx->pc == 0x213D38u) {
        ctx->pc = 0x213D38u;
            // 0x213d38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213D3Cu;
        goto label_213d3c;
    }
    ctx->pc = 0x213D34u;
    {
        const bool branch_taken_0x213d34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x213D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213D34u;
            // 0x213d38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d34) {
            ctx->pc = 0x213D70u;
            goto label_213d70;
        }
    }
    ctx->pc = 0x213D3Cu;
label_213d3c:
    // 0x213d3c: 0xc0616c8  jal         func_185B20
label_213d40:
    if (ctx->pc == 0x213D40u) {
        ctx->pc = 0x213D44u;
        goto label_213d44;
    }
    ctx->pc = 0x213D3Cu;
    SET_GPR_U32(ctx, 31, 0x213D44u);
    ctx->pc = 0x185B20u;
    if (runtime->hasFunction(0x185B20u)) {
        auto targetFn = runtime->lookupFunction(0x185B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213D44u; }
        if (ctx->pc != 0x213D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexture__11CWaterFrameFP10mgCTexture_0x185b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213D44u; }
        if (ctx->pc != 0x213D44u) { return; }
    }
    ctx->pc = 0x213D44u;
label_213d44:
    // 0x213d44: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x213d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_213d48:
    // 0x213d48: 0x3c02423c  lui         $v0, 0x423C
    ctx->pc = 0x213d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16956 << 16));
label_213d4c:
    // 0x213d4c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x213d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_213d50:
    // 0x213d50: 0x3c03c208  lui         $v1, 0xC208
    ctx->pc = 0x213d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49672 << 16));
label_213d54:
    // 0x213d54: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x213d54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_213d58:
    // 0x213d58: 0x3c02c1ac  lui         $v0, 0xC1AC
    ctx->pc = 0x213d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49580 << 16));
label_213d5c:
    // 0x213d5c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x213d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_213d60:
    // 0x213d60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x213d60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_213d64:
    // 0x213d64: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x213d64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_213d68:
    // 0x213d68: 0x320f809  jalr        $t9
label_213d6c:
    if (ctx->pc == 0x213D6Cu) {
        ctx->pc = 0x213D70u;
        goto label_213d70;
    }
    ctx->pc = 0x213D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x213D70u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x213D70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x213D70u; }
            if (ctx->pc != 0x213D70u) { return; }
        }
        }
    }
    ctx->pc = 0x213D70u;
label_213d70:
    // 0x213d70: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x213d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_213d74:
    // 0x213d74: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x213d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_213d78:
    // 0x213d78: 0x1640000f  bnez        $s2, . + 4 + (0xF << 2)
label_213d7c:
    if (ctx->pc == 0x213D7Cu) {
        ctx->pc = 0x213D7Cu;
            // 0x213d7c: 0xae0000f8  sw          $zero, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
        ctx->pc = 0x213D80u;
        goto label_213d80;
    }
    ctx->pc = 0x213D78u;
    {
        const bool branch_taken_0x213d78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x213D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213D78u;
            // 0x213d7c: 0xae0000f8  sw          $zero, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d78) {
            ctx->pc = 0x213DB8u;
            goto label_213db8;
        }
    }
    ctx->pc = 0x213D80u;
label_213d80:
    // 0x213d80: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x213d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_213d84:
    // 0x213d84: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x213d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_213d88:
    // 0x213d88: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x213d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_213d8c:
    // 0x213d8c: 0x27a601d8  addiu       $a2, $sp, 0x1D8
    ctx->pc = 0x213d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_213d90:
    // 0x213d90: 0xc0524dc  jal         func_149370
label_213d94:
    if (ctx->pc == 0x213D94u) {
        ctx->pc = 0x213D94u;
            // 0x213d94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213D98u;
        goto label_213d98;
    }
    ctx->pc = 0x213D90u;
    SET_GPR_U32(ctx, 31, 0x213D98u);
    ctx->pc = 0x213D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213D90u;
            // 0x213d94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213D98u; }
        if (ctx->pc != 0x213D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213D98u; }
        if (ctx->pc != 0x213D98u) { return; }
    }
    ctx->pc = 0x213D98u;
label_213d98:
    // 0x213d98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_213d9c:
    if (ctx->pc == 0x213D9Cu) {
        ctx->pc = 0x213DA0u;
        goto label_213da0;
    }
    ctx->pc = 0x213D98u;
    {
        const bool branch_taken_0x213d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213d98) {
            ctx->pc = 0x213DB8u;
            goto label_213db8;
        }
    }
    ctx->pc = 0x213DA0u;
label_213da0:
    // 0x213da0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x213da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_213da4:
    // 0x213da4: 0x260500c8  addiu       $a1, $s0, 0xC8
    ctx->pc = 0x213da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
label_213da8:
    // 0x213da8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x213da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213dac:
    // 0x213dac: 0xc04cb78  jal         func_132DE0
label_213db0:
    if (ctx->pc == 0x213DB0u) {
        ctx->pc = 0x213DB0u;
            // 0x213db0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213DB4u;
        goto label_213db4;
    }
    ctx->pc = 0x213DACu;
    SET_GPR_U32(ctx, 31, 0x213DB4u);
    ctx->pc = 0x213DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213DACu;
            // 0x213db0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213DB4u; }
        if (ctx->pc != 0x213DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213DB4u; }
        if (ctx->pc != 0x213DB4u) { return; }
    }
    ctx->pc = 0x213DB4u;
label_213db4:
    // 0x213db4: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x213db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
label_213db8:
    // 0x213db8: 0x8f9e920c  lw          $fp, -0x6DF4($gp)
    ctx->pc = 0x213db8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939148)));
label_213dbc:
    // 0x213dbc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x213dbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213dc0:
    // 0x213dc0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x213dc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213dc4:
    // 0x213dc4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x213dc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213dc8:
    // 0x213dc8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x213dc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213dcc:
    // 0x213dcc: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x213dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_213dd0:
    // 0x213dd0: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x213dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_213dd4:
    // 0x213dd4: 0xac600140  sw          $zero, 0x140($v1)
    ctx->pc = 0x213dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 0));
label_213dd8:
    // 0x213dd8: 0x2162021  addu        $a0, $s0, $s6
    ctx->pc = 0x213dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_213ddc:
    // 0x213ddc: 0xac4002b4  sw          $zero, 0x2B4($v0)
    ctx->pc = 0x213ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 692), GPR_U32(ctx, 0));
label_213de0:
    // 0x213de0: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x213de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_213de4:
    // 0x213de4: 0xac8001b8  sw          $zero, 0x1B8($a0)
    ctx->pc = 0x213de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 440), GPR_U32(ctx, 0));
label_213de8:
    // 0x213de8: 0x2442c480  addiu       $v0, $v0, -0x3B80
    ctx->pc = 0x213de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952064));
label_213dec:
    // 0x213dec: 0xac8001b0  sw          $zero, 0x1B0($a0)
    ctx->pc = 0x213decu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 0));
label_213df0:
    // 0x213df0: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x213df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_213df4:
    // 0x213df4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x213df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_213df8:
    // 0x213df8: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x213df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_213dfc:
    // 0x213dfc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x213dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_213e00:
    // 0x213e00: 0x844502cc  lh          $a1, 0x2CC($v0)
    ctx->pc = 0x213e00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 716)));
label_213e04:
    // 0x213e04: 0xc04b950  jal         func_12E540
label_213e08:
    if (ctx->pc == 0x213E08u) {
        ctx->pc = 0x213E08u;
            // 0x213e08: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213E0Cu;
        goto label_213e0c;
    }
    ctx->pc = 0x213E04u;
    SET_GPR_U32(ctx, 31, 0x213E0Cu);
    ctx->pc = 0x213E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213E04u;
            // 0x213e08: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213E0Cu; }
        if (ctx->pc != 0x213E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213E0Cu; }
        if (ctx->pc != 0x213E0Cu) { return; }
    }
    ctx->pc = 0x213E0Cu;
label_213e0c:
    // 0x213e0c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x213e0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_213e10:
    // 0x213e10: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x213e10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_213e14:
    // 0x213e14: 0x2aa20006  slti        $v0, $s5, 0x6
    ctx->pc = 0x213e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)6) ? 1 : 0);
label_213e18:
    // 0x213e18: 0x26d60030  addiu       $s6, $s6, 0x30
    ctx->pc = 0x213e18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
label_213e1c:
    // 0x213e1c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_213e20:
    if (ctx->pc == 0x213E20u) {
        ctx->pc = 0x213E20u;
            // 0x213e20: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x213E24u;
        goto label_213e24;
    }
    ctx->pc = 0x213E1Cu;
    {
        const bool branch_taken_0x213e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213E1Cu;
            // 0x213e20: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e1c) {
            ctx->pc = 0x213DCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_213dcc;
        }
    }
    ctx->pc = 0x213E24u;
label_213e24:
    // 0x213e24: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x213e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_213e28:
    // 0x213e28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_213e2c:
    // 0x213e2c: 0xc066888  jal         func_19A220
label_213e30:
    if (ctx->pc == 0x213E30u) {
        ctx->pc = 0x213E30u;
            // 0x213e30: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213E34u;
        goto label_213e34;
    }
    ctx->pc = 0x213E2Cu;
    SET_GPR_U32(ctx, 31, 0x213E34u);
    ctx->pc = 0x213E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213E2Cu;
            // 0x213e30: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A220u;
    if (runtime->hasFunction(0x19A220u)) {
        auto targetFn = runtime->lookupFunction(0x19A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213E34u; }
        if (ctx->pc != 0x213E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAquariumFishTop__13CFishAquariumFi_0x19a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213E34u; }
        if (ctx->pc != 0x213E34u) { return; }
    }
    ctx->pc = 0x213E34u;
label_213e34:
    // 0x213e34: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x213e34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_213e38:
    // 0x213e38: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x213e38u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_213e3c:
    // 0x213e3c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_213e40:
    if (ctx->pc == 0x213E40u) {
        ctx->pc = 0x213E40u;
            // 0x213e40: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213E44u;
        goto label_213e44;
    }
    ctx->pc = 0x213E3Cu;
    {
        const bool branch_taken_0x213e3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213E3Cu;
            // 0x213e40: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e3c) {
            ctx->pc = 0x213E8Cu;
            goto label_213e8c;
        }
    }
    ctx->pc = 0x213E44u;
label_213e44:
    // 0x213e44: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x213e44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213e48:
    // 0x213e48: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x213e48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213e4c:
    // 0x213e4c: 0x2bd1021  addu        $v0, $s5, $sp
    ctx->pc = 0x213e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
label_213e50:
    // 0x213e50: 0x2f41821  addu        $v1, $s7, $s4
    ctx->pc = 0x213e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
label_213e54:
    // 0x213e54: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x213e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_213e58:
    // 0x213e58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x213e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_213e5c:
    // 0x213e5c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x213e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_213e60:
    // 0x213e60: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x213e60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_213e64:
    // 0x213e64: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_213e68:
    if (ctx->pc == 0x213E68u) {
        ctx->pc = 0x213E6Cu;
        goto label_213e6c;
    }
    ctx->pc = 0x213E64u;
    {
        const bool branch_taken_0x213e64 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x213e64) {
            ctx->pc = 0x213E78u;
            goto label_213e78;
        }
    }
    ctx->pc = 0x213E6Cu;
label_213e6c:
    // 0x213e6c: 0xc066538  jal         func_1994E0
label_213e70:
    if (ctx->pc == 0x213E70u) {
        ctx->pc = 0x213E74u;
        goto label_213e74;
    }
    ctx->pc = 0x213E6Cu;
    SET_GPR_U32(ctx, 31, 0x213E74u);
    ctx->pc = 0x1994E0u;
    if (runtime->hasFunction(0x1994E0u)) {
        auto targetFn = runtime->lookupFunction(0x1994E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213E74u; }
        if (ctx->pc != 0x213E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckParamLimmit__13CGameDataUsedFv_0x1994e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213E74u; }
        if (ctx->pc != 0x213E74u) { return; }
    }
    ctx->pc = 0x213E74u;
label_213e74:
    // 0x213e74: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x213e74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_213e78:
    // 0x213e78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x213e78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_213e7c:
    // 0x213e7c: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x213e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_213e80:
    // 0x213e80: 0x2694006c  addiu       $s4, $s4, 0x6C
    ctx->pc = 0x213e80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
label_213e84:
    // 0x213e84: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_213e88:
    if (ctx->pc == 0x213E88u) {
        ctx->pc = 0x213E88u;
            // 0x213e88: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x213E8Cu;
        goto label_213e8c;
    }
    ctx->pc = 0x213E84u;
    {
        const bool branch_taken_0x213e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213E84u;
            // 0x213e88: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e84) {
            ctx->pc = 0x213E4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_213e4c;
        }
    }
    ctx->pc = 0x213E8Cu;
label_213e8c:
    // 0x213e8c: 0x0  nop
    ctx->pc = 0x213e8cu;
    // NOP
label_213e90:
    // 0x213e90: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x213e90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_213e94:
    // 0x213e94: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
label_213e98:
    if (ctx->pc == 0x213E98u) {
        ctx->pc = 0x213E98u;
            // 0x213e98: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213E9Cu;
        goto label_213e9c;
    }
    ctx->pc = 0x213E94u;
    {
        const bool branch_taken_0x213e94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213E94u;
            // 0x213e98: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e94) {
            ctx->pc = 0x213F78u;
            goto label_213f78;
        }
    }
    ctx->pc = 0x213E9Cu;
label_213e9c:
    // 0x213e9c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x213e9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213ea0:
    // 0x213ea0: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x213ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_213ea4:
    // 0x213ea4: 0x8c460140  lw          $a2, 0x140($v0)
    ctx->pc = 0x213ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
label_213ea8:
    // 0x213ea8: 0x10c0002e  beqz        $a2, . + 4 + (0x2E << 2)
label_213eac:
    if (ctx->pc == 0x213EACu) {
        ctx->pc = 0x213EACu;
            // 0x213eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213EB0u;
        goto label_213eb0;
    }
    ctx->pc = 0x213EA8u;
    {
        const bool branch_taken_0x213ea8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x213EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213EA8u;
            // 0x213eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ea8) {
            ctx->pc = 0x213F64u;
            goto label_213f64;
        }
    }
    ctx->pc = 0x213EB0u;
label_213eb0:
    // 0x213eb0: 0xc084cf0  jal         func_2133C0
label_213eb4:
    if (ctx->pc == 0x213EB4u) {
        ctx->pc = 0x213EB4u;
            // 0x213eb4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213EB8u;
        goto label_213eb8;
    }
    ctx->pc = 0x213EB0u;
    SET_GPR_U32(ctx, 31, 0x213EB8u);
    ctx->pc = 0x213EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213EB0u;
            // 0x213eb4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2133C0u;
    if (runtime->hasFunction(0x2133C0u)) {
        auto targetFn = runtime->lookupFunction(0x2133C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213EB8u; }
        if (ctx->pc != 0x213EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFish__9CAquariumFiP13CGameDataUsed_0x2133c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213EB8u; }
        if (ctx->pc != 0x213EB8u) { return; }
    }
    ctx->pc = 0x213EB8u;
label_213eb8:
    // 0x213eb8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_213ebc:
    if (ctx->pc == 0x213EBCu) {
        ctx->pc = 0x213EBCu;
            // 0x213ebc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x213EC0u;
        goto label_213ec0;
    }
    ctx->pc = 0x213EB8u;
    {
        const bool branch_taken_0x213eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213EB8u;
            // 0x213ebc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213eb8) {
            ctx->pc = 0x213F64u;
            goto label_213f64;
        }
    }
    ctx->pc = 0x213EC0u;
label_213ec0:
    // 0x213ec0: 0xc0941b0  jal         func_2506C0
label_213ec4:
    if (ctx->pc == 0x213EC4u) {
        ctx->pc = 0x213EC4u;
            // 0x213ec4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213EC8u;
        goto label_213ec8;
    }
    ctx->pc = 0x213EC0u;
    SET_GPR_U32(ctx, 31, 0x213EC8u);
    ctx->pc = 0x213EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213EC0u;
            // 0x213ec4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213EC8u; }
        if (ctx->pc != 0x213EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213EC8u; }
        if (ctx->pc != 0x213EC8u) { return; }
    }
    ctx->pc = 0x213EC8u;
label_213ec8:
    // 0x213ec8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_213ecc:
    if (ctx->pc == 0x213ECCu) {
        ctx->pc = 0x213ED0u;
        goto label_213ed0;
    }
    ctx->pc = 0x213EC8u;
    {
        const bool branch_taken_0x213ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213ec8) {
            ctx->pc = 0x213ED4u;
            goto label_213ed4;
        }
    }
    ctx->pc = 0x213ED0u;
label_213ed0:
    // 0x213ed0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x213ed0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213ed4:
    // 0x213ed4: 0x0  nop
    ctx->pc = 0x213ed4u;
    // NOP
label_213ed8:
    // 0x213ed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213edc:
    // 0x213edc: 0x16420010  bne         $s2, $v0, . + 4 + (0x10 << 2)
label_213ee0:
    if (ctx->pc == 0x213EE0u) {
        ctx->pc = 0x213EE0u;
            // 0x213ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213EE4u;
        goto label_213ee4;
    }
    ctx->pc = 0x213EDCu;
    {
        const bool branch_taken_0x213edc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x213EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213EDCu;
            // 0x213ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213edc) {
            ctx->pc = 0x213F20u;
            goto label_213f20;
        }
    }
    ctx->pc = 0x213EE4u;
label_213ee4:
    // 0x213ee4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x213ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_213ee8:
    // 0x213ee8: 0xc085230  jal         func_2148C0
label_213eec:
    if (ctx->pc == 0x213EECu) {
        ctx->pc = 0x213EECu;
            // 0x213eec: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x213EF0u;
        goto label_213ef0;
    }
    ctx->pc = 0x213EE8u;
    SET_GPR_U32(ctx, 31, 0x213EF0u);
    ctx->pc = 0x213EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213EE8u;
            // 0x213eec: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2148C0u;
    if (runtime->hasFunction(0x2148C0u)) {
        auto targetFn = runtime->lookupFunction(0x2148C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213EF0u; }
        if (ctx->pc != 0x213EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleTarget__9CAquariumFi_0x2148c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213EF0u; }
        if (ctx->pc != 0x213EF0u) { return; }
    }
    ctx->pc = 0x213EF0u;
label_213ef0:
    // 0x213ef0: 0x27a30178  addiu       $v1, $sp, 0x178
    ctx->pc = 0x213ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_213ef4:
    // 0x213ef4: 0x27a40174  addiu       $a0, $sp, 0x174
    ctx->pc = 0x213ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_213ef8:
    // 0x213ef8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x213ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_213efc:
    // 0x213efc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x213efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_213f00:
    // 0x213f00: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x213f00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_213f04:
    // 0x213f04: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x213f04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_213f08:
    // 0x213f08: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_213f0c:
    if (ctx->pc == 0x213F0Cu) {
        ctx->pc = 0x213F10u;
        goto label_213f10;
    }
    ctx->pc = 0x213F08u;
    {
        const bool branch_taken_0x213f08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x213f08) {
            ctx->pc = 0x213F20u;
            goto label_213f20;
        }
    }
    ctx->pc = 0x213F10u;
label_213f10:
    // 0x213f10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x213f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_213f14:
    // 0x213f14: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x213f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_213f18:
    // 0x213f18: 0x8c4202b4  lw          $v0, 0x2B4($v0)
    ctx->pc = 0x213f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_213f1c:
    // 0x213f1c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x213f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_213f20:
    // 0x213f20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x213f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_213f24:
    // 0x213f24: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
label_213f28:
    if (ctx->pc == 0x213F28u) {
        ctx->pc = 0x213F28u;
            // 0x213f28: 0x2141021  addu        $v0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->pc = 0x213F2Cu;
        goto label_213f2c;
    }
    ctx->pc = 0x213F24u;
    {
        const bool branch_taken_0x213f24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x213F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213F24u;
            // 0x213f28: 0x2141021  addu        $v0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f24) {
            ctx->pc = 0x213F3Cu;
            goto label_213f3c;
        }
    }
    ctx->pc = 0x213F2Cu;
label_213f2c:
    // 0x213f2c: 0x24130007  addiu       $s3, $zero, 0x7
    ctx->pc = 0x213f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_213f30:
    // 0x213f30: 0x8c4202b4  lw          $v0, 0x2B4($v0)
    ctx->pc = 0x213f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_213f34:
    // 0x213f34: 0xc0834d4  jal         func_20D350
label_213f38:
    if (ctx->pc == 0x213F38u) {
        ctx->pc = 0x213F38u;
            // 0x213f38: 0x244406c0  addiu       $a0, $v0, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
        ctx->pc = 0x213F3Cu;
        goto label_213f3c;
    }
    ctx->pc = 0x213F34u;
    SET_GPR_U32(ctx, 31, 0x213F3Cu);
    ctx->pc = 0x213F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213F34u;
            // 0x213f38: 0x244406c0  addiu       $a0, $v0, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D350u;
    if (runtime->hasFunction(0x20D350u)) {
        auto targetFn = runtime->lookupFunction(0x20D350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F3Cu; }
        if (ctx->pc != 0x213F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__20CAquaFishActionParamFv_0x20d350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F3Cu; }
        if (ctx->pc != 0x213F3Cu) { return; }
    }
    ctx->pc = 0x213F3Cu;
label_213f3c:
    // 0x213f3c: 0x0  nop
    ctx->pc = 0x213f3cu;
    // NOP
label_213f40:
    // 0x213f40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213f44:
    // 0x213f44: 0x16c20002  bne         $s6, $v0, . + 4 + (0x2 << 2)
label_213f48:
    if (ctx->pc == 0x213F48u) {
        ctx->pc = 0x213F4Cu;
        goto label_213f4c;
    }
    ctx->pc = 0x213F44u;
    {
        const bool branch_taken_0x213f44 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x213f44) {
            ctx->pc = 0x213F50u;
            goto label_213f50;
        }
    }
    ctx->pc = 0x213F4Cu;
label_213f4c:
    // 0x213f4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x213f4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213f50:
    // 0x213f50: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x213f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_213f54:
    // 0x213f54: 0x8c4402b4  lw          $a0, 0x2B4($v0)
    ctx->pc = 0x213f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_213f58:
    // 0x213f58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x213f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_213f5c:
    // 0x213f5c: 0xc083900  jal         func_20E400
label_213f60:
    if (ctx->pc == 0x213F60u) {
        ctx->pc = 0x213F60u;
            // 0x213f60: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x213F64u;
        goto label_213f64;
    }
    ctx->pc = 0x213F5Cu;
    SET_GPR_U32(ctx, 31, 0x213F64u);
    ctx->pc = 0x213F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213F5Cu;
            // 0x213f60: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E400u;
    if (runtime->hasFunction(0x20E400u)) {
        auto targetFn = runtime->lookupFunction(0x20E400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F64u; }
        if (ctx->pc != 0x213F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextThink__9CAquaFishFiP16NEXT_THINK_PARAM_0x20e400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F64u; }
        if (ctx->pc != 0x213F64u) { return; }
    }
    ctx->pc = 0x213F64u;
label_213f64:
    // 0x213f64: 0x0  nop
    ctx->pc = 0x213f64u;
    // NOP
label_213f68:
    // 0x213f68: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x213f68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_213f6c:
    // 0x213f6c: 0x2b1102a  slt         $v0, $s5, $s1
    ctx->pc = 0x213f6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_213f70:
    // 0x213f70: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
label_213f74:
    if (ctx->pc == 0x213F74u) {
        ctx->pc = 0x213F74u;
            // 0x213f74: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x213F78u;
        goto label_213f78;
    }
    ctx->pc = 0x213F70u;
    {
        const bool branch_taken_0x213f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213F70u;
            // 0x213f74: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f70) {
            ctx->pc = 0x213EA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_213ea0;
        }
    }
    ctx->pc = 0x213F78u;
label_213f78:
    // 0x213f78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x213f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_213f7c:
    // 0x213f7c: 0x16420044  bne         $s2, $v0, . + 4 + (0x44 << 2)
label_213f80:
    if (ctx->pc == 0x213F80u) {
        ctx->pc = 0x213F80u;
            // 0x213f80: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x213F84u;
        goto label_213f84;
    }
    ctx->pc = 0x213F7Cu;
    {
        const bool branch_taken_0x213f7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x213F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213F7Cu;
            // 0x213f80: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f7c) {
            ctx->pc = 0x214090u;
            goto label_214090;
        }
    }
    ctx->pc = 0x213F84u;
label_213f84:
    // 0x213f84: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x213f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_213f88:
    // 0x213f88: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x213f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_213f8c:
    // 0x213f8c: 0x2442fc10  addiu       $v0, $v0, -0x3F0
    ctx->pc = 0x213f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966288));
label_213f90:
    // 0x213f90: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x213f90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_213f94:
    // 0x213f94: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x213f94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_213f98:
    // 0x213f98: 0x8e0202b4  lw          $v0, 0x2B4($s0)
    ctx->pc = 0x213f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
label_213f9c:
    // 0x213f9c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_213fa0:
    if (ctx->pc == 0x213FA0u) {
        ctx->pc = 0x213FA0u;
            // 0x213fa0: 0x3c0240c0  lui         $v0, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
        ctx->pc = 0x213FA4u;
        goto label_213fa4;
    }
    ctx->pc = 0x213F9Cu;
    {
        const bool branch_taken_0x213f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213F9Cu;
            // 0x213fa0: 0x3c0240c0  lui         $v0, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f9c) {
            ctx->pc = 0x21400Cu;
            goto label_21400c;
        }
    }
    ctx->pc = 0x213FA4u;
label_213fa4:
    // 0x213fa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x213fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_213fa8:
    // 0x213fa8: 0xc0941c0  jal         func_250700
label_213fac:
    if (ctx->pc == 0x213FACu) {
        ctx->pc = 0x213FB0u;
        goto label_213fb0;
    }
    ctx->pc = 0x213FA8u;
    SET_GPR_U32(ctx, 31, 0x213FB0u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FB0u; }
        if (ctx->pc != 0x213FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FB0u; }
        if (ctx->pc != 0x213FB0u) { return; }
    }
    ctx->pc = 0x213FB0u;
label_213fb0:
    // 0x213fb0: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x213fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_213fb4:
    // 0x213fb4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x213fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_213fb8:
    // 0x213fb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x213fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_213fbc:
    // 0x213fbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x213fbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_213fc0:
    // 0x213fc0: 0xc0941c0  jal         func_250700
label_213fc4:
    if (ctx->pc == 0x213FC4u) {
        ctx->pc = 0x213FC4u;
            // 0x213fc4: 0xe7a00180  swc1        $f0, 0x180($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
        ctx->pc = 0x213FC8u;
        goto label_213fc8;
    }
    ctx->pc = 0x213FC0u;
    SET_GPR_U32(ctx, 31, 0x213FC8u);
    ctx->pc = 0x213FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213FC0u;
            // 0x213fc4: 0xe7a00180  swc1        $f0, 0x180($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FC8u; }
        if (ctx->pc != 0x213FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FC8u; }
        if (ctx->pc != 0x213FC8u) { return; }
    }
    ctx->pc = 0x213FC8u;
label_213fc8:
    // 0x213fc8: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x213fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_213fcc:
    // 0x213fcc: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x213fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_213fd0:
    // 0x213fd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x213fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_213fd4:
    // 0x213fd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x213fd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_213fd8:
    // 0x213fd8: 0xc0941c0  jal         func_250700
label_213fdc:
    if (ctx->pc == 0x213FDCu) {
        ctx->pc = 0x213FDCu;
            // 0x213fdc: 0xe7a00184  swc1        $f0, 0x184($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
        ctx->pc = 0x213FE0u;
        goto label_213fe0;
    }
    ctx->pc = 0x213FD8u;
    SET_GPR_U32(ctx, 31, 0x213FE0u);
    ctx->pc = 0x213FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213FD8u;
            // 0x213fdc: 0xe7a00184  swc1        $f0, 0x184($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FE0u; }
        if (ctx->pc != 0x213FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FE0u; }
        if (ctx->pc != 0x213FE0u) { return; }
    }
    ctx->pc = 0x213FE0u;
label_213fe0:
    // 0x213fe0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x213fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_213fe4:
    // 0x213fe4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x213fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_213fe8:
    // 0x213fe8: 0xc7a10188  lwc1        $f1, 0x188($sp)
    ctx->pc = 0x213fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_213fec:
    // 0x213fec: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x213fecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_213ff0:
    // 0x213ff0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x213ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_213ff4:
    // 0x213ff4: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x213ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_213ff8:
    // 0x213ff8: 0x8e0402b4  lw          $a0, 0x2B4($s0)
    ctx->pc = 0x213ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
label_213ffc:
    // 0x213ffc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x213ffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_214000:
    // 0x214000: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x214000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_214004:
    // 0x214004: 0x320f809  jalr        $t9
label_214008:
    if (ctx->pc == 0x214008u) {
        ctx->pc = 0x214008u;
            // 0x214008: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x21400Cu;
        goto label_21400c;
    }
    ctx->pc = 0x214004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21400Cu);
        ctx->pc = 0x214008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214004u;
            // 0x214008: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21400Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21400Cu; }
            if (ctx->pc != 0x21400Cu) { return; }
        }
        }
    }
    ctx->pc = 0x21400Cu;
label_21400c:
    // 0x21400c: 0x8e0202b8  lw          $v0, 0x2B8($s0)
    ctx->pc = 0x21400cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
label_214010:
    // 0x214010: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_214014:
    if (ctx->pc == 0x214014u) {
        ctx->pc = 0x214014u;
            // 0x214014: 0x3c0240c0  lui         $v0, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
        ctx->pc = 0x214018u;
        goto label_214018;
    }
    ctx->pc = 0x214010u;
    {
        const bool branch_taken_0x214010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214010u;
            // 0x214014: 0x3c0240c0  lui         $v0, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214010) {
            ctx->pc = 0x21408Cu;
            goto label_21408c;
        }
    }
    ctx->pc = 0x214018u;
label_214018:
    // 0x214018: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x214018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21401c:
    // 0x21401c: 0xc0941c0  jal         func_250700
label_214020:
    if (ctx->pc == 0x214020u) {
        ctx->pc = 0x214024u;
        goto label_214024;
    }
    ctx->pc = 0x21401Cu;
    SET_GPR_U32(ctx, 31, 0x214024u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214024u; }
        if (ctx->pc != 0x214024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214024u; }
        if (ctx->pc != 0x214024u) { return; }
    }
    ctx->pc = 0x214024u;
label_214024:
    // 0x214024: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x214024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_214028:
    // 0x214028: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x214028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_21402c:
    // 0x21402c: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x21402cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_214030:
    // 0x214030: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x214030u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_214034:
    // 0x214034: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x214034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_214038:
    // 0x214038: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x214038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21403c:
    // 0x21403c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21403cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_214040:
    // 0x214040: 0xc0941c0  jal         func_250700
label_214044:
    if (ctx->pc == 0x214044u) {
        ctx->pc = 0x214044u;
            // 0x214044: 0xe7a00180  swc1        $f0, 0x180($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
        ctx->pc = 0x214048u;
        goto label_214048;
    }
    ctx->pc = 0x214040u;
    SET_GPR_U32(ctx, 31, 0x214048u);
    ctx->pc = 0x214044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214040u;
            // 0x214044: 0xe7a00180  swc1        $f0, 0x180($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214048u; }
        if (ctx->pc != 0x214048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214048u; }
        if (ctx->pc != 0x214048u) { return; }
    }
    ctx->pc = 0x214048u;
label_214048:
    // 0x214048: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x214048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21404c:
    // 0x21404c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x21404cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_214050:
    // 0x214050: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x214050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_214054:
    // 0x214054: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x214054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_214058:
    // 0x214058: 0xc0941c0  jal         func_250700
label_21405c:
    if (ctx->pc == 0x21405Cu) {
        ctx->pc = 0x21405Cu;
            // 0x21405c: 0xe7a00184  swc1        $f0, 0x184($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
        ctx->pc = 0x214060u;
        goto label_214060;
    }
    ctx->pc = 0x214058u;
    SET_GPR_U32(ctx, 31, 0x214060u);
    ctx->pc = 0x21405Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214058u;
            // 0x21405c: 0xe7a00184  swc1        $f0, 0x184($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214060u; }
        if (ctx->pc != 0x214060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214060u; }
        if (ctx->pc != 0x214060u) { return; }
    }
    ctx->pc = 0x214060u;
label_214060:
    // 0x214060: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x214060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_214064:
    // 0x214064: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x214064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_214068:
    // 0x214068: 0xc7a10188  lwc1        $f1, 0x188($sp)
    ctx->pc = 0x214068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21406c:
    // 0x21406c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x21406cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_214070:
    // 0x214070: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x214070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_214074:
    // 0x214074: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x214074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_214078:
    // 0x214078: 0x8e0402b8  lw          $a0, 0x2B8($s0)
    ctx->pc = 0x214078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
label_21407c:
    // 0x21407c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x21407cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_214080:
    // 0x214080: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x214080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_214084:
    // 0x214084: 0x320f809  jalr        $t9
label_214088:
    if (ctx->pc == 0x214088u) {
        ctx->pc = 0x214088u;
            // 0x214088: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x21408Cu;
        goto label_21408c;
    }
    ctx->pc = 0x214084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21408Cu);
        ctx->pc = 0x214088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214084u;
            // 0x214088: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21408Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21408Cu; }
            if (ctx->pc != 0x21408Cu) { return; }
        }
        }
    }
    ctx->pc = 0x21408Cu;
label_21408c:
    // 0x21408c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21408cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_214090:
    // 0x214090: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x214090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_214094:
    // 0x214094: 0xa603038c  sh          $v1, 0x38C($s0)
    ctx->pc = 0x214094u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 908), (uint16_t)GPR_U32(ctx, 3));
label_214098:
    // 0x214098: 0x16420060  bne         $s2, $v0, . + 4 + (0x60 << 2)
label_21409c:
    if (ctx->pc == 0x21409Cu) {
        ctx->pc = 0x21409Cu;
            // 0x21409c: 0xae000390  sw          $zero, 0x390($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 912), GPR_U32(ctx, 0));
        ctx->pc = 0x2140A0u;
        goto label_2140a0;
    }
    ctx->pc = 0x214098u;
    {
        const bool branch_taken_0x214098 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x21409Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214098u;
            // 0x21409c: 0xae000390  sw          $zero, 0x390($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214098) {
            ctx->pc = 0x21421Cu;
            goto label_21421c;
        }
    }
    ctx->pc = 0x2140A0u;
label_2140a0:
    // 0x2140a0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2140a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2140a4:
    // 0x2140a4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2140a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2140a8:
    // 0x2140a8: 0x2484a0a0  addiu       $a0, $a0, -0x5F60
    ctx->pc = 0x2140a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942880));
label_2140ac:
    // 0x2140ac: 0x27a601dc  addiu       $a2, $sp, 0x1DC
    ctx->pc = 0x2140acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
label_2140b0:
    // 0x2140b0: 0xc0524dc  jal         func_149370
label_2140b4:
    if (ctx->pc == 0x2140B4u) {
        ctx->pc = 0x2140B4u;
            // 0x2140b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2140B8u;
        goto label_2140b8;
    }
    ctx->pc = 0x2140B0u;
    SET_GPR_U32(ctx, 31, 0x2140B8u);
    ctx->pc = 0x2140B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2140B0u;
            // 0x2140b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140B8u; }
        if (ctx->pc != 0x2140B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140B8u; }
        if (ctx->pc != 0x2140B8u) { return; }
    }
    ctx->pc = 0x2140B8u;
label_2140b8:
    // 0x2140b8: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_2140bc:
    if (ctx->pc == 0x2140BCu) {
        ctx->pc = 0x2140BCu;
            // 0x2140bc: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x2140C0u;
        goto label_2140c0;
    }
    ctx->pc = 0x2140B8u;
    {
        const bool branch_taken_0x2140b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2140BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2140B8u;
            // 0x2140bc: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140b8) {
            ctx->pc = 0x214220u;
            goto label_214220;
        }
    }
    ctx->pc = 0x2140C0u;
label_2140c0:
    // 0x2140c0: 0xc04e640  jal         func_139900
label_2140c4:
    if (ctx->pc == 0x2140C4u) {
        ctx->pc = 0x2140C4u;
            // 0x2140c4: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x2140C8u;
        goto label_2140c8;
    }
    ctx->pc = 0x2140C0u;
    SET_GPR_U32(ctx, 31, 0x2140C8u);
    ctx->pc = 0x2140C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2140C0u;
            // 0x2140c4: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140C8u; }
        if (ctx->pc != 0x2140C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140C8u; }
        if (ctx->pc != 0x2140C8u) { return; }
    }
    ctx->pc = 0x2140C8u;
label_2140c8:
    // 0x2140c8: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x2140c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_2140cc:
    // 0x2140cc: 0x3c01fffc  lui         $at, 0xFFFC
    ctx->pc = 0x2140ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65532 << 16));
label_2140d0:
    // 0x2140d0: 0x34216800  ori         $at, $at, 0x6800
    ctx->pc = 0x2140d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26624);
label_2140d4:
    // 0x2140d4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2140d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2140d8:
    // 0x2140d8: 0x24063980  addiu       $a2, $zero, 0x3980
    ctx->pc = 0x2140d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14720));
label_2140dc:
    // 0x2140dc: 0xc04e79c  jal         func_139E70
label_2140e0:
    if (ctx->pc == 0x2140E0u) {
        ctx->pc = 0x2140E0u;
            // 0x2140e0: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->pc = 0x2140E4u;
        goto label_2140e4;
    }
    ctx->pc = 0x2140DCu;
    SET_GPR_U32(ctx, 31, 0x2140E4u);
    ctx->pc = 0x2140E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2140DCu;
            // 0x2140e0: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140E4u; }
        if (ctx->pc != 0x2140E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140E4u; }
        if (ctx->pc != 0x2140E4u) { return; }
    }
    ctx->pc = 0x2140E4u;
label_2140e4:
    // 0x2140e4: 0x860202d0  lh          $v0, 0x2D0($s0)
    ctx->pc = 0x2140e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 720)));
label_2140e8:
    // 0x2140e8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2140e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2140ec:
    // 0x2140ec: 0xa602038c  sh          $v0, 0x38C($s0)
    ctx->pc = 0x2140ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 908), (uint16_t)GPR_U32(ctx, 2));
label_2140f0:
    // 0x2140f0: 0x8605038c  lh          $a1, 0x38C($s0)
    ctx->pc = 0x2140f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 908)));
label_2140f4:
    // 0x2140f4: 0xc04b950  jal         func_12E540
label_2140f8:
    if (ctx->pc == 0x2140F8u) {
        ctx->pc = 0x2140F8u;
            // 0x2140f8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x2140FCu;
        goto label_2140fc;
    }
    ctx->pc = 0x2140F4u;
    SET_GPR_U32(ctx, 31, 0x2140FCu);
    ctx->pc = 0x2140F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2140F4u;
            // 0x2140f8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140FCu; }
        if (ctx->pc != 0x2140FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140FCu; }
        if (ctx->pc != 0x2140FCu) { return; }
    }
    ctx->pc = 0x2140FCu;
label_2140fc:
    // 0x2140fc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2140fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_214100:
    // 0x214100: 0xc04e748  jal         func_139D20
label_214104:
    if (ctx->pc == 0x214104u) {
        ctx->pc = 0x214104u;
            // 0x214104: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x214108u;
        goto label_214108;
    }
    ctx->pc = 0x214100u;
    SET_GPR_U32(ctx, 31, 0x214108u);
    ctx->pc = 0x214104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214100u;
            // 0x214104: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214108u; }
        if (ctx->pc != 0x214108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214108u; }
        if (ctx->pc != 0x214108u) { return; }
    }
    ctx->pc = 0x214108u;
label_214108:
    // 0x214108: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x214108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_21410c:
    // 0x21410c: 0xc04e638  jal         func_1398E0
label_214110:
    if (ctx->pc == 0x214110u) {
        ctx->pc = 0x214110u;
            // 0x214110: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214114u;
        goto label_214114;
    }
    ctx->pc = 0x21410Cu;
    SET_GPR_U32(ctx, 31, 0x214114u);
    ctx->pc = 0x214110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21410Cu;
            // 0x214110: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214114u; }
        if (ctx->pc != 0x214114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214114u; }
        if (ctx->pc != 0x214114u) { return; }
    }
    ctx->pc = 0x214114u;
label_214114:
    // 0x214114: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_214118:
    if (ctx->pc == 0x214118u) {
        ctx->pc = 0x214118u;
            // 0x214118: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21411Cu;
        goto label_21411c;
    }
    ctx->pc = 0x214114u;
    {
        const bool branch_taken_0x214114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214114u;
            // 0x214118: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214114) {
            ctx->pc = 0x214198u;
            goto label_214198;
        }
    }
    ctx->pc = 0x21411Cu;
label_21411c:
    // 0x21411c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x21411cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_214120:
    // 0x214120: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x214120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_214124:
    // 0x214124: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x214124u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_214128:
    // 0x214128: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x214128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21412c:
    // 0x21412c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x21412cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_214130:
    // 0x214130: 0x320f809  jalr        $t9
label_214134:
    if (ctx->pc == 0x214134u) {
        ctx->pc = 0x214134u;
            // 0x214134: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214138u;
        goto label_214138;
    }
    ctx->pc = 0x214130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x214138u);
        ctx->pc = 0x214134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214130u;
            // 0x214134: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x214138u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x214138u; }
            if (ctx->pc != 0x214138u) { return; }
        }
        }
    }
    ctx->pc = 0x214138u;
label_214138:
    // 0x214138: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x214138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_21413c:
    // 0x21413c: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x21413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_214140:
    // 0x214140: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x214140u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_214144:
    // 0x214144: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x214144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_214148:
    // 0x214148: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x214148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_21414c:
    // 0x21414c: 0x320f809  jalr        $t9
label_214150:
    if (ctx->pc == 0x214150u) {
        ctx->pc = 0x214150u;
            // 0x214150: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214154u;
        goto label_214154;
    }
    ctx->pc = 0x21414Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x214154u);
        ctx->pc = 0x214150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21414Cu;
            // 0x214150: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x214154u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x214154u; }
            if (ctx->pc != 0x214154u) { return; }
        }
        }
    }
    ctx->pc = 0x214154u;
label_214154:
    // 0x214154: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x214154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_214158:
    // 0x214158: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x214158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_21415c:
    // 0x21415c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x21415cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_214160:
    // 0x214160: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x214160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_214164:
    // 0x214164: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x214164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_214168:
    // 0x214168: 0x320f809  jalr        $t9
label_21416c:
    if (ctx->pc == 0x21416Cu) {
        ctx->pc = 0x21416Cu;
            // 0x21416c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214170u;
        goto label_214170;
    }
    ctx->pc = 0x214168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x214170u);
        ctx->pc = 0x21416Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214168u;
            // 0x21416c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x214170u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x214170u; }
            if (ctx->pc != 0x214170u) { return; }
        }
        }
    }
    ctx->pc = 0x214170u;
label_214170:
    // 0x214170: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x214170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_214174:
    // 0x214174: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x214174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_214178:
    // 0x214178: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x214178u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_21417c:
    // 0x21417c: 0xae60035c  sw          $zero, 0x35C($s3)
    ctx->pc = 0x21417cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 860), GPR_U32(ctx, 0));
label_214180:
    // 0x214180: 0xae600364  sw          $zero, 0x364($s3)
    ctx->pc = 0x214180u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 868), GPR_U32(ctx, 0));
label_214184:
    // 0x214184: 0xae600360  sw          $zero, 0x360($s3)
    ctx->pc = 0x214184u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 864), GPR_U32(ctx, 0));
label_214188:
    // 0x214188: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x214188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21418c:
    // 0x21418c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x21418cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_214190:
    // 0x214190: 0x320f809  jalr        $t9
label_214194:
    if (ctx->pc == 0x214194u) {
        ctx->pc = 0x214194u;
            // 0x214194: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214198u;
        goto label_214198;
    }
    ctx->pc = 0x214190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x214198u);
        ctx->pc = 0x214194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214190u;
            // 0x214194: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x214198u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x214198u; }
            if (ctx->pc != 0x214198u) { return; }
        }
        }
    }
    ctx->pc = 0x214198u;
label_214198:
    // 0x214198: 0xae130390  sw          $s3, 0x390($s0)
    ctx->pc = 0x214198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 912), GPR_U32(ctx, 19));
label_21419c:
    // 0x21419c: 0x8e040390  lw          $a0, 0x390($s0)
    ctx->pc = 0x21419cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
label_2141a0:
    // 0x2141a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2141a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2141a4:
    // 0x2141a4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2141a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2141a8:
    // 0x2141a8: 0x320f809  jalr        $t9
label_2141ac:
    if (ctx->pc == 0x2141ACu) {
        ctx->pc = 0x2141B0u;
        goto label_2141b0;
    }
    ctx->pc = 0x2141A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2141B0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2141B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2141B0u; }
            if (ctx->pc != 0x2141B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2141B0u;
label_2141b0:
    // 0x2141b0: 0x8e040390  lw          $a0, 0x390($s0)
    ctx->pc = 0x2141b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
label_2141b4:
    // 0x2141b4: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x2141b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2141b8:
    // 0x2141b8: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2141b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2141bc:
    // 0x2141bc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2141bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2141c0:
    // 0x2141c0: 0x860a038c  lh          $t2, 0x38C($s0)
    ctx->pc = 0x2141c0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 908)));
label_2141c4:
    // 0x2141c4: 0x24c69f88  addiu       $a2, $a2, -0x6078
    ctx->pc = 0x2141c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942600));
label_2141c8:
    // 0x2141c8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2141c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2141cc:
    // 0x2141cc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2141ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2141d0:
    // 0x2141d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2141d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2141d4:
    // 0x2141d4: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x2141d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_2141d8:
    // 0x2141d8: 0x320f809  jalr        $t9
label_2141dc:
    if (ctx->pc == 0x2141DCu) {
        ctx->pc = 0x2141DCu;
            // 0x2141dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2141E0u;
        goto label_2141e0;
    }
    ctx->pc = 0x2141D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2141E0u);
        ctx->pc = 0x2141DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2141D8u;
            // 0x2141dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2141E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2141E0u; }
            if (ctx->pc != 0x2141E0u) { return; }
        }
        }
    }
    ctx->pc = 0x2141E0u;
label_2141e0:
    // 0x2141e0: 0x8e040390  lw          $a0, 0x390($s0)
    ctx->pc = 0x2141e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
label_2141e4:
    // 0x2141e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2141e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2141e8:
    // 0x2141e8: 0x3c02c284  lui         $v0, 0xC284
    ctx->pc = 0x2141e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49796 << 16));
label_2141ec:
    // 0x2141ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2141ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2141f0:
    // 0x2141f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2141f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2141f4:
    // 0x2141f4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2141f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2141f8:
    // 0x2141f8: 0x320f809  jalr        $t9
label_2141fc:
    if (ctx->pc == 0x2141FCu) {
        ctx->pc = 0x2141FCu;
            // 0x2141fc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x214200u;
        goto label_214200;
    }
    ctx->pc = 0x2141F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x214200u);
        ctx->pc = 0x2141FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2141F8u;
            // 0x2141fc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x214200u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x214200u; }
            if (ctx->pc != 0x214200u) { return; }
        }
        }
    }
    ctx->pc = 0x214200u;
label_214200:
    // 0x214200: 0x8e020390  lw          $v0, 0x390($s0)
    ctx->pc = 0x214200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
label_214204:
    // 0x214204: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x214204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_214208:
    // 0x214208: 0x8c6400f4  lw          $a0, 0xF4($v1)
    ctx->pc = 0x214208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_21420c:
    // 0x21420c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_214210:
    if (ctx->pc == 0x214210u) {
        ctx->pc = 0x214210u;
            // 0x214210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x214214u;
        goto label_214214;
    }
    ctx->pc = 0x21420Cu;
    {
        const bool branch_taken_0x21420c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x214210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21420Cu;
            // 0x214210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21420c) {
            ctx->pc = 0x21421Cu;
            goto label_21421c;
        }
    }
    ctx->pc = 0x214214u;
label_214214:
    // 0x214214: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x214214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_214218:
    // 0x214218: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x214218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
label_21421c:
    // 0x21421c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x21421cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_214220:
    // 0x214220: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x214220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_214224:
    // 0x214224: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x214224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_214228:
    // 0x214228: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x214228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_21422c:
    // 0x21422c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x21422cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_214230:
    // 0x214230: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x214230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_214234:
    // 0x214234: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x214234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_214238:
    // 0x214238: 0x8c430188  lw          $v1, 0x188($v0)
    ctx->pc = 0x214238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
label_21423c:
    // 0x21423c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x21423cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_214240:
    // 0x214240: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x214240u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_214244:
    // 0x214244: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x214244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_214248:
    // 0x214248: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x214248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_21424c:
    // 0x21424c: 0x8c420184  lw          $v0, 0x184($v0)
    ctx->pc = 0x21424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
label_214250:
    // 0x214250: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x214250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_214254:
    // 0x214254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x214254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_214258:
    // 0x214258: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x214258u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_21425c:
    // 0x21425c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_214260:
    if (ctx->pc == 0x214260u) {
        ctx->pc = 0x214260u;
            // 0x214260: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->pc = 0x214264u;
        goto label_214264;
    }
    ctx->pc = 0x21425Cu;
    {
        const bool branch_taken_0x21425c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x214260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21425Cu;
            // 0x214260: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21425c) {
            ctx->pc = 0x21426Cu;
            goto label_21426c;
        }
    }
    ctx->pc = 0x214264u;
label_214264:
    // 0x214264: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x214264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_214268:
    // 0x214268: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x214268u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_21426c:
    // 0x21426c: 0xc04e79c  jal         func_139E70
label_214270:
    if (ctx->pc == 0x214270u) {
        ctx->pc = 0x214270u;
            // 0x214270: 0x26040394  addiu       $a0, $s0, 0x394 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 916));
        ctx->pc = 0x214274u;
        goto label_214274;
    }
    ctx->pc = 0x21426Cu;
    SET_GPR_U32(ctx, 31, 0x214274u);
    ctx->pc = 0x214270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21426Cu;
            // 0x214270: 0x26040394  addiu       $a0, $s0, 0x394 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 916));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214274u; }
        if (ctx->pc != 0x214274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214274u; }
        if (ctx->pc != 0x214274u) { return; }
    }
    ctx->pc = 0x214274u;
label_214274:
    // 0x214274: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_214278:
    // 0x214278: 0xc084470  jal         func_2111C0
label_21427c:
    if (ctx->pc == 0x21427Cu) {
        ctx->pc = 0x21427Cu;
            // 0x21427c: 0x260400fc  addiu       $a0, $s0, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
        ctx->pc = 0x214280u;
        goto label_214280;
    }
    ctx->pc = 0x214278u;
    SET_GPR_U32(ctx, 31, 0x214280u);
    ctx->pc = 0x21427Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214278u;
            // 0x21427c: 0x260400fc  addiu       $a0, $s0, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111C0u;
    if (runtime->hasFunction(0x2111C0u)) {
        auto targetFn = runtime->lookupFunction(0x2111C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214280u; }
        if (ctx->pc != 0x214280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SettingAquaMes__8CAquaMesFi_0x2111c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214280u; }
        if (ctx->pc != 0x214280u) { return; }
    }
    ctx->pc = 0x214280u;
label_214280:
    // 0x214280: 0xc08575c  jal         func_215D70
label_214284:
    if (ctx->pc == 0x214284u) {
        ctx->pc = 0x214284u;
            // 0x214284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214288u;
        goto label_214288;
    }
    ctx->pc = 0x214280u;
    SET_GPR_U32(ctx, 31, 0x214288u);
    ctx->pc = 0x214284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214280u;
            // 0x214284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215D70u;
    if (runtime->hasFunction(0x215D70u)) {
        auto targetFn = runtime->lookupFunction(0x215D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214288u; }
        if (ctx->pc != 0x214288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSelFish__9CAquariumFv_0x215d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214288u; }
        if (ctx->pc != 0x214288u) { return; }
    }
    ctx->pc = 0x214288u;
label_214288:
    // 0x214288: 0xa2000116  sb          $zero, 0x116($s0)
    ctx->pc = 0x214288u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 278), (uint8_t)GPR_U32(ctx, 0));
label_21428c:
    // 0x21428c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x21428cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_214290:
    // 0x214290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214294:
    // 0x214294: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x214294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_214298:
    // 0x214298: 0xa2020144  sb          $v0, 0x144($s0)
    ctx->pc = 0x214298u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 324), (uint8_t)GPR_U32(ctx, 2));
label_21429c:
    // 0x21429c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21429cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2142a0:
    // 0x2142a0: 0x8c25d5b4  lw          $a1, -0x2A4C($at)
    ctx->pc = 0x2142a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956468)));
label_2142a4:
    // 0x2142a4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2142a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2142a8:
    // 0x2142a8: 0x8c26d5b8  lw          $a2, -0x2A48($at)
    ctx->pc = 0x2142a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956472)));
label_2142ac:
    // 0x2142ac: 0xc04a0d2  jal         func_128348
label_2142b0:
    if (ctx->pc == 0x2142B0u) {
        ctx->pc = 0x2142B0u;
            // 0x2142b0: 0x2484a0c0  addiu       $a0, $a0, -0x5F40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942912));
        ctx->pc = 0x2142B4u;
        goto label_2142b4;
    }
    ctx->pc = 0x2142ACu;
    SET_GPR_U32(ctx, 31, 0x2142B4u);
    ctx->pc = 0x2142B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2142ACu;
            // 0x2142b0: 0x2484a0c0  addiu       $a0, $a0, -0x5F40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142B4u; }
        if (ctx->pc != 0x2142B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142B4u; }
        if (ctx->pc != 0x2142B4u) { return; }
    }
    ctx->pc = 0x2142B4u;
label_2142b4:
    // 0x2142b4: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x2142b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2142b8:
    // 0x2142b8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2142b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2142bc:
    // 0x2142bc: 0x8e060098  lw          $a2, 0x98($s0)
    ctx->pc = 0x2142bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2142c0:
    // 0x2142c0: 0xc04a0d2  jal         func_128348
label_2142c4:
    if (ctx->pc == 0x2142C4u) {
        ctx->pc = 0x2142C4u;
            // 0x2142c4: 0x2484a0e0  addiu       $a0, $a0, -0x5F20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942944));
        ctx->pc = 0x2142C8u;
        goto label_2142c8;
    }
    ctx->pc = 0x2142C0u;
    SET_GPR_U32(ctx, 31, 0x2142C8u);
    ctx->pc = 0x2142C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2142C0u;
            // 0x2142c4: 0x2484a0e0  addiu       $a0, $a0, -0x5F20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142C8u; }
        if (ctx->pc != 0x2142C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142C8u; }
        if (ctx->pc != 0x2142C8u) { return; }
    }
    ctx->pc = 0x2142C8u;
label_2142c8:
    // 0x2142c8: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x2142c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_2142cc:
    // 0x2142cc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2142ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2142d0:
    // 0x2142d0: 0x8e0600f0  lw          $a2, 0xF0($s0)
    ctx->pc = 0x2142d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2142d4:
    // 0x2142d4: 0xc04a0d2  jal         func_128348
label_2142d8:
    if (ctx->pc == 0x2142D8u) {
        ctx->pc = 0x2142D8u;
            // 0x2142d8: 0x2484a100  addiu       $a0, $a0, -0x5F00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942976));
        ctx->pc = 0x2142DCu;
        goto label_2142dc;
    }
    ctx->pc = 0x2142D4u;
    SET_GPR_U32(ctx, 31, 0x2142DCu);
    ctx->pc = 0x2142D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2142D4u;
            // 0x2142d8: 0x2484a100  addiu       $a0, $a0, -0x5F00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142DCu; }
        if (ctx->pc != 0x2142DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142DCu; }
        if (ctx->pc != 0x2142DCu) { return; }
    }
    ctx->pc = 0x2142DCu;
label_2142dc:
    // 0x2142dc: 0x8e050184  lw          $a1, 0x184($s0)
    ctx->pc = 0x2142dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_2142e0:
    // 0x2142e0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2142e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2142e4:
    // 0x2142e4: 0x8e060188  lw          $a2, 0x188($s0)
    ctx->pc = 0x2142e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_2142e8:
    // 0x2142e8: 0xc04a0d2  jal         func_128348
label_2142ec:
    if (ctx->pc == 0x2142ECu) {
        ctx->pc = 0x2142ECu;
            // 0x2142ec: 0x2484a120  addiu       $a0, $a0, -0x5EE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943008));
        ctx->pc = 0x2142F0u;
        goto label_2142f0;
    }
    ctx->pc = 0x2142E8u;
    SET_GPR_U32(ctx, 31, 0x2142F0u);
    ctx->pc = 0x2142ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2142E8u;
            // 0x2142ec: 0x2484a120  addiu       $a0, $a0, -0x5EE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142F0u; }
        if (ctx->pc != 0x2142F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142F0u; }
        if (ctx->pc != 0x2142F0u) { return; }
    }
    ctx->pc = 0x2142F0u;
label_2142f0:
    // 0x2142f0: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x2142f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2142f4:
    // 0x2142f4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2142f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2142f8:
    // 0x2142f8: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x2142f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2142fc:
    // 0x2142fc: 0xc04a0d2  jal         func_128348
label_214300:
    if (ctx->pc == 0x214300u) {
        ctx->pc = 0x214300u;
            // 0x214300: 0x2484a140  addiu       $a0, $a0, -0x5EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943040));
        ctx->pc = 0x214304u;
        goto label_214304;
    }
    ctx->pc = 0x2142FCu;
    SET_GPR_U32(ctx, 31, 0x214304u);
    ctx->pc = 0x214300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2142FCu;
            // 0x214300: 0x2484a140  addiu       $a0, $a0, -0x5EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214304u; }
        if (ctx->pc != 0x214304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214304u; }
        if (ctx->pc != 0x214304u) { return; }
    }
    ctx->pc = 0x214304u;
label_214304:
    // 0x214304: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x214304u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_214308:
    // 0x214308: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_21430c:
    if (ctx->pc == 0x21430Cu) {
        ctx->pc = 0x21430Cu;
            // 0x21430c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214310u;
        goto label_214310;
    }
    ctx->pc = 0x214308u;
    {
        const bool branch_taken_0x214308 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21430Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214308u;
            // 0x21430c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214308) {
            ctx->pc = 0x214340u;
            goto label_214340;
        }
    }
    ctx->pc = 0x214310u;
label_214310:
    // 0x214310: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x214310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214314:
    // 0x214314: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x214314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_214318:
    // 0x214318: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x214318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_21431c:
    // 0x21431c: 0x8c4601b8  lw          $a2, 0x1B8($v0)
    ctx->pc = 0x21431cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 440)));
label_214320:
    // 0x214320: 0x2484a160  addiu       $a0, $a0, -0x5EA0
    ctx->pc = 0x214320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943072));
label_214324:
    // 0x214324: 0x8c4701bc  lw          $a3, 0x1BC($v0)
    ctx->pc = 0x214324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_214328:
    // 0x214328: 0xc04a0d2  jal         func_128348
label_21432c:
    if (ctx->pc == 0x21432Cu) {
        ctx->pc = 0x21432Cu;
            // 0x21432c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214330u;
        goto label_214330;
    }
    ctx->pc = 0x214328u;
    SET_GPR_U32(ctx, 31, 0x214330u);
    ctx->pc = 0x21432Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214328u;
            // 0x21432c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214330u; }
        if (ctx->pc != 0x214330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214330u; }
        if (ctx->pc != 0x214330u) { return; }
    }
    ctx->pc = 0x214330u;
label_214330:
    // 0x214330: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x214330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_214334:
    // 0x214334: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x214334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_214338:
    // 0x214338: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_21433c:
    if (ctx->pc == 0x21433Cu) {
        ctx->pc = 0x21433Cu;
            // 0x21433c: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->pc = 0x214340u;
        goto label_214340;
    }
    ctx->pc = 0x214338u;
    {
        const bool branch_taken_0x214338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21433Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214338u;
            // 0x21433c: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214338) {
            ctx->pc = 0x214314u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_214314;
        }
    }
    ctx->pc = 0x214340u;
label_214340:
    // 0x214340: 0x8e0503b8  lw          $a1, 0x3B8($s0)
    ctx->pc = 0x214340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 952)));
label_214344:
    // 0x214344: 0x8e0603bc  lw          $a2, 0x3BC($s0)
    ctx->pc = 0x214344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 956)));
label_214348:
    // 0x214348: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x214348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_21434c:
    // 0x21434c: 0xc04a0d2  jal         func_128348
label_214350:
    if (ctx->pc == 0x214350u) {
        ctx->pc = 0x214350u;
            // 0x214350: 0x2484a180  addiu       $a0, $a0, -0x5E80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943104));
        ctx->pc = 0x214354u;
        goto label_214354;
    }
    ctx->pc = 0x21434Cu;
    SET_GPR_U32(ctx, 31, 0x214354u);
    ctx->pc = 0x214350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21434Cu;
            // 0x214350: 0x2484a180  addiu       $a0, $a0, -0x5E80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214354u; }
        if (ctx->pc != 0x214354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214354u; }
        if (ctx->pc != 0x214354u) { return; }
    }
    ctx->pc = 0x214354u;
label_214354:
    // 0x214354: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x214354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_214358:
    // 0x214358: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x214358u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21435c:
    // 0x21435c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x21435cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_214360:
    // 0x214360: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x214360u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_214364:
    // 0x214364: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x214364u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_214368:
    // 0x214368: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x214368u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21436c:
    // 0x21436c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x21436cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_214370:
    // 0x214370: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x214370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_214374:
    // 0x214374: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x214374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_214378:
    // 0x214378: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x214378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21437c:
    // 0x21437c: 0x3e00008  jr          $ra
label_214380:
    if (ctx->pc == 0x214380u) {
        ctx->pc = 0x214380u;
            // 0x214380: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x214384u;
        goto label_fallthrough_0x21437c;
    }
    ctx->pc = 0x21437Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21437Cu;
            // 0x214380: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x21437c:
    ctx->pc = 0x214384u;
}
