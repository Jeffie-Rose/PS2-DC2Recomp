#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgInitGyoRace__FP11SubGameInfo
// Address: 0x3048b0 - 0x305aa4
void sgInitGyoRace__FP11SubGameInfo_0x3048b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgInitGyoRace__FP11SubGameInfo_0x3048b0");
#endif

    switch (ctx->pc) {
        case 0x3048b0u: goto label_3048b0;
        case 0x3048b4u: goto label_3048b4;
        case 0x3048b8u: goto label_3048b8;
        case 0x3048bcu: goto label_3048bc;
        case 0x3048c0u: goto label_3048c0;
        case 0x3048c4u: goto label_3048c4;
        case 0x3048c8u: goto label_3048c8;
        case 0x3048ccu: goto label_3048cc;
        case 0x3048d0u: goto label_3048d0;
        case 0x3048d4u: goto label_3048d4;
        case 0x3048d8u: goto label_3048d8;
        case 0x3048dcu: goto label_3048dc;
        case 0x3048e0u: goto label_3048e0;
        case 0x3048e4u: goto label_3048e4;
        case 0x3048e8u: goto label_3048e8;
        case 0x3048ecu: goto label_3048ec;
        case 0x3048f0u: goto label_3048f0;
        case 0x3048f4u: goto label_3048f4;
        case 0x3048f8u: goto label_3048f8;
        case 0x3048fcu: goto label_3048fc;
        case 0x304900u: goto label_304900;
        case 0x304904u: goto label_304904;
        case 0x304908u: goto label_304908;
        case 0x30490cu: goto label_30490c;
        case 0x304910u: goto label_304910;
        case 0x304914u: goto label_304914;
        case 0x304918u: goto label_304918;
        case 0x30491cu: goto label_30491c;
        case 0x304920u: goto label_304920;
        case 0x304924u: goto label_304924;
        case 0x304928u: goto label_304928;
        case 0x30492cu: goto label_30492c;
        case 0x304930u: goto label_304930;
        case 0x304934u: goto label_304934;
        case 0x304938u: goto label_304938;
        case 0x30493cu: goto label_30493c;
        case 0x304940u: goto label_304940;
        case 0x304944u: goto label_304944;
        case 0x304948u: goto label_304948;
        case 0x30494cu: goto label_30494c;
        case 0x304950u: goto label_304950;
        case 0x304954u: goto label_304954;
        case 0x304958u: goto label_304958;
        case 0x30495cu: goto label_30495c;
        case 0x304960u: goto label_304960;
        case 0x304964u: goto label_304964;
        case 0x304968u: goto label_304968;
        case 0x30496cu: goto label_30496c;
        case 0x304970u: goto label_304970;
        case 0x304974u: goto label_304974;
        case 0x304978u: goto label_304978;
        case 0x30497cu: goto label_30497c;
        case 0x304980u: goto label_304980;
        case 0x304984u: goto label_304984;
        case 0x304988u: goto label_304988;
        case 0x30498cu: goto label_30498c;
        case 0x304990u: goto label_304990;
        case 0x304994u: goto label_304994;
        case 0x304998u: goto label_304998;
        case 0x30499cu: goto label_30499c;
        case 0x3049a0u: goto label_3049a0;
        case 0x3049a4u: goto label_3049a4;
        case 0x3049a8u: goto label_3049a8;
        case 0x3049acu: goto label_3049ac;
        case 0x3049b0u: goto label_3049b0;
        case 0x3049b4u: goto label_3049b4;
        case 0x3049b8u: goto label_3049b8;
        case 0x3049bcu: goto label_3049bc;
        case 0x3049c0u: goto label_3049c0;
        case 0x3049c4u: goto label_3049c4;
        case 0x3049c8u: goto label_3049c8;
        case 0x3049ccu: goto label_3049cc;
        case 0x3049d0u: goto label_3049d0;
        case 0x3049d4u: goto label_3049d4;
        case 0x3049d8u: goto label_3049d8;
        case 0x3049dcu: goto label_3049dc;
        case 0x3049e0u: goto label_3049e0;
        case 0x3049e4u: goto label_3049e4;
        case 0x3049e8u: goto label_3049e8;
        case 0x3049ecu: goto label_3049ec;
        case 0x3049f0u: goto label_3049f0;
        case 0x3049f4u: goto label_3049f4;
        case 0x3049f8u: goto label_3049f8;
        case 0x3049fcu: goto label_3049fc;
        case 0x304a00u: goto label_304a00;
        case 0x304a04u: goto label_304a04;
        case 0x304a08u: goto label_304a08;
        case 0x304a0cu: goto label_304a0c;
        case 0x304a10u: goto label_304a10;
        case 0x304a14u: goto label_304a14;
        case 0x304a18u: goto label_304a18;
        case 0x304a1cu: goto label_304a1c;
        case 0x304a20u: goto label_304a20;
        case 0x304a24u: goto label_304a24;
        case 0x304a28u: goto label_304a28;
        case 0x304a2cu: goto label_304a2c;
        case 0x304a30u: goto label_304a30;
        case 0x304a34u: goto label_304a34;
        case 0x304a38u: goto label_304a38;
        case 0x304a3cu: goto label_304a3c;
        case 0x304a40u: goto label_304a40;
        case 0x304a44u: goto label_304a44;
        case 0x304a48u: goto label_304a48;
        case 0x304a4cu: goto label_304a4c;
        case 0x304a50u: goto label_304a50;
        case 0x304a54u: goto label_304a54;
        case 0x304a58u: goto label_304a58;
        case 0x304a5cu: goto label_304a5c;
        case 0x304a60u: goto label_304a60;
        case 0x304a64u: goto label_304a64;
        case 0x304a68u: goto label_304a68;
        case 0x304a6cu: goto label_304a6c;
        case 0x304a70u: goto label_304a70;
        case 0x304a74u: goto label_304a74;
        case 0x304a78u: goto label_304a78;
        case 0x304a7cu: goto label_304a7c;
        case 0x304a80u: goto label_304a80;
        case 0x304a84u: goto label_304a84;
        case 0x304a88u: goto label_304a88;
        case 0x304a8cu: goto label_304a8c;
        case 0x304a90u: goto label_304a90;
        case 0x304a94u: goto label_304a94;
        case 0x304a98u: goto label_304a98;
        case 0x304a9cu: goto label_304a9c;
        case 0x304aa0u: goto label_304aa0;
        case 0x304aa4u: goto label_304aa4;
        case 0x304aa8u: goto label_304aa8;
        case 0x304aacu: goto label_304aac;
        case 0x304ab0u: goto label_304ab0;
        case 0x304ab4u: goto label_304ab4;
        case 0x304ab8u: goto label_304ab8;
        case 0x304abcu: goto label_304abc;
        case 0x304ac0u: goto label_304ac0;
        case 0x304ac4u: goto label_304ac4;
        case 0x304ac8u: goto label_304ac8;
        case 0x304accu: goto label_304acc;
        case 0x304ad0u: goto label_304ad0;
        case 0x304ad4u: goto label_304ad4;
        case 0x304ad8u: goto label_304ad8;
        case 0x304adcu: goto label_304adc;
        case 0x304ae0u: goto label_304ae0;
        case 0x304ae4u: goto label_304ae4;
        case 0x304ae8u: goto label_304ae8;
        case 0x304aecu: goto label_304aec;
        case 0x304af0u: goto label_304af0;
        case 0x304af4u: goto label_304af4;
        case 0x304af8u: goto label_304af8;
        case 0x304afcu: goto label_304afc;
        case 0x304b00u: goto label_304b00;
        case 0x304b04u: goto label_304b04;
        case 0x304b08u: goto label_304b08;
        case 0x304b0cu: goto label_304b0c;
        case 0x304b10u: goto label_304b10;
        case 0x304b14u: goto label_304b14;
        case 0x304b18u: goto label_304b18;
        case 0x304b1cu: goto label_304b1c;
        case 0x304b20u: goto label_304b20;
        case 0x304b24u: goto label_304b24;
        case 0x304b28u: goto label_304b28;
        case 0x304b2cu: goto label_304b2c;
        case 0x304b30u: goto label_304b30;
        case 0x304b34u: goto label_304b34;
        case 0x304b38u: goto label_304b38;
        case 0x304b3cu: goto label_304b3c;
        case 0x304b40u: goto label_304b40;
        case 0x304b44u: goto label_304b44;
        case 0x304b48u: goto label_304b48;
        case 0x304b4cu: goto label_304b4c;
        case 0x304b50u: goto label_304b50;
        case 0x304b54u: goto label_304b54;
        case 0x304b58u: goto label_304b58;
        case 0x304b5cu: goto label_304b5c;
        case 0x304b60u: goto label_304b60;
        case 0x304b64u: goto label_304b64;
        case 0x304b68u: goto label_304b68;
        case 0x304b6cu: goto label_304b6c;
        case 0x304b70u: goto label_304b70;
        case 0x304b74u: goto label_304b74;
        case 0x304b78u: goto label_304b78;
        case 0x304b7cu: goto label_304b7c;
        case 0x304b80u: goto label_304b80;
        case 0x304b84u: goto label_304b84;
        case 0x304b88u: goto label_304b88;
        case 0x304b8cu: goto label_304b8c;
        case 0x304b90u: goto label_304b90;
        case 0x304b94u: goto label_304b94;
        case 0x304b98u: goto label_304b98;
        case 0x304b9cu: goto label_304b9c;
        case 0x304ba0u: goto label_304ba0;
        case 0x304ba4u: goto label_304ba4;
        case 0x304ba8u: goto label_304ba8;
        case 0x304bacu: goto label_304bac;
        case 0x304bb0u: goto label_304bb0;
        case 0x304bb4u: goto label_304bb4;
        case 0x304bb8u: goto label_304bb8;
        case 0x304bbcu: goto label_304bbc;
        case 0x304bc0u: goto label_304bc0;
        case 0x304bc4u: goto label_304bc4;
        case 0x304bc8u: goto label_304bc8;
        case 0x304bccu: goto label_304bcc;
        case 0x304bd0u: goto label_304bd0;
        case 0x304bd4u: goto label_304bd4;
        case 0x304bd8u: goto label_304bd8;
        case 0x304bdcu: goto label_304bdc;
        case 0x304be0u: goto label_304be0;
        case 0x304be4u: goto label_304be4;
        case 0x304be8u: goto label_304be8;
        case 0x304becu: goto label_304bec;
        case 0x304bf0u: goto label_304bf0;
        case 0x304bf4u: goto label_304bf4;
        case 0x304bf8u: goto label_304bf8;
        case 0x304bfcu: goto label_304bfc;
        case 0x304c00u: goto label_304c00;
        case 0x304c04u: goto label_304c04;
        case 0x304c08u: goto label_304c08;
        case 0x304c0cu: goto label_304c0c;
        case 0x304c10u: goto label_304c10;
        case 0x304c14u: goto label_304c14;
        case 0x304c18u: goto label_304c18;
        case 0x304c1cu: goto label_304c1c;
        case 0x304c20u: goto label_304c20;
        case 0x304c24u: goto label_304c24;
        case 0x304c28u: goto label_304c28;
        case 0x304c2cu: goto label_304c2c;
        case 0x304c30u: goto label_304c30;
        case 0x304c34u: goto label_304c34;
        case 0x304c38u: goto label_304c38;
        case 0x304c3cu: goto label_304c3c;
        case 0x304c40u: goto label_304c40;
        case 0x304c44u: goto label_304c44;
        case 0x304c48u: goto label_304c48;
        case 0x304c4cu: goto label_304c4c;
        case 0x304c50u: goto label_304c50;
        case 0x304c54u: goto label_304c54;
        case 0x304c58u: goto label_304c58;
        case 0x304c5cu: goto label_304c5c;
        case 0x304c60u: goto label_304c60;
        case 0x304c64u: goto label_304c64;
        case 0x304c68u: goto label_304c68;
        case 0x304c6cu: goto label_304c6c;
        case 0x304c70u: goto label_304c70;
        case 0x304c74u: goto label_304c74;
        case 0x304c78u: goto label_304c78;
        case 0x304c7cu: goto label_304c7c;
        case 0x304c80u: goto label_304c80;
        case 0x304c84u: goto label_304c84;
        case 0x304c88u: goto label_304c88;
        case 0x304c8cu: goto label_304c8c;
        case 0x304c90u: goto label_304c90;
        case 0x304c94u: goto label_304c94;
        case 0x304c98u: goto label_304c98;
        case 0x304c9cu: goto label_304c9c;
        case 0x304ca0u: goto label_304ca0;
        case 0x304ca4u: goto label_304ca4;
        case 0x304ca8u: goto label_304ca8;
        case 0x304cacu: goto label_304cac;
        case 0x304cb0u: goto label_304cb0;
        case 0x304cb4u: goto label_304cb4;
        case 0x304cb8u: goto label_304cb8;
        case 0x304cbcu: goto label_304cbc;
        case 0x304cc0u: goto label_304cc0;
        case 0x304cc4u: goto label_304cc4;
        case 0x304cc8u: goto label_304cc8;
        case 0x304cccu: goto label_304ccc;
        case 0x304cd0u: goto label_304cd0;
        case 0x304cd4u: goto label_304cd4;
        case 0x304cd8u: goto label_304cd8;
        case 0x304cdcu: goto label_304cdc;
        case 0x304ce0u: goto label_304ce0;
        case 0x304ce4u: goto label_304ce4;
        case 0x304ce8u: goto label_304ce8;
        case 0x304cecu: goto label_304cec;
        case 0x304cf0u: goto label_304cf0;
        case 0x304cf4u: goto label_304cf4;
        case 0x304cf8u: goto label_304cf8;
        case 0x304cfcu: goto label_304cfc;
        case 0x304d00u: goto label_304d00;
        case 0x304d04u: goto label_304d04;
        case 0x304d08u: goto label_304d08;
        case 0x304d0cu: goto label_304d0c;
        case 0x304d10u: goto label_304d10;
        case 0x304d14u: goto label_304d14;
        case 0x304d18u: goto label_304d18;
        case 0x304d1cu: goto label_304d1c;
        case 0x304d20u: goto label_304d20;
        case 0x304d24u: goto label_304d24;
        case 0x304d28u: goto label_304d28;
        case 0x304d2cu: goto label_304d2c;
        case 0x304d30u: goto label_304d30;
        case 0x304d34u: goto label_304d34;
        case 0x304d38u: goto label_304d38;
        case 0x304d3cu: goto label_304d3c;
        case 0x304d40u: goto label_304d40;
        case 0x304d44u: goto label_304d44;
        case 0x304d48u: goto label_304d48;
        case 0x304d4cu: goto label_304d4c;
        case 0x304d50u: goto label_304d50;
        case 0x304d54u: goto label_304d54;
        case 0x304d58u: goto label_304d58;
        case 0x304d5cu: goto label_304d5c;
        case 0x304d60u: goto label_304d60;
        case 0x304d64u: goto label_304d64;
        case 0x304d68u: goto label_304d68;
        case 0x304d6cu: goto label_304d6c;
        case 0x304d70u: goto label_304d70;
        case 0x304d74u: goto label_304d74;
        case 0x304d78u: goto label_304d78;
        case 0x304d7cu: goto label_304d7c;
        case 0x304d80u: goto label_304d80;
        case 0x304d84u: goto label_304d84;
        case 0x304d88u: goto label_304d88;
        case 0x304d8cu: goto label_304d8c;
        case 0x304d90u: goto label_304d90;
        case 0x304d94u: goto label_304d94;
        case 0x304d98u: goto label_304d98;
        case 0x304d9cu: goto label_304d9c;
        case 0x304da0u: goto label_304da0;
        case 0x304da4u: goto label_304da4;
        case 0x304da8u: goto label_304da8;
        case 0x304dacu: goto label_304dac;
        case 0x304db0u: goto label_304db0;
        case 0x304db4u: goto label_304db4;
        case 0x304db8u: goto label_304db8;
        case 0x304dbcu: goto label_304dbc;
        case 0x304dc0u: goto label_304dc0;
        case 0x304dc4u: goto label_304dc4;
        case 0x304dc8u: goto label_304dc8;
        case 0x304dccu: goto label_304dcc;
        case 0x304dd0u: goto label_304dd0;
        case 0x304dd4u: goto label_304dd4;
        case 0x304dd8u: goto label_304dd8;
        case 0x304ddcu: goto label_304ddc;
        case 0x304de0u: goto label_304de0;
        case 0x304de4u: goto label_304de4;
        case 0x304de8u: goto label_304de8;
        case 0x304decu: goto label_304dec;
        case 0x304df0u: goto label_304df0;
        case 0x304df4u: goto label_304df4;
        case 0x304df8u: goto label_304df8;
        case 0x304dfcu: goto label_304dfc;
        case 0x304e00u: goto label_304e00;
        case 0x304e04u: goto label_304e04;
        case 0x304e08u: goto label_304e08;
        case 0x304e0cu: goto label_304e0c;
        case 0x304e10u: goto label_304e10;
        case 0x304e14u: goto label_304e14;
        case 0x304e18u: goto label_304e18;
        case 0x304e1cu: goto label_304e1c;
        case 0x304e20u: goto label_304e20;
        case 0x304e24u: goto label_304e24;
        case 0x304e28u: goto label_304e28;
        case 0x304e2cu: goto label_304e2c;
        case 0x304e30u: goto label_304e30;
        case 0x304e34u: goto label_304e34;
        case 0x304e38u: goto label_304e38;
        case 0x304e3cu: goto label_304e3c;
        case 0x304e40u: goto label_304e40;
        case 0x304e44u: goto label_304e44;
        case 0x304e48u: goto label_304e48;
        case 0x304e4cu: goto label_304e4c;
        case 0x304e50u: goto label_304e50;
        case 0x304e54u: goto label_304e54;
        case 0x304e58u: goto label_304e58;
        case 0x304e5cu: goto label_304e5c;
        case 0x304e60u: goto label_304e60;
        case 0x304e64u: goto label_304e64;
        case 0x304e68u: goto label_304e68;
        case 0x304e6cu: goto label_304e6c;
        case 0x304e70u: goto label_304e70;
        case 0x304e74u: goto label_304e74;
        case 0x304e78u: goto label_304e78;
        case 0x304e7cu: goto label_304e7c;
        case 0x304e80u: goto label_304e80;
        case 0x304e84u: goto label_304e84;
        case 0x304e88u: goto label_304e88;
        case 0x304e8cu: goto label_304e8c;
        case 0x304e90u: goto label_304e90;
        case 0x304e94u: goto label_304e94;
        case 0x304e98u: goto label_304e98;
        case 0x304e9cu: goto label_304e9c;
        case 0x304ea0u: goto label_304ea0;
        case 0x304ea4u: goto label_304ea4;
        case 0x304ea8u: goto label_304ea8;
        case 0x304eacu: goto label_304eac;
        case 0x304eb0u: goto label_304eb0;
        case 0x304eb4u: goto label_304eb4;
        case 0x304eb8u: goto label_304eb8;
        case 0x304ebcu: goto label_304ebc;
        case 0x304ec0u: goto label_304ec0;
        case 0x304ec4u: goto label_304ec4;
        case 0x304ec8u: goto label_304ec8;
        case 0x304eccu: goto label_304ecc;
        case 0x304ed0u: goto label_304ed0;
        case 0x304ed4u: goto label_304ed4;
        case 0x304ed8u: goto label_304ed8;
        case 0x304edcu: goto label_304edc;
        case 0x304ee0u: goto label_304ee0;
        case 0x304ee4u: goto label_304ee4;
        case 0x304ee8u: goto label_304ee8;
        case 0x304eecu: goto label_304eec;
        case 0x304ef0u: goto label_304ef0;
        case 0x304ef4u: goto label_304ef4;
        case 0x304ef8u: goto label_304ef8;
        case 0x304efcu: goto label_304efc;
        case 0x304f00u: goto label_304f00;
        case 0x304f04u: goto label_304f04;
        case 0x304f08u: goto label_304f08;
        case 0x304f0cu: goto label_304f0c;
        case 0x304f10u: goto label_304f10;
        case 0x304f14u: goto label_304f14;
        case 0x304f18u: goto label_304f18;
        case 0x304f1cu: goto label_304f1c;
        case 0x304f20u: goto label_304f20;
        case 0x304f24u: goto label_304f24;
        case 0x304f28u: goto label_304f28;
        case 0x304f2cu: goto label_304f2c;
        case 0x304f30u: goto label_304f30;
        case 0x304f34u: goto label_304f34;
        case 0x304f38u: goto label_304f38;
        case 0x304f3cu: goto label_304f3c;
        case 0x304f40u: goto label_304f40;
        case 0x304f44u: goto label_304f44;
        case 0x304f48u: goto label_304f48;
        case 0x304f4cu: goto label_304f4c;
        case 0x304f50u: goto label_304f50;
        case 0x304f54u: goto label_304f54;
        case 0x304f58u: goto label_304f58;
        case 0x304f5cu: goto label_304f5c;
        case 0x304f60u: goto label_304f60;
        case 0x304f64u: goto label_304f64;
        case 0x304f68u: goto label_304f68;
        case 0x304f6cu: goto label_304f6c;
        case 0x304f70u: goto label_304f70;
        case 0x304f74u: goto label_304f74;
        case 0x304f78u: goto label_304f78;
        case 0x304f7cu: goto label_304f7c;
        case 0x304f80u: goto label_304f80;
        case 0x304f84u: goto label_304f84;
        case 0x304f88u: goto label_304f88;
        case 0x304f8cu: goto label_304f8c;
        case 0x304f90u: goto label_304f90;
        case 0x304f94u: goto label_304f94;
        case 0x304f98u: goto label_304f98;
        case 0x304f9cu: goto label_304f9c;
        case 0x304fa0u: goto label_304fa0;
        case 0x304fa4u: goto label_304fa4;
        case 0x304fa8u: goto label_304fa8;
        case 0x304facu: goto label_304fac;
        case 0x304fb0u: goto label_304fb0;
        case 0x304fb4u: goto label_304fb4;
        case 0x304fb8u: goto label_304fb8;
        case 0x304fbcu: goto label_304fbc;
        case 0x304fc0u: goto label_304fc0;
        case 0x304fc4u: goto label_304fc4;
        case 0x304fc8u: goto label_304fc8;
        case 0x304fccu: goto label_304fcc;
        case 0x304fd0u: goto label_304fd0;
        case 0x304fd4u: goto label_304fd4;
        case 0x304fd8u: goto label_304fd8;
        case 0x304fdcu: goto label_304fdc;
        case 0x304fe0u: goto label_304fe0;
        case 0x304fe4u: goto label_304fe4;
        case 0x304fe8u: goto label_304fe8;
        case 0x304fecu: goto label_304fec;
        case 0x304ff0u: goto label_304ff0;
        case 0x304ff4u: goto label_304ff4;
        case 0x304ff8u: goto label_304ff8;
        case 0x304ffcu: goto label_304ffc;
        case 0x305000u: goto label_305000;
        case 0x305004u: goto label_305004;
        case 0x305008u: goto label_305008;
        case 0x30500cu: goto label_30500c;
        case 0x305010u: goto label_305010;
        case 0x305014u: goto label_305014;
        case 0x305018u: goto label_305018;
        case 0x30501cu: goto label_30501c;
        case 0x305020u: goto label_305020;
        case 0x305024u: goto label_305024;
        case 0x305028u: goto label_305028;
        case 0x30502cu: goto label_30502c;
        case 0x305030u: goto label_305030;
        case 0x305034u: goto label_305034;
        case 0x305038u: goto label_305038;
        case 0x30503cu: goto label_30503c;
        case 0x305040u: goto label_305040;
        case 0x305044u: goto label_305044;
        case 0x305048u: goto label_305048;
        case 0x30504cu: goto label_30504c;
        case 0x305050u: goto label_305050;
        case 0x305054u: goto label_305054;
        case 0x305058u: goto label_305058;
        case 0x30505cu: goto label_30505c;
        case 0x305060u: goto label_305060;
        case 0x305064u: goto label_305064;
        case 0x305068u: goto label_305068;
        case 0x30506cu: goto label_30506c;
        case 0x305070u: goto label_305070;
        case 0x305074u: goto label_305074;
        case 0x305078u: goto label_305078;
        case 0x30507cu: goto label_30507c;
        case 0x305080u: goto label_305080;
        case 0x305084u: goto label_305084;
        case 0x305088u: goto label_305088;
        case 0x30508cu: goto label_30508c;
        case 0x305090u: goto label_305090;
        case 0x305094u: goto label_305094;
        case 0x305098u: goto label_305098;
        case 0x30509cu: goto label_30509c;
        case 0x3050a0u: goto label_3050a0;
        case 0x3050a4u: goto label_3050a4;
        case 0x3050a8u: goto label_3050a8;
        case 0x3050acu: goto label_3050ac;
        case 0x3050b0u: goto label_3050b0;
        case 0x3050b4u: goto label_3050b4;
        case 0x3050b8u: goto label_3050b8;
        case 0x3050bcu: goto label_3050bc;
        case 0x3050c0u: goto label_3050c0;
        case 0x3050c4u: goto label_3050c4;
        case 0x3050c8u: goto label_3050c8;
        case 0x3050ccu: goto label_3050cc;
        case 0x3050d0u: goto label_3050d0;
        case 0x3050d4u: goto label_3050d4;
        case 0x3050d8u: goto label_3050d8;
        case 0x3050dcu: goto label_3050dc;
        case 0x3050e0u: goto label_3050e0;
        case 0x3050e4u: goto label_3050e4;
        case 0x3050e8u: goto label_3050e8;
        case 0x3050ecu: goto label_3050ec;
        case 0x3050f0u: goto label_3050f0;
        case 0x3050f4u: goto label_3050f4;
        case 0x3050f8u: goto label_3050f8;
        case 0x3050fcu: goto label_3050fc;
        case 0x305100u: goto label_305100;
        case 0x305104u: goto label_305104;
        case 0x305108u: goto label_305108;
        case 0x30510cu: goto label_30510c;
        case 0x305110u: goto label_305110;
        case 0x305114u: goto label_305114;
        case 0x305118u: goto label_305118;
        case 0x30511cu: goto label_30511c;
        case 0x305120u: goto label_305120;
        case 0x305124u: goto label_305124;
        case 0x305128u: goto label_305128;
        case 0x30512cu: goto label_30512c;
        case 0x305130u: goto label_305130;
        case 0x305134u: goto label_305134;
        case 0x305138u: goto label_305138;
        case 0x30513cu: goto label_30513c;
        case 0x305140u: goto label_305140;
        case 0x305144u: goto label_305144;
        case 0x305148u: goto label_305148;
        case 0x30514cu: goto label_30514c;
        case 0x305150u: goto label_305150;
        case 0x305154u: goto label_305154;
        case 0x305158u: goto label_305158;
        case 0x30515cu: goto label_30515c;
        case 0x305160u: goto label_305160;
        case 0x305164u: goto label_305164;
        case 0x305168u: goto label_305168;
        case 0x30516cu: goto label_30516c;
        case 0x305170u: goto label_305170;
        case 0x305174u: goto label_305174;
        case 0x305178u: goto label_305178;
        case 0x30517cu: goto label_30517c;
        case 0x305180u: goto label_305180;
        case 0x305184u: goto label_305184;
        case 0x305188u: goto label_305188;
        case 0x30518cu: goto label_30518c;
        case 0x305190u: goto label_305190;
        case 0x305194u: goto label_305194;
        case 0x305198u: goto label_305198;
        case 0x30519cu: goto label_30519c;
        case 0x3051a0u: goto label_3051a0;
        case 0x3051a4u: goto label_3051a4;
        case 0x3051a8u: goto label_3051a8;
        case 0x3051acu: goto label_3051ac;
        case 0x3051b0u: goto label_3051b0;
        case 0x3051b4u: goto label_3051b4;
        case 0x3051b8u: goto label_3051b8;
        case 0x3051bcu: goto label_3051bc;
        case 0x3051c0u: goto label_3051c0;
        case 0x3051c4u: goto label_3051c4;
        case 0x3051c8u: goto label_3051c8;
        case 0x3051ccu: goto label_3051cc;
        case 0x3051d0u: goto label_3051d0;
        case 0x3051d4u: goto label_3051d4;
        case 0x3051d8u: goto label_3051d8;
        case 0x3051dcu: goto label_3051dc;
        case 0x3051e0u: goto label_3051e0;
        case 0x3051e4u: goto label_3051e4;
        case 0x3051e8u: goto label_3051e8;
        case 0x3051ecu: goto label_3051ec;
        case 0x3051f0u: goto label_3051f0;
        case 0x3051f4u: goto label_3051f4;
        case 0x3051f8u: goto label_3051f8;
        case 0x3051fcu: goto label_3051fc;
        case 0x305200u: goto label_305200;
        case 0x305204u: goto label_305204;
        case 0x305208u: goto label_305208;
        case 0x30520cu: goto label_30520c;
        case 0x305210u: goto label_305210;
        case 0x305214u: goto label_305214;
        case 0x305218u: goto label_305218;
        case 0x30521cu: goto label_30521c;
        case 0x305220u: goto label_305220;
        case 0x305224u: goto label_305224;
        case 0x305228u: goto label_305228;
        case 0x30522cu: goto label_30522c;
        case 0x305230u: goto label_305230;
        case 0x305234u: goto label_305234;
        case 0x305238u: goto label_305238;
        case 0x30523cu: goto label_30523c;
        case 0x305240u: goto label_305240;
        case 0x305244u: goto label_305244;
        case 0x305248u: goto label_305248;
        case 0x30524cu: goto label_30524c;
        case 0x305250u: goto label_305250;
        case 0x305254u: goto label_305254;
        case 0x305258u: goto label_305258;
        case 0x30525cu: goto label_30525c;
        case 0x305260u: goto label_305260;
        case 0x305264u: goto label_305264;
        case 0x305268u: goto label_305268;
        case 0x30526cu: goto label_30526c;
        case 0x305270u: goto label_305270;
        case 0x305274u: goto label_305274;
        case 0x305278u: goto label_305278;
        case 0x30527cu: goto label_30527c;
        case 0x305280u: goto label_305280;
        case 0x305284u: goto label_305284;
        case 0x305288u: goto label_305288;
        case 0x30528cu: goto label_30528c;
        case 0x305290u: goto label_305290;
        case 0x305294u: goto label_305294;
        case 0x305298u: goto label_305298;
        case 0x30529cu: goto label_30529c;
        case 0x3052a0u: goto label_3052a0;
        case 0x3052a4u: goto label_3052a4;
        case 0x3052a8u: goto label_3052a8;
        case 0x3052acu: goto label_3052ac;
        case 0x3052b0u: goto label_3052b0;
        case 0x3052b4u: goto label_3052b4;
        case 0x3052b8u: goto label_3052b8;
        case 0x3052bcu: goto label_3052bc;
        case 0x3052c0u: goto label_3052c0;
        case 0x3052c4u: goto label_3052c4;
        case 0x3052c8u: goto label_3052c8;
        case 0x3052ccu: goto label_3052cc;
        case 0x3052d0u: goto label_3052d0;
        case 0x3052d4u: goto label_3052d4;
        case 0x3052d8u: goto label_3052d8;
        case 0x3052dcu: goto label_3052dc;
        case 0x3052e0u: goto label_3052e0;
        case 0x3052e4u: goto label_3052e4;
        case 0x3052e8u: goto label_3052e8;
        case 0x3052ecu: goto label_3052ec;
        case 0x3052f0u: goto label_3052f0;
        case 0x3052f4u: goto label_3052f4;
        case 0x3052f8u: goto label_3052f8;
        case 0x3052fcu: goto label_3052fc;
        case 0x305300u: goto label_305300;
        case 0x305304u: goto label_305304;
        case 0x305308u: goto label_305308;
        case 0x30530cu: goto label_30530c;
        case 0x305310u: goto label_305310;
        case 0x305314u: goto label_305314;
        case 0x305318u: goto label_305318;
        case 0x30531cu: goto label_30531c;
        case 0x305320u: goto label_305320;
        case 0x305324u: goto label_305324;
        case 0x305328u: goto label_305328;
        case 0x30532cu: goto label_30532c;
        case 0x305330u: goto label_305330;
        case 0x305334u: goto label_305334;
        case 0x305338u: goto label_305338;
        case 0x30533cu: goto label_30533c;
        case 0x305340u: goto label_305340;
        case 0x305344u: goto label_305344;
        case 0x305348u: goto label_305348;
        case 0x30534cu: goto label_30534c;
        case 0x305350u: goto label_305350;
        case 0x305354u: goto label_305354;
        case 0x305358u: goto label_305358;
        case 0x30535cu: goto label_30535c;
        case 0x305360u: goto label_305360;
        case 0x305364u: goto label_305364;
        case 0x305368u: goto label_305368;
        case 0x30536cu: goto label_30536c;
        case 0x305370u: goto label_305370;
        case 0x305374u: goto label_305374;
        case 0x305378u: goto label_305378;
        case 0x30537cu: goto label_30537c;
        case 0x305380u: goto label_305380;
        case 0x305384u: goto label_305384;
        case 0x305388u: goto label_305388;
        case 0x30538cu: goto label_30538c;
        case 0x305390u: goto label_305390;
        case 0x305394u: goto label_305394;
        case 0x305398u: goto label_305398;
        case 0x30539cu: goto label_30539c;
        case 0x3053a0u: goto label_3053a0;
        case 0x3053a4u: goto label_3053a4;
        case 0x3053a8u: goto label_3053a8;
        case 0x3053acu: goto label_3053ac;
        case 0x3053b0u: goto label_3053b0;
        case 0x3053b4u: goto label_3053b4;
        case 0x3053b8u: goto label_3053b8;
        case 0x3053bcu: goto label_3053bc;
        case 0x3053c0u: goto label_3053c0;
        case 0x3053c4u: goto label_3053c4;
        case 0x3053c8u: goto label_3053c8;
        case 0x3053ccu: goto label_3053cc;
        case 0x3053d0u: goto label_3053d0;
        case 0x3053d4u: goto label_3053d4;
        case 0x3053d8u: goto label_3053d8;
        case 0x3053dcu: goto label_3053dc;
        case 0x3053e0u: goto label_3053e0;
        case 0x3053e4u: goto label_3053e4;
        case 0x3053e8u: goto label_3053e8;
        case 0x3053ecu: goto label_3053ec;
        case 0x3053f0u: goto label_3053f0;
        case 0x3053f4u: goto label_3053f4;
        case 0x3053f8u: goto label_3053f8;
        case 0x3053fcu: goto label_3053fc;
        case 0x305400u: goto label_305400;
        case 0x305404u: goto label_305404;
        case 0x305408u: goto label_305408;
        case 0x30540cu: goto label_30540c;
        case 0x305410u: goto label_305410;
        case 0x305414u: goto label_305414;
        case 0x305418u: goto label_305418;
        case 0x30541cu: goto label_30541c;
        case 0x305420u: goto label_305420;
        case 0x305424u: goto label_305424;
        case 0x305428u: goto label_305428;
        case 0x30542cu: goto label_30542c;
        case 0x305430u: goto label_305430;
        case 0x305434u: goto label_305434;
        case 0x305438u: goto label_305438;
        case 0x30543cu: goto label_30543c;
        case 0x305440u: goto label_305440;
        case 0x305444u: goto label_305444;
        case 0x305448u: goto label_305448;
        case 0x30544cu: goto label_30544c;
        case 0x305450u: goto label_305450;
        case 0x305454u: goto label_305454;
        case 0x305458u: goto label_305458;
        case 0x30545cu: goto label_30545c;
        case 0x305460u: goto label_305460;
        case 0x305464u: goto label_305464;
        case 0x305468u: goto label_305468;
        case 0x30546cu: goto label_30546c;
        case 0x305470u: goto label_305470;
        case 0x305474u: goto label_305474;
        case 0x305478u: goto label_305478;
        case 0x30547cu: goto label_30547c;
        case 0x305480u: goto label_305480;
        case 0x305484u: goto label_305484;
        case 0x305488u: goto label_305488;
        case 0x30548cu: goto label_30548c;
        case 0x305490u: goto label_305490;
        case 0x305494u: goto label_305494;
        case 0x305498u: goto label_305498;
        case 0x30549cu: goto label_30549c;
        case 0x3054a0u: goto label_3054a0;
        case 0x3054a4u: goto label_3054a4;
        case 0x3054a8u: goto label_3054a8;
        case 0x3054acu: goto label_3054ac;
        case 0x3054b0u: goto label_3054b0;
        case 0x3054b4u: goto label_3054b4;
        case 0x3054b8u: goto label_3054b8;
        case 0x3054bcu: goto label_3054bc;
        case 0x3054c0u: goto label_3054c0;
        case 0x3054c4u: goto label_3054c4;
        case 0x3054c8u: goto label_3054c8;
        case 0x3054ccu: goto label_3054cc;
        case 0x3054d0u: goto label_3054d0;
        case 0x3054d4u: goto label_3054d4;
        case 0x3054d8u: goto label_3054d8;
        case 0x3054dcu: goto label_3054dc;
        case 0x3054e0u: goto label_3054e0;
        case 0x3054e4u: goto label_3054e4;
        case 0x3054e8u: goto label_3054e8;
        case 0x3054ecu: goto label_3054ec;
        case 0x3054f0u: goto label_3054f0;
        case 0x3054f4u: goto label_3054f4;
        case 0x3054f8u: goto label_3054f8;
        case 0x3054fcu: goto label_3054fc;
        case 0x305500u: goto label_305500;
        case 0x305504u: goto label_305504;
        case 0x305508u: goto label_305508;
        case 0x30550cu: goto label_30550c;
        case 0x305510u: goto label_305510;
        case 0x305514u: goto label_305514;
        case 0x305518u: goto label_305518;
        case 0x30551cu: goto label_30551c;
        case 0x305520u: goto label_305520;
        case 0x305524u: goto label_305524;
        case 0x305528u: goto label_305528;
        case 0x30552cu: goto label_30552c;
        case 0x305530u: goto label_305530;
        case 0x305534u: goto label_305534;
        case 0x305538u: goto label_305538;
        case 0x30553cu: goto label_30553c;
        case 0x305540u: goto label_305540;
        case 0x305544u: goto label_305544;
        case 0x305548u: goto label_305548;
        case 0x30554cu: goto label_30554c;
        case 0x305550u: goto label_305550;
        case 0x305554u: goto label_305554;
        case 0x305558u: goto label_305558;
        case 0x30555cu: goto label_30555c;
        case 0x305560u: goto label_305560;
        case 0x305564u: goto label_305564;
        case 0x305568u: goto label_305568;
        case 0x30556cu: goto label_30556c;
        case 0x305570u: goto label_305570;
        case 0x305574u: goto label_305574;
        case 0x305578u: goto label_305578;
        case 0x30557cu: goto label_30557c;
        case 0x305580u: goto label_305580;
        case 0x305584u: goto label_305584;
        case 0x305588u: goto label_305588;
        case 0x30558cu: goto label_30558c;
        case 0x305590u: goto label_305590;
        case 0x305594u: goto label_305594;
        case 0x305598u: goto label_305598;
        case 0x30559cu: goto label_30559c;
        case 0x3055a0u: goto label_3055a0;
        case 0x3055a4u: goto label_3055a4;
        case 0x3055a8u: goto label_3055a8;
        case 0x3055acu: goto label_3055ac;
        case 0x3055b0u: goto label_3055b0;
        case 0x3055b4u: goto label_3055b4;
        case 0x3055b8u: goto label_3055b8;
        case 0x3055bcu: goto label_3055bc;
        case 0x3055c0u: goto label_3055c0;
        case 0x3055c4u: goto label_3055c4;
        case 0x3055c8u: goto label_3055c8;
        case 0x3055ccu: goto label_3055cc;
        case 0x3055d0u: goto label_3055d0;
        case 0x3055d4u: goto label_3055d4;
        case 0x3055d8u: goto label_3055d8;
        case 0x3055dcu: goto label_3055dc;
        case 0x3055e0u: goto label_3055e0;
        case 0x3055e4u: goto label_3055e4;
        case 0x3055e8u: goto label_3055e8;
        case 0x3055ecu: goto label_3055ec;
        case 0x3055f0u: goto label_3055f0;
        case 0x3055f4u: goto label_3055f4;
        case 0x3055f8u: goto label_3055f8;
        case 0x3055fcu: goto label_3055fc;
        case 0x305600u: goto label_305600;
        case 0x305604u: goto label_305604;
        case 0x305608u: goto label_305608;
        case 0x30560cu: goto label_30560c;
        case 0x305610u: goto label_305610;
        case 0x305614u: goto label_305614;
        case 0x305618u: goto label_305618;
        case 0x30561cu: goto label_30561c;
        case 0x305620u: goto label_305620;
        case 0x305624u: goto label_305624;
        case 0x305628u: goto label_305628;
        case 0x30562cu: goto label_30562c;
        case 0x305630u: goto label_305630;
        case 0x305634u: goto label_305634;
        case 0x305638u: goto label_305638;
        case 0x30563cu: goto label_30563c;
        case 0x305640u: goto label_305640;
        case 0x305644u: goto label_305644;
        case 0x305648u: goto label_305648;
        case 0x30564cu: goto label_30564c;
        case 0x305650u: goto label_305650;
        case 0x305654u: goto label_305654;
        case 0x305658u: goto label_305658;
        case 0x30565cu: goto label_30565c;
        case 0x305660u: goto label_305660;
        case 0x305664u: goto label_305664;
        case 0x305668u: goto label_305668;
        case 0x30566cu: goto label_30566c;
        case 0x305670u: goto label_305670;
        case 0x305674u: goto label_305674;
        case 0x305678u: goto label_305678;
        case 0x30567cu: goto label_30567c;
        case 0x305680u: goto label_305680;
        case 0x305684u: goto label_305684;
        case 0x305688u: goto label_305688;
        case 0x30568cu: goto label_30568c;
        case 0x305690u: goto label_305690;
        case 0x305694u: goto label_305694;
        case 0x305698u: goto label_305698;
        case 0x30569cu: goto label_30569c;
        case 0x3056a0u: goto label_3056a0;
        case 0x3056a4u: goto label_3056a4;
        case 0x3056a8u: goto label_3056a8;
        case 0x3056acu: goto label_3056ac;
        case 0x3056b0u: goto label_3056b0;
        case 0x3056b4u: goto label_3056b4;
        case 0x3056b8u: goto label_3056b8;
        case 0x3056bcu: goto label_3056bc;
        case 0x3056c0u: goto label_3056c0;
        case 0x3056c4u: goto label_3056c4;
        case 0x3056c8u: goto label_3056c8;
        case 0x3056ccu: goto label_3056cc;
        case 0x3056d0u: goto label_3056d0;
        case 0x3056d4u: goto label_3056d4;
        case 0x3056d8u: goto label_3056d8;
        case 0x3056dcu: goto label_3056dc;
        case 0x3056e0u: goto label_3056e0;
        case 0x3056e4u: goto label_3056e4;
        case 0x3056e8u: goto label_3056e8;
        case 0x3056ecu: goto label_3056ec;
        case 0x3056f0u: goto label_3056f0;
        case 0x3056f4u: goto label_3056f4;
        case 0x3056f8u: goto label_3056f8;
        case 0x3056fcu: goto label_3056fc;
        case 0x305700u: goto label_305700;
        case 0x305704u: goto label_305704;
        case 0x305708u: goto label_305708;
        case 0x30570cu: goto label_30570c;
        case 0x305710u: goto label_305710;
        case 0x305714u: goto label_305714;
        case 0x305718u: goto label_305718;
        case 0x30571cu: goto label_30571c;
        case 0x305720u: goto label_305720;
        case 0x305724u: goto label_305724;
        case 0x305728u: goto label_305728;
        case 0x30572cu: goto label_30572c;
        case 0x305730u: goto label_305730;
        case 0x305734u: goto label_305734;
        case 0x305738u: goto label_305738;
        case 0x30573cu: goto label_30573c;
        case 0x305740u: goto label_305740;
        case 0x305744u: goto label_305744;
        case 0x305748u: goto label_305748;
        case 0x30574cu: goto label_30574c;
        case 0x305750u: goto label_305750;
        case 0x305754u: goto label_305754;
        case 0x305758u: goto label_305758;
        case 0x30575cu: goto label_30575c;
        case 0x305760u: goto label_305760;
        case 0x305764u: goto label_305764;
        case 0x305768u: goto label_305768;
        case 0x30576cu: goto label_30576c;
        case 0x305770u: goto label_305770;
        case 0x305774u: goto label_305774;
        case 0x305778u: goto label_305778;
        case 0x30577cu: goto label_30577c;
        case 0x305780u: goto label_305780;
        case 0x305784u: goto label_305784;
        case 0x305788u: goto label_305788;
        case 0x30578cu: goto label_30578c;
        case 0x305790u: goto label_305790;
        case 0x305794u: goto label_305794;
        case 0x305798u: goto label_305798;
        case 0x30579cu: goto label_30579c;
        case 0x3057a0u: goto label_3057a0;
        case 0x3057a4u: goto label_3057a4;
        case 0x3057a8u: goto label_3057a8;
        case 0x3057acu: goto label_3057ac;
        case 0x3057b0u: goto label_3057b0;
        case 0x3057b4u: goto label_3057b4;
        case 0x3057b8u: goto label_3057b8;
        case 0x3057bcu: goto label_3057bc;
        case 0x3057c0u: goto label_3057c0;
        case 0x3057c4u: goto label_3057c4;
        case 0x3057c8u: goto label_3057c8;
        case 0x3057ccu: goto label_3057cc;
        case 0x3057d0u: goto label_3057d0;
        case 0x3057d4u: goto label_3057d4;
        case 0x3057d8u: goto label_3057d8;
        case 0x3057dcu: goto label_3057dc;
        case 0x3057e0u: goto label_3057e0;
        case 0x3057e4u: goto label_3057e4;
        case 0x3057e8u: goto label_3057e8;
        case 0x3057ecu: goto label_3057ec;
        case 0x3057f0u: goto label_3057f0;
        case 0x3057f4u: goto label_3057f4;
        case 0x3057f8u: goto label_3057f8;
        case 0x3057fcu: goto label_3057fc;
        case 0x305800u: goto label_305800;
        case 0x305804u: goto label_305804;
        case 0x305808u: goto label_305808;
        case 0x30580cu: goto label_30580c;
        case 0x305810u: goto label_305810;
        case 0x305814u: goto label_305814;
        case 0x305818u: goto label_305818;
        case 0x30581cu: goto label_30581c;
        case 0x305820u: goto label_305820;
        case 0x305824u: goto label_305824;
        case 0x305828u: goto label_305828;
        case 0x30582cu: goto label_30582c;
        case 0x305830u: goto label_305830;
        case 0x305834u: goto label_305834;
        case 0x305838u: goto label_305838;
        case 0x30583cu: goto label_30583c;
        case 0x305840u: goto label_305840;
        case 0x305844u: goto label_305844;
        case 0x305848u: goto label_305848;
        case 0x30584cu: goto label_30584c;
        case 0x305850u: goto label_305850;
        case 0x305854u: goto label_305854;
        case 0x305858u: goto label_305858;
        case 0x30585cu: goto label_30585c;
        case 0x305860u: goto label_305860;
        case 0x305864u: goto label_305864;
        case 0x305868u: goto label_305868;
        case 0x30586cu: goto label_30586c;
        case 0x305870u: goto label_305870;
        case 0x305874u: goto label_305874;
        case 0x305878u: goto label_305878;
        case 0x30587cu: goto label_30587c;
        case 0x305880u: goto label_305880;
        case 0x305884u: goto label_305884;
        case 0x305888u: goto label_305888;
        case 0x30588cu: goto label_30588c;
        case 0x305890u: goto label_305890;
        case 0x305894u: goto label_305894;
        case 0x305898u: goto label_305898;
        case 0x30589cu: goto label_30589c;
        case 0x3058a0u: goto label_3058a0;
        case 0x3058a4u: goto label_3058a4;
        case 0x3058a8u: goto label_3058a8;
        case 0x3058acu: goto label_3058ac;
        case 0x3058b0u: goto label_3058b0;
        case 0x3058b4u: goto label_3058b4;
        case 0x3058b8u: goto label_3058b8;
        case 0x3058bcu: goto label_3058bc;
        case 0x3058c0u: goto label_3058c0;
        case 0x3058c4u: goto label_3058c4;
        case 0x3058c8u: goto label_3058c8;
        case 0x3058ccu: goto label_3058cc;
        case 0x3058d0u: goto label_3058d0;
        case 0x3058d4u: goto label_3058d4;
        case 0x3058d8u: goto label_3058d8;
        case 0x3058dcu: goto label_3058dc;
        case 0x3058e0u: goto label_3058e0;
        case 0x3058e4u: goto label_3058e4;
        case 0x3058e8u: goto label_3058e8;
        case 0x3058ecu: goto label_3058ec;
        case 0x3058f0u: goto label_3058f0;
        case 0x3058f4u: goto label_3058f4;
        case 0x3058f8u: goto label_3058f8;
        case 0x3058fcu: goto label_3058fc;
        case 0x305900u: goto label_305900;
        case 0x305904u: goto label_305904;
        case 0x305908u: goto label_305908;
        case 0x30590cu: goto label_30590c;
        case 0x305910u: goto label_305910;
        case 0x305914u: goto label_305914;
        case 0x305918u: goto label_305918;
        case 0x30591cu: goto label_30591c;
        case 0x305920u: goto label_305920;
        case 0x305924u: goto label_305924;
        case 0x305928u: goto label_305928;
        case 0x30592cu: goto label_30592c;
        case 0x305930u: goto label_305930;
        case 0x305934u: goto label_305934;
        case 0x305938u: goto label_305938;
        case 0x30593cu: goto label_30593c;
        case 0x305940u: goto label_305940;
        case 0x305944u: goto label_305944;
        case 0x305948u: goto label_305948;
        case 0x30594cu: goto label_30594c;
        case 0x305950u: goto label_305950;
        case 0x305954u: goto label_305954;
        case 0x305958u: goto label_305958;
        case 0x30595cu: goto label_30595c;
        case 0x305960u: goto label_305960;
        case 0x305964u: goto label_305964;
        case 0x305968u: goto label_305968;
        case 0x30596cu: goto label_30596c;
        case 0x305970u: goto label_305970;
        case 0x305974u: goto label_305974;
        case 0x305978u: goto label_305978;
        case 0x30597cu: goto label_30597c;
        case 0x305980u: goto label_305980;
        case 0x305984u: goto label_305984;
        case 0x305988u: goto label_305988;
        case 0x30598cu: goto label_30598c;
        case 0x305990u: goto label_305990;
        case 0x305994u: goto label_305994;
        case 0x305998u: goto label_305998;
        case 0x30599cu: goto label_30599c;
        case 0x3059a0u: goto label_3059a0;
        case 0x3059a4u: goto label_3059a4;
        case 0x3059a8u: goto label_3059a8;
        case 0x3059acu: goto label_3059ac;
        case 0x3059b0u: goto label_3059b0;
        case 0x3059b4u: goto label_3059b4;
        case 0x3059b8u: goto label_3059b8;
        case 0x3059bcu: goto label_3059bc;
        case 0x3059c0u: goto label_3059c0;
        case 0x3059c4u: goto label_3059c4;
        case 0x3059c8u: goto label_3059c8;
        case 0x3059ccu: goto label_3059cc;
        case 0x3059d0u: goto label_3059d0;
        case 0x3059d4u: goto label_3059d4;
        case 0x3059d8u: goto label_3059d8;
        case 0x3059dcu: goto label_3059dc;
        case 0x3059e0u: goto label_3059e0;
        case 0x3059e4u: goto label_3059e4;
        case 0x3059e8u: goto label_3059e8;
        case 0x3059ecu: goto label_3059ec;
        case 0x3059f0u: goto label_3059f0;
        case 0x3059f4u: goto label_3059f4;
        case 0x3059f8u: goto label_3059f8;
        case 0x3059fcu: goto label_3059fc;
        case 0x305a00u: goto label_305a00;
        case 0x305a04u: goto label_305a04;
        case 0x305a08u: goto label_305a08;
        case 0x305a0cu: goto label_305a0c;
        case 0x305a10u: goto label_305a10;
        case 0x305a14u: goto label_305a14;
        case 0x305a18u: goto label_305a18;
        case 0x305a1cu: goto label_305a1c;
        case 0x305a20u: goto label_305a20;
        case 0x305a24u: goto label_305a24;
        case 0x305a28u: goto label_305a28;
        case 0x305a2cu: goto label_305a2c;
        case 0x305a30u: goto label_305a30;
        case 0x305a34u: goto label_305a34;
        case 0x305a38u: goto label_305a38;
        case 0x305a3cu: goto label_305a3c;
        case 0x305a40u: goto label_305a40;
        case 0x305a44u: goto label_305a44;
        case 0x305a48u: goto label_305a48;
        case 0x305a4cu: goto label_305a4c;
        case 0x305a50u: goto label_305a50;
        case 0x305a54u: goto label_305a54;
        case 0x305a58u: goto label_305a58;
        case 0x305a5cu: goto label_305a5c;
        case 0x305a60u: goto label_305a60;
        case 0x305a64u: goto label_305a64;
        case 0x305a68u: goto label_305a68;
        case 0x305a6cu: goto label_305a6c;
        case 0x305a70u: goto label_305a70;
        case 0x305a74u: goto label_305a74;
        case 0x305a78u: goto label_305a78;
        case 0x305a7cu: goto label_305a7c;
        case 0x305a80u: goto label_305a80;
        case 0x305a84u: goto label_305a84;
        case 0x305a88u: goto label_305a88;
        case 0x305a8cu: goto label_305a8c;
        case 0x305a90u: goto label_305a90;
        case 0x305a94u: goto label_305a94;
        case 0x305a98u: goto label_305a98;
        case 0x305a9cu: goto label_305a9c;
        case 0x305aa0u: goto label_305aa0;
        default: break;
    }

    ctx->pc = 0x3048b0u;

label_3048b0:
    // 0x3048b0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x3048b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_3048b4:
    // 0x3048b4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3048b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3048b8:
    // 0x3048b8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3048b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3048bc:
    // 0x3048bc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3048bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3048c0:
    // 0x3048c0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3048c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3048c4:
    // 0x3048c4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3048c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3048c8:
    // 0x3048c8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3048c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3048cc:
    // 0x3048cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3048ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3048d0:
    // 0x3048d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3048d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3048d4:
    // 0x3048d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3048d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3048d8:
    // 0x3048d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3048d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3048dc:
    // 0x3048dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3048dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3048e0:
    // 0x3048e0: 0xafa4010c  sw          $a0, 0x10C($sp)
    ctx->pc = 0x3048e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 4));
label_3048e4:
    // 0x3048e4: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x3048e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3048e8:
    // 0x3048e8: 0xc0a0c9c  jal         func_283270
label_3048ec:
    if (ctx->pc == 0x3048ECu) {
        ctx->pc = 0x3048ECu;
            // 0x3048ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3048F0u;
        goto label_3048f0;
    }
    ctx->pc = 0x3048E8u;
    SET_GPR_U32(ctx, 31, 0x3048F0u);
    ctx->pc = 0x3048ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3048E8u;
            // 0x3048ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3048F0u; }
        if (ctx->pc != 0x3048F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignStack__6CSceneFi_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3048F0u; }
        if (ctx->pc != 0x3048F0u) { return; }
    }
    ctx->pc = 0x3048F0u;
label_3048f0:
    // 0x3048f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3048f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3048f4:
    // 0x3048f4: 0xc0a0c64  jal         func_283190
label_3048f8:
    if (ctx->pc == 0x3048F8u) {
        ctx->pc = 0x3048F8u;
            // 0x3048f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3048FCu;
        goto label_3048fc;
    }
    ctx->pc = 0x3048F4u;
    SET_GPR_U32(ctx, 31, 0x3048FCu);
    ctx->pc = 0x3048F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3048F4u;
            // 0x3048f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3048FCu; }
        if (ctx->pc != 0x3048FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3048FCu; }
        if (ctx->pc != 0x3048FCu) { return; }
    }
    ctx->pc = 0x3048FCu;
label_3048fc:
    // 0x3048fc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3048fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304900:
    // 0x304900: 0x340588b8  ori         $a1, $zero, 0x88B8
    ctx->pc = 0x304900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35000);
label_304904:
    // 0x304904: 0xc04e704  jal         func_139C10
label_304908:
    if (ctx->pc == 0x304908u) {
        ctx->pc = 0x304908u;
            // 0x304908: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30490Cu;
        goto label_30490c;
    }
    ctx->pc = 0x304904u;
    SET_GPR_U32(ctx, 31, 0x30490Cu);
    ctx->pc = 0x304908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304904u;
            // 0x304908: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30490Cu; }
        if (ctx->pc != 0x30490Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30490Cu; }
        if (ctx->pc != 0x30490Cu) { return; }
    }
    ctx->pc = 0x30490Cu;
label_30490c:
    // 0x30490c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30490cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_304910:
    // 0x304910: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x304910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304914:
    // 0x304914: 0x2484a220  addiu       $a0, $a0, -0x5DE0
    ctx->pc = 0x304914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943264));
label_304918:
    // 0x304918: 0xc04e79c  jal         func_139E70
label_30491c:
    if (ctx->pc == 0x30491Cu) {
        ctx->pc = 0x30491Cu;
            // 0x30491c: 0x340688b8  ori         $a2, $zero, 0x88B8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35000);
        ctx->pc = 0x304920u;
        goto label_304920;
    }
    ctx->pc = 0x304918u;
    SET_GPR_U32(ctx, 31, 0x304920u);
    ctx->pc = 0x30491Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304918u;
            // 0x30491c: 0x340688b8  ori         $a2, $zero, 0x88B8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304920u; }
        if (ctx->pc != 0x304920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304920u; }
        if (ctx->pc != 0x304920u) { return; }
    }
    ctx->pc = 0x304920u;
label_304920:
    // 0x304920: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x304920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_304924:
    // 0x304924: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x304924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_304928:
    // 0x304928: 0xac20a244  sw          $zero, -0x5DBC($at)
    ctx->pc = 0x304928u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943300), GPR_U32(ctx, 0));
label_30492c:
    // 0x30492c: 0x24057530  addiu       $a1, $zero, 0x7530
    ctx->pc = 0x30492cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
label_304930:
    // 0x304930: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x304930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_304934:
    // 0x304934: 0xc04e704  jal         func_139C10
label_304938:
    if (ctx->pc == 0x304938u) {
        ctx->pc = 0x304938u;
            // 0x304938: 0xac20a23c  sw          $zero, -0x5DC4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943292), GPR_U32(ctx, 0));
        ctx->pc = 0x30493Cu;
        goto label_30493c;
    }
    ctx->pc = 0x304934u;
    SET_GPR_U32(ctx, 31, 0x30493Cu);
    ctx->pc = 0x304938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304934u;
            // 0x304938: 0xac20a23c  sw          $zero, -0x5DC4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30493Cu; }
        if (ctx->pc != 0x30493Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30493Cu; }
        if (ctx->pc != 0x30493Cu) { return; }
    }
    ctx->pc = 0x30493Cu;
label_30493c:
    // 0x30493c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30493cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_304940:
    // 0x304940: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x304940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304944:
    // 0x304944: 0x2484a250  addiu       $a0, $a0, -0x5DB0
    ctx->pc = 0x304944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943312));
label_304948:
    // 0x304948: 0xc04e79c  jal         func_139E70
label_30494c:
    if (ctx->pc == 0x30494Cu) {
        ctx->pc = 0x30494Cu;
            // 0x30494c: 0x24067530  addiu       $a2, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->pc = 0x304950u;
        goto label_304950;
    }
    ctx->pc = 0x304948u;
    SET_GPR_U32(ctx, 31, 0x304950u);
    ctx->pc = 0x30494Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304948u;
            // 0x30494c: 0x24067530  addiu       $a2, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304950u; }
        if (ctx->pc != 0x304950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304950u; }
        if (ctx->pc != 0x304950u) { return; }
    }
    ctx->pc = 0x304950u;
label_304950:
    // 0x304950: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x304950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_304954:
    // 0x304954: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x304954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_304958:
    // 0x304958: 0xac20a274  sw          $zero, -0x5D8C($at)
    ctx->pc = 0x304958u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943348), GPR_U32(ctx, 0));
label_30495c:
    // 0x30495c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30495cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_304960:
    // 0x304960: 0xac20a26c  sw          $zero, -0x5D94($at)
    ctx->pc = 0x304960u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943340), GPR_U32(ctx, 0));
label_304964:
    // 0x304964: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x304964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_304968:
    // 0x304968: 0xc06334c  jal         func_18CD30
label_30496c:
    if (ctx->pc == 0x30496Cu) {
        ctx->pc = 0x30496Cu;
            // 0x30496c: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x304970u;
        goto label_304970;
    }
    ctx->pc = 0x304968u;
    SET_GPR_U32(ctx, 31, 0x304970u);
    ctx->pc = 0x30496Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304968u;
            // 0x30496c: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304970u; }
        if (ctx->pc != 0x304970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304970u; }
        if (ctx->pc != 0x304970u) { return; }
    }
    ctx->pc = 0x304970u;
label_304970:
    // 0x304970: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x304970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_304974:
    // 0x304974: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x304974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_304978:
    // 0x304978: 0x24842240  addiu       $a0, $a0, 0x2240
    ctx->pc = 0x304978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8768));
label_30497c:
    // 0x30497c: 0x27a6017c  addiu       $a2, $sp, 0x17C
    ctx->pc = 0x30497cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_304980:
    // 0x304980: 0xc0524dc  jal         func_149370
label_304984:
    if (ctx->pc == 0x304984u) {
        ctx->pc = 0x304984u;
            // 0x304984: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x304988u;
        goto label_304988;
    }
    ctx->pc = 0x304980u;
    SET_GPR_U32(ctx, 31, 0x304988u);
    ctx->pc = 0x304984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304980u;
            // 0x304984: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304988u; }
        if (ctx->pc != 0x304988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304988u; }
        if (ctx->pc != 0x304988u) { return; }
    }
    ctx->pc = 0x304988u;
label_304988:
    // 0x304988: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x304988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_30498c:
    // 0x30498c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x30498cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_304990:
    // 0x304990: 0xc06368c  jal         func_18DA30
label_304994:
    if (ctx->pc == 0x304994u) {
        ctx->pc = 0x304994u;
            // 0x304994: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x304998u;
        goto label_304998;
    }
    ctx->pc = 0x304990u;
    SET_GPR_U32(ctx, 31, 0x304998u);
    ctx->pc = 0x304994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304990u;
            // 0x304994: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304998u; }
        if (ctx->pc != 0x304998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304998u; }
        if (ctx->pc != 0x304998u) { return; }
    }
    ctx->pc = 0x304998u;
label_304998:
    // 0x304998: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x304998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_30499c:
    // 0x30499c: 0xaf82a110  sw          $v0, -0x5EF0($gp)
    ctx->pc = 0x30499cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942992), GPR_U32(ctx, 2));
label_3049a0:
    // 0x3049a0: 0xc0521f4  jal         func_1487D0
label_3049a4:
    if (ctx->pc == 0x3049A4u) {
        ctx->pc = 0x3049A4u;
            // 0x3049a4: 0x24842258  addiu       $a0, $a0, 0x2258 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8792));
        ctx->pc = 0x3049A8u;
        goto label_3049a8;
    }
    ctx->pc = 0x3049A0u;
    SET_GPR_U32(ctx, 31, 0x3049A8u);
    ctx->pc = 0x3049A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3049A0u;
            // 0x3049a4: 0x24842258  addiu       $a0, $a0, 0x2258 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1487D0u;
    if (runtime->hasFunction(0x1487D0u)) {
        auto targetFn = runtime->lookupFunction(0x1487D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3049A8u; }
        if (ctx->pc != 0x3049A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeDir__FPc_0x1487d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3049A8u; }
        if (ctx->pc != 0x3049A8u) { return; }
    }
    ctx->pc = 0x3049A8u;
label_3049a8:
    // 0x3049a8: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x3049a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3049ac:
    // 0x3049ac: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3049acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3049b0:
    // 0x3049b0: 0xc0866e0  jal         func_219B80
label_3049b4:
    if (ctx->pc == 0x3049B4u) {
        ctx->pc = 0x3049B4u;
            // 0x3049b4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3049B8u;
        goto label_3049b8;
    }
    ctx->pc = 0x3049B0u;
    SET_GPR_U32(ctx, 31, 0x3049B8u);
    ctx->pc = 0x3049B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3049B0u;
            // 0x3049b4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219B80u;
    if (runtime->hasFunction(0x219B80u)) {
        auto targetFn = runtime->lookupFunction(0x219B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3049B8u; }
        if (ctx->pc != 0x3049B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadData__16CGyoraceFishDataFP9mgCMemoryP1_0x219b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3049B8u; }
        if (ctx->pc != 0x3049B8u) { return; }
    }
    ctx->pc = 0x3049B8u;
label_3049b8:
    // 0x3049b8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3049b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_3049bc:
    // 0x3049bc: 0x8c22a240  lw          $v0, -0x5DC0($at)
    ctx->pc = 0x3049bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943296)));
label_3049c0:
    // 0x3049c0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x3049c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_3049c4:
    // 0x3049c4: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x3049c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_3049c8:
    // 0x3049c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3049cc:
    if (ctx->pc == 0x3049CCu) {
        ctx->pc = 0x3049D0u;
        goto label_3049d0;
    }
    ctx->pc = 0x3049C8u;
    {
        const bool branch_taken_0x3049c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3049c8) {
            ctx->pc = 0x3049E8u;
            goto label_3049e8;
        }
    }
    ctx->pc = 0x3049D0u;
label_3049d0:
    // 0x3049d0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x3049d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3049d4:
    // 0x3049d4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x3049d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_3049d8:
    // 0x3049d8: 0x24842268  addiu       $a0, $a0, 0x2268
    ctx->pc = 0x3049d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8808));
label_3049dc:
    // 0x3049dc: 0x27a6017c  addiu       $a2, $sp, 0x17C
    ctx->pc = 0x3049dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_3049e0:
    // 0x3049e0: 0xc0524dc  jal         func_149370
label_3049e4:
    if (ctx->pc == 0x3049E4u) {
        ctx->pc = 0x3049E4u;
            // 0x3049e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3049E8u;
        goto label_3049e8;
    }
    ctx->pc = 0x3049E0u;
    SET_GPR_U32(ctx, 31, 0x3049E8u);
    ctx->pc = 0x3049E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3049E0u;
            // 0x3049e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3049E8u; }
        if (ctx->pc != 0x3049E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3049E8u; }
        if (ctx->pc != 0x3049E8u) { return; }
    }
    ctx->pc = 0x3049E8u;
label_3049e8:
    // 0x3049e8: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x3049e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_3049ec:
    // 0x3049ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3049ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3049f0:
    // 0x3049f0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_3049f4:
    if (ctx->pc == 0x3049F4u) {
        ctx->pc = 0x3049F4u;
            // 0x3049f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3049F8u;
        goto label_3049f8;
    }
    ctx->pc = 0x3049F0u;
    {
        const bool branch_taken_0x3049f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3049F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3049F0u;
            // 0x3049f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3049f0) {
            ctx->pc = 0x304A14u;
            goto label_304a14;
        }
    }
    ctx->pc = 0x3049F8u;
label_3049f8:
    // 0x3049f8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x3049f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3049fc:
    // 0x3049fc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x3049fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_304a00:
    // 0x304a00: 0x24842278  addiu       $a0, $a0, 0x2278
    ctx->pc = 0x304a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8824));
label_304a04:
    // 0x304a04: 0x27a6017c  addiu       $a2, $sp, 0x17C
    ctx->pc = 0x304a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_304a08:
    // 0x304a08: 0xc0524dc  jal         func_149370
label_304a0c:
    if (ctx->pc == 0x304A0Cu) {
        ctx->pc = 0x304A0Cu;
            // 0x304a0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x304A10u;
        goto label_304a10;
    }
    ctx->pc = 0x304A08u;
    SET_GPR_U32(ctx, 31, 0x304A10u);
    ctx->pc = 0x304A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304A08u;
            // 0x304a0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304A10u; }
        if (ctx->pc != 0x304A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304A10u; }
        if (ctx->pc != 0x304A10u) { return; }
    }
    ctx->pc = 0x304A10u;
label_304a10:
    // 0x304a10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x304a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_304a14:
    // 0x304a14: 0xc04e748  jal         func_139D20
label_304a18:
    if (ctx->pc == 0x304A18u) {
        ctx->pc = 0x304A18u;
            // 0x304a18: 0x24050220  addiu       $a1, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->pc = 0x304A1Cu;
        goto label_304a1c;
    }
    ctx->pc = 0x304A14u;
    SET_GPR_U32(ctx, 31, 0x304A1Cu);
    ctx->pc = 0x304A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304A14u;
            // 0x304a18: 0x24050220  addiu       $a1, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304A1Cu; }
        if (ctx->pc != 0x304A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304A1Cu; }
        if (ctx->pc != 0x304A1Cu) { return; }
    }
    ctx->pc = 0x304A1Cu;
label_304a1c:
    // 0x304a1c: 0x240421e0  addiu       $a0, $zero, 0x21E0
    ctx->pc = 0x304a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8672));
label_304a20:
    // 0x304a20: 0xc04e638  jal         func_1398E0
label_304a24:
    if (ctx->pc == 0x304A24u) {
        ctx->pc = 0x304A24u;
            // 0x304a24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x304A28u;
        goto label_304a28;
    }
    ctx->pc = 0x304A20u;
    SET_GPR_U32(ctx, 31, 0x304A28u);
    ctx->pc = 0x304A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304A20u;
            // 0x304a24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304A28u; }
        if (ctx->pc != 0x304A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304A28u; }
        if (ctx->pc != 0x304A28u) { return; }
    }
    ctx->pc = 0x304A28u;
label_304a28:
    // 0x304a28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_304a2c:
    if (ctx->pc == 0x304A2Cu) {
        ctx->pc = 0x304A2Cu;
            // 0x304a2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x304A30u;
        goto label_304a30;
    }
    ctx->pc = 0x304A28u;
    {
        const bool branch_taken_0x304a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304A28u;
            // 0x304a2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a28) {
            ctx->pc = 0x304A38u;
            goto label_304a38;
        }
    }
    ctx->pc = 0x304A30u;
label_304a30:
    // 0x304a30: 0xc054aa4  jal         func_152A90
label_304a34:
    if (ctx->pc == 0x304A34u) {
        ctx->pc = 0x304A38u;
        goto label_304a38;
    }
    ctx->pc = 0x304A30u;
    SET_GPR_U32(ctx, 31, 0x304A38u);
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304A38u; }
        if (ctx->pc != 0x304A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304A38u; }
        if (ctx->pc != 0x304A38u) { return; }
    }
    ctx->pc = 0x304A38u;
label_304a38:
    // 0x304a38: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x304a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_304a3c:
    // 0x304a3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x304a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304a40:
    // 0x304a40: 0xc054ba8  jal         func_152EA0
label_304a44:
    if (ctx->pc == 0x304A44u) {
        ctx->pc = 0x304A44u;
            // 0x304a44: 0xaf82a170  sw          $v0, -0x5E90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943088), GPR_U32(ctx, 2));
        ctx->pc = 0x304A48u;
        goto label_304a48;
    }
    ctx->pc = 0x304A40u;
    SET_GPR_U32(ctx, 31, 0x304A48u);
    ctx->pc = 0x304A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304A40u;
            // 0x304a44: 0xaf82a170  sw          $v0, -0x5E90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304A48u; }
        if (ctx->pc != 0x304A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304A48u; }
        if (ctx->pc != 0x304A48u) { return; }
    }
    ctx->pc = 0x304A48u;
label_304a48:
    // 0x304a48: 0xc065a18  jal         func_196860
label_304a4c:
    if (ctx->pc == 0x304A4Cu) {
        ctx->pc = 0x304A50u;
        goto label_304a50;
    }
    ctx->pc = 0x304A48u;
    SET_GPR_U32(ctx, 31, 0x304A50u);
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304A50u; }
        if (ctx->pc != 0x304A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304A50u; }
        if (ctx->pc != 0x304A50u) { return; }
    }
    ctx->pc = 0x304A50u;
label_304a50:
    // 0x304a50: 0x8f84a170  lw          $a0, -0x5E90($gp)
    ctx->pc = 0x304a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
label_304a54:
    // 0x304a54: 0xc054bac  jal         func_152EB0
label_304a58:
    if (ctx->pc == 0x304A58u) {
        ctx->pc = 0x304A58u;
            // 0x304a58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x304A5Cu;
        goto label_304a5c;
    }
    ctx->pc = 0x304A54u;
    SET_GPR_U32(ctx, 31, 0x304A5Cu);
    ctx->pc = 0x304A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304A54u;
            // 0x304a58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304A5Cu; }
        if (ctx->pc != 0x304A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304A5Cu; }
        if (ctx->pc != 0x304A5Cu) { return; }
    }
    ctx->pc = 0x304A5Cu;
label_304a5c:
    // 0x304a5c: 0x8f93a170  lw          $s3, -0x5E90($gp)
    ctx->pc = 0x304a5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
label_304a60:
    // 0x304a60: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x304a60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304a64:
    // 0x304a64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x304a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304a68:
    // 0x304a68: 0xae6000b4  sw          $zero, 0xB4($s3)
    ctx->pc = 0x304a68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 0));
label_304a6c:
    // 0x304a6c: 0xae6000d4  sw          $zero, 0xD4($s3)
    ctx->pc = 0x304a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 0));
label_304a70:
    // 0x304a70: 0xae6000d8  sw          $zero, 0xD8($s3)
    ctx->pc = 0x304a70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 216), GPR_U32(ctx, 0));
label_304a74:
    // 0x304a74: 0xae6000dc  sw          $zero, 0xDC($s3)
    ctx->pc = 0x304a74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 220), GPR_U32(ctx, 0));
label_304a78:
    // 0x304a78: 0xae6000e0  sw          $zero, 0xE0($s3)
    ctx->pc = 0x304a78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 0));
label_304a7c:
    // 0x304a7c: 0xae6000e4  sw          $zero, 0xE4($s3)
    ctx->pc = 0x304a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 228), GPR_U32(ctx, 0));
label_304a80:
    // 0x304a80: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x304a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_304a84:
    // 0x304a84: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x304a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_304a88:
    // 0x304a88: 0xaca000e8  sw          $zero, 0xE8($a1)
    ctx->pc = 0x304a88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 0));
label_304a8c:
    // 0x304a8c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x304a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_304a90:
    // 0x304a90: 0xaca000ec  sw          $zero, 0xEC($a1)
    ctx->pc = 0x304a90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 0));
label_304a94:
    // 0x304a94: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x304a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_304a98:
    // 0x304a98: 0xaca000f0  sw          $zero, 0xF0($a1)
    ctx->pc = 0x304a98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 0));
label_304a9c:
    // 0x304a9c: 0xaca000f4  sw          $zero, 0xF4($a1)
    ctx->pc = 0x304a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 0));
label_304aa0:
    // 0x304aa0: 0xaca000f8  sw          $zero, 0xF8($a1)
    ctx->pc = 0x304aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 0));
label_304aa4:
    // 0x304aa4: 0xaca000fc  sw          $zero, 0xFC($a1)
    ctx->pc = 0x304aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 0));
label_304aa8:
    // 0x304aa8: 0xaca00100  sw          $zero, 0x100($a1)
    ctx->pc = 0x304aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 0));
label_304aac:
    // 0x304aac: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_304ab0:
    if (ctx->pc == 0x304AB0u) {
        ctx->pc = 0x304AB0u;
            // 0x304ab0: 0xaca00104  sw          $zero, 0x104($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
        ctx->pc = 0x304AB4u;
        goto label_304ab4;
    }
    ctx->pc = 0x304AACu;
    {
        const bool branch_taken_0x304aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304AACu;
            // 0x304ab0: 0xaca00104  sw          $zero, 0x104($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304aac) {
            ctx->pc = 0x304A80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_304a80;
        }
    }
    ctx->pc = 0x304AB4u;
label_304ab4:
    // 0x304ab4: 0xae600128  sw          $zero, 0x128($s3)
    ctx->pc = 0x304ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 296), GPR_U32(ctx, 0));
label_304ab8:
    // 0x304ab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304abc:
    // 0x304abc: 0xae60012c  sw          $zero, 0x12C($s3)
    ctx->pc = 0x304abcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 300), GPR_U32(ctx, 0));
label_304ac0:
    // 0x304ac0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x304ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_304ac4:
    // 0x304ac4: 0xae600188  sw          $zero, 0x188($s3)
    ctx->pc = 0x304ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 392), GPR_U32(ctx, 0));
label_304ac8:
    // 0x304ac8: 0xc0547dc  jal         func_151F70
label_304acc:
    if (ctx->pc == 0x304ACCu) {
        ctx->pc = 0x304ACCu;
            // 0x304acc: 0xae62018c  sw          $v0, 0x18C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 396), GPR_U32(ctx, 2));
        ctx->pc = 0x304AD0u;
        goto label_304ad0;
    }
    ctx->pc = 0x304AC8u;
    SET_GPR_U32(ctx, 31, 0x304AD0u);
    ctx->pc = 0x304ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304AC8u;
            // 0x304acc: 0xae62018c  sw          $v0, 0x18C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304AD0u; }
        if (ctx->pc != 0x304AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304AD0u; }
        if (ctx->pc != 0x304AD0u) { return; }
    }
    ctx->pc = 0x304AD0u;
label_304ad0:
    // 0x304ad0: 0xe66001b8  swc1        $f0, 0x1B8($s3)
    ctx->pc = 0x304ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 440), bits); }
label_304ad4:
    // 0x304ad4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x304ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_304ad8:
    // 0x304ad8: 0xae6001c0  sw          $zero, 0x1C0($s3)
    ctx->pc = 0x304ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 448), GPR_U32(ctx, 0));
label_304adc:
    // 0x304adc: 0xae6001cc  sw          $zero, 0x1CC($s3)
    ctx->pc = 0x304adcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 460), GPR_U32(ctx, 0));
label_304ae0:
    // 0x304ae0: 0xae6001d0  sw          $zero, 0x1D0($s3)
    ctx->pc = 0x304ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 464), GPR_U32(ctx, 0));
label_304ae4:
    // 0x304ae4: 0xae6001d4  sw          $zero, 0x1D4($s3)
    ctx->pc = 0x304ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 468), GPR_U32(ctx, 0));
label_304ae8:
    // 0x304ae8: 0xae6001d8  sw          $zero, 0x1D8($s3)
    ctx->pc = 0x304ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 472), GPR_U32(ctx, 0));
label_304aec:
    // 0x304aec: 0xc0557f0  jal         func_155FC0
label_304af0:
    if (ctx->pc == 0x304AF0u) {
        ctx->pc = 0x304AF0u;
            // 0x304af0: 0xae6001dc  sw          $zero, 0x1DC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 476), GPR_U32(ctx, 0));
        ctx->pc = 0x304AF4u;
        goto label_304af4;
    }
    ctx->pc = 0x304AECu;
    SET_GPR_U32(ctx, 31, 0x304AF4u);
    ctx->pc = 0x304AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304AECu;
            // 0x304af0: 0xae6001dc  sw          $zero, 0x1DC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304AF4u; }
        if (ctx->pc != 0x304AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMesWinTbl__6ClsMesFv_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304AF4u; }
        if (ctx->pc != 0x304AF4u) { return; }
    }
    ctx->pc = 0x304AF4u;
label_304af4:
    // 0x304af4: 0x8e6517d0  lw          $a1, 0x17D0($s3)
    ctx->pc = 0x304af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6096)));
label_304af8:
    // 0x304af8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x304af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_304afc:
    // 0x304afc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x304afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_304b00:
    // 0x304b00: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x304b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_304b04:
    // 0x304b04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x304b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304b08:
    // 0x304b08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x304b08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304b0c:
    // 0x304b0c: 0xae6517d4  sw          $a1, 0x17D4($s3)
    ctx->pc = 0x304b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6100), GPR_U32(ctx, 5));
label_304b10:
    // 0x304b10: 0xae6017d8  sw          $zero, 0x17D8($s3)
    ctx->pc = 0x304b10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6104), GPR_U32(ctx, 0));
label_304b14:
    // 0x304b14: 0xae6017dc  sw          $zero, 0x17DC($s3)
    ctx->pc = 0x304b14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6108), GPR_U32(ctx, 0));
label_304b18:
    // 0x304b18: 0xae6417e0  sw          $a0, 0x17E0($s3)
    ctx->pc = 0x304b18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6112), GPR_U32(ctx, 4));
label_304b1c:
    // 0x304b1c: 0xae6317e4  sw          $v1, 0x17E4($s3)
    ctx->pc = 0x304b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6116), GPR_U32(ctx, 3));
label_304b20:
    // 0x304b20: 0xae6017e8  sw          $zero, 0x17E8($s3)
    ctx->pc = 0x304b20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6120), GPR_U32(ctx, 0));
label_304b24:
    // 0x304b24: 0xa2621800  sb          $v0, 0x1800($s3)
    ctx->pc = 0x304b24u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6144), (uint8_t)GPR_U32(ctx, 2));
label_304b28:
    // 0x304b28: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x304b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_304b2c:
    // 0x304b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x304b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304b30:
    // 0x304b30: 0x24441801  addiu       $a0, $v0, 0x1801
    ctx->pc = 0x304b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
label_304b34:
    // 0x304b34: 0xc049c86  jal         func_127218
label_304b38:
    if (ctx->pc == 0x304B38u) {
        ctx->pc = 0x304B38u;
            // 0x304b38: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x304B3Cu;
        goto label_304b3c;
    }
    ctx->pc = 0x304B34u;
    SET_GPR_U32(ctx, 31, 0x304B3Cu);
    ctx->pc = 0x304B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304B34u;
            // 0x304b38: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304B3Cu; }
        if (ctx->pc != 0x304B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304B3Cu; }
        if (ctx->pc != 0x304B3Cu) { return; }
    }
    ctx->pc = 0x304B3Cu;
label_304b3c:
    // 0x304b3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x304b3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_304b40:
    // 0x304b40: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x304b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_304b44:
    // 0x304b44: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_304b48:
    if (ctx->pc == 0x304B48u) {
        ctx->pc = 0x304B48u;
            // 0x304b48: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x304B4Cu;
        goto label_304b4c;
    }
    ctx->pc = 0x304B44u;
    {
        const bool branch_taken_0x304b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304B44u;
            // 0x304b48: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b44) {
            ctx->pc = 0x304B28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_304b28;
        }
    }
    ctx->pc = 0x304B4Cu;
label_304b4c:
    // 0x304b4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x304b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304b50:
    // 0x304b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x304b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304b54:
    // 0x304b54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x304b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_304b58:
    // 0x304b58: 0x2653021  addu        $a2, $s3, $a1
    ctx->pc = 0x304b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_304b5c:
    // 0x304b5c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x304b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_304b60:
    // 0x304b60: 0xacc31a04  sw          $v1, 0x1A04($a2)
    ctx->pc = 0x304b60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6660), GPR_U32(ctx, 3));
label_304b64:
    // 0x304b64: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x304b64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
label_304b68:
    // 0x304b68: 0xacc31a08  sw          $v1, 0x1A08($a2)
    ctx->pc = 0x304b68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6664), GPR_U32(ctx, 3));
label_304b6c:
    // 0x304b6c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x304b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_304b70:
    // 0x304b70: 0xacc31a0c  sw          $v1, 0x1A0C($a2)
    ctx->pc = 0x304b70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6668), GPR_U32(ctx, 3));
label_304b74:
    // 0x304b74: 0xacc31a10  sw          $v1, 0x1A10($a2)
    ctx->pc = 0x304b74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6672), GPR_U32(ctx, 3));
label_304b78:
    // 0x304b78: 0xacc31a14  sw          $v1, 0x1A14($a2)
    ctx->pc = 0x304b78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6676), GPR_U32(ctx, 3));
label_304b7c:
    // 0x304b7c: 0xacc31a18  sw          $v1, 0x1A18($a2)
    ctx->pc = 0x304b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6680), GPR_U32(ctx, 3));
label_304b80:
    // 0x304b80: 0xacc31a1c  sw          $v1, 0x1A1C($a2)
    ctx->pc = 0x304b80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6684), GPR_U32(ctx, 3));
label_304b84:
    // 0x304b84: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_304b88:
    if (ctx->pc == 0x304B88u) {
        ctx->pc = 0x304B88u;
            // 0x304b88: 0xacc31a20  sw          $v1, 0x1A20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6688), GPR_U32(ctx, 3));
        ctx->pc = 0x304B8Cu;
        goto label_304b8c;
    }
    ctx->pc = 0x304B84u;
    {
        const bool branch_taken_0x304b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304B84u;
            // 0x304b88: 0xacc31a20  sw          $v1, 0x1A20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b84) {
            ctx->pc = 0x304B58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_304b58;
        }
    }
    ctx->pc = 0x304B8Cu;
label_304b8c:
    // 0x304b8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x304b8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304b90:
    // 0x304b90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x304b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304b94:
    // 0x304b94: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x304b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_304b98:
    // 0x304b98: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x304b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_304b9c:
    // 0x304b9c: 0xaca01a44  sw          $zero, 0x1A44($a1)
    ctx->pc = 0x304b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6724), GPR_U32(ctx, 0));
label_304ba0:
    // 0x304ba0: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x304ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_304ba4:
    // 0x304ba4: 0xaca01a84  sw          $zero, 0x1A84($a1)
    ctx->pc = 0x304ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6788), GPR_U32(ctx, 0));
label_304ba8:
    // 0x304ba8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x304ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_304bac:
    // 0x304bac: 0xaca01a48  sw          $zero, 0x1A48($a1)
    ctx->pc = 0x304bacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6728), GPR_U32(ctx, 0));
label_304bb0:
    // 0x304bb0: 0xaca01a88  sw          $zero, 0x1A88($a1)
    ctx->pc = 0x304bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6792), GPR_U32(ctx, 0));
label_304bb4:
    // 0x304bb4: 0xaca01a4c  sw          $zero, 0x1A4C($a1)
    ctx->pc = 0x304bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6732), GPR_U32(ctx, 0));
label_304bb8:
    // 0x304bb8: 0xaca01a8c  sw          $zero, 0x1A8C($a1)
    ctx->pc = 0x304bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6796), GPR_U32(ctx, 0));
label_304bbc:
    // 0x304bbc: 0xaca01a50  sw          $zero, 0x1A50($a1)
    ctx->pc = 0x304bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6736), GPR_U32(ctx, 0));
label_304bc0:
    // 0x304bc0: 0xaca01a90  sw          $zero, 0x1A90($a1)
    ctx->pc = 0x304bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6800), GPR_U32(ctx, 0));
label_304bc4:
    // 0x304bc4: 0xaca01a54  sw          $zero, 0x1A54($a1)
    ctx->pc = 0x304bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6740), GPR_U32(ctx, 0));
label_304bc8:
    // 0x304bc8: 0xaca01a94  sw          $zero, 0x1A94($a1)
    ctx->pc = 0x304bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6804), GPR_U32(ctx, 0));
label_304bcc:
    // 0x304bcc: 0xaca01a58  sw          $zero, 0x1A58($a1)
    ctx->pc = 0x304bccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6744), GPR_U32(ctx, 0));
label_304bd0:
    // 0x304bd0: 0xaca01a98  sw          $zero, 0x1A98($a1)
    ctx->pc = 0x304bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6808), GPR_U32(ctx, 0));
label_304bd4:
    // 0x304bd4: 0xaca01a5c  sw          $zero, 0x1A5C($a1)
    ctx->pc = 0x304bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6748), GPR_U32(ctx, 0));
label_304bd8:
    // 0x304bd8: 0xaca01a9c  sw          $zero, 0x1A9C($a1)
    ctx->pc = 0x304bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6812), GPR_U32(ctx, 0));
label_304bdc:
    // 0x304bdc: 0xaca01a60  sw          $zero, 0x1A60($a1)
    ctx->pc = 0x304bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6752), GPR_U32(ctx, 0));
label_304be0:
    // 0x304be0: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_304be4:
    if (ctx->pc == 0x304BE4u) {
        ctx->pc = 0x304BE4u;
            // 0x304be4: 0xaca01aa0  sw          $zero, 0x1AA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 6816), GPR_U32(ctx, 0));
        ctx->pc = 0x304BE8u;
        goto label_304be8;
    }
    ctx->pc = 0x304BE0u;
    {
        const bool branch_taken_0x304be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304BE0u;
            // 0x304be4: 0xaca01aa0  sw          $zero, 0x1AA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 6816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304be0) {
            ctx->pc = 0x304B94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_304b94;
        }
    }
    ctx->pc = 0x304BE8u;
label_304be8:
    // 0x304be8: 0xae601ac4  sw          $zero, 0x1AC4($s3)
    ctx->pc = 0x304be8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6852), GPR_U32(ctx, 0));
label_304bec:
    // 0x304bec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304bf0:
    // 0x304bf0: 0xae601ac8  sw          $zero, 0x1AC8($s3)
    ctx->pc = 0x304bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6856), GPR_U32(ctx, 0));
label_304bf4:
    // 0x304bf4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x304bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_304bf8:
    // 0x304bf8: 0xae621acc  sw          $v0, 0x1ACC($s3)
    ctx->pc = 0x304bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6860), GPR_U32(ctx, 2));
label_304bfc:
    // 0x304bfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x304bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304c00:
    // 0x304c00: 0xae601ad0  sw          $zero, 0x1AD0($s3)
    ctx->pc = 0x304c00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6864), GPR_U32(ctx, 0));
label_304c04:
    // 0x304c04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x304c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304c08:
    // 0x304c08: 0xae601ad4  sw          $zero, 0x1AD4($s3)
    ctx->pc = 0x304c08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6868), GPR_U32(ctx, 0));
label_304c0c:
    // 0x304c0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x304c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304c10:
    // 0x304c10: 0xae601ad8  sw          $zero, 0x1AD8($s3)
    ctx->pc = 0x304c10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6872), GPR_U32(ctx, 0));
label_304c14:
    // 0x304c14: 0xae631adc  sw          $v1, 0x1ADC($s3)
    ctx->pc = 0x304c14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6876), GPR_U32(ctx, 3));
label_304c18:
    // 0x304c18: 0xae631ae0  sw          $v1, 0x1AE0($s3)
    ctx->pc = 0x304c18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6880), GPR_U32(ctx, 3));
label_304c1c:
    // 0x304c1c: 0xae631ae4  sw          $v1, 0x1AE4($s3)
    ctx->pc = 0x304c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6884), GPR_U32(ctx, 3));
label_304c20:
    // 0x304c20: 0xae601ae8  sw          $zero, 0x1AE8($s3)
    ctx->pc = 0x304c20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6888), GPR_U32(ctx, 0));
label_304c24:
    // 0x304c24: 0xae601aec  sw          $zero, 0x1AEC($s3)
    ctx->pc = 0x304c24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6892), GPR_U32(ctx, 0));
label_304c28:
    // 0x304c28: 0xae601af0  sw          $zero, 0x1AF0($s3)
    ctx->pc = 0x304c28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6896), GPR_U32(ctx, 0));
label_304c2c:
    // 0x304c2c: 0xae601af4  sw          $zero, 0x1AF4($s3)
    ctx->pc = 0x304c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6900), GPR_U32(ctx, 0));
label_304c30:
    // 0x304c30: 0xae601af8  sw          $zero, 0x1AF8($s3)
    ctx->pc = 0x304c30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6904), GPR_U32(ctx, 0));
label_304c34:
    // 0x304c34: 0xae601afc  sw          $zero, 0x1AFC($s3)
    ctx->pc = 0x304c34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6908), GPR_U32(ctx, 0));
label_304c38:
    // 0x304c38: 0xae601b00  sw          $zero, 0x1B00($s3)
    ctx->pc = 0x304c38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6912), GPR_U32(ctx, 0));
label_304c3c:
    // 0x304c3c: 0xae631b04  sw          $v1, 0x1B04($s3)
    ctx->pc = 0x304c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6916), GPR_U32(ctx, 3));
label_304c40:
    // 0x304c40: 0xae631b08  sw          $v1, 0x1B08($s3)
    ctx->pc = 0x304c40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6920), GPR_U32(ctx, 3));
label_304c44:
    // 0x304c44: 0xae631b0c  sw          $v1, 0x1B0C($s3)
    ctx->pc = 0x304c44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6924), GPR_U32(ctx, 3));
label_304c48:
    // 0x304c48: 0xae631b10  sw          $v1, 0x1B10($s3)
    ctx->pc = 0x304c48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6928), GPR_U32(ctx, 3));
label_304c4c:
    // 0x304c4c: 0xae601b14  sw          $zero, 0x1B14($s3)
    ctx->pc = 0x304c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6932), GPR_U32(ctx, 0));
label_304c50:
    // 0x304c50: 0xae601b18  sw          $zero, 0x1B18($s3)
    ctx->pc = 0x304c50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6936), GPR_U32(ctx, 0));
label_304c54:
    // 0x304c54: 0xae601b1c  sw          $zero, 0x1B1C($s3)
    ctx->pc = 0x304c54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6940), GPR_U32(ctx, 0));
label_304c58:
    // 0x304c58: 0xae601b20  sw          $zero, 0x1B20($s3)
    ctx->pc = 0x304c58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6944), GPR_U32(ctx, 0));
label_304c5c:
    // 0x304c5c: 0xae601b24  sw          $zero, 0x1B24($s3)
    ctx->pc = 0x304c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6948), GPR_U32(ctx, 0));
label_304c60:
    // 0x304c60: 0xae601b28  sw          $zero, 0x1B28($s3)
    ctx->pc = 0x304c60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6952), GPR_U32(ctx, 0));
label_304c64:
    // 0x304c64: 0xae601b30  sw          $zero, 0x1B30($s3)
    ctx->pc = 0x304c64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6960), GPR_U32(ctx, 0));
label_304c68:
    // 0x304c68: 0xae601b34  sw          $zero, 0x1B34($s3)
    ctx->pc = 0x304c68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6964), GPR_U32(ctx, 0));
label_304c6c:
    // 0x304c6c: 0xae601b3c  sw          $zero, 0x1B3C($s3)
    ctx->pc = 0x304c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6972), GPR_U32(ctx, 0));
label_304c70:
    // 0x304c70: 0xae601b38  sw          $zero, 0x1B38($s3)
    ctx->pc = 0x304c70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6968), GPR_U32(ctx, 0));
label_304c74:
    // 0x304c74: 0xae601b40  sw          $zero, 0x1B40($s3)
    ctx->pc = 0x304c74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6976), GPR_U32(ctx, 0));
label_304c78:
    // 0x304c78: 0x2653821  addu        $a3, $s3, $a1
    ctx->pc = 0x304c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_304c7c:
    // 0x304c7c: 0x2661021  addu        $v0, $s3, $a2
    ctx->pc = 0x304c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_304c80:
    // 0x304c80: 0xace01b44  sw          $zero, 0x1B44($a3)
    ctx->pc = 0x304c80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6980), GPR_U32(ctx, 0));
label_304c84:
    // 0x304c84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x304c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_304c88:
    // 0x304c88: 0xac401b94  sw          $zero, 0x1B94($v0)
    ctx->pc = 0x304c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7060), GPR_U32(ctx, 0));
label_304c8c:
    // 0x304c8c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x304c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_304c90:
    // 0x304c90: 0xac401b98  sw          $zero, 0x1B98($v0)
    ctx->pc = 0x304c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7064), GPR_U32(ctx, 0));
label_304c94:
    // 0x304c94: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x304c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_304c98:
    // 0x304c98: 0xace01c34  sw          $zero, 0x1C34($a3)
    ctx->pc = 0x304c98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7220), GPR_U32(ctx, 0));
label_304c9c:
    // 0x304c9c: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x304c9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
label_304ca0:
    // 0x304ca0: 0xace31c84  sw          $v1, 0x1C84($a3)
    ctx->pc = 0x304ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7300), GPR_U32(ctx, 3));
label_304ca4:
    // 0x304ca4: 0xace01cd4  sw          $zero, 0x1CD4($a3)
    ctx->pc = 0x304ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7380), GPR_U32(ctx, 0));
label_304ca8:
    // 0x304ca8: 0xace01d24  sw          $zero, 0x1D24($a3)
    ctx->pc = 0x304ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7460), GPR_U32(ctx, 0));
label_304cac:
    // 0x304cac: 0xace01d74  sw          $zero, 0x1D74($a3)
    ctx->pc = 0x304cacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7540), GPR_U32(ctx, 0));
label_304cb0:
    // 0x304cb0: 0xace01dc4  sw          $zero, 0x1DC4($a3)
    ctx->pc = 0x304cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7620), GPR_U32(ctx, 0));
label_304cb4:
    // 0x304cb4: 0xace01e14  sw          $zero, 0x1E14($a3)
    ctx->pc = 0x304cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7700), GPR_U32(ctx, 0));
label_304cb8:
    // 0x304cb8: 0xace31e64  sw          $v1, 0x1E64($a3)
    ctx->pc = 0x304cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7780), GPR_U32(ctx, 3));
label_304cbc:
    // 0x304cbc: 0xace01eb4  sw          $zero, 0x1EB4($a3)
    ctx->pc = 0x304cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7860), GPR_U32(ctx, 0));
label_304cc0:
    // 0x304cc0: 0xace01f04  sw          $zero, 0x1F04($a3)
    ctx->pc = 0x304cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7940), GPR_U32(ctx, 0));
label_304cc4:
    // 0x304cc4: 0xace01f54  sw          $zero, 0x1F54($a3)
    ctx->pc = 0x304cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8020), GPR_U32(ctx, 0));
label_304cc8:
    // 0x304cc8: 0xace31fa4  sw          $v1, 0x1FA4($a3)
    ctx->pc = 0x304cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8100), GPR_U32(ctx, 3));
label_304ccc:
    // 0x304ccc: 0xace31ff4  sw          $v1, 0x1FF4($a3)
    ctx->pc = 0x304cccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8180), GPR_U32(ctx, 3));
label_304cd0:
    // 0x304cd0: 0xace02044  sw          $zero, 0x2044($a3)
    ctx->pc = 0x304cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8260), GPR_U32(ctx, 0));
label_304cd4:
    // 0x304cd4: 0xace02094  sw          $zero, 0x2094($a3)
    ctx->pc = 0x304cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8340), GPR_U32(ctx, 0));
label_304cd8:
    // 0x304cd8: 0xace020e4  sw          $zero, 0x20E4($a3)
    ctx->pc = 0x304cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8420), GPR_U32(ctx, 0));
label_304cdc:
    // 0x304cdc: 0xace02134  sw          $zero, 0x2134($a3)
    ctx->pc = 0x304cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8500), GPR_U32(ctx, 0));
label_304ce0:
    // 0x304ce0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_304ce4:
    if (ctx->pc == 0x304CE4u) {
        ctx->pc = 0x304CE4u;
            // 0x304ce4: 0xace02184  sw          $zero, 0x2184($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8580), GPR_U32(ctx, 0));
        ctx->pc = 0x304CE8u;
        goto label_304ce8;
    }
    ctx->pc = 0x304CE0u;
    {
        const bool branch_taken_0x304ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304CE0u;
            // 0x304ce4: 0xace02184  sw          $zero, 0x2184($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ce0) {
            ctx->pc = 0x304C78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_304c78;
        }
    }
    ctx->pc = 0x304CE8u;
label_304ce8:
    // 0x304ce8: 0x8f84a170  lw          $a0, -0x5E90($gp)
    ctx->pc = 0x304ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
label_304cec:
    // 0x304cec: 0xc054bb4  jal         func_152ED0
label_304cf0:
    if (ctx->pc == 0x304CF0u) {
        ctx->pc = 0x304CF0u;
            // 0x304cf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x304CF4u;
        goto label_304cf4;
    }
    ctx->pc = 0x304CECu;
    SET_GPR_U32(ctx, 31, 0x304CF4u);
    ctx->pc = 0x304CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304CECu;
            // 0x304cf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304CF4u; }
        if (ctx->pc != 0x304CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304CF4u; }
        if (ctx->pc != 0x304CF4u) { return; }
    }
    ctx->pc = 0x304CF4u;
label_304cf4:
    // 0x304cf4: 0x8f84a170  lw          $a0, -0x5E90($gp)
    ctx->pc = 0x304cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
label_304cf8:
    // 0x304cf8: 0xc054cdc  jal         func_153370
label_304cfc:
    if (ctx->pc == 0x304CFCu) {
        ctx->pc = 0x304CFCu;
            // 0x304cfc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x304D00u;
        goto label_304d00;
    }
    ctx->pc = 0x304CF8u;
    SET_GPR_U32(ctx, 31, 0x304D00u);
    ctx->pc = 0x304CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304CF8u;
            // 0x304cfc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304D00u; }
        if (ctx->pc != 0x304D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304D00u; }
        if (ctx->pc != 0x304D00u) { return; }
    }
    ctx->pc = 0x304D00u;
label_304d00:
    // 0x304d00: 0x8f82a170  lw          $v0, -0x5E90($gp)
    ctx->pc = 0x304d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
label_304d04:
    // 0x304d04: 0x3c034073  lui         $v1, 0x4073
    ctx->pc = 0x304d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16499 << 16));
label_304d08:
    // 0x304d08: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x304d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
label_304d0c:
    // 0x304d0c: 0xac4301b8  sw          $v1, 0x1B8($v0)
    ctx->pc = 0x304d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 440), GPR_U32(ctx, 3));
label_304d10:
    // 0x304d10: 0x8f82a170  lw          $v0, -0x5E90($gp)
    ctx->pc = 0x304d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
label_304d14:
    // 0x304d14: 0xac4301bc  sw          $v1, 0x1BC($v0)
    ctx->pc = 0x304d14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 444), GPR_U32(ctx, 3));
label_304d18:
    // 0x304d18: 0x8f82a170  lw          $v0, -0x5E90($gp)
    ctx->pc = 0x304d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
label_304d1c:
    // 0x304d1c: 0xac4017f4  sw          $zero, 0x17F4($v0)
    ctx->pc = 0x304d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6132), GPR_U32(ctx, 0));
label_304d20:
    // 0x304d20: 0x8f84a170  lw          $a0, -0x5E90($gp)
    ctx->pc = 0x304d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
label_304d24:
    // 0x304d24: 0xc0562c8  jal         func_158B20
label_304d28:
    if (ctx->pc == 0x304D28u) {
        ctx->pc = 0x304D28u;
            // 0x304d28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x304D2Cu;
        goto label_304d2c;
    }
    ctx->pc = 0x304D24u;
    SET_GPR_U32(ctx, 31, 0x304D2Cu);
    ctx->pc = 0x304D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304D24u;
            // 0x304d28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304D2Cu; }
        if (ctx->pc != 0x304D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304D2Cu; }
        if (ctx->pc != 0x304D2Cu) { return; }
    }
    ctx->pc = 0x304D2Cu;
label_304d2c:
    // 0x304d2c: 0x8fa3017c  lw          $v1, 0x17C($sp)
    ctx->pc = 0x304d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_304d30:
    // 0x304d30: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_304d34:
    if (ctx->pc == 0x304D34u) {
        ctx->pc = 0x304D34u;
            // 0x304d34: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x304D38u;
        goto label_304d38;
    }
    ctx->pc = 0x304D30u;
    {
        const bool branch_taken_0x304d30 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x304D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304D30u;
            // 0x304d34: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304d30) {
            ctx->pc = 0x304D40u;
            goto label_304d40;
        }
    }
    ctx->pc = 0x304D38u;
label_304d38:
    // 0x304d38: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x304d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_304d3c:
    // 0x304d3c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x304d3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_304d40:
    // 0x304d40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_304d44:
    // 0x304d44: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x304d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_304d48:
    // 0x304d48: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x304d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_304d4c:
    // 0x304d4c: 0x2484a210  addiu       $a0, $a0, -0x5DF0
    ctx->pc = 0x304d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943248));
label_304d50:
    // 0x304d50: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x304d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_304d54:
    // 0x304d54: 0xaf80a11c  sw          $zero, -0x5EE4($gp)
    ctx->pc = 0x304d54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943004), GPR_U32(ctx, 0));
label_304d58:
    // 0x304d58: 0xaf80a134  sw          $zero, -0x5ECC($gp)
    ctx->pc = 0x304d58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943028), GPR_U32(ctx, 0));
label_304d5c:
    // 0x304d5c: 0xaf80a114  sw          $zero, -0x5EEC($gp)
    ctx->pc = 0x304d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942996), GPR_U32(ctx, 0));
label_304d60:
    // 0x304d60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x304d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_304d64:
    // 0x304d64: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x304d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_304d68:
    // 0x304d68: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x304d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_304d6c:
    // 0x304d6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x304d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_304d70:
    // 0x304d70: 0xaf83a118  sw          $v1, -0x5EE8($gp)
    ctx->pc = 0x304d70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943000), GPR_U32(ctx, 3));
label_304d74:
    // 0x304d74: 0xc050df4  jal         func_1437D0
label_304d78:
    if (ctx->pc == 0x304D78u) {
        ctx->pc = 0x304D78u;
            // 0x304d78: 0xaf8285f0  sw          $v0, -0x7A10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936048), GPR_U32(ctx, 2));
        ctx->pc = 0x304D7Cu;
        goto label_304d7c;
    }
    ctx->pc = 0x304D74u;
    SET_GPR_U32(ctx, 31, 0x304D7Cu);
    ctx->pc = 0x304D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304D74u;
            // 0x304d78: 0xaf8285f0  sw          $v0, -0x7A10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437D0u;
    if (runtime->hasFunction(0x1437D0u)) {
        auto targetFn = runtime->lookupFunction(0x1437D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304D7Cu; }
        if (ctx->pc != 0x304D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetAmbient__FPf_0x1437d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304D7Cu; }
        if (ctx->pc != 0x304D7Cu) { return; }
    }
    ctx->pc = 0x304D7Cu;
label_304d7c:
    // 0x304d7c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x304d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_304d80:
    // 0x304d80: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x304d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_304d84:
    // 0x304d84: 0xaf82a140  sw          $v0, -0x5EC0($gp)
    ctx->pc = 0x304d84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943040), GPR_U32(ctx, 2));
label_304d88:
    // 0x304d88: 0x24053c02  addiu       $a1, $zero, 0x3C02
    ctx->pc = 0x304d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15362));
label_304d8c:
    // 0x304d8c: 0xaf80a14c  sw          $zero, -0x5EB4($gp)
    ctx->pc = 0x304d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943052), GPR_U32(ctx, 0));
label_304d90:
    // 0x304d90: 0xaf80a150  sw          $zero, -0x5EB0($gp)
    ctx->pc = 0x304d90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943056), GPR_U32(ctx, 0));
label_304d94:
    // 0x304d94: 0xaf80a154  sw          $zero, -0x5EAC($gp)
    ctx->pc = 0x304d94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943060), GPR_U32(ctx, 0));
label_304d98:
    // 0x304d98: 0xaf80a148  sw          $zero, -0x5EB8($gp)
    ctx->pc = 0x304d98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943048), GPR_U32(ctx, 0));
label_304d9c:
    // 0x304d9c: 0xc04e748  jal         func_139D20
label_304da0:
    if (ctx->pc == 0x304DA0u) {
        ctx->pc = 0x304DA0u;
            // 0x304da0: 0xaf80a124  sw          $zero, -0x5EDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943012), GPR_U32(ctx, 0));
        ctx->pc = 0x304DA4u;
        goto label_304da4;
    }
    ctx->pc = 0x304D9Cu;
    SET_GPR_U32(ctx, 31, 0x304DA4u);
    ctx->pc = 0x304DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304D9Cu;
            // 0x304da0: 0xaf80a124  sw          $zero, -0x5EDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943012), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304DA4u; }
        if (ctx->pc != 0x304DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304DA4u; }
        if (ctx->pc != 0x304DA4u) { return; }
    }
    ctx->pc = 0x304DA4u;
label_304da4:
    // 0x304da4: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x304da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_304da8:
    // 0x304da8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x304da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304dac:
    // 0x304dac: 0xc04e63c  jal         func_1398F0
label_304db0:
    if (ctx->pc == 0x304DB0u) {
        ctx->pc = 0x304DB0u;
            // 0x304db0: 0x3464c000  ori         $a0, $v1, 0xC000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
        ctx->pc = 0x304DB4u;
        goto label_304db4;
    }
    ctx->pc = 0x304DACu;
    SET_GPR_U32(ctx, 31, 0x304DB4u);
    ctx->pc = 0x304DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304DACu;
            // 0x304db0: 0x3464c000  ori         $a0, $v1, 0xC000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304DB4u; }
        if (ctx->pc != 0x304DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304DB4u; }
        if (ctx->pc != 0x304DB4u) { return; }
    }
    ctx->pc = 0x304DB4u;
label_304db4:
    // 0x304db4: 0xaf82a15c  sw          $v0, -0x5EA4($gp)
    ctx->pc = 0x304db4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943068), GPR_U32(ctx, 2));
label_304db8:
    // 0x304db8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x304db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_304dbc:
    // 0x304dbc: 0xc04e748  jal         func_139D20
label_304dc0:
    if (ctx->pc == 0x304DC0u) {
        ctx->pc = 0x304DC0u;
            // 0x304dc0: 0x24050242  addiu       $a1, $zero, 0x242 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 578));
        ctx->pc = 0x304DC4u;
        goto label_304dc4;
    }
    ctx->pc = 0x304DBCu;
    SET_GPR_U32(ctx, 31, 0x304DC4u);
    ctx->pc = 0x304DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304DBCu;
            // 0x304dc0: 0x24050242  addiu       $a1, $zero, 0x242 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 578));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304DC4u; }
        if (ctx->pc != 0x304DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304DC4u; }
        if (ctx->pc != 0x304DC4u) { return; }
    }
    ctx->pc = 0x304DC4u;
label_304dc4:
    // 0x304dc4: 0x24042410  addiu       $a0, $zero, 0x2410
    ctx->pc = 0x304dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9232));
label_304dc8:
    // 0x304dc8: 0xc04e63c  jal         func_1398F0
label_304dcc:
    if (ctx->pc == 0x304DCCu) {
        ctx->pc = 0x304DCCu;
            // 0x304dcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x304DD0u;
        goto label_304dd0;
    }
    ctx->pc = 0x304DC8u;
    SET_GPR_U32(ctx, 31, 0x304DD0u);
    ctx->pc = 0x304DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304DC8u;
            // 0x304dcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304DD0u; }
        if (ctx->pc != 0x304DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304DD0u; }
        if (ctx->pc != 0x304DD0u) { return; }
    }
    ctx->pc = 0x304DD0u;
label_304dd0:
    // 0x304dd0: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x304dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
label_304dd4:
    // 0x304dd4: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x304dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_304dd8:
    // 0x304dd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x304dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304ddc:
    // 0x304ddc: 0x24a55990  addiu       $a1, $a1, 0x5990
    ctx->pc = 0x304ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22928));
label_304de0:
    // 0x304de0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x304de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304de4:
    // 0x304de4: 0xc0400bc  jal         func_1002F0
label_304de8:
    if (ctx->pc == 0x304DE8u) {
        ctx->pc = 0x304DE8u;
            // 0x304de8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x304DECu;
        goto label_304dec;
    }
    ctx->pc = 0x304DE4u;
    SET_GPR_U32(ctx, 31, 0x304DECu);
    ctx->pc = 0x304DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304DE4u;
            // 0x304de8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304DECu; }
        if (ctx->pc != 0x304DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304DECu; }
        if (ctx->pc != 0x304DECu) { return; }
    }
    ctx->pc = 0x304DECu;
label_304dec:
    // 0x304dec: 0xaf82a158  sw          $v0, -0x5EA8($gp)
    ctx->pc = 0x304decu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943064), GPR_U32(ctx, 2));
label_304df0:
    // 0x304df0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x304df0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304df4:
    // 0x304df4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x304df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304df8:
    // 0x304df8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x304df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304dfc:
    // 0x304dfc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x304dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_304e00:
    // 0x304e00: 0x8f88a158  lw          $t0, -0x5EA8($gp)
    ctx->pc = 0x304e00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
label_304e04:
    // 0x304e04: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x304e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_304e08:
    // 0x304e08: 0x8f87a15c  lw          $a3, -0x5EA4($gp)
    ctx->pc = 0x304e08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
label_304e0c:
    // 0x304e0c: 0x28660060  slti        $a2, $v1, 0x60
    ctx->pc = 0x304e0cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)96) ? 1 : 0);
label_304e10:
    // 0x304e10: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x304e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_304e14:
    // 0x304e14: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x304e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_304e18:
    // 0x304e18: 0xad070020  sw          $a3, 0x20($t0)
    ctx->pc = 0x304e18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 7));
label_304e1c:
    // 0x304e1c: 0xad02002c  sw          $v0, 0x2C($t0)
    ctx->pc = 0x304e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 2));
label_304e20:
    // 0x304e20: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x304e20u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
label_304e24:
    // 0x304e24: 0xad000024  sw          $zero, 0x24($t0)
    ctx->pc = 0x304e24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
label_304e28:
    // 0x304e28: 0xad000044  sw          $zero, 0x44($t0)
    ctx->pc = 0x304e28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 0));
label_304e2c:
    // 0x304e2c: 0x8f87a15c  lw          $a3, -0x5EA4($gp)
    ctx->pc = 0x304e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
label_304e30:
    // 0x304e30: 0x8f88a158  lw          $t0, -0x5EA8($gp)
    ctx->pc = 0x304e30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
label_304e34:
    // 0x304e34: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x304e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_304e38:
    // 0x304e38: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x304e38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_304e3c:
    // 0x304e3c: 0x24e70a00  addiu       $a3, $a3, 0xA00
    ctx->pc = 0x304e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2560));
label_304e40:
    // 0x304e40: 0xad070080  sw          $a3, 0x80($t0)
    ctx->pc = 0x304e40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 7));
label_304e44:
    // 0x304e44: 0xad02008c  sw          $v0, 0x8C($t0)
    ctx->pc = 0x304e44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 140), GPR_U32(ctx, 2));
label_304e48:
    // 0x304e48: 0xad000088  sw          $zero, 0x88($t0)
    ctx->pc = 0x304e48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 136), GPR_U32(ctx, 0));
label_304e4c:
    // 0x304e4c: 0xad000084  sw          $zero, 0x84($t0)
    ctx->pc = 0x304e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 132), GPR_U32(ctx, 0));
label_304e50:
    // 0x304e50: 0xad0000a4  sw          $zero, 0xA4($t0)
    ctx->pc = 0x304e50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 164), GPR_U32(ctx, 0));
label_304e54:
    // 0x304e54: 0x8f87a15c  lw          $a3, -0x5EA4($gp)
    ctx->pc = 0x304e54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
label_304e58:
    // 0x304e58: 0x8f88a158  lw          $t0, -0x5EA8($gp)
    ctx->pc = 0x304e58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
label_304e5c:
    // 0x304e5c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x304e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_304e60:
    // 0x304e60: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x304e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_304e64:
    // 0x304e64: 0x24e71400  addiu       $a3, $a3, 0x1400
    ctx->pc = 0x304e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5120));
label_304e68:
    // 0x304e68: 0xad0700e0  sw          $a3, 0xE0($t0)
    ctx->pc = 0x304e68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 224), GPR_U32(ctx, 7));
label_304e6c:
    // 0x304e6c: 0xad0200ec  sw          $v0, 0xEC($t0)
    ctx->pc = 0x304e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 236), GPR_U32(ctx, 2));
label_304e70:
    // 0x304e70: 0xad0000e8  sw          $zero, 0xE8($t0)
    ctx->pc = 0x304e70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 232), GPR_U32(ctx, 0));
label_304e74:
    // 0x304e74: 0xad0000e4  sw          $zero, 0xE4($t0)
    ctx->pc = 0x304e74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 228), GPR_U32(ctx, 0));
label_304e78:
    // 0x304e78: 0xad000104  sw          $zero, 0x104($t0)
    ctx->pc = 0x304e78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 260), GPR_U32(ctx, 0));
label_304e7c:
    // 0x304e7c: 0x8f87a15c  lw          $a3, -0x5EA4($gp)
    ctx->pc = 0x304e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
label_304e80:
    // 0x304e80: 0x8f88a158  lw          $t0, -0x5EA8($gp)
    ctx->pc = 0x304e80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
label_304e84:
    // 0x304e84: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x304e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_304e88:
    // 0x304e88: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x304e88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_304e8c:
    // 0x304e8c: 0x24e71e00  addiu       $a3, $a3, 0x1E00
    ctx->pc = 0x304e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7680));
label_304e90:
    // 0x304e90: 0xad070140  sw          $a3, 0x140($t0)
    ctx->pc = 0x304e90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 320), GPR_U32(ctx, 7));
label_304e94:
    // 0x304e94: 0xad02014c  sw          $v0, 0x14C($t0)
    ctx->pc = 0x304e94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 332), GPR_U32(ctx, 2));
label_304e98:
    // 0x304e98: 0xad000148  sw          $zero, 0x148($t0)
    ctx->pc = 0x304e98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 328), GPR_U32(ctx, 0));
label_304e9c:
    // 0x304e9c: 0xad000144  sw          $zero, 0x144($t0)
    ctx->pc = 0x304e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 324), GPR_U32(ctx, 0));
label_304ea0:
    // 0x304ea0: 0xad000164  sw          $zero, 0x164($t0)
    ctx->pc = 0x304ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 356), GPR_U32(ctx, 0));
label_304ea4:
    // 0x304ea4: 0x8f87a15c  lw          $a3, -0x5EA4($gp)
    ctx->pc = 0x304ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
label_304ea8:
    // 0x304ea8: 0x8f88a158  lw          $t0, -0x5EA8($gp)
    ctx->pc = 0x304ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
label_304eac:
    // 0x304eac: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x304eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_304eb0:
    // 0x304eb0: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x304eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_304eb4:
    // 0x304eb4: 0x24e72800  addiu       $a3, $a3, 0x2800
    ctx->pc = 0x304eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10240));
label_304eb8:
    // 0x304eb8: 0xad0701a0  sw          $a3, 0x1A0($t0)
    ctx->pc = 0x304eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 416), GPR_U32(ctx, 7));
label_304ebc:
    // 0x304ebc: 0xad0201ac  sw          $v0, 0x1AC($t0)
    ctx->pc = 0x304ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 428), GPR_U32(ctx, 2));
label_304ec0:
    // 0x304ec0: 0xad0001a8  sw          $zero, 0x1A8($t0)
    ctx->pc = 0x304ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 424), GPR_U32(ctx, 0));
label_304ec4:
    // 0x304ec4: 0xad0001a4  sw          $zero, 0x1A4($t0)
    ctx->pc = 0x304ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 420), GPR_U32(ctx, 0));
label_304ec8:
    // 0x304ec8: 0xad0001c4  sw          $zero, 0x1C4($t0)
    ctx->pc = 0x304ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 452), GPR_U32(ctx, 0));
label_304ecc:
    // 0x304ecc: 0x8f87a15c  lw          $a3, -0x5EA4($gp)
    ctx->pc = 0x304eccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
label_304ed0:
    // 0x304ed0: 0x8f88a158  lw          $t0, -0x5EA8($gp)
    ctx->pc = 0x304ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
label_304ed4:
    // 0x304ed4: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x304ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_304ed8:
    // 0x304ed8: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x304ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_304edc:
    // 0x304edc: 0x24e73200  addiu       $a3, $a3, 0x3200
    ctx->pc = 0x304edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12800));
label_304ee0:
    // 0x304ee0: 0xad070200  sw          $a3, 0x200($t0)
    ctx->pc = 0x304ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 512), GPR_U32(ctx, 7));
label_304ee4:
    // 0x304ee4: 0xad02020c  sw          $v0, 0x20C($t0)
    ctx->pc = 0x304ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 524), GPR_U32(ctx, 2));
label_304ee8:
    // 0x304ee8: 0xad000208  sw          $zero, 0x208($t0)
    ctx->pc = 0x304ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 520), GPR_U32(ctx, 0));
label_304eec:
    // 0x304eec: 0xad000204  sw          $zero, 0x204($t0)
    ctx->pc = 0x304eecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 516), GPR_U32(ctx, 0));
label_304ef0:
    // 0x304ef0: 0xad000224  sw          $zero, 0x224($t0)
    ctx->pc = 0x304ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 548), GPR_U32(ctx, 0));
label_304ef4:
    // 0x304ef4: 0x8f87a15c  lw          $a3, -0x5EA4($gp)
    ctx->pc = 0x304ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
label_304ef8:
    // 0x304ef8: 0x8f88a158  lw          $t0, -0x5EA8($gp)
    ctx->pc = 0x304ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
label_304efc:
    // 0x304efc: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x304efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_304f00:
    // 0x304f00: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x304f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_304f04:
    // 0x304f04: 0x24e73c00  addiu       $a3, $a3, 0x3C00
    ctx->pc = 0x304f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15360));
label_304f08:
    // 0x304f08: 0xad070260  sw          $a3, 0x260($t0)
    ctx->pc = 0x304f08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 608), GPR_U32(ctx, 7));
label_304f0c:
    // 0x304f0c: 0xad02026c  sw          $v0, 0x26C($t0)
    ctx->pc = 0x304f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 620), GPR_U32(ctx, 2));
label_304f10:
    // 0x304f10: 0xad000268  sw          $zero, 0x268($t0)
    ctx->pc = 0x304f10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 616), GPR_U32(ctx, 0));
label_304f14:
    // 0x304f14: 0xad000264  sw          $zero, 0x264($t0)
    ctx->pc = 0x304f14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 612), GPR_U32(ctx, 0));
label_304f18:
    // 0x304f18: 0xad000284  sw          $zero, 0x284($t0)
    ctx->pc = 0x304f18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 644), GPR_U32(ctx, 0));
label_304f1c:
    // 0x304f1c: 0x8f87a15c  lw          $a3, -0x5EA4($gp)
    ctx->pc = 0x304f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
label_304f20:
    // 0x304f20: 0x8f88a158  lw          $t0, -0x5EA8($gp)
    ctx->pc = 0x304f20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
label_304f24:
    // 0x304f24: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x304f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_304f28:
    // 0x304f28: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x304f28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_304f2c:
    // 0x304f2c: 0x24e74600  addiu       $a3, $a3, 0x4600
    ctx->pc = 0x304f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17920));
label_304f30:
    // 0x304f30: 0xad0702c0  sw          $a3, 0x2C0($t0)
    ctx->pc = 0x304f30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 704), GPR_U32(ctx, 7));
label_304f34:
    // 0x304f34: 0x24840300  addiu       $a0, $a0, 0x300
    ctx->pc = 0x304f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
label_304f38:
    // 0x304f38: 0xad0202cc  sw          $v0, 0x2CC($t0)
    ctx->pc = 0x304f38u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 716), GPR_U32(ctx, 2));
label_304f3c:
    // 0x304f3c: 0x24a55000  addiu       $a1, $a1, 0x5000
    ctx->pc = 0x304f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
label_304f40:
    // 0x304f40: 0xad0002c8  sw          $zero, 0x2C8($t0)
    ctx->pc = 0x304f40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 712), GPR_U32(ctx, 0));
label_304f44:
    // 0x304f44: 0xad0002c4  sw          $zero, 0x2C4($t0)
    ctx->pc = 0x304f44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 708), GPR_U32(ctx, 0));
label_304f48:
    // 0x304f48: 0x14c0ffad  bnez        $a2, . + 4 + (-0x53 << 2)
label_304f4c:
    if (ctx->pc == 0x304F4Cu) {
        ctx->pc = 0x304F4Cu;
            // 0x304f4c: 0xad0002e4  sw          $zero, 0x2E4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 740), GPR_U32(ctx, 0));
        ctx->pc = 0x304F50u;
        goto label_304f50;
    }
    ctx->pc = 0x304F48u;
    {
        const bool branch_taken_0x304f48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x304F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304F48u;
            // 0x304f4c: 0xad0002e4  sw          $zero, 0x2E4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f48) {
            ctx->pc = 0x304E00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_304e00;
        }
    }
    ctx->pc = 0x304F50u;
label_304f50:
    // 0x304f50: 0xc086600  jal         func_219800
label_304f54:
    if (ctx->pc == 0x304F54u) {
        ctx->pc = 0x304F58u;
        goto label_304f58;
    }
    ctx->pc = 0x304F50u;
    SET_GPR_U32(ctx, 31, 0x304F58u);
    ctx->pc = 0x219800u;
    if (runtime->hasFunction(0x219800u)) {
        auto targetFn = runtime->lookupFunction(0x219800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304F58u; }
        if (ctx->pc != 0x304F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGyoRaceClass__Fv_0x219800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304F58u; }
        if (ctx->pc != 0x304F58u) { return; }
    }
    ctx->pc = 0x304F58u;
label_304f58:
    // 0x304f58: 0xc08660c  jal         func_219830
label_304f5c:
    if (ctx->pc == 0x304F5Cu) {
        ctx->pc = 0x304F5Cu;
            // 0x304f5c: 0xaf82a168  sw          $v0, -0x5E98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943080), GPR_U32(ctx, 2));
        ctx->pc = 0x304F60u;
        goto label_304f60;
    }
    ctx->pc = 0x304F58u;
    SET_GPR_U32(ctx, 31, 0x304F60u);
    ctx->pc = 0x304F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304F58u;
            // 0x304f5c: 0xaf82a168  sw          $v0, -0x5E98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219830u;
    if (runtime->hasFunction(0x219830u)) {
        auto targetFn = runtime->lookupFunction(0x219830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304F60u; }
        if (ctx->pc != 0x304F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGyoRaceNo__Fv_0x219830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304F60u; }
        if (ctx->pc != 0x304F60u) { return; }
    }
    ctx->pc = 0x304F60u;
label_304f60:
    // 0x304f60: 0xaf82a16c  sw          $v0, -0x5E94($gp)
    ctx->pc = 0x304f60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943084), GPR_U32(ctx, 2));
label_304f64:
    // 0x304f64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x304f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304f68:
    // 0x304f68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x304f68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304f6c:
    // 0x304f6c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x304f6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304f70:
    // 0x304f70: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x304f70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304f74:
    // 0x304f74: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x304f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_304f78:
    // 0x304f78: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x304f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_304f7c:
    // 0x304f7c: 0x2442a2f0  addiu       $v0, $v0, -0x5D10
    ctx->pc = 0x304f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943472));
label_304f80:
    // 0x304f80: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x304f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_304f84:
    // 0x304f84: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x304f84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_304f88:
    // 0x304f88: 0x24550008  addiu       $s5, $v0, 0x8
    ctx->pc = 0x304f88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_304f8c:
    // 0x304f8c: 0x8f828ad4  lw          $v0, -0x752C($gp)
    ctx->pc = 0x304f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
label_304f90:
    // 0x304f90: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_304f94:
    if (ctx->pc == 0x304F94u) {
        ctx->pc = 0x304F94u;
            // 0x304f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x304F98u;
        goto label_304f98;
    }
    ctx->pc = 0x304F90u;
    {
        const bool branch_taken_0x304f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304F90u;
            // 0x304f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f90) {
            ctx->pc = 0x30508Cu;
            goto label_30508c;
        }
    }
    ctx->pc = 0x304F98u;
label_304f98:
    // 0x304f98: 0xc0868f8  jal         func_21A3E0
label_304f9c:
    if (ctx->pc == 0x304F9Cu) {
        ctx->pc = 0x304FA0u;
        goto label_304fa0;
    }
    ctx->pc = 0x304F98u;
    SET_GPR_U32(ctx, 31, 0x304FA0u);
    ctx->pc = 0x21A3E0u;
    if (runtime->hasFunction(0x21A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x21A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304FA0u; }
        if (ctx->pc != 0x304FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetOmakeGyoracer2__Fi_0x21a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304FA0u; }
        if (ctx->pc != 0x304FA0u) { return; }
    }
    ctx->pc = 0x304FA0u;
label_304fa0:
    // 0x304fa0: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x304fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_304fa4:
    // 0x304fa4: 0x2463a1f0  addiu       $v1, $v1, -0x5E10
    ctx->pc = 0x304fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943216));
label_304fa8:
    // 0x304fa8: 0x73a821  addu        $s5, $v1, $s3
    ctx->pc = 0x304fa8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_304fac:
    // 0x304fac: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x304facu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_304fb0:
    // 0x304fb0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x304fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_304fb4:
    // 0x304fb4: 0x14400079  bnez        $v0, . + 4 + (0x79 << 2)
label_304fb8:
    if (ctx->pc == 0x304FB8u) {
        ctx->pc = 0x304FBCu;
        goto label_304fbc;
    }
    ctx->pc = 0x304FB4u;
    {
        const bool branch_taken_0x304fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304fb4) {
            ctx->pc = 0x30519Cu;
            goto label_30519c;
        }
    }
    ctx->pc = 0x304FBCu;
label_304fbc:
    // 0x304fbc: 0xc04c3b8  jal         func_130EE0
label_304fc0:
    if (ctx->pc == 0x304FC0u) {
        ctx->pc = 0x304FC4u;
        goto label_304fc4;
    }
    ctx->pc = 0x304FBCu;
    SET_GPR_U32(ctx, 31, 0x304FC4u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304FC4u; }
        if (ctx->pc != 0x304FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304FC4u; }
        if (ctx->pc != 0x304FC4u) { return; }
    }
    ctx->pc = 0x304FC4u;
label_304fc4:
    // 0x304fc4: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x304fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
label_304fc8:
    // 0x304fc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x304fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_304fcc:
    // 0x304fcc: 0xc0a248c  jal         func_289230
label_304fd0:
    if (ctx->pc == 0x304FD0u) {
        ctx->pc = 0x304FD0u;
            // 0x304fd0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x304FD4u;
        goto label_304fd4;
    }
    ctx->pc = 0x304FCCu;
    SET_GPR_U32(ctx, 31, 0x304FD4u);
    ctx->pc = 0x304FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304FCCu;
            // 0x304fd0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304FD4u; }
        if (ctx->pc != 0x304FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304FD4u; }
        if (ctx->pc != 0x304FD4u) { return; }
    }
    ctx->pc = 0x304FD4u;
label_304fd4:
    // 0x304fd4: 0x8f84a16c  lw          $a0, -0x5E94($gp)
    ctx->pc = 0x304fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
label_304fd8:
    // 0x304fd8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x304fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_304fdc:
    // 0x304fdc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x304fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_304fe0:
    // 0x304fe0: 0x24740130  addiu       $s4, $v1, 0x130
    ctx->pc = 0x304fe0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
label_304fe4:
    // 0x304fe4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x304fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_304fe8:
    // 0x304fe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x304fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_304fec:
    // 0x304fec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x304fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_304ff0:
    // 0x304ff0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x304ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_304ff4:
    // 0x304ff4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x304ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_304ff8:
    // 0x304ff8: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x304ff8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_304ffc:
    // 0x304ffc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_305000:
    if (ctx->pc == 0x305000u) {
        ctx->pc = 0x305000u;
            // 0x305000: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305004u;
        goto label_305004;
    }
    ctx->pc = 0x304FFCu;
    {
        const bool branch_taken_0x304ffc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x305000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304FFCu;
            // 0x305000: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ffc) {
            ctx->pc = 0x305030u;
            goto label_305030;
        }
    }
    ctx->pc = 0x305004u;
label_305004:
    // 0x305004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x305004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305008:
    // 0x305008: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x305008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_30500c:
    // 0x30500c: 0x0  nop
    ctx->pc = 0x30500cu;
    // NOP
label_305010:
    // 0x305010: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x305010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_305014:
    // 0x305014: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x305014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_305018:
    // 0x305018: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_30501c:
    if (ctx->pc == 0x30501Cu) {
        ctx->pc = 0x305020u;
        goto label_305020;
    }
    ctx->pc = 0x305018u;
    {
        const bool branch_taken_0x305018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x305018) {
            ctx->pc = 0x305030u;
            goto label_305030;
        }
    }
    ctx->pc = 0x305020u;
label_305020:
    // 0x305020: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x305020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_305024:
    // 0x305024: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x305024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_305028:
    // 0x305028: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_30502c:
    if (ctx->pc == 0x30502Cu) {
        ctx->pc = 0x30502Cu;
            // 0x30502c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x305030u;
        goto label_305030;
    }
    ctx->pc = 0x305028u;
    {
        const bool branch_taken_0x305028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30502Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305028u;
            // 0x30502c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305028) {
            ctx->pc = 0x305010u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_305010;
        }
    }
    ctx->pc = 0x305030u;
label_305030:
    // 0x305030: 0x1224000e  beq         $s1, $a0, . + 4 + (0xE << 2)
label_305034:
    if (ctx->pc == 0x305034u) {
        ctx->pc = 0x305038u;
        goto label_305038;
    }
    ctx->pc = 0x305030u;
    {
        const bool branch_taken_0x305030 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x305030) {
            ctx->pc = 0x30506Cu;
            goto label_30506c;
        }
    }
    ctx->pc = 0x305038u;
label_305038:
    // 0x305038: 0xc04c3b8  jal         func_130EE0
label_30503c:
    if (ctx->pc == 0x30503Cu) {
        ctx->pc = 0x305040u;
        goto label_305040;
    }
    ctx->pc = 0x305038u;
    SET_GPR_U32(ctx, 31, 0x305040u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305040u; }
        if (ctx->pc != 0x305040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305040u; }
        if (ctx->pc != 0x305040u) { return; }
    }
    ctx->pc = 0x305040u;
label_305040:
    // 0x305040: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x305040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
label_305044:
    // 0x305044: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x305044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_305048:
    // 0x305048: 0xc0a248c  jal         func_289230
label_30504c:
    if (ctx->pc == 0x30504Cu) {
        ctx->pc = 0x30504Cu;
            // 0x30504c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x305050u;
        goto label_305050;
    }
    ctx->pc = 0x305048u;
    SET_GPR_U32(ctx, 31, 0x305050u);
    ctx->pc = 0x30504Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305048u;
            // 0x30504c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305050u; }
        if (ctx->pc != 0x305050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305050u; }
        if (ctx->pc != 0x305050u) { return; }
    }
    ctx->pc = 0x305050u;
label_305050:
    // 0x305050: 0x8f84a16c  lw          $a0, -0x5E94($gp)
    ctx->pc = 0x305050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
label_305054:
    // 0x305054: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x305054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_305058:
    // 0x305058: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x305058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_30505c:
    // 0x30505c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x30505cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_305060:
    // 0x305060: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x305060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_305064:
    // 0x305064: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
label_305068:
    if (ctx->pc == 0x305068u) {
        ctx->pc = 0x305068u;
            // 0x305068: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30506Cu;
        goto label_30506c;
    }
    ctx->pc = 0x305064u;
    {
        const bool branch_taken_0x305064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305064u;
            // 0x305068: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305064) {
            ctx->pc = 0x304FF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_304ff8;
        }
    }
    ctx->pc = 0x30506Cu;
label_30506c:
    // 0x30506c: 0x0  nop
    ctx->pc = 0x30506cu;
    // NOP
label_305070:
    // 0x305070: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x305070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_305074:
    // 0x305074: 0x8f85a168  lw          $a1, -0x5E98($gp)
    ctx->pc = 0x305074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
label_305078:
    // 0x305078: 0xc086718  jal         func_219C60
label_30507c:
    if (ctx->pc == 0x30507Cu) {
        ctx->pc = 0x30507Cu;
            // 0x30507c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x305080u;
        goto label_305080;
    }
    ctx->pc = 0x305078u;
    SET_GPR_U32(ctx, 31, 0x305080u);
    ctx->pc = 0x30507Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305078u;
            // 0x30507c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219C60u;
    if (runtime->hasFunction(0x219C60u)) {
        auto targetFn = runtime->lookupFunction(0x219C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305080u; }
        if (ctx->pc != 0x305080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRaceFish__16CGyoraceFishDataFii_0x219c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305080u; }
        if (ctx->pc != 0x305080u) { return; }
    }
    ctx->pc = 0x305080u;
label_305080:
    // 0x305080: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x305080u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_305084:
    // 0x305084: 0x10000045  b           . + 4 + (0x45 << 2)
label_305088:
    if (ctx->pc == 0x305088u) {
        ctx->pc = 0x305088u;
            // 0x305088: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x30508Cu;
        goto label_30508c;
    }
    ctx->pc = 0x305084u;
    {
        const bool branch_taken_0x305084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305084u;
            // 0x305088: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305084) {
            ctx->pc = 0x30519Cu;
            goto label_30519c;
        }
    }
    ctx->pc = 0x30508Cu;
label_30508c:
    // 0x30508c: 0x0  nop
    ctx->pc = 0x30508cu;
    // NOP
label_305090:
    // 0x305090: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_305094:
    if (ctx->pc == 0x305094u) {
        ctx->pc = 0x305098u;
        goto label_305098;
    }
    ctx->pc = 0x305090u;
    {
        const bool branch_taken_0x305090 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x305090) {
            ctx->pc = 0x3050B4u;
            goto label_3050b4;
        }
    }
    ctx->pc = 0x305098u;
label_305098:
    // 0x305098: 0xc0865f0  jal         func_2197C0
label_30509c:
    if (ctx->pc == 0x30509Cu) {
        ctx->pc = 0x3050A0u;
        goto label_3050a0;
    }
    ctx->pc = 0x305098u;
    SET_GPR_U32(ctx, 31, 0x3050A0u);
    ctx->pc = 0x2197C0u;
    if (runtime->hasFunction(0x2197C0u)) {
        auto targetFn = runtime->lookupFunction(0x2197C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3050A0u; }
        if (ctx->pc != 0x3050A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGyoRaceFish__Fv_0x2197c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3050A0u; }
        if (ctx->pc != 0x3050A0u) { return; }
    }
    ctx->pc = 0x3050A0u;
label_3050a0:
    // 0x3050a0: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x3050a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_3050a4:
    // 0x3050a4: 0x2463a1f0  addiu       $v1, $v1, -0x5E10
    ctx->pc = 0x3050a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943216));
label_3050a8:
    // 0x3050a8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3050a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_3050ac:
    // 0x3050ac: 0x1000003b  b           . + 4 + (0x3B << 2)
label_3050b0:
    if (ctx->pc == 0x3050B0u) {
        ctx->pc = 0x3050B0u;
            // 0x3050b0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3050B4u;
        goto label_3050b4;
    }
    ctx->pc = 0x3050ACu;
    {
        const bool branch_taken_0x3050ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3050B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3050ACu;
            // 0x3050b0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3050ac) {
            ctx->pc = 0x30519Cu;
            goto label_30519c;
        }
    }
    ctx->pc = 0x3050B4u;
label_3050b4:
    // 0x3050b4: 0x0  nop
    ctx->pc = 0x3050b4u;
    // NOP
label_3050b8:
    // 0x3050b8: 0xc04c3b8  jal         func_130EE0
label_3050bc:
    if (ctx->pc == 0x3050BCu) {
        ctx->pc = 0x3050C0u;
        goto label_3050c0;
    }
    ctx->pc = 0x3050B8u;
    SET_GPR_U32(ctx, 31, 0x3050C0u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3050C0u; }
        if (ctx->pc != 0x3050C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3050C0u; }
        if (ctx->pc != 0x3050C0u) { return; }
    }
    ctx->pc = 0x3050C0u;
label_3050c0:
    // 0x3050c0: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x3050c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
label_3050c4:
    // 0x3050c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3050c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3050c8:
    // 0x3050c8: 0xc0a248c  jal         func_289230
label_3050cc:
    if (ctx->pc == 0x3050CCu) {
        ctx->pc = 0x3050CCu;
            // 0x3050cc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3050D0u;
        goto label_3050d0;
    }
    ctx->pc = 0x3050C8u;
    SET_GPR_U32(ctx, 31, 0x3050D0u);
    ctx->pc = 0x3050CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3050C8u;
            // 0x3050cc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3050D0u; }
        if (ctx->pc != 0x3050D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3050D0u; }
        if (ctx->pc != 0x3050D0u) { return; }
    }
    ctx->pc = 0x3050D0u;
label_3050d0:
    // 0x3050d0: 0x8f84a16c  lw          $a0, -0x5E94($gp)
    ctx->pc = 0x3050d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
label_3050d4:
    // 0x3050d4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3050d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3050d8:
    // 0x3050d8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3050d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_3050dc:
    // 0x3050dc: 0x24740130  addiu       $s4, $v1, 0x130
    ctx->pc = 0x3050dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
label_3050e0:
    // 0x3050e0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3050e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3050e4:
    // 0x3050e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3050e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3050e8:
    // 0x3050e8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3050e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3050ec:
    // 0x3050ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3050ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3050f0:
    // 0x3050f0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3050f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_3050f4:
    // 0x3050f4: 0x0  nop
    ctx->pc = 0x3050f4u;
    // NOP
label_3050f8:
    // 0x3050f8: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x3050f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3050fc:
    // 0x3050fc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_305100:
    if (ctx->pc == 0x305100u) {
        ctx->pc = 0x305100u;
            // 0x305100: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305104u;
        goto label_305104;
    }
    ctx->pc = 0x3050FCu;
    {
        const bool branch_taken_0x3050fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x305100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3050FCu;
            // 0x305100: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3050fc) {
            ctx->pc = 0x305130u;
            goto label_305130;
        }
    }
    ctx->pc = 0x305104u;
label_305104:
    // 0x305104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x305104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305108:
    // 0x305108: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x305108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_30510c:
    // 0x30510c: 0x0  nop
    ctx->pc = 0x30510cu;
    // NOP
label_305110:
    // 0x305110: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x305110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_305114:
    // 0x305114: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x305114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_305118:
    // 0x305118: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_30511c:
    if (ctx->pc == 0x30511Cu) {
        ctx->pc = 0x305120u;
        goto label_305120;
    }
    ctx->pc = 0x305118u;
    {
        const bool branch_taken_0x305118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x305118) {
            ctx->pc = 0x305130u;
            goto label_305130;
        }
    }
    ctx->pc = 0x305120u;
label_305120:
    // 0x305120: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x305120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_305124:
    // 0x305124: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x305124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_305128:
    // 0x305128: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_30512c:
    if (ctx->pc == 0x30512Cu) {
        ctx->pc = 0x30512Cu;
            // 0x30512c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x305130u;
        goto label_305130;
    }
    ctx->pc = 0x305128u;
    {
        const bool branch_taken_0x305128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30512Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305128u;
            // 0x30512c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305128) {
            ctx->pc = 0x305110u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_305110;
        }
    }
    ctx->pc = 0x305130u;
label_305130:
    // 0x305130: 0x1224000e  beq         $s1, $a0, . + 4 + (0xE << 2)
label_305134:
    if (ctx->pc == 0x305134u) {
        ctx->pc = 0x305138u;
        goto label_305138;
    }
    ctx->pc = 0x305130u;
    {
        const bool branch_taken_0x305130 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x305130) {
            ctx->pc = 0x30516Cu;
            goto label_30516c;
        }
    }
    ctx->pc = 0x305138u;
label_305138:
    // 0x305138: 0xc04c3b8  jal         func_130EE0
label_30513c:
    if (ctx->pc == 0x30513Cu) {
        ctx->pc = 0x305140u;
        goto label_305140;
    }
    ctx->pc = 0x305138u;
    SET_GPR_U32(ctx, 31, 0x305140u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305140u; }
        if (ctx->pc != 0x305140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305140u; }
        if (ctx->pc != 0x305140u) { return; }
    }
    ctx->pc = 0x305140u;
label_305140:
    // 0x305140: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x305140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
label_305144:
    // 0x305144: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x305144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_305148:
    // 0x305148: 0xc0a248c  jal         func_289230
label_30514c:
    if (ctx->pc == 0x30514Cu) {
        ctx->pc = 0x30514Cu;
            // 0x30514c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x305150u;
        goto label_305150;
    }
    ctx->pc = 0x305148u;
    SET_GPR_U32(ctx, 31, 0x305150u);
    ctx->pc = 0x30514Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305148u;
            // 0x30514c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305150u; }
        if (ctx->pc != 0x305150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305150u; }
        if (ctx->pc != 0x305150u) { return; }
    }
    ctx->pc = 0x305150u;
label_305150:
    // 0x305150: 0x8f84a16c  lw          $a0, -0x5E94($gp)
    ctx->pc = 0x305150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
label_305154:
    // 0x305154: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x305154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_305158:
    // 0x305158: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x305158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_30515c:
    // 0x30515c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x30515cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_305160:
    // 0x305160: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x305160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_305164:
    // 0x305164: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
label_305168:
    if (ctx->pc == 0x305168u) {
        ctx->pc = 0x305168u;
            // 0x305168: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30516Cu;
        goto label_30516c;
    }
    ctx->pc = 0x305164u;
    {
        const bool branch_taken_0x305164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305164u;
            // 0x305168: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305164) {
            ctx->pc = 0x3050F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3050f4;
        }
    }
    ctx->pc = 0x30516Cu;
label_30516c:
    // 0x30516c: 0x0  nop
    ctx->pc = 0x30516cu;
    // NOP
label_305170:
    // 0x305170: 0x8e940000  lw          $s4, 0x0($s4)
    ctx->pc = 0x305170u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_305174:
    // 0x305174: 0x8f85a168  lw          $a1, -0x5E98($gp)
    ctx->pc = 0x305174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
label_305178:
    // 0x305178: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x305178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_30517c:
    // 0x30517c: 0xc086718  jal         func_219C60
label_305180:
    if (ctx->pc == 0x305180u) {
        ctx->pc = 0x305180u;
            // 0x305180: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305184u;
        goto label_305184;
    }
    ctx->pc = 0x30517Cu;
    SET_GPR_U32(ctx, 31, 0x305184u);
    ctx->pc = 0x305180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30517Cu;
            // 0x305180: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219C60u;
    if (runtime->hasFunction(0x219C60u)) {
        auto targetFn = runtime->lookupFunction(0x219C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305184u; }
        if (ctx->pc != 0x305184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRaceFish__16CGyoraceFishDataFii_0x219c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305184u; }
        if (ctx->pc != 0x305184u) { return; }
    }
    ctx->pc = 0x305184u;
label_305184:
    // 0x305184: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x305184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_305188:
    // 0x305188: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x305188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_30518c:
    // 0x30518c: 0x2463a1f0  addiu       $v1, $v1, -0x5E10
    ctx->pc = 0x30518cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943216));
label_305190:
    // 0x305190: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x305190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_305194:
    // 0x305194: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x305194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_305198:
    // 0x305198: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x305198u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
label_30519c:
    // 0x30519c: 0x0  nop
    ctx->pc = 0x30519cu;
    // NOP
label_3051a0:
    // 0x3051a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3051a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3051a4:
    // 0x3051a4: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x3051a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_3051a8:
    // 0x3051a8: 0x26f7002c  addiu       $s7, $s7, 0x2C
    ctx->pc = 0x3051a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 44));
label_3051ac:
    // 0x3051ac: 0x1440ff71  bnez        $v0, . + 4 + (-0x8F << 2)
label_3051b0:
    if (ctx->pc == 0x3051B0u) {
        ctx->pc = 0x3051B0u;
            // 0x3051b0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3051B4u;
        goto label_3051b4;
    }
    ctx->pc = 0x3051ACu;
    {
        const bool branch_taken_0x3051ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3051B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3051ACu;
            // 0x3051b0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3051ac) {
            ctx->pc = 0x304F74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_304f74;
        }
    }
    ctx->pc = 0x3051B4u;
label_3051b4:
    // 0x3051b4: 0x8f82a16c  lw          $v0, -0x5E94($gp)
    ctx->pc = 0x3051b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
label_3051b8:
    // 0x3051b8: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
label_3051bc:
    if (ctx->pc == 0x3051BCu) {
        ctx->pc = 0x3051BCu;
            // 0x3051bc: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x3051C0u;
        goto label_3051c0;
    }
    ctx->pc = 0x3051B8u;
    {
        const bool branch_taken_0x3051b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3051BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3051B8u;
            // 0x3051bc: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3051b8) {
            ctx->pc = 0x305230u;
            goto label_305230;
        }
    }
    ctx->pc = 0x3051C0u;
label_3051c0:
    // 0x3051c0: 0x8f828ad4  lw          $v0, -0x752C($gp)
    ctx->pc = 0x3051c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
label_3051c4:
    // 0x3051c4: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_3051c8:
    if (ctx->pc == 0x3051C8u) {
        ctx->pc = 0x3051C8u;
            // 0x3051c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3051CCu;
        goto label_3051cc;
    }
    ctx->pc = 0x3051C4u;
    {
        const bool branch_taken_0x3051c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3051C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3051C4u;
            // 0x3051c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3051c4) {
            ctx->pc = 0x305290u;
            goto label_305290;
        }
    }
    ctx->pc = 0x3051CCu;
label_3051cc:
    // 0x3051cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3051ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3051d0:
    // 0x3051d0: 0x10000011  b           . + 4 + (0x11 << 2)
label_3051d4:
    if (ctx->pc == 0x3051D4u) {
        ctx->pc = 0x3051D4u;
            // 0x3051d4: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3051D8u;
        goto label_3051d8;
    }
    ctx->pc = 0x3051D0u;
    {
        const bool branch_taken_0x3051d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3051D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3051D0u;
            // 0x3051d4: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3051d0) {
            ctx->pc = 0x305218u;
            goto label_305218;
        }
    }
    ctx->pc = 0x3051D8u;
label_3051d8:
    // 0x3051d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3051d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3051dc:
    // 0x3051dc: 0x24639e60  addiu       $v1, $v1, -0x61A0
    ctx->pc = 0x3051dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942304));
label_3051e0:
    // 0x3051e0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3051e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_3051e4:
    // 0x3051e4: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x3051e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3051e8:
    // 0x3051e8: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
label_3051ec:
    if (ctx->pc == 0x3051ECu) {
        ctx->pc = 0x3051F0u;
        goto label_3051f0;
    }
    ctx->pc = 0x3051E8u;
    {
        const bool branch_taken_0x3051e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3051e8) {
            ctx->pc = 0x305210u;
            goto label_305210;
        }
    }
    ctx->pc = 0x3051F0u;
label_3051f0:
    // 0x3051f0: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x3051f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3051f4:
    // 0x3051f4: 0xc086718  jal         func_219C60
label_3051f8:
    if (ctx->pc == 0x3051F8u) {
        ctx->pc = 0x3051F8u;
            // 0x3051f8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x3051FCu;
        goto label_3051fc;
    }
    ctx->pc = 0x3051F4u;
    SET_GPR_U32(ctx, 31, 0x3051FCu);
    ctx->pc = 0x3051F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3051F4u;
            // 0x3051f8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219C60u;
    if (runtime->hasFunction(0x219C60u)) {
        auto targetFn = runtime->lookupFunction(0x219C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3051FCu; }
        if (ctx->pc != 0x3051FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRaceFish__16CGyoraceFishDataFii_0x219c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3051FCu; }
        if (ctx->pc != 0x3051FCu) { return; }
    }
    ctx->pc = 0x3051FCu;
label_3051fc:
    // 0x3051fc: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x3051fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_305200:
    // 0x305200: 0x2463a1f0  addiu       $v1, $v1, -0x5E10
    ctx->pc = 0x305200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943216));
label_305204:
    // 0x305204: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x305204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_305208:
    // 0x305208: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x305208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_30520c:
    // 0x30520c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x30520cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_305210:
    // 0x305210: 0x26520024  addiu       $s2, $s2, 0x24
    ctx->pc = 0x305210u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_305214:
    // 0x305214: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x305214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_305218:
    // 0x305218: 0x8f82a16c  lw          $v0, -0x5E94($gp)
    ctx->pc = 0x305218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
label_30521c:
    // 0x30521c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x30521cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_305220:
    // 0x305220: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_305224:
    if (ctx->pc == 0x305224u) {
        ctx->pc = 0x305224u;
            // 0x305224: 0x3c0301f6  lui         $v1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x305228u;
        goto label_305228;
    }
    ctx->pc = 0x305220u;
    {
        const bool branch_taken_0x305220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305220u;
            // 0x305224: 0x3c0301f6  lui         $v1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305220) {
            ctx->pc = 0x3051D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3051d8;
        }
    }
    ctx->pc = 0x305228u;
label_305228:
    // 0x305228: 0x1000001a  b           . + 4 + (0x1A << 2)
label_30522c:
    if (ctx->pc == 0x30522Cu) {
        ctx->pc = 0x30522Cu;
            // 0x30522c: 0x8f828ad4  lw          $v0, -0x752C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
        ctx->pc = 0x305230u;
        goto label_305230;
    }
    ctx->pc = 0x305228u;
    {
        const bool branch_taken_0x305228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30522Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305228u;
            // 0x30522c: 0x8f828ad4  lw          $v0, -0x752C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305228) {
            ctx->pc = 0x305294u;
            goto label_305294;
        }
    }
    ctx->pc = 0x305230u;
label_305230:
    // 0x305230: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x305230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_305234:
    // 0x305234: 0xac209e80  sw          $zero, -0x6180($at)
    ctx->pc = 0x305234u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942336), GPR_U32(ctx, 0));
label_305238:
    // 0x305238: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x305238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_30523c:
    // 0x30523c: 0xac229e7c  sw          $v0, -0x6184($at)
    ctx->pc = 0x30523cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942332), GPR_U32(ctx, 2));
label_305240:
    // 0x305240: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x305240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_305244:
    // 0x305244: 0xac229ea0  sw          $v0, -0x6160($at)
    ctx->pc = 0x305244u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942368), GPR_U32(ctx, 2));
label_305248:
    // 0x305248: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x305248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_30524c:
    // 0x30524c: 0xac209ea4  sw          $zero, -0x615C($at)
    ctx->pc = 0x30524cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942372), GPR_U32(ctx, 0));
label_305250:
    // 0x305250: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x305250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_305254:
    // 0x305254: 0xac229ec4  sw          $v0, -0x613C($at)
    ctx->pc = 0x305254u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942404), GPR_U32(ctx, 2));
label_305258:
    // 0x305258: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x305258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_30525c:
    // 0x30525c: 0xac209ec8  sw          $zero, -0x6138($at)
    ctx->pc = 0x30525cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942408), GPR_U32(ctx, 0));
label_305260:
    // 0x305260: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x305260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_305264:
    // 0x305264: 0xac229ee8  sw          $v0, -0x6118($at)
    ctx->pc = 0x305264u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942440), GPR_U32(ctx, 2));
label_305268:
    // 0x305268: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x305268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_30526c:
    // 0x30526c: 0xac209eec  sw          $zero, -0x6114($at)
    ctx->pc = 0x30526cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942444), GPR_U32(ctx, 0));
label_305270:
    // 0x305270: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x305270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_305274:
    // 0x305274: 0xac229f0c  sw          $v0, -0x60F4($at)
    ctx->pc = 0x305274u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942476), GPR_U32(ctx, 2));
label_305278:
    // 0x305278: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x305278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_30527c:
    // 0x30527c: 0xac229f30  sw          $v0, -0x60D0($at)
    ctx->pc = 0x30527cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942512), GPR_U32(ctx, 2));
label_305280:
    // 0x305280: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x305280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_305284:
    // 0x305284: 0xac209f10  sw          $zero, -0x60F0($at)
    ctx->pc = 0x305284u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942480), GPR_U32(ctx, 0));
label_305288:
    // 0x305288: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x305288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_30528c:
    // 0x30528c: 0xac209f34  sw          $zero, -0x60CC($at)
    ctx->pc = 0x30528cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942516), GPR_U32(ctx, 0));
label_305290:
    // 0x305290: 0x8f828ad4  lw          $v0, -0x752C($gp)
    ctx->pc = 0x305290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
label_305294:
    // 0x305294: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_305298:
    if (ctx->pc == 0x305298u) {
        ctx->pc = 0x305298u;
            // 0x305298: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30529Cu;
        goto label_30529c;
    }
    ctx->pc = 0x305294u;
    {
        const bool branch_taken_0x305294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305294u;
            // 0x305298: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305294) {
            ctx->pc = 0x3052C8u;
            goto label_3052c8;
        }
    }
    ctx->pc = 0x30529Cu;
label_30529c:
    // 0x30529c: 0xc04c3b8  jal         func_130EE0
label_3052a0:
    if (ctx->pc == 0x3052A0u) {
        ctx->pc = 0x3052A4u;
        goto label_3052a4;
    }
    ctx->pc = 0x30529Cu;
    SET_GPR_U32(ctx, 31, 0x3052A4u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3052A4u; }
        if (ctx->pc != 0x3052A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3052A4u; }
        if (ctx->pc != 0x3052A4u) { return; }
    }
    ctx->pc = 0x3052A4u;
label_3052a4:
    // 0x3052a4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x3052a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_3052a8:
    // 0x3052a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3052a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3052ac:
    // 0x3052ac: 0xc0a248c  jal         func_289230
label_3052b0:
    if (ctx->pc == 0x3052B0u) {
        ctx->pc = 0x3052B0u;
            // 0x3052b0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3052B4u;
        goto label_3052b4;
    }
    ctx->pc = 0x3052ACu;
    SET_GPR_U32(ctx, 31, 0x3052B4u);
    ctx->pc = 0x3052B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3052ACu;
            // 0x3052b0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3052B4u; }
        if (ctx->pc != 0x3052B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3052B4u; }
        if (ctx->pc != 0x3052B4u) { return; }
    }
    ctx->pc = 0x3052B4u;
label_3052b4:
    // 0x3052b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3052b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3052b8:
    // 0x3052b8: 0x2a210006  slti        $at, $s1, 0x6
    ctx->pc = 0x3052b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_3052bc:
    // 0x3052bc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_3052c0:
    if (ctx->pc == 0x3052C0u) {
        ctx->pc = 0x3052C4u;
        goto label_3052c4;
    }
    ctx->pc = 0x3052BCu;
    {
        const bool branch_taken_0x3052bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3052bc) {
            ctx->pc = 0x3052C8u;
            goto label_3052c8;
        }
    }
    ctx->pc = 0x3052C4u;
label_3052c4:
    // 0x3052c4: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x3052c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3052c8:
    // 0x3052c8: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3052c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_3052cc:
    // 0x3052cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3052ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3052d0:
    // 0x3052d0: 0x24849f40  addiu       $a0, $a0, -0x60C0
    ctx->pc = 0x3052d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942528));
label_3052d4:
    // 0x3052d4: 0xc049c86  jal         func_127218
label_3052d8:
    if (ctx->pc == 0x3052D8u) {
        ctx->pc = 0x3052D8u;
            // 0x3052d8: 0x240601dc  addiu       $a2, $zero, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 476));
        ctx->pc = 0x3052DCu;
        goto label_3052dc;
    }
    ctx->pc = 0x3052D4u;
    SET_GPR_U32(ctx, 31, 0x3052DCu);
    ctx->pc = 0x3052D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3052D4u;
            // 0x3052d8: 0x240601dc  addiu       $a2, $zero, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 476));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3052DCu; }
        if (ctx->pc != 0x3052DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3052DCu; }
        if (ctx->pc != 0x3052DCu) { return; }
    }
    ctx->pc = 0x3052DCu;
label_3052dc:
    // 0x3052dc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3052dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_3052e0:
    // 0x3052e0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x3052e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_3052e4:
    // 0x3052e4: 0xac209f40  sw          $zero, -0x60C0($at)
    ctx->pc = 0x3052e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942528), GPR_U32(ctx, 0));
label_3052e8:
    // 0x3052e8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3052e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_3052ec:
    // 0x3052ec: 0x8c259f40  lw          $a1, -0x60C0($at)
    ctx->pc = 0x3052ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942528)));
label_3052f0:
    // 0x3052f0: 0xc04a0d2  jal         func_128348
label_3052f4:
    if (ctx->pc == 0x3052F4u) {
        ctx->pc = 0x3052F4u;
            // 0x3052f4: 0x24842290  addiu       $a0, $a0, 0x2290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8848));
        ctx->pc = 0x3052F8u;
        goto label_3052f8;
    }
    ctx->pc = 0x3052F0u;
    SET_GPR_U32(ctx, 31, 0x3052F8u);
    ctx->pc = 0x3052F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3052F0u;
            // 0x3052f4: 0x24842290  addiu       $a0, $a0, 0x2290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3052F8u; }
        if (ctx->pc != 0x3052F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3052F8u; }
        if (ctx->pc != 0x3052F8u) { return; }
    }
    ctx->pc = 0x3052F8u;
label_3052f8:
    // 0x3052f8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3052f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3052fc:
    // 0x3052fc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3052fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_305300:
    // 0x305300: 0xac229f48  sw          $v0, -0x60B8($at)
    ctx->pc = 0x305300u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942536), GPR_U32(ctx, 2));
label_305304:
    // 0x305304: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x305304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_305308:
    // 0x305308: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x305308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_30530c:
    // 0x30530c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x30530cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_305310:
    // 0x305310: 0xac23a0cc  sw          $v1, -0x5F34($at)
    ctx->pc = 0x305310u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942924), GPR_U32(ctx, 3));
label_305314:
    // 0x305314: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x305314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305318:
    // 0x305318: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x305318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_30531c:
    // 0x30531c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x30531cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305320:
    // 0x305320: 0xac22a0e8  sw          $v0, -0x5F18($at)
    ctx->pc = 0x305320u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942952), GPR_U32(ctx, 2));
label_305324:
    // 0x305324: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x305324u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305328:
    // 0x305328: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x305328u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30532c:
    // 0x30532c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30532cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_305330:
    // 0x305330: 0xc04e748  jal         func_139D20
label_305334:
    if (ctx->pc == 0x305334u) {
        ctx->pc = 0x305334u;
            // 0x305334: 0x240505de  addiu       $a1, $zero, 0x5DE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1502));
        ctx->pc = 0x305338u;
        goto label_305338;
    }
    ctx->pc = 0x305330u;
    SET_GPR_U32(ctx, 31, 0x305338u);
    ctx->pc = 0x305334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305330u;
            // 0x305334: 0x240505de  addiu       $a1, $zero, 0x5DE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1502));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305338u; }
        if (ctx->pc != 0x305338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305338u; }
        if (ctx->pc != 0x305338u) { return; }
    }
    ctx->pc = 0x305338u;
label_305338:
    // 0x305338: 0x24045dc0  addiu       $a0, $zero, 0x5DC0
    ctx->pc = 0x305338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24000));
label_30533c:
    // 0x30533c: 0xc04e63c  jal         func_1398F0
label_305340:
    if (ctx->pc == 0x305340u) {
        ctx->pc = 0x305340u;
            // 0x305340: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305344u;
        goto label_305344;
    }
    ctx->pc = 0x30533Cu;
    SET_GPR_U32(ctx, 31, 0x305344u);
    ctx->pc = 0x305340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30533Cu;
            // 0x305340: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305344u; }
        if (ctx->pc != 0x305344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305344u; }
        if (ctx->pc != 0x305344u) { return; }
    }
    ctx->pc = 0x305344u;
label_305344:
    // 0x305344: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x305344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_305348:
    // 0x305348: 0x24639f40  addiu       $v1, $v1, -0x60C0
    ctx->pc = 0x305348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942528));
label_30534c:
    // 0x30534c: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x30534cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_305350:
    // 0x305350: 0xac620190  sw          $v0, 0x190($v1)
    ctx->pc = 0x305350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 400), GPR_U32(ctx, 2));
label_305354:
    // 0x305354: 0x8f828ad4  lw          $v0, -0x752C($gp)
    ctx->pc = 0x305354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
label_305358:
    // 0x305358: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_30535c:
    if (ctx->pc == 0x30535Cu) {
        ctx->pc = 0x305360u;
        goto label_305360;
    }
    ctx->pc = 0x305358u;
    {
        const bool branch_taken_0x305358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305358) {
            ctx->pc = 0x305384u;
            goto label_305384;
        }
    }
    ctx->pc = 0x305360u;
label_305360:
    // 0x305360: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_305364:
    if (ctx->pc == 0x305364u) {
        ctx->pc = 0x305368u;
        goto label_305368;
    }
    ctx->pc = 0x305360u;
    {
        const bool branch_taken_0x305360 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x305360) {
            ctx->pc = 0x305384u;
            goto label_305384;
        }
    }
    ctx->pc = 0x305368u;
label_305368:
    // 0x305368: 0xc0865f8  jal         func_2197E0
label_30536c:
    if (ctx->pc == 0x30536Cu) {
        ctx->pc = 0x305370u;
        goto label_305370;
    }
    ctx->pc = 0x305368u;
    SET_GPR_U32(ctx, 31, 0x305370u);
    ctx->pc = 0x2197E0u;
    if (runtime->hasFunction(0x2197E0u)) {
        auto targetFn = runtime->lookupFunction(0x2197E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305370u; }
        if (ctx->pc != 0x305370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGyoRaceAquariumNo__Fv_0x2197e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305370u; }
        if (ctx->pc != 0x305370u) { return; }
    }
    ctx->pc = 0x305370u;
label_305370:
    // 0x305370: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x305370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_305374:
    // 0x305374: 0x24639f40  addiu       $v1, $v1, -0x60C0
    ctx->pc = 0x305374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942528));
label_305378:
    // 0x305378: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x305378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_30537c:
    // 0x30537c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_305380:
    if (ctx->pc == 0x305380u) {
        ctx->pc = 0x305380u;
            // 0x305380: 0xac620044  sw          $v0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x305384u;
        goto label_305384;
    }
    ctx->pc = 0x30537Cu;
    {
        const bool branch_taken_0x30537c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30537Cu;
            // 0x305380: 0xac620044  sw          $v0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30537c) {
            ctx->pc = 0x3053F0u;
            goto label_3053f0;
        }
    }
    ctx->pc = 0x305384u;
label_305384:
    // 0x305384: 0x0  nop
    ctx->pc = 0x305384u;
    // NOP
label_305388:
    // 0x305388: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_30538c:
    if (ctx->pc == 0x30538Cu) {
        ctx->pc = 0x30538Cu;
            // 0x30538c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305390u;
        goto label_305390;
    }
    ctx->pc = 0x305388u;
    {
        const bool branch_taken_0x305388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30538Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305388u;
            // 0x30538c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305388) {
            ctx->pc = 0x3053ACu;
            goto label_3053ac;
        }
    }
    ctx->pc = 0x305390u;
label_305390:
    // 0x305390: 0xc086914  jal         func_21A450
label_305394:
    if (ctx->pc == 0x305394u) {
        ctx->pc = 0x305398u;
        goto label_305398;
    }
    ctx->pc = 0x305390u;
    SET_GPR_U32(ctx, 31, 0x305398u);
    ctx->pc = 0x21A450u;
    if (runtime->hasFunction(0x21A450u)) {
        auto targetFn = runtime->lookupFunction(0x21A450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305398u; }
        if (ctx->pc != 0x305398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetOmakeGyoracerTactics__Fi_0x21a450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305398u; }
        if (ctx->pc != 0x305398u) { return; }
    }
    ctx->pc = 0x305398u;
label_305398:
    // 0x305398: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x305398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_30539c:
    // 0x30539c: 0x24639f40  addiu       $v1, $v1, -0x60C0
    ctx->pc = 0x30539cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942528));
label_3053a0:
    // 0x3053a0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3053a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_3053a4:
    // 0x3053a4: 0x10000012  b           . + 4 + (0x12 << 2)
label_3053a8:
    if (ctx->pc == 0x3053A8u) {
        ctx->pc = 0x3053A8u;
            // 0x3053a8: 0xac620044  sw          $v0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x3053ACu;
        goto label_3053ac;
    }
    ctx->pc = 0x3053A4u;
    {
        const bool branch_taken_0x3053a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3053A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3053A4u;
            // 0x3053a8: 0xac620044  sw          $v0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3053a4) {
            ctx->pc = 0x3053F0u;
            goto label_3053f0;
        }
    }
    ctx->pc = 0x3053ACu;
label_3053ac:
    // 0x3053ac: 0x0  nop
    ctx->pc = 0x3053acu;
    // NOP
label_3053b0:
    // 0x3053b0: 0xc04c3b8  jal         func_130EE0
label_3053b4:
    if (ctx->pc == 0x3053B4u) {
        ctx->pc = 0x3053B8u;
        goto label_3053b8;
    }
    ctx->pc = 0x3053B0u;
    SET_GPR_U32(ctx, 31, 0x3053B8u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3053B8u; }
        if (ctx->pc != 0x3053B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3053B8u; }
        if (ctx->pc != 0x3053B8u) { return; }
    }
    ctx->pc = 0x3053B8u;
label_3053b8:
    // 0x3053b8: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x3053b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_3053bc:
    // 0x3053bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3053bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3053c0:
    // 0x3053c0: 0xc0a248c  jal         func_289230
label_3053c4:
    if (ctx->pc == 0x3053C4u) {
        ctx->pc = 0x3053C4u;
            // 0x3053c4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3053C8u;
        goto label_3053c8;
    }
    ctx->pc = 0x3053C0u;
    SET_GPR_U32(ctx, 31, 0x3053C8u);
    ctx->pc = 0x3053C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3053C0u;
            // 0x3053c4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3053C8u; }
        if (ctx->pc != 0x3053C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3053C8u; }
        if (ctx->pc != 0x3053C8u) { return; }
    }
    ctx->pc = 0x3053C8u;
label_3053c8:
    // 0x3053c8: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x3053c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_3053cc:
    // 0x3053cc: 0x24639f40  addiu       $v1, $v1, -0x60C0
    ctx->pc = 0x3053ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942528));
label_3053d0:
    // 0x3053d0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3053d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_3053d4:
    // 0x3053d4: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x3053d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
label_3053d8:
    // 0x3053d8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x3053d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_3053dc:
    // 0x3053dc: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x3053dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_3053e0:
    // 0x3053e0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_3053e4:
    if (ctx->pc == 0x3053E4u) {
        ctx->pc = 0x3053E4u;
            // 0x3053e4: 0x24640044  addiu       $a0, $v1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
        ctx->pc = 0x3053E8u;
        goto label_3053e8;
    }
    ctx->pc = 0x3053E0u;
    {
        const bool branch_taken_0x3053e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3053E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3053E0u;
            // 0x3053e4: 0x24640044  addiu       $a0, $v1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3053e0) {
            ctx->pc = 0x3053F0u;
            goto label_3053f0;
        }
    }
    ctx->pc = 0x3053E8u;
label_3053e8:
    // 0x3053e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3053e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3053ec:
    // 0x3053ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3053ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3053f0:
    // 0x3053f0: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3053f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_3053f4:
    // 0x3053f4: 0x2442a1f0  addiu       $v0, $v0, -0x5E10
    ctx->pc = 0x3053f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943216));
label_3053f8:
    // 0x3053f8: 0x57a821  addu        $s5, $v0, $s7
    ctx->pc = 0x3053f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_3053fc:
    // 0x3053fc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3053fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_305400:
    // 0x305400: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x305400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_305404:
    // 0x305404: 0x24429f40  addiu       $v0, $v0, -0x60C0
    ctx->pc = 0x305404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942528));
label_305408:
    // 0x305408: 0x53a021  addu        $s4, $v0, $s3
    ctx->pc = 0x305408u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_30540c:
    // 0x30540c: 0x2682000c  addiu       $v0, $s4, 0xC
    ctx->pc = 0x30540cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_305410:
    // 0x305410: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x305410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_305414:
    // 0x305414: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x305414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_305418:
    // 0x305418: 0xc04a3dc  jal         func_128F70
label_30541c:
    if (ctx->pc == 0x30541Cu) {
        ctx->pc = 0x30541Cu;
            // 0x30541c: 0x24650010  addiu       $a1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x305420u;
        goto label_305420;
    }
    ctx->pc = 0x305418u;
    SET_GPR_U32(ctx, 31, 0x305420u);
    ctx->pc = 0x30541Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305418u;
            // 0x30541c: 0x24650010  addiu       $a1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305420u; }
        if (ctx->pc != 0x305420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305420u; }
        if (ctx->pc != 0x305420u) { return; }
    }
    ctx->pc = 0x305420u;
label_305420:
    // 0x305420: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x305420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_305424:
    // 0x305424: 0x90620026  lbu         $v0, 0x26($v1)
    ctx->pc = 0x305424u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 38)));
label_305428:
    // 0x305428: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x305428u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
label_30542c:
    // 0x30542c: 0x9462003e  lhu         $v0, 0x3E($v1)
    ctx->pc = 0x30542cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 62)));
label_305430:
    // 0x305430: 0xae820030  sw          $v0, 0x30($s4)
    ctx->pc = 0x305430u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
label_305434:
    // 0x305434: 0x8f828ad4  lw          $v0, -0x752C($gp)
    ctx->pc = 0x305434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
label_305438:
    // 0x305438: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_30543c:
    if (ctx->pc == 0x30543Cu) {
        ctx->pc = 0x30543Cu;
            // 0x30543c: 0x24660010  addiu       $a2, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x305440u;
        goto label_305440;
    }
    ctx->pc = 0x305438u;
    {
        const bool branch_taken_0x305438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30543Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305438u;
            // 0x30543c: 0x24660010  addiu       $a2, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305438) {
            ctx->pc = 0x30551Cu;
            goto label_30551c;
        }
    }
    ctx->pc = 0x305440u;
label_305440:
    // 0x305440: 0x16400036  bnez        $s2, . + 4 + (0x36 << 2)
label_305444:
    if (ctx->pc == 0x305444u) {
        ctx->pc = 0x305448u;
        goto label_305448;
    }
    ctx->pc = 0x305440u;
    {
        const bool branch_taken_0x305440 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x305440) {
            ctx->pc = 0x30551Cu;
            goto label_30551c;
        }
    }
    ctx->pc = 0x305448u;
label_305448:
    // 0x305448: 0x8f82a16c  lw          $v0, -0x5E94($gp)
    ctx->pc = 0x305448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
label_30544c:
    // 0x30544c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_305450:
    if (ctx->pc == 0x305450u) {
        ctx->pc = 0x305454u;
        goto label_305454;
    }
    ctx->pc = 0x30544Cu;
    {
        const bool branch_taken_0x30544c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30544c) {
            ctx->pc = 0x305460u;
            goto label_305460;
        }
    }
    ctx->pc = 0x305454u;
label_305454:
    // 0x305454: 0x94c20024  lhu         $v0, 0x24($a2)
    ctx->pc = 0x305454u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 36)));
label_305458:
    // 0x305458: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_30545c:
    // 0x30545c: 0xa4c20024  sh          $v0, 0x24($a2)
    ctx->pc = 0x30545cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 36), (uint16_t)GPR_U32(ctx, 2));
label_305460:
    // 0x305460: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x305460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_305464:
    // 0x305464: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x305464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_305468:
    // 0x305468: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x305468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_30546c:
    // 0x30546c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30546cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_305470:
    // 0x305470: 0x94620034  lhu         $v0, 0x34($v1)
    ctx->pc = 0x305470u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
label_305474:
    // 0x305474: 0x24670010  addiu       $a3, $v1, 0x10
    ctx->pc = 0x305474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_305478:
    // 0x305478: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x305478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_30547c:
    // 0x30547c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x30547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_305480:
    // 0x305480: 0x9466003c  lhu         $a2, 0x3C($v1)
    ctx->pc = 0x305480u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
label_305484:
    // 0x305484: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x305484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_305488:
    // 0x305488: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x305488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30548c:
    // 0x30548c: 0x0  nop
    ctx->pc = 0x30548cu;
    // NOP
label_305490:
    // 0x305490: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x305490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_305494:
    // 0x305494: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_305498:
    if (ctx->pc == 0x305498u) {
        ctx->pc = 0x305498u;
            // 0x305498: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x30549Cu;
        goto label_30549c;
    }
    ctx->pc = 0x305494u;
    {
        const bool branch_taken_0x305494 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x305498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305494u;
            // 0x305498: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305494) {
            ctx->pc = 0x3054A8u;
            goto label_3054a8;
        }
    }
    ctx->pc = 0x30549Cu;
label_30549c:
    // 0x30549c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x30549cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3054a0:
    // 0x3054a0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3054a4:
    if (ctx->pc == 0x3054A4u) {
        ctx->pc = 0x3054A4u;
            // 0x3054a4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3054A8u;
        goto label_3054a8;
    }
    ctx->pc = 0x3054A0u;
    {
        const bool branch_taken_0x3054a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3054A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3054A0u;
            // 0x3054a4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3054a0) {
            ctx->pc = 0x3054C4u;
            goto label_3054c4;
        }
    }
    ctx->pc = 0x3054A8u;
label_3054a8:
    // 0x3054a8: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x3054a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_3054ac:
    // 0x3054ac: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x3054acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_3054b0:
    // 0x3054b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3054b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3054b4:
    // 0x3054b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3054b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3054b8:
    // 0x3054b8: 0x0  nop
    ctx->pc = 0x3054b8u;
    // NOP
label_3054bc:
    // 0x3054bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3054bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3054c0:
    // 0x3054c0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3054c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3054c4:
    // 0x3054c4: 0x94e2002c  lhu         $v0, 0x2C($a3)
    ctx->pc = 0x3054c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 44)));
label_3054c8:
    // 0x3054c8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3054cc:
    if (ctx->pc == 0x3054CCu) {
        ctx->pc = 0x3054CCu;
            // 0x3054cc: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3054D0u;
        goto label_3054d0;
    }
    ctx->pc = 0x3054C8u;
    {
        const bool branch_taken_0x3054c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3054CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3054C8u;
            // 0x3054cc: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3054c8) {
            ctx->pc = 0x3054DCu;
            goto label_3054dc;
        }
    }
    ctx->pc = 0x3054D0u;
label_3054d0:
    // 0x3054d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3054d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3054d4:
    // 0x3054d4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3054d8:
    if (ctx->pc == 0x3054D8u) {
        ctx->pc = 0x3054D8u;
            // 0x3054d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3054DCu;
        goto label_3054dc;
    }
    ctx->pc = 0x3054D4u;
    {
        const bool branch_taken_0x3054d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3054D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3054D4u;
            // 0x3054d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3054d4) {
            ctx->pc = 0x3054F8u;
            goto label_3054f8;
        }
    }
    ctx->pc = 0x3054DCu;
label_3054dc:
    // 0x3054dc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3054dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3054e0:
    // 0x3054e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3054e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3054e4:
    // 0x3054e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3054e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3054e8:
    // 0x3054e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3054e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3054ec:
    // 0x3054ec: 0x0  nop
    ctx->pc = 0x3054ecu;
    // NOP
label_3054f0:
    // 0x3054f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3054f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3054f4:
    // 0x3054f4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3054f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3054f8:
    // 0x3054f8: 0xc0a248c  jal         func_289230
label_3054fc:
    if (ctx->pc == 0x3054FCu) {
        ctx->pc = 0x3054FCu;
            // 0x3054fc: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x305500u;
        goto label_305500;
    }
    ctx->pc = 0x3054F8u;
    SET_GPR_U32(ctx, 31, 0x305500u);
    ctx->pc = 0x3054FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3054F8u;
            // 0x3054fc: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305500u; }
        if (ctx->pc != 0x305500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305500u; }
        if (ctx->pc != 0x305500u) { return; }
    }
    ctx->pc = 0x305500u;
label_305500:
    // 0x305500: 0xae820034  sw          $v0, 0x34($s4)
    ctx->pc = 0x305500u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
label_305504:
    // 0x305504: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x305504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_305508:
    // 0x305508: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x305508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_30550c:
    // 0x30550c: 0xc04a0d2  jal         func_128348
label_305510:
    if (ctx->pc == 0x305510u) {
        ctx->pc = 0x305510u;
            // 0x305510: 0x248422d0  addiu       $a0, $a0, 0x22D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8912));
        ctx->pc = 0x305514u;
        goto label_305514;
    }
    ctx->pc = 0x30550Cu;
    SET_GPR_U32(ctx, 31, 0x305514u);
    ctx->pc = 0x305510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30550Cu;
            // 0x305510: 0x248422d0  addiu       $a0, $a0, 0x22D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305514u; }
        if (ctx->pc != 0x305514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305514u; }
        if (ctx->pc != 0x305514u) { return; }
    }
    ctx->pc = 0x305514u;
label_305514:
    // 0x305514: 0x10000004  b           . + 4 + (0x4 << 2)
label_305518:
    if (ctx->pc == 0x305518u) {
        ctx->pc = 0x30551Cu;
        goto label_30551c;
    }
    ctx->pc = 0x305514u;
    {
        const bool branch_taken_0x305514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305514) {
            ctx->pc = 0x305528u;
            goto label_305528;
        }
    }
    ctx->pc = 0x30551Cu;
label_30551c:
    // 0x30551c: 0x0  nop
    ctx->pc = 0x30551cu;
    // NOP
label_305520:
    // 0x305520: 0x94c2002c  lhu         $v0, 0x2C($a2)
    ctx->pc = 0x305520u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 44)));
label_305524:
    // 0x305524: 0xae820034  sw          $v0, 0x34($s4)
    ctx->pc = 0x305524u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
label_305528:
    // 0x305528: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x305528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_30552c:
    // 0x30552c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x30552cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_305530:
    // 0x305530: 0x2442a2f0  addiu       $v0, $v0, -0x5D10
    ctx->pc = 0x305530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943472));
label_305534:
    // 0x305534: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x305534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_305538:
    // 0x305538: 0x94830036  lhu         $v1, 0x36($a0)
    ctx->pc = 0x305538u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
label_30553c:
    // 0x30553c: 0xae830038  sw          $v1, 0x38($s4)
    ctx->pc = 0x30553cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 3));
label_305540:
    // 0x305540: 0x94830038  lhu         $v1, 0x38($a0)
    ctx->pc = 0x305540u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
label_305544:
    // 0x305544: 0xae83003c  sw          $v1, 0x3C($s4)
    ctx->pc = 0x305544u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 3));
label_305548:
    // 0x305548: 0x9483003a  lhu         $v1, 0x3A($a0)
    ctx->pc = 0x305548u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 58)));
label_30554c:
    // 0x30554c: 0xae830040  sw          $v1, 0x40($s4)
    ctx->pc = 0x30554cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 3));
label_305550:
    // 0x305550: 0x9083004a  lbu         $v1, 0x4A($a0)
    ctx->pc = 0x305550u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 74)));
label_305554:
    // 0x305554: 0xae830028  sw          $v1, 0x28($s4)
    ctx->pc = 0x305554u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
label_305558:
    // 0x305558: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x305558u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_30555c:
    // 0x30555c: 0xae830024  sw          $v1, 0x24($s4)
    ctx->pc = 0x30555cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
label_305560:
    // 0x305560: 0xae910048  sw          $s1, 0x48($s4)
    ctx->pc = 0x305560u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 17));
label_305564:
    // 0x305564: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x305564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_305568:
    // 0x305568: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x305568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_30556c:
    // 0x30556c: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x30556cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_305570:
    // 0x305570: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_305574:
    if (ctx->pc == 0x305574u) {
        ctx->pc = 0x305578u;
        goto label_305578;
    }
    ctx->pc = 0x305570u;
    {
        const bool branch_taken_0x305570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305570) {
            ctx->pc = 0x30557Cu;
            goto label_30557c;
        }
    }
    ctx->pc = 0x305578u;
label_305578:
    // 0x305578: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x305578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30557c:
    // 0x30557c: 0x0  nop
    ctx->pc = 0x30557cu;
    // NOP
label_305580:
    // 0x305580: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x305580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_305584:
    // 0x305584: 0x8e860044  lw          $a2, 0x44($s4)
    ctx->pc = 0x305584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_305588:
    // 0x305588: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x305588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_30558c:
    // 0x30558c: 0xc04a0d2  jal         func_128348
label_305590:
    if (ctx->pc == 0x305590u) {
        ctx->pc = 0x305590u;
            // 0x305590: 0x24842310  addiu       $a0, $a0, 0x2310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8976));
        ctx->pc = 0x305594u;
        goto label_305594;
    }
    ctx->pc = 0x30558Cu;
    SET_GPR_U32(ctx, 31, 0x305594u);
    ctx->pc = 0x305590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30558Cu;
            // 0x305590: 0x24842310  addiu       $a0, $a0, 0x2310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305594u; }
        if (ctx->pc != 0x305594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305594u; }
        if (ctx->pc != 0x305594u) { return; }
    }
    ctx->pc = 0x305594u;
label_305594:
    // 0x305594: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x305594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_305598:
    // 0x305598: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x305598u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_30559c:
    // 0x30559c: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x30559cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_3055a0:
    // 0x3055a0: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x3055a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_3055a4:
    // 0x3055a4: 0x1440ff61  bnez        $v0, . + 4 + (-0x9F << 2)
label_3055a8:
    if (ctx->pc == 0x3055A8u) {
        ctx->pc = 0x3055A8u;
            // 0x3055a8: 0x27de002c  addiu       $fp, $fp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 44));
        ctx->pc = 0x3055ACu;
        goto label_3055ac;
    }
    ctx->pc = 0x3055A4u;
    {
        const bool branch_taken_0x3055a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3055A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3055A4u;
            // 0x3055a8: 0x27de002c  addiu       $fp, $fp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3055a4) {
            ctx->pc = 0x30532Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30532c;
        }
    }
    ctx->pc = 0x3055ACu;
label_3055ac:
    // 0x3055ac: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3055acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_3055b0:
    // 0x3055b0: 0xc0c75e4  jal         func_31D790
label_3055b4:
    if (ctx->pc == 0x3055B4u) {
        ctx->pc = 0x3055B4u;
            // 0x3055b4: 0x24849f40  addiu       $a0, $a0, -0x60C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942528));
        ctx->pc = 0x3055B8u;
        goto label_3055b8;
    }
    ctx->pc = 0x3055B0u;
    SET_GPR_U32(ctx, 31, 0x3055B8u);
    ctx->pc = 0x3055B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3055B0u;
            // 0x3055b4: 0x24849f40  addiu       $a0, $a0, -0x60C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D790u;
    if (runtime->hasFunction(0x31D790u)) {
        auto targetFn = runtime->lookupFunction(0x31D790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3055B8u; }
        if (ctx->pc != 0x3055B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        grGyoRaceSimulate__FP11grRACE_INFO_0x31d790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3055B8u; }
        if (ctx->pc != 0x3055B8u) { return; }
    }
    ctx->pc = 0x3055B8u;
label_3055b8:
    // 0x3055b8: 0xaf82a120  sw          $v0, -0x5EE0($gp)
    ctx->pc = 0x3055b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943008), GPR_U32(ctx, 2));
label_3055bc:
    // 0x3055bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3055bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3055c0:
    // 0x3055c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3055c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3055c4:
    // 0x3055c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3055c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3055c8:
    // 0x3055c8: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3055c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_3055cc:
    // 0x3055cc: 0x2442a2f0  addiu       $v0, $v0, -0x5D10
    ctx->pc = 0x3055ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943472));
label_3055d0:
    // 0x3055d0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3055d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3055d4:
    // 0x3055d4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x3055d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3055d8:
    // 0x3055d8: 0xc0a0ed8  jal         func_283B60
label_3055dc:
    if (ctx->pc == 0x3055DCu) {
        ctx->pc = 0x3055DCu;
            // 0x3055dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3055E0u;
        goto label_3055e0;
    }
    ctx->pc = 0x3055D8u;
    SET_GPR_U32(ctx, 31, 0x3055E0u);
    ctx->pc = 0x3055DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3055D8u;
            // 0x3055dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3055E0u; }
        if (ctx->pc != 0x3055E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3055E0u; }
        if (ctx->pc != 0x3055E0u) { return; }
    }
    ctx->pc = 0x3055E0u;
label_3055e0:
    // 0x3055e0: 0xc78ca114  lwc1        $f12, -0x5EEC($gp)
    ctx->pc = 0x3055e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3055e4:
    // 0x3055e4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3055e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_3055e8:
    // 0x3055e8: 0x2442a120  addiu       $v0, $v0, -0x5EE0
    ctx->pc = 0x3055e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943008));
label_3055ec:
    // 0x3055ec: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3055ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_3055f0:
    // 0x3055f0: 0x24849f40  addiu       $a0, $a0, -0x60C0
    ctx->pc = 0x3055f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942528));
label_3055f4:
    // 0x3055f4: 0x533021  addu        $a2, $v0, $s3
    ctx->pc = 0x3055f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3055f8:
    // 0x3055f8: 0xc0c768c  jal         func_31DA30
label_3055fc:
    if (ctx->pc == 0x3055FCu) {
        ctx->pc = 0x3055FCu;
            // 0x3055fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305600u;
        goto label_305600;
    }
    ctx->pc = 0x3055F8u;
    SET_GPR_U32(ctx, 31, 0x305600u);
    ctx->pc = 0x3055FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3055F8u;
            // 0x3055fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DA30u;
    if (runtime->hasFunction(0x31DA30u)) {
        auto targetFn = runtime->lookupFunction(0x31DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305600u; }
        if (ctx->pc != 0x305600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        grGetFishProgress__FP11grRACE_INFOifP15grRACE_PROGRESS_0x31da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305600u; }
        if (ctx->pc != 0x305600u) { return; }
    }
    ctx->pc = 0x305600u;
label_305600:
    // 0x305600: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x305600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_305604:
    // 0x305604: 0x2652002c  addiu       $s2, $s2, 0x2C
    ctx->pc = 0x305604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_305608:
    // 0x305608: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x305608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_30560c:
    // 0x30560c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_305610:
    if (ctx->pc == 0x305610u) {
        ctx->pc = 0x305610u;
            // 0x305610: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->pc = 0x305614u;
        goto label_305614;
    }
    ctx->pc = 0x30560Cu;
    {
        const bool branch_taken_0x30560c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30560Cu;
            // 0x305610: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30560c) {
            ctx->pc = 0x3055C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3055c8;
        }
    }
    ctx->pc = 0x305614u;
label_305614:
    // 0x305614: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x305614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_305618:
    // 0x305618: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x305618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30561c:
    // 0x30561c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x30561cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305620:
    // 0x305620: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x305620u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305624:
    // 0x305624: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x305624u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305628:
    // 0x305628: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x305628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_30562c:
    // 0x30562c: 0xaf82a174  sw          $v0, -0x5E8C($gp)
    ctx->pc = 0x30562cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943092), GPR_U32(ctx, 2));
label_305630:
    // 0x305630: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x305630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_305634:
    // 0x305634: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x305634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_305638:
    // 0x305638: 0x2442a120  addiu       $v0, $v0, -0x5EE0
    ctx->pc = 0x305638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943008));
label_30563c:
    // 0x30563c: 0x24849f40  addiu       $a0, $a0, -0x60C0
    ctx->pc = 0x30563cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942528));
label_305640:
    // 0x305640: 0x57f021  addu        $fp, $v0, $s7
    ctx->pc = 0x305640u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_305644:
    // 0x305644: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x305644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_305648:
    // 0x305648: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x305648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30564c:
    // 0x30564c: 0xc0c768c  jal         func_31DA30
label_305650:
    if (ctx->pc == 0x305650u) {
        ctx->pc = 0x305650u;
            // 0x305650: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305654u;
        goto label_305654;
    }
    ctx->pc = 0x30564Cu;
    SET_GPR_U32(ctx, 31, 0x305654u);
    ctx->pc = 0x305650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30564Cu;
            // 0x305650: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DA30u;
    if (runtime->hasFunction(0x31DA30u)) {
        auto targetFn = runtime->lookupFunction(0x31DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305654u; }
        if (ctx->pc != 0x305654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        grGetFishProgress__FP11grRACE_INFOifP15grRACE_PROGRESS_0x31da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305654u; }
        if (ctx->pc != 0x305654u) { return; }
    }
    ctx->pc = 0x305654u;
label_305654:
    // 0x305654: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x305654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_305658:
    // 0x305658: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x305658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
label_30565c:
    // 0x30565c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x30565cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_305660:
    // 0x305660: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x305660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_305664:
    // 0x305664: 0xc04b950  jal         func_12E540
label_305668:
    if (ctx->pc == 0x305668u) {
        ctx->pc = 0x305668u;
            // 0x305668: 0x8f85a174  lw          $a1, -0x5E8C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943092)));
        ctx->pc = 0x30566Cu;
        goto label_30566c;
    }
    ctx->pc = 0x305664u;
    SET_GPR_U32(ctx, 31, 0x30566Cu);
    ctx->pc = 0x305668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305664u;
            // 0x305668: 0x8f85a174  lw          $a1, -0x5E8C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943092)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30566Cu; }
        if (ctx->pc != 0x30566Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30566Cu; }
        if (ctx->pc != 0x30566Cu) { return; }
    }
    ctx->pc = 0x30566Cu;
label_30566c:
    // 0x30566c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x30566cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_305670:
    // 0x305670: 0x2442a1f0  addiu       $v0, $v0, -0x5E10
    ctx->pc = 0x305670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943216));
label_305674:
    // 0x305674: 0x558821  addu        $s1, $v0, $s5
    ctx->pc = 0x305674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_305678:
    // 0x305678: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x305678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30567c:
    // 0x30567c: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x30567cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_305680:
    // 0x305680: 0x2442fec0  addiu       $v0, $v0, -0x140
    ctx->pc = 0x305680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
label_305684:
    // 0x305684: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_305688:
    if (ctx->pc == 0x305688u) {
        ctx->pc = 0x30568Cu;
        goto label_30568c;
    }
    ctx->pc = 0x305684u;
    {
        const bool branch_taken_0x305684 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x305684) {
            ctx->pc = 0x305690u;
            goto label_305690;
        }
    }
    ctx->pc = 0x30568Cu;
label_30568c:
    // 0x30568c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x30568cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_305690:
    // 0x305690: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x305690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_305694:
    // 0x305694: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x305694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_305698:
    // 0x305698: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x305698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_30569c:
    // 0x30569c: 0x2442d9b0  addiu       $v0, $v0, -0x2650
    ctx->pc = 0x30569cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957488));
label_3056a0:
    // 0x3056a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3056a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3056a4:
    // 0x3056a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3056a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3056a8:
    // 0x3056a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3056a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3056ac:
    // 0x3056ac: 0xc0524dc  jal         func_149370
label_3056b0:
    if (ctx->pc == 0x3056B0u) {
        ctx->pc = 0x3056B0u;
            // 0x3056b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3056B4u;
        goto label_3056b4;
    }
    ctx->pc = 0x3056ACu;
    SET_GPR_U32(ctx, 31, 0x3056B4u);
    ctx->pc = 0x3056B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3056ACu;
            // 0x3056b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3056B4u; }
        if (ctx->pc != 0x3056B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3056B4u; }
        if (ctx->pc != 0x3056B4u) { return; }
    }
    ctx->pc = 0x3056B4u;
label_3056b4:
    // 0x3056b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3056b8:
    if (ctx->pc == 0x3056B8u) {
        ctx->pc = 0x3056B8u;
            // 0x3056b8: 0x3c0201f6  lui         $v0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x3056BCu;
        goto label_3056bc;
    }
    ctx->pc = 0x3056B4u;
    {
        const bool branch_taken_0x3056b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3056B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3056B4u;
            // 0x3056b8: 0x3c0201f6  lui         $v0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3056b4) {
            ctx->pc = 0x3056C4u;
            goto label_3056c4;
        }
    }
    ctx->pc = 0x3056BCu;
label_3056bc:
    // 0x3056bc: 0x100000ed  b           . + 4 + (0xED << 2)
label_3056c0:
    if (ctx->pc == 0x3056C0u) {
        ctx->pc = 0x3056C0u;
            // 0x3056c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3056C4u;
        goto label_3056c4;
    }
    ctx->pc = 0x3056BCu;
    {
        const bool branch_taken_0x3056bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3056C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3056BCu;
            // 0x3056c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3056bc) {
            ctx->pc = 0x305A74u;
            goto label_305a74;
        }
    }
    ctx->pc = 0x3056C4u;
label_3056c4:
    // 0x3056c4: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x3056c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_3056c8:
    // 0x3056c8: 0x2442a2f0  addiu       $v0, $v0, -0x5D10
    ctx->pc = 0x3056c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943472));
label_3056cc:
    // 0x3056cc: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x3056ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_3056d0:
    // 0x3056d0: 0x542821  addu        $a1, $v0, $s4
    ctx->pc = 0x3056d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_3056d4:
    // 0x3056d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3056d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3056d8:
    // 0x3056d8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x3056d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_3056dc:
    // 0x3056dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3056dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3056e0:
    // 0x3056e0: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x3056e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_3056e4:
    // 0x3056e4: 0x24b30004  addiu       $s3, $a1, 0x4
    ctx->pc = 0x3056e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3056e8:
    // 0x3056e8: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x3056e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_3056ec:
    // 0x3056ec: 0x24e72360  addiu       $a3, $a3, 0x2360
    ctx->pc = 0x3056ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9056));
label_3056f0:
    // 0x3056f0: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x3056f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3056f4:
    // 0x3056f4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3056f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3056f8:
    // 0x3056f8: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x3056f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3056fc:
    // 0x3056fc: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x3056fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_305700:
    // 0x305700: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x305700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_305704:
    // 0x305704: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x305704u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_305708:
    // 0x305708: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x305708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_30570c:
    // 0x30570c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x30570cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_305710:
    // 0x305710: 0x8f8ba174  lw          $t3, -0x5E8C($gp)
    ctx->pc = 0x305710u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943092)));
label_305714:
    // 0x305714: 0xc0a1458  jal         func_285160
label_305718:
    if (ctx->pc == 0x305718u) {
        ctx->pc = 0x305718u;
            // 0x305718: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30571Cu;
        goto label_30571c;
    }
    ctx->pc = 0x305714u;
    SET_GPR_U32(ctx, 31, 0x30571Cu);
    ctx->pc = 0x305718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305714u;
            // 0x305718: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285160u;
    if (runtime->hasFunction(0x285160u)) {
        auto targetFn = runtime->lookupFunction(0x285160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30571Cu; }
        if (ctx->pc != 0x30571Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30571Cu; }
        if (ctx->pc != 0x30571Cu) { return; }
    }
    ctx->pc = 0x30571Cu;
label_30571c:
    // 0x30571c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x30571cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_305720:
    // 0x305720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x305720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_305724:
    // 0x305724: 0xc0a11b4  jal         func_2846D0
label_305728:
    if (ctx->pc == 0x305728u) {
        ctx->pc = 0x305728u;
            // 0x305728: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30572Cu;
        goto label_30572c;
    }
    ctx->pc = 0x305724u;
    SET_GPR_U32(ctx, 31, 0x30572Cu);
    ctx->pc = 0x305728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305724u;
            // 0x305728: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30572Cu; }
        if (ctx->pc != 0x30572Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30572Cu; }
        if (ctx->pc != 0x30572Cu) { return; }
    }
    ctx->pc = 0x30572Cu;
label_30572c:
    // 0x30572c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x30572cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_305730:
    // 0x305730: 0x8f86a174  lw          $a2, -0x5E8C($gp)
    ctx->pc = 0x305730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943092)));
label_305734:
    // 0x305734: 0xc0a1264  jal         func_284990
label_305738:
    if (ctx->pc == 0x305738u) {
        ctx->pc = 0x305738u;
            // 0x305738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30573Cu;
        goto label_30573c;
    }
    ctx->pc = 0x305734u;
    SET_GPR_U32(ctx, 31, 0x30573Cu);
    ctx->pc = 0x305738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305734u;
            // 0x305738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284990u;
    if (runtime->hasFunction(0x284990u)) {
        auto targetFn = runtime->lookupFunction(0x284990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30573Cu; }
        if (ctx->pc != 0x30573Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaTexb__6CSceneFii_0x284990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30573Cu; }
        if (ctx->pc != 0x30573Cu) { return; }
    }
    ctx->pc = 0x30573Cu;
label_30573c:
    // 0x30573c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x30573cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_305740:
    // 0x305740: 0xc0a0ed8  jal         func_283B60
label_305744:
    if (ctx->pc == 0x305744u) {
        ctx->pc = 0x305744u;
            // 0x305744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305748u;
        goto label_305748;
    }
    ctx->pc = 0x305740u;
    SET_GPR_U32(ctx, 31, 0x305748u);
    ctx->pc = 0x305744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305740u;
            // 0x305744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305748u; }
        if (ctx->pc != 0x305748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305748u; }
        if (ctx->pc != 0x305748u) { return; }
    }
    ctx->pc = 0x305748u;
label_305748:
    // 0x305748: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x305748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_30574c:
    // 0x30574c: 0x3c04433e  lui         $a0, 0x433E
    ctx->pc = 0x30574cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17214 << 16));
label_305750:
    // 0x305750: 0x2463da50  addiu       $v1, $v1, -0x25B0
    ctx->pc = 0x305750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957648));
label_305754:
    // 0x305754: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x305754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_305758:
    // 0x305758: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x305758u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_30575c:
    // 0x30575c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30575cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_305760:
    // 0x305760: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x305760u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305764:
    // 0x305764: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x305764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_305768:
    // 0x305768: 0x2484da60  addiu       $a0, $a0, -0x25A0
    ctx->pc = 0x305768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957664));
label_30576c:
    // 0x30576c: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x30576cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_305770:
    // 0x305770: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x305770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_305774:
    // 0x305774: 0xc7c30004  lwc1        $f3, 0x4($fp)
    ctx->pc = 0x305774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_305778:
    // 0x305778: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x305778u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30577c:
    // 0x30577c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x30577cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_305780:
    // 0x305780: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x305780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_305784:
    // 0x305784: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x305784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_305788:
    // 0x305788: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x305788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_30578c:
    // 0x30578c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x30578cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_305790:
    // 0x305790: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x305790u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_305794:
    // 0x305794: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x305794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_305798:
    // 0x305798: 0xc4400110  lwc1        $f0, 0x110($v0)
    ctx->pc = 0x305798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30579c:
    // 0x30579c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x30579cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_3057a0:
    // 0x3057a0: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x3057a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_3057a4:
    // 0x3057a4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3057a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3057a8:
    // 0x3057a8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3057a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_3057ac:
    // 0x3057ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3057acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3057b0:
    // 0x3057b0: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x3057b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_3057b4:
    // 0x3057b4: 0xc065718  jal         func_195C60
label_3057b8:
    if (ctx->pc == 0x3057B8u) {
        ctx->pc = 0x3057B8u;
            // 0x3057b8: 0x245e0010  addiu       $fp, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3057BCu;
        goto label_3057bc;
    }
    ctx->pc = 0x3057B4u;
    SET_GPR_U32(ctx, 31, 0x3057BCu);
    ctx->pc = 0x3057B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3057B4u;
            // 0x3057b8: 0x245e0010  addiu       $fp, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C60u;
    if (runtime->hasFunction(0x195C60u)) {
        auto targetFn = runtime->lookupFunction(0x195C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3057BCu; }
        if (ctx->pc != 0x3057BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBreedFishInfoData__Fi_0x195c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3057BCu; }
        if (ctx->pc != 0x3057BCu) { return; }
    }
    ctx->pc = 0x3057BCu;
label_3057bc:
    // 0x3057bc: 0x97c30018  lhu         $v1, 0x18($fp)
    ctx->pc = 0x3057bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 24)));
label_3057c0:
    // 0x3057c0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_3057c4:
    if (ctx->pc == 0x3057C4u) {
        ctx->pc = 0x3057C4u;
            // 0x3057c4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3057C8u;
        goto label_3057c8;
    }
    ctx->pc = 0x3057C0u;
    {
        const bool branch_taken_0x3057c0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3057C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3057C0u;
            // 0x3057c4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3057c0) {
            ctx->pc = 0x3057D4u;
            goto label_3057d4;
        }
    }
    ctx->pc = 0x3057C8u;
label_3057c8:
    // 0x3057c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3057c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3057cc:
    // 0x3057cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_3057d0:
    if (ctx->pc == 0x3057D0u) {
        ctx->pc = 0x3057D0u;
            // 0x3057d0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3057D4u;
        goto label_3057d4;
    }
    ctx->pc = 0x3057CCu;
    {
        const bool branch_taken_0x3057cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3057D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3057CCu;
            // 0x3057d0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3057cc) {
            ctx->pc = 0x3057ECu;
            goto label_3057ec;
        }
    }
    ctx->pc = 0x3057D4u;
label_3057d4:
    // 0x3057d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3057d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3057d8:
    // 0x3057d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3057d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3057dc:
    // 0x3057dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3057dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3057e0:
    // 0x3057e0: 0x0  nop
    ctx->pc = 0x3057e0u;
    // NOP
label_3057e4:
    // 0x3057e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3057e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3057e8:
    // 0x3057e8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3057e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3057ec:
    // 0x3057ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3057ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3057f0:
    // 0x3057f0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3057f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3057f4:
    // 0x3057f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3057f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3057f8:
    // 0x3057f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3057f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3057fc:
    // 0x3057fc: 0x0  nop
    ctx->pc = 0x3057fcu;
    // NOP
label_305800:
    // 0x305800: 0x0  nop
    ctx->pc = 0x305800u;
    // NOP
label_305804:
    // 0x305804: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x305804u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_305808:
    // 0x305808: 0x0  nop
    ctx->pc = 0x305808u;
    // NOP
label_30580c:
    // 0x30580c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_305810:
    if (ctx->pc == 0x305810u) {
        ctx->pc = 0x305814u;
        goto label_305814;
    }
    ctx->pc = 0x30580Cu;
    {
        const bool branch_taken_0x30580c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30580c) {
            ctx->pc = 0x305818u;
            goto label_305818;
        }
    }
    ctx->pc = 0x305814u;
label_305814:
    // 0x305814: 0x46001306  mov.s       $f12, $f2
    ctx->pc = 0x305814u;
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
label_305818:
    // 0x305818: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x305818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_30581c:
    // 0x30581c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30581cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_305820:
    // 0x305820: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x305820u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_305824:
    // 0x305824: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x305824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_305828:
    // 0x305828: 0x320f809  jalr        $t9
label_30582c:
    if (ctx->pc == 0x30582Cu) {
        ctx->pc = 0x30582Cu;
            // 0x30582c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x305830u;
        goto label_305830;
    }
    ctx->pc = 0x305828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x305830u);
        ctx->pc = 0x30582Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305828u;
            // 0x30582c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x305830u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x305830u; }
            if (ctx->pc != 0x305830u) { return; }
        }
        }
    }
    ctx->pc = 0x305830u;
label_305830:
    // 0x305830: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x305830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_305834:
    // 0x305834: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x305834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_305838:
    // 0x305838: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x305838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_30583c:
    // 0x30583c: 0x320f809  jalr        $t9
label_305840:
    if (ctx->pc == 0x305840u) {
        ctx->pc = 0x305840u;
            // 0x305840: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x305844u;
        goto label_305844;
    }
    ctx->pc = 0x30583Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x305844u);
        ctx->pc = 0x305840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30583Cu;
            // 0x305840: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x305844u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x305844u; }
            if (ctx->pc != 0x305844u) { return; }
        }
        }
    }
    ctx->pc = 0x305844u;
label_305844:
    // 0x305844: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x305844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_305848:
    // 0x305848: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x305848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30584c:
    // 0x30584c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x30584cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_305850:
    // 0x305850: 0x320f809  jalr        $t9
label_305854:
    if (ctx->pc == 0x305854u) {
        ctx->pc = 0x305854u;
            // 0x305854: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x305858u;
        goto label_305858;
    }
    ctx->pc = 0x305850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x305858u);
        ctx->pc = 0x305854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305850u;
            // 0x305854: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x305858u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x305858u; }
            if (ctx->pc != 0x305858u) { return; }
        }
        }
    }
    ctx->pc = 0x305858u;
label_305858:
    // 0x305858: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x305858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_30585c:
    // 0x30585c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30585cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_305860:
    // 0x305860: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x305860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_305864:
    // 0x305864: 0x24a52370  addiu       $a1, $a1, 0x2370
    ctx->pc = 0x305864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9072));
label_305868:
    // 0x305868: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x305868u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_30586c:
    // 0x30586c: 0x320f809  jalr        $t9
label_305870:
    if (ctx->pc == 0x305870u) {
        ctx->pc = 0x305870u;
            // 0x305870: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305874u;
        goto label_305874;
    }
    ctx->pc = 0x30586Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x305874u);
        ctx->pc = 0x305870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30586Cu;
            // 0x305870: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x305874u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x305874u; }
            if (ctx->pc != 0x305874u) { return; }
        }
        }
    }
    ctx->pc = 0x305874u;
label_305874:
    // 0x305874: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x305874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_305878:
    // 0x305878: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x305878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_30587c:
    // 0x30587c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x30587cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_305880:
    // 0x305880: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305884:
    // 0x305884: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x305884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_305888:
    // 0x305888: 0x320f809  jalr        $t9
label_30588c:
    if (ctx->pc == 0x30588Cu) {
        ctx->pc = 0x30588Cu;
            // 0x30588c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305890u;
        goto label_305890;
    }
    ctx->pc = 0x305888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x305890u);
        ctx->pc = 0x30588Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305888u;
            // 0x30588c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x305890u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x305890u; }
            if (ctx->pc != 0x305890u) { return; }
        }
        }
    }
    ctx->pc = 0x305890u;
label_305890:
    // 0x305890: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x305890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_305894:
    // 0x305894: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x305894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_305898:
    // 0x305898: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x305898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_30589c:
    // 0x30589c: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x30589cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_3058a0:
    // 0x3058a0: 0xc084754  jal         func_211D50
label_3058a4:
    if (ctx->pc == 0x3058A4u) {
        ctx->pc = 0x3058A4u;
            // 0x3058a4: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3058A8u;
        goto label_3058a8;
    }
    ctx->pc = 0x3058A0u;
    SET_GPR_U32(ctx, 31, 0x3058A8u);
    ctx->pc = 0x3058A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3058A0u;
            // 0x3058a4: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211D50u;
    if (runtime->hasFunction(0x211D50u)) {
        auto targetFn = runtime->lookupFunction(0x211D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3058A8u; }
        if (ctx->pc != 0x3058A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FishIMGReplace__FP1P11CCharacter2iP14BREEDFISH_USED_0x211d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3058A8u; }
        if (ctx->pc != 0x3058A8u) { return; }
    }
    ctx->pc = 0x3058A8u;
label_3058a8:
    // 0x3058a8: 0x8f83a174  lw          $v1, -0x5E8C($gp)
    ctx->pc = 0x3058a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943092)));
label_3058ac:
    // 0x3058ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3058acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3058b0:
    // 0x3058b0: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x3058b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_3058b4:
    // 0x3058b4: 0x26f70018  addiu       $s7, $s7, 0x18
    ctx->pc = 0x3058b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
label_3058b8:
    // 0x3058b8: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x3058b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_3058bc:
    // 0x3058bc: 0x2694002c  addiu       $s4, $s4, 0x2C
    ctx->pc = 0x3058bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
label_3058c0:
    // 0x3058c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3058c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3058c4:
    // 0x3058c4: 0x1440ff5a  bnez        $v0, . + 4 + (-0xA6 << 2)
label_3058c8:
    if (ctx->pc == 0x3058C8u) {
        ctx->pc = 0x3058C8u;
            // 0x3058c8: 0xaf83a174  sw          $v1, -0x5E8C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943092), GPR_U32(ctx, 3));
        ctx->pc = 0x3058CCu;
        goto label_3058cc;
    }
    ctx->pc = 0x3058C4u;
    {
        const bool branch_taken_0x3058c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3058C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3058C4u;
            // 0x3058c8: 0xaf83a174  sw          $v1, -0x5E8C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3058c4) {
            ctx->pc = 0x305630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_305630;
        }
    }
    ctx->pc = 0x3058CCu;
label_3058cc:
    // 0x3058cc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3058ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3058d0:
    // 0x3058d0: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_3058d4:
    if (ctx->pc == 0x3058D4u) {
        ctx->pc = 0x3058D8u;
        goto label_3058d8;
    }
    ctx->pc = 0x3058D0u;
    {
        const bool branch_taken_0x3058d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3058d0) {
            ctx->pc = 0x30598Cu;
            goto label_30598c;
        }
    }
    ctx->pc = 0x3058D8u;
label_3058d8:
    // 0x3058d8: 0x8f82a174  lw          $v0, -0x5E8C($gp)
    ctx->pc = 0x3058d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943092)));
label_3058dc:
    // 0x3058dc: 0xaf82a178  sw          $v0, -0x5E88($gp)
    ctx->pc = 0x3058dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943096), GPR_U32(ctx, 2));
label_3058e0:
    // 0x3058e0: 0x8f85a178  lw          $a1, -0x5E88($gp)
    ctx->pc = 0x3058e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943096)));
label_3058e4:
    // 0x3058e4: 0xc04b950  jal         func_12E540
label_3058e8:
    if (ctx->pc == 0x3058E8u) {
        ctx->pc = 0x3058E8u;
            // 0x3058e8: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x3058ECu;
        goto label_3058ec;
    }
    ctx->pc = 0x3058E4u;
    SET_GPR_U32(ctx, 31, 0x3058ECu);
    ctx->pc = 0x3058E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3058E4u;
            // 0x3058e8: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3058ECu; }
        if (ctx->pc != 0x3058ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3058ECu; }
        if (ctx->pc != 0x3058ECu) { return; }
    }
    ctx->pc = 0x3058ECu;
label_3058ec:
    // 0x3058ec: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x3058ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3058f0:
    // 0x3058f0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x3058f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_3058f4:
    // 0x3058f4: 0x24842380  addiu       $a0, $a0, 0x2380
    ctx->pc = 0x3058f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9088));
label_3058f8:
    // 0x3058f8: 0xc0524c8  jal         func_149320
label_3058fc:
    if (ctx->pc == 0x3058FCu) {
        ctx->pc = 0x3058FCu;
            // 0x3058fc: 0x27a6017c  addiu       $a2, $sp, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
        ctx->pc = 0x305900u;
        goto label_305900;
    }
    ctx->pc = 0x3058F8u;
    SET_GPR_U32(ctx, 31, 0x305900u);
    ctx->pc = 0x3058FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3058F8u;
            // 0x3058fc: 0x27a6017c  addiu       $a2, $sp, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305900u; }
        if (ctx->pc != 0x305900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305900u; }
        if (ctx->pc != 0x305900u) { return; }
    }
    ctx->pc = 0x305900u;
label_305900:
    // 0x305900: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x305900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_305904:
    // 0x305904: 0x3c0701f6  lui         $a3, 0x1F6
    ctx->pc = 0x305904u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)502 << 16));
label_305908:
    // 0x305908: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x305908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_30590c:
    // 0x30590c: 0x24e7a220  addiu       $a3, $a3, -0x5DE0
    ctx->pc = 0x30590cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943264));
label_305910:
    // 0x305910: 0x8f86a178  lw          $a2, -0x5E88($gp)
    ctx->pc = 0x305910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943096)));
label_305914:
    // 0x305914: 0xc04b6a4  jal         func_12DA90
label_305918:
    if (ctx->pc == 0x305918u) {
        ctx->pc = 0x305918u;
            // 0x305918: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30591Cu;
        goto label_30591c;
    }
    ctx->pc = 0x305914u;
    SET_GPR_U32(ctx, 31, 0x30591Cu);
    ctx->pc = 0x305918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305914u;
            // 0x305918: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30591Cu; }
        if (ctx->pc != 0x30591Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30591Cu; }
        if (ctx->pc != 0x30591Cu) { return; }
    }
    ctx->pc = 0x30591Cu;
label_30591c:
    // 0x30591c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x30591cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_305920:
    // 0x305920: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x305920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_305924:
    // 0x305924: 0x24a52390  addiu       $a1, $a1, 0x2390
    ctx->pc = 0x305924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9104));
label_305928:
    // 0x305928: 0xc04b414  jal         func_12D050
label_30592c:
    if (ctx->pc == 0x30592Cu) {
        ctx->pc = 0x30592Cu;
            // 0x30592c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x305930u;
        goto label_305930;
    }
    ctx->pc = 0x305928u;
    SET_GPR_U32(ctx, 31, 0x305930u);
    ctx->pc = 0x30592Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305928u;
            // 0x30592c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305930u; }
        if (ctx->pc != 0x305930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305930u; }
        if (ctx->pc != 0x305930u) { return; }
    }
    ctx->pc = 0x305930u;
label_305930:
    // 0x305930: 0xaf82a12c  sw          $v0, -0x5ED4($gp)
    ctx->pc = 0x305930u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943020), GPR_U32(ctx, 2));
label_305934:
    // 0x305934: 0x8f82a178  lw          $v0, -0x5E88($gp)
    ctx->pc = 0x305934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943096)));
label_305938:
    // 0x305938: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_30593c:
    // 0x30593c: 0xaf82a17c  sw          $v0, -0x5E84($gp)
    ctx->pc = 0x30593cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943100), GPR_U32(ctx, 2));
label_305940:
    // 0x305940: 0x8f85a17c  lw          $a1, -0x5E84($gp)
    ctx->pc = 0x305940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943100)));
label_305944:
    // 0x305944: 0xc04b950  jal         func_12E540
label_305948:
    if (ctx->pc == 0x305948u) {
        ctx->pc = 0x305948u;
            // 0x305948: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x30594Cu;
        goto label_30594c;
    }
    ctx->pc = 0x305944u;
    SET_GPR_U32(ctx, 31, 0x30594Cu);
    ctx->pc = 0x305948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305944u;
            // 0x305948: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30594Cu; }
        if (ctx->pc != 0x30594Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30594Cu; }
        if (ctx->pc != 0x30594Cu) { return; }
    }
    ctx->pc = 0x30594Cu;
label_30594c:
    // 0x30594c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x30594cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_305950:
    // 0x305950: 0x3c0701f6  lui         $a3, 0x1F6
    ctx->pc = 0x305950u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)502 << 16));
label_305954:
    // 0x305954: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x305954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_305958:
    // 0x305958: 0x24e7a220  addiu       $a3, $a3, -0x5DE0
    ctx->pc = 0x305958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943264));
label_30595c:
    // 0x30595c: 0x8f86a17c  lw          $a2, -0x5E84($gp)
    ctx->pc = 0x30595cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943100)));
label_305960:
    // 0x305960: 0xc04b6a4  jal         func_12DA90
label_305964:
    if (ctx->pc == 0x305964u) {
        ctx->pc = 0x305964u;
            // 0x305964: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305968u;
        goto label_305968;
    }
    ctx->pc = 0x305960u;
    SET_GPR_U32(ctx, 31, 0x305968u);
    ctx->pc = 0x305964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305960u;
            // 0x305964: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305968u; }
        if (ctx->pc != 0x305968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305968u; }
        if (ctx->pc != 0x305968u) { return; }
    }
    ctx->pc = 0x305968u;
label_305968:
    // 0x305968: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x305968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_30596c:
    // 0x30596c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30596cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_305970:
    // 0x305970: 0x24a523a0  addiu       $a1, $a1, 0x23A0
    ctx->pc = 0x305970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9120));
label_305974:
    // 0x305974: 0xc04b414  jal         func_12D050
label_305978:
    if (ctx->pc == 0x305978u) {
        ctx->pc = 0x305978u;
            // 0x305978: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x30597Cu;
        goto label_30597c;
    }
    ctx->pc = 0x305974u;
    SET_GPR_U32(ctx, 31, 0x30597Cu);
    ctx->pc = 0x305978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305974u;
            // 0x305978: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30597Cu; }
        if (ctx->pc != 0x30597Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30597Cu; }
        if (ctx->pc != 0x30597Cu) { return; }
    }
    ctx->pc = 0x30597Cu;
label_30597c:
    // 0x30597c: 0xaf82a128  sw          $v0, -0x5ED8($gp)
    ctx->pc = 0x30597cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943016), GPR_U32(ctx, 2));
label_305980:
    // 0x305980: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x305980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305984:
    // 0x305984: 0xc0521f4  jal         func_1487D0
label_305988:
    if (ctx->pc == 0x305988u) {
        ctx->pc = 0x305988u;
            // 0x305988: 0xaf828e90  sw          $v0, -0x7170($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938256), GPR_U32(ctx, 2));
        ctx->pc = 0x30598Cu;
        goto label_30598c;
    }
    ctx->pc = 0x305984u;
    SET_GPR_U32(ctx, 31, 0x30598Cu);
    ctx->pc = 0x305988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305984u;
            // 0x305988: 0xaf828e90  sw          $v0, -0x7170($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1487D0u;
    if (runtime->hasFunction(0x1487D0u)) {
        auto targetFn = runtime->lookupFunction(0x1487D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30598Cu; }
        if (ctx->pc != 0x30598Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeDir__FPc_0x1487d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30598Cu; }
        if (ctx->pc != 0x30598Cu) { return; }
    }
    ctx->pc = 0x30598Cu;
label_30598c:
    // 0x30598c: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x30598cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
label_305990:
    // 0x305990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x305990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_305994:
    // 0x305994: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x305994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_305998:
    // 0x305998: 0x24c6a280  addiu       $a2, $a2, -0x5D80
    ctx->pc = 0x305998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943360));
label_30599c:
    // 0x30599c: 0xc0a0dd0  jal         func_283740
label_3059a0:
    if (ctx->pc == 0x3059A0u) {
        ctx->pc = 0x3059A0u;
            // 0x3059a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3059A4u;
        goto label_3059a4;
    }
    ctx->pc = 0x30599Cu;
    SET_GPR_U32(ctx, 31, 0x3059A4u);
    ctx->pc = 0x3059A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30599Cu;
            // 0x3059a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283740u;
    if (runtime->hasFunction(0x283740u)) {
        auto targetFn = runtime->lookupFunction(0x283740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3059A4u; }
        if (ctx->pc != 0x3059A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignCamera__6CSceneFiP9mgCCameraPc_0x283740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3059A4u; }
        if (ctx->pc != 0x3059A4u) { return; }
    }
    ctx->pc = 0x3059A4u;
label_3059a4:
    // 0x3059a4: 0xaf82a160  sw          $v0, -0x5EA0($gp)
    ctx->pc = 0x3059a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943072), GPR_U32(ctx, 2));
label_3059a8:
    // 0x3059a8: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3059a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_3059ac:
    // 0x3059ac: 0x3c024361  lui         $v0, 0x4361
    ctx->pc = 0x3059acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17249 << 16));
label_3059b0:
    // 0x3059b0: 0x8f85a160  lw          $a1, -0x5EA0($gp)
    ctx->pc = 0x3059b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
label_3059b4:
    // 0x3059b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3059b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3059b8:
    // 0x3059b8: 0x8e032e54  lw          $v1, 0x2E54($s0)
    ctx->pc = 0x3059b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11860)));
label_3059bc:
    // 0x3059bc: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x3059bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_3059c0:
    // 0x3059c0: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x3059c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
label_3059c4:
    // 0x3059c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3059c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3059c8:
    // 0x3059c8: 0x3c024328  lui         $v0, 0x4328
    ctx->pc = 0x3059c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17192 << 16));
label_3059cc:
    // 0x3059cc: 0xae032e58  sw          $v1, 0x2E58($s0)
    ctx->pc = 0x3059ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11864), GPR_U32(ctx, 3));
label_3059d0:
    // 0x3059d0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3059d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3059d4:
    // 0x3059d4: 0xc04c4f8  jal         func_1313E0
label_3059d8:
    if (ctx->pc == 0x3059D8u) {
        ctx->pc = 0x3059D8u;
            // 0x3059d8: 0xae052e54  sw          $a1, 0x2E54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11860), GPR_U32(ctx, 5));
        ctx->pc = 0x3059DCu;
        goto label_3059dc;
    }
    ctx->pc = 0x3059D4u;
    SET_GPR_U32(ctx, 31, 0x3059DCu);
    ctx->pc = 0x3059D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3059D4u;
            // 0x3059d8: 0xae052e54  sw          $a1, 0x2E54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11860), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313E0u;
    if (runtime->hasFunction(0x1313E0u)) {
        auto targetFn = runtime->lookupFunction(0x1313E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3059DCu; }
        if (ctx->pc != 0x3059DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFfff_0x1313e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3059DCu; }
        if (ctx->pc != 0x3059DCu) { return; }
    }
    ctx->pc = 0x3059DCu;
label_3059dc:
    // 0x3059dc: 0x3c024361  lui         $v0, 0x4361
    ctx->pc = 0x3059dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17249 << 16));
label_3059e0:
    // 0x3059e0: 0x3c034218  lui         $v1, 0x4218
    ctx->pc = 0x3059e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16920 << 16));
label_3059e4:
    // 0x3059e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3059e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3059e8:
    // 0x3059e8: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3059e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_3059ec:
    // 0x3059ec: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3059ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3059f0:
    // 0x3059f0: 0x3c024328  lui         $v0, 0x4328
    ctx->pc = 0x3059f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17192 << 16));
label_3059f4:
    // 0x3059f4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3059f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3059f8:
    // 0x3059f8: 0xc04c508  jal         func_131420
label_3059fc:
    if (ctx->pc == 0x3059FCu) {
        ctx->pc = 0x3059FCu;
            // 0x3059fc: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->pc = 0x305A00u;
        goto label_305a00;
    }
    ctx->pc = 0x3059F8u;
    SET_GPR_U32(ctx, 31, 0x305A00u);
    ctx->pc = 0x3059FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3059F8u;
            // 0x3059fc: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131420u;
    if (runtime->hasFunction(0x131420u)) {
        auto targetFn = runtime->lookupFunction(0x131420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A00u; }
        if (ctx->pc != 0x305A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextPos__9mgCCameraFfff_0x131420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A00u; }
        if (ctx->pc != 0x305A00u) { return; }
    }
    ctx->pc = 0x305A00u;
label_305a00:
    // 0x305a00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x305a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305a04:
    // 0x305a04: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x305a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_305a08:
    // 0x305a08: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x305a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_305a0c:
    // 0x305a0c: 0xc04c564  jal         func_131590
label_305a10:
    if (ctx->pc == 0x305A10u) {
        ctx->pc = 0x305A10u;
            // 0x305a10: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x305A14u;
        goto label_305a14;
    }
    ctx->pc = 0x305A0Cu;
    SET_GPR_U32(ctx, 31, 0x305A14u);
    ctx->pc = 0x305A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305A0Cu;
            // 0x305a10: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A14u; }
        if (ctx->pc != 0x305A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A14u; }
        if (ctx->pc != 0x305A14u) { return; }
    }
    ctx->pc = 0x305A14u;
label_305a14:
    // 0x305a14: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x305a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_305a18:
    // 0x305a18: 0x3c02435e  lui         $v0, 0x435E
    ctx->pc = 0x305a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17246 << 16));
label_305a1c:
    // 0x305a1c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x305a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_305a20:
    // 0x305a20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305a24:
    // 0x305a24: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x305a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_305a28:
    // 0x305a28: 0xc04c510  jal         func_131440
label_305a2c:
    if (ctx->pc == 0x305A2Cu) {
        ctx->pc = 0x305A2Cu;
            // 0x305a2c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x305A30u;
        goto label_305a30;
    }
    ctx->pc = 0x305A28u;
    SET_GPR_U32(ctx, 31, 0x305A30u);
    ctx->pc = 0x305A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305A28u;
            // 0x305a2c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131440u;
    if (runtime->hasFunction(0x131440u)) {
        auto targetFn = runtime->lookupFunction(0x131440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A30u; }
        if (ctx->pc != 0x305A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFfff_0x131440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A30u; }
        if (ctx->pc != 0x305A30u) { return; }
    }
    ctx->pc = 0x305A30u;
label_305a30:
    // 0x305a30: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x305a30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_305a34:
    // 0x305a34: 0x3c02435e  lui         $v0, 0x435E
    ctx->pc = 0x305a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17246 << 16));
label_305a38:
    // 0x305a38: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x305a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_305a3c:
    // 0x305a3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305a40:
    // 0x305a40: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x305a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_305a44:
    // 0x305a44: 0xc04c51c  jal         func_131470
label_305a48:
    if (ctx->pc == 0x305A48u) {
        ctx->pc = 0x305A48u;
            // 0x305a48: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x305A4Cu;
        goto label_305a4c;
    }
    ctx->pc = 0x305A44u;
    SET_GPR_U32(ctx, 31, 0x305A4Cu);
    ctx->pc = 0x305A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305A44u;
            // 0x305a48: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131470u;
    if (runtime->hasFunction(0x131470u)) {
        auto targetFn = runtime->lookupFunction(0x131470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A4Cu; }
        if (ctx->pc != 0x305A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextRef__9mgCCameraFfff_0x131470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A4Cu; }
        if (ctx->pc != 0x305A4Cu) { return; }
    }
    ctx->pc = 0x305A4Cu;
label_305a4c:
    // 0x305a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x305a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_305a50:
    // 0x305a50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x305a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305a54:
    // 0x305a54: 0xc0a11c0  jal         func_284700
label_305a58:
    if (ctx->pc == 0x305A58u) {
        ctx->pc = 0x305A58u;
            // 0x305a58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305A5Cu;
        goto label_305a5c;
    }
    ctx->pc = 0x305A54u;
    SET_GPR_U32(ctx, 31, 0x305A5Cu);
    ctx->pc = 0x305A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305A54u;
            // 0x305a58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284700u;
    if (runtime->hasFunction(0x284700u)) {
        auto targetFn = runtime->lookupFunction(0x284700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A5Cu; }
        if (ctx->pc != 0x305A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetActive__6CSceneFii_0x284700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A5Cu; }
        if (ctx->pc != 0x305A5Cu) { return; }
    }
    ctx->pc = 0x305A5Cu;
label_305a5c:
    // 0x305a5c: 0xc0635f0  jal         func_18D7C0
label_305a60:
    if (ctx->pc == 0x305A60u) {
        ctx->pc = 0x305A60u;
            // 0x305a60: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x305A64u;
        goto label_305a64;
    }
    ctx->pc = 0x305A5Cu;
    SET_GPR_U32(ctx, 31, 0x305A64u);
    ctx->pc = 0x305A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305A5Cu;
            // 0x305a60: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A64u; }
        if (ctx->pc != 0x305A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A64u; }
        if (ctx->pc != 0x305A64u) { return; }
    }
    ctx->pc = 0x305A64u;
label_305a64:
    // 0x305a64: 0x26042c70  addiu       $a0, $s0, 0x2C70
    ctx->pc = 0x305a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11376));
label_305a68:
    // 0x305a68: 0xc05f5fc  jal         func_17D7F0
label_305a6c:
    if (ctx->pc == 0x305A6Cu) {
        ctx->pc = 0x305A6Cu;
            // 0x305a6c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x305A70u;
        goto label_305a70;
    }
    ctx->pc = 0x305A68u;
    SET_GPR_U32(ctx, 31, 0x305A70u);
    ctx->pc = 0x305A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305A68u;
            // 0x305a6c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A70u; }
        if (ctx->pc != 0x305A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A70u; }
        if (ctx->pc != 0x305A70u) { return; }
    }
    ctx->pc = 0x305A70u;
label_305a70:
    // 0x305a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x305a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305a74:
    // 0x305a74: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x305a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_305a78:
    // 0x305a78: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x305a78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_305a7c:
    // 0x305a7c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x305a7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_305a80:
    // 0x305a80: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x305a80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_305a84:
    // 0x305a84: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x305a84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_305a88:
    // 0x305a88: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x305a88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_305a8c:
    // 0x305a8c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x305a8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_305a90:
    // 0x305a90: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x305a90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_305a94:
    // 0x305a94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x305a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_305a98:
    // 0x305a98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x305a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_305a9c:
    // 0x305a9c: 0x3e00008  jr          $ra
label_305aa0:
    if (ctx->pc == 0x305AA0u) {
        ctx->pc = 0x305AA0u;
            // 0x305aa0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x305AA4u;
        goto label_fallthrough_0x305a9c;
    }
    ctx->pc = 0x305A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305A9Cu;
            // 0x305aa0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x305a9c:
    ctx->pc = 0x305AA4u;
}
