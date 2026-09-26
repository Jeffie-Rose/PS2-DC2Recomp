#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgInitBuggy__FP11SubGameInfo
// Address: 0x313770 - 0x314104
void sgInitBuggy__FP11SubGameInfo_0x313770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgInitBuggy__FP11SubGameInfo_0x313770");
#endif

    switch (ctx->pc) {
        case 0x313770u: goto label_313770;
        case 0x313774u: goto label_313774;
        case 0x313778u: goto label_313778;
        case 0x31377cu: goto label_31377c;
        case 0x313780u: goto label_313780;
        case 0x313784u: goto label_313784;
        case 0x313788u: goto label_313788;
        case 0x31378cu: goto label_31378c;
        case 0x313790u: goto label_313790;
        case 0x313794u: goto label_313794;
        case 0x313798u: goto label_313798;
        case 0x31379cu: goto label_31379c;
        case 0x3137a0u: goto label_3137a0;
        case 0x3137a4u: goto label_3137a4;
        case 0x3137a8u: goto label_3137a8;
        case 0x3137acu: goto label_3137ac;
        case 0x3137b0u: goto label_3137b0;
        case 0x3137b4u: goto label_3137b4;
        case 0x3137b8u: goto label_3137b8;
        case 0x3137bcu: goto label_3137bc;
        case 0x3137c0u: goto label_3137c0;
        case 0x3137c4u: goto label_3137c4;
        case 0x3137c8u: goto label_3137c8;
        case 0x3137ccu: goto label_3137cc;
        case 0x3137d0u: goto label_3137d0;
        case 0x3137d4u: goto label_3137d4;
        case 0x3137d8u: goto label_3137d8;
        case 0x3137dcu: goto label_3137dc;
        case 0x3137e0u: goto label_3137e0;
        case 0x3137e4u: goto label_3137e4;
        case 0x3137e8u: goto label_3137e8;
        case 0x3137ecu: goto label_3137ec;
        case 0x3137f0u: goto label_3137f0;
        case 0x3137f4u: goto label_3137f4;
        case 0x3137f8u: goto label_3137f8;
        case 0x3137fcu: goto label_3137fc;
        case 0x313800u: goto label_313800;
        case 0x313804u: goto label_313804;
        case 0x313808u: goto label_313808;
        case 0x31380cu: goto label_31380c;
        case 0x313810u: goto label_313810;
        case 0x313814u: goto label_313814;
        case 0x313818u: goto label_313818;
        case 0x31381cu: goto label_31381c;
        case 0x313820u: goto label_313820;
        case 0x313824u: goto label_313824;
        case 0x313828u: goto label_313828;
        case 0x31382cu: goto label_31382c;
        case 0x313830u: goto label_313830;
        case 0x313834u: goto label_313834;
        case 0x313838u: goto label_313838;
        case 0x31383cu: goto label_31383c;
        case 0x313840u: goto label_313840;
        case 0x313844u: goto label_313844;
        case 0x313848u: goto label_313848;
        case 0x31384cu: goto label_31384c;
        case 0x313850u: goto label_313850;
        case 0x313854u: goto label_313854;
        case 0x313858u: goto label_313858;
        case 0x31385cu: goto label_31385c;
        case 0x313860u: goto label_313860;
        case 0x313864u: goto label_313864;
        case 0x313868u: goto label_313868;
        case 0x31386cu: goto label_31386c;
        case 0x313870u: goto label_313870;
        case 0x313874u: goto label_313874;
        case 0x313878u: goto label_313878;
        case 0x31387cu: goto label_31387c;
        case 0x313880u: goto label_313880;
        case 0x313884u: goto label_313884;
        case 0x313888u: goto label_313888;
        case 0x31388cu: goto label_31388c;
        case 0x313890u: goto label_313890;
        case 0x313894u: goto label_313894;
        case 0x313898u: goto label_313898;
        case 0x31389cu: goto label_31389c;
        case 0x3138a0u: goto label_3138a0;
        case 0x3138a4u: goto label_3138a4;
        case 0x3138a8u: goto label_3138a8;
        case 0x3138acu: goto label_3138ac;
        case 0x3138b0u: goto label_3138b0;
        case 0x3138b4u: goto label_3138b4;
        case 0x3138b8u: goto label_3138b8;
        case 0x3138bcu: goto label_3138bc;
        case 0x3138c0u: goto label_3138c0;
        case 0x3138c4u: goto label_3138c4;
        case 0x3138c8u: goto label_3138c8;
        case 0x3138ccu: goto label_3138cc;
        case 0x3138d0u: goto label_3138d0;
        case 0x3138d4u: goto label_3138d4;
        case 0x3138d8u: goto label_3138d8;
        case 0x3138dcu: goto label_3138dc;
        case 0x3138e0u: goto label_3138e0;
        case 0x3138e4u: goto label_3138e4;
        case 0x3138e8u: goto label_3138e8;
        case 0x3138ecu: goto label_3138ec;
        case 0x3138f0u: goto label_3138f0;
        case 0x3138f4u: goto label_3138f4;
        case 0x3138f8u: goto label_3138f8;
        case 0x3138fcu: goto label_3138fc;
        case 0x313900u: goto label_313900;
        case 0x313904u: goto label_313904;
        case 0x313908u: goto label_313908;
        case 0x31390cu: goto label_31390c;
        case 0x313910u: goto label_313910;
        case 0x313914u: goto label_313914;
        case 0x313918u: goto label_313918;
        case 0x31391cu: goto label_31391c;
        case 0x313920u: goto label_313920;
        case 0x313924u: goto label_313924;
        case 0x313928u: goto label_313928;
        case 0x31392cu: goto label_31392c;
        case 0x313930u: goto label_313930;
        case 0x313934u: goto label_313934;
        case 0x313938u: goto label_313938;
        case 0x31393cu: goto label_31393c;
        case 0x313940u: goto label_313940;
        case 0x313944u: goto label_313944;
        case 0x313948u: goto label_313948;
        case 0x31394cu: goto label_31394c;
        case 0x313950u: goto label_313950;
        case 0x313954u: goto label_313954;
        case 0x313958u: goto label_313958;
        case 0x31395cu: goto label_31395c;
        case 0x313960u: goto label_313960;
        case 0x313964u: goto label_313964;
        case 0x313968u: goto label_313968;
        case 0x31396cu: goto label_31396c;
        case 0x313970u: goto label_313970;
        case 0x313974u: goto label_313974;
        case 0x313978u: goto label_313978;
        case 0x31397cu: goto label_31397c;
        case 0x313980u: goto label_313980;
        case 0x313984u: goto label_313984;
        case 0x313988u: goto label_313988;
        case 0x31398cu: goto label_31398c;
        case 0x313990u: goto label_313990;
        case 0x313994u: goto label_313994;
        case 0x313998u: goto label_313998;
        case 0x31399cu: goto label_31399c;
        case 0x3139a0u: goto label_3139a0;
        case 0x3139a4u: goto label_3139a4;
        case 0x3139a8u: goto label_3139a8;
        case 0x3139acu: goto label_3139ac;
        case 0x3139b0u: goto label_3139b0;
        case 0x3139b4u: goto label_3139b4;
        case 0x3139b8u: goto label_3139b8;
        case 0x3139bcu: goto label_3139bc;
        case 0x3139c0u: goto label_3139c0;
        case 0x3139c4u: goto label_3139c4;
        case 0x3139c8u: goto label_3139c8;
        case 0x3139ccu: goto label_3139cc;
        case 0x3139d0u: goto label_3139d0;
        case 0x3139d4u: goto label_3139d4;
        case 0x3139d8u: goto label_3139d8;
        case 0x3139dcu: goto label_3139dc;
        case 0x3139e0u: goto label_3139e0;
        case 0x3139e4u: goto label_3139e4;
        case 0x3139e8u: goto label_3139e8;
        case 0x3139ecu: goto label_3139ec;
        case 0x3139f0u: goto label_3139f0;
        case 0x3139f4u: goto label_3139f4;
        case 0x3139f8u: goto label_3139f8;
        case 0x3139fcu: goto label_3139fc;
        case 0x313a00u: goto label_313a00;
        case 0x313a04u: goto label_313a04;
        case 0x313a08u: goto label_313a08;
        case 0x313a0cu: goto label_313a0c;
        case 0x313a10u: goto label_313a10;
        case 0x313a14u: goto label_313a14;
        case 0x313a18u: goto label_313a18;
        case 0x313a1cu: goto label_313a1c;
        case 0x313a20u: goto label_313a20;
        case 0x313a24u: goto label_313a24;
        case 0x313a28u: goto label_313a28;
        case 0x313a2cu: goto label_313a2c;
        case 0x313a30u: goto label_313a30;
        case 0x313a34u: goto label_313a34;
        case 0x313a38u: goto label_313a38;
        case 0x313a3cu: goto label_313a3c;
        case 0x313a40u: goto label_313a40;
        case 0x313a44u: goto label_313a44;
        case 0x313a48u: goto label_313a48;
        case 0x313a4cu: goto label_313a4c;
        case 0x313a50u: goto label_313a50;
        case 0x313a54u: goto label_313a54;
        case 0x313a58u: goto label_313a58;
        case 0x313a5cu: goto label_313a5c;
        case 0x313a60u: goto label_313a60;
        case 0x313a64u: goto label_313a64;
        case 0x313a68u: goto label_313a68;
        case 0x313a6cu: goto label_313a6c;
        case 0x313a70u: goto label_313a70;
        case 0x313a74u: goto label_313a74;
        case 0x313a78u: goto label_313a78;
        case 0x313a7cu: goto label_313a7c;
        case 0x313a80u: goto label_313a80;
        case 0x313a84u: goto label_313a84;
        case 0x313a88u: goto label_313a88;
        case 0x313a8cu: goto label_313a8c;
        case 0x313a90u: goto label_313a90;
        case 0x313a94u: goto label_313a94;
        case 0x313a98u: goto label_313a98;
        case 0x313a9cu: goto label_313a9c;
        case 0x313aa0u: goto label_313aa0;
        case 0x313aa4u: goto label_313aa4;
        case 0x313aa8u: goto label_313aa8;
        case 0x313aacu: goto label_313aac;
        case 0x313ab0u: goto label_313ab0;
        case 0x313ab4u: goto label_313ab4;
        case 0x313ab8u: goto label_313ab8;
        case 0x313abcu: goto label_313abc;
        case 0x313ac0u: goto label_313ac0;
        case 0x313ac4u: goto label_313ac4;
        case 0x313ac8u: goto label_313ac8;
        case 0x313accu: goto label_313acc;
        case 0x313ad0u: goto label_313ad0;
        case 0x313ad4u: goto label_313ad4;
        case 0x313ad8u: goto label_313ad8;
        case 0x313adcu: goto label_313adc;
        case 0x313ae0u: goto label_313ae0;
        case 0x313ae4u: goto label_313ae4;
        case 0x313ae8u: goto label_313ae8;
        case 0x313aecu: goto label_313aec;
        case 0x313af0u: goto label_313af0;
        case 0x313af4u: goto label_313af4;
        case 0x313af8u: goto label_313af8;
        case 0x313afcu: goto label_313afc;
        case 0x313b00u: goto label_313b00;
        case 0x313b04u: goto label_313b04;
        case 0x313b08u: goto label_313b08;
        case 0x313b0cu: goto label_313b0c;
        case 0x313b10u: goto label_313b10;
        case 0x313b14u: goto label_313b14;
        case 0x313b18u: goto label_313b18;
        case 0x313b1cu: goto label_313b1c;
        case 0x313b20u: goto label_313b20;
        case 0x313b24u: goto label_313b24;
        case 0x313b28u: goto label_313b28;
        case 0x313b2cu: goto label_313b2c;
        case 0x313b30u: goto label_313b30;
        case 0x313b34u: goto label_313b34;
        case 0x313b38u: goto label_313b38;
        case 0x313b3cu: goto label_313b3c;
        case 0x313b40u: goto label_313b40;
        case 0x313b44u: goto label_313b44;
        case 0x313b48u: goto label_313b48;
        case 0x313b4cu: goto label_313b4c;
        case 0x313b50u: goto label_313b50;
        case 0x313b54u: goto label_313b54;
        case 0x313b58u: goto label_313b58;
        case 0x313b5cu: goto label_313b5c;
        case 0x313b60u: goto label_313b60;
        case 0x313b64u: goto label_313b64;
        case 0x313b68u: goto label_313b68;
        case 0x313b6cu: goto label_313b6c;
        case 0x313b70u: goto label_313b70;
        case 0x313b74u: goto label_313b74;
        case 0x313b78u: goto label_313b78;
        case 0x313b7cu: goto label_313b7c;
        case 0x313b80u: goto label_313b80;
        case 0x313b84u: goto label_313b84;
        case 0x313b88u: goto label_313b88;
        case 0x313b8cu: goto label_313b8c;
        case 0x313b90u: goto label_313b90;
        case 0x313b94u: goto label_313b94;
        case 0x313b98u: goto label_313b98;
        case 0x313b9cu: goto label_313b9c;
        case 0x313ba0u: goto label_313ba0;
        case 0x313ba4u: goto label_313ba4;
        case 0x313ba8u: goto label_313ba8;
        case 0x313bacu: goto label_313bac;
        case 0x313bb0u: goto label_313bb0;
        case 0x313bb4u: goto label_313bb4;
        case 0x313bb8u: goto label_313bb8;
        case 0x313bbcu: goto label_313bbc;
        case 0x313bc0u: goto label_313bc0;
        case 0x313bc4u: goto label_313bc4;
        case 0x313bc8u: goto label_313bc8;
        case 0x313bccu: goto label_313bcc;
        case 0x313bd0u: goto label_313bd0;
        case 0x313bd4u: goto label_313bd4;
        case 0x313bd8u: goto label_313bd8;
        case 0x313bdcu: goto label_313bdc;
        case 0x313be0u: goto label_313be0;
        case 0x313be4u: goto label_313be4;
        case 0x313be8u: goto label_313be8;
        case 0x313becu: goto label_313bec;
        case 0x313bf0u: goto label_313bf0;
        case 0x313bf4u: goto label_313bf4;
        case 0x313bf8u: goto label_313bf8;
        case 0x313bfcu: goto label_313bfc;
        case 0x313c00u: goto label_313c00;
        case 0x313c04u: goto label_313c04;
        case 0x313c08u: goto label_313c08;
        case 0x313c0cu: goto label_313c0c;
        case 0x313c10u: goto label_313c10;
        case 0x313c14u: goto label_313c14;
        case 0x313c18u: goto label_313c18;
        case 0x313c1cu: goto label_313c1c;
        case 0x313c20u: goto label_313c20;
        case 0x313c24u: goto label_313c24;
        case 0x313c28u: goto label_313c28;
        case 0x313c2cu: goto label_313c2c;
        case 0x313c30u: goto label_313c30;
        case 0x313c34u: goto label_313c34;
        case 0x313c38u: goto label_313c38;
        case 0x313c3cu: goto label_313c3c;
        case 0x313c40u: goto label_313c40;
        case 0x313c44u: goto label_313c44;
        case 0x313c48u: goto label_313c48;
        case 0x313c4cu: goto label_313c4c;
        case 0x313c50u: goto label_313c50;
        case 0x313c54u: goto label_313c54;
        case 0x313c58u: goto label_313c58;
        case 0x313c5cu: goto label_313c5c;
        case 0x313c60u: goto label_313c60;
        case 0x313c64u: goto label_313c64;
        case 0x313c68u: goto label_313c68;
        case 0x313c6cu: goto label_313c6c;
        case 0x313c70u: goto label_313c70;
        case 0x313c74u: goto label_313c74;
        case 0x313c78u: goto label_313c78;
        case 0x313c7cu: goto label_313c7c;
        case 0x313c80u: goto label_313c80;
        case 0x313c84u: goto label_313c84;
        case 0x313c88u: goto label_313c88;
        case 0x313c8cu: goto label_313c8c;
        case 0x313c90u: goto label_313c90;
        case 0x313c94u: goto label_313c94;
        case 0x313c98u: goto label_313c98;
        case 0x313c9cu: goto label_313c9c;
        case 0x313ca0u: goto label_313ca0;
        case 0x313ca4u: goto label_313ca4;
        case 0x313ca8u: goto label_313ca8;
        case 0x313cacu: goto label_313cac;
        case 0x313cb0u: goto label_313cb0;
        case 0x313cb4u: goto label_313cb4;
        case 0x313cb8u: goto label_313cb8;
        case 0x313cbcu: goto label_313cbc;
        case 0x313cc0u: goto label_313cc0;
        case 0x313cc4u: goto label_313cc4;
        case 0x313cc8u: goto label_313cc8;
        case 0x313cccu: goto label_313ccc;
        case 0x313cd0u: goto label_313cd0;
        case 0x313cd4u: goto label_313cd4;
        case 0x313cd8u: goto label_313cd8;
        case 0x313cdcu: goto label_313cdc;
        case 0x313ce0u: goto label_313ce0;
        case 0x313ce4u: goto label_313ce4;
        case 0x313ce8u: goto label_313ce8;
        case 0x313cecu: goto label_313cec;
        case 0x313cf0u: goto label_313cf0;
        case 0x313cf4u: goto label_313cf4;
        case 0x313cf8u: goto label_313cf8;
        case 0x313cfcu: goto label_313cfc;
        case 0x313d00u: goto label_313d00;
        case 0x313d04u: goto label_313d04;
        case 0x313d08u: goto label_313d08;
        case 0x313d0cu: goto label_313d0c;
        case 0x313d10u: goto label_313d10;
        case 0x313d14u: goto label_313d14;
        case 0x313d18u: goto label_313d18;
        case 0x313d1cu: goto label_313d1c;
        case 0x313d20u: goto label_313d20;
        case 0x313d24u: goto label_313d24;
        case 0x313d28u: goto label_313d28;
        case 0x313d2cu: goto label_313d2c;
        case 0x313d30u: goto label_313d30;
        case 0x313d34u: goto label_313d34;
        case 0x313d38u: goto label_313d38;
        case 0x313d3cu: goto label_313d3c;
        case 0x313d40u: goto label_313d40;
        case 0x313d44u: goto label_313d44;
        case 0x313d48u: goto label_313d48;
        case 0x313d4cu: goto label_313d4c;
        case 0x313d50u: goto label_313d50;
        case 0x313d54u: goto label_313d54;
        case 0x313d58u: goto label_313d58;
        case 0x313d5cu: goto label_313d5c;
        case 0x313d60u: goto label_313d60;
        case 0x313d64u: goto label_313d64;
        case 0x313d68u: goto label_313d68;
        case 0x313d6cu: goto label_313d6c;
        case 0x313d70u: goto label_313d70;
        case 0x313d74u: goto label_313d74;
        case 0x313d78u: goto label_313d78;
        case 0x313d7cu: goto label_313d7c;
        case 0x313d80u: goto label_313d80;
        case 0x313d84u: goto label_313d84;
        case 0x313d88u: goto label_313d88;
        case 0x313d8cu: goto label_313d8c;
        case 0x313d90u: goto label_313d90;
        case 0x313d94u: goto label_313d94;
        case 0x313d98u: goto label_313d98;
        case 0x313d9cu: goto label_313d9c;
        case 0x313da0u: goto label_313da0;
        case 0x313da4u: goto label_313da4;
        case 0x313da8u: goto label_313da8;
        case 0x313dacu: goto label_313dac;
        case 0x313db0u: goto label_313db0;
        case 0x313db4u: goto label_313db4;
        case 0x313db8u: goto label_313db8;
        case 0x313dbcu: goto label_313dbc;
        case 0x313dc0u: goto label_313dc0;
        case 0x313dc4u: goto label_313dc4;
        case 0x313dc8u: goto label_313dc8;
        case 0x313dccu: goto label_313dcc;
        case 0x313dd0u: goto label_313dd0;
        case 0x313dd4u: goto label_313dd4;
        case 0x313dd8u: goto label_313dd8;
        case 0x313ddcu: goto label_313ddc;
        case 0x313de0u: goto label_313de0;
        case 0x313de4u: goto label_313de4;
        case 0x313de8u: goto label_313de8;
        case 0x313decu: goto label_313dec;
        case 0x313df0u: goto label_313df0;
        case 0x313df4u: goto label_313df4;
        case 0x313df8u: goto label_313df8;
        case 0x313dfcu: goto label_313dfc;
        case 0x313e00u: goto label_313e00;
        case 0x313e04u: goto label_313e04;
        case 0x313e08u: goto label_313e08;
        case 0x313e0cu: goto label_313e0c;
        case 0x313e10u: goto label_313e10;
        case 0x313e14u: goto label_313e14;
        case 0x313e18u: goto label_313e18;
        case 0x313e1cu: goto label_313e1c;
        case 0x313e20u: goto label_313e20;
        case 0x313e24u: goto label_313e24;
        case 0x313e28u: goto label_313e28;
        case 0x313e2cu: goto label_313e2c;
        case 0x313e30u: goto label_313e30;
        case 0x313e34u: goto label_313e34;
        case 0x313e38u: goto label_313e38;
        case 0x313e3cu: goto label_313e3c;
        case 0x313e40u: goto label_313e40;
        case 0x313e44u: goto label_313e44;
        case 0x313e48u: goto label_313e48;
        case 0x313e4cu: goto label_313e4c;
        case 0x313e50u: goto label_313e50;
        case 0x313e54u: goto label_313e54;
        case 0x313e58u: goto label_313e58;
        case 0x313e5cu: goto label_313e5c;
        case 0x313e60u: goto label_313e60;
        case 0x313e64u: goto label_313e64;
        case 0x313e68u: goto label_313e68;
        case 0x313e6cu: goto label_313e6c;
        case 0x313e70u: goto label_313e70;
        case 0x313e74u: goto label_313e74;
        case 0x313e78u: goto label_313e78;
        case 0x313e7cu: goto label_313e7c;
        case 0x313e80u: goto label_313e80;
        case 0x313e84u: goto label_313e84;
        case 0x313e88u: goto label_313e88;
        case 0x313e8cu: goto label_313e8c;
        case 0x313e90u: goto label_313e90;
        case 0x313e94u: goto label_313e94;
        case 0x313e98u: goto label_313e98;
        case 0x313e9cu: goto label_313e9c;
        case 0x313ea0u: goto label_313ea0;
        case 0x313ea4u: goto label_313ea4;
        case 0x313ea8u: goto label_313ea8;
        case 0x313eacu: goto label_313eac;
        case 0x313eb0u: goto label_313eb0;
        case 0x313eb4u: goto label_313eb4;
        case 0x313eb8u: goto label_313eb8;
        case 0x313ebcu: goto label_313ebc;
        case 0x313ec0u: goto label_313ec0;
        case 0x313ec4u: goto label_313ec4;
        case 0x313ec8u: goto label_313ec8;
        case 0x313eccu: goto label_313ecc;
        case 0x313ed0u: goto label_313ed0;
        case 0x313ed4u: goto label_313ed4;
        case 0x313ed8u: goto label_313ed8;
        case 0x313edcu: goto label_313edc;
        case 0x313ee0u: goto label_313ee0;
        case 0x313ee4u: goto label_313ee4;
        case 0x313ee8u: goto label_313ee8;
        case 0x313eecu: goto label_313eec;
        case 0x313ef0u: goto label_313ef0;
        case 0x313ef4u: goto label_313ef4;
        case 0x313ef8u: goto label_313ef8;
        case 0x313efcu: goto label_313efc;
        case 0x313f00u: goto label_313f00;
        case 0x313f04u: goto label_313f04;
        case 0x313f08u: goto label_313f08;
        case 0x313f0cu: goto label_313f0c;
        case 0x313f10u: goto label_313f10;
        case 0x313f14u: goto label_313f14;
        case 0x313f18u: goto label_313f18;
        case 0x313f1cu: goto label_313f1c;
        case 0x313f20u: goto label_313f20;
        case 0x313f24u: goto label_313f24;
        case 0x313f28u: goto label_313f28;
        case 0x313f2cu: goto label_313f2c;
        case 0x313f30u: goto label_313f30;
        case 0x313f34u: goto label_313f34;
        case 0x313f38u: goto label_313f38;
        case 0x313f3cu: goto label_313f3c;
        case 0x313f40u: goto label_313f40;
        case 0x313f44u: goto label_313f44;
        case 0x313f48u: goto label_313f48;
        case 0x313f4cu: goto label_313f4c;
        case 0x313f50u: goto label_313f50;
        case 0x313f54u: goto label_313f54;
        case 0x313f58u: goto label_313f58;
        case 0x313f5cu: goto label_313f5c;
        case 0x313f60u: goto label_313f60;
        case 0x313f64u: goto label_313f64;
        case 0x313f68u: goto label_313f68;
        case 0x313f6cu: goto label_313f6c;
        case 0x313f70u: goto label_313f70;
        case 0x313f74u: goto label_313f74;
        case 0x313f78u: goto label_313f78;
        case 0x313f7cu: goto label_313f7c;
        case 0x313f80u: goto label_313f80;
        case 0x313f84u: goto label_313f84;
        case 0x313f88u: goto label_313f88;
        case 0x313f8cu: goto label_313f8c;
        case 0x313f90u: goto label_313f90;
        case 0x313f94u: goto label_313f94;
        case 0x313f98u: goto label_313f98;
        case 0x313f9cu: goto label_313f9c;
        case 0x313fa0u: goto label_313fa0;
        case 0x313fa4u: goto label_313fa4;
        case 0x313fa8u: goto label_313fa8;
        case 0x313facu: goto label_313fac;
        case 0x313fb0u: goto label_313fb0;
        case 0x313fb4u: goto label_313fb4;
        case 0x313fb8u: goto label_313fb8;
        case 0x313fbcu: goto label_313fbc;
        case 0x313fc0u: goto label_313fc0;
        case 0x313fc4u: goto label_313fc4;
        case 0x313fc8u: goto label_313fc8;
        case 0x313fccu: goto label_313fcc;
        case 0x313fd0u: goto label_313fd0;
        case 0x313fd4u: goto label_313fd4;
        case 0x313fd8u: goto label_313fd8;
        case 0x313fdcu: goto label_313fdc;
        case 0x313fe0u: goto label_313fe0;
        case 0x313fe4u: goto label_313fe4;
        case 0x313fe8u: goto label_313fe8;
        case 0x313fecu: goto label_313fec;
        case 0x313ff0u: goto label_313ff0;
        case 0x313ff4u: goto label_313ff4;
        case 0x313ff8u: goto label_313ff8;
        case 0x313ffcu: goto label_313ffc;
        case 0x314000u: goto label_314000;
        case 0x314004u: goto label_314004;
        case 0x314008u: goto label_314008;
        case 0x31400cu: goto label_31400c;
        case 0x314010u: goto label_314010;
        case 0x314014u: goto label_314014;
        case 0x314018u: goto label_314018;
        case 0x31401cu: goto label_31401c;
        case 0x314020u: goto label_314020;
        case 0x314024u: goto label_314024;
        case 0x314028u: goto label_314028;
        case 0x31402cu: goto label_31402c;
        case 0x314030u: goto label_314030;
        case 0x314034u: goto label_314034;
        case 0x314038u: goto label_314038;
        case 0x31403cu: goto label_31403c;
        case 0x314040u: goto label_314040;
        case 0x314044u: goto label_314044;
        case 0x314048u: goto label_314048;
        case 0x31404cu: goto label_31404c;
        case 0x314050u: goto label_314050;
        case 0x314054u: goto label_314054;
        case 0x314058u: goto label_314058;
        case 0x31405cu: goto label_31405c;
        case 0x314060u: goto label_314060;
        case 0x314064u: goto label_314064;
        case 0x314068u: goto label_314068;
        case 0x31406cu: goto label_31406c;
        case 0x314070u: goto label_314070;
        case 0x314074u: goto label_314074;
        case 0x314078u: goto label_314078;
        case 0x31407cu: goto label_31407c;
        case 0x314080u: goto label_314080;
        case 0x314084u: goto label_314084;
        case 0x314088u: goto label_314088;
        case 0x31408cu: goto label_31408c;
        case 0x314090u: goto label_314090;
        case 0x314094u: goto label_314094;
        case 0x314098u: goto label_314098;
        case 0x31409cu: goto label_31409c;
        case 0x3140a0u: goto label_3140a0;
        case 0x3140a4u: goto label_3140a4;
        case 0x3140a8u: goto label_3140a8;
        case 0x3140acu: goto label_3140ac;
        case 0x3140b0u: goto label_3140b0;
        case 0x3140b4u: goto label_3140b4;
        case 0x3140b8u: goto label_3140b8;
        case 0x3140bcu: goto label_3140bc;
        case 0x3140c0u: goto label_3140c0;
        case 0x3140c4u: goto label_3140c4;
        case 0x3140c8u: goto label_3140c8;
        case 0x3140ccu: goto label_3140cc;
        case 0x3140d0u: goto label_3140d0;
        case 0x3140d4u: goto label_3140d4;
        case 0x3140d8u: goto label_3140d8;
        case 0x3140dcu: goto label_3140dc;
        case 0x3140e0u: goto label_3140e0;
        case 0x3140e4u: goto label_3140e4;
        case 0x3140e8u: goto label_3140e8;
        case 0x3140ecu: goto label_3140ec;
        case 0x3140f0u: goto label_3140f0;
        case 0x3140f4u: goto label_3140f4;
        case 0x3140f8u: goto label_3140f8;
        case 0x3140fcu: goto label_3140fc;
        case 0x314100u: goto label_314100;
        default: break;
    }

    ctx->pc = 0x313770u;

label_313770:
    // 0x313770: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x313770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_313774:
    // 0x313774: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x313774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_313778:
    // 0x313778: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x313778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_31377c:
    // 0x31377c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x31377cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_313780:
    // 0x313780: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x313780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_313784:
    // 0x313784: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x313784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_313788:
    // 0x313788: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x313788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_31378c:
    // 0x31378c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31378cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_313790:
    // 0x313790: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x313790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_313794:
    // 0x313794: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x313794u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_313798:
    // 0x313798: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x313798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_31379c:
    // 0x31379c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31379cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3137a0:
    // 0x3137a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3137a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3137a4:
    // 0x3137a4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3137a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3137a8:
    // 0x3137a8: 0xaf83a2a8  sw          $v1, -0x5D58($gp)
    ctx->pc = 0x3137a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943400), GPR_U32(ctx, 3));
label_3137ac:
    // 0x3137ac: 0xaf82a2b8  sw          $v0, -0x5D48($gp)
    ctx->pc = 0x3137acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943416), GPR_U32(ctx, 2));
label_3137b0:
    // 0x3137b0: 0x8f82a2a8  lw          $v0, -0x5D58($gp)
    ctx->pc = 0x3137b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943400)));
label_3137b4:
    // 0x3137b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3137b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3137b8:
    // 0x3137b8: 0xaf82a2ac  sw          $v0, -0x5D54($gp)
    ctx->pc = 0x3137b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943404), GPR_U32(ctx, 2));
label_3137bc:
    // 0x3137bc: 0x8f82a2ac  lw          $v0, -0x5D54($gp)
    ctx->pc = 0x3137bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943404)));
label_3137c0:
    // 0x3137c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3137c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3137c4:
    // 0x3137c4: 0xaf82a2b0  sw          $v0, -0x5D50($gp)
    ctx->pc = 0x3137c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943408), GPR_U32(ctx, 2));
label_3137c8:
    // 0x3137c8: 0x8f82a2b0  lw          $v0, -0x5D50($gp)
    ctx->pc = 0x3137c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943408)));
label_3137cc:
    // 0x3137cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3137ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3137d0:
    // 0x3137d0: 0xaf82a2bc  sw          $v0, -0x5D44($gp)
    ctx->pc = 0x3137d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943420), GPR_U32(ctx, 2));
label_3137d4:
    // 0x3137d4: 0x8f82a2bc  lw          $v0, -0x5D44($gp)
    ctx->pc = 0x3137d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943420)));
label_3137d8:
    // 0x3137d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3137d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3137dc:
    // 0x3137dc: 0xaf82a2c0  sw          $v0, -0x5D40($gp)
    ctx->pc = 0x3137dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943424), GPR_U32(ctx, 2));
label_3137e0:
    // 0x3137e0: 0x8f82a2c0  lw          $v0, -0x5D40($gp)
    ctx->pc = 0x3137e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943424)));
label_3137e4:
    // 0x3137e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3137e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3137e8:
    // 0x3137e8: 0xaf82a2c4  sw          $v0, -0x5D3C($gp)
    ctx->pc = 0x3137e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943428), GPR_U32(ctx, 2));
label_3137ec:
    // 0x3137ec: 0x8f82a2c4  lw          $v0, -0x5D3C($gp)
    ctx->pc = 0x3137ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943428)));
label_3137f0:
    // 0x3137f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3137f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3137f4:
    // 0x3137f4: 0xaf82a2c8  sw          $v0, -0x5D38($gp)
    ctx->pc = 0x3137f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943432), GPR_U32(ctx, 2));
label_3137f8:
    // 0x3137f8: 0x8f82a2c8  lw          $v0, -0x5D38($gp)
    ctx->pc = 0x3137f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943432)));
label_3137fc:
    // 0x3137fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3137fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_313800:
    // 0x313800: 0xaf82a2b4  sw          $v0, -0x5D4C($gp)
    ctx->pc = 0x313800u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943412), GPR_U32(ctx, 2));
label_313804:
    // 0x313804: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x313804u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_313808:
    // 0x313808: 0x8e052e50  lw          $a1, 0x2E50($s0)
    ctx->pc = 0x313808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11856)));
label_31380c:
    // 0x31380c: 0xc0a0ed8  jal         func_283B60
label_313810:
    if (ctx->pc == 0x313810u) {
        ctx->pc = 0x313810u;
            // 0x313810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313814u;
        goto label_313814;
    }
    ctx->pc = 0x31380Cu;
    SET_GPR_U32(ctx, 31, 0x313814u);
    ctx->pc = 0x313810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31380Cu;
            // 0x313810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313814u; }
        if (ctx->pc != 0x313814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313814u; }
        if (ctx->pc != 0x313814u) { return; }
    }
    ctx->pc = 0x313814u;
label_313814:
    // 0x313814: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x313814u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313818:
    // 0x313818: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_31381c:
    if (ctx->pc == 0x31381Cu) {
        ctx->pc = 0x31381Cu;
            // 0x31381c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313820u;
        goto label_313820;
    }
    ctx->pc = 0x313818u;
    {
        const bool branch_taken_0x313818 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x31381Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313818u;
            // 0x31381c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313818) {
            ctx->pc = 0x313828u;
            goto label_313828;
        }
    }
    ctx->pc = 0x313820u;
label_313820:
    // 0x313820: 0x1000022c  b           . + 4 + (0x22C << 2)
label_313824:
    if (ctx->pc == 0x313824u) {
        ctx->pc = 0x313824u;
            // 0x313824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313828u;
        goto label_313828;
    }
    ctx->pc = 0x313820u;
    {
        const bool branch_taken_0x313820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313820u;
            // 0x313824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313820) {
            ctx->pc = 0x3140D4u;
            goto label_3140d4;
        }
    }
    ctx->pc = 0x313828u;
label_313828:
    // 0x313828: 0xc0a0c9c  jal         func_283270
label_31382c:
    if (ctx->pc == 0x31382Cu) {
        ctx->pc = 0x31382Cu;
            // 0x31382c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x313830u;
        goto label_313830;
    }
    ctx->pc = 0x313828u;
    SET_GPR_U32(ctx, 31, 0x313830u);
    ctx->pc = 0x31382Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313828u;
            // 0x31382c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313830u; }
        if (ctx->pc != 0x313830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignStack__6CSceneFi_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313830u; }
        if (ctx->pc != 0x313830u) { return; }
    }
    ctx->pc = 0x313830u;
label_313830:
    // 0x313830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313834:
    // 0x313834: 0xc0a0c64  jal         func_283190
label_313838:
    if (ctx->pc == 0x313838u) {
        ctx->pc = 0x313838u;
            // 0x313838: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x31383Cu;
        goto label_31383c;
    }
    ctx->pc = 0x313834u;
    SET_GPR_U32(ctx, 31, 0x31383Cu);
    ctx->pc = 0x313838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313834u;
            // 0x313838: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31383Cu; }
        if (ctx->pc != 0x31383Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31383Cu; }
        if (ctx->pc != 0x31383Cu) { return; }
    }
    ctx->pc = 0x31383Cu;
label_31383c:
    // 0x31383c: 0x8e13003c  lw          $s3, 0x3C($s0)
    ctx->pc = 0x31383cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_313840:
    // 0x313840: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x313840u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
label_313844:
    // 0x313844: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x313844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313848:
    // 0x313848: 0x26d61ef0  addiu       $s6, $s6, 0x1EF0
    ctx->pc = 0x313848u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 7920));
label_31384c:
    // 0x31384c: 0x10000006  b           . + 4 + (0x6 << 2)
label_313850:
    if (ctx->pc == 0x313850u) {
        ctx->pc = 0x313850u;
            // 0x313850: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313854u;
        goto label_313854;
    }
    ctx->pc = 0x31384Cu;
    {
        const bool branch_taken_0x31384c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31384Cu;
            // 0x313850: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31384c) {
            ctx->pc = 0x313868u;
            goto label_313868;
        }
    }
    ctx->pc = 0x313854u;
label_313854:
    // 0x313854: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x313854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_313858:
    // 0x313858: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x313858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_31385c:
    // 0x31385c: 0xc04b950  jal         func_12E540
label_313860:
    if (ctx->pc == 0x313860u) {
        ctx->pc = 0x313860u;
            // 0x313860: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->pc = 0x313864u;
        goto label_313864;
    }
    ctx->pc = 0x31385Cu;
    SET_GPR_U32(ctx, 31, 0x313864u);
    ctx->pc = 0x313860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31385Cu;
            // 0x313860: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313864u; }
        if (ctx->pc != 0x313864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313864u; }
        if (ctx->pc != 0x313864u) { return; }
    }
    ctx->pc = 0x313864u;
label_313864:
    // 0x313864: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x313864u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_313868:
    // 0x313868: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x313868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_31386c:
    // 0x31386c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x31386cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_313870:
    // 0x313870: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_313874:
    if (ctx->pc == 0x313874u) {
        ctx->pc = 0x313874u;
            // 0x313874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313878u;
        goto label_313878;
    }
    ctx->pc = 0x313870u;
    {
        const bool branch_taken_0x313870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313870u;
            // 0x313874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313870) {
            ctx->pc = 0x313854u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_313854;
        }
    }
    ctx->pc = 0x313878u;
label_313878:
    // 0x313878: 0xc04e748  jal         func_139D20
label_31387c:
    if (ctx->pc == 0x31387Cu) {
        ctx->pc = 0x31387Cu;
            // 0x31387c: 0x24052712  addiu       $a1, $zero, 0x2712 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10002));
        ctx->pc = 0x313880u;
        goto label_313880;
    }
    ctx->pc = 0x313878u;
    SET_GPR_U32(ctx, 31, 0x313880u);
    ctx->pc = 0x31387Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313878u;
            // 0x31387c: 0x24052712  addiu       $a1, $zero, 0x2712 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10002));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313880u; }
        if (ctx->pc != 0x313880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313880u; }
        if (ctx->pc != 0x313880u) { return; }
    }
    ctx->pc = 0x313880u;
label_313880:
    // 0x313880: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x313880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_313884:
    // 0x313884: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x313884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313888:
    // 0x313888: 0xc04e63c  jal         func_1398F0
label_31388c:
    if (ctx->pc == 0x31388Cu) {
        ctx->pc = 0x31388Cu;
            // 0x31388c: 0x34647100  ori         $a0, $v1, 0x7100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28928);
        ctx->pc = 0x313890u;
        goto label_313890;
    }
    ctx->pc = 0x313888u;
    SET_GPR_U32(ctx, 31, 0x313890u);
    ctx->pc = 0x31388Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313888u;
            // 0x31388c: 0x34647100  ori         $a0, $v1, 0x7100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28928);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313890u; }
        if (ctx->pc != 0x313890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313890u; }
        if (ctx->pc != 0x313890u) { return; }
    }
    ctx->pc = 0x313890u;
label_313890:
    // 0x313890: 0xaf82a2d4  sw          $v0, -0x5D2C($gp)
    ctx->pc = 0x313890u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943444), GPR_U32(ctx, 2));
label_313894:
    // 0x313894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x313894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_313898:
    // 0x313898: 0xc04e748  jal         func_139D20
label_31389c:
    if (ctx->pc == 0x31389Cu) {
        ctx->pc = 0x31389Cu;
            // 0x31389c: 0x24054e20  addiu       $a1, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->pc = 0x3138A0u;
        goto label_3138a0;
    }
    ctx->pc = 0x313898u;
    SET_GPR_U32(ctx, 31, 0x3138A0u);
    ctx->pc = 0x31389Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313898u;
            // 0x31389c: 0x24054e20  addiu       $a1, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3138A0u; }
        if (ctx->pc != 0x3138A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3138A0u; }
        if (ctx->pc != 0x3138A0u) { return; }
    }
    ctx->pc = 0x3138A0u;
label_3138a0:
    // 0x3138a0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3138a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_3138a4:
    // 0x3138a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3138a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3138a8:
    // 0x3138a8: 0x2484f950  addiu       $a0, $a0, -0x6B0
    ctx->pc = 0x3138a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965584));
label_3138ac:
    // 0x3138ac: 0xc04e64c  jal         func_139930
label_3138b0:
    if (ctx->pc == 0x3138B0u) {
        ctx->pc = 0x3138B0u;
            // 0x3138b0: 0x24064e20  addiu       $a2, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->pc = 0x3138B4u;
        goto label_3138b4;
    }
    ctx->pc = 0x3138ACu;
    SET_GPR_U32(ctx, 31, 0x3138B4u);
    ctx->pc = 0x3138B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3138ACu;
            // 0x3138b0: 0x24064e20  addiu       $a2, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139930u;
    if (runtime->hasFunction(0x139930u)) {
        auto targetFn = runtime->lookupFunction(0x139930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3138B4u; }
        if (ctx->pc != 0x3138B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeapMem__9mgCMemoryFP1i_0x139930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3138B4u; }
        if (ctx->pc != 0x3138B4u) { return; }
    }
    ctx->pc = 0x3138B4u;
label_3138b4:
    // 0x3138b4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x3138b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_3138b8:
    // 0x3138b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3138b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3138bc:
    // 0x3138bc: 0x24842698  addiu       $a0, $a0, 0x2698
    ctx->pc = 0x3138bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9880));
label_3138c0:
    // 0x3138c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3138c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3138c4:
    // 0x3138c4: 0xc0524dc  jal         func_149370
label_3138c8:
    if (ctx->pc == 0x3138C8u) {
        ctx->pc = 0x3138C8u;
            // 0x3138c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3138CCu;
        goto label_3138cc;
    }
    ctx->pc = 0x3138C4u;
    SET_GPR_U32(ctx, 31, 0x3138CCu);
    ctx->pc = 0x3138C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3138C4u;
            // 0x3138c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3138CCu; }
        if (ctx->pc != 0x3138CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3138CCu; }
        if (ctx->pc != 0x3138CCu) { return; }
    }
    ctx->pc = 0x3138CCu;
label_3138cc:
    // 0x3138cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3138d0:
    if (ctx->pc == 0x3138D0u) {
        ctx->pc = 0x3138D0u;
            // 0x3138d0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x3138D4u;
        goto label_3138d4;
    }
    ctx->pc = 0x3138CCu;
    {
        const bool branch_taken_0x3138cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3138D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3138CCu;
            // 0x3138d0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3138cc) {
            ctx->pc = 0x3138DCu;
            goto label_3138dc;
        }
    }
    ctx->pc = 0x3138D4u;
label_3138d4:
    // 0x3138d4: 0x100001ff  b           . + 4 + (0x1FF << 2)
label_3138d8:
    if (ctx->pc == 0x3138D8u) {
        ctx->pc = 0x3138D8u;
            // 0x3138d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3138DCu;
        goto label_3138dc;
    }
    ctx->pc = 0x3138D4u;
    {
        const bool branch_taken_0x3138d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3138D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3138D4u;
            // 0x3138d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3138d4) {
            ctx->pc = 0x3140D4u;
            goto label_3140d4;
        }
    }
    ctx->pc = 0x3138DCu;
label_3138dc:
    // 0x3138dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3138dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3138e0:
    // 0x3138e0: 0x24a526a8  addiu       $a1, $a1, 0x26A8
    ctx->pc = 0x3138e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9896));
label_3138e4:
    // 0x3138e4: 0xc052734  jal         func_149CD0
label_3138e8:
    if (ctx->pc == 0x3138E8u) {
        ctx->pc = 0x3138E8u;
            // 0x3138e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3138ECu;
        goto label_3138ec;
    }
    ctx->pc = 0x3138E4u;
    SET_GPR_U32(ctx, 31, 0x3138ECu);
    ctx->pc = 0x3138E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3138E4u;
            // 0x3138e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3138ECu; }
        if (ctx->pc != 0x3138ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3138ECu; }
        if (ctx->pc != 0x3138ECu) { return; }
    }
    ctx->pc = 0x3138ECu;
label_3138ec:
    // 0x3138ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3138f0:
    if (ctx->pc == 0x3138F0u) {
        ctx->pc = 0x3138F4u;
        goto label_3138f4;
    }
    ctx->pc = 0x3138ECu;
    {
        const bool branch_taken_0x3138ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3138ec) {
            ctx->pc = 0x313920u;
            goto label_313920;
        }
    }
    ctx->pc = 0x3138F4u;
label_3138f4:
    // 0x3138f4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x3138f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_3138f8:
    // 0x3138f8: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x3138f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_3138fc:
    // 0x3138fc: 0x8f8ba2a8  lw          $t3, -0x5D58($gp)
    ctx->pc = 0x3138fcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943400)));
label_313900:
    // 0x313900: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x313900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313904:
    // 0x313904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313908:
    // 0x313908: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x313908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_31390c:
    // 0x31390c: 0x24e726b8  addiu       $a3, $a3, 0x26B8
    ctx->pc = 0x31390cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9912));
label_313910:
    // 0x313910: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x313910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_313914:
    // 0x313914: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x313914u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_313918:
    // 0x313918: 0xc0a1458  jal         func_285160
label_31391c:
    if (ctx->pc == 0x31391Cu) {
        ctx->pc = 0x31391Cu;
            // 0x31391c: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313920u;
        goto label_313920;
    }
    ctx->pc = 0x313918u;
    SET_GPR_U32(ctx, 31, 0x313920u);
    ctx->pc = 0x31391Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313918u;
            // 0x31391c: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285160u;
    if (runtime->hasFunction(0x285160u)) {
        auto targetFn = runtime->lookupFunction(0x285160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313920u; }
        if (ctx->pc != 0x313920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313920u; }
        if (ctx->pc != 0x313920u) { return; }
    }
    ctx->pc = 0x313920u;
label_313920:
    // 0x313920: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x313920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_313924:
    // 0x313924: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x313924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_313928:
    // 0x313928: 0x24a526c8  addiu       $a1, $a1, 0x26C8
    ctx->pc = 0x313928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9928));
label_31392c:
    // 0x31392c: 0xc052734  jal         func_149CD0
label_313930:
    if (ctx->pc == 0x313930u) {
        ctx->pc = 0x313930u;
            // 0x313930: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313934u;
        goto label_313934;
    }
    ctx->pc = 0x31392Cu;
    SET_GPR_U32(ctx, 31, 0x313934u);
    ctx->pc = 0x313930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31392Cu;
            // 0x313930: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313934u; }
        if (ctx->pc != 0x313934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313934u; }
        if (ctx->pc != 0x313934u) { return; }
    }
    ctx->pc = 0x313934u;
label_313934:
    // 0x313934: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_313938:
    if (ctx->pc == 0x313938u) {
        ctx->pc = 0x31393Cu;
        goto label_31393c;
    }
    ctx->pc = 0x313934u;
    {
        const bool branch_taken_0x313934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313934) {
            ctx->pc = 0x313968u;
            goto label_313968;
        }
    }
    ctx->pc = 0x31393Cu;
label_31393c:
    // 0x31393c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x31393cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_313940:
    // 0x313940: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x313940u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_313944:
    // 0x313944: 0x8f8ba2ac  lw          $t3, -0x5D54($gp)
    ctx->pc = 0x313944u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943404)));
label_313948:
    // 0x313948: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x313948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31394c:
    // 0x31394c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31394cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313950:
    // 0x313950: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x313950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_313954:
    // 0x313954: 0x24e726d8  addiu       $a3, $a3, 0x26D8
    ctx->pc = 0x313954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9944));
label_313958:
    // 0x313958: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x313958u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31395c:
    // 0x31395c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x31395cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_313960:
    // 0x313960: 0xc0a1458  jal         func_285160
label_313964:
    if (ctx->pc == 0x313964u) {
        ctx->pc = 0x313964u;
            // 0x313964: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313968u;
        goto label_313968;
    }
    ctx->pc = 0x313960u;
    SET_GPR_U32(ctx, 31, 0x313968u);
    ctx->pc = 0x313964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313960u;
            // 0x313964: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285160u;
    if (runtime->hasFunction(0x285160u)) {
        auto targetFn = runtime->lookupFunction(0x285160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313968u; }
        if (ctx->pc != 0x313968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313968u; }
        if (ctx->pc != 0x313968u) { return; }
    }
    ctx->pc = 0x313968u;
label_313968:
    // 0x313968: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x313968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_31396c:
    // 0x31396c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31396cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_313970:
    // 0x313970: 0x24a526e8  addiu       $a1, $a1, 0x26E8
    ctx->pc = 0x313970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9960));
label_313974:
    // 0x313974: 0xc052734  jal         func_149CD0
label_313978:
    if (ctx->pc == 0x313978u) {
        ctx->pc = 0x313978u;
            // 0x313978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31397Cu;
        goto label_31397c;
    }
    ctx->pc = 0x313974u;
    SET_GPR_U32(ctx, 31, 0x31397Cu);
    ctx->pc = 0x313978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313974u;
            // 0x313978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31397Cu; }
        if (ctx->pc != 0x31397Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31397Cu; }
        if (ctx->pc != 0x31397Cu) { return; }
    }
    ctx->pc = 0x31397Cu;
label_31397c:
    // 0x31397c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_313980:
    if (ctx->pc == 0x313980u) {
        ctx->pc = 0x313984u;
        goto label_313984;
    }
    ctx->pc = 0x31397Cu;
    {
        const bool branch_taken_0x31397c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31397c) {
            ctx->pc = 0x3139B0u;
            goto label_3139b0;
        }
    }
    ctx->pc = 0x313984u;
label_313984:
    // 0x313984: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x313984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_313988:
    // 0x313988: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x313988u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_31398c:
    // 0x31398c: 0x8f8ba2b0  lw          $t3, -0x5D50($gp)
    ctx->pc = 0x31398cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943408)));
label_313990:
    // 0x313990: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x313990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313994:
    // 0x313994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313998:
    // 0x313998: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x313998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_31399c:
    // 0x31399c: 0x24e726f8  addiu       $a3, $a3, 0x26F8
    ctx->pc = 0x31399cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9976));
label_3139a0:
    // 0x3139a0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3139a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3139a4:
    // 0x3139a4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3139a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3139a8:
    // 0x3139a8: 0xc0a1458  jal         func_285160
label_3139ac:
    if (ctx->pc == 0x3139ACu) {
        ctx->pc = 0x3139ACu;
            // 0x3139ac: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3139B0u;
        goto label_3139b0;
    }
    ctx->pc = 0x3139A8u;
    SET_GPR_U32(ctx, 31, 0x3139B0u);
    ctx->pc = 0x3139ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3139A8u;
            // 0x3139ac: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285160u;
    if (runtime->hasFunction(0x285160u)) {
        auto targetFn = runtime->lookupFunction(0x285160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3139B0u; }
        if (ctx->pc != 0x3139B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3139B0u; }
        if (ctx->pc != 0x3139B0u) { return; }
    }
    ctx->pc = 0x3139B0u;
label_3139b0:
    // 0x3139b0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3139b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_3139b4:
    // 0x3139b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3139b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3139b8:
    // 0x3139b8: 0x24a52708  addiu       $a1, $a1, 0x2708
    ctx->pc = 0x3139b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9992));
label_3139bc:
    // 0x3139bc: 0xc052734  jal         func_149CD0
label_3139c0:
    if (ctx->pc == 0x3139C0u) {
        ctx->pc = 0x3139C0u;
            // 0x3139c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3139C4u;
        goto label_3139c4;
    }
    ctx->pc = 0x3139BCu;
    SET_GPR_U32(ctx, 31, 0x3139C4u);
    ctx->pc = 0x3139C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3139BCu;
            // 0x3139c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3139C4u; }
        if (ctx->pc != 0x3139C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3139C4u; }
        if (ctx->pc != 0x3139C4u) { return; }
    }
    ctx->pc = 0x3139C4u;
label_3139c4:
    // 0x3139c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3139c8:
    if (ctx->pc == 0x3139C8u) {
        ctx->pc = 0x3139CCu;
        goto label_3139cc;
    }
    ctx->pc = 0x3139C4u;
    {
        const bool branch_taken_0x3139c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3139c4) {
            ctx->pc = 0x3139F8u;
            goto label_3139f8;
        }
    }
    ctx->pc = 0x3139CCu;
label_3139cc:
    // 0x3139cc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x3139ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_3139d0:
    // 0x3139d0: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x3139d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_3139d4:
    // 0x3139d4: 0x8f8ba2c0  lw          $t3, -0x5D40($gp)
    ctx->pc = 0x3139d4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943424)));
label_3139d8:
    // 0x3139d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3139d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3139dc:
    // 0x3139dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3139dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3139e0:
    // 0x3139e0: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x3139e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_3139e4:
    // 0x3139e4: 0x24e72718  addiu       $a3, $a3, 0x2718
    ctx->pc = 0x3139e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10008));
label_3139e8:
    // 0x3139e8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3139e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3139ec:
    // 0x3139ec: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3139ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3139f0:
    // 0x3139f0: 0xc0a1458  jal         func_285160
label_3139f4:
    if (ctx->pc == 0x3139F4u) {
        ctx->pc = 0x3139F4u;
            // 0x3139f4: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3139F8u;
        goto label_3139f8;
    }
    ctx->pc = 0x3139F0u;
    SET_GPR_U32(ctx, 31, 0x3139F8u);
    ctx->pc = 0x3139F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3139F0u;
            // 0x3139f4: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285160u;
    if (runtime->hasFunction(0x285160u)) {
        auto targetFn = runtime->lookupFunction(0x285160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3139F8u; }
        if (ctx->pc != 0x3139F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3139F8u; }
        if (ctx->pc != 0x3139F8u) { return; }
    }
    ctx->pc = 0x3139F8u;
label_3139f8:
    // 0x3139f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3139f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_3139fc:
    // 0x3139fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3139fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_313a00:
    // 0x313a00: 0x24a52728  addiu       $a1, $a1, 0x2728
    ctx->pc = 0x313a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10024));
label_313a04:
    // 0x313a04: 0xc052734  jal         func_149CD0
label_313a08:
    if (ctx->pc == 0x313A08u) {
        ctx->pc = 0x313A08u;
            // 0x313a08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313A0Cu;
        goto label_313a0c;
    }
    ctx->pc = 0x313A04u;
    SET_GPR_U32(ctx, 31, 0x313A0Cu);
    ctx->pc = 0x313A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313A04u;
            // 0x313a08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313A0Cu; }
        if (ctx->pc != 0x313A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313A0Cu; }
        if (ctx->pc != 0x313A0Cu) { return; }
    }
    ctx->pc = 0x313A0Cu;
label_313a0c:
    // 0x313a0c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_313a10:
    if (ctx->pc == 0x313A10u) {
        ctx->pc = 0x313A14u;
        goto label_313a14;
    }
    ctx->pc = 0x313A0Cu;
    {
        const bool branch_taken_0x313a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313a0c) {
            ctx->pc = 0x313A40u;
            goto label_313a40;
        }
    }
    ctx->pc = 0x313A14u;
label_313a14:
    // 0x313a14: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x313a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_313a18:
    // 0x313a18: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x313a18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_313a1c:
    // 0x313a1c: 0x8f8ba2bc  lw          $t3, -0x5D44($gp)
    ctx->pc = 0x313a1cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943420)));
label_313a20:
    // 0x313a20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x313a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313a24:
    // 0x313a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313a28:
    // 0x313a28: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x313a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_313a2c:
    // 0x313a2c: 0x24e72718  addiu       $a3, $a3, 0x2718
    ctx->pc = 0x313a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10008));
label_313a30:
    // 0x313a30: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x313a30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_313a34:
    // 0x313a34: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x313a34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_313a38:
    // 0x313a38: 0xc0a1458  jal         func_285160
label_313a3c:
    if (ctx->pc == 0x313A3Cu) {
        ctx->pc = 0x313A3Cu;
            // 0x313a3c: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313A40u;
        goto label_313a40;
    }
    ctx->pc = 0x313A38u;
    SET_GPR_U32(ctx, 31, 0x313A40u);
    ctx->pc = 0x313A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313A38u;
            // 0x313a3c: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285160u;
    if (runtime->hasFunction(0x285160u)) {
        auto targetFn = runtime->lookupFunction(0x285160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313A40u; }
        if (ctx->pc != 0x313A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313A40u; }
        if (ctx->pc != 0x313A40u) { return; }
    }
    ctx->pc = 0x313A40u;
label_313a40:
    // 0x313a40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x313a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_313a44:
    // 0x313a44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x313a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_313a48:
    // 0x313a48: 0x24a52738  addiu       $a1, $a1, 0x2738
    ctx->pc = 0x313a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10040));
label_313a4c:
    // 0x313a4c: 0xc052734  jal         func_149CD0
label_313a50:
    if (ctx->pc == 0x313A50u) {
        ctx->pc = 0x313A50u;
            // 0x313a50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313A54u;
        goto label_313a54;
    }
    ctx->pc = 0x313A4Cu;
    SET_GPR_U32(ctx, 31, 0x313A54u);
    ctx->pc = 0x313A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313A4Cu;
            // 0x313a50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313A54u; }
        if (ctx->pc != 0x313A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313A54u; }
        if (ctx->pc != 0x313A54u) { return; }
    }
    ctx->pc = 0x313A54u;
label_313a54:
    // 0x313a54: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_313a58:
    if (ctx->pc == 0x313A58u) {
        ctx->pc = 0x313A5Cu;
        goto label_313a5c;
    }
    ctx->pc = 0x313A54u;
    {
        const bool branch_taken_0x313a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313a54) {
            ctx->pc = 0x313A8Cu;
            goto label_313a8c;
        }
    }
    ctx->pc = 0x313A5Cu;
label_313a5c:
    // 0x313a5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x313a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313a60:
    // 0x313a60: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x313a60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_313a64:
    // 0x313a64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x313a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_313a68:
    // 0x313a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313a6c:
    // 0x313a6c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x313a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_313a70:
    // 0x313a70: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x313a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_313a74:
    // 0x313a74: 0x8f8ba2c4  lw          $t3, -0x5D3C($gp)
    ctx->pc = 0x313a74u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943428)));
label_313a78:
    // 0x313a78: 0x24e72718  addiu       $a3, $a3, 0x2718
    ctx->pc = 0x313a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10008));
label_313a7c:
    // 0x313a7c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x313a7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_313a80:
    // 0x313a80: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x313a80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_313a84:
    // 0x313a84: 0xc0a1458  jal         func_285160
label_313a88:
    if (ctx->pc == 0x313A88u) {
        ctx->pc = 0x313A88u;
            // 0x313a88: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313A8Cu;
        goto label_313a8c;
    }
    ctx->pc = 0x313A84u;
    SET_GPR_U32(ctx, 31, 0x313A8Cu);
    ctx->pc = 0x313A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313A84u;
            // 0x313a88: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285160u;
    if (runtime->hasFunction(0x285160u)) {
        auto targetFn = runtime->lookupFunction(0x285160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313A8Cu; }
        if (ctx->pc != 0x313A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313A8Cu; }
        if (ctx->pc != 0x313A8Cu) { return; }
    }
    ctx->pc = 0x313A8Cu;
label_313a8c:
    // 0x313a8c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x313a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_313a90:
    // 0x313a90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x313a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_313a94:
    // 0x313a94: 0x24a52748  addiu       $a1, $a1, 0x2748
    ctx->pc = 0x313a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10056));
label_313a98:
    // 0x313a98: 0xc052734  jal         func_149CD0
label_313a9c:
    if (ctx->pc == 0x313A9Cu) {
        ctx->pc = 0x313A9Cu;
            // 0x313a9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313AA0u;
        goto label_313aa0;
    }
    ctx->pc = 0x313A98u;
    SET_GPR_U32(ctx, 31, 0x313AA0u);
    ctx->pc = 0x313A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313A98u;
            // 0x313a9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313AA0u; }
        if (ctx->pc != 0x313AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313AA0u; }
        if (ctx->pc != 0x313AA0u) { return; }
    }
    ctx->pc = 0x313AA0u;
label_313aa0:
    // 0x313aa0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_313aa4:
    if (ctx->pc == 0x313AA4u) {
        ctx->pc = 0x313AA4u;
            // 0x313aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313AA8u;
        goto label_313aa8;
    }
    ctx->pc = 0x313AA0u;
    {
        const bool branch_taken_0x313aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313AA0u;
            // 0x313aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313aa0) {
            ctx->pc = 0x313ADCu;
            goto label_313adc;
        }
    }
    ctx->pc = 0x313AA8u;
label_313aa8:
    // 0x313aa8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x313aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313aac:
    // 0x313aac: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x313aacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_313ab0:
    // 0x313ab0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x313ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_313ab4:
    // 0x313ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313ab8:
    // 0x313ab8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x313ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_313abc:
    // 0x313abc: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x313abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_313ac0:
    // 0x313ac0: 0x8f8ba2c4  lw          $t3, -0x5D3C($gp)
    ctx->pc = 0x313ac0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943428)));
label_313ac4:
    // 0x313ac4: 0x24e72718  addiu       $a3, $a3, 0x2718
    ctx->pc = 0x313ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10008));
label_313ac8:
    // 0x313ac8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x313ac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_313acc:
    // 0x313acc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x313accu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_313ad0:
    // 0x313ad0: 0xc0a1458  jal         func_285160
label_313ad4:
    if (ctx->pc == 0x313AD4u) {
        ctx->pc = 0x313AD4u;
            // 0x313ad4: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313AD8u;
        goto label_313ad8;
    }
    ctx->pc = 0x313AD0u;
    SET_GPR_U32(ctx, 31, 0x313AD8u);
    ctx->pc = 0x313AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313AD0u;
            // 0x313ad4: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285160u;
    if (runtime->hasFunction(0x285160u)) {
        auto targetFn = runtime->lookupFunction(0x285160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313AD8u; }
        if (ctx->pc != 0x313AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313AD8u; }
        if (ctx->pc != 0x313AD8u) { return; }
    }
    ctx->pc = 0x313AD8u;
label_313ad8:
    // 0x313ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313adc:
    // 0x313adc: 0xc0a0ed8  jal         func_283B60
label_313ae0:
    if (ctx->pc == 0x313AE0u) {
        ctx->pc = 0x313AE0u;
            // 0x313ae0: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x313AE4u;
        goto label_313ae4;
    }
    ctx->pc = 0x313ADCu;
    SET_GPR_U32(ctx, 31, 0x313AE4u);
    ctx->pc = 0x313AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313ADCu;
            // 0x313ae0: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313AE4u; }
        if (ctx->pc != 0x313AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313AE4u; }
        if (ctx->pc != 0x313AE4u) { return; }
    }
    ctx->pc = 0x313AE4u;
label_313ae4:
    // 0x313ae4: 0xaf82a284  sw          $v0, -0x5D7C($gp)
    ctx->pc = 0x313ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943364), GPR_U32(ctx, 2));
label_313ae8:
    // 0x313ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313aec:
    // 0x313aec: 0xc0a0ed8  jal         func_283B60
label_313af0:
    if (ctx->pc == 0x313AF0u) {
        ctx->pc = 0x313AF0u;
            // 0x313af0: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->pc = 0x313AF4u;
        goto label_313af4;
    }
    ctx->pc = 0x313AECu;
    SET_GPR_U32(ctx, 31, 0x313AF4u);
    ctx->pc = 0x313AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313AECu;
            // 0x313af0: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313AF4u; }
        if (ctx->pc != 0x313AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313AF4u; }
        if (ctx->pc != 0x313AF4u) { return; }
    }
    ctx->pc = 0x313AF4u;
label_313af4:
    // 0x313af4: 0xaf82a288  sw          $v0, -0x5D78($gp)
    ctx->pc = 0x313af4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943368), GPR_U32(ctx, 2));
label_313af8:
    // 0x313af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313afc:
    // 0x313afc: 0xc0a0ed8  jal         func_283B60
label_313b00:
    if (ctx->pc == 0x313B00u) {
        ctx->pc = 0x313B00u;
            // 0x313b00: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->pc = 0x313B04u;
        goto label_313b04;
    }
    ctx->pc = 0x313AFCu;
    SET_GPR_U32(ctx, 31, 0x313B04u);
    ctx->pc = 0x313B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313AFCu;
            // 0x313b00: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B04u; }
        if (ctx->pc != 0x313B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B04u; }
        if (ctx->pc != 0x313B04u) { return; }
    }
    ctx->pc = 0x313B04u;
label_313b04:
    // 0x313b04: 0xaf82a28c  sw          $v0, -0x5D74($gp)
    ctx->pc = 0x313b04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943372), GPR_U32(ctx, 2));
label_313b08:
    // 0x313b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313b0c:
    // 0x313b0c: 0xc0a0ed8  jal         func_283B60
label_313b10:
    if (ctx->pc == 0x313B10u) {
        ctx->pc = 0x313B10u;
            // 0x313b10: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->pc = 0x313B14u;
        goto label_313b14;
    }
    ctx->pc = 0x313B0Cu;
    SET_GPR_U32(ctx, 31, 0x313B14u);
    ctx->pc = 0x313B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313B0Cu;
            // 0x313b10: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B14u; }
        if (ctx->pc != 0x313B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B14u; }
        if (ctx->pc != 0x313B14u) { return; }
    }
    ctx->pc = 0x313B14u;
label_313b14:
    // 0x313b14: 0xaf82a290  sw          $v0, -0x5D70($gp)
    ctx->pc = 0x313b14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943376), GPR_U32(ctx, 2));
label_313b18:
    // 0x313b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313b1c:
    // 0x313b1c: 0xc0a0ed8  jal         func_283B60
label_313b20:
    if (ctx->pc == 0x313B20u) {
        ctx->pc = 0x313B20u;
            // 0x313b20: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->pc = 0x313B24u;
        goto label_313b24;
    }
    ctx->pc = 0x313B1Cu;
    SET_GPR_U32(ctx, 31, 0x313B24u);
    ctx->pc = 0x313B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313B1Cu;
            // 0x313b20: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B24u; }
        if (ctx->pc != 0x313B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B24u; }
        if (ctx->pc != 0x313B24u) { return; }
    }
    ctx->pc = 0x313B24u;
label_313b24:
    // 0x313b24: 0xaf82a294  sw          $v0, -0x5D6C($gp)
    ctx->pc = 0x313b24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943380), GPR_U32(ctx, 2));
label_313b28:
    // 0x313b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313b2c:
    // 0x313b2c: 0xc0a0ed8  jal         func_283B60
label_313b30:
    if (ctx->pc == 0x313B30u) {
        ctx->pc = 0x313B30u;
            // 0x313b30: 0x24050045  addiu       $a1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->pc = 0x313B34u;
        goto label_313b34;
    }
    ctx->pc = 0x313B2Cu;
    SET_GPR_U32(ctx, 31, 0x313B34u);
    ctx->pc = 0x313B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313B2Cu;
            // 0x313b30: 0x24050045  addiu       $a1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B34u; }
        if (ctx->pc != 0x313B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B34u; }
        if (ctx->pc != 0x313B34u) { return; }
    }
    ctx->pc = 0x313B34u;
label_313b34:
    // 0x313b34: 0xaf82a298  sw          $v0, -0x5D68($gp)
    ctx->pc = 0x313b34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943384), GPR_U32(ctx, 2));
label_313b38:
    // 0x313b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313b3c:
    // 0x313b3c: 0xc0a0ed8  jal         func_283B60
label_313b40:
    if (ctx->pc == 0x313B40u) {
        ctx->pc = 0x313B40u;
            // 0x313b40: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x313B44u;
        goto label_313b44;
    }
    ctx->pc = 0x313B3Cu;
    SET_GPR_U32(ctx, 31, 0x313B44u);
    ctx->pc = 0x313B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313B3Cu;
            // 0x313b40: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B44u; }
        if (ctx->pc != 0x313B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B44u; }
        if (ctx->pc != 0x313B44u) { return; }
    }
    ctx->pc = 0x313B44u;
label_313b44:
    // 0x313b44: 0xaf82a29c  sw          $v0, -0x5D64($gp)
    ctx->pc = 0x313b44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943388), GPR_U32(ctx, 2));
label_313b48:
    // 0x313b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313b4c:
    // 0x313b4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x313b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_313b50:
    // 0x313b50: 0xc0a11b4  jal         func_2846D0
label_313b54:
    if (ctx->pc == 0x313B54u) {
        ctx->pc = 0x313B54u;
            // 0x313b54: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x313B58u;
        goto label_313b58;
    }
    ctx->pc = 0x313B50u;
    SET_GPR_U32(ctx, 31, 0x313B58u);
    ctx->pc = 0x313B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313B50u;
            // 0x313b54: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B58u; }
        if (ctx->pc != 0x313B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B58u; }
        if (ctx->pc != 0x313B58u) { return; }
    }
    ctx->pc = 0x313B58u;
label_313b58:
    // 0x313b58: 0x8f86a2a8  lw          $a2, -0x5D58($gp)
    ctx->pc = 0x313b58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943400)));
label_313b5c:
    // 0x313b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313b60:
    // 0x313b60: 0xc0a1264  jal         func_284990
label_313b64:
    if (ctx->pc == 0x313B64u) {
        ctx->pc = 0x313B64u;
            // 0x313b64: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x313B68u;
        goto label_313b68;
    }
    ctx->pc = 0x313B60u;
    SET_GPR_U32(ctx, 31, 0x313B68u);
    ctx->pc = 0x313B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313B60u;
            // 0x313b64: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284990u;
    if (runtime->hasFunction(0x284990u)) {
        auto targetFn = runtime->lookupFunction(0x284990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B68u; }
        if (ctx->pc != 0x313B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaTexb__6CSceneFii_0x284990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B68u; }
        if (ctx->pc != 0x313B68u) { return; }
    }
    ctx->pc = 0x313B68u;
label_313b68:
    // 0x313b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313b6c:
    // 0x313b6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x313b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_313b70:
    // 0x313b70: 0xc0a11b4  jal         func_2846D0
label_313b74:
    if (ctx->pc == 0x313B74u) {
        ctx->pc = 0x313B74u;
            // 0x313b74: 0x24060041  addiu       $a2, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->pc = 0x313B78u;
        goto label_313b78;
    }
    ctx->pc = 0x313B70u;
    SET_GPR_U32(ctx, 31, 0x313B78u);
    ctx->pc = 0x313B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313B70u;
            // 0x313b74: 0x24060041  addiu       $a2, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B78u; }
        if (ctx->pc != 0x313B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B78u; }
        if (ctx->pc != 0x313B78u) { return; }
    }
    ctx->pc = 0x313B78u;
label_313b78:
    // 0x313b78: 0x8f86a2ac  lw          $a2, -0x5D54($gp)
    ctx->pc = 0x313b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943404)));
label_313b7c:
    // 0x313b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313b80:
    // 0x313b80: 0xc0a1264  jal         func_284990
label_313b84:
    if (ctx->pc == 0x313B84u) {
        ctx->pc = 0x313B84u;
            // 0x313b84: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->pc = 0x313B88u;
        goto label_313b88;
    }
    ctx->pc = 0x313B80u;
    SET_GPR_U32(ctx, 31, 0x313B88u);
    ctx->pc = 0x313B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313B80u;
            // 0x313b84: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284990u;
    if (runtime->hasFunction(0x284990u)) {
        auto targetFn = runtime->lookupFunction(0x284990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B88u; }
        if (ctx->pc != 0x313B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaTexb__6CSceneFii_0x284990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B88u; }
        if (ctx->pc != 0x313B88u) { return; }
    }
    ctx->pc = 0x313B88u;
label_313b88:
    // 0x313b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313b8c:
    // 0x313b8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x313b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_313b90:
    // 0x313b90: 0xc0a11b4  jal         func_2846D0
label_313b94:
    if (ctx->pc == 0x313B94u) {
        ctx->pc = 0x313B94u;
            // 0x313b94: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->pc = 0x313B98u;
        goto label_313b98;
    }
    ctx->pc = 0x313B90u;
    SET_GPR_U32(ctx, 31, 0x313B98u);
    ctx->pc = 0x313B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313B90u;
            // 0x313b94: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B98u; }
        if (ctx->pc != 0x313B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B98u; }
        if (ctx->pc != 0x313B98u) { return; }
    }
    ctx->pc = 0x313B98u;
label_313b98:
    // 0x313b98: 0x8f86a2b0  lw          $a2, -0x5D50($gp)
    ctx->pc = 0x313b98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943408)));
label_313b9c:
    // 0x313b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313ba0:
    // 0x313ba0: 0xc0a1264  jal         func_284990
label_313ba4:
    if (ctx->pc == 0x313BA4u) {
        ctx->pc = 0x313BA4u;
            // 0x313ba4: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->pc = 0x313BA8u;
        goto label_313ba8;
    }
    ctx->pc = 0x313BA0u;
    SET_GPR_U32(ctx, 31, 0x313BA8u);
    ctx->pc = 0x313BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313BA0u;
            // 0x313ba4: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284990u;
    if (runtime->hasFunction(0x284990u)) {
        auto targetFn = runtime->lookupFunction(0x284990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313BA8u; }
        if (ctx->pc != 0x313BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaTexb__6CSceneFii_0x284990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313BA8u; }
        if (ctx->pc != 0x313BA8u) { return; }
    }
    ctx->pc = 0x313BA8u;
label_313ba8:
    // 0x313ba8: 0x8f86a2bc  lw          $a2, -0x5D44($gp)
    ctx->pc = 0x313ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943420)));
label_313bac:
    // 0x313bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313bb0:
    // 0x313bb0: 0xc0a1264  jal         func_284990
label_313bb4:
    if (ctx->pc == 0x313BB4u) {
        ctx->pc = 0x313BB4u;
            // 0x313bb4: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->pc = 0x313BB8u;
        goto label_313bb8;
    }
    ctx->pc = 0x313BB0u;
    SET_GPR_U32(ctx, 31, 0x313BB8u);
    ctx->pc = 0x313BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313BB0u;
            // 0x313bb4: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284990u;
    if (runtime->hasFunction(0x284990u)) {
        auto targetFn = runtime->lookupFunction(0x284990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313BB8u; }
        if (ctx->pc != 0x313BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaTexb__6CSceneFii_0x284990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313BB8u; }
        if (ctx->pc != 0x313BB8u) { return; }
    }
    ctx->pc = 0x313BB8u;
label_313bb8:
    // 0x313bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313bbc:
    // 0x313bbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x313bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_313bc0:
    // 0x313bc0: 0xc0a11b4  jal         func_2846D0
label_313bc4:
    if (ctx->pc == 0x313BC4u) {
        ctx->pc = 0x313BC4u;
            // 0x313bc4: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->pc = 0x313BC8u;
        goto label_313bc8;
    }
    ctx->pc = 0x313BC0u;
    SET_GPR_U32(ctx, 31, 0x313BC8u);
    ctx->pc = 0x313BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313BC0u;
            // 0x313bc4: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313BC8u; }
        if (ctx->pc != 0x313BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313BC8u; }
        if (ctx->pc != 0x313BC8u) { return; }
    }
    ctx->pc = 0x313BC8u;
label_313bc8:
    // 0x313bc8: 0x8f86a2c0  lw          $a2, -0x5D40($gp)
    ctx->pc = 0x313bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943424)));
label_313bcc:
    // 0x313bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313bd0:
    // 0x313bd0: 0xc0a1264  jal         func_284990
label_313bd4:
    if (ctx->pc == 0x313BD4u) {
        ctx->pc = 0x313BD4u;
            // 0x313bd4: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->pc = 0x313BD8u;
        goto label_313bd8;
    }
    ctx->pc = 0x313BD0u;
    SET_GPR_U32(ctx, 31, 0x313BD8u);
    ctx->pc = 0x313BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313BD0u;
            // 0x313bd4: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284990u;
    if (runtime->hasFunction(0x284990u)) {
        auto targetFn = runtime->lookupFunction(0x284990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313BD8u; }
        if (ctx->pc != 0x313BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaTexb__6CSceneFii_0x284990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313BD8u; }
        if (ctx->pc != 0x313BD8u) { return; }
    }
    ctx->pc = 0x313BD8u;
label_313bd8:
    // 0x313bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313bdc:
    // 0x313bdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x313bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_313be0:
    // 0x313be0: 0xc0a11b4  jal         func_2846D0
label_313be4:
    if (ctx->pc == 0x313BE4u) {
        ctx->pc = 0x313BE4u;
            // 0x313be4: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->pc = 0x313BE8u;
        goto label_313be8;
    }
    ctx->pc = 0x313BE0u;
    SET_GPR_U32(ctx, 31, 0x313BE8u);
    ctx->pc = 0x313BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313BE0u;
            // 0x313be4: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313BE8u; }
        if (ctx->pc != 0x313BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313BE8u; }
        if (ctx->pc != 0x313BE8u) { return; }
    }
    ctx->pc = 0x313BE8u;
label_313be8:
    // 0x313be8: 0x8f86a2c4  lw          $a2, -0x5D3C($gp)
    ctx->pc = 0x313be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943428)));
label_313bec:
    // 0x313bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313bf0:
    // 0x313bf0: 0xc0a1264  jal         func_284990
label_313bf4:
    if (ctx->pc == 0x313BF4u) {
        ctx->pc = 0x313BF4u;
            // 0x313bf4: 0x24050045  addiu       $a1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->pc = 0x313BF8u;
        goto label_313bf8;
    }
    ctx->pc = 0x313BF0u;
    SET_GPR_U32(ctx, 31, 0x313BF8u);
    ctx->pc = 0x313BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313BF0u;
            // 0x313bf4: 0x24050045  addiu       $a1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284990u;
    if (runtime->hasFunction(0x284990u)) {
        auto targetFn = runtime->lookupFunction(0x284990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313BF8u; }
        if (ctx->pc != 0x313BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaTexb__6CSceneFii_0x284990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313BF8u; }
        if (ctx->pc != 0x313BF8u) { return; }
    }
    ctx->pc = 0x313BF8u;
label_313bf8:
    // 0x313bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313bfc:
    // 0x313bfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x313bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_313c00:
    // 0x313c00: 0xc0a11b4  jal         func_2846D0
label_313c04:
    if (ctx->pc == 0x313C04u) {
        ctx->pc = 0x313C04u;
            // 0x313c04: 0x24060046  addiu       $a2, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x313C08u;
        goto label_313c08;
    }
    ctx->pc = 0x313C00u;
    SET_GPR_U32(ctx, 31, 0x313C08u);
    ctx->pc = 0x313C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313C00u;
            // 0x313c04: 0x24060046  addiu       $a2, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313C08u; }
        if (ctx->pc != 0x313C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313C08u; }
        if (ctx->pc != 0x313C08u) { return; }
    }
    ctx->pc = 0x313C08u;
label_313c08:
    // 0x313c08: 0x8f86a2c4  lw          $a2, -0x5D3C($gp)
    ctx->pc = 0x313c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943428)));
label_313c0c:
    // 0x313c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313c10:
    // 0x313c10: 0xc0a1264  jal         func_284990
label_313c14:
    if (ctx->pc == 0x313C14u) {
        ctx->pc = 0x313C14u;
            // 0x313c14: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x313C18u;
        goto label_313c18;
    }
    ctx->pc = 0x313C10u;
    SET_GPR_U32(ctx, 31, 0x313C18u);
    ctx->pc = 0x313C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313C10u;
            // 0x313c14: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284990u;
    if (runtime->hasFunction(0x284990u)) {
        auto targetFn = runtime->lookupFunction(0x284990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313C18u; }
        if (ctx->pc != 0x313C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaTexb__6CSceneFii_0x284990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313C18u; }
        if (ctx->pc != 0x313C18u) { return; }
    }
    ctx->pc = 0x313C18u;
label_313c18:
    // 0x313c18: 0x8f83a284  lw          $v1, -0x5D7C($gp)
    ctx->pc = 0x313c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_313c1c:
    // 0x313c1c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_313c20:
    if (ctx->pc == 0x313C20u) {
        ctx->pc = 0x313C20u;
            // 0x313c20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313C24u;
        goto label_313c24;
    }
    ctx->pc = 0x313C1Cu;
    {
        const bool branch_taken_0x313c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x313C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313C1Cu;
            // 0x313c20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c1c) {
            ctx->pc = 0x313C40u;
            goto label_313c40;
        }
    }
    ctx->pc = 0x313C24u;
label_313c24:
    // 0x313c24: 0x8f84a288  lw          $a0, -0x5D78($gp)
    ctx->pc = 0x313c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943368)));
label_313c28:
    // 0x313c28: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_313c2c:
    if (ctx->pc == 0x313C2Cu) {
        ctx->pc = 0x313C30u;
        goto label_313c30;
    }
    ctx->pc = 0x313C28u;
    {
        const bool branch_taken_0x313c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x313c28) {
            ctx->pc = 0x313C3Cu;
            goto label_313c3c;
        }
    }
    ctx->pc = 0x313C30u;
label_313c30:
    // 0x313c30: 0x8f85a28c  lw          $a1, -0x5D74($gp)
    ctx->pc = 0x313c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943372)));
label_313c34:
    // 0x313c34: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_313c38:
    if (ctx->pc == 0x313C38u) {
        ctx->pc = 0x313C3Cu;
        goto label_313c3c;
    }
    ctx->pc = 0x313C34u;
    {
        const bool branch_taken_0x313c34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x313c34) {
            ctx->pc = 0x313C48u;
            goto label_313c48;
        }
    }
    ctx->pc = 0x313C3Cu;
label_313c3c:
    // 0x313c3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313c40:
    // 0x313c40: 0x10000125  b           . + 4 + (0x125 << 2)
label_313c44:
    if (ctx->pc == 0x313C44u) {
        ctx->pc = 0x313C44u;
            // 0x313c44: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x313C48u;
        goto label_313c48;
    }
    ctx->pc = 0x313C40u;
    {
        const bool branch_taken_0x313c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313C40u;
            // 0x313c44: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c40) {
            ctx->pc = 0x3140D8u;
            goto label_3140d8;
        }
    }
    ctx->pc = 0x313C48u;
label_313c48:
    // 0x313c48: 0x8f82a290  lw          $v0, -0x5D70($gp)
    ctx->pc = 0x313c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_313c4c:
    // 0x313c4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_313c50:
    if (ctx->pc == 0x313C50u) {
        ctx->pc = 0x313C50u;
            // 0x313c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313C54u;
        goto label_313c54;
    }
    ctx->pc = 0x313C4Cu;
    {
        const bool branch_taken_0x313c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313C4Cu;
            // 0x313c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c4c) {
            ctx->pc = 0x313C64u;
            goto label_313c64;
        }
    }
    ctx->pc = 0x313C54u;
label_313c54:
    // 0x313c54: 0x8f82a294  lw          $v0, -0x5D6C($gp)
    ctx->pc = 0x313c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943380)));
label_313c58:
    // 0x313c58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_313c5c:
    if (ctx->pc == 0x313C5Cu) {
        ctx->pc = 0x313C60u;
        goto label_313c60;
    }
    ctx->pc = 0x313C58u;
    {
        const bool branch_taken_0x313c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313c58) {
            ctx->pc = 0x313C6Cu;
            goto label_313c6c;
        }
    }
    ctx->pc = 0x313C60u;
label_313c60:
    // 0x313c60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313c64:
    // 0x313c64: 0x1000011b  b           . + 4 + (0x11B << 2)
label_313c68:
    if (ctx->pc == 0x313C68u) {
        ctx->pc = 0x313C6Cu;
        goto label_313c6c;
    }
    ctx->pc = 0x313C64u;
    {
        const bool branch_taken_0x313c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313c64) {
            ctx->pc = 0x3140D4u;
            goto label_3140d4;
        }
    }
    ctx->pc = 0x313C6Cu;
label_313c6c:
    // 0x313c6c: 0x8f86a298  lw          $a2, -0x5D68($gp)
    ctx->pc = 0x313c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943384)));
label_313c70:
    // 0x313c70: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_313c74:
    if (ctx->pc == 0x313C74u) {
        ctx->pc = 0x313C74u;
            // 0x313c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313C78u;
        goto label_313c78;
    }
    ctx->pc = 0x313C70u;
    {
        const bool branch_taken_0x313c70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x313C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313C70u;
            // 0x313c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c70) {
            ctx->pc = 0x313C88u;
            goto label_313c88;
        }
    }
    ctx->pc = 0x313C78u;
label_313c78:
    // 0x313c78: 0x8f82a29c  lw          $v0, -0x5D64($gp)
    ctx->pc = 0x313c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943388)));
label_313c7c:
    // 0x313c7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_313c80:
    if (ctx->pc == 0x313C80u) {
        ctx->pc = 0x313C84u;
        goto label_313c84;
    }
    ctx->pc = 0x313C7Cu;
    {
        const bool branch_taken_0x313c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313c7c) {
            ctx->pc = 0x313C90u;
            goto label_313c90;
        }
    }
    ctx->pc = 0x313C84u;
label_313c84:
    // 0x313c84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313c88:
    // 0x313c88: 0x10000112  b           . + 4 + (0x112 << 2)
label_313c8c:
    if (ctx->pc == 0x313C8Cu) {
        ctx->pc = 0x313C90u;
        goto label_313c90;
    }
    ctx->pc = 0x313C88u;
    {
        const bool branch_taken_0x313c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313c88) {
            ctx->pc = 0x3140D4u;
            goto label_3140d4;
        }
    }
    ctx->pc = 0x313C90u;
label_313c90:
    // 0x313c90: 0x8c740070  lw          $s4, 0x70($v1)
    ctx->pc = 0x313c90u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_313c94:
    // 0x313c94: 0x8cb70070  lw          $s7, 0x70($a1)
    ctx->pc = 0x313c94u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_313c98:
    // 0x313c98: 0x8cd20070  lw          $s2, 0x70($a2)
    ctx->pc = 0x313c98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
label_313c9c:
    // 0x313c9c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_313ca0:
    if (ctx->pc == 0x313CA0u) {
        ctx->pc = 0x313CA0u;
            // 0x313ca0: 0x8c9e0070  lw          $fp, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->pc = 0x313CA4u;
        goto label_313ca4;
    }
    ctx->pc = 0x313C9Cu;
    {
        const bool branch_taken_0x313c9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x313CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313C9Cu;
            // 0x313ca0: 0x8c9e0070  lw          $fp, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c9c) {
            ctx->pc = 0x313CBCu;
            goto label_313cbc;
        }
    }
    ctx->pc = 0x313CA4u;
label_313ca4:
    // 0x313ca4: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
label_313ca8:
    if (ctx->pc == 0x313CA8u) {
        ctx->pc = 0x313CA8u;
            // 0x313ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313CACu;
        goto label_313cac;
    }
    ctx->pc = 0x313CA4u;
    {
        const bool branch_taken_0x313ca4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x313CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313CA4u;
            // 0x313ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ca4) {
            ctx->pc = 0x313CC0u;
            goto label_313cc0;
        }
    }
    ctx->pc = 0x313CACu;
label_313cac:
    // 0x313cac: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_313cb0:
    if (ctx->pc == 0x313CB0u) {
        ctx->pc = 0x313CB4u;
        goto label_313cb4;
    }
    ctx->pc = 0x313CACu;
    {
        const bool branch_taken_0x313cac = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x313cac) {
            ctx->pc = 0x313CBCu;
            goto label_313cbc;
        }
    }
    ctx->pc = 0x313CB4u;
label_313cb4:
    // 0x313cb4: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_313cb8:
    if (ctx->pc == 0x313CB8u) {
        ctx->pc = 0x313CB8u;
            // 0x313cb8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x313CBCu;
        goto label_313cbc;
    }
    ctx->pc = 0x313CB4u;
    {
        const bool branch_taken_0x313cb4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x313CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313CB4u;
            // 0x313cb8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313cb4) {
            ctx->pc = 0x313CC8u;
            goto label_313cc8;
        }
    }
    ctx->pc = 0x313CBCu;
label_313cbc:
    // 0x313cbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313cbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313cc0:
    // 0x313cc0: 0x10000104  b           . + 4 + (0x104 << 2)
label_313cc4:
    if (ctx->pc == 0x313CC4u) {
        ctx->pc = 0x313CC8u;
        goto label_313cc8;
    }
    ctx->pc = 0x313CC0u;
    {
        const bool branch_taken_0x313cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313cc0) {
            ctx->pc = 0x3140D4u;
            goto label_3140d4;
        }
    }
    ctx->pc = 0x313CC8u;
label_313cc8:
    // 0x313cc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x313cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_313ccc:
    // 0x313ccc: 0xc04ddb4  jal         func_1376D0
label_313cd0:
    if (ctx->pc == 0x313CD0u) {
        ctx->pc = 0x313CD0u;
            // 0x313cd0: 0x24a52758  addiu       $a1, $a1, 0x2758 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10072));
        ctx->pc = 0x313CD4u;
        goto label_313cd4;
    }
    ctx->pc = 0x313CCCu;
    SET_GPR_U32(ctx, 31, 0x313CD4u);
    ctx->pc = 0x313CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313CCCu;
            // 0x313cd0: 0x24a52758  addiu       $a1, $a1, 0x2758 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313CD4u; }
        if (ctx->pc != 0x313CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313CD4u; }
        if (ctx->pc != 0x313CD4u) { return; }
    }
    ctx->pc = 0x313CD4u;
label_313cd4:
    // 0x313cd4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x313cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_313cd8:
    // 0x313cd8: 0xc04db0c  jal         func_136C30
label_313cdc:
    if (ctx->pc == 0x313CDCu) {
        ctx->pc = 0x313CDCu;
            // 0x313cdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313CE0u;
        goto label_313ce0;
    }
    ctx->pc = 0x313CD8u;
    SET_GPR_U32(ctx, 31, 0x313CE0u);
    ctx->pc = 0x313CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313CD8u;
            // 0x313cdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313CE0u; }
        if (ctx->pc != 0x313CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313CE0u; }
        if (ctx->pc != 0x313CE0u) { return; }
    }
    ctx->pc = 0x313CE0u;
label_313ce0:
    // 0x313ce0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x313ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_313ce4:
    // 0x313ce4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x313ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_313ce8:
    // 0x313ce8: 0xc04ddb4  jal         func_1376D0
label_313cec:
    if (ctx->pc == 0x313CECu) {
        ctx->pc = 0x313CECu;
            // 0x313cec: 0x24a52768  addiu       $a1, $a1, 0x2768 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10088));
        ctx->pc = 0x313CF0u;
        goto label_313cf0;
    }
    ctx->pc = 0x313CE8u;
    SET_GPR_U32(ctx, 31, 0x313CF0u);
    ctx->pc = 0x313CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313CE8u;
            // 0x313cec: 0x24a52768  addiu       $a1, $a1, 0x2768 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313CF0u; }
        if (ctx->pc != 0x313CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313CF0u; }
        if (ctx->pc != 0x313CF0u) { return; }
    }
    ctx->pc = 0x313CF0u;
label_313cf0:
    // 0x313cf0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x313cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_313cf4:
    // 0x313cf4: 0xc04db0c  jal         func_136C30
label_313cf8:
    if (ctx->pc == 0x313CF8u) {
        ctx->pc = 0x313CF8u;
            // 0x313cf8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313CFCu;
        goto label_313cfc;
    }
    ctx->pc = 0x313CF4u;
    SET_GPR_U32(ctx, 31, 0x313CFCu);
    ctx->pc = 0x313CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313CF4u;
            // 0x313cf8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313CFCu; }
        if (ctx->pc != 0x313CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313CFCu; }
        if (ctx->pc != 0x313CFCu) { return; }
    }
    ctx->pc = 0x313CFCu;
label_313cfc:
    // 0x313cfc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x313cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_313d00:
    // 0x313d00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x313d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_313d04:
    // 0x313d04: 0xc04ddb4  jal         func_1376D0
label_313d08:
    if (ctx->pc == 0x313D08u) {
        ctx->pc = 0x313D08u;
            // 0x313d08: 0x24a52778  addiu       $a1, $a1, 0x2778 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10104));
        ctx->pc = 0x313D0Cu;
        goto label_313d0c;
    }
    ctx->pc = 0x313D04u;
    SET_GPR_U32(ctx, 31, 0x313D0Cu);
    ctx->pc = 0x313D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313D04u;
            // 0x313d08: 0x24a52778  addiu       $a1, $a1, 0x2778 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313D0Cu; }
        if (ctx->pc != 0x313D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313D0Cu; }
        if (ctx->pc != 0x313D0Cu) { return; }
    }
    ctx->pc = 0x313D0Cu;
label_313d0c:
    // 0x313d0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x313d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313d10:
    // 0x313d10: 0xc04db0c  jal         func_136C30
label_313d14:
    if (ctx->pc == 0x313D14u) {
        ctx->pc = 0x313D14u;
            // 0x313d14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313D18u;
        goto label_313d18;
    }
    ctx->pc = 0x313D10u;
    SET_GPR_U32(ctx, 31, 0x313D18u);
    ctx->pc = 0x313D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313D10u;
            // 0x313d14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313D18u; }
        if (ctx->pc != 0x313D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313D18u; }
        if (ctx->pc != 0x313D18u) { return; }
    }
    ctx->pc = 0x313D18u;
label_313d18:
    // 0x313d18: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x313d18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_313d1c:
    // 0x313d1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x313d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_313d20:
    // 0x313d20: 0xc04ddb4  jal         func_1376D0
label_313d24:
    if (ctx->pc == 0x313D24u) {
        ctx->pc = 0x313D24u;
            // 0x313d24: 0x24a52780  addiu       $a1, $a1, 0x2780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10112));
        ctx->pc = 0x313D28u;
        goto label_313d28;
    }
    ctx->pc = 0x313D20u;
    SET_GPR_U32(ctx, 31, 0x313D28u);
    ctx->pc = 0x313D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313D20u;
            // 0x313d24: 0x24a52780  addiu       $a1, $a1, 0x2780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313D28u; }
        if (ctx->pc != 0x313D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313D28u; }
        if (ctx->pc != 0x313D28u) { return; }
    }
    ctx->pc = 0x313D28u;
label_313d28:
    // 0x313d28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_313d2c:
    if (ctx->pc == 0x313D2Cu) {
        ctx->pc = 0x313D2Cu;
            // 0x313d2c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x313D30u;
        goto label_313d30;
    }
    ctx->pc = 0x313D28u;
    {
        const bool branch_taken_0x313d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313D28u;
            // 0x313d2c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d28) {
            ctx->pc = 0x313D38u;
            goto label_313d38;
        }
    }
    ctx->pc = 0x313D30u;
label_313d30:
    // 0x313d30: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x313d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_313d34:
    // 0x313d34: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x313d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_313d38:
    // 0x313d38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x313d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_313d3c:
    // 0x313d3c: 0xc04ddb4  jal         func_1376D0
label_313d40:
    if (ctx->pc == 0x313D40u) {
        ctx->pc = 0x313D40u;
            // 0x313d40: 0x24a52788  addiu       $a1, $a1, 0x2788 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10120));
        ctx->pc = 0x313D44u;
        goto label_313d44;
    }
    ctx->pc = 0x313D3Cu;
    SET_GPR_U32(ctx, 31, 0x313D44u);
    ctx->pc = 0x313D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313D3Cu;
            // 0x313d40: 0x24a52788  addiu       $a1, $a1, 0x2788 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313D44u; }
        if (ctx->pc != 0x313D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313D44u; }
        if (ctx->pc != 0x313D44u) { return; }
    }
    ctx->pc = 0x313D44u;
label_313d44:
    // 0x313d44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_313d48:
    if (ctx->pc == 0x313D48u) {
        ctx->pc = 0x313D48u;
            // 0x313d48: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x313D4Cu;
        goto label_313d4c;
    }
    ctx->pc = 0x313D44u;
    {
        const bool branch_taken_0x313d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313D44u;
            // 0x313d48: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d44) {
            ctx->pc = 0x313D54u;
            goto label_313d54;
        }
    }
    ctx->pc = 0x313D4Cu;
label_313d4c:
    // 0x313d4c: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x313d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_313d50:
    // 0x313d50: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x313d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_313d54:
    // 0x313d54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x313d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_313d58:
    // 0x313d58: 0x24a52790  addiu       $a1, $a1, 0x2790
    ctx->pc = 0x313d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10128));
label_313d5c:
    // 0x313d5c: 0xc052734  jal         func_149CD0
label_313d60:
    if (ctx->pc == 0x313D60u) {
        ctx->pc = 0x313D60u;
            // 0x313d60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313D64u;
        goto label_313d64;
    }
    ctx->pc = 0x313D5Cu;
    SET_GPR_U32(ctx, 31, 0x313D64u);
    ctx->pc = 0x313D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313D5Cu;
            // 0x313d60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313D64u; }
        if (ctx->pc != 0x313D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313D64u; }
        if (ctx->pc != 0x313D64u) { return; }
    }
    ctx->pc = 0x313D64u;
label_313d64:
    // 0x313d64: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_313d68:
    if (ctx->pc == 0x313D68u) {
        ctx->pc = 0x313D68u;
            // 0x313d68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313D6Cu;
        goto label_313d6c;
    }
    ctx->pc = 0x313D64u;
    {
        const bool branch_taken_0x313d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313D64u;
            // 0x313d68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d64) {
            ctx->pc = 0x313DA0u;
            goto label_313da0;
        }
    }
    ctx->pc = 0x313D6Cu;
label_313d6c:
    // 0x313d6c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x313d6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_313d70:
    // 0x313d70: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x313d70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_313d74:
    // 0x313d74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x313d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313d78:
    // 0x313d78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x313d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_313d7c:
    // 0x313d7c: 0x24c62718  addiu       $a2, $a2, 0x2718
    ctx->pc = 0x313d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10008));
label_313d80:
    // 0x313d80: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x313d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_313d84:
    // 0x313d84: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x313d84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_313d88:
    // 0x313d88: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x313d88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_313d8c:
    // 0x313d8c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x313d8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313d90:
    // 0x313d90: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x313d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_313d94:
    // 0x313d94: 0x320f809  jalr        $t9
label_313d98:
    if (ctx->pc == 0x313D98u) {
        ctx->pc = 0x313D98u;
            // 0x313d98: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313D9Cu;
        goto label_313d9c;
    }
    ctx->pc = 0x313D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x313D9Cu);
        ctx->pc = 0x313D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313D94u;
            // 0x313d98: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x313D9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x313D9Cu; }
            if (ctx->pc != 0x313D9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x313D9Cu;
label_313d9c:
    // 0x313d9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x313d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_313da0:
    // 0x313da0: 0xc04e780  jal         func_139E00
label_313da4:
    if (ctx->pc == 0x313DA4u) {
        ctx->pc = 0x313DA8u;
        goto label_313da8;
    }
    ctx->pc = 0x313DA0u;
    SET_GPR_U32(ctx, 31, 0x313DA8u);
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313DA8u; }
        if (ctx->pc != 0x313DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313DA8u; }
        if (ctx->pc != 0x313DA8u) { return; }
    }
    ctx->pc = 0x313DA8u;
label_313da8:
    // 0x313da8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x313da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_313dac:
    // 0x313dac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x313dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_313db0:
    // 0x313db0: 0x24a527a0  addiu       $a1, $a1, 0x27A0
    ctx->pc = 0x313db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10144));
label_313db4:
    // 0x313db4: 0xc052734  jal         func_149CD0
label_313db8:
    if (ctx->pc == 0x313DB8u) {
        ctx->pc = 0x313DB8u;
            // 0x313db8: 0x27a600bc  addiu       $a2, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->pc = 0x313DBCu;
        goto label_313dbc;
    }
    ctx->pc = 0x313DB4u;
    SET_GPR_U32(ctx, 31, 0x313DBCu);
    ctx->pc = 0x313DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313DB4u;
            // 0x313db8: 0x27a600bc  addiu       $a2, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313DBCu; }
        if (ctx->pc != 0x313DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313DBCu; }
        if (ctx->pc != 0x313DBCu) { return; }
    }
    ctx->pc = 0x313DBCu;
label_313dbc:
    // 0x313dbc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_313dc0:
    if (ctx->pc == 0x313DC0u) {
        ctx->pc = 0x313DC0u;
            // 0x313dc0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313DC4u;
        goto label_313dc4;
    }
    ctx->pc = 0x313DBCu;
    {
        const bool branch_taken_0x313dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313DBCu;
            // 0x313dc0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313dbc) {
            ctx->pc = 0x313E18u;
            goto label_313e18;
        }
    }
    ctx->pc = 0x313DC4u;
label_313dc4:
    // 0x313dc4: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x313dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_313dc8:
    // 0x313dc8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x313dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_313dcc:
    // 0x313dcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_313dd0:
    if (ctx->pc == 0x313DD0u) {
        ctx->pc = 0x313DD0u;
            // 0x313dd0: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x313DD4u;
        goto label_313dd4;
    }
    ctx->pc = 0x313DCCu;
    {
        const bool branch_taken_0x313dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313DCCu;
            // 0x313dd0: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313dcc) {
            ctx->pc = 0x313DDCu;
            goto label_313ddc;
        }
    }
    ctx->pc = 0x313DD4u;
label_313dd4:
    // 0x313dd4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x313dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_313dd8:
    // 0x313dd8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x313dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_313ddc:
    // 0x313ddc: 0xc04e748  jal         func_139D20
label_313de0:
    if (ctx->pc == 0x313DE0u) {
        ctx->pc = 0x313DE0u;
            // 0x313de0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313DE4u;
        goto label_313de4;
    }
    ctx->pc = 0x313DDCu;
    SET_GPR_U32(ctx, 31, 0x313DE4u);
    ctx->pc = 0x313DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313DDCu;
            // 0x313de0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313DE4u; }
        if (ctx->pc != 0x313DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313DE4u; }
        if (ctx->pc != 0x313DE4u) { return; }
    }
    ctx->pc = 0x313DE4u;
label_313de4:
    // 0x313de4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x313de4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313de8:
    // 0x313de8: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_313dec:
    if (ctx->pc == 0x313DECu) {
        ctx->pc = 0x313DECu;
            // 0x313dec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313DF0u;
        goto label_313df0;
    }
    ctx->pc = 0x313DE8u;
    {
        const bool branch_taken_0x313de8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x313DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313DE8u;
            // 0x313dec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313de8) {
            ctx->pc = 0x313E1Cu;
            goto label_313e1c;
        }
    }
    ctx->pc = 0x313DF0u;
label_313df0:
    // 0x313df0: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x313df0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_313df4:
    // 0x313df4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x313df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_313df8:
    // 0x313df8: 0xc049c18  jal         func_127060
label_313dfc:
    if (ctx->pc == 0x313DFCu) {
        ctx->pc = 0x313DFCu;
            // 0x313dfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313E00u;
        goto label_313e00;
    }
    ctx->pc = 0x313DF8u;
    SET_GPR_U32(ctx, 31, 0x313E00u);
    ctx->pc = 0x313DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313DF8u;
            // 0x313dfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E00u; }
        if (ctx->pc != 0x313E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E00u; }
        if (ctx->pc != 0x313E00u) { return; }
    }
    ctx->pc = 0x313E00u;
label_313e00:
    // 0x313e00: 0x8f86a2c8  lw          $a2, -0x5D38($gp)
    ctx->pc = 0x313e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943432)));
label_313e04:
    // 0x313e04: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x313e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_313e08:
    // 0x313e08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x313e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_313e0c:
    // 0x313e0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x313e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313e10:
    // 0x313e10: 0xc04b6a4  jal         func_12DA90
label_313e14:
    if (ctx->pc == 0x313E14u) {
        ctx->pc = 0x313E14u;
            // 0x313e14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313E18u;
        goto label_313e18;
    }
    ctx->pc = 0x313E10u;
    SET_GPR_U32(ctx, 31, 0x313E18u);
    ctx->pc = 0x313E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313E10u;
            // 0x313e14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E18u; }
        if (ctx->pc != 0x313E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E18u; }
        if (ctx->pc != 0x313E18u) { return; }
    }
    ctx->pc = 0x313E18u;
label_313e18:
    // 0x313e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x313e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_313e1c:
    // 0x313e1c: 0xc04e748  jal         func_139D20
label_313e20:
    if (ctx->pc == 0x313E20u) {
        ctx->pc = 0x313E20u;
            // 0x313e20: 0x2405011b  addiu       $a1, $zero, 0x11B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
        ctx->pc = 0x313E24u;
        goto label_313e24;
    }
    ctx->pc = 0x313E1Cu;
    SET_GPR_U32(ctx, 31, 0x313E24u);
    ctx->pc = 0x313E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313E1Cu;
            // 0x313e20: 0x2405011b  addiu       $a1, $zero, 0x11B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E24u; }
        if (ctx->pc != 0x313E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E24u; }
        if (ctx->pc != 0x313E24u) { return; }
    }
    ctx->pc = 0x313E24u;
label_313e24:
    // 0x313e24: 0x24041190  addiu       $a0, $zero, 0x1190
    ctx->pc = 0x313e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4496));
label_313e28:
    // 0x313e28: 0xc04e638  jal         func_1398E0
label_313e2c:
    if (ctx->pc == 0x313E2Cu) {
        ctx->pc = 0x313E2Cu;
            // 0x313e2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313E30u;
        goto label_313e30;
    }
    ctx->pc = 0x313E28u;
    SET_GPR_U32(ctx, 31, 0x313E30u);
    ctx->pc = 0x313E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313E28u;
            // 0x313e2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E30u; }
        if (ctx->pc != 0x313E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E30u; }
        if (ctx->pc != 0x313E30u) { return; }
    }
    ctx->pc = 0x313E30u;
label_313e30:
    // 0x313e30: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_313e34:
    if (ctx->pc == 0x313E34u) {
        ctx->pc = 0x313E34u;
            // 0x313e34: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313E38u;
        goto label_313e38;
    }
    ctx->pc = 0x313E30u;
    {
        const bool branch_taken_0x313e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313E30u;
            // 0x313e34: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e30) {
            ctx->pc = 0x313E84u;
            goto label_313e84;
        }
    }
    ctx->pc = 0x313E38u;
label_313e38:
    // 0x313e38: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x313e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_313e3c:
    // 0x313e3c: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x313e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_313e40:
    // 0x313e40: 0xae42004c  sw          $v0, 0x4C($s2)
    ctx->pc = 0x313e40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
label_313e44:
    // 0x313e44: 0x8e59004c  lw          $t9, 0x4C($s2)
    ctx->pc = 0x313e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_313e48:
    // 0x313e48: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x313e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_313e4c:
    // 0x313e4c: 0x320f809  jalr        $t9
label_313e50:
    if (ctx->pc == 0x313E50u) {
        ctx->pc = 0x313E50u;
            // 0x313e50: 0x26440030  addiu       $a0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x313E54u;
        goto label_313e54;
    }
    ctx->pc = 0x313E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x313E54u);
        ctx->pc = 0x313E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313E4Cu;
            // 0x313e50: 0x26440030  addiu       $a0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x313E54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x313E54u; }
            if (ctx->pc != 0x313E54u) { return; }
        }
        }
    }
    ctx->pc = 0x313E54u;
label_313e54:
    // 0x313e54: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x313e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_313e58:
    // 0x313e58: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x313e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_313e5c:
    // 0x313e5c: 0xae42004c  sw          $v0, 0x4C($s2)
    ctx->pc = 0x313e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
label_313e60:
    // 0x313e60: 0x8e59004c  lw          $t9, 0x4C($s2)
    ctx->pc = 0x313e60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_313e64:
    // 0x313e64: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x313e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_313e68:
    // 0x313e68: 0x320f809  jalr        $t9
label_313e6c:
    if (ctx->pc == 0x313E6Cu) {
        ctx->pc = 0x313E6Cu;
            // 0x313e6c: 0x26440030  addiu       $a0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x313E70u;
        goto label_313e70;
    }
    ctx->pc = 0x313E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x313E70u);
        ctx->pc = 0x313E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313E68u;
            // 0x313e6c: 0x26440030  addiu       $a0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x313E70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x313E70u; }
            if (ctx->pc != 0x313E70u) { return; }
        }
        }
    }
    ctx->pc = 0x313E70u;
label_313e70:
    // 0x313e70: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x313e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_313e74:
    // 0x313e74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x313e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_313e78:
    // 0x313e78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313e7c:
    // 0x313e7c: 0xc0b7f78  jal         func_2DFDE0
label_313e80:
    if (ctx->pc == 0x313E80u) {
        ctx->pc = 0x313E80u;
            // 0x313e80: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313E84u;
        goto label_313e84;
    }
    ctx->pc = 0x313E7Cu;
    SET_GPR_U32(ctx, 31, 0x313E84u);
    ctx->pc = 0x313E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313E7Cu;
            // 0x313e80: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFDE0u;
    if (runtime->hasFunction(0x2DFDE0u)) {
        auto targetFn = runtime->lookupFunction(0x2DFDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E84u; }
        if (ctx->pc != 0x313E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__16CEffectScriptManFP9mgCMemoryii_0x2dfde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E84u; }
        if (ctx->pc != 0x313E84u) { return; }
    }
    ctx->pc = 0x313E84u;
label_313e84:
    // 0x313e84: 0x8f86a2b4  lw          $a2, -0x5D4C($gp)
    ctx->pc = 0x313e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943412)));
label_313e88:
    // 0x313e88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x313e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_313e8c:
    // 0x313e8c: 0x8f87a2b8  lw          $a3, -0x5D48($gp)
    ctx->pc = 0x313e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943416)));
label_313e90:
    // 0x313e90: 0xc0b7f78  jal         func_2DFDE0
label_313e94:
    if (ctx->pc == 0x313E94u) {
        ctx->pc = 0x313E94u;
            // 0x313e94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313E98u;
        goto label_313e98;
    }
    ctx->pc = 0x313E90u;
    SET_GPR_U32(ctx, 31, 0x313E98u);
    ctx->pc = 0x313E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313E90u;
            // 0x313e94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFDE0u;
    if (runtime->hasFunction(0x2DFDE0u)) {
        auto targetFn = runtime->lookupFunction(0x2DFDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E98u; }
        if (ctx->pc != 0x313E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__16CEffectScriptManFP9mgCMemoryii_0x2dfde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E98u; }
        if (ctx->pc != 0x313E98u) { return; }
    }
    ctx->pc = 0x313E98u;
label_313e98:
    // 0x313e98: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x313e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_313e9c:
    // 0x313e9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x313e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_313ea0:
    // 0x313ea0: 0x24a5f950  addiu       $a1, $a1, -0x6B0
    ctx->pc = 0x313ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965584));
label_313ea4:
    // 0x313ea4: 0xc0b7fc4  jal         func_2DFF10
label_313ea8:
    if (ctx->pc == 0x313EA8u) {
        ctx->pc = 0x313EA8u;
            // 0x313ea8: 0xae530008  sw          $s3, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
        ctx->pc = 0x313EACu;
        goto label_313eac;
    }
    ctx->pc = 0x313EA4u;
    SET_GPR_U32(ctx, 31, 0x313EACu);
    ctx->pc = 0x313EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313EA4u;
            // 0x313ea8: 0xae530008  sw          $s3, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF10u;
    if (runtime->hasFunction(0x2DFF10u)) {
        auto targetFn = runtime->lookupFunction(0x2DFF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313EACu; }
        if (ctx->pc != 0x313EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWorkBuffer__16CEffectScriptManFP9mgCMemory_0x2dff10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313EACu; }
        if (ctx->pc != 0x313EACu) { return; }
    }
    ctx->pc = 0x313EACu;
label_313eac:
    // 0x313eac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x313eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_313eb0:
    // 0x313eb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x313eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_313eb4:
    // 0x313eb4: 0x24a527b0  addiu       $a1, $a1, 0x27B0
    ctx->pc = 0x313eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10160));
label_313eb8:
    // 0x313eb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x313eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313ebc:
    // 0x313ebc: 0xc0b8040  jal         func_2E0100
label_313ec0:
    if (ctx->pc == 0x313EC0u) {
        ctx->pc = 0x313EC0u;
            // 0x313ec0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x313EC4u;
        goto label_313ec4;
    }
    ctx->pc = 0x313EBCu;
    SET_GPR_U32(ctx, 31, 0x313EC4u);
    ctx->pc = 0x313EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313EBCu;
            // 0x313ec0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0100u;
    if (runtime->hasFunction(0x2E0100u)) {
        auto targetFn = runtime->lookupFunction(0x2E0100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313EC4u; }
        if (ctx->pc != 0x313EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBaseEffSpt__16CEffectScriptManFPcP9mgCMemoryi_0x2e0100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313EC4u; }
        if (ctx->pc != 0x313EC4u) { return; }
    }
    ctx->pc = 0x313EC4u;
label_313ec4:
    // 0x313ec4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x313ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_313ec8:
    // 0x313ec8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x313ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_313ecc:
    // 0x313ecc: 0x24a527b8  addiu       $a1, $a1, 0x27B8
    ctx->pc = 0x313eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10168));
label_313ed0:
    // 0x313ed0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x313ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313ed4:
    // 0x313ed4: 0xc0b8040  jal         func_2E0100
label_313ed8:
    if (ctx->pc == 0x313ED8u) {
        ctx->pc = 0x313ED8u;
            // 0x313ed8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x313EDCu;
        goto label_313edc;
    }
    ctx->pc = 0x313ED4u;
    SET_GPR_U32(ctx, 31, 0x313EDCu);
    ctx->pc = 0x313ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313ED4u;
            // 0x313ed8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0100u;
    if (runtime->hasFunction(0x2E0100u)) {
        auto targetFn = runtime->lookupFunction(0x2E0100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313EDCu; }
        if (ctx->pc != 0x313EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBaseEffSpt__16CEffectScriptManFPcP9mgCMemoryi_0x2e0100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313EDCu; }
        if (ctx->pc != 0x313EDCu) { return; }
    }
    ctx->pc = 0x313EDCu;
label_313edc:
    // 0x313edc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x313edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_313ee0:
    // 0x313ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313ee4:
    // 0x313ee4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x313ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_313ee8:
    // 0x313ee8: 0xc0a1128  jal         func_2844A0
label_313eec:
    if (ctx->pc == 0x313EECu) {
        ctx->pc = 0x313EECu;
            // 0x313eec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313EF0u;
        goto label_313ef0;
    }
    ctx->pc = 0x313EE8u;
    SET_GPR_U32(ctx, 31, 0x313EF0u);
    ctx->pc = 0x313EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313EE8u;
            // 0x313eec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2844A0u;
    if (runtime->hasFunction(0x2844A0u)) {
        auto targetFn = runtime->lookupFunction(0x2844A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313EF0u; }
        if (ctx->pc != 0x313EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignEffect__6CSceneFiP16CEffectScriptManPc_0x2844a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313EF0u; }
        if (ctx->pc != 0x313EF0u) { return; }
    }
    ctx->pc = 0x313EF0u;
label_313ef0:
    // 0x313ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313ef4:
    // 0x313ef4: 0xc0a1150  jal         func_284540
label_313ef8:
    if (ctx->pc == 0x313EF8u) {
        ctx->pc = 0x313EF8u;
            // 0x313ef8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x313EFCu;
        goto label_313efc;
    }
    ctx->pc = 0x313EF4u;
    SET_GPR_U32(ctx, 31, 0x313EFCu);
    ctx->pc = 0x313EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313EF4u;
            // 0x313ef8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284540u;
    if (runtime->hasFunction(0x284540u)) {
        auto targetFn = runtime->lookupFunction(0x284540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313EFCu; }
        if (ctx->pc != 0x313EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffect__6CSceneFi_0x284540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313EFCu; }
        if (ctx->pc != 0x313EFCu) { return; }
    }
    ctx->pc = 0x313EFCu;
label_313efc:
    // 0x313efc: 0xaf82a2cc  sw          $v0, -0x5D34($gp)
    ctx->pc = 0x313efcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943436), GPR_U32(ctx, 2));
label_313f00:
    // 0x313f00: 0x8f82a2cc  lw          $v0, -0x5D34($gp)
    ctx->pc = 0x313f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943436)));
label_313f04:
    // 0x313f04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_313f08:
    if (ctx->pc == 0x313F08u) {
        ctx->pc = 0x313F08u;
            // 0x313f08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x313F0Cu;
        goto label_313f0c;
    }
    ctx->pc = 0x313F04u;
    {
        const bool branch_taken_0x313f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313F04u;
            // 0x313f08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313f04) {
            ctx->pc = 0x313F14u;
            goto label_313f14;
        }
    }
    ctx->pc = 0x313F0Cu;
label_313f0c:
    // 0x313f0c: 0x10000071  b           . + 4 + (0x71 << 2)
label_313f10:
    if (ctx->pc == 0x313F10u) {
        ctx->pc = 0x313F10u;
            // 0x313f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313F14u;
        goto label_313f14;
    }
    ctx->pc = 0x313F0Cu;
    {
        const bool branch_taken_0x313f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313F0Cu;
            // 0x313f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313f0c) {
            ctx->pc = 0x3140D4u;
            goto label_3140d4;
        }
    }
    ctx->pc = 0x313F14u;
label_313f14:
    // 0x313f14: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x313f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_313f18:
    // 0x313f18: 0x248427d0  addiu       $a0, $a0, 0x27D0
    ctx->pc = 0x313f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10192));
label_313f1c:
    // 0x313f1c: 0xaf82a2d8  sw          $v0, -0x5D28($gp)
    ctx->pc = 0x313f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943448), GPR_U32(ctx, 2));
label_313f20:
    // 0x313f20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x313f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_313f24:
    // 0x313f24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x313f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313f28:
    // 0x313f28: 0xc0524dc  jal         func_149370
label_313f2c:
    if (ctx->pc == 0x313F2Cu) {
        ctx->pc = 0x313F2Cu;
            // 0x313f2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313F30u;
        goto label_313f30;
    }
    ctx->pc = 0x313F28u;
    SET_GPR_U32(ctx, 31, 0x313F30u);
    ctx->pc = 0x313F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313F28u;
            // 0x313f2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313F30u; }
        if (ctx->pc != 0x313F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313F30u; }
        if (ctx->pc != 0x313F30u) { return; }
    }
    ctx->pc = 0x313F30u;
label_313f30:
    // 0x313f30: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_313f34:
    if (ctx->pc == 0x313F34u) {
        ctx->pc = 0x313F34u;
            // 0x313f34: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313F38u;
        goto label_313f38;
    }
    ctx->pc = 0x313F30u;
    {
        const bool branch_taken_0x313f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313F30u;
            // 0x313f34: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313f30) {
            ctx->pc = 0x313F58u;
            goto label_313f58;
        }
    }
    ctx->pc = 0x313F38u;
label_313f38:
    // 0x313f38: 0xc06334c  jal         func_18CD30
label_313f3c:
    if (ctx->pc == 0x313F3Cu) {
        ctx->pc = 0x313F3Cu;
            // 0x313f3c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x313F40u;
        goto label_313f40;
    }
    ctx->pc = 0x313F38u;
    SET_GPR_U32(ctx, 31, 0x313F40u);
    ctx->pc = 0x313F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313F38u;
            // 0x313f3c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313F40u; }
        if (ctx->pc != 0x313F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313F40u; }
        if (ctx->pc != 0x313F40u) { return; }
    }
    ctx->pc = 0x313F40u;
label_313f40:
    // 0x313f40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x313f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_313f44:
    // 0x313f44: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x313f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_313f48:
    // 0x313f48: 0xc06368c  jal         func_18DA30
label_313f4c:
    if (ctx->pc == 0x313F4Cu) {
        ctx->pc = 0x313F4Cu;
            // 0x313f4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313F50u;
        goto label_313f50;
    }
    ctx->pc = 0x313F48u;
    SET_GPR_U32(ctx, 31, 0x313F50u);
    ctx->pc = 0x313F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313F48u;
            // 0x313f4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313F50u; }
        if (ctx->pc != 0x313F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313F50u; }
        if (ctx->pc != 0x313F50u) { return; }
    }
    ctx->pc = 0x313F50u;
label_313f50:
    // 0x313f50: 0xaf82a2d8  sw          $v0, -0x5D28($gp)
    ctx->pc = 0x313f50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943448), GPR_U32(ctx, 2));
label_313f54:
    // 0x313f54: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x313f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_313f58:
    // 0x313f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313f5c:
    // 0x313f5c: 0xc0a9be4  jal         func_2A6F90
label_313f60:
    if (ctx->pc == 0x313F60u) {
        ctx->pc = 0x313F60u;
            // 0x313f60: 0x240500bf  addiu       $a1, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->pc = 0x313F64u;
        goto label_313f64;
    }
    ctx->pc = 0x313F5Cu;
    SET_GPR_U32(ctx, 31, 0x313F64u);
    ctx->pc = 0x313F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313F5Cu;
            // 0x313f60: 0x240500bf  addiu       $a1, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313F64u; }
        if (ctx->pc != 0x313F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313F64u; }
        if (ctx->pc != 0x313F64u) { return; }
    }
    ctx->pc = 0x313F64u;
label_313f64:
    // 0x313f64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x313f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_313f68:
    // 0x313f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313f6c:
    // 0x313f6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x313f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_313f70:
    // 0x313f70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313f74:
    // 0x313f74: 0xc0a9844  jal         func_2A6110
label_313f78:
    if (ctx->pc == 0x313F78u) {
        ctx->pc = 0x313F78u;
            // 0x313f78: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x313F7Cu;
        goto label_313f7c;
    }
    ctx->pc = 0x313F74u;
    SET_GPR_U32(ctx, 31, 0x313F7Cu);
    ctx->pc = 0x313F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313F74u;
            // 0x313f78: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313F7Cu; }
        if (ctx->pc != 0x313F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313F7Cu; }
        if (ctx->pc != 0x313F7Cu) { return; }
    }
    ctx->pc = 0x313F7Cu;
label_313f7c:
    // 0x313f7c: 0xc0c54d4  jal         func_315350
label_313f80:
    if (ctx->pc == 0x313F80u) {
        ctx->pc = 0x313F80u;
            // 0x313f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313F84u;
        goto label_313f84;
    }
    ctx->pc = 0x313F7Cu;
    SET_GPR_U32(ctx, 31, 0x313F84u);
    ctx->pc = 0x313F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313F7Cu;
            // 0x313f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x315350u;
    if (runtime->hasFunction(0x315350u)) {
        auto targetFn = runtime->lookupFunction(0x315350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313F84u; }
        if (ctx->pc != 0x313F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitBuggy__FP6CScene_0x315350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313F84u; }
        if (ctx->pc != 0x313F84u) { return; }
    }
    ctx->pc = 0x313F84u;
label_313f84:
    // 0x313f84: 0xc0c5800  jal         func_316000
label_313f88:
    if (ctx->pc == 0x313F88u) {
        ctx->pc = 0x313F88u;
            // 0x313f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313F8Cu;
        goto label_313f8c;
    }
    ctx->pc = 0x313F84u;
    SET_GPR_U32(ctx, 31, 0x313F8Cu);
    ctx->pc = 0x313F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313F84u;
            // 0x313f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316000u;
    if (runtime->hasFunction(0x316000u)) {
        auto targetFn = runtime->lookupFunction(0x316000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313F8Cu; }
        if (ctx->pc != 0x313F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitBomb__FP6CScene_0x316000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313F8Cu; }
        if (ctx->pc != 0x313F8Cu) { return; }
    }
    ctx->pc = 0x313F8Cu;
label_313f8c:
    // 0x313f8c: 0xaf80a2e0  sw          $zero, -0x5D20($gp)
    ctx->pc = 0x313f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943456), GPR_U32(ctx, 0));
label_313f90:
    // 0x313f90: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x313f90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_313f94:
    // 0x313f94: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x313f94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_313f98:
    // 0x313f98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x313f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_313f9c:
    // 0x313f9c: 0x24a527e8  addiu       $a1, $a1, 0x27E8
    ctx->pc = 0x313f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10216));
label_313fa0:
    // 0x313fa0: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x313fa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_313fa4:
    // 0x313fa4: 0x320f809  jalr        $t9
label_313fa8:
    if (ctx->pc == 0x313FA8u) {
        ctx->pc = 0x313FA8u;
            // 0x313fa8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x313FACu;
        goto label_313fac;
    }
    ctx->pc = 0x313FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x313FACu);
        ctx->pc = 0x313FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313FA4u;
            // 0x313fa8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x313FACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x313FACu; }
            if (ctx->pc != 0x313FACu) { return; }
        }
        }
    }
    ctx->pc = 0x313FACu;
label_313fac:
    // 0x313fac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x313facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_313fb0:
    // 0x313fb0: 0x3c024306  lui         $v0, 0x4306
    ctx->pc = 0x313fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17158 << 16));
label_313fb4:
    // 0x313fb4: 0xaf83a2d0  sw          $v1, -0x5D30($gp)
    ctx->pc = 0x313fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943440), GPR_U32(ctx, 3));
label_313fb8:
    // 0x313fb8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x313fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_313fbc:
    // 0x313fbc: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x313fbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_313fc0:
    // 0x313fc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x313fc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_313fc4:
    // 0x313fc4: 0x3c02c3aa  lui         $v0, 0xC3AA
    ctx->pc = 0x313fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50090 << 16));
label_313fc8:
    // 0x313fc8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x313fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_313fcc:
    // 0x313fcc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x313fccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_313fd0:
    // 0x313fd0: 0x320f809  jalr        $t9
label_313fd4:
    if (ctx->pc == 0x313FD4u) {
        ctx->pc = 0x313FD4u;
            // 0x313fd4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313FD8u;
        goto label_313fd8;
    }
    ctx->pc = 0x313FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x313FD8u);
        ctx->pc = 0x313FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313FD0u;
            // 0x313fd4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x313FD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x313FD8u; }
            if (ctx->pc != 0x313FD8u) { return; }
        }
        }
    }
    ctx->pc = 0x313FD8u;
label_313fd8:
    // 0x313fd8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x313fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_313fdc:
    // 0x313fdc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x313fdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_313fe0:
    // 0x313fe0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x313fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_313fe4:
    // 0x313fe4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x313fe4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_313fe8:
    // 0x313fe8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x313fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_313fec:
    // 0x313fec: 0x320f809  jalr        $t9
label_313ff0:
    if (ctx->pc == 0x313FF0u) {
        ctx->pc = 0x313FF0u;
            // 0x313ff0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x313FF4u;
        goto label_313ff4;
    }
    ctx->pc = 0x313FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x313FF4u);
        ctx->pc = 0x313FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313FECu;
            // 0x313ff0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x313FF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x313FF4u; }
            if (ctx->pc != 0x313FF4u) { return; }
        }
        }
    }
    ctx->pc = 0x313FF4u;
label_313ff4:
    // 0x313ff4: 0x8e052e54  lw          $a1, 0x2E54($s0)
    ctx->pc = 0x313ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11860)));
label_313ff8:
    // 0x313ff8: 0xc0a0e30  jal         func_2838C0
label_313ffc:
    if (ctx->pc == 0x313FFCu) {
        ctx->pc = 0x313FFCu;
            // 0x313ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314000u;
        goto label_314000;
    }
    ctx->pc = 0x313FF8u;
    SET_GPR_U32(ctx, 31, 0x314000u);
    ctx->pc = 0x313FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313FF8u;
            // 0x313ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314000u; }
        if (ctx->pc != 0x314000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314000u; }
        if (ctx->pc != 0x314000u) { return; }
    }
    ctx->pc = 0x314000u;
label_314000:
    // 0x314000: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x314000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314004:
    // 0x314004: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_314008:
    if (ctx->pc == 0x314008u) {
        ctx->pc = 0x314008u;
            // 0x314008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31400Cu;
        goto label_31400c;
    }
    ctx->pc = 0x314004u;
    {
        const bool branch_taken_0x314004 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x314008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314004u;
            // 0x314008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314004) {
            ctx->pc = 0x31404Cu;
            goto label_31404c;
        }
    }
    ctx->pc = 0x31400Cu;
label_31400c:
    // 0x31400c: 0x3c024048  lui         $v0, 0x4048
    ctx->pc = 0x31400cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16456 << 16));
label_314010:
    // 0x314010: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x314010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
label_314014:
    // 0x314014: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x314014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_314018:
    // 0x314018: 0xc0bb1e4  jal         func_2EC790
label_31401c:
    if (ctx->pc == 0x31401Cu) {
        ctx->pc = 0x31401Cu;
            // 0x31401c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314020u;
        goto label_314020;
    }
    ctx->pc = 0x314018u;
    SET_GPR_U32(ctx, 31, 0x314020u);
    ctx->pc = 0x31401Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314018u;
            // 0x31401c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC790u;
    if (runtime->hasFunction(0x2EC790u)) {
        auto targetFn = runtime->lookupFunction(0x2EC790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314020u; }
        if (ctx->pc != 0x314020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotate__14CCameraControlFf_0x2ec790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314020u; }
        if (ctx->pc != 0x314020u) { return; }
    }
    ctx->pc = 0x314020u;
label_314020:
    // 0x314020: 0x3c024029  lui         $v0, 0x4029
    ctx->pc = 0x314020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16425 << 16));
label_314024:
    // 0x314024: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x314024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_314028:
    // 0x314028: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x314028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31402c:
    // 0x31402c: 0xc0bb224  jal         func_2EC890
label_314030:
    if (ctx->pc == 0x314030u) {
        ctx->pc = 0x314030u;
            // 0x314030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314034u;
        goto label_314034;
    }
    ctx->pc = 0x31402Cu;
    SET_GPR_U32(ctx, 31, 0x314034u);
    ctx->pc = 0x314030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31402Cu;
            // 0x314030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC890u;
    if (runtime->hasFunction(0x2EC890u)) {
        auto targetFn = runtime->lookupFunction(0x2EC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314034u; }
        if (ctx->pc != 0x314034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotBack__14CCameraControlFf_0x2ec890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314034u; }
        if (ctx->pc != 0x314034u) { return; }
    }
    ctx->pc = 0x314034u;
label_314034:
    // 0x314034: 0x8e390060  lw          $t9, 0x60($s1)
    ctx->pc = 0x314034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_314038:
    // 0x314038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x314038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31403c:
    // 0x31403c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x31403cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_314040:
    // 0x314040: 0x320f809  jalr        $t9
label_314044:
    if (ctx->pc == 0x314044u) {
        ctx->pc = 0x314044u;
            // 0x314044: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x314048u;
        goto label_314048;
    }
    ctx->pc = 0x314040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x314048u);
        ctx->pc = 0x314044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314040u;
            // 0x314044: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x314048u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x314048u; }
            if (ctx->pc != 0x314048u) { return; }
        }
        }
    }
    ctx->pc = 0x314048u;
label_314048:
    // 0x314048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x314048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31404c:
    // 0x31404c: 0xc0a0e78  jal         func_2839E0
label_314050:
    if (ctx->pc == 0x314050u) {
        ctx->pc = 0x314050u;
            // 0x314050: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x314054u;
        goto label_314054;
    }
    ctx->pc = 0x31404Cu;
    SET_GPR_U32(ctx, 31, 0x314054u);
    ctx->pc = 0x314050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31404Cu;
            // 0x314050: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2839E0u;
    if (runtime->hasFunction(0x2839E0u)) {
        auto targetFn = runtime->lookupFunction(0x2839E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314054u; }
        if (ctx->pc != 0x314054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMessage__6CSceneFi_0x2839e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314054u; }
        if (ctx->pc != 0x314054u) { return; }
    }
    ctx->pc = 0x314054u;
label_314054:
    // 0x314054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314058:
    // 0x314058: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x314058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31405c:
    // 0x31405c: 0xc054bb4  jal         func_152ED0
label_314060:
    if (ctx->pc == 0x314060u) {
        ctx->pc = 0x314060u;
            // 0x314060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314064u;
        goto label_314064;
    }
    ctx->pc = 0x31405Cu;
    SET_GPR_U32(ctx, 31, 0x314064u);
    ctx->pc = 0x314060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31405Cu;
            // 0x314060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314064u; }
        if (ctx->pc != 0x314064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314064u; }
        if (ctx->pc != 0x314064u) { return; }
    }
    ctx->pc = 0x314064u;
label_314064:
    // 0x314064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x314064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_314068:
    // 0x314068: 0xc054cdc  jal         func_153370
label_31406c:
    if (ctx->pc == 0x31406Cu) {
        ctx->pc = 0x31406Cu;
            // 0x31406c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x314070u;
        goto label_314070;
    }
    ctx->pc = 0x314068u;
    SET_GPR_U32(ctx, 31, 0x314070u);
    ctx->pc = 0x31406Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314068u;
            // 0x31406c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314070u; }
        if (ctx->pc != 0x314070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314070u; }
        if (ctx->pc != 0x314070u) { return; }
    }
    ctx->pc = 0x314070u;
label_314070:
    // 0x314070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x314070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_314074:
    // 0x314074: 0xc0562c8  jal         func_158B20
label_314078:
    if (ctx->pc == 0x314078u) {
        ctx->pc = 0x314078u;
            // 0x314078: 0x240507d0  addiu       $a1, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->pc = 0x31407Cu;
        goto label_31407c;
    }
    ctx->pc = 0x314074u;
    SET_GPR_U32(ctx, 31, 0x31407Cu);
    ctx->pc = 0x314078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314074u;
            // 0x314078: 0x240507d0  addiu       $a1, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31407Cu; }
        if (ctx->pc != 0x31407Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31407Cu; }
        if (ctx->pc != 0x31407Cu) { return; }
    }
    ctx->pc = 0x31407Cu;
label_31407c:
    // 0x31407c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x31407cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_314080:
    // 0x314080: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x314080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_314084:
    // 0x314084: 0xae03014c  sw          $v1, 0x14C($s0)
    ctx->pc = 0x314084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 3));
label_314088:
    // 0x314088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31408c:
    // 0x31408c: 0xaf82a2dc  sw          $v0, -0x5D24($gp)
    ctx->pc = 0x31408cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943452), GPR_U32(ctx, 2));
label_314090:
    // 0x314090: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x314090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_314094:
    // 0x314094: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x314094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_314098:
    // 0x314098: 0xac20f9a0  sw          $zero, -0x660($at)
    ctx->pc = 0x314098u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965664), GPR_U32(ctx, 0));
label_31409c:
    // 0x31409c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x31409cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_3140a0:
    // 0x3140a0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3140a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_3140a4:
    // 0x3140a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3140a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3140a8:
    // 0x3140a8: 0xac20f9a8  sw          $zero, -0x658($at)
    ctx->pc = 0x3140a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965672), GPR_U32(ctx, 0));
label_3140ac:
    // 0x3140ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3140acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3140b0:
    // 0x3140b0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3140b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_3140b4:
    // 0x3140b4: 0xac23f9b0  sw          $v1, -0x650($at)
    ctx->pc = 0x3140b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965680), GPR_U32(ctx, 3));
label_3140b8:
    // 0x3140b8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3140b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3140bc:
    // 0x3140bc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3140bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_3140c0:
    // 0x3140c0: 0x2484f9a0  addiu       $a0, $a0, -0x660
    ctx->pc = 0x3140c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965664));
label_3140c4:
    // 0x3140c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3140c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3140c8:
    // 0x3140c8: 0xc0c11a8  jal         func_3046A0
label_3140cc:
    if (ctx->pc == 0x3140CCu) {
        ctx->pc = 0x3140CCu;
            // 0x3140cc: 0xac23f9ac  sw          $v1, -0x654($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294965676), GPR_U32(ctx, 3));
        ctx->pc = 0x3140D0u;
        goto label_3140d0;
    }
    ctx->pc = 0x3140C8u;
    SET_GPR_U32(ctx, 31, 0x3140D0u);
    ctx->pc = 0x3140CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3140C8u;
            // 0x3140cc: 0xac23f9ac  sw          $v1, -0x654($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294965676), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3046A0u;
    if (runtime->hasFunction(0x3046A0u)) {
        auto targetFn = runtime->lookupFunction(0x3046A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3140D0u; }
        if (ctx->pc != 0x3140D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVol__12sgCPlayVoiceFff_0x3046a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3140D0u; }
        if (ctx->pc != 0x3140D0u) { return; }
    }
    ctx->pc = 0x3140D0u;
label_3140d0:
    // 0x3140d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3140d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3140d4:
    // 0x3140d4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3140d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3140d8:
    // 0x3140d8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3140d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3140dc:
    // 0x3140dc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3140dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3140e0:
    // 0x3140e0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3140e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3140e4:
    // 0x3140e4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3140e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3140e8:
    // 0x3140e8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3140e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3140ec:
    // 0x3140ec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3140ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3140f0:
    // 0x3140f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3140f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3140f4:
    // 0x3140f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3140f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3140f8:
    // 0x3140f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3140f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3140fc:
    // 0x3140fc: 0x3e00008  jr          $ra
label_314100:
    if (ctx->pc == 0x314100u) {
        ctx->pc = 0x314100u;
            // 0x314100: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x314104u;
        goto label_fallthrough_0x3140fc;
    }
    ctx->pc = 0x3140FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3140FCu;
            // 0x314100: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3140fc:
    ctx->pc = 0x314104u;
}
