#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckDamage__12CActionCharaFv
// Address: 0x170730 - 0x1710bc
void CheckDamage__12CActionCharaFv_0x170730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckDamage__12CActionCharaFv_0x170730");
#endif

    switch (ctx->pc) {
        case 0x170730u: goto label_170730;
        case 0x170734u: goto label_170734;
        case 0x170738u: goto label_170738;
        case 0x17073cu: goto label_17073c;
        case 0x170740u: goto label_170740;
        case 0x170744u: goto label_170744;
        case 0x170748u: goto label_170748;
        case 0x17074cu: goto label_17074c;
        case 0x170750u: goto label_170750;
        case 0x170754u: goto label_170754;
        case 0x170758u: goto label_170758;
        case 0x17075cu: goto label_17075c;
        case 0x170760u: goto label_170760;
        case 0x170764u: goto label_170764;
        case 0x170768u: goto label_170768;
        case 0x17076cu: goto label_17076c;
        case 0x170770u: goto label_170770;
        case 0x170774u: goto label_170774;
        case 0x170778u: goto label_170778;
        case 0x17077cu: goto label_17077c;
        case 0x170780u: goto label_170780;
        case 0x170784u: goto label_170784;
        case 0x170788u: goto label_170788;
        case 0x17078cu: goto label_17078c;
        case 0x170790u: goto label_170790;
        case 0x170794u: goto label_170794;
        case 0x170798u: goto label_170798;
        case 0x17079cu: goto label_17079c;
        case 0x1707a0u: goto label_1707a0;
        case 0x1707a4u: goto label_1707a4;
        case 0x1707a8u: goto label_1707a8;
        case 0x1707acu: goto label_1707ac;
        case 0x1707b0u: goto label_1707b0;
        case 0x1707b4u: goto label_1707b4;
        case 0x1707b8u: goto label_1707b8;
        case 0x1707bcu: goto label_1707bc;
        case 0x1707c0u: goto label_1707c0;
        case 0x1707c4u: goto label_1707c4;
        case 0x1707c8u: goto label_1707c8;
        case 0x1707ccu: goto label_1707cc;
        case 0x1707d0u: goto label_1707d0;
        case 0x1707d4u: goto label_1707d4;
        case 0x1707d8u: goto label_1707d8;
        case 0x1707dcu: goto label_1707dc;
        case 0x1707e0u: goto label_1707e0;
        case 0x1707e4u: goto label_1707e4;
        case 0x1707e8u: goto label_1707e8;
        case 0x1707ecu: goto label_1707ec;
        case 0x1707f0u: goto label_1707f0;
        case 0x1707f4u: goto label_1707f4;
        case 0x1707f8u: goto label_1707f8;
        case 0x1707fcu: goto label_1707fc;
        case 0x170800u: goto label_170800;
        case 0x170804u: goto label_170804;
        case 0x170808u: goto label_170808;
        case 0x17080cu: goto label_17080c;
        case 0x170810u: goto label_170810;
        case 0x170814u: goto label_170814;
        case 0x170818u: goto label_170818;
        case 0x17081cu: goto label_17081c;
        case 0x170820u: goto label_170820;
        case 0x170824u: goto label_170824;
        case 0x170828u: goto label_170828;
        case 0x17082cu: goto label_17082c;
        case 0x170830u: goto label_170830;
        case 0x170834u: goto label_170834;
        case 0x170838u: goto label_170838;
        case 0x17083cu: goto label_17083c;
        case 0x170840u: goto label_170840;
        case 0x170844u: goto label_170844;
        case 0x170848u: goto label_170848;
        case 0x17084cu: goto label_17084c;
        case 0x170850u: goto label_170850;
        case 0x170854u: goto label_170854;
        case 0x170858u: goto label_170858;
        case 0x17085cu: goto label_17085c;
        case 0x170860u: goto label_170860;
        case 0x170864u: goto label_170864;
        case 0x170868u: goto label_170868;
        case 0x17086cu: goto label_17086c;
        case 0x170870u: goto label_170870;
        case 0x170874u: goto label_170874;
        case 0x170878u: goto label_170878;
        case 0x17087cu: goto label_17087c;
        case 0x170880u: goto label_170880;
        case 0x170884u: goto label_170884;
        case 0x170888u: goto label_170888;
        case 0x17088cu: goto label_17088c;
        case 0x170890u: goto label_170890;
        case 0x170894u: goto label_170894;
        case 0x170898u: goto label_170898;
        case 0x17089cu: goto label_17089c;
        case 0x1708a0u: goto label_1708a0;
        case 0x1708a4u: goto label_1708a4;
        case 0x1708a8u: goto label_1708a8;
        case 0x1708acu: goto label_1708ac;
        case 0x1708b0u: goto label_1708b0;
        case 0x1708b4u: goto label_1708b4;
        case 0x1708b8u: goto label_1708b8;
        case 0x1708bcu: goto label_1708bc;
        case 0x1708c0u: goto label_1708c0;
        case 0x1708c4u: goto label_1708c4;
        case 0x1708c8u: goto label_1708c8;
        case 0x1708ccu: goto label_1708cc;
        case 0x1708d0u: goto label_1708d0;
        case 0x1708d4u: goto label_1708d4;
        case 0x1708d8u: goto label_1708d8;
        case 0x1708dcu: goto label_1708dc;
        case 0x1708e0u: goto label_1708e0;
        case 0x1708e4u: goto label_1708e4;
        case 0x1708e8u: goto label_1708e8;
        case 0x1708ecu: goto label_1708ec;
        case 0x1708f0u: goto label_1708f0;
        case 0x1708f4u: goto label_1708f4;
        case 0x1708f8u: goto label_1708f8;
        case 0x1708fcu: goto label_1708fc;
        case 0x170900u: goto label_170900;
        case 0x170904u: goto label_170904;
        case 0x170908u: goto label_170908;
        case 0x17090cu: goto label_17090c;
        case 0x170910u: goto label_170910;
        case 0x170914u: goto label_170914;
        case 0x170918u: goto label_170918;
        case 0x17091cu: goto label_17091c;
        case 0x170920u: goto label_170920;
        case 0x170924u: goto label_170924;
        case 0x170928u: goto label_170928;
        case 0x17092cu: goto label_17092c;
        case 0x170930u: goto label_170930;
        case 0x170934u: goto label_170934;
        case 0x170938u: goto label_170938;
        case 0x17093cu: goto label_17093c;
        case 0x170940u: goto label_170940;
        case 0x170944u: goto label_170944;
        case 0x170948u: goto label_170948;
        case 0x17094cu: goto label_17094c;
        case 0x170950u: goto label_170950;
        case 0x170954u: goto label_170954;
        case 0x170958u: goto label_170958;
        case 0x17095cu: goto label_17095c;
        case 0x170960u: goto label_170960;
        case 0x170964u: goto label_170964;
        case 0x170968u: goto label_170968;
        case 0x17096cu: goto label_17096c;
        case 0x170970u: goto label_170970;
        case 0x170974u: goto label_170974;
        case 0x170978u: goto label_170978;
        case 0x17097cu: goto label_17097c;
        case 0x170980u: goto label_170980;
        case 0x170984u: goto label_170984;
        case 0x170988u: goto label_170988;
        case 0x17098cu: goto label_17098c;
        case 0x170990u: goto label_170990;
        case 0x170994u: goto label_170994;
        case 0x170998u: goto label_170998;
        case 0x17099cu: goto label_17099c;
        case 0x1709a0u: goto label_1709a0;
        case 0x1709a4u: goto label_1709a4;
        case 0x1709a8u: goto label_1709a8;
        case 0x1709acu: goto label_1709ac;
        case 0x1709b0u: goto label_1709b0;
        case 0x1709b4u: goto label_1709b4;
        case 0x1709b8u: goto label_1709b8;
        case 0x1709bcu: goto label_1709bc;
        case 0x1709c0u: goto label_1709c0;
        case 0x1709c4u: goto label_1709c4;
        case 0x1709c8u: goto label_1709c8;
        case 0x1709ccu: goto label_1709cc;
        case 0x1709d0u: goto label_1709d0;
        case 0x1709d4u: goto label_1709d4;
        case 0x1709d8u: goto label_1709d8;
        case 0x1709dcu: goto label_1709dc;
        case 0x1709e0u: goto label_1709e0;
        case 0x1709e4u: goto label_1709e4;
        case 0x1709e8u: goto label_1709e8;
        case 0x1709ecu: goto label_1709ec;
        case 0x1709f0u: goto label_1709f0;
        case 0x1709f4u: goto label_1709f4;
        case 0x1709f8u: goto label_1709f8;
        case 0x1709fcu: goto label_1709fc;
        case 0x170a00u: goto label_170a00;
        case 0x170a04u: goto label_170a04;
        case 0x170a08u: goto label_170a08;
        case 0x170a0cu: goto label_170a0c;
        case 0x170a10u: goto label_170a10;
        case 0x170a14u: goto label_170a14;
        case 0x170a18u: goto label_170a18;
        case 0x170a1cu: goto label_170a1c;
        case 0x170a20u: goto label_170a20;
        case 0x170a24u: goto label_170a24;
        case 0x170a28u: goto label_170a28;
        case 0x170a2cu: goto label_170a2c;
        case 0x170a30u: goto label_170a30;
        case 0x170a34u: goto label_170a34;
        case 0x170a38u: goto label_170a38;
        case 0x170a3cu: goto label_170a3c;
        case 0x170a40u: goto label_170a40;
        case 0x170a44u: goto label_170a44;
        case 0x170a48u: goto label_170a48;
        case 0x170a4cu: goto label_170a4c;
        case 0x170a50u: goto label_170a50;
        case 0x170a54u: goto label_170a54;
        case 0x170a58u: goto label_170a58;
        case 0x170a5cu: goto label_170a5c;
        case 0x170a60u: goto label_170a60;
        case 0x170a64u: goto label_170a64;
        case 0x170a68u: goto label_170a68;
        case 0x170a6cu: goto label_170a6c;
        case 0x170a70u: goto label_170a70;
        case 0x170a74u: goto label_170a74;
        case 0x170a78u: goto label_170a78;
        case 0x170a7cu: goto label_170a7c;
        case 0x170a80u: goto label_170a80;
        case 0x170a84u: goto label_170a84;
        case 0x170a88u: goto label_170a88;
        case 0x170a8cu: goto label_170a8c;
        case 0x170a90u: goto label_170a90;
        case 0x170a94u: goto label_170a94;
        case 0x170a98u: goto label_170a98;
        case 0x170a9cu: goto label_170a9c;
        case 0x170aa0u: goto label_170aa0;
        case 0x170aa4u: goto label_170aa4;
        case 0x170aa8u: goto label_170aa8;
        case 0x170aacu: goto label_170aac;
        case 0x170ab0u: goto label_170ab0;
        case 0x170ab4u: goto label_170ab4;
        case 0x170ab8u: goto label_170ab8;
        case 0x170abcu: goto label_170abc;
        case 0x170ac0u: goto label_170ac0;
        case 0x170ac4u: goto label_170ac4;
        case 0x170ac8u: goto label_170ac8;
        case 0x170accu: goto label_170acc;
        case 0x170ad0u: goto label_170ad0;
        case 0x170ad4u: goto label_170ad4;
        case 0x170ad8u: goto label_170ad8;
        case 0x170adcu: goto label_170adc;
        case 0x170ae0u: goto label_170ae0;
        case 0x170ae4u: goto label_170ae4;
        case 0x170ae8u: goto label_170ae8;
        case 0x170aecu: goto label_170aec;
        case 0x170af0u: goto label_170af0;
        case 0x170af4u: goto label_170af4;
        case 0x170af8u: goto label_170af8;
        case 0x170afcu: goto label_170afc;
        case 0x170b00u: goto label_170b00;
        case 0x170b04u: goto label_170b04;
        case 0x170b08u: goto label_170b08;
        case 0x170b0cu: goto label_170b0c;
        case 0x170b10u: goto label_170b10;
        case 0x170b14u: goto label_170b14;
        case 0x170b18u: goto label_170b18;
        case 0x170b1cu: goto label_170b1c;
        case 0x170b20u: goto label_170b20;
        case 0x170b24u: goto label_170b24;
        case 0x170b28u: goto label_170b28;
        case 0x170b2cu: goto label_170b2c;
        case 0x170b30u: goto label_170b30;
        case 0x170b34u: goto label_170b34;
        case 0x170b38u: goto label_170b38;
        case 0x170b3cu: goto label_170b3c;
        case 0x170b40u: goto label_170b40;
        case 0x170b44u: goto label_170b44;
        case 0x170b48u: goto label_170b48;
        case 0x170b4cu: goto label_170b4c;
        case 0x170b50u: goto label_170b50;
        case 0x170b54u: goto label_170b54;
        case 0x170b58u: goto label_170b58;
        case 0x170b5cu: goto label_170b5c;
        case 0x170b60u: goto label_170b60;
        case 0x170b64u: goto label_170b64;
        case 0x170b68u: goto label_170b68;
        case 0x170b6cu: goto label_170b6c;
        case 0x170b70u: goto label_170b70;
        case 0x170b74u: goto label_170b74;
        case 0x170b78u: goto label_170b78;
        case 0x170b7cu: goto label_170b7c;
        case 0x170b80u: goto label_170b80;
        case 0x170b84u: goto label_170b84;
        case 0x170b88u: goto label_170b88;
        case 0x170b8cu: goto label_170b8c;
        case 0x170b90u: goto label_170b90;
        case 0x170b94u: goto label_170b94;
        case 0x170b98u: goto label_170b98;
        case 0x170b9cu: goto label_170b9c;
        case 0x170ba0u: goto label_170ba0;
        case 0x170ba4u: goto label_170ba4;
        case 0x170ba8u: goto label_170ba8;
        case 0x170bacu: goto label_170bac;
        case 0x170bb0u: goto label_170bb0;
        case 0x170bb4u: goto label_170bb4;
        case 0x170bb8u: goto label_170bb8;
        case 0x170bbcu: goto label_170bbc;
        case 0x170bc0u: goto label_170bc0;
        case 0x170bc4u: goto label_170bc4;
        case 0x170bc8u: goto label_170bc8;
        case 0x170bccu: goto label_170bcc;
        case 0x170bd0u: goto label_170bd0;
        case 0x170bd4u: goto label_170bd4;
        case 0x170bd8u: goto label_170bd8;
        case 0x170bdcu: goto label_170bdc;
        case 0x170be0u: goto label_170be0;
        case 0x170be4u: goto label_170be4;
        case 0x170be8u: goto label_170be8;
        case 0x170becu: goto label_170bec;
        case 0x170bf0u: goto label_170bf0;
        case 0x170bf4u: goto label_170bf4;
        case 0x170bf8u: goto label_170bf8;
        case 0x170bfcu: goto label_170bfc;
        case 0x170c00u: goto label_170c00;
        case 0x170c04u: goto label_170c04;
        case 0x170c08u: goto label_170c08;
        case 0x170c0cu: goto label_170c0c;
        case 0x170c10u: goto label_170c10;
        case 0x170c14u: goto label_170c14;
        case 0x170c18u: goto label_170c18;
        case 0x170c1cu: goto label_170c1c;
        case 0x170c20u: goto label_170c20;
        case 0x170c24u: goto label_170c24;
        case 0x170c28u: goto label_170c28;
        case 0x170c2cu: goto label_170c2c;
        case 0x170c30u: goto label_170c30;
        case 0x170c34u: goto label_170c34;
        case 0x170c38u: goto label_170c38;
        case 0x170c3cu: goto label_170c3c;
        case 0x170c40u: goto label_170c40;
        case 0x170c44u: goto label_170c44;
        case 0x170c48u: goto label_170c48;
        case 0x170c4cu: goto label_170c4c;
        case 0x170c50u: goto label_170c50;
        case 0x170c54u: goto label_170c54;
        case 0x170c58u: goto label_170c58;
        case 0x170c5cu: goto label_170c5c;
        case 0x170c60u: goto label_170c60;
        case 0x170c64u: goto label_170c64;
        case 0x170c68u: goto label_170c68;
        case 0x170c6cu: goto label_170c6c;
        case 0x170c70u: goto label_170c70;
        case 0x170c74u: goto label_170c74;
        case 0x170c78u: goto label_170c78;
        case 0x170c7cu: goto label_170c7c;
        case 0x170c80u: goto label_170c80;
        case 0x170c84u: goto label_170c84;
        case 0x170c88u: goto label_170c88;
        case 0x170c8cu: goto label_170c8c;
        case 0x170c90u: goto label_170c90;
        case 0x170c94u: goto label_170c94;
        case 0x170c98u: goto label_170c98;
        case 0x170c9cu: goto label_170c9c;
        case 0x170ca0u: goto label_170ca0;
        case 0x170ca4u: goto label_170ca4;
        case 0x170ca8u: goto label_170ca8;
        case 0x170cacu: goto label_170cac;
        case 0x170cb0u: goto label_170cb0;
        case 0x170cb4u: goto label_170cb4;
        case 0x170cb8u: goto label_170cb8;
        case 0x170cbcu: goto label_170cbc;
        case 0x170cc0u: goto label_170cc0;
        case 0x170cc4u: goto label_170cc4;
        case 0x170cc8u: goto label_170cc8;
        case 0x170cccu: goto label_170ccc;
        case 0x170cd0u: goto label_170cd0;
        case 0x170cd4u: goto label_170cd4;
        case 0x170cd8u: goto label_170cd8;
        case 0x170cdcu: goto label_170cdc;
        case 0x170ce0u: goto label_170ce0;
        case 0x170ce4u: goto label_170ce4;
        case 0x170ce8u: goto label_170ce8;
        case 0x170cecu: goto label_170cec;
        case 0x170cf0u: goto label_170cf0;
        case 0x170cf4u: goto label_170cf4;
        case 0x170cf8u: goto label_170cf8;
        case 0x170cfcu: goto label_170cfc;
        case 0x170d00u: goto label_170d00;
        case 0x170d04u: goto label_170d04;
        case 0x170d08u: goto label_170d08;
        case 0x170d0cu: goto label_170d0c;
        case 0x170d10u: goto label_170d10;
        case 0x170d14u: goto label_170d14;
        case 0x170d18u: goto label_170d18;
        case 0x170d1cu: goto label_170d1c;
        case 0x170d20u: goto label_170d20;
        case 0x170d24u: goto label_170d24;
        case 0x170d28u: goto label_170d28;
        case 0x170d2cu: goto label_170d2c;
        case 0x170d30u: goto label_170d30;
        case 0x170d34u: goto label_170d34;
        case 0x170d38u: goto label_170d38;
        case 0x170d3cu: goto label_170d3c;
        case 0x170d40u: goto label_170d40;
        case 0x170d44u: goto label_170d44;
        case 0x170d48u: goto label_170d48;
        case 0x170d4cu: goto label_170d4c;
        case 0x170d50u: goto label_170d50;
        case 0x170d54u: goto label_170d54;
        case 0x170d58u: goto label_170d58;
        case 0x170d5cu: goto label_170d5c;
        case 0x170d60u: goto label_170d60;
        case 0x170d64u: goto label_170d64;
        case 0x170d68u: goto label_170d68;
        case 0x170d6cu: goto label_170d6c;
        case 0x170d70u: goto label_170d70;
        case 0x170d74u: goto label_170d74;
        case 0x170d78u: goto label_170d78;
        case 0x170d7cu: goto label_170d7c;
        case 0x170d80u: goto label_170d80;
        case 0x170d84u: goto label_170d84;
        case 0x170d88u: goto label_170d88;
        case 0x170d8cu: goto label_170d8c;
        case 0x170d90u: goto label_170d90;
        case 0x170d94u: goto label_170d94;
        case 0x170d98u: goto label_170d98;
        case 0x170d9cu: goto label_170d9c;
        case 0x170da0u: goto label_170da0;
        case 0x170da4u: goto label_170da4;
        case 0x170da8u: goto label_170da8;
        case 0x170dacu: goto label_170dac;
        case 0x170db0u: goto label_170db0;
        case 0x170db4u: goto label_170db4;
        case 0x170db8u: goto label_170db8;
        case 0x170dbcu: goto label_170dbc;
        case 0x170dc0u: goto label_170dc0;
        case 0x170dc4u: goto label_170dc4;
        case 0x170dc8u: goto label_170dc8;
        case 0x170dccu: goto label_170dcc;
        case 0x170dd0u: goto label_170dd0;
        case 0x170dd4u: goto label_170dd4;
        case 0x170dd8u: goto label_170dd8;
        case 0x170ddcu: goto label_170ddc;
        case 0x170de0u: goto label_170de0;
        case 0x170de4u: goto label_170de4;
        case 0x170de8u: goto label_170de8;
        case 0x170decu: goto label_170dec;
        case 0x170df0u: goto label_170df0;
        case 0x170df4u: goto label_170df4;
        case 0x170df8u: goto label_170df8;
        case 0x170dfcu: goto label_170dfc;
        case 0x170e00u: goto label_170e00;
        case 0x170e04u: goto label_170e04;
        case 0x170e08u: goto label_170e08;
        case 0x170e0cu: goto label_170e0c;
        case 0x170e10u: goto label_170e10;
        case 0x170e14u: goto label_170e14;
        case 0x170e18u: goto label_170e18;
        case 0x170e1cu: goto label_170e1c;
        case 0x170e20u: goto label_170e20;
        case 0x170e24u: goto label_170e24;
        case 0x170e28u: goto label_170e28;
        case 0x170e2cu: goto label_170e2c;
        case 0x170e30u: goto label_170e30;
        case 0x170e34u: goto label_170e34;
        case 0x170e38u: goto label_170e38;
        case 0x170e3cu: goto label_170e3c;
        case 0x170e40u: goto label_170e40;
        case 0x170e44u: goto label_170e44;
        case 0x170e48u: goto label_170e48;
        case 0x170e4cu: goto label_170e4c;
        case 0x170e50u: goto label_170e50;
        case 0x170e54u: goto label_170e54;
        case 0x170e58u: goto label_170e58;
        case 0x170e5cu: goto label_170e5c;
        case 0x170e60u: goto label_170e60;
        case 0x170e64u: goto label_170e64;
        case 0x170e68u: goto label_170e68;
        case 0x170e6cu: goto label_170e6c;
        case 0x170e70u: goto label_170e70;
        case 0x170e74u: goto label_170e74;
        case 0x170e78u: goto label_170e78;
        case 0x170e7cu: goto label_170e7c;
        case 0x170e80u: goto label_170e80;
        case 0x170e84u: goto label_170e84;
        case 0x170e88u: goto label_170e88;
        case 0x170e8cu: goto label_170e8c;
        case 0x170e90u: goto label_170e90;
        case 0x170e94u: goto label_170e94;
        case 0x170e98u: goto label_170e98;
        case 0x170e9cu: goto label_170e9c;
        case 0x170ea0u: goto label_170ea0;
        case 0x170ea4u: goto label_170ea4;
        case 0x170ea8u: goto label_170ea8;
        case 0x170eacu: goto label_170eac;
        case 0x170eb0u: goto label_170eb0;
        case 0x170eb4u: goto label_170eb4;
        case 0x170eb8u: goto label_170eb8;
        case 0x170ebcu: goto label_170ebc;
        case 0x170ec0u: goto label_170ec0;
        case 0x170ec4u: goto label_170ec4;
        case 0x170ec8u: goto label_170ec8;
        case 0x170eccu: goto label_170ecc;
        case 0x170ed0u: goto label_170ed0;
        case 0x170ed4u: goto label_170ed4;
        case 0x170ed8u: goto label_170ed8;
        case 0x170edcu: goto label_170edc;
        case 0x170ee0u: goto label_170ee0;
        case 0x170ee4u: goto label_170ee4;
        case 0x170ee8u: goto label_170ee8;
        case 0x170eecu: goto label_170eec;
        case 0x170ef0u: goto label_170ef0;
        case 0x170ef4u: goto label_170ef4;
        case 0x170ef8u: goto label_170ef8;
        case 0x170efcu: goto label_170efc;
        case 0x170f00u: goto label_170f00;
        case 0x170f04u: goto label_170f04;
        case 0x170f08u: goto label_170f08;
        case 0x170f0cu: goto label_170f0c;
        case 0x170f10u: goto label_170f10;
        case 0x170f14u: goto label_170f14;
        case 0x170f18u: goto label_170f18;
        case 0x170f1cu: goto label_170f1c;
        case 0x170f20u: goto label_170f20;
        case 0x170f24u: goto label_170f24;
        case 0x170f28u: goto label_170f28;
        case 0x170f2cu: goto label_170f2c;
        case 0x170f30u: goto label_170f30;
        case 0x170f34u: goto label_170f34;
        case 0x170f38u: goto label_170f38;
        case 0x170f3cu: goto label_170f3c;
        case 0x170f40u: goto label_170f40;
        case 0x170f44u: goto label_170f44;
        case 0x170f48u: goto label_170f48;
        case 0x170f4cu: goto label_170f4c;
        case 0x170f50u: goto label_170f50;
        case 0x170f54u: goto label_170f54;
        case 0x170f58u: goto label_170f58;
        case 0x170f5cu: goto label_170f5c;
        case 0x170f60u: goto label_170f60;
        case 0x170f64u: goto label_170f64;
        case 0x170f68u: goto label_170f68;
        case 0x170f6cu: goto label_170f6c;
        case 0x170f70u: goto label_170f70;
        case 0x170f74u: goto label_170f74;
        case 0x170f78u: goto label_170f78;
        case 0x170f7cu: goto label_170f7c;
        case 0x170f80u: goto label_170f80;
        case 0x170f84u: goto label_170f84;
        case 0x170f88u: goto label_170f88;
        case 0x170f8cu: goto label_170f8c;
        case 0x170f90u: goto label_170f90;
        case 0x170f94u: goto label_170f94;
        case 0x170f98u: goto label_170f98;
        case 0x170f9cu: goto label_170f9c;
        case 0x170fa0u: goto label_170fa0;
        case 0x170fa4u: goto label_170fa4;
        case 0x170fa8u: goto label_170fa8;
        case 0x170facu: goto label_170fac;
        case 0x170fb0u: goto label_170fb0;
        case 0x170fb4u: goto label_170fb4;
        case 0x170fb8u: goto label_170fb8;
        case 0x170fbcu: goto label_170fbc;
        case 0x170fc0u: goto label_170fc0;
        case 0x170fc4u: goto label_170fc4;
        case 0x170fc8u: goto label_170fc8;
        case 0x170fccu: goto label_170fcc;
        case 0x170fd0u: goto label_170fd0;
        case 0x170fd4u: goto label_170fd4;
        case 0x170fd8u: goto label_170fd8;
        case 0x170fdcu: goto label_170fdc;
        case 0x170fe0u: goto label_170fe0;
        case 0x170fe4u: goto label_170fe4;
        case 0x170fe8u: goto label_170fe8;
        case 0x170fecu: goto label_170fec;
        case 0x170ff0u: goto label_170ff0;
        case 0x170ff4u: goto label_170ff4;
        case 0x170ff8u: goto label_170ff8;
        case 0x170ffcu: goto label_170ffc;
        case 0x171000u: goto label_171000;
        case 0x171004u: goto label_171004;
        case 0x171008u: goto label_171008;
        case 0x17100cu: goto label_17100c;
        case 0x171010u: goto label_171010;
        case 0x171014u: goto label_171014;
        case 0x171018u: goto label_171018;
        case 0x17101cu: goto label_17101c;
        case 0x171020u: goto label_171020;
        case 0x171024u: goto label_171024;
        case 0x171028u: goto label_171028;
        case 0x17102cu: goto label_17102c;
        case 0x171030u: goto label_171030;
        case 0x171034u: goto label_171034;
        case 0x171038u: goto label_171038;
        case 0x17103cu: goto label_17103c;
        case 0x171040u: goto label_171040;
        case 0x171044u: goto label_171044;
        case 0x171048u: goto label_171048;
        case 0x17104cu: goto label_17104c;
        case 0x171050u: goto label_171050;
        case 0x171054u: goto label_171054;
        case 0x171058u: goto label_171058;
        case 0x17105cu: goto label_17105c;
        case 0x171060u: goto label_171060;
        case 0x171064u: goto label_171064;
        case 0x171068u: goto label_171068;
        case 0x17106cu: goto label_17106c;
        case 0x171070u: goto label_171070;
        case 0x171074u: goto label_171074;
        case 0x171078u: goto label_171078;
        case 0x17107cu: goto label_17107c;
        case 0x171080u: goto label_171080;
        case 0x171084u: goto label_171084;
        case 0x171088u: goto label_171088;
        case 0x17108cu: goto label_17108c;
        case 0x171090u: goto label_171090;
        case 0x171094u: goto label_171094;
        case 0x171098u: goto label_171098;
        case 0x17109cu: goto label_17109c;
        case 0x1710a0u: goto label_1710a0;
        case 0x1710a4u: goto label_1710a4;
        case 0x1710a8u: goto label_1710a8;
        case 0x1710acu: goto label_1710ac;
        case 0x1710b0u: goto label_1710b0;
        case 0x1710b4u: goto label_1710b4;
        case 0x1710b8u: goto label_1710b8;
        default: break;
    }

    ctx->pc = 0x170730u;

label_170730:
    // 0x170730: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x170730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_170734:
    // 0x170734: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x170734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_170738:
    // 0x170738: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x170738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_17073c:
    // 0x17073c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x17073cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_170740:
    // 0x170740: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x170740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_170744:
    // 0x170744: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x170744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_170748:
    // 0x170748: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x170748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_17074c:
    // 0x17074c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17074cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_170750:
    // 0x170750: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x170750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_170754:
    // 0x170754: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x170754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_170758:
    // 0x170758: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x170758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_17075c:
    // 0x17075c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17075cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_170760:
    // 0x170760: 0x8f839da4  lw          $v1, -0x625C($gp)
    ctx->pc = 0x170760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
label_170764:
    // 0x170764: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_170768:
    if (ctx->pc == 0x170768u) {
        ctx->pc = 0x170768u;
            // 0x170768: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17076Cu;
        goto label_17076c;
    }
    ctx->pc = 0x170764u;
    {
        const bool branch_taken_0x170764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170764u;
            // 0x170768: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170764) {
            ctx->pc = 0x170774u;
            goto label_170774;
        }
    }
    ctx->pc = 0x17076Cu;
label_17076c:
    // 0x17076c: 0x10000246  b           . + 4 + (0x246 << 2)
label_170770:
    if (ctx->pc == 0x170770u) {
        ctx->pc = 0x170770u;
            // 0x170770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170774u;
        goto label_170774;
    }
    ctx->pc = 0x17076Cu;
    {
        const bool branch_taken_0x17076c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17076Cu;
            // 0x170770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17076c) {
            ctx->pc = 0x171088u;
            goto label_171088;
        }
    }
    ctx->pc = 0x170774u;
label_170774:
    // 0x170774: 0x24622f90  addiu       $v0, $v1, 0x2F90
    ctx->pc = 0x170774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12176));
label_170778:
    // 0x170778: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x170778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_17077c:
    // 0x17077c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x17077cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_170780:
    // 0x170780: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x170780u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_170784:
    // 0x170784: 0x8c30c4d0  lw          $s0, -0x3B30($at)
    ctx->pc = 0x170784u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
label_170788:
    // 0x170788: 0x8e220588  lw          $v0, 0x588($s1)
    ctx->pc = 0x170788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1416)));
label_17078c:
    // 0x17078c: 0xc0683a8  jal         func_1A0EA0
label_170790:
    if (ctx->pc == 0x170790u) {
        ctx->pc = 0x170790u;
            // 0x170790: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x170794u;
        goto label_170794;
    }
    ctx->pc = 0x17078Cu;
    SET_GPR_U32(ctx, 31, 0x170794u);
    ctx->pc = 0x170790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17078Cu;
            // 0x170790: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170794u; }
        if (ctx->pc != 0x170794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170794u; }
        if (ctx->pc != 0x170794u) { return; }
    }
    ctx->pc = 0x170794u;
label_170794:
    // 0x170794: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x170794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_170798:
    // 0x170798: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x170798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17079c:
    // 0x17079c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17079cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1707a0:
    // 0x1707a0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1707a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1707a4:
    // 0x1707a4: 0x320f809  jalr        $t9
label_1707a8:
    if (ctx->pc == 0x1707A8u) {
        ctx->pc = 0x1707A8u;
            // 0x1707a8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x1707ACu;
        goto label_1707ac;
    }
    ctx->pc = 0x1707A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1707ACu);
        ctx->pc = 0x1707A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1707A4u;
            // 0x1707a8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1707ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1707ACu; }
            if (ctx->pc != 0x1707ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1707ACu;
label_1707ac:
    // 0x1707ac: 0x8e220be8  lw          $v0, 0xBE8($s1)
    ctx->pc = 0x1707acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3048)));
label_1707b0:
    // 0x1707b0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1707b4:
    if (ctx->pc == 0x1707B4u) {
        ctx->pc = 0x1707B4u;
            // 0x1707b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1707B8u;
        goto label_1707b8;
    }
    ctx->pc = 0x1707B0u;
    {
        const bool branch_taken_0x1707b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1707B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1707B0u;
            // 0x1707b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1707b0) {
            ctx->pc = 0x1707C0u;
            goto label_1707c0;
        }
    }
    ctx->pc = 0x1707B8u;
label_1707b8:
    // 0x1707b8: 0x10000234  b           . + 4 + (0x234 << 2)
label_1707bc:
    if (ctx->pc == 0x1707BCu) {
        ctx->pc = 0x1707BCu;
            // 0x1707bc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x1707C0u;
        goto label_1707c0;
    }
    ctx->pc = 0x1707B8u;
    {
        const bool branch_taken_0x1707b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1707BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1707B8u;
            // 0x1707bc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1707b8) {
            ctx->pc = 0x17108Cu;
            goto label_17108c;
        }
    }
    ctx->pc = 0x1707C0u;
label_1707c0:
    // 0x1707c0: 0x8e220768  lw          $v0, 0x768($s1)
    ctx->pc = 0x1707c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1896)));
label_1707c4:
    // 0x1707c4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1707c8:
    if (ctx->pc == 0x1707C8u) {
        ctx->pc = 0x1707C8u;
            // 0x1707c8: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1707CCu;
        goto label_1707cc;
    }
    ctx->pc = 0x1707C4u;
    {
        const bool branch_taken_0x1707c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1707C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1707C4u;
            // 0x1707c8: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1707c4) {
            ctx->pc = 0x1707D4u;
            goto label_1707d4;
        }
    }
    ctx->pc = 0x1707CCu;
label_1707cc:
    // 0x1707cc: 0x1000022e  b           . + 4 + (0x22E << 2)
label_1707d0:
    if (ctx->pc == 0x1707D0u) {
        ctx->pc = 0x1707D0u;
            // 0x1707d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1707D4u;
        goto label_1707d4;
    }
    ctx->pc = 0x1707CCu;
    {
        const bool branch_taken_0x1707cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1707D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1707CCu;
            // 0x1707d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1707cc) {
            ctx->pc = 0x171088u;
            goto label_171088;
        }
    }
    ctx->pc = 0x1707D4u;
label_1707d4:
    // 0x1707d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1707d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1707d8:
    // 0x1707d8: 0x24840710  addiu       $a0, $a0, 0x710
    ctx->pc = 0x1707d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
label_1707dc:
    // 0x1707dc: 0xc06ea10  jal         func_1BA840
label_1707e0:
    if (ctx->pc == 0x1707E0u) {
        ctx->pc = 0x1707E0u;
            // 0x1707e0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1707E4u;
        goto label_1707e4;
    }
    ctx->pc = 0x1707DCu;
    SET_GPR_U32(ctx, 31, 0x1707E4u);
    ctx->pc = 0x1707E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1707DCu;
            // 0x1707e0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA840u;
    if (runtime->hasFunction(0x1BA840u)) {
        auto targetFn = runtime->lookupFunction(0x1BA840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1707E4u; }
        if (ctx->pc != 0x1707E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__11CColPrimManFi_0x1ba840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1707E4u; }
        if (ctx->pc != 0x1707E4u) { return; }
    }
    ctx->pc = 0x1707E4u;
label_1707e4:
    // 0x1707e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1707e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1707e8:
    // 0x1707e8: 0x12600224  beqz        $s3, . + 4 + (0x224 << 2)
label_1707ec:
    if (ctx->pc == 0x1707ECu) {
        ctx->pc = 0x1707ECu;
            // 0x1707ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1707F0u;
        goto label_1707f0;
    }
    ctx->pc = 0x1707E8u;
    {
        const bool branch_taken_0x1707e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1707ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1707E8u;
            // 0x1707ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1707e8) {
            ctx->pc = 0x17107Cu;
            goto label_17107c;
        }
    }
    ctx->pc = 0x1707F0u;
label_1707f0:
    // 0x1707f0: 0xc068140  jal         func_1A0500
label_1707f4:
    if (ctx->pc == 0x1707F4u) {
        ctx->pc = 0x1707F4u;
            // 0x1707f4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1707F8u;
        goto label_1707f8;
    }
    ctx->pc = 0x1707F0u;
    SET_GPR_U32(ctx, 31, 0x1707F8u);
    ctx->pc = 0x1707F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1707F0u;
            // 0x1707f4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0500u;
    if (runtime->hasFunction(0x1A0500u)) {
        auto targetFn = runtime->lookupFunction(0x1A0500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1707F8u; }
        if (ctx->pc != 0x1707F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttr__16CBattleCharaInfoFv_0x1a0500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1707F8u; }
        if (ctx->pc != 0x1707F8u) { return; }
    }
    ctx->pc = 0x1707F8u;
label_1707f8:
    // 0x1707f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1707f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1707fc:
    // 0x1707fc: 0x30420028  andi        $v0, $v0, 0x28
    ctx->pc = 0x1707fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)40);
label_170800:
    // 0x170800: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_170804:
    if (ctx->pc == 0x170804u) {
        ctx->pc = 0x170804u;
            // 0x170804: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170808u;
        goto label_170808;
    }
    ctx->pc = 0x170800u;
    {
        const bool branch_taken_0x170800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170800u;
            // 0x170804: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170800) {
            ctx->pc = 0x17080Cu;
            goto label_17080c;
        }
    }
    ctx->pc = 0x170808u;
label_170808:
    // 0x170808: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x170808u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17080c:
    // 0x17080c: 0xc0680e8  jal         func_1A03A0
label_170810:
    if (ctx->pc == 0x170810u) {
        ctx->pc = 0x170814u;
        goto label_170814;
    }
    ctx->pc = 0x17080Cu;
    SET_GPR_U32(ctx, 31, 0x170814u);
    ctx->pc = 0x1A03A0u;
    if (runtime->hasFunction(0x1A03A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170814u; }
        if (ctx->pc != 0x170814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaxHp_i__16CBattleCharaInfoFv_0x1a03a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170814u; }
        if (ctx->pc != 0x170814u) { return; }
    }
    ctx->pc = 0x170814u;
label_170814:
    // 0x170814: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x170814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_170818:
    // 0x170818: 0xc0680f8  jal         func_1A03E0
label_17081c:
    if (ctx->pc == 0x17081Cu) {
        ctx->pc = 0x17081Cu;
            // 0x17081c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170820u;
        goto label_170820;
    }
    ctx->pc = 0x170818u;
    SET_GPR_U32(ctx, 31, 0x170820u);
    ctx->pc = 0x17081Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170818u;
            // 0x17081c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A03E0u;
    if (runtime->hasFunction(0x1A03E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170820u; }
        if (ctx->pc != 0x170820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHp_i__16CBattleCharaInfoFv_0x1a03e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170820u; }
        if (ctx->pc != 0x170820u) { return; }
    }
    ctx->pc = 0x170820u;
label_170820:
    // 0x170820: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x170820u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170824:
    // 0x170824: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x170824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
label_170828:
    // 0x170828: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x170828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_17082c:
    // 0x17082c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17082cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_170830:
    // 0x170830: 0xc0724bc  jal         func_1C92F0
label_170834:
    if (ctx->pc == 0x170834u) {
        ctx->pc = 0x170838u;
        goto label_170838;
    }
    ctx->pc = 0x170830u;
    SET_GPR_U32(ctx, 31, 0x170838u);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170838u; }
        if (ctx->pc != 0x170838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170838u; }
        if (ctx->pc != 0x170838u) { return; }
    }
    ctx->pc = 0x170838u;
label_170838:
    // 0x170838: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_17083c:
    // 0x17083c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17083cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_170840:
    // 0x170840: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x170840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_170844:
    // 0x170844: 0xc6610088  lwc1        $f1, 0x88($s3)
    ctx->pc = 0x170844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170848:
    // 0x170848: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x170848u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_17084c:
    // 0x17084c: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x17084cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_170850:
    // 0x170850: 0xc068028  jal         func_1A00A0
label_170854:
    if (ctx->pc == 0x170854u) {
        ctx->pc = 0x170854u;
            // 0x170854: 0x46020502  mul.s       $f20, $f0, $f2 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x170858u;
        goto label_170858;
    }
    ctx->pc = 0x170850u;
    SET_GPR_U32(ctx, 31, 0x170858u);
    ctx->pc = 0x170854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170850u;
            // 0x170854: 0x46020502  mul.s       $f20, $f0, $f2 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A00A0u;
    if (runtime->hasFunction(0x1A00A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A00A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170858u; }
        if (ctx->pc != 0x170858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDefenceVol__16CBattleCharaInfoFv_0x1a00a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170858u; }
        if (ctx->pc != 0x170858u) { return; }
    }
    ctx->pc = 0x170858u;
label_170858:
    // 0x170858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17085c:
    // 0x17085c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17085cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_170860:
    // 0x170860: 0x0  nop
    ctx->pc = 0x170860u;
    // NOP
label_170864:
    // 0x170864: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x170864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_170868:
    // 0x170868: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x170868u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_17086c:
    // 0x17086c: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x17086cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_170870:
    // 0x170870: 0x0  nop
    ctx->pc = 0x170870u;
    // NOP
label_170874:
    // 0x170874: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_170878:
    if (ctx->pc == 0x170878u) {
        ctx->pc = 0x17087Cu;
        goto label_17087c;
    }
    ctx->pc = 0x170874u;
    {
        const bool branch_taken_0x170874 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x170874) {
            ctx->pc = 0x170880u;
            goto label_170880;
        }
    }
    ctx->pc = 0x17087Cu;
label_17087c:
    // 0x17087c: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x17087cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_170880:
    // 0x170880: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x170880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_170884:
    // 0x170884: 0x84420046  lh          $v0, 0x46($v0)
    ctx->pc = 0x170884u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
label_170888:
    // 0x170888: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x170888u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_17088c:
    // 0x17088c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_170890:
    if (ctx->pc == 0x170890u) {
        ctx->pc = 0x170894u;
        goto label_170894;
    }
    ctx->pc = 0x17088Cu;
    {
        const bool branch_taken_0x17088c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17088c) {
            ctx->pc = 0x1708A4u;
            goto label_1708a4;
        }
    }
    ctx->pc = 0x170894u;
label_170894:
    // 0x170894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170898:
    // 0x170898: 0x0  nop
    ctx->pc = 0x170898u;
    // NOP
label_17089c:
    // 0x17089c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17089cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1708a0:
    // 0x1708a0: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x1708a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_1708a4:
    // 0x1708a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1708a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1708a8:
    // 0x1708a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1708a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1708ac:
    // 0x1708ac: 0xc0724bc  jal         func_1C92F0
label_1708b0:
    if (ctx->pc == 0x1708B0u) {
        ctx->pc = 0x1708B4u;
        goto label_1708b4;
    }
    ctx->pc = 0x1708ACu;
    SET_GPR_U32(ctx, 31, 0x1708B4u);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1708B4u; }
        if (ctx->pc != 0x1708B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1708B4u; }
        if (ctx->pc != 0x1708B4u) { return; }
    }
    ctx->pc = 0x1708B4u;
label_1708b4:
    // 0x1708b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1708b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1708b8:
    // 0x1708b8: 0x8e7e00a0  lw          $fp, 0xA0($s3)
    ctx->pc = 0x1708b8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_1708bc:
    // 0x1708bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1708bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1708c0:
    // 0x1708c0: 0x0  nop
    ctx->pc = 0x1708c0u;
    // NOP
label_1708c4:
    // 0x1708c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1708c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1708c8:
    // 0x1708c8: 0x33c21000  andi        $v0, $fp, 0x1000
    ctx->pc = 0x1708c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4096);
label_1708cc:
    // 0x1708cc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1708d0:
    if (ctx->pc == 0x1708D0u) {
        ctx->pc = 0x1708D0u;
            // 0x1708d0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x1708D4u;
        goto label_1708d4;
    }
    ctx->pc = 0x1708CCu;
    {
        const bool branch_taken_0x1708cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1708D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1708CCu;
            // 0x1708d0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708cc) {
            ctx->pc = 0x170944u;
            goto label_170944;
        }
    }
    ctx->pc = 0x1708D4u;
label_1708d4:
    // 0x1708d4: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1708d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1708d8:
    // 0x1708d8: 0xc6620088  lwc1        $f2, 0x88($s3)
    ctx->pc = 0x1708d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1708dc:
    // 0x1708dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1708dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1708e0:
    // 0x1708e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1708e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1708e4:
    // 0x1708e4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1708e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1708e8:
    // 0x1708e8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1708e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1708ec:
    // 0x1708ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1708ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1708f0:
    // 0x1708f0: 0x0  nop
    ctx->pc = 0x1708f0u;
    // NOP
label_1708f4:
    // 0x1708f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1708f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1708f8:
    // 0x1708f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1708f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1708fc:
    // 0x1708fc: 0xc0a248c  jal         func_289230
label_170900:
    if (ctx->pc == 0x170900u) {
        ctx->pc = 0x170900u;
            // 0x170900: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x170904u;
        goto label_170904;
    }
    ctx->pc = 0x1708FCu;
    SET_GPR_U32(ctx, 31, 0x170904u);
    ctx->pc = 0x170900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1708FCu;
            // 0x170900: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170904u; }
        if (ctx->pc != 0x170904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170904u; }
        if (ctx->pc != 0x170904u) { return; }
    }
    ctx->pc = 0x170904u;
label_170904:
    // 0x170904: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x170904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_170908:
    // 0x170908: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x170908u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17090c:
    // 0x17090c: 0x0  nop
    ctx->pc = 0x17090cu;
    // NOP
label_170910:
    // 0x170910: 0x46800d20  cvt.s.w     $f20, $f1
    ctx->pc = 0x170910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_170914:
    // 0x170914: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x170914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_170918:
    // 0x170918: 0x46141041  sub.s       $f1, $f2, $f20
    ctx->pc = 0x170918u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
label_17091c:
    // 0x17091c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17091cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170920:
    // 0x170920: 0x0  nop
    ctx->pc = 0x170920u;
    // NOP
label_170924:
    // 0x170924: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_170928:
    // 0x170928: 0x0  nop
    ctx->pc = 0x170928u;
    // NOP
label_17092c:
    // 0x17092c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_170930:
    if (ctx->pc == 0x170930u) {
        ctx->pc = 0x170930u;
            // 0x170930: 0x33c22000  andi        $v0, $fp, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8192);
        ctx->pc = 0x170934u;
        goto label_170934;
    }
    ctx->pc = 0x17092Cu;
    {
        const bool branch_taken_0x17092c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x170930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17092Cu;
            // 0x170930: 0x33c22000  andi        $v0, $fp, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17092c) {
            ctx->pc = 0x170948u;
            goto label_170948;
        }
    }
    ctx->pc = 0x170934u;
label_170934:
    // 0x170934: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170938:
    // 0x170938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17093c:
    // 0x17093c: 0x0  nop
    ctx->pc = 0x17093cu;
    // NOP
label_170940:
    // 0x170940: 0x46001501  sub.s       $f20, $f2, $f0
    ctx->pc = 0x170940u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_170944:
    // 0x170944: 0x33c22000  andi        $v0, $fp, 0x2000
    ctx->pc = 0x170944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8192);
label_170948:
    // 0x170948: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_17094c:
    if (ctx->pc == 0x17094Cu) {
        ctx->pc = 0x17094Cu;
            // 0x17094c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x170950u;
        goto label_170950;
    }
    ctx->pc = 0x170948u;
    {
        const bool branch_taken_0x170948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17094Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170948u;
            // 0x17094c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170948) {
            ctx->pc = 0x170990u;
            goto label_170990;
        }
    }
    ctx->pc = 0x170950u;
label_170950:
    // 0x170950: 0x6c10003  bgez        $s6, . + 4 + (0x3 << 2)
label_170954:
    if (ctx->pc == 0x170954u) {
        ctx->pc = 0x170954u;
            // 0x170954: 0x161043  sra         $v0, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 22), 1));
        ctx->pc = 0x170958u;
        goto label_170958;
    }
    ctx->pc = 0x170950u;
    {
        const bool branch_taken_0x170950 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x170954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170950u;
            // 0x170954: 0x161043  sra         $v0, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170950) {
            ctx->pc = 0x170960u;
            goto label_170960;
        }
    }
    ctx->pc = 0x170958u;
label_170958:
    // 0x170958: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x170958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_17095c:
    // 0x17095c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x17095cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_170960:
    // 0x170960: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x170960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_170964:
    // 0x170964: 0x0  nop
    ctx->pc = 0x170964u;
    // NOP
label_170968:
    // 0x170968: 0x46800d20  cvt.s.w     $f20, $f1
    ctx->pc = 0x170968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_17096c:
    // 0x17096c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17096cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170970:
    // 0x170970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170974:
    // 0x170974: 0x0  nop
    ctx->pc = 0x170974u;
    // NOP
label_170978:
    // 0x170978: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x170978u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17097c:
    // 0x17097c: 0x0  nop
    ctx->pc = 0x17097cu;
    // NOP
label_170980:
    // 0x170980: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_170984:
    if (ctx->pc == 0x170984u) {
        ctx->pc = 0x170988u;
        goto label_170988;
    }
    ctx->pc = 0x170980u;
    {
        const bool branch_taken_0x170980 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x170980) {
            ctx->pc = 0x17098Cu;
            goto label_17098c;
        }
    }
    ctx->pc = 0x170988u;
label_170988:
    // 0x170988: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x170988u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_17098c:
    // 0x17098c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17098cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_170990:
    // 0x170990: 0xc0a248c  jal         func_289230
label_170994:
    if (ctx->pc == 0x170994u) {
        ctx->pc = 0x170998u;
        goto label_170998;
    }
    ctx->pc = 0x170990u;
    SET_GPR_U32(ctx, 31, 0x170998u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170998u; }
        if (ctx->pc != 0x170998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170998u; }
        if (ctx->pc != 0x170998u) { return; }
    }
    ctx->pc = 0x170998u;
label_170998:
    // 0x170998: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_17099c:
    if (ctx->pc == 0x17099Cu) {
        ctx->pc = 0x1709A0u;
        goto label_1709a0;
    }
    ctx->pc = 0x170998u;
    {
        const bool branch_taken_0x170998 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x170998) {
            ctx->pc = 0x1709A4u;
            goto label_1709a4;
        }
    }
    ctx->pc = 0x1709A0u;
label_1709a0:
    // 0x1709a0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1709a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1709a4:
    // 0x1709a4: 0x8e360bf0  lw          $s6, 0xBF0($s1)
    ctx->pc = 0x1709a4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3056)));
label_1709a8:
    // 0x1709a8: 0x12c0000b  beqz        $s6, . + 4 + (0xB << 2)
label_1709ac:
    if (ctx->pc == 0x1709ACu) {
        ctx->pc = 0x1709B0u;
        goto label_1709b0;
    }
    ctx->pc = 0x1709A8u;
    {
        const bool branch_taken_0x1709a8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1709a8) {
            ctx->pc = 0x1709D8u;
            goto label_1709d8;
        }
    }
    ctx->pc = 0x1709B0u;
label_1709b0:
    // 0x1709b0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1709b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1709b4:
    // 0x1709b4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1709b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1709b8:
    // 0x1709b8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1709b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1709bc:
    // 0x1709bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1709bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1709c0:
    // 0x1709c0: 0x84620024  lh          $v0, 0x24($v1)
    ctx->pc = 0x1709c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
label_1709c4:
    // 0x1709c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1709c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1709c8:
    // 0x1709c8: 0x0  nop
    ctx->pc = 0x1709c8u;
    // NOP
label_1709cc:
    // 0x1709cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1709ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1709d0:
    // 0x1709d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1709d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1709d4:
    // 0x1709d4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1709d4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1709d8:
    // 0x1709d8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1709d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1709dc:
    // 0x1709dc: 0x84420026  lh          $v0, 0x26($v0)
    ctx->pc = 0x1709dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
label_1709e0:
    // 0x1709e0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1709e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1709e4:
    // 0x1709e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1709e8:
    if (ctx->pc == 0x1709E8u) {
        ctx->pc = 0x1709ECu;
        goto label_1709ec;
    }
    ctx->pc = 0x1709E4u;
    {
        const bool branch_taken_0x1709e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1709e4) {
            ctx->pc = 0x1709F4u;
            goto label_1709f4;
        }
    }
    ctx->pc = 0x1709ECu;
label_1709ec:
    // 0x1709ec: 0xae200bf0  sw          $zero, 0xBF0($s1)
    ctx->pc = 0x1709ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3056), GPR_U32(ctx, 0));
label_1709f0:
    // 0x1709f0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1709f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1709f4:
    // 0x1709f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1709f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1709f8:
    // 0x1709f8: 0x0  nop
    ctx->pc = 0x1709f8u;
    // NOP
label_1709fc:
    // 0x1709fc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1709fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_170a00:
    // 0x170a00: 0x0  nop
    ctx->pc = 0x170a00u;
    // NOP
label_170a04:
    // 0x170a04: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_170a08:
    if (ctx->pc == 0x170A08u) {
        ctx->pc = 0x170A08u;
            // 0x170a08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x170A0Cu;
        goto label_170a0c;
    }
    ctx->pc = 0x170A04u;
    {
        const bool branch_taken_0x170a04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x170A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170A04u;
            // 0x170a08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a04) {
            ctx->pc = 0x170A20u;
            goto label_170a20;
        }
    }
    ctx->pc = 0x170A0Cu;
label_170a0c:
    // 0x170a0c: 0xc0945c8  jal         func_251720
label_170a10:
    if (ctx->pc == 0x170A10u) {
        ctx->pc = 0x170A14u;
        goto label_170a14;
    }
    ctx->pc = 0x170A0Cu;
    SET_GPR_U32(ctx, 31, 0x170A14u);
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A14u; }
        if (ctx->pc != 0x170A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A14u; }
        if (ctx->pc != 0x170A14u) { return; }
    }
    ctx->pc = 0x170A14u;
label_170a14:
    // 0x170a14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170a18:
    // 0x170a18: 0x0  nop
    ctx->pc = 0x170a18u;
    // NOP
label_170a1c:
    // 0x170a1c: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x170a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_170a20:
    // 0x170a20: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x170a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_170a24:
    // 0x170a24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x170a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_170a28:
    // 0x170a28: 0xc06802c  jal         func_1A00B0
label_170a2c:
    if (ctx->pc == 0x170A2Cu) {
        ctx->pc = 0x170A2Cu;
            // 0x170a2c: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[20]);
        ctx->pc = 0x170A30u;
        goto label_170a30;
    }
    ctx->pc = 0x170A28u;
    SET_GPR_U32(ctx, 31, 0x170A30u);
    ctx->pc = 0x170A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170A28u;
            // 0x170a2c: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B0u;
    if (runtime->hasFunction(0x1A00B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A00B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A30u; }
        if (ctx->pc != 0x170A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHp_Point__16CBattleCharaInfoFff_0x1a00b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A30u; }
        if (ctx->pc != 0x170A30u) { return; }
    }
    ctx->pc = 0x170A30u;
label_170a30:
    // 0x170a30: 0xc0a248c  jal         func_289230
label_170a34:
    if (ctx->pc == 0x170A34u) {
        ctx->pc = 0x170A34u;
            // 0x170a34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x170A38u;
        goto label_170a38;
    }
    ctx->pc = 0x170A30u;
    SET_GPR_U32(ctx, 31, 0x170A38u);
    ctx->pc = 0x170A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170A30u;
            // 0x170a34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A38u; }
        if (ctx->pc != 0x170A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A38u; }
        if (ctx->pc != 0x170A38u) { return; }
    }
    ctx->pc = 0x170A38u;
label_170a38:
    // 0x170a38: 0x18400089  blez        $v0, . + 4 + (0x89 << 2)
label_170a3c:
    if (ctx->pc == 0x170A3Cu) {
        ctx->pc = 0x170A3Cu;
            // 0x170a3c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170A40u;
        goto label_170a40;
    }
    ctx->pc = 0x170A38u;
    {
        const bool branch_taken_0x170a38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x170A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170A38u;
            // 0x170a3c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a38) {
            ctx->pc = 0x170C60u;
            goto label_170c60;
        }
    }
    ctx->pc = 0x170A40u;
label_170a40:
    // 0x170a40: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x170a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_170a44:
    // 0x170a44: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x170a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_170a48:
    // 0x170a48: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_170a4c:
    if (ctx->pc == 0x170A4Cu) {
        ctx->pc = 0x170A4Cu;
            // 0x170a4c: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x170A50u;
        goto label_170a50;
    }
    ctx->pc = 0x170A48u;
    {
        const bool branch_taken_0x170a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170A48u;
            // 0x170a4c: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a48) {
            ctx->pc = 0x170A98u;
            goto label_170a98;
        }
    }
    ctx->pc = 0x170A50u;
label_170a50:
    // 0x170a50: 0xc0724a4  jal         func_1C9290
label_170a54:
    if (ctx->pc == 0x170A54u) {
        ctx->pc = 0x170A58u;
        goto label_170a58;
    }
    ctx->pc = 0x170A50u;
    SET_GPR_U32(ctx, 31, 0x170A58u);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A58u; }
        if (ctx->pc != 0x170A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A58u; }
        if (ctx->pc != 0x170A58u) { return; }
    }
    ctx->pc = 0x170A58u;
label_170a58:
    // 0x170a58: 0x2841001e  slti        $at, $v0, 0x1E
    ctx->pc = 0x170a58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
label_170a5c:
    // 0x170a5c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_170a60:
    if (ctx->pc == 0x170A60u) {
        ctx->pc = 0x170A60u;
            // 0x170a60: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x170A64u;
        goto label_170a64;
    }
    ctx->pc = 0x170A5Cu;
    {
        const bool branch_taken_0x170a5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170A5Cu;
            // 0x170a60: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a5c) {
            ctx->pc = 0x170A98u;
            goto label_170a98;
        }
    }
    ctx->pc = 0x170A64u;
label_170a64:
    // 0x170a64: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_170a68:
    if (ctx->pc == 0x170A68u) {
        ctx->pc = 0x170A68u;
            // 0x170a68: 0x24040101  addiu       $a0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->pc = 0x170A6Cu;
        goto label_170a6c;
    }
    ctx->pc = 0x170A64u;
    {
        const bool branch_taken_0x170a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170A64u;
            // 0x170a68: 0x24040101  addiu       $a0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a64) {
            ctx->pc = 0x170A98u;
            goto label_170a98;
        }
    }
    ctx->pc = 0x170A6Cu;
label_170a6c:
    // 0x170a6c: 0xc05c178  jal         func_1705E0
label_170a70:
    if (ctx->pc == 0x170A70u) {
        ctx->pc = 0x170A74u;
        goto label_170a74;
    }
    ctx->pc = 0x170A6Cu;
    SET_GPR_U32(ctx, 31, 0x170A74u);
    ctx->pc = 0x1705E0u;
    if (runtime->hasFunction(0x1705E0u)) {
        auto targetFn = runtime->lookupFunction(0x1705E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A74u; }
        if (ctx->pc != 0x170A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAmuletAvoid__Fi_0x1705e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A74u; }
        if (ctx->pc != 0x170A74u) { return; }
    }
    ctx->pc = 0x170A74u;
label_170a74:
    // 0x170a74: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_170a78:
    if (ctx->pc == 0x170A78u) {
        ctx->pc = 0x170A78u;
            // 0x170a78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170A7Cu;
        goto label_170a7c;
    }
    ctx->pc = 0x170A74u;
    {
        const bool branch_taken_0x170a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170A74u;
            // 0x170a78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a74) {
            ctx->pc = 0x170A98u;
            goto label_170a98;
        }
    }
    ctx->pc = 0x170A7Cu;
label_170a7c:
    // 0x170a7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x170a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170a80:
    // 0x170a80: 0xc068108  jal         func_1A0420
label_170a84:
    if (ctx->pc == 0x170A84u) {
        ctx->pc = 0x170A84u;
            // 0x170a84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170A88u;
        goto label_170a88;
    }
    ctx->pc = 0x170A80u;
    SET_GPR_U32(ctx, 31, 0x170A88u);
    ctx->pc = 0x170A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170A80u;
            // 0x170a84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0420u;
    if (runtime->hasFunction(0x1A0420u)) {
        auto targetFn = runtime->lookupFunction(0x1A0420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A88u; }
        if (ctx->pc != 0x170A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttr__16CBattleCharaInfoFii_0x1a0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A88u; }
        if (ctx->pc != 0x170A88u) { return; }
    }
    ctx->pc = 0x170A88u;
label_170a88:
    // 0x170a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170a8c:
    // 0x170a8c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x170a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_170a90:
    // 0x170a90: 0xc063818  jal         func_18E060
label_170a94:
    if (ctx->pc == 0x170A94u) {
        ctx->pc = 0x170A94u;
            // 0x170a94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170A98u;
        goto label_170a98;
    }
    ctx->pc = 0x170A90u;
    SET_GPR_U32(ctx, 31, 0x170A98u);
    ctx->pc = 0x170A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170A90u;
            // 0x170a94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A98u; }
        if (ctx->pc != 0x170A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A98u; }
        if (ctx->pc != 0x170A98u) { return; }
    }
    ctx->pc = 0x170A98u;
label_170a98:
    // 0x170a98: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x170a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_170a9c:
    // 0x170a9c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x170a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_170aa0:
    // 0x170aa0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x170aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_170aa4:
    // 0x170aa4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_170aa8:
    if (ctx->pc == 0x170AA8u) {
        ctx->pc = 0x170AACu;
        goto label_170aac;
    }
    ctx->pc = 0x170AA4u;
    {
        const bool branch_taken_0x170aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170aa4) {
            ctx->pc = 0x170B08u;
            goto label_170b08;
        }
    }
    ctx->pc = 0x170AACu;
label_170aac:
    // 0x170aac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x170aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_170ab0:
    // 0x170ab0: 0x8043008c  lb          $v1, 0x8C($v0)
    ctx->pc = 0x170ab0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
label_170ab4:
    // 0x170ab4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x170ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_170ab8:
    // 0x170ab8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_170abc:
    if (ctx->pc == 0x170ABCu) {
        ctx->pc = 0x170ABCu;
            // 0x170abc: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x170AC0u;
        goto label_170ac0;
    }
    ctx->pc = 0x170AB8u;
    {
        const bool branch_taken_0x170ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x170ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170AB8u;
            // 0x170abc: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ab8) {
            ctx->pc = 0x170B08u;
            goto label_170b08;
        }
    }
    ctx->pc = 0x170AC0u;
label_170ac0:
    // 0x170ac0: 0xc0724a4  jal         func_1C9290
label_170ac4:
    if (ctx->pc == 0x170AC4u) {
        ctx->pc = 0x170AC8u;
        goto label_170ac8;
    }
    ctx->pc = 0x170AC0u;
    SET_GPR_U32(ctx, 31, 0x170AC8u);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170AC8u; }
        if (ctx->pc != 0x170AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170AC8u; }
        if (ctx->pc != 0x170AC8u) { return; }
    }
    ctx->pc = 0x170AC8u;
label_170ac8:
    // 0x170ac8: 0x2841001e  slti        $at, $v0, 0x1E
    ctx->pc = 0x170ac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
label_170acc:
    // 0x170acc: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_170ad0:
    if (ctx->pc == 0x170AD0u) {
        ctx->pc = 0x170AD0u;
            // 0x170ad0: 0x32820002  andi        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x170AD4u;
        goto label_170ad4;
    }
    ctx->pc = 0x170ACCu;
    {
        const bool branch_taken_0x170acc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170ACCu;
            // 0x170ad0: 0x32820002  andi        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170acc) {
            ctx->pc = 0x170B08u;
            goto label_170b08;
        }
    }
    ctx->pc = 0x170AD4u;
label_170ad4:
    // 0x170ad4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_170ad8:
    if (ctx->pc == 0x170AD8u) {
        ctx->pc = 0x170AD8u;
            // 0x170ad8: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x170ADCu;
        goto label_170adc;
    }
    ctx->pc = 0x170AD4u;
    {
        const bool branch_taken_0x170ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170AD4u;
            // 0x170ad8: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ad4) {
            ctx->pc = 0x170B08u;
            goto label_170b08;
        }
    }
    ctx->pc = 0x170ADCu;
label_170adc:
    // 0x170adc: 0xc05c178  jal         func_1705E0
label_170ae0:
    if (ctx->pc == 0x170AE0u) {
        ctx->pc = 0x170AE4u;
        goto label_170ae4;
    }
    ctx->pc = 0x170ADCu;
    SET_GPR_U32(ctx, 31, 0x170AE4u);
    ctx->pc = 0x1705E0u;
    if (runtime->hasFunction(0x1705E0u)) {
        auto targetFn = runtime->lookupFunction(0x1705E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170AE4u; }
        if (ctx->pc != 0x170AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAmuletAvoid__Fi_0x1705e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170AE4u; }
        if (ctx->pc != 0x170AE4u) { return; }
    }
    ctx->pc = 0x170AE4u;
label_170ae4:
    // 0x170ae4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_170ae8:
    if (ctx->pc == 0x170AE8u) {
        ctx->pc = 0x170AE8u;
            // 0x170ae8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170AECu;
        goto label_170aec;
    }
    ctx->pc = 0x170AE4u;
    {
        const bool branch_taken_0x170ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170AE4u;
            // 0x170ae8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ae4) {
            ctx->pc = 0x170B08u;
            goto label_170b08;
        }
    }
    ctx->pc = 0x170AECu;
label_170aec:
    // 0x170aec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x170aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_170af0:
    // 0x170af0: 0xc068124  jal         func_1A0490
label_170af4:
    if (ctx->pc == 0x170AF4u) {
        ctx->pc = 0x170AF4u;
            // 0x170af4: 0x24060e10  addiu       $a2, $zero, 0xE10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
        ctx->pc = 0x170AF8u;
        goto label_170af8;
    }
    ctx->pc = 0x170AF0u;
    SET_GPR_U32(ctx, 31, 0x170AF8u);
    ctx->pc = 0x170AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170AF0u;
            // 0x170af4: 0x24060e10  addiu       $a2, $zero, 0xE10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0490u;
    if (runtime->hasFunction(0x1A0490u)) {
        auto targetFn = runtime->lookupFunction(0x1A0490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170AF8u; }
        if (ctx->pc != 0x170AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrVol__16CBattleCharaInfoFii_0x1a0490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170AF8u; }
        if (ctx->pc != 0x170AF8u) { return; }
    }
    ctx->pc = 0x170AF8u;
label_170af8:
    // 0x170af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170afc:
    // 0x170afc: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x170afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_170b00:
    // 0x170b00: 0xc063818  jal         func_18E060
label_170b04:
    if (ctx->pc == 0x170B04u) {
        ctx->pc = 0x170B04u;
            // 0x170b04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170B08u;
        goto label_170b08;
    }
    ctx->pc = 0x170B00u;
    SET_GPR_U32(ctx, 31, 0x170B08u);
    ctx->pc = 0x170B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170B00u;
            // 0x170b04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B08u; }
        if (ctx->pc != 0x170B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B08u; }
        if (ctx->pc != 0x170B08u) { return; }
    }
    ctx->pc = 0x170B08u;
label_170b08:
    // 0x170b08: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x170b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_170b0c:
    // 0x170b0c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x170b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_170b10:
    // 0x170b10: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_170b14:
    if (ctx->pc == 0x170B14u) {
        ctx->pc = 0x170B14u;
            // 0x170b14: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x170B18u;
        goto label_170b18;
    }
    ctx->pc = 0x170B10u;
    {
        const bool branch_taken_0x170b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170B10u;
            // 0x170b14: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b10) {
            ctx->pc = 0x170B64u;
            goto label_170b64;
        }
    }
    ctx->pc = 0x170B18u;
label_170b18:
    // 0x170b18: 0xc0724a4  jal         func_1C9290
label_170b1c:
    if (ctx->pc == 0x170B1Cu) {
        ctx->pc = 0x170B20u;
        goto label_170b20;
    }
    ctx->pc = 0x170B18u;
    SET_GPR_U32(ctx, 31, 0x170B20u);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B20u; }
        if (ctx->pc != 0x170B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B20u; }
        if (ctx->pc != 0x170B20u) { return; }
    }
    ctx->pc = 0x170B20u;
label_170b20:
    // 0x170b20: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x170b20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
label_170b24:
    // 0x170b24: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_170b28:
    if (ctx->pc == 0x170B28u) {
        ctx->pc = 0x170B28u;
            // 0x170b28: 0x32820020  andi        $v0, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->pc = 0x170B2Cu;
        goto label_170b2c;
    }
    ctx->pc = 0x170B24u;
    {
        const bool branch_taken_0x170b24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170B24u;
            // 0x170b28: 0x32820020  andi        $v0, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b24) {
            ctx->pc = 0x170B64u;
            goto label_170b64;
        }
    }
    ctx->pc = 0x170B2Cu;
label_170b2c:
    // 0x170b2c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_170b30:
    if (ctx->pc == 0x170B30u) {
        ctx->pc = 0x170B30u;
            // 0x170b30: 0x240400fd  addiu       $a0, $zero, 0xFD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
        ctx->pc = 0x170B34u;
        goto label_170b34;
    }
    ctx->pc = 0x170B2Cu;
    {
        const bool branch_taken_0x170b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170B2Cu;
            // 0x170b30: 0x240400fd  addiu       $a0, $zero, 0xFD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b2c) {
            ctx->pc = 0x170B64u;
            goto label_170b64;
        }
    }
    ctx->pc = 0x170B34u;
label_170b34:
    // 0x170b34: 0xc05c178  jal         func_1705E0
label_170b38:
    if (ctx->pc == 0x170B38u) {
        ctx->pc = 0x170B3Cu;
        goto label_170b3c;
    }
    ctx->pc = 0x170B34u;
    SET_GPR_U32(ctx, 31, 0x170B3Cu);
    ctx->pc = 0x1705E0u;
    if (runtime->hasFunction(0x1705E0u)) {
        auto targetFn = runtime->lookupFunction(0x1705E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B3Cu; }
        if (ctx->pc != 0x170B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAmuletAvoid__Fi_0x1705e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B3Cu; }
        if (ctx->pc != 0x170B3Cu) { return; }
    }
    ctx->pc = 0x170B3Cu;
label_170b3c:
    // 0x170b3c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_170b40:
    if (ctx->pc == 0x170B40u) {
        ctx->pc = 0x170B40u;
            // 0x170b40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170B44u;
        goto label_170b44;
    }
    ctx->pc = 0x170B3Cu;
    {
        const bool branch_taken_0x170b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170B3Cu;
            // 0x170b40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b3c) {
            ctx->pc = 0x170B64u;
            goto label_170b64;
        }
    }
    ctx->pc = 0x170B44u;
label_170b44:
    // 0x170b44: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x170b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_170b48:
    // 0x170b48: 0xc068124  jal         func_1A0490
label_170b4c:
    if (ctx->pc == 0x170B4Cu) {
        ctx->pc = 0x170B4Cu;
            // 0x170b4c: 0x24060384  addiu       $a2, $zero, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
        ctx->pc = 0x170B50u;
        goto label_170b50;
    }
    ctx->pc = 0x170B48u;
    SET_GPR_U32(ctx, 31, 0x170B50u);
    ctx->pc = 0x170B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170B48u;
            // 0x170b4c: 0x24060384  addiu       $a2, $zero, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0490u;
    if (runtime->hasFunction(0x1A0490u)) {
        auto targetFn = runtime->lookupFunction(0x1A0490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B50u; }
        if (ctx->pc != 0x170B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrVol__16CBattleCharaInfoFii_0x1a0490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B50u; }
        if (ctx->pc != 0x170B50u) { return; }
    }
    ctx->pc = 0x170B50u;
label_170b50:
    // 0x170b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170b54:
    // 0x170b54: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x170b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_170b58:
    // 0x170b58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170b5c:
    // 0x170b5c: 0xc063818  jal         func_18E060
label_170b60:
    if (ctx->pc == 0x170B60u) {
        ctx->pc = 0x170B60u;
            // 0x170b60: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x170B64u;
        goto label_170b64;
    }
    ctx->pc = 0x170B5Cu;
    SET_GPR_U32(ctx, 31, 0x170B64u);
    ctx->pc = 0x170B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170B5Cu;
            // 0x170b60: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B64u; }
        if (ctx->pc != 0x170B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B64u; }
        if (ctx->pc != 0x170B64u) { return; }
    }
    ctx->pc = 0x170B64u;
label_170b64:
    // 0x170b64: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x170b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_170b68:
    // 0x170b68: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x170b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_170b6c:
    // 0x170b6c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_170b70:
    if (ctx->pc == 0x170B70u) {
        ctx->pc = 0x170B70u;
            // 0x170b70: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x170B74u;
        goto label_170b74;
    }
    ctx->pc = 0x170B6Cu;
    {
        const bool branch_taken_0x170b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170B6Cu;
            // 0x170b70: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b6c) {
            ctx->pc = 0x170BC0u;
            goto label_170bc0;
        }
    }
    ctx->pc = 0x170B74u;
label_170b74:
    // 0x170b74: 0xc0724a4  jal         func_1C9290
label_170b78:
    if (ctx->pc == 0x170B78u) {
        ctx->pc = 0x170B7Cu;
        goto label_170b7c;
    }
    ctx->pc = 0x170B74u;
    SET_GPR_U32(ctx, 31, 0x170B7Cu);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B7Cu; }
        if (ctx->pc != 0x170B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B7Cu; }
        if (ctx->pc != 0x170B7Cu) { return; }
    }
    ctx->pc = 0x170B7Cu;
label_170b7c:
    // 0x170b7c: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x170b7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
label_170b80:
    // 0x170b80: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_170b84:
    if (ctx->pc == 0x170B84u) {
        ctx->pc = 0x170B84u;
            // 0x170b84: 0x32820008  andi        $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x170B88u;
        goto label_170b88;
    }
    ctx->pc = 0x170B80u;
    {
        const bool branch_taken_0x170b80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170B80u;
            // 0x170b84: 0x32820008  andi        $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b80) {
            ctx->pc = 0x170BC0u;
            goto label_170bc0;
        }
    }
    ctx->pc = 0x170B88u;
label_170b88:
    // 0x170b88: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_170b8c:
    if (ctx->pc == 0x170B8Cu) {
        ctx->pc = 0x170B8Cu;
            // 0x170b8c: 0x240400fe  addiu       $a0, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->pc = 0x170B90u;
        goto label_170b90;
    }
    ctx->pc = 0x170B88u;
    {
        const bool branch_taken_0x170b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170B88u;
            // 0x170b8c: 0x240400fe  addiu       $a0, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b88) {
            ctx->pc = 0x170BC0u;
            goto label_170bc0;
        }
    }
    ctx->pc = 0x170B90u;
label_170b90:
    // 0x170b90: 0xc05c178  jal         func_1705E0
label_170b94:
    if (ctx->pc == 0x170B94u) {
        ctx->pc = 0x170B98u;
        goto label_170b98;
    }
    ctx->pc = 0x170B90u;
    SET_GPR_U32(ctx, 31, 0x170B98u);
    ctx->pc = 0x1705E0u;
    if (runtime->hasFunction(0x1705E0u)) {
        auto targetFn = runtime->lookupFunction(0x1705E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B98u; }
        if (ctx->pc != 0x170B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAmuletAvoid__Fi_0x1705e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B98u; }
        if (ctx->pc != 0x170B98u) { return; }
    }
    ctx->pc = 0x170B98u;
label_170b98:
    // 0x170b98: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_170b9c:
    if (ctx->pc == 0x170B9Cu) {
        ctx->pc = 0x170B9Cu;
            // 0x170b9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170BA0u;
        goto label_170ba0;
    }
    ctx->pc = 0x170B98u;
    {
        const bool branch_taken_0x170b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170B98u;
            // 0x170b9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b98) {
            ctx->pc = 0x170BC0u;
            goto label_170bc0;
        }
    }
    ctx->pc = 0x170BA0u;
label_170ba0:
    // 0x170ba0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x170ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_170ba4:
    // 0x170ba4: 0xc068124  jal         func_1A0490
label_170ba8:
    if (ctx->pc == 0x170BA8u) {
        ctx->pc = 0x170BA8u;
            // 0x170ba8: 0x2406012c  addiu       $a2, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->pc = 0x170BACu;
        goto label_170bac;
    }
    ctx->pc = 0x170BA4u;
    SET_GPR_U32(ctx, 31, 0x170BACu);
    ctx->pc = 0x170BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170BA4u;
            // 0x170ba8: 0x2406012c  addiu       $a2, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0490u;
    if (runtime->hasFunction(0x1A0490u)) {
        auto targetFn = runtime->lookupFunction(0x1A0490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170BACu; }
        if (ctx->pc != 0x170BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrVol__16CBattleCharaInfoFii_0x1a0490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170BACu; }
        if (ctx->pc != 0x170BACu) { return; }
    }
    ctx->pc = 0x170BACu;
label_170bac:
    // 0x170bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170bb0:
    // 0x170bb0: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x170bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_170bb4:
    // 0x170bb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170bb8:
    // 0x170bb8: 0xc063818  jal         func_18E060
label_170bbc:
    if (ctx->pc == 0x170BBCu) {
        ctx->pc = 0x170BBCu;
            // 0x170bbc: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x170BC0u;
        goto label_170bc0;
    }
    ctx->pc = 0x170BB8u;
    SET_GPR_U32(ctx, 31, 0x170BC0u);
    ctx->pc = 0x170BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170BB8u;
            // 0x170bbc: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170BC0u; }
        if (ctx->pc != 0x170BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170BC0u; }
        if (ctx->pc != 0x170BC0u) { return; }
    }
    ctx->pc = 0x170BC0u;
label_170bc0:
    // 0x170bc0: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x170bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_170bc4:
    // 0x170bc4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x170bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_170bc8:
    // 0x170bc8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x170bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_170bcc:
    // 0x170bcc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_170bd0:
    if (ctx->pc == 0x170BD0u) {
        ctx->pc = 0x170BD0u;
            // 0x170bd0: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x170BD4u;
        goto label_170bd4;
    }
    ctx->pc = 0x170BCCu;
    {
        const bool branch_taken_0x170bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170BCCu;
            // 0x170bd0: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170bcc) {
            ctx->pc = 0x170C1Cu;
            goto label_170c1c;
        }
    }
    ctx->pc = 0x170BD4u;
label_170bd4:
    // 0x170bd4: 0xc0724a4  jal         func_1C9290
label_170bd8:
    if (ctx->pc == 0x170BD8u) {
        ctx->pc = 0x170BDCu;
        goto label_170bdc;
    }
    ctx->pc = 0x170BD4u;
    SET_GPR_U32(ctx, 31, 0x170BDCu);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170BDCu; }
        if (ctx->pc != 0x170BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170BDCu; }
        if (ctx->pc != 0x170BDCu) { return; }
    }
    ctx->pc = 0x170BDCu;
label_170bdc:
    // 0x170bdc: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x170bdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
label_170be0:
    // 0x170be0: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_170be4:
    if (ctx->pc == 0x170BE4u) {
        ctx->pc = 0x170BE4u;
            // 0x170be4: 0x32820004  andi        $v0, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x170BE8u;
        goto label_170be8;
    }
    ctx->pc = 0x170BE0u;
    {
        const bool branch_taken_0x170be0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170BE0u;
            // 0x170be4: 0x32820004  andi        $v0, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170be0) {
            ctx->pc = 0x170C1Cu;
            goto label_170c1c;
        }
    }
    ctx->pc = 0x170BE8u;
label_170be8:
    // 0x170be8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_170bec:
    if (ctx->pc == 0x170BECu) {
        ctx->pc = 0x170BECu;
            // 0x170bec: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x170BF0u;
        goto label_170bf0;
    }
    ctx->pc = 0x170BE8u;
    {
        const bool branch_taken_0x170be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170BE8u;
            // 0x170bec: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170be8) {
            ctx->pc = 0x170C1Cu;
            goto label_170c1c;
        }
    }
    ctx->pc = 0x170BF0u;
label_170bf0:
    // 0x170bf0: 0xc05c178  jal         func_1705E0
label_170bf4:
    if (ctx->pc == 0x170BF4u) {
        ctx->pc = 0x170BF8u;
        goto label_170bf8;
    }
    ctx->pc = 0x170BF0u;
    SET_GPR_U32(ctx, 31, 0x170BF8u);
    ctx->pc = 0x1705E0u;
    if (runtime->hasFunction(0x1705E0u)) {
        auto targetFn = runtime->lookupFunction(0x1705E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170BF8u; }
        if (ctx->pc != 0x170BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAmuletAvoid__Fi_0x1705e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170BF8u; }
        if (ctx->pc != 0x170BF8u) { return; }
    }
    ctx->pc = 0x170BF8u;
label_170bf8:
    // 0x170bf8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_170bfc:
    if (ctx->pc == 0x170BFCu) {
        ctx->pc = 0x170BFCu;
            // 0x170bfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170C00u;
        goto label_170c00;
    }
    ctx->pc = 0x170BF8u;
    {
        const bool branch_taken_0x170bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170BF8u;
            // 0x170bfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170bf8) {
            ctx->pc = 0x170C1Cu;
            goto label_170c1c;
        }
    }
    ctx->pc = 0x170C00u;
label_170c00:
    // 0x170c00: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x170c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_170c04:
    // 0x170c04: 0xc068108  jal         func_1A0420
label_170c08:
    if (ctx->pc == 0x170C08u) {
        ctx->pc = 0x170C08u;
            // 0x170c08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170C0Cu;
        goto label_170c0c;
    }
    ctx->pc = 0x170C04u;
    SET_GPR_U32(ctx, 31, 0x170C0Cu);
    ctx->pc = 0x170C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170C04u;
            // 0x170c08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0420u;
    if (runtime->hasFunction(0x1A0420u)) {
        auto targetFn = runtime->lookupFunction(0x1A0420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C0Cu; }
        if (ctx->pc != 0x170C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttr__16CBattleCharaInfoFii_0x1a0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C0Cu; }
        if (ctx->pc != 0x170C0Cu) { return; }
    }
    ctx->pc = 0x170C0Cu;
label_170c0c:
    // 0x170c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170c10:
    // 0x170c10: 0x24050055  addiu       $a1, $zero, 0x55
    ctx->pc = 0x170c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_170c14:
    // 0x170c14: 0xc063818  jal         func_18E060
label_170c18:
    if (ctx->pc == 0x170C18u) {
        ctx->pc = 0x170C18u;
            // 0x170c18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170C1Cu;
        goto label_170c1c;
    }
    ctx->pc = 0x170C14u;
    SET_GPR_U32(ctx, 31, 0x170C1Cu);
    ctx->pc = 0x170C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170C14u;
            // 0x170c18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C1Cu; }
        if (ctx->pc != 0x170C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C1Cu; }
        if (ctx->pc != 0x170C1Cu) { return; }
    }
    ctx->pc = 0x170C1Cu;
label_170c1c:
    // 0x170c1c: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x170c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_170c20:
    // 0x170c20: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x170c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_170c24:
    // 0x170c24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x170c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_170c28:
    // 0x170c28: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_170c2c:
    if (ctx->pc == 0x170C2Cu) {
        ctx->pc = 0x170C2Cu;
            // 0x170c2c: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x170C30u;
        goto label_170c30;
    }
    ctx->pc = 0x170C28u;
    {
        const bool branch_taken_0x170c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170C28u;
            // 0x170c2c: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c28) {
            ctx->pc = 0x170C60u;
            goto label_170c60;
        }
    }
    ctx->pc = 0x170C30u;
label_170c30:
    // 0x170c30: 0xc0724a4  jal         func_1C9290
label_170c34:
    if (ctx->pc == 0x170C34u) {
        ctx->pc = 0x170C38u;
        goto label_170c38;
    }
    ctx->pc = 0x170C30u;
    SET_GPR_U32(ctx, 31, 0x170C38u);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C38u; }
        if (ctx->pc != 0x170C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C38u; }
        if (ctx->pc != 0x170C38u) { return; }
    }
    ctx->pc = 0x170C38u;
label_170c38:
    // 0x170c38: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x170c38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
label_170c3c:
    // 0x170c3c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_170c40:
    if (ctx->pc == 0x170C40u) {
        ctx->pc = 0x170C40u;
            // 0x170c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170C44u;
        goto label_170c44;
    }
    ctx->pc = 0x170C3Cu;
    {
        const bool branch_taken_0x170c3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170C3Cu;
            // 0x170c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c3c) {
            ctx->pc = 0x170C60u;
            goto label_170c60;
        }
    }
    ctx->pc = 0x170C44u;
label_170c44:
    // 0x170c44: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x170c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_170c48:
    // 0x170c48: 0xc068108  jal         func_1A0420
label_170c4c:
    if (ctx->pc == 0x170C4Cu) {
        ctx->pc = 0x170C4Cu;
            // 0x170c4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170C50u;
        goto label_170c50;
    }
    ctx->pc = 0x170C48u;
    SET_GPR_U32(ctx, 31, 0x170C50u);
    ctx->pc = 0x170C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170C48u;
            // 0x170c4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0420u;
    if (runtime->hasFunction(0x1A0420u)) {
        auto targetFn = runtime->lookupFunction(0x1A0420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C50u; }
        if (ctx->pc != 0x170C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttr__16CBattleCharaInfoFii_0x1a0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C50u; }
        if (ctx->pc != 0x170C50u) { return; }
    }
    ctx->pc = 0x170C50u;
label_170c50:
    // 0x170c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170c54:
    // 0x170c54: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x170c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_170c58:
    // 0x170c58: 0xc063818  jal         func_18E060
label_170c5c:
    if (ctx->pc == 0x170C5Cu) {
        ctx->pc = 0x170C5Cu;
            // 0x170c5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170C60u;
        goto label_170c60;
    }
    ctx->pc = 0x170C58u;
    SET_GPR_U32(ctx, 31, 0x170C60u);
    ctx->pc = 0x170C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170C58u;
            // 0x170c5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C60u; }
        if (ctx->pc != 0x170C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C60u; }
        if (ctx->pc != 0x170C60u) { return; }
    }
    ctx->pc = 0x170C60u;
label_170c60:
    // 0x170c60: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x170c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_170c64:
    // 0x170c64: 0x84430026  lh          $v1, 0x26($v0)
    ctx->pc = 0x170c64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
label_170c68:
    // 0x170c68: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x170c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_170c6c:
    // 0x170c6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_170c70:
    if (ctx->pc == 0x170C70u) {
        ctx->pc = 0x170C70u;
            // 0x170c70: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x170C74u;
        goto label_170c74;
    }
    ctx->pc = 0x170C6Cu;
    {
        const bool branch_taken_0x170c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170C6Cu;
            // 0x170c70: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c6c) {
            ctx->pc = 0x170C78u;
            goto label_170c78;
        }
    }
    ctx->pc = 0x170C74u;
label_170c74:
    // 0x170c74: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x170c74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_170c78:
    // 0x170c78: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x170c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_170c7c:
    // 0x170c7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_170c80:
    if (ctx->pc == 0x170C80u) {
        ctx->pc = 0x170C84u;
        goto label_170c84;
    }
    ctx->pc = 0x170C7Cu;
    {
        const bool branch_taken_0x170c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170c7c) {
            ctx->pc = 0x170C88u;
            goto label_170c88;
        }
    }
    ctx->pc = 0x170C84u;
label_170c84:
    // 0x170c84: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x170c84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170c88:
    // 0x170c88: 0x12c00002  beqz        $s6, . + 4 + (0x2 << 2)
label_170c8c:
    if (ctx->pc == 0x170C8Cu) {
        ctx->pc = 0x170C90u;
        goto label_170c90;
    }
    ctx->pc = 0x170C88u;
    {
        const bool branch_taken_0x170c88 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x170c88) {
            ctx->pc = 0x170C94u;
            goto label_170c94;
        }
    }
    ctx->pc = 0x170C90u;
label_170c90:
    // 0x170c90: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x170c90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170c94:
    // 0x170c94: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
label_170c98:
    if (ctx->pc == 0x170C98u) {
        ctx->pc = 0x170C98u;
            // 0x170c98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170C9Cu;
        goto label_170c9c;
    }
    ctx->pc = 0x170C94u;
    {
        const bool branch_taken_0x170c94 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x170C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170C94u;
            // 0x170c98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c94) {
            ctx->pc = 0x170CA0u;
            goto label_170ca0;
        }
    }
    ctx->pc = 0x170C9Cu;
label_170c9c:
    // 0x170c9c: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x170c9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_170ca0:
    // 0x170ca0: 0xc0680f8  jal         func_1A03E0
label_170ca4:
    if (ctx->pc == 0x170CA4u) {
        ctx->pc = 0x170CA8u;
        goto label_170ca8;
    }
    ctx->pc = 0x170CA0u;
    SET_GPR_U32(ctx, 31, 0x170CA8u);
    ctx->pc = 0x1A03E0u;
    if (runtime->hasFunction(0x1A03E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CA8u; }
        if (ctx->pc != 0x170CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHp_i__16CBattleCharaInfoFv_0x1a03e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CA8u; }
        if (ctx->pc != 0x170CA8u) { return; }
    }
    ctx->pc = 0x170CA8u;
label_170ca8:
    // 0x170ca8: 0x1c400028  bgtz        $v0, . + 4 + (0x28 << 2)
label_170cac:
    if (ctx->pc == 0x170CACu) {
        ctx->pc = 0x170CACu;
            // 0x170cac: 0x26240f40  addiu       $a0, $s1, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3904));
        ctx->pc = 0x170CB0u;
        goto label_170cb0;
    }
    ctx->pc = 0x170CA8u;
    {
        const bool branch_taken_0x170ca8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x170CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170CA8u;
            // 0x170cac: 0x26240f40  addiu       $a0, $s1, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ca8) {
            ctx->pc = 0x170D4Cu;
            goto label_170d4c;
        }
    }
    ctx->pc = 0x170CB0u;
label_170cb0:
    // 0x170cb0: 0xc05c1a8  jal         func_1706A0
label_170cb4:
    if (ctx->pc == 0x170CB4u) {
        ctx->pc = 0x170CB4u;
            // 0x170cb4: 0x24040111  addiu       $a0, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->pc = 0x170CB8u;
        goto label_170cb8;
    }
    ctx->pc = 0x170CB0u;
    SET_GPR_U32(ctx, 31, 0x170CB8u);
    ctx->pc = 0x170CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170CB0u;
            // 0x170cb4: 0x24040111  addiu       $a0, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1706A0u;
    if (runtime->hasFunction(0x1706A0u)) {
        auto targetFn = runtime->lookupFunction(0x1706A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CB8u; }
        if (ctx->pc != 0x170CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEquipSetItem__Fi_0x1706a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CB8u; }
        if (ctx->pc != 0x170CB8u) { return; }
    }
    ctx->pc = 0x170CB8u;
label_170cb8:
    // 0x170cb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_170cbc:
    if (ctx->pc == 0x170CBCu) {
        ctx->pc = 0x170CBCu;
            // 0x170cbc: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->pc = 0x170CC0u;
        goto label_170cc0;
    }
    ctx->pc = 0x170CB8u;
    {
        const bool branch_taken_0x170cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170CB8u;
            // 0x170cbc: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170cb8) {
            ctx->pc = 0x170CC8u;
            goto label_170cc8;
        }
    }
    ctx->pc = 0x170CC0u;
label_170cc0:
    // 0x170cc0: 0x10000021  b           . + 4 + (0x21 << 2)
label_170cc4:
    if (ctx->pc == 0x170CC4u) {
        ctx->pc = 0x170CC4u;
            // 0x170cc4: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x170CC8u;
        goto label_170cc8;
    }
    ctx->pc = 0x170CC0u;
    {
        const bool branch_taken_0x170cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170CC0u;
            // 0x170cc4: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170cc0) {
            ctx->pc = 0x170D48u;
            goto label_170d48;
        }
    }
    ctx->pc = 0x170CC8u;
label_170cc8:
    // 0x170cc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x170cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_170ccc:
    // 0x170ccc: 0xc0680dc  jal         func_1A0370
label_170cd0:
    if (ctx->pc == 0x170CD0u) {
        ctx->pc = 0x170CD0u;
            // 0x170cd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170CD4u;
        goto label_170cd4;
    }
    ctx->pc = 0x170CCCu;
    SET_GPR_U32(ctx, 31, 0x170CD4u);
    ctx->pc = 0x170CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170CCCu;
            // 0x170cd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0370u;
    if (runtime->hasFunction(0x1A0370u)) {
        auto targetFn = runtime->lookupFunction(0x1A0370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CD4u; }
        if (ctx->pc != 0x170CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHpRate__16CBattleCharaInfoFf_0x1a0370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CD4u; }
        if (ctx->pc != 0x170CD4u) { return; }
    }
    ctx->pc = 0x170CD4u;
label_170cd4:
    // 0x170cd4: 0x26240734  addiu       $a0, $s1, 0x734
    ctx->pc = 0x170cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1844));
label_170cd8:
    // 0x170cd8: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x170cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_170cdc:
    // 0x170cdc: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x170cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_170ce0:
    // 0x170ce0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x170ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_170ce4:
    // 0x170ce4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x170ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170ce8:
    // 0x170ce8: 0x2409002d  addiu       $t1, $zero, 0x2D
    ctx->pc = 0x170ce8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_170cec:
    // 0x170cec: 0xc070488  jal         func_1C1220
label_170cf0:
    if (ctx->pc == 0x170CF0u) {
        ctx->pc = 0x170CF0u;
            // 0x170cf0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170CF4u;
        goto label_170cf4;
    }
    ctx->pc = 0x170CECu;
    SET_GPR_U32(ctx, 31, 0x170CF4u);
    ctx->pc = 0x170CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170CECu;
            // 0x170cf0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CF4u; }
        if (ctx->pc != 0x170CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CF4u; }
        if (ctx->pc != 0x170CF4u) { return; }
    }
    ctx->pc = 0x170CF4u;
label_170cf4:
    // 0x170cf4: 0x8e2407dc  lw          $a0, 0x7DC($s1)
    ctx->pc = 0x170cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2012)));
label_170cf8:
    // 0x170cf8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x170cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_170cfc:
    // 0x170cfc: 0x24a53540  addiu       $a1, $a1, 0x3540
    ctx->pc = 0x170cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13632));
label_170d00:
    // 0x170d00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170d04:
    // 0x170d04: 0xc0b8498  jal         func_2E1260
label_170d08:
    if (ctx->pc == 0x170D08u) {
        ctx->pc = 0x170D08u;
            // 0x170d08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170D0Cu;
        goto label_170d0c;
    }
    ctx->pc = 0x170D04u;
    SET_GPR_U32(ctx, 31, 0x170D0Cu);
    ctx->pc = 0x170D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170D04u;
            // 0x170d08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D0Cu; }
        if (ctx->pc != 0x170D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D0Cu; }
        if (ctx->pc != 0x170D0Cu) { return; }
    }
    ctx->pc = 0x170D0Cu;
label_170d0c:
    // 0x170d0c: 0x8e2407dc  lw          $a0, 0x7DC($s1)
    ctx->pc = 0x170d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2012)));
label_170d10:
    // 0x170d10: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x170d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_170d14:
    // 0x170d14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170d18:
    // 0x170d18: 0xc0b891c  jal         func_2E2470
label_170d1c:
    if (ctx->pc == 0x170D1Cu) {
        ctx->pc = 0x170D1Cu;
            // 0x170d1c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170D20u;
        goto label_170d20;
    }
    ctx->pc = 0x170D18u;
    SET_GPR_U32(ctx, 31, 0x170D20u);
    ctx->pc = 0x170D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170D18u;
            // 0x170d1c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2470u;
    if (runtime->hasFunction(0x2E2470u)) {
        auto targetFn = runtime->lookupFunction(0x2E2470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D20u; }
        if (ctx->pc != 0x170D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptTargetId__16CEffectScriptManFiii_0x2e2470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D20u; }
        if (ctx->pc != 0x170D20u) { return; }
    }
    ctx->pc = 0x170D20u;
label_170d20:
    // 0x170d20: 0x8e2407dc  lw          $a0, 0x7DC($s1)
    ctx->pc = 0x170d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2012)));
label_170d24:
    // 0x170d24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170d28:
    // 0x170d28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170d2c:
    // 0x170d2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x170d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170d30:
    // 0x170d30: 0xc0b89c4  jal         func_2E2710
label_170d34:
    if (ctx->pc == 0x170D34u) {
        ctx->pc = 0x170D34u;
            // 0x170d34: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x170D38u;
        goto label_170d38;
    }
    ctx->pc = 0x170D30u;
    SET_GPR_U32(ctx, 31, 0x170D38u);
    ctx->pc = 0x170D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170D30u;
            // 0x170d34: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2710u;
    if (runtime->hasFunction(0x2E2710u)) {
        auto targetFn = runtime->lookupFunction(0x2E2710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D38u; }
        if (ctx->pc != 0x170D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFiiii_0x2e2710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D38u; }
        if (ctx->pc != 0x170D38u) { return; }
    }
    ctx->pc = 0x170D38u;
label_170d38:
    // 0x170d38: 0x8f848ac4  lw          $a0, -0x753C($gp)
    ctx->pc = 0x170d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937284)));
label_170d3c:
    // 0x170d3c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x170d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_170d40:
    // 0x170d40: 0xc063818  jal         func_18E060
label_170d44:
    if (ctx->pc == 0x170D44u) {
        ctx->pc = 0x170D44u;
            // 0x170d44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170D48u;
        goto label_170d48;
    }
    ctx->pc = 0x170D40u;
    SET_GPR_U32(ctx, 31, 0x170D48u);
    ctx->pc = 0x170D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170D40u;
            // 0x170d44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D48u; }
        if (ctx->pc != 0x170D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D48u; }
        if (ctx->pc != 0x170D48u) { return; }
    }
    ctx->pc = 0x170D48u;
label_170d48:
    // 0x170d48: 0x26240f40  addiu       $a0, $s1, 0xF40
    ctx->pc = 0x170d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3904));
label_170d4c:
    // 0x170d4c: 0xc041c5c  jal         func_107170
label_170d50:
    if (ctx->pc == 0x170D50u) {
        ctx->pc = 0x170D50u;
            // 0x170d50: 0x266500f0  addiu       $a1, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->pc = 0x170D54u;
        goto label_170d54;
    }
    ctx->pc = 0x170D4Cu;
    SET_GPR_U32(ctx, 31, 0x170D54u);
    ctx->pc = 0x170D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170D4Cu;
            // 0x170d50: 0x266500f0  addiu       $a1, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D54u; }
        if (ctx->pc != 0x170D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D54u; }
        if (ctx->pc != 0x170D54u) { return; }
    }
    ctx->pc = 0x170D54u;
label_170d54:
    // 0x170d54: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x170d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_170d58:
    // 0x170d58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x170d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_170d5c:
    // 0x170d5c: 0xae220f54  sw          $v0, 0xF54($s1)
    ctx->pc = 0x170d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3924), GPR_U32(ctx, 2));
label_170d60:
    // 0x170d60: 0xae230f50  sw          $v1, 0xF50($s1)
    ctx->pc = 0x170d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3920), GPR_U32(ctx, 3));
label_170d64:
    // 0x170d64: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x170d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_170d68:
    // 0x170d68: 0xae200f58  sw          $zero, 0xF58($s1)
    ctx->pc = 0x170d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3928), GPR_U32(ctx, 0));
label_170d6c:
    // 0x170d6c: 0x12c00059  beqz        $s6, . + 4 + (0x59 << 2)
label_170d70:
    if (ctx->pc == 0x170D70u) {
        ctx->pc = 0x170D70u;
            // 0x170d70: 0xae220f5c  sw          $v0, 0xF5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3932), GPR_U32(ctx, 2));
        ctx->pc = 0x170D74u;
        goto label_170d74;
    }
    ctx->pc = 0x170D6Cu;
    {
        const bool branch_taken_0x170d6c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x170D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170D6Cu;
            // 0x170d70: 0xae220f5c  sw          $v0, 0xF5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170d6c) {
            ctx->pc = 0x170ED4u;
            goto label_170ed4;
        }
    }
    ctx->pc = 0x170D74u;
label_170d74:
    // 0x170d74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170d78:
    // 0x170d78: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x170d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_170d7c:
    // 0x170d7c: 0xc063818  jal         func_18E060
label_170d80:
    if (ctx->pc == 0x170D80u) {
        ctx->pc = 0x170D80u;
            // 0x170d80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170D84u;
        goto label_170d84;
    }
    ctx->pc = 0x170D7Cu;
    SET_GPR_U32(ctx, 31, 0x170D84u);
    ctx->pc = 0x170D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170D7Cu;
            // 0x170d80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D84u; }
        if (ctx->pc != 0x170D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D84u; }
        if (ctx->pc != 0x170D84u) { return; }
    }
    ctx->pc = 0x170D84u;
label_170d84:
    // 0x170d84: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
label_170d88:
    if (ctx->pc == 0x170D88u) {
        ctx->pc = 0x170D8Cu;
        goto label_170d8c;
    }
    ctx->pc = 0x170D84u;
    {
        const bool branch_taken_0x170d84 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x170d84) {
            ctx->pc = 0x170D9Cu;
            goto label_170d9c;
        }
    }
    ctx->pc = 0x170D8Cu;
label_170d8c:
    // 0x170d8c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x170d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170d90:
    // 0x170d90: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x170d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_170d94:
    // 0x170d94: 0xc063818  jal         func_18E060
label_170d98:
    if (ctx->pc == 0x170D98u) {
        ctx->pc = 0x170D98u;
            // 0x170d98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170D9Cu;
        goto label_170d9c;
    }
    ctx->pc = 0x170D94u;
    SET_GPR_U32(ctx, 31, 0x170D9Cu);
    ctx->pc = 0x170D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170D94u;
            // 0x170d98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D9Cu; }
        if (ctx->pc != 0x170D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D9Cu; }
        if (ctx->pc != 0x170D9Cu) { return; }
    }
    ctx->pc = 0x170D9Cu;
label_170d9c:
    // 0x170d9c: 0x8f849da4  lw          $a0, -0x625C($gp)
    ctx->pc = 0x170d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
label_170da0:
    // 0x170da0: 0xc05c040  jal         func_170100
label_170da4:
    if (ctx->pc == 0x170DA4u) {
        ctx->pc = 0x170DA4u;
            // 0x170da4: 0x26650100  addiu       $a1, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->pc = 0x170DA8u;
        goto label_170da8;
    }
    ctx->pc = 0x170DA0u;
    SET_GPR_U32(ctx, 31, 0x170DA8u);
    ctx->pc = 0x170DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170DA0u;
            // 0x170da4: 0x26650100  addiu       $a1, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170100u;
    if (runtime->hasFunction(0x170100u)) {
        auto targetFn = runtime->lookupFunction(0x170100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170DA8u; }
        if (ctx->pc != 0x170DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GuardEffectSet__FP6CScenePf_0x170100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170DA8u; }
        if (ctx->pc != 0x170DA8u) { return; }
    }
    ctx->pc = 0x170DA8u;
label_170da8:
    // 0x170da8: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x170da8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_170dac:
    // 0x170dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170db0:
    // 0x170db0: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_170db4:
    if (ctx->pc == 0x170DB4u) {
        ctx->pc = 0x170DB8u;
        goto label_170db8;
    }
    ctx->pc = 0x170DB0u;
    {
        const bool branch_taken_0x170db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x170db0) {
            ctx->pc = 0x170E24u;
            goto label_170e24;
        }
    }
    ctx->pc = 0x170DB8u;
label_170db8:
    // 0x170db8: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x170db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_170dbc:
    // 0x170dbc: 0x84420024  lh          $v0, 0x24($v0)
    ctx->pc = 0x170dbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
label_170dc0:
    // 0x170dc0: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x170dc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
label_170dc4:
    // 0x170dc4: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
label_170dc8:
    if (ctx->pc == 0x170DC8u) {
        ctx->pc = 0x170DC8u;
            // 0x170dc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x170DCCu;
        goto label_170dcc;
    }
    ctx->pc = 0x170DC4u;
    {
        const bool branch_taken_0x170dc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x170DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170DC4u;
            // 0x170dc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170dc4) {
            ctx->pc = 0x170E24u;
            goto label_170e24;
        }
    }
    ctx->pc = 0x170DCCu;
label_170dcc:
    // 0x170dcc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x170dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170dd0:
    // 0x170dd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170dd4:
    // 0x170dd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x170dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170dd8:
    // 0x170dd8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x170dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_170ddc:
    // 0x170ddc: 0x0  nop
    ctx->pc = 0x170ddcu;
    // NOP
label_170de0:
    // 0x170de0: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x170de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_170de4:
    // 0x170de4: 0x8442002c  lh          $v0, 0x2C($v0)
    ctx->pc = 0x170de4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_170de8:
    // 0x170de8: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x170de8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_170dec:
    // 0x170dec: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_170df0:
    if (ctx->pc == 0x170DF0u) {
        ctx->pc = 0x170DF4u;
        goto label_170df4;
    }
    ctx->pc = 0x170DECu;
    {
        const bool branch_taken_0x170dec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x170dec) {
            ctx->pc = 0x170DFCu;
            goto label_170dfc;
        }
    }
    ctx->pc = 0x170DF4u;
label_170df4:
    // 0x170df4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170df8:
    // 0x170df8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x170df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_170dfc:
    // 0x170dfc: 0x0  nop
    ctx->pc = 0x170dfcu;
    // NOP
label_170e00:
    // 0x170e00: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x170e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_170e04:
    // 0x170e04: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x170e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_170e08:
    // 0x170e08: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_170e0c:
    if (ctx->pc == 0x170E0Cu) {
        ctx->pc = 0x170E0Cu;
            // 0x170e0c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x170E10u;
        goto label_170e10;
    }
    ctx->pc = 0x170E08u;
    {
        const bool branch_taken_0x170e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170E08u;
            // 0x170e0c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e08) {
            ctx->pc = 0x170DE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_170de0;
        }
    }
    ctx->pc = 0x170E10u;
label_170e10:
    // 0x170e10: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_170e14:
    if (ctx->pc == 0x170E14u) {
        ctx->pc = 0x170E18u;
        goto label_170e18;
    }
    ctx->pc = 0x170E10u;
    {
        const bool branch_taken_0x170e10 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x170e10) {
            ctx->pc = 0x170E24u;
            goto label_170e24;
        }
    }
    ctx->pc = 0x170E18u;
label_170e18:
    // 0x170e18: 0x8e660088  lw          $a2, 0x88($s3)
    ctx->pc = 0x170e18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_170e1c:
    // 0x170e1c: 0xc067ea8  jal         func_19FAA0
label_170e20:
    if (ctx->pc == 0x170E20u) {
        ctx->pc = 0x170E20u;
            // 0x170e20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170E24u;
        goto label_170e24;
    }
    ctx->pc = 0x170E1Cu;
    SET_GPR_U32(ctx, 31, 0x170E24u);
    ctx->pc = 0x170E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170E1Cu;
            // 0x170e20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAA0u;
    if (runtime->hasFunction(0x19FAA0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E24u; }
        if (ctx->pc != 0x170E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMagicSwordPow__16CBattleCharaInfoFii_0x19faa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E24u; }
        if (ctx->pc != 0x170E24u) { return; }
    }
    ctx->pc = 0x170E24u;
label_170e24:
    // 0x170e24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170e24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170e28:
    // 0x170e28: 0x0  nop
    ctx->pc = 0x170e28u;
    // NOP
label_170e2c:
    // 0x170e2c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x170e2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_170e30:
    // 0x170e30: 0x0  nop
    ctx->pc = 0x170e30u;
    // NOP
label_170e34:
    // 0x170e34: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_170e38:
    if (ctx->pc == 0x170E38u) {
        ctx->pc = 0x170E38u;
            // 0x170e38: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x170E3Cu;
        goto label_170e3c;
    }
    ctx->pc = 0x170E34u;
    {
        const bool branch_taken_0x170e34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x170E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170E34u;
            // 0x170e38: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e34) {
            ctx->pc = 0x170EB8u;
            goto label_170eb8;
        }
    }
    ctx->pc = 0x170E3Cu;
label_170e3c:
    // 0x170e3c: 0x8f849da4  lw          $a0, -0x625C($gp)
    ctx->pc = 0x170e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
label_170e40:
    // 0x170e40: 0xc05c0c4  jal         func_170310
label_170e44:
    if (ctx->pc == 0x170E44u) {
        ctx->pc = 0x170E44u;
            // 0x170e44: 0x26650100  addiu       $a1, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->pc = 0x170E48u;
        goto label_170e48;
    }
    ctx->pc = 0x170E40u;
    SET_GPR_U32(ctx, 31, 0x170E48u);
    ctx->pc = 0x170E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170E40u;
            // 0x170e44: 0x26650100  addiu       $a1, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170310u;
    if (runtime->hasFunction(0x170310u)) {
        auto targetFn = runtime->lookupFunction(0x170310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E48u; }
        if (ctx->pc != 0x170E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HitEffectSet__FP6CScenePf_0x170310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E48u; }
        if (ctx->pc != 0x170E48u) { return; }
    }
    ctx->pc = 0x170E48u;
label_170e48:
    // 0x170e48: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x170e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_170e4c:
    // 0x170e4c: 0x26240734  addiu       $a0, $s1, 0x734
    ctx->pc = 0x170e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1844));
label_170e50:
    // 0x170e50: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x170e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_170e54:
    // 0x170e54: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x170e54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170e58:
    // 0x170e58: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x170e58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_170e5c:
    // 0x170e5c: 0x2409002d  addiu       $t1, $zero, 0x2D
    ctx->pc = 0x170e5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_170e60:
    // 0x170e60: 0xc070488  jal         func_1C1220
label_170e64:
    if (ctx->pc == 0x170E64u) {
        ctx->pc = 0x170E64u;
            // 0x170e64: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170E68u;
        goto label_170e68;
    }
    ctx->pc = 0x170E60u;
    SET_GPR_U32(ctx, 31, 0x170E68u);
    ctx->pc = 0x170E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170E60u;
            // 0x170e64: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E68u; }
        if (ctx->pc != 0x170E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E68u; }
        if (ctx->pc != 0x170E68u) { return; }
    }
    ctx->pc = 0x170E68u;
label_170e68:
    // 0x170e68: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x170e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_170e6c:
    // 0x170e6c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x170e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_170e70:
    // 0x170e70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x170e70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_170e74:
    // 0x170e74: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x170e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_170e78:
    // 0x170e78: 0xa6220bf8  sh          $v0, 0xBF8($s1)
    ctx->pc = 0x170e78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3064), (uint16_t)GPR_U32(ctx, 2));
label_170e7c:
    // 0x170e7c: 0x2484ff60  addiu       $a0, $a0, -0xA0
    ctx->pc = 0x170e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967136));
label_170e80:
    // 0x170e80: 0xc072bf0  jal         func_1CAFC0
label_170e84:
    if (ctx->pc == 0x170E84u) {
        ctx->pc = 0x170E84u;
            // 0x170e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170E88u;
        goto label_170e88;
    }
    ctx->pc = 0x170E80u;
    SET_GPR_U32(ctx, 31, 0x170E88u);
    ctx->pc = 0x170E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170E80u;
            // 0x170e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAFC0u;
    if (runtime->hasFunction(0x1CAFC0u)) {
        auto targetFn = runtime->lookupFunction(0x1CAFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E88u; }
        if (ctx->pc != 0x170E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__13CDamageScore2Fiif_0x1cafc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E88u; }
        if (ctx->pc != 0x170E88u) { return; }
    }
    ctx->pc = 0x170E88u;
label_170e88:
    // 0x170e88: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x170e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_170e8c:
    // 0x170e8c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x170e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_170e90:
    // 0x170e90: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x170e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_170e94:
    // 0x170e94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170e98:
    // 0x170e98: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x170e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_170e9c:
    // 0x170e9c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x170e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_170ea0:
    // 0x170ea0: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x170ea0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
label_170ea4:
    // 0x170ea4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x170ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_170ea8:
    // 0x170ea8: 0xc052d4c  jal         func_14B530
label_170eac:
    if (ctx->pc == 0x170EACu) {
        ctx->pc = 0x170EACu;
            // 0x170eac: 0xae220be8  sw          $v0, 0xBE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3048), GPR_U32(ctx, 2));
        ctx->pc = 0x170EB0u;
        goto label_170eb0;
    }
    ctx->pc = 0x170EA8u;
    SET_GPR_U32(ctx, 31, 0x170EB0u);
    ctx->pc = 0x170EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170EA8u;
            // 0x170eac: 0xae220be8  sw          $v0, 0xBE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B530u;
    if (runtime->hasFunction(0x14B530u)) {
        auto targetFn = runtime->lookupFunction(0x14B530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170EB0u; }
        if (ctx->pc != 0x170EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibration__8CGamePadFiii_0x14b530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170EB0u; }
        if (ctx->pc != 0x170EB0u) { return; }
    }
    ctx->pc = 0x170EB0u;
label_170eb0:
    // 0x170eb0: 0x1000004b  b           . + 4 + (0x4B << 2)
label_170eb4:
    if (ctx->pc == 0x170EB4u) {
        ctx->pc = 0x170EB4u;
            // 0x170eb4: 0x2e810007  sltiu       $at, $s4, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->pc = 0x170EB8u;
        goto label_170eb8;
    }
    ctx->pc = 0x170EB0u;
    {
        const bool branch_taken_0x170eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170EB0u;
            // 0x170eb4: 0x2e810007  sltiu       $at, $s4, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170eb0) {
            ctx->pc = 0x170FE0u;
            goto label_170fe0;
        }
    }
    ctx->pc = 0x170EB8u;
label_170eb8:
    // 0x170eb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170ebc:
    // 0x170ebc: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x170ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_170ec0:
    // 0x170ec0: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x170ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_170ec4:
    // 0x170ec4: 0xc052d4c  jal         func_14B530
label_170ec8:
    if (ctx->pc == 0x170EC8u) {
        ctx->pc = 0x170EC8u;
            // 0x170ec8: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x170ECCu;
        goto label_170ecc;
    }
    ctx->pc = 0x170EC4u;
    SET_GPR_U32(ctx, 31, 0x170ECCu);
    ctx->pc = 0x170EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170EC4u;
            // 0x170ec8: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B530u;
    if (runtime->hasFunction(0x14B530u)) {
        auto targetFn = runtime->lookupFunction(0x14B530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170ECCu; }
        if (ctx->pc != 0x170ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibration__8CGamePadFiii_0x14b530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170ECCu; }
        if (ctx->pc != 0x170ECCu) { return; }
    }
    ctx->pc = 0x170ECCu;
label_170ecc:
    // 0x170ecc: 0x10000043  b           . + 4 + (0x43 << 2)
label_170ed0:
    if (ctx->pc == 0x170ED0u) {
        ctx->pc = 0x170ED4u;
        goto label_170ed4;
    }
    ctx->pc = 0x170ECCu;
    {
        const bool branch_taken_0x170ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170ecc) {
            ctx->pc = 0x170FDCu;
            goto label_170fdc;
        }
    }
    ctx->pc = 0x170ED4u;
label_170ed4:
    // 0x170ed4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x170ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_170ed8:
    // 0x170ed8: 0x16820018  bne         $s4, $v0, . + 4 + (0x18 << 2)
label_170edc:
    if (ctx->pc == 0x170EDCu) {
        ctx->pc = 0x170EE0u;
        goto label_170ee0;
    }
    ctx->pc = 0x170ED8u;
    {
        const bool branch_taken_0x170ed8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x170ed8) {
            ctx->pc = 0x170F3Cu;
            goto label_170f3c;
        }
    }
    ctx->pc = 0x170EE0u;
label_170ee0:
    // 0x170ee0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x170ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_170ee4:
    // 0x170ee4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x170ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_170ee8:
    // 0x170ee8: 0x26240734  addiu       $a0, $s1, 0x734
    ctx->pc = 0x170ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1844));
label_170eec:
    // 0x170eec: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x170eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_170ef0:
    // 0x170ef0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x170ef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_170ef4:
    // 0x170ef4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x170ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170ef8:
    // 0x170ef8: 0x2409005a  addiu       $t1, $zero, 0x5A
    ctx->pc = 0x170ef8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_170efc:
    // 0x170efc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x170efcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170f00:
    // 0x170f00: 0x84430044  lh          $v1, 0x44($v0)
    ctx->pc = 0x170f00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
label_170f04:
    // 0x170f04: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x170f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_170f08:
    // 0x170f08: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x170f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_170f0c:
    // 0x170f0c: 0xc070488  jal         func_1C1220
label_170f10:
    if (ctx->pc == 0x170F10u) {
        ctx->pc = 0x170F10u;
            // 0x170f10: 0xae220be8  sw          $v0, 0xBE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3048), GPR_U32(ctx, 2));
        ctx->pc = 0x170F14u;
        goto label_170f14;
    }
    ctx->pc = 0x170F0Cu;
    SET_GPR_U32(ctx, 31, 0x170F14u);
    ctx->pc = 0x170F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170F0Cu;
            // 0x170f10: 0xae220be8  sw          $v0, 0xBE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F14u; }
        if (ctx->pc != 0x170F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F14u; }
        if (ctx->pc != 0x170F14u) { return; }
    }
    ctx->pc = 0x170F14u;
label_170f14:
    // 0x170f14: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x170f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_170f18:
    // 0x170f18: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x170f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_170f1c:
    // 0x170f1c: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x170f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_170f20:
    // 0x170f20: 0xa6220bf8  sh          $v0, 0xBF8($s1)
    ctx->pc = 0x170f20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3064), (uint16_t)GPR_U32(ctx, 2));
label_170f24:
    // 0x170f24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x170f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170f28:
    // 0x170f28: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x170f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_170f2c:
    // 0x170f2c: 0xc052d4c  jal         func_14B530
label_170f30:
    if (ctx->pc == 0x170F30u) {
        ctx->pc = 0x170F30u;
            // 0x170f30: 0x2407001e  addiu       $a3, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x170F34u;
        goto label_170f34;
    }
    ctx->pc = 0x170F2Cu;
    SET_GPR_U32(ctx, 31, 0x170F34u);
    ctx->pc = 0x170F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170F2Cu;
            // 0x170f30: 0x2407001e  addiu       $a3, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B530u;
    if (runtime->hasFunction(0x14B530u)) {
        auto targetFn = runtime->lookupFunction(0x14B530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F34u; }
        if (ctx->pc != 0x170F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibration__8CGamePadFiii_0x14b530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F34u; }
        if (ctx->pc != 0x170F34u) { return; }
    }
    ctx->pc = 0x170F34u;
label_170f34:
    // 0x170f34: 0x10000016  b           . + 4 + (0x16 << 2)
label_170f38:
    if (ctx->pc == 0x170F38u) {
        ctx->pc = 0x170F3Cu;
        goto label_170f3c;
    }
    ctx->pc = 0x170F34u;
    {
        const bool branch_taken_0x170f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170f34) {
            ctx->pc = 0x170F90u;
            goto label_170f90;
        }
    }
    ctx->pc = 0x170F3Cu;
label_170f3c:
    // 0x170f3c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x170f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_170f40:
    // 0x170f40: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x170f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_170f44:
    // 0x170f44: 0x26240734  addiu       $a0, $s1, 0x734
    ctx->pc = 0x170f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1844));
label_170f48:
    // 0x170f48: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x170f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_170f4c:
    // 0x170f4c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x170f4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_170f50:
    // 0x170f50: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x170f50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170f54:
    // 0x170f54: 0x2409001e  addiu       $t1, $zero, 0x1E
    ctx->pc = 0x170f54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_170f58:
    // 0x170f58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x170f58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170f5c:
    // 0x170f5c: 0x84430044  lh          $v1, 0x44($v0)
    ctx->pc = 0x170f5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
label_170f60:
    // 0x170f60: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x170f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_170f64:
    // 0x170f64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_170f68:
    // 0x170f68: 0xc070488  jal         func_1C1220
label_170f6c:
    if (ctx->pc == 0x170F6Cu) {
        ctx->pc = 0x170F6Cu;
            // 0x170f6c: 0xae220be8  sw          $v0, 0xBE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3048), GPR_U32(ctx, 2));
        ctx->pc = 0x170F70u;
        goto label_170f70;
    }
    ctx->pc = 0x170F68u;
    SET_GPR_U32(ctx, 31, 0x170F70u);
    ctx->pc = 0x170F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170F68u;
            // 0x170f6c: 0xae220be8  sw          $v0, 0xBE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F70u; }
        if (ctx->pc != 0x170F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F70u; }
        if (ctx->pc != 0x170F70u) { return; }
    }
    ctx->pc = 0x170F70u;
label_170f70:
    // 0x170f70: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x170f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_170f74:
    // 0x170f74: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x170f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_170f78:
    // 0x170f78: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x170f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_170f7c:
    // 0x170f7c: 0xa6220bf8  sh          $v0, 0xBF8($s1)
    ctx->pc = 0x170f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3064), (uint16_t)GPR_U32(ctx, 2));
label_170f80:
    // 0x170f80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x170f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170f84:
    // 0x170f84: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x170f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_170f88:
    // 0x170f88: 0xc052d4c  jal         func_14B530
label_170f8c:
    if (ctx->pc == 0x170F8Cu) {
        ctx->pc = 0x170F8Cu;
            // 0x170f8c: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x170F90u;
        goto label_170f90;
    }
    ctx->pc = 0x170F88u;
    SET_GPR_U32(ctx, 31, 0x170F90u);
    ctx->pc = 0x170F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170F88u;
            // 0x170f8c: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B530u;
    if (runtime->hasFunction(0x14B530u)) {
        auto targetFn = runtime->lookupFunction(0x14B530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F90u; }
        if (ctx->pc != 0x170F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibration__8CGamePadFiii_0x14b530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F90u; }
        if (ctx->pc != 0x170F90u) { return; }
    }
    ctx->pc = 0x170F90u;
label_170f90:
    // 0x170f90: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
label_170f94:
    if (ctx->pc == 0x170F94u) {
        ctx->pc = 0x170F94u;
            // 0x170f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170F98u;
        goto label_170f98;
    }
    ctx->pc = 0x170F90u;
    {
        const bool branch_taken_0x170f90 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x170F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170F90u;
            // 0x170f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f90) {
            ctx->pc = 0x170FACu;
            goto label_170fac;
        }
    }
    ctx->pc = 0x170F98u;
label_170f98:
    // 0x170f98: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x170f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170f9c:
    // 0x170f9c: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x170f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_170fa0:
    // 0x170fa0: 0xc063818  jal         func_18E060
label_170fa4:
    if (ctx->pc == 0x170FA4u) {
        ctx->pc = 0x170FA4u;
            // 0x170fa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170FA8u;
        goto label_170fa8;
    }
    ctx->pc = 0x170FA0u;
    SET_GPR_U32(ctx, 31, 0x170FA8u);
    ctx->pc = 0x170FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170FA0u;
            // 0x170fa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170FA8u; }
        if (ctx->pc != 0x170FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170FA8u; }
        if (ctx->pc != 0x170FA8u) { return; }
    }
    ctx->pc = 0x170FA8u;
label_170fa8:
    // 0x170fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170fac:
    // 0x170fac: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x170facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_170fb0:
    // 0x170fb0: 0xc063818  jal         func_18E060
label_170fb4:
    if (ctx->pc == 0x170FB4u) {
        ctx->pc = 0x170FB4u;
            // 0x170fb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170FB8u;
        goto label_170fb8;
    }
    ctx->pc = 0x170FB0u;
    SET_GPR_U32(ctx, 31, 0x170FB8u);
    ctx->pc = 0x170FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170FB0u;
            // 0x170fb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170FB8u; }
        if (ctx->pc != 0x170FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170FB8u; }
        if (ctx->pc != 0x170FB8u) { return; }
    }
    ctx->pc = 0x170FB8u;
label_170fb8:
    // 0x170fb8: 0x8f849da4  lw          $a0, -0x625C($gp)
    ctx->pc = 0x170fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
label_170fbc:
    // 0x170fbc: 0xc05c0c4  jal         func_170310
label_170fc0:
    if (ctx->pc == 0x170FC0u) {
        ctx->pc = 0x170FC0u;
            // 0x170fc0: 0x26650100  addiu       $a1, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->pc = 0x170FC4u;
        goto label_170fc4;
    }
    ctx->pc = 0x170FBCu;
    SET_GPR_U32(ctx, 31, 0x170FC4u);
    ctx->pc = 0x170FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170FBCu;
            // 0x170fc0: 0x26650100  addiu       $a1, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170310u;
    if (runtime->hasFunction(0x170310u)) {
        auto targetFn = runtime->lookupFunction(0x170310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170FC4u; }
        if (ctx->pc != 0x170FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HitEffectSet__FP6CScenePf_0x170310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170FC4u; }
        if (ctx->pc != 0x170FC4u) { return; }
    }
    ctx->pc = 0x170FC4u;
label_170fc4:
    // 0x170fc4: 0xc62c0110  lwc1        $f12, 0x110($s1)
    ctx->pc = 0x170fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_170fc8:
    // 0x170fc8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x170fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_170fcc:
    // 0x170fcc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x170fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_170fd0:
    // 0x170fd0: 0x2484ff60  addiu       $a0, $a0, -0xA0
    ctx->pc = 0x170fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967136));
label_170fd4:
    // 0x170fd4: 0xc072bf0  jal         func_1CAFC0
label_170fd8:
    if (ctx->pc == 0x170FD8u) {
        ctx->pc = 0x170FD8u;
            // 0x170fd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x170FDCu;
        goto label_170fdc;
    }
    ctx->pc = 0x170FD4u;
    SET_GPR_U32(ctx, 31, 0x170FDCu);
    ctx->pc = 0x170FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170FD4u;
            // 0x170fd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAFC0u;
    if (runtime->hasFunction(0x1CAFC0u)) {
        auto targetFn = runtime->lookupFunction(0x1CAFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170FDCu; }
        if (ctx->pc != 0x170FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__13CDamageScore2Fiif_0x1cafc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170FDCu; }
        if (ctx->pc != 0x170FDCu) { return; }
    }
    ctx->pc = 0x170FDCu;
label_170fdc:
    // 0x170fdc: 0x2e810007  sltiu       $at, $s4, 0x7
    ctx->pc = 0x170fdcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_170fe0:
    // 0x170fe0: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
label_170fe4:
    if (ctx->pc == 0x170FE4u) {
        ctx->pc = 0x170FE4u;
            // 0x170fe4: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x170FE8u;
        goto label_170fe8;
    }
    ctx->pc = 0x170FE0u;
    {
        const bool branch_taken_0x170fe0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170FE0u;
            // 0x170fe4: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170fe0) {
            ctx->pc = 0x17107Cu;
            goto label_17107c;
        }
    }
    ctx->pc = 0x170FE8u;
label_170fe8:
    // 0x170fe8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x170fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_170fec:
    // 0x170fec: 0x24633740  addiu       $v1, $v1, 0x3740
    ctx->pc = 0x170fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14144));
label_170ff0:
    // 0x170ff0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_170ff4:
    // 0x170ff4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x170ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_170ff8:
    // 0x170ff8: 0x400008  jr          $v0
label_170ffc:
    if (ctx->pc == 0x170FFCu) {
        ctx->pc = 0x171000u;
        goto label_171000;
    }
    ctx->pc = 0x170FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171000u: goto label_171000;
            case 0x171010u: goto label_171010;
            case 0x171068u: goto label_171068;
            case 0x171078u: goto label_171078;
            case 0x17107Cu: goto label_17107c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171000u;
label_171000:
    // 0x171000: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x171000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_171004:
    // 0x171004: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x171004u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171008:
    // 0x171008: 0x1000001c  b           . + 4 + (0x1C << 2)
label_17100c:
    if (ctx->pc == 0x17100Cu) {
        ctx->pc = 0x17100Cu;
            // 0x17100c: 0xae220bdc  sw          $v0, 0xBDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3036), GPR_U32(ctx, 2));
        ctx->pc = 0x171010u;
        goto label_171010;
    }
    ctx->pc = 0x171008u;
    {
        const bool branch_taken_0x171008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17100Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171008u;
            // 0x17100c: 0xae220bdc  sw          $v0, 0xBDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171008) {
            ctx->pc = 0x17107Cu;
            goto label_17107c;
        }
    }
    ctx->pc = 0x171010u;
label_171010:
    // 0x171010: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x171010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_171014:
    // 0x171014: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x171014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_171018:
    // 0x171018: 0x82230bf4  lb          $v1, 0xBF4($s1)
    ctx->pc = 0x171018u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3060)));
label_17101c:
    // 0x17101c: 0x80840022  lb          $a0, 0x22($a0)
    ctx->pc = 0x17101cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
label_171020:
    // 0x171020: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x171020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_171024:
    // 0x171024: 0xa2230bf4  sb          $v1, 0xBF4($s1)
    ctx->pc = 0x171024u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3060), (uint8_t)GPR_U32(ctx, 3));
label_171028:
    // 0x171028: 0xa2220bf5  sb          $v0, 0xBF5($s1)
    ctx->pc = 0x171028u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3061), (uint8_t)GPR_U32(ctx, 2));
label_17102c:
    // 0x17102c: 0x82220bf4  lb          $v0, 0xBF4($s1)
    ctx->pc = 0x17102cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3060)));
label_171030:
    // 0x171030: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x171030u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_171034:
    // 0x171034: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_171038:
    if (ctx->pc == 0x171038u) {
        ctx->pc = 0x171038u;
            // 0x171038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17103Cu;
        goto label_17103c;
    }
    ctx->pc = 0x171034u;
    {
        const bool branch_taken_0x171034 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x171038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171034u;
            // 0x171038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171034) {
            ctx->pc = 0x171058u;
            goto label_171058;
        }
    }
    ctx->pc = 0x17103Cu;
label_17103c:
    // 0x17103c: 0x8222076c  lb          $v0, 0x76C($s1)
    ctx->pc = 0x17103cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1900)));
label_171040:
    // 0x171040: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_171044:
    if (ctx->pc == 0x171044u) {
        ctx->pc = 0x171044u;
            // 0x171044: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x171048u;
        goto label_171048;
    }
    ctx->pc = 0x171040u;
    {
        const bool branch_taken_0x171040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171040u;
            // 0x171044: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171040) {
            ctx->pc = 0x171060u;
            goto label_171060;
        }
    }
    ctx->pc = 0x171048u;
label_171048:
    // 0x171048: 0x8222076d  lb          $v0, 0x76D($s1)
    ctx->pc = 0x171048u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1901)));
label_17104c:
    // 0x17104c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_171050:
    if (ctx->pc == 0x171050u) {
        ctx->pc = 0x171054u;
        goto label_171054;
    }
    ctx->pc = 0x17104Cu;
    {
        const bool branch_taken_0x17104c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17104c) {
            ctx->pc = 0x17105Cu;
            goto label_17105c;
        }
    }
    ctx->pc = 0x171054u;
label_171054:
    // 0x171054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171058:
    // 0x171058: 0xae220bdc  sw          $v0, 0xBDC($s1)
    ctx->pc = 0x171058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3036), GPR_U32(ctx, 2));
label_17105c:
    // 0x17105c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x17105cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171060:
    // 0x171060: 0x10000006  b           . + 4 + (0x6 << 2)
label_171064:
    if (ctx->pc == 0x171064u) {
        ctx->pc = 0x171068u;
        goto label_171068;
    }
    ctx->pc = 0x171060u;
    {
        const bool branch_taken_0x171060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171060) {
            ctx->pc = 0x17107Cu;
            goto label_17107c;
        }
    }
    ctx->pc = 0x171068u;
label_171068:
    // 0x171068: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x171068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17106c:
    // 0x17106c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x17106cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171070:
    // 0x171070: 0x10000002  b           . + 4 + (0x2 << 2)
label_171074:
    if (ctx->pc == 0x171074u) {
        ctx->pc = 0x171074u;
            // 0x171074: 0xae220bdc  sw          $v0, 0xBDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3036), GPR_U32(ctx, 2));
        ctx->pc = 0x171078u;
        goto label_171078;
    }
    ctx->pc = 0x171070u;
    {
        const bool branch_taken_0x171070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171070u;
            // 0x171074: 0xae220bdc  sw          $v0, 0xBDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171070) {
            ctx->pc = 0x17107Cu;
            goto label_17107c;
        }
    }
    ctx->pc = 0x171078u;
label_171078:
    // 0x171078: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x171078u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17107c:
    // 0x17107c: 0x12e00002  beqz        $s7, . + 4 + (0x2 << 2)
label_171080:
    if (ctx->pc == 0x171080u) {
        ctx->pc = 0x171080u;
            // 0x171080: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171084u;
        goto label_171084;
    }
    ctx->pc = 0x17107Cu;
    {
        const bool branch_taken_0x17107c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x171080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17107Cu;
            // 0x171080: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17107c) {
            ctx->pc = 0x171088u;
            goto label_171088;
        }
    }
    ctx->pc = 0x171084u;
label_171084:
    // 0x171084: 0xa220076c  sb          $zero, 0x76C($s1)
    ctx->pc = 0x171084u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1900), (uint8_t)GPR_U32(ctx, 0));
label_171088:
    // 0x171088: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x171088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_17108c:
    // 0x17108c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17108cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_171090:
    // 0x171090: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x171090u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_171094:
    // 0x171094: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x171094u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_171098:
    // 0x171098: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x171098u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17109c:
    // 0x17109c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17109cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1710a0:
    // 0x1710a0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1710a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1710a4:
    // 0x1710a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1710a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1710a8:
    // 0x1710a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1710a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1710ac:
    // 0x1710ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1710acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1710b0:
    // 0x1710b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1710b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1710b4:
    // 0x1710b4: 0x3e00008  jr          $ra
label_1710b8:
    if (ctx->pc == 0x1710B8u) {
        ctx->pc = 0x1710B8u;
            // 0x1710b8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1710BCu;
        goto label_fallthrough_0x1710b4;
    }
    ctx->pc = 0x1710B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1710B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1710B4u;
            // 0x1710b8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1710b4:
    ctx->pc = 0x1710BCu;
}
