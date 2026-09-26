#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemCharaDataLoadEndCheck__FPP17MENU_BGREAD_INFO2P9mgCMemoryPP12CActionCharaiii
// Address: 0x2b98d0 - 0x2b9f14
void MenuItemCharaDataLoadEndCheck__FPP17MENU_BGREAD_INFO2P9mgCMemoryPP12CActionCharaiii_0x2b98d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemCharaDataLoadEndCheck__FPP17MENU_BGREAD_INFO2P9mgCMemoryPP12CActionCharaiii_0x2b98d0");
#endif

    switch (ctx->pc) {
        case 0x2b98d0u: goto label_2b98d0;
        case 0x2b98d4u: goto label_2b98d4;
        case 0x2b98d8u: goto label_2b98d8;
        case 0x2b98dcu: goto label_2b98dc;
        case 0x2b98e0u: goto label_2b98e0;
        case 0x2b98e4u: goto label_2b98e4;
        case 0x2b98e8u: goto label_2b98e8;
        case 0x2b98ecu: goto label_2b98ec;
        case 0x2b98f0u: goto label_2b98f0;
        case 0x2b98f4u: goto label_2b98f4;
        case 0x2b98f8u: goto label_2b98f8;
        case 0x2b98fcu: goto label_2b98fc;
        case 0x2b9900u: goto label_2b9900;
        case 0x2b9904u: goto label_2b9904;
        case 0x2b9908u: goto label_2b9908;
        case 0x2b990cu: goto label_2b990c;
        case 0x2b9910u: goto label_2b9910;
        case 0x2b9914u: goto label_2b9914;
        case 0x2b9918u: goto label_2b9918;
        case 0x2b991cu: goto label_2b991c;
        case 0x2b9920u: goto label_2b9920;
        case 0x2b9924u: goto label_2b9924;
        case 0x2b9928u: goto label_2b9928;
        case 0x2b992cu: goto label_2b992c;
        case 0x2b9930u: goto label_2b9930;
        case 0x2b9934u: goto label_2b9934;
        case 0x2b9938u: goto label_2b9938;
        case 0x2b993cu: goto label_2b993c;
        case 0x2b9940u: goto label_2b9940;
        case 0x2b9944u: goto label_2b9944;
        case 0x2b9948u: goto label_2b9948;
        case 0x2b994cu: goto label_2b994c;
        case 0x2b9950u: goto label_2b9950;
        case 0x2b9954u: goto label_2b9954;
        case 0x2b9958u: goto label_2b9958;
        case 0x2b995cu: goto label_2b995c;
        case 0x2b9960u: goto label_2b9960;
        case 0x2b9964u: goto label_2b9964;
        case 0x2b9968u: goto label_2b9968;
        case 0x2b996cu: goto label_2b996c;
        case 0x2b9970u: goto label_2b9970;
        case 0x2b9974u: goto label_2b9974;
        case 0x2b9978u: goto label_2b9978;
        case 0x2b997cu: goto label_2b997c;
        case 0x2b9980u: goto label_2b9980;
        case 0x2b9984u: goto label_2b9984;
        case 0x2b9988u: goto label_2b9988;
        case 0x2b998cu: goto label_2b998c;
        case 0x2b9990u: goto label_2b9990;
        case 0x2b9994u: goto label_2b9994;
        case 0x2b9998u: goto label_2b9998;
        case 0x2b999cu: goto label_2b999c;
        case 0x2b99a0u: goto label_2b99a0;
        case 0x2b99a4u: goto label_2b99a4;
        case 0x2b99a8u: goto label_2b99a8;
        case 0x2b99acu: goto label_2b99ac;
        case 0x2b99b0u: goto label_2b99b0;
        case 0x2b99b4u: goto label_2b99b4;
        case 0x2b99b8u: goto label_2b99b8;
        case 0x2b99bcu: goto label_2b99bc;
        case 0x2b99c0u: goto label_2b99c0;
        case 0x2b99c4u: goto label_2b99c4;
        case 0x2b99c8u: goto label_2b99c8;
        case 0x2b99ccu: goto label_2b99cc;
        case 0x2b99d0u: goto label_2b99d0;
        case 0x2b99d4u: goto label_2b99d4;
        case 0x2b99d8u: goto label_2b99d8;
        case 0x2b99dcu: goto label_2b99dc;
        case 0x2b99e0u: goto label_2b99e0;
        case 0x2b99e4u: goto label_2b99e4;
        case 0x2b99e8u: goto label_2b99e8;
        case 0x2b99ecu: goto label_2b99ec;
        case 0x2b99f0u: goto label_2b99f0;
        case 0x2b99f4u: goto label_2b99f4;
        case 0x2b99f8u: goto label_2b99f8;
        case 0x2b99fcu: goto label_2b99fc;
        case 0x2b9a00u: goto label_2b9a00;
        case 0x2b9a04u: goto label_2b9a04;
        case 0x2b9a08u: goto label_2b9a08;
        case 0x2b9a0cu: goto label_2b9a0c;
        case 0x2b9a10u: goto label_2b9a10;
        case 0x2b9a14u: goto label_2b9a14;
        case 0x2b9a18u: goto label_2b9a18;
        case 0x2b9a1cu: goto label_2b9a1c;
        case 0x2b9a20u: goto label_2b9a20;
        case 0x2b9a24u: goto label_2b9a24;
        case 0x2b9a28u: goto label_2b9a28;
        case 0x2b9a2cu: goto label_2b9a2c;
        case 0x2b9a30u: goto label_2b9a30;
        case 0x2b9a34u: goto label_2b9a34;
        case 0x2b9a38u: goto label_2b9a38;
        case 0x2b9a3cu: goto label_2b9a3c;
        case 0x2b9a40u: goto label_2b9a40;
        case 0x2b9a44u: goto label_2b9a44;
        case 0x2b9a48u: goto label_2b9a48;
        case 0x2b9a4cu: goto label_2b9a4c;
        case 0x2b9a50u: goto label_2b9a50;
        case 0x2b9a54u: goto label_2b9a54;
        case 0x2b9a58u: goto label_2b9a58;
        case 0x2b9a5cu: goto label_2b9a5c;
        case 0x2b9a60u: goto label_2b9a60;
        case 0x2b9a64u: goto label_2b9a64;
        case 0x2b9a68u: goto label_2b9a68;
        case 0x2b9a6cu: goto label_2b9a6c;
        case 0x2b9a70u: goto label_2b9a70;
        case 0x2b9a74u: goto label_2b9a74;
        case 0x2b9a78u: goto label_2b9a78;
        case 0x2b9a7cu: goto label_2b9a7c;
        case 0x2b9a80u: goto label_2b9a80;
        case 0x2b9a84u: goto label_2b9a84;
        case 0x2b9a88u: goto label_2b9a88;
        case 0x2b9a8cu: goto label_2b9a8c;
        case 0x2b9a90u: goto label_2b9a90;
        case 0x2b9a94u: goto label_2b9a94;
        case 0x2b9a98u: goto label_2b9a98;
        case 0x2b9a9cu: goto label_2b9a9c;
        case 0x2b9aa0u: goto label_2b9aa0;
        case 0x2b9aa4u: goto label_2b9aa4;
        case 0x2b9aa8u: goto label_2b9aa8;
        case 0x2b9aacu: goto label_2b9aac;
        case 0x2b9ab0u: goto label_2b9ab0;
        case 0x2b9ab4u: goto label_2b9ab4;
        case 0x2b9ab8u: goto label_2b9ab8;
        case 0x2b9abcu: goto label_2b9abc;
        case 0x2b9ac0u: goto label_2b9ac0;
        case 0x2b9ac4u: goto label_2b9ac4;
        case 0x2b9ac8u: goto label_2b9ac8;
        case 0x2b9accu: goto label_2b9acc;
        case 0x2b9ad0u: goto label_2b9ad0;
        case 0x2b9ad4u: goto label_2b9ad4;
        case 0x2b9ad8u: goto label_2b9ad8;
        case 0x2b9adcu: goto label_2b9adc;
        case 0x2b9ae0u: goto label_2b9ae0;
        case 0x2b9ae4u: goto label_2b9ae4;
        case 0x2b9ae8u: goto label_2b9ae8;
        case 0x2b9aecu: goto label_2b9aec;
        case 0x2b9af0u: goto label_2b9af0;
        case 0x2b9af4u: goto label_2b9af4;
        case 0x2b9af8u: goto label_2b9af8;
        case 0x2b9afcu: goto label_2b9afc;
        case 0x2b9b00u: goto label_2b9b00;
        case 0x2b9b04u: goto label_2b9b04;
        case 0x2b9b08u: goto label_2b9b08;
        case 0x2b9b0cu: goto label_2b9b0c;
        case 0x2b9b10u: goto label_2b9b10;
        case 0x2b9b14u: goto label_2b9b14;
        case 0x2b9b18u: goto label_2b9b18;
        case 0x2b9b1cu: goto label_2b9b1c;
        case 0x2b9b20u: goto label_2b9b20;
        case 0x2b9b24u: goto label_2b9b24;
        case 0x2b9b28u: goto label_2b9b28;
        case 0x2b9b2cu: goto label_2b9b2c;
        case 0x2b9b30u: goto label_2b9b30;
        case 0x2b9b34u: goto label_2b9b34;
        case 0x2b9b38u: goto label_2b9b38;
        case 0x2b9b3cu: goto label_2b9b3c;
        case 0x2b9b40u: goto label_2b9b40;
        case 0x2b9b44u: goto label_2b9b44;
        case 0x2b9b48u: goto label_2b9b48;
        case 0x2b9b4cu: goto label_2b9b4c;
        case 0x2b9b50u: goto label_2b9b50;
        case 0x2b9b54u: goto label_2b9b54;
        case 0x2b9b58u: goto label_2b9b58;
        case 0x2b9b5cu: goto label_2b9b5c;
        case 0x2b9b60u: goto label_2b9b60;
        case 0x2b9b64u: goto label_2b9b64;
        case 0x2b9b68u: goto label_2b9b68;
        case 0x2b9b6cu: goto label_2b9b6c;
        case 0x2b9b70u: goto label_2b9b70;
        case 0x2b9b74u: goto label_2b9b74;
        case 0x2b9b78u: goto label_2b9b78;
        case 0x2b9b7cu: goto label_2b9b7c;
        case 0x2b9b80u: goto label_2b9b80;
        case 0x2b9b84u: goto label_2b9b84;
        case 0x2b9b88u: goto label_2b9b88;
        case 0x2b9b8cu: goto label_2b9b8c;
        case 0x2b9b90u: goto label_2b9b90;
        case 0x2b9b94u: goto label_2b9b94;
        case 0x2b9b98u: goto label_2b9b98;
        case 0x2b9b9cu: goto label_2b9b9c;
        case 0x2b9ba0u: goto label_2b9ba0;
        case 0x2b9ba4u: goto label_2b9ba4;
        case 0x2b9ba8u: goto label_2b9ba8;
        case 0x2b9bacu: goto label_2b9bac;
        case 0x2b9bb0u: goto label_2b9bb0;
        case 0x2b9bb4u: goto label_2b9bb4;
        case 0x2b9bb8u: goto label_2b9bb8;
        case 0x2b9bbcu: goto label_2b9bbc;
        case 0x2b9bc0u: goto label_2b9bc0;
        case 0x2b9bc4u: goto label_2b9bc4;
        case 0x2b9bc8u: goto label_2b9bc8;
        case 0x2b9bccu: goto label_2b9bcc;
        case 0x2b9bd0u: goto label_2b9bd0;
        case 0x2b9bd4u: goto label_2b9bd4;
        case 0x2b9bd8u: goto label_2b9bd8;
        case 0x2b9bdcu: goto label_2b9bdc;
        case 0x2b9be0u: goto label_2b9be0;
        case 0x2b9be4u: goto label_2b9be4;
        case 0x2b9be8u: goto label_2b9be8;
        case 0x2b9becu: goto label_2b9bec;
        case 0x2b9bf0u: goto label_2b9bf0;
        case 0x2b9bf4u: goto label_2b9bf4;
        case 0x2b9bf8u: goto label_2b9bf8;
        case 0x2b9bfcu: goto label_2b9bfc;
        case 0x2b9c00u: goto label_2b9c00;
        case 0x2b9c04u: goto label_2b9c04;
        case 0x2b9c08u: goto label_2b9c08;
        case 0x2b9c0cu: goto label_2b9c0c;
        case 0x2b9c10u: goto label_2b9c10;
        case 0x2b9c14u: goto label_2b9c14;
        case 0x2b9c18u: goto label_2b9c18;
        case 0x2b9c1cu: goto label_2b9c1c;
        case 0x2b9c20u: goto label_2b9c20;
        case 0x2b9c24u: goto label_2b9c24;
        case 0x2b9c28u: goto label_2b9c28;
        case 0x2b9c2cu: goto label_2b9c2c;
        case 0x2b9c30u: goto label_2b9c30;
        case 0x2b9c34u: goto label_2b9c34;
        case 0x2b9c38u: goto label_2b9c38;
        case 0x2b9c3cu: goto label_2b9c3c;
        case 0x2b9c40u: goto label_2b9c40;
        case 0x2b9c44u: goto label_2b9c44;
        case 0x2b9c48u: goto label_2b9c48;
        case 0x2b9c4cu: goto label_2b9c4c;
        case 0x2b9c50u: goto label_2b9c50;
        case 0x2b9c54u: goto label_2b9c54;
        case 0x2b9c58u: goto label_2b9c58;
        case 0x2b9c5cu: goto label_2b9c5c;
        case 0x2b9c60u: goto label_2b9c60;
        case 0x2b9c64u: goto label_2b9c64;
        case 0x2b9c68u: goto label_2b9c68;
        case 0x2b9c6cu: goto label_2b9c6c;
        case 0x2b9c70u: goto label_2b9c70;
        case 0x2b9c74u: goto label_2b9c74;
        case 0x2b9c78u: goto label_2b9c78;
        case 0x2b9c7cu: goto label_2b9c7c;
        case 0x2b9c80u: goto label_2b9c80;
        case 0x2b9c84u: goto label_2b9c84;
        case 0x2b9c88u: goto label_2b9c88;
        case 0x2b9c8cu: goto label_2b9c8c;
        case 0x2b9c90u: goto label_2b9c90;
        case 0x2b9c94u: goto label_2b9c94;
        case 0x2b9c98u: goto label_2b9c98;
        case 0x2b9c9cu: goto label_2b9c9c;
        case 0x2b9ca0u: goto label_2b9ca0;
        case 0x2b9ca4u: goto label_2b9ca4;
        case 0x2b9ca8u: goto label_2b9ca8;
        case 0x2b9cacu: goto label_2b9cac;
        case 0x2b9cb0u: goto label_2b9cb0;
        case 0x2b9cb4u: goto label_2b9cb4;
        case 0x2b9cb8u: goto label_2b9cb8;
        case 0x2b9cbcu: goto label_2b9cbc;
        case 0x2b9cc0u: goto label_2b9cc0;
        case 0x2b9cc4u: goto label_2b9cc4;
        case 0x2b9cc8u: goto label_2b9cc8;
        case 0x2b9cccu: goto label_2b9ccc;
        case 0x2b9cd0u: goto label_2b9cd0;
        case 0x2b9cd4u: goto label_2b9cd4;
        case 0x2b9cd8u: goto label_2b9cd8;
        case 0x2b9cdcu: goto label_2b9cdc;
        case 0x2b9ce0u: goto label_2b9ce0;
        case 0x2b9ce4u: goto label_2b9ce4;
        case 0x2b9ce8u: goto label_2b9ce8;
        case 0x2b9cecu: goto label_2b9cec;
        case 0x2b9cf0u: goto label_2b9cf0;
        case 0x2b9cf4u: goto label_2b9cf4;
        case 0x2b9cf8u: goto label_2b9cf8;
        case 0x2b9cfcu: goto label_2b9cfc;
        case 0x2b9d00u: goto label_2b9d00;
        case 0x2b9d04u: goto label_2b9d04;
        case 0x2b9d08u: goto label_2b9d08;
        case 0x2b9d0cu: goto label_2b9d0c;
        case 0x2b9d10u: goto label_2b9d10;
        case 0x2b9d14u: goto label_2b9d14;
        case 0x2b9d18u: goto label_2b9d18;
        case 0x2b9d1cu: goto label_2b9d1c;
        case 0x2b9d20u: goto label_2b9d20;
        case 0x2b9d24u: goto label_2b9d24;
        case 0x2b9d28u: goto label_2b9d28;
        case 0x2b9d2cu: goto label_2b9d2c;
        case 0x2b9d30u: goto label_2b9d30;
        case 0x2b9d34u: goto label_2b9d34;
        case 0x2b9d38u: goto label_2b9d38;
        case 0x2b9d3cu: goto label_2b9d3c;
        case 0x2b9d40u: goto label_2b9d40;
        case 0x2b9d44u: goto label_2b9d44;
        case 0x2b9d48u: goto label_2b9d48;
        case 0x2b9d4cu: goto label_2b9d4c;
        case 0x2b9d50u: goto label_2b9d50;
        case 0x2b9d54u: goto label_2b9d54;
        case 0x2b9d58u: goto label_2b9d58;
        case 0x2b9d5cu: goto label_2b9d5c;
        case 0x2b9d60u: goto label_2b9d60;
        case 0x2b9d64u: goto label_2b9d64;
        case 0x2b9d68u: goto label_2b9d68;
        case 0x2b9d6cu: goto label_2b9d6c;
        case 0x2b9d70u: goto label_2b9d70;
        case 0x2b9d74u: goto label_2b9d74;
        case 0x2b9d78u: goto label_2b9d78;
        case 0x2b9d7cu: goto label_2b9d7c;
        case 0x2b9d80u: goto label_2b9d80;
        case 0x2b9d84u: goto label_2b9d84;
        case 0x2b9d88u: goto label_2b9d88;
        case 0x2b9d8cu: goto label_2b9d8c;
        case 0x2b9d90u: goto label_2b9d90;
        case 0x2b9d94u: goto label_2b9d94;
        case 0x2b9d98u: goto label_2b9d98;
        case 0x2b9d9cu: goto label_2b9d9c;
        case 0x2b9da0u: goto label_2b9da0;
        case 0x2b9da4u: goto label_2b9da4;
        case 0x2b9da8u: goto label_2b9da8;
        case 0x2b9dacu: goto label_2b9dac;
        case 0x2b9db0u: goto label_2b9db0;
        case 0x2b9db4u: goto label_2b9db4;
        case 0x2b9db8u: goto label_2b9db8;
        case 0x2b9dbcu: goto label_2b9dbc;
        case 0x2b9dc0u: goto label_2b9dc0;
        case 0x2b9dc4u: goto label_2b9dc4;
        case 0x2b9dc8u: goto label_2b9dc8;
        case 0x2b9dccu: goto label_2b9dcc;
        case 0x2b9dd0u: goto label_2b9dd0;
        case 0x2b9dd4u: goto label_2b9dd4;
        case 0x2b9dd8u: goto label_2b9dd8;
        case 0x2b9ddcu: goto label_2b9ddc;
        case 0x2b9de0u: goto label_2b9de0;
        case 0x2b9de4u: goto label_2b9de4;
        case 0x2b9de8u: goto label_2b9de8;
        case 0x2b9decu: goto label_2b9dec;
        case 0x2b9df0u: goto label_2b9df0;
        case 0x2b9df4u: goto label_2b9df4;
        case 0x2b9df8u: goto label_2b9df8;
        case 0x2b9dfcu: goto label_2b9dfc;
        case 0x2b9e00u: goto label_2b9e00;
        case 0x2b9e04u: goto label_2b9e04;
        case 0x2b9e08u: goto label_2b9e08;
        case 0x2b9e0cu: goto label_2b9e0c;
        case 0x2b9e10u: goto label_2b9e10;
        case 0x2b9e14u: goto label_2b9e14;
        case 0x2b9e18u: goto label_2b9e18;
        case 0x2b9e1cu: goto label_2b9e1c;
        case 0x2b9e20u: goto label_2b9e20;
        case 0x2b9e24u: goto label_2b9e24;
        case 0x2b9e28u: goto label_2b9e28;
        case 0x2b9e2cu: goto label_2b9e2c;
        case 0x2b9e30u: goto label_2b9e30;
        case 0x2b9e34u: goto label_2b9e34;
        case 0x2b9e38u: goto label_2b9e38;
        case 0x2b9e3cu: goto label_2b9e3c;
        case 0x2b9e40u: goto label_2b9e40;
        case 0x2b9e44u: goto label_2b9e44;
        case 0x2b9e48u: goto label_2b9e48;
        case 0x2b9e4cu: goto label_2b9e4c;
        case 0x2b9e50u: goto label_2b9e50;
        case 0x2b9e54u: goto label_2b9e54;
        case 0x2b9e58u: goto label_2b9e58;
        case 0x2b9e5cu: goto label_2b9e5c;
        case 0x2b9e60u: goto label_2b9e60;
        case 0x2b9e64u: goto label_2b9e64;
        case 0x2b9e68u: goto label_2b9e68;
        case 0x2b9e6cu: goto label_2b9e6c;
        case 0x2b9e70u: goto label_2b9e70;
        case 0x2b9e74u: goto label_2b9e74;
        case 0x2b9e78u: goto label_2b9e78;
        case 0x2b9e7cu: goto label_2b9e7c;
        case 0x2b9e80u: goto label_2b9e80;
        case 0x2b9e84u: goto label_2b9e84;
        case 0x2b9e88u: goto label_2b9e88;
        case 0x2b9e8cu: goto label_2b9e8c;
        case 0x2b9e90u: goto label_2b9e90;
        case 0x2b9e94u: goto label_2b9e94;
        case 0x2b9e98u: goto label_2b9e98;
        case 0x2b9e9cu: goto label_2b9e9c;
        case 0x2b9ea0u: goto label_2b9ea0;
        case 0x2b9ea4u: goto label_2b9ea4;
        case 0x2b9ea8u: goto label_2b9ea8;
        case 0x2b9eacu: goto label_2b9eac;
        case 0x2b9eb0u: goto label_2b9eb0;
        case 0x2b9eb4u: goto label_2b9eb4;
        case 0x2b9eb8u: goto label_2b9eb8;
        case 0x2b9ebcu: goto label_2b9ebc;
        case 0x2b9ec0u: goto label_2b9ec0;
        case 0x2b9ec4u: goto label_2b9ec4;
        case 0x2b9ec8u: goto label_2b9ec8;
        case 0x2b9eccu: goto label_2b9ecc;
        case 0x2b9ed0u: goto label_2b9ed0;
        case 0x2b9ed4u: goto label_2b9ed4;
        case 0x2b9ed8u: goto label_2b9ed8;
        case 0x2b9edcu: goto label_2b9edc;
        case 0x2b9ee0u: goto label_2b9ee0;
        case 0x2b9ee4u: goto label_2b9ee4;
        case 0x2b9ee8u: goto label_2b9ee8;
        case 0x2b9eecu: goto label_2b9eec;
        case 0x2b9ef0u: goto label_2b9ef0;
        case 0x2b9ef4u: goto label_2b9ef4;
        case 0x2b9ef8u: goto label_2b9ef8;
        case 0x2b9efcu: goto label_2b9efc;
        case 0x2b9f00u: goto label_2b9f00;
        case 0x2b9f04u: goto label_2b9f04;
        case 0x2b9f08u: goto label_2b9f08;
        case 0x2b9f0cu: goto label_2b9f0c;
        case 0x2b9f10u: goto label_2b9f10;
        default: break;
    }

    ctx->pc = 0x2b98d0u;

label_2b98d0:
    // 0x2b98d0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2b98d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_2b98d4:
    // 0x2b98d4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2b98d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2b98d8:
    // 0x2b98d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b98d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2b98dc:
    // 0x2b98dc: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x2b98dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
label_2b98e0:
    // 0x2b98e0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2b98e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2b98e4:
    // 0x2b98e4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2b98e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2b98e8:
    // 0x2b98e8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2b98e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b98ec:
    // 0x2b98ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2b98ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2b98f0:
    // 0x2b98f0: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2b98f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2b98f4:
    // 0x2b98f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b98f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2b98f8:
    // 0x2b98f8: 0x2484d040  addiu       $a0, $a0, -0x2FC0
    ctx->pc = 0x2b98f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955072));
label_2b98fc:
    // 0x2b98fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b98fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2b9900:
    // 0x2b9900: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2b9900u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b9904:
    // 0x2b9904: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b9904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2b9908:
    // 0x2b9908: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x2b9908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2b990c:
    // 0x2b990c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b990cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2b9910:
    // 0x2b9910: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2b9910u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9914:
    // 0x2b9914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b9914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b9918:
    // 0x2b9918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b9918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b991c:
    // 0x2b991c: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x2b991cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
label_2b9920:
    // 0x2b9920: 0xafa800b8  sw          $t0, 0xB8($sp)
    ctx->pc = 0x2b9920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 8));
label_2b9924:
    // 0x2b9924: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2b9924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_2b9928:
    // 0x2b9928: 0xafa900b4  sw          $t1, 0xB4($sp)
    ctx->pc = 0x2b9928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 9));
label_2b992c:
    // 0x2b992c: 0x24a5d060  addiu       $a1, $a1, -0x2FA0
    ctx->pc = 0x2b992cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955104));
label_2b9930:
    // 0x2b9930: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2b9930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_2b9934:
    // 0x2b9934: 0x8f9194a4  lw          $s1, -0x6B5C($gp)
    ctx->pc = 0x2b9934u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2b9938:
    // 0x2b9938: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x2b9938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b993c:
    // 0x2b993c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2b993cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2b9940:
    // 0x2b9940: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x2b9940u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_2b9944:
    // 0x2b9944: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x2b9944u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_2b9948:
    // 0x2b9948: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2b9948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2b994c:
    // 0x2b994c: 0xfce20010  sd          $v0, 0x10($a3)
    ctx->pc = 0x2b994cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 2));
label_2b9950:
    // 0x2b9950: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x2b9950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
label_2b9954:
    // 0x2b9954: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2b9954u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2b9958:
    // 0x2b9958: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2b9958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b995c:
    // 0x2b995c: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x2b995cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_2b9960:
    // 0x2b9960: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2b9960u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_2b9964:
    // 0x2b9964: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x2b9964u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
label_2b9968:
    // 0x2b9968: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
label_2b996c:
    if (ctx->pc == 0x2B996Cu) {
        ctx->pc = 0x2B996Cu;
            // 0x2b996c: 0xe4800018  swc1        $f0, 0x18($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->pc = 0x2B9970u;
        goto label_2b9970;
    }
    ctx->pc = 0x2B9968u;
    {
        const bool branch_taken_0x2b9968 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B996Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9968u;
            // 0x2b996c: 0xe4800018  swc1        $f0, 0x18($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9968) {
            ctx->pc = 0x2B99A4u;
            goto label_2b99a4;
        }
    }
    ctx->pc = 0x2B9970u;
label_2b9970:
    // 0x2b9970: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2b9970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b9974:
    // 0x2b9974: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2b9974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_2b9978:
    // 0x2b9978: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x2b9978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_2b997c:
    // 0x2b997c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2b997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2b9980:
    // 0x2b9980: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x2b9980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_2b9984:
    // 0x2b9984: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2b9984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2b9988:
    // 0x2b9988: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x2b9988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_2b998c:
    // 0x2b998c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2b998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_2b9990:
    // 0x2b9990: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x2b9990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_2b9994:
    // 0x2b9994: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2b9994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_2b9998:
    // 0x2b9998: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x2b9998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_2b999c:
    // 0x2b999c: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x2b999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_2b99a0:
    // 0x2b99a0: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x2b99a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_2b99a4:
    // 0x2b99a4: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_2b99a8:
    if (ctx->pc == 0x2B99A8u) {
        ctx->pc = 0x2B99ACu;
        goto label_2b99ac;
    }
    ctx->pc = 0x2B99A4u;
    {
        const bool branch_taken_0x2b99a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b99a4) {
            ctx->pc = 0x2B9A1Cu;
            goto label_2b9a1c;
        }
    }
    ctx->pc = 0x2B99ACu;
label_2b99ac:
    // 0x2b99ac: 0x83829b77  lb          $v0, -0x6489($gp)
    ctx->pc = 0x2b99acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941559)));
label_2b99b0:
    // 0x2b99b0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2b99b4:
    if (ctx->pc == 0x2B99B4u) {
        ctx->pc = 0x2B99B8u;
        goto label_2b99b8;
    }
    ctx->pc = 0x2B99B0u;
    {
        const bool branch_taken_0x2b99b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b99b0) {
            ctx->pc = 0x2B9A1Cu;
            goto label_2b9a1c;
        }
    }
    ctx->pc = 0x2B99B8u;
label_2b99b8:
    // 0x2b99b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b99b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b99bc:
    // 0x2b99bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b99bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b99c0:
    // 0x2b99c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b99c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b99c4:
    // 0x2b99c4: 0xc0a0ed8  jal         func_283B60
label_2b99c8:
    if (ctx->pc == 0x2B99C8u) {
        ctx->pc = 0x2B99C8u;
            // 0x2b99c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B99CCu;
        goto label_2b99cc;
    }
    ctx->pc = 0x2B99C4u;
    SET_GPR_U32(ctx, 31, 0x2B99CCu);
    ctx->pc = 0x2B99C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B99C4u;
            // 0x2b99c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B99CCu; }
        if (ctx->pc != 0x2B99CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B99CCu; }
        if (ctx->pc != 0x2B99CCu) { return; }
    }
    ctx->pc = 0x2B99CCu;
label_2b99cc:
    // 0x2b99cc: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x2b99ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_2b99d0:
    // 0x2b99d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b99d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b99d4:
    // 0x2b99d4: 0xac6200c0  sw          $v0, 0xC0($v1)
    ctx->pc = 0x2b99d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
label_2b99d8:
    // 0x2b99d8: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x2b99d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
label_2b99dc:
    // 0x2b99dc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2b99e0:
    if (ctx->pc == 0x2B99E0u) {
        ctx->pc = 0x2B99E0u;
            // 0x2b99e0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x2B99E4u;
        goto label_2b99e4;
    }
    ctx->pc = 0x2B99DCu;
    {
        const bool branch_taken_0x2b99dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B99E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B99DCu;
            // 0x2b99e0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99dc) {
            ctx->pc = 0x2B99C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b99c0;
        }
    }
    ctx->pc = 0x2B99E4u;
label_2b99e4:
    // 0x2b99e4: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2b99e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2b99e8:
    // 0x2b99e8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2b99ec:
    if (ctx->pc == 0x2B99ECu) {
        ctx->pc = 0x2B99ECu;
            // 0x2b99ec: 0x8fb700c0  lw          $s7, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x2B99F0u;
        goto label_2b99f0;
    }
    ctx->pc = 0x2B99E8u;
    {
        const bool branch_taken_0x2b99e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B99ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B99E8u;
            // 0x2b99ec: 0x8fb700c0  lw          $s7, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99e8) {
            ctx->pc = 0x2B99FCu;
            goto label_2b99fc;
        }
    }
    ctx->pc = 0x2B99F0u;
label_2b99f0:
    // 0x2b99f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b99f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b99f4:
    // 0x2b99f4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2b99f8:
    if (ctx->pc == 0x2B99F8u) {
        ctx->pc = 0x2B99FCu;
        goto label_2b99fc;
    }
    ctx->pc = 0x2B99F4u;
    {
        const bool branch_taken_0x2b99f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b99f4) {
            ctx->pc = 0x2B9A00u;
            goto label_2b9a00;
        }
    }
    ctx->pc = 0x2B99FCu;
label_2b99fc:
    // 0x2b99fc: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2b99fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_2b9a00:
    // 0x2b9a00: 0x83839b71  lb          $v1, -0x648F($gp)
    ctx->pc = 0x2b9a00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941553)));
label_2b9a04:
    // 0x2b9a04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9a08:
    // 0x2b9a08: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2b9a0c:
    if (ctx->pc == 0x2B9A0Cu) {
        ctx->pc = 0x2B9A10u;
        goto label_2b9a10;
    }
    ctx->pc = 0x2B9A08u;
    {
        const bool branch_taken_0x2b9a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9a08) {
            ctx->pc = 0x2B9A1Cu;
            goto label_2b9a1c;
        }
    }
    ctx->pc = 0x2B9A10u;
label_2b9a10:
    // 0x2b9a10: 0x16a00002  bnez        $s5, . + 4 + (0x2 << 2)
label_2b9a14:
    if (ctx->pc == 0x2B9A14u) {
        ctx->pc = 0x2B9A14u;
            // 0x2b9a14: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
        ctx->pc = 0x2B9A18u;
        goto label_2b9a18;
    }
    ctx->pc = 0x2B9A10u;
    {
        const bool branch_taken_0x2b9a10 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9A10u;
            // 0x2b9a14: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a10) {
            ctx->pc = 0x2B9A1Cu;
            goto label_2b9a1c;
        }
    }
    ctx->pc = 0x2B9A18u;
label_2b9a18:
    // 0x2b9a18: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x2b9a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_2b9a1c:
    // 0x2b9a1c: 0x3c0301f1  lui         $v1, 0x1F1
    ctx->pc = 0x2b9a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)497 << 16));
label_2b9a20:
    // 0x2b9a20: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2b9a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2b9a24:
    // 0x2b9a24: 0x2463d080  addiu       $v1, $v1, -0x2F80
    ctx->pc = 0x2b9a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955136));
label_2b9a28:
    // 0x2b9a28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b9a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b9a2c:
    // 0x2b9a2c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2b9a2cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2b9a30:
    // 0x2b9a30: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x2b9a30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_2b9a34:
    // 0x2b9a34: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2b9a34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_2b9a38:
    // 0x2b9a38: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x2b9a38u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
label_2b9a3c:
    // 0x2b9a3c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2b9a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2b9a40:
    // 0x2b9a40: 0x8fa800c0  lw          $t0, 0xC0($sp)
    ctx->pc = 0x2b9a40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2b9a44:
    // 0x2b9a44: 0x8fa700c4  lw          $a3, 0xC4($sp)
    ctx->pc = 0x2b9a44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2b9a48:
    // 0x2b9a48: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2b9a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_2b9a4c:
    // 0x2b9a4c: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x2b9a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_2b9a50:
    // 0x2b9a50: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x2b9a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_2b9a54:
    // 0x2b9a54: 0xafa40114  sw          $a0, 0x114($sp)
    ctx->pc = 0x2b9a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 4));
label_2b9a58:
    // 0x2b9a58: 0x83849b70  lb          $a0, -0x6490($gp)
    ctx->pc = 0x2b9a58u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2b9a5c:
    // 0x2b9a5c: 0xafb70104  sw          $s7, 0x104($sp)
    ctx->pc = 0x2b9a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 23));
label_2b9a60:
    // 0x2b9a60: 0xafa80100  sw          $t0, 0x100($sp)
    ctx->pc = 0x2b9a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 8));
label_2b9a64:
    // 0x2b9a64: 0xafa70108  sw          $a3, 0x108($sp)
    ctx->pc = 0x2b9a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 7));
label_2b9a68:
    // 0x2b9a68: 0xafa6010c  sw          $a2, 0x10C($sp)
    ctx->pc = 0x2b9a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 6));
label_2b9a6c:
    // 0x2b9a6c: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x2b9a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
label_2b9a70:
    // 0x2b9a70: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_2b9a74:
    if (ctx->pc == 0x2B9A74u) {
        ctx->pc = 0x2B9A74u;
            // 0x2b9a74: 0xafa30118  sw          $v1, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
        ctx->pc = 0x2B9A78u;
        goto label_2b9a78;
    }
    ctx->pc = 0x2B9A70u;
    {
        const bool branch_taken_0x2b9a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9A70u;
            // 0x2b9a74: 0xafa30118  sw          $v1, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a70) {
            ctx->pc = 0x2B9A80u;
            goto label_2b9a80;
        }
    }
    ctx->pc = 0x2B9A78u;
label_2b9a78:
    // 0x2b9a78: 0x10000009  b           . + 4 + (0x9 << 2)
label_2b9a7c:
    if (ctx->pc == 0x2B9A7Cu) {
        ctx->pc = 0x2B9A7Cu;
            // 0x2b9a7c: 0x83839b72  lb          $v1, -0x648E($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941554)));
        ctx->pc = 0x2B9A80u;
        goto label_2b9a80;
    }
    ctx->pc = 0x2B9A78u;
    {
        const bool branch_taken_0x2b9a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9A78u;
            // 0x2b9a7c: 0x83839b72  lb          $v1, -0x648E($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941554)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a78) {
            ctx->pc = 0x2B9AA0u;
            goto label_2b9aa0;
        }
    }
    ctx->pc = 0x2B9A80u;
label_2b9a80:
    // 0x2b9a80: 0x83829b74  lb          $v0, -0x648C($gp)
    ctx->pc = 0x2b9a80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941556)));
label_2b9a84:
    // 0x2b9a84: 0x1c400028  bgtz        $v0, . + 4 + (0x28 << 2)
label_2b9a88:
    if (ctx->pc == 0x2B9A88u) {
        ctx->pc = 0x2B9A8Cu;
        goto label_2b9a8c;
    }
    ctx->pc = 0x2B9A84u;
    {
        const bool branch_taken_0x2b9a84 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2b9a84) {
            ctx->pc = 0x2B9B28u;
            goto label_2b9b28;
        }
    }
    ctx->pc = 0x2B9A8Cu;
label_2b9a8c:
    // 0x2b9a8c: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x2b9a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2b9a90:
    // 0x2b9a90: 0xc04b950  jal         func_12E540
label_2b9a94:
    if (ctx->pc == 0x2B9A94u) {
        ctx->pc = 0x2B9A94u;
            // 0x2b9a94: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x2B9A98u;
        goto label_2b9a98;
    }
    ctx->pc = 0x2B9A90u;
    SET_GPR_U32(ctx, 31, 0x2B9A98u);
    ctx->pc = 0x2B9A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9A90u;
            // 0x2b9a94: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9A98u; }
        if (ctx->pc != 0x2B9A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9A98u; }
        if (ctx->pc != 0x2B9A98u) { return; }
    }
    ctx->pc = 0x2B9A98u;
label_2b9a98:
    // 0x2b9a98: 0x10000023  b           . + 4 + (0x23 << 2)
label_2b9a9c:
    if (ctx->pc == 0x2B9A9Cu) {
        ctx->pc = 0x2B9AA0u;
        goto label_2b9aa0;
    }
    ctx->pc = 0x2B9A98u;
    {
        const bool branch_taken_0x2b9a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9a98) {
            ctx->pc = 0x2B9B28u;
            goto label_2b9b28;
        }
    }
    ctx->pc = 0x2B9AA0u;
label_2b9aa0:
    // 0x2b9aa0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_2b9aa4:
    if (ctx->pc == 0x2B9AA4u) {
        ctx->pc = 0x2B9AA4u;
            // 0x2b9aa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B9AA8u;
        goto label_2b9aa8;
    }
    ctx->pc = 0x2B9AA0u;
    {
        const bool branch_taken_0x2b9aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9AA0u;
            // 0x2b9aa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9aa0) {
            ctx->pc = 0x2B9AC4u;
            goto label_2b9ac4;
        }
    }
    ctx->pc = 0x2B9AA8u;
label_2b9aa8:
    // 0x2b9aa8: 0x83829b74  lb          $v0, -0x648C($gp)
    ctx->pc = 0x2b9aa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941556)));
label_2b9aac:
    // 0x2b9aac: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_2b9ab0:
    if (ctx->pc == 0x2B9AB0u) {
        ctx->pc = 0x2B9AB4u;
        goto label_2b9ab4;
    }
    ctx->pc = 0x2B9AACu;
    {
        const bool branch_taken_0x2b9aac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2b9aac) {
            ctx->pc = 0x2B9AC0u;
            goto label_2b9ac0;
        }
    }
    ctx->pc = 0x2B9AB4u;
label_2b9ab4:
    // 0x2b9ab4: 0x83829b75  lb          $v0, -0x648B($gp)
    ctx->pc = 0x2b9ab4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941557)));
label_2b9ab8:
    // 0x2b9ab8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b9abc:
    if (ctx->pc == 0x2B9ABCu) {
        ctx->pc = 0x2B9AC0u;
        goto label_2b9ac0;
    }
    ctx->pc = 0x2B9AB8u;
    {
        const bool branch_taken_0x2b9ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9ab8) {
            ctx->pc = 0x2B9AD4u;
            goto label_2b9ad4;
        }
    }
    ctx->pc = 0x2B9AC0u;
label_2b9ac0:
    // 0x2b9ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9ac4:
    // 0x2b9ac4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2b9ac8:
    if (ctx->pc == 0x2B9AC8u) {
        ctx->pc = 0x2B9ACCu;
        goto label_2b9acc;
    }
    ctx->pc = 0x2B9AC4u;
    {
        const bool branch_taken_0x2b9ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b9ac4) {
            ctx->pc = 0x2B9AD4u;
            goto label_2b9ad4;
        }
    }
    ctx->pc = 0x2B9ACCu;
label_2b9acc:
    // 0x2b9acc: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
label_2b9ad0:
    if (ctx->pc == 0x2B9AD0u) {
        ctx->pc = 0x2B9AD4u;
        goto label_2b9ad4;
    }
    ctx->pc = 0x2B9ACCu;
    {
        const bool branch_taken_0x2b9acc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9acc) {
            ctx->pc = 0x2B9B28u;
            goto label_2b9b28;
        }
    }
    ctx->pc = 0x2B9AD4u;
label_2b9ad4:
    // 0x2b9ad4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2b9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2b9ad8:
    // 0x2b9ad8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2b9ad8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b9adc:
    // 0x2b9adc: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_2b9ae0:
    if (ctx->pc == 0x2B9AE0u) {
        ctx->pc = 0x2B9AE4u;
        goto label_2b9ae4;
    }
    ctx->pc = 0x2B9ADCu;
    {
        const bool branch_taken_0x2b9adc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9adc) {
            ctx->pc = 0x2B9B28u;
            goto label_2b9b28;
        }
    }
    ctx->pc = 0x2B9AE4u;
label_2b9ae4:
    // 0x2b9ae4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2b9ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2b9ae8:
    // 0x2b9ae8: 0xc04b950  jal         func_12E540
label_2b9aec:
    if (ctx->pc == 0x2B9AECu) {
        ctx->pc = 0x2B9AECu;
            // 0x2b9aec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9AF0u;
        goto label_2b9af0;
    }
    ctx->pc = 0x2B9AE8u;
    SET_GPR_U32(ctx, 31, 0x2B9AF0u);
    ctx->pc = 0x2B9AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9AE8u;
            // 0x2b9aec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9AF0u; }
        if (ctx->pc != 0x2B9AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9AF0u; }
        if (ctx->pc != 0x2B9AF0u) { return; }
    }
    ctx->pc = 0x2B9AF0u;
label_2b9af0:
    // 0x2b9af0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b9af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9af4:
    // 0x2b9af4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b9af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9af8:
    // 0x2b9af8: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x2b9af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_2b9afc:
    // 0x2b9afc: 0x8c4400e0  lw          $a0, 0xE0($v0)
    ctx->pc = 0x2b9afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
label_2b9b00:
    // 0x2b9b00: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2b9b04:
    if (ctx->pc == 0x2B9B04u) {
        ctx->pc = 0x2B9B08u;
        goto label_2b9b08;
    }
    ctx->pc = 0x2B9B00u;
    {
        const bool branch_taken_0x2b9b00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9b00) {
            ctx->pc = 0x2B9B18u;
            goto label_2b9b18;
        }
    }
    ctx->pc = 0x2B9B08u;
label_2b9b08:
    // 0x2b9b08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b9b08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b9b0c:
    // 0x2b9b0c: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2b9b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2b9b10:
    // 0x2b9b10: 0x320f809  jalr        $t9
label_2b9b14:
    if (ctx->pc == 0x2B9B14u) {
        ctx->pc = 0x2B9B14u;
            // 0x2b9b14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B18u;
        goto label_2b9b18;
    }
    ctx->pc = 0x2B9B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B9B18u);
        ctx->pc = 0x2B9B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9B10u;
            // 0x2b9b14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B9B18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B9B18u; }
            if (ctx->pc != 0x2B9B18u) { return; }
        }
        }
    }
    ctx->pc = 0x2B9B18u;
label_2b9b18:
    // 0x2b9b18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b9b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b9b1c:
    // 0x2b9b1c: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x2b9b1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_2b9b20:
    // 0x2b9b20: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2b9b24:
    if (ctx->pc == 0x2B9B24u) {
        ctx->pc = 0x2B9B24u;
            // 0x2b9b24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x2B9B28u;
        goto label_2b9b28;
    }
    ctx->pc = 0x2B9B20u;
    {
        const bool branch_taken_0x2b9b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9B20u;
            // 0x2b9b24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b20) {
            ctx->pc = 0x2B9AF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b9af8;
        }
    }
    ctx->pc = 0x2B9B28u;
label_2b9b28:
    // 0x2b9b28: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b9b28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9b2c:
    // 0x2b9b2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b9b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9b30:
    // 0x2b9b30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b9b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9b34:
    // 0x2b9b34: 0x3d19821  addu        $s3, $fp, $s1
    ctx->pc = 0x2b9b34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
label_2b9b38:
    // 0x2b9b38: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2b9b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b9b3c:
    // 0x2b9b3c: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
label_2b9b40:
    if (ctx->pc == 0x2B9B40u) {
        ctx->pc = 0x2B9B44u;
        goto label_2b9b44;
    }
    ctx->pc = 0x2B9B3Cu;
    {
        const bool branch_taken_0x2b9b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9b3c) {
            ctx->pc = 0x2B9CA0u;
            goto label_2b9ca0;
        }
    }
    ctx->pc = 0x2B9B44u;
label_2b9b44:
    // 0x2b9b44: 0x80620070  lb          $v0, 0x70($v1)
    ctx->pc = 0x2b9b44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
label_2b9b48:
    // 0x2b9b48: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_2b9b4c:
    if (ctx->pc == 0x2B9B4Cu) {
        ctx->pc = 0x2B9B4Cu;
            // 0x2b9b4c: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->pc = 0x2B9B50u;
        goto label_2b9b50;
    }
    ctx->pc = 0x2B9B48u;
    {
        const bool branch_taken_0x2b9b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9B48u;
            // 0x2b9b4c: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b48) {
            ctx->pc = 0x2B9CA0u;
            goto label_2b9ca0;
        }
    }
    ctx->pc = 0x2B9B50u;
label_2b9b50:
    // 0x2b9b50: 0xc094504  jal         func_251410
label_2b9b54:
    if (ctx->pc == 0x2B9B54u) {
        ctx->pc = 0x2B9B58u;
        goto label_2b9b58;
    }
    ctx->pc = 0x2B9B50u;
    SET_GPR_U32(ctx, 31, 0x2B9B58u);
    ctx->pc = 0x251410u;
    if (runtime->hasFunction(0x251410u)) {
        auto targetFn = runtime->lookupFunction(0x251410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9B58u; }
        if (ctx->pc != 0x2B9B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGInfo__FPc_0x251410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9B58u; }
        if (ctx->pc != 0x2B9B58u) { return; }
    }
    ctx->pc = 0x2B9B58u;
label_2b9b58:
    // 0x2b9b58: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2b9b58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9b5c:
    // 0x2b9b5c: 0x12c00050  beqz        $s6, . + 4 + (0x50 << 2)
label_2b9b60:
    if (ctx->pc == 0x2B9B60u) {
        ctx->pc = 0x2B9B60u;
            // 0x2b9b60: 0x23d1021  addu        $v0, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->pc = 0x2B9B64u;
        goto label_2b9b64;
    }
    ctx->pc = 0x2B9B5Cu;
    {
        const bool branch_taken_0x2b9b5c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9B5Cu;
            // 0x2b9b60: 0x23d1021  addu        $v0, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b5c) {
            ctx->pc = 0x2B9CA0u;
            goto label_2b9ca0;
        }
    }
    ctx->pc = 0x2B9B64u;
label_2b9b64:
    // 0x2b9b64: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2b9b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b9b68:
    // 0x2b9b68: 0x8c4400e0  lw          $a0, 0xE0($v0)
    ctx->pc = 0x2b9b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
label_2b9b6c:
    // 0x2b9b6c: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b9b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
label_2b9b70:
    // 0x2b9b70: 0x2442cac0  addiu       $v0, $v0, -0x3540
    ctx->pc = 0x2b9b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953664));
label_2b9b74:
    // 0x2b9b74: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x2b9b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2b9b78:
    // 0x2b9b78: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_2b9b7c:
    if (ctx->pc == 0x2B9B7Cu) {
        ctx->pc = 0x2B9B7Cu;
            // 0x2b9b7c: 0xac640074  sw          $a0, 0x74($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 4));
        ctx->pc = 0x2B9B80u;
        goto label_2b9b80;
    }
    ctx->pc = 0x2B9B78u;
    {
        const bool branch_taken_0x2b9b78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9B78u;
            // 0x2b9b7c: 0xac640074  sw          $a0, 0x74($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b78) {
            ctx->pc = 0x2B9B88u;
            goto label_2b9b88;
        }
    }
    ctx->pc = 0x2B9B80u;
label_2b9b80:
    // 0x2b9b80: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2b9b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_2b9b84:
    // 0x2b9b84: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2b9b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2b9b88:
    // 0x2b9b88: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2b9b88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2b9b8c:
    // 0x2b9b8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b9b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b9b90:
    // 0x2b9b90: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2b9b94:
    if (ctx->pc == 0x2B9B94u) {
        ctx->pc = 0x2B9B98u;
        goto label_2b9b98;
    }
    ctx->pc = 0x2B9B90u;
    {
        const bool branch_taken_0x2b9b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9b90) {
            ctx->pc = 0x2B9BA0u;
            goto label_2b9ba0;
        }
    }
    ctx->pc = 0x2B9B98u;
label_2b9b98:
    // 0x2b9b98: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2b9b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b9b9c:
    // 0x2b9b9c: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x2b9b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
label_2b9ba0:
    // 0x2b9ba0: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2b9ba0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2b9ba4:
    // 0x2b9ba4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b9ba8:
    // 0x2b9ba8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2b9bac:
    if (ctx->pc == 0x2B9BACu) {
        ctx->pc = 0x2B9BACu;
            // 0x2b9bac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B9BB0u;
        goto label_2b9bb0;
    }
    ctx->pc = 0x2B9BA8u;
    {
        const bool branch_taken_0x2b9ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9BA8u;
            // 0x2b9bac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ba8) {
            ctx->pc = 0x2B9BC8u;
            goto label_2b9bc8;
        }
    }
    ctx->pc = 0x2B9BB0u;
label_2b9bb0:
    // 0x2b9bb0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2b9bb4:
    if (ctx->pc == 0x2B9BB4u) {
        ctx->pc = 0x2B9BB8u;
        goto label_2b9bb8;
    }
    ctx->pc = 0x2B9BB0u;
    {
        const bool branch_taken_0x2b9bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b9bb0) {
            ctx->pc = 0x2B9BC8u;
            goto label_2b9bc8;
        }
    }
    ctx->pc = 0x2B9BB8u;
label_2b9bb8:
    // 0x2b9bb8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b9bbc:
    if (ctx->pc == 0x2B9BBCu) {
        ctx->pc = 0x2B9BC0u;
        goto label_2b9bc0;
    }
    ctx->pc = 0x2B9BB8u;
    {
        const bool branch_taken_0x2b9bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9bb8) {
            ctx->pc = 0x2B9BC8u;
            goto label_2b9bc8;
        }
    }
    ctx->pc = 0x2B9BC0u;
label_2b9bc0:
    // 0x2b9bc0: 0x10000013  b           . + 4 + (0x13 << 2)
label_2b9bc4:
    if (ctx->pc == 0x2B9BC4u) {
        ctx->pc = 0x2B9BC8u;
        goto label_2b9bc8;
    }
    ctx->pc = 0x2B9BC0u;
    {
        const bool branch_taken_0x2b9bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9bc0) {
            ctx->pc = 0x2B9C10u;
            goto label_2b9c10;
        }
    }
    ctx->pc = 0x2B9BC8u;
label_2b9bc8:
    // 0x2b9bc8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2b9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2b9bcc:
    // 0x2b9bcc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b9bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b9bd0:
    // 0x2b9bd0: 0x24a5f488  addiu       $a1, $a1, -0xB78
    ctx->pc = 0x2b9bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964360));
label_2b9bd4:
    // 0x2b9bd4: 0xc04a3dc  jal         func_128F70
label_2b9bd8:
    if (ctx->pc == 0x2B9BD8u) {
        ctx->pc = 0x2B9BD8u;
            // 0x2b9bd8: 0x244401d8  addiu       $a0, $v0, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 472));
        ctx->pc = 0x2B9BDCu;
        goto label_2b9bdc;
    }
    ctx->pc = 0x2B9BD4u;
    SET_GPR_U32(ctx, 31, 0x2B9BDCu);
    ctx->pc = 0x2B9BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9BD4u;
            // 0x2b9bd8: 0x244401d8  addiu       $a0, $v0, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9BDCu; }
        if (ctx->pc != 0x2B9BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9BDCu; }
        if (ctx->pc != 0x2B9BDCu) { return; }
    }
    ctx->pc = 0x2B9BDCu;
label_2b9bdc:
    // 0x2b9bdc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2b9bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b9be0:
    // 0x2b9be0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2b9be0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9be4:
    // 0x2b9be4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2b9be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2b9be8:
    // 0x2b9be8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b9be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b9bec:
    // 0x2b9bec: 0x8ec80110  lw          $t0, 0x110($s6)
    ctx->pc = 0x2b9becu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 272)));
label_2b9bf0:
    // 0x2b9bf0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2b9bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b9bf4:
    // 0x2b9bf4: 0x8faa00b8  lw          $t2, 0xB8($sp)
    ctx->pc = 0x2b9bf4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2b9bf8:
    // 0x2b9bf8: 0x8c650074  lw          $a1, 0x74($v1)
    ctx->pc = 0x2b9bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_2b9bfc:
    // 0x2b9bfc: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x2b9bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2b9c00:
    // 0x2b9c00: 0xc0ae560  jal         func_2B9580
label_2b9c04:
    if (ctx->pc == 0x2B9C04u) {
        ctx->pc = 0x2B9C04u;
            // 0x2b9c04: 0x240bffff  addiu       $t3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B9C08u;
        goto label_2b9c08;
    }
    ctx->pc = 0x2B9C00u;
    SET_GPR_U32(ctx, 31, 0x2B9C08u);
    ctx->pc = 0x2B9C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9C00u;
            // 0x2b9c04: 0x240bffff  addiu       $t3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9580u;
    if (runtime->hasFunction(0x2B9580u)) {
        auto targetFn = runtime->lookupFunction(0x2B9580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9C08u; }
        if (ctx->pc != 0x2B9C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoadPack__FiP12CActionCharaP12CActionCharaiPUiP9mgCMemoryii_0x2b9580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9C08u; }
        if (ctx->pc != 0x2B9C08u) { return; }
    }
    ctx->pc = 0x2B9C08u;
label_2b9c08:
    // 0x2b9c08: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2b9c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2b9c0c:
    // 0x2b9c0c: 0xa04001d8  sb          $zero, 0x1D8($v0)
    ctx->pc = 0x2b9c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 472), (uint8_t)GPR_U32(ctx, 0));
label_2b9c10:
    // 0x2b9c10: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2b9c10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2b9c14:
    // 0x2b9c14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b9c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b9c18:
    // 0x2b9c18: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2b9c1c:
    if (ctx->pc == 0x2B9C1Cu) {
        ctx->pc = 0x2B9C20u;
        goto label_2b9c20;
    }
    ctx->pc = 0x2B9C18u;
    {
        const bool branch_taken_0x2b9c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b9c18) {
            ctx->pc = 0x2B9C30u;
            goto label_2b9c30;
        }
    }
    ctx->pc = 0x2B9C20u;
label_2b9c20:
    // 0x2b9c20: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b9c24:
    if (ctx->pc == 0x2B9C24u) {
        ctx->pc = 0x2B9C28u;
        goto label_2b9c28;
    }
    ctx->pc = 0x2B9C20u;
    {
        const bool branch_taken_0x2b9c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9c20) {
            ctx->pc = 0x2B9C30u;
            goto label_2b9c30;
        }
    }
    ctx->pc = 0x2B9C28u;
label_2b9c28:
    // 0x2b9c28: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2b9c2c:
    if (ctx->pc == 0x2B9C2Cu) {
        ctx->pc = 0x2B9C30u;
        goto label_2b9c30;
    }
    ctx->pc = 0x2B9C28u;
    {
        const bool branch_taken_0x2b9c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9c28) {
            ctx->pc = 0x2B9C98u;
            goto label_2b9c98;
        }
    }
    ctx->pc = 0x2B9C30u;
label_2b9c30:
    // 0x2b9c30: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x2b9c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_2b9c34:
    // 0x2b9c34: 0x8c450100  lw          $a1, 0x100($v0)
    ctx->pc = 0x2b9c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_2b9c38:
    // 0x2b9c38: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_2b9c3c:
    if (ctx->pc == 0x2B9C3Cu) {
        ctx->pc = 0x2B9C40u;
        goto label_2b9c40;
    }
    ctx->pc = 0x2B9C38u;
    {
        const bool branch_taken_0x2b9c38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9c38) {
            ctx->pc = 0x2B9C98u;
            goto label_2b9c98;
        }
    }
    ctx->pc = 0x2B9C40u;
label_2b9c40:
    // 0x2b9c40: 0x8f829b6c  lw          $v0, -0x6494($gp)
    ctx->pc = 0x2b9c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
label_2b9c44:
    // 0x2b9c44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b9c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b9c48:
    // 0x2b9c48: 0x8faa00b4  lw          $t2, 0xB4($sp)
    ctx->pc = 0x2b9c48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2b9c4c:
    // 0x2b9c4c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2b9c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b9c50:
    // 0x2b9c50: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2b9c50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b9c54:
    // 0x2b9c54: 0x524821  addu        $t1, $v0, $s2
    ctx->pc = 0x2b9c54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2b9c58:
    // 0x2b9c58: 0xad200024  sw          $zero, 0x24($t1)
    ctx->pc = 0x2b9c58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 0));
label_2b9c5c:
    // 0x2b9c5c: 0xad20001c  sw          $zero, 0x1C($t1)
    ctx->pc = 0x2b9c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 0));
label_2b9c60:
    // 0x2b9c60: 0x8ec80110  lw          $t0, 0x110($s6)
    ctx->pc = 0x2b9c60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 272)));
label_2b9c64:
    // 0x2b9c64: 0xc0ae560  jal         func_2B9580
label_2b9c68:
    if (ctx->pc == 0x2B9C68u) {
        ctx->pc = 0x2B9C68u;
            // 0x2b9c68: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9C6Cu;
        goto label_2b9c6c;
    }
    ctx->pc = 0x2B9C64u;
    SET_GPR_U32(ctx, 31, 0x2B9C6Cu);
    ctx->pc = 0x2B9C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9C64u;
            // 0x2b9c68: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9580u;
    if (runtime->hasFunction(0x2B9580u)) {
        auto targetFn = runtime->lookupFunction(0x2B9580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9C6Cu; }
        if (ctx->pc != 0x2B9C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoadPack__FiP12CActionCharaP12CActionCharaiPUiP9mgCMemoryii_0x2b9580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9C6Cu; }
        if (ctx->pc != 0x2B9C6Cu) { return; }
    }
    ctx->pc = 0x2B9C6Cu;
label_2b9c6c:
    // 0x2b9c6c: 0x1680000a  bnez        $s4, . + 4 + (0xA << 2)
label_2b9c70:
    if (ctx->pc == 0x2B9C70u) {
        ctx->pc = 0x2B9C74u;
        goto label_2b9c74;
    }
    ctx->pc = 0x2B9C6Cu;
    {
        const bool branch_taken_0x2b9c6c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9c6c) {
            ctx->pc = 0x2B9C98u;
            goto label_2b9c98;
        }
    }
    ctx->pc = 0x2B9C74u;
label_2b9c74:
    // 0x2b9c74: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2b9c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2b9c78:
    // 0x2b9c78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b9c7c:
    if (ctx->pc == 0x2B9C7Cu) {
        ctx->pc = 0x2B9C80u;
        goto label_2b9c80;
    }
    ctx->pc = 0x2B9C78u;
    {
        const bool branch_taken_0x2b9c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9c78) {
            ctx->pc = 0x2B9C98u;
            goto label_2b9c98;
        }
    }
    ctx->pc = 0x2B9C80u;
label_2b9c80:
    // 0x2b9c80: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x2b9c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2b9c84:
    // 0x2b9c84: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x2b9c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_2b9c88:
    // 0x2b9c88: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2b9c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b9c8c:
    // 0x2b9c8c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2b9c8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2b9c90:
    // 0x2b9c90: 0x320f809  jalr        $t9
label_2b9c94:
    if (ctx->pc == 0x2B9C94u) {
        ctx->pc = 0x2B9C94u;
            // 0x2b9c94: 0x24a5d690  addiu       $a1, $a1, -0x2970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956688));
        ctx->pc = 0x2B9C98u;
        goto label_2b9c98;
    }
    ctx->pc = 0x2B9C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B9C98u);
        ctx->pc = 0x2B9C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9C90u;
            // 0x2b9c94: 0x24a5d690  addiu       $a1, $a1, -0x2970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956688));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B9C98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B9C98u; }
            if (ctx->pc != 0x2B9C98u) { return; }
        }
        }
    }
    ctx->pc = 0x2B9C98u;
label_2b9c98:
    // 0x2b9c98: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2b9c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b9c9c:
    // 0x2b9c9c: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x2b9c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_2b9ca0:
    // 0x2b9ca0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2b9ca0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2b9ca4:
    // 0x2b9ca4: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x2b9ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
label_2b9ca8:
    // 0x2b9ca8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b9ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2b9cac:
    // 0x2b9cac: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
label_2b9cb0:
    if (ctx->pc == 0x2B9CB0u) {
        ctx->pc = 0x2B9CB0u;
            // 0x2b9cb0: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x2B9CB4u;
        goto label_2b9cb4;
    }
    ctx->pc = 0x2B9CACu;
    {
        const bool branch_taken_0x2b9cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9CACu;
            // 0x2b9cb0: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cac) {
            ctx->pc = 0x2B9B34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b9b34;
        }
    }
    ctx->pc = 0x2B9CB4u;
label_2b9cb4:
    // 0x2b9cb4: 0x83829b72  lb          $v0, -0x648E($gp)
    ctx->pc = 0x2b9cb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941554)));
label_2b9cb8:
    // 0x2b9cb8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2b9cbc:
    if (ctx->pc == 0x2B9CBCu) {
        ctx->pc = 0x2B9CC0u;
        goto label_2b9cc0;
    }
    ctx->pc = 0x2B9CB8u;
    {
        const bool branch_taken_0x2b9cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9cb8) {
            ctx->pc = 0x2B9CE0u;
            goto label_2b9ce0;
        }
    }
    ctx->pc = 0x2B9CC0u;
label_2b9cc0:
    // 0x2b9cc0: 0x83829b74  lb          $v0, -0x648C($gp)
    ctx->pc = 0x2b9cc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941556)));
label_2b9cc4:
    // 0x2b9cc4: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_2b9cc8:
    if (ctx->pc == 0x2B9CC8u) {
        ctx->pc = 0x2B9CC8u;
            // 0x2b9cc8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2B9CCCu;
        goto label_2b9ccc;
    }
    ctx->pc = 0x2B9CC4u;
    {
        const bool branch_taken_0x2b9cc4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2B9CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9CC4u;
            // 0x2b9cc8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cc4) {
            ctx->pc = 0x2B9CDCu;
            goto label_2b9cdc;
        }
    }
    ctx->pc = 0x2B9CCCu;
label_2b9ccc:
    // 0x2b9ccc: 0x83829b75  lb          $v0, -0x648B($gp)
    ctx->pc = 0x2b9cccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941557)));
label_2b9cd0:
    // 0x2b9cd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b9cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b9cd4:
    // 0x2b9cd4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b9cd8:
    if (ctx->pc == 0x2B9CD8u) {
        ctx->pc = 0x2B9CD8u;
            // 0x2b9cd8: 0xa3829b75  sb          $v0, -0x648B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B9CDCu;
        goto label_2b9cdc;
    }
    ctx->pc = 0x2B9CD4u;
    {
        const bool branch_taken_0x2b9cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9CD4u;
            // 0x2b9cd8: 0xa3829b75  sb          $v0, -0x648B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cd4) {
            ctx->pc = 0x2B9CE0u;
            goto label_2b9ce0;
        }
    }
    ctx->pc = 0x2B9CDCu;
label_2b9cdc:
    // 0x2b9cdc: 0xa3829b75  sb          $v0, -0x648B($gp)
    ctx->pc = 0x2b9cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
label_2b9ce0:
    // 0x2b9ce0: 0x83829b70  lb          $v0, -0x6490($gp)
    ctx->pc = 0x2b9ce0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2b9ce4:
    // 0x2b9ce4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b9ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b9ce8:
    // 0x2b9ce8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_2b9cec:
    if (ctx->pc == 0x2B9CECu) {
        ctx->pc = 0x2B9CF0u;
        goto label_2b9cf0;
    }
    ctx->pc = 0x2B9CE8u;
    {
        const bool branch_taken_0x2b9ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b9ce8) {
            ctx->pc = 0x2B9D08u;
            goto label_2b9d08;
        }
    }
    ctx->pc = 0x2B9CF0u;
label_2b9cf0:
    // 0x2b9cf0: 0x83829b74  lb          $v0, -0x648C($gp)
    ctx->pc = 0x2b9cf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941556)));
label_2b9cf4:
    // 0x2b9cf4: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_2b9cf8:
    if (ctx->pc == 0x2B9CF8u) {
        ctx->pc = 0x2B9CF8u;
            // 0x2b9cf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B9CFCu;
        goto label_2b9cfc;
    }
    ctx->pc = 0x2B9CF4u;
    {
        const bool branch_taken_0x2b9cf4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B9CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9CF4u;
            // 0x2b9cf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cf4) {
            ctx->pc = 0x2B9D04u;
            goto label_2b9d04;
        }
    }
    ctx->pc = 0x2B9CFCu;
label_2b9cfc:
    // 0x2b9cfc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b9d00:
    if (ctx->pc == 0x2B9D00u) {
        ctx->pc = 0x2B9D00u;
            // 0x2b9d00: 0xa3829b74  sb          $v0, -0x648C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B9D04u;
        goto label_2b9d04;
    }
    ctx->pc = 0x2B9CFCu;
    {
        const bool branch_taken_0x2b9cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9CFCu;
            // 0x2b9d00: 0xa3829b74  sb          $v0, -0x648C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cfc) {
            ctx->pc = 0x2B9D08u;
            goto label_2b9d08;
        }
    }
    ctx->pc = 0x2B9D04u;
label_2b9d04:
    // 0x2b9d04: 0xa3839b74  sb          $v1, -0x648C($gp)
    ctx->pc = 0x2b9d04u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 3));
label_2b9d08:
    // 0x2b9d08: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x2b9d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_2b9d0c:
    // 0x2b9d0c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_2b9d10:
    if (ctx->pc == 0x2B9D10u) {
        ctx->pc = 0x2B9D10u;
            // 0x2b9d10: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x2B9D14u;
        goto label_2b9d14;
    }
    ctx->pc = 0x2B9D0Cu;
    {
        const bool branch_taken_0x2b9d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9D0Cu;
            // 0x2b9d10: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9d0c) {
            ctx->pc = 0x2B9DA0u;
            goto label_2b9da0;
        }
    }
    ctx->pc = 0x2B9D14u;
label_2b9d14:
    // 0x2b9d14: 0xc094504  jal         func_251410
label_2b9d18:
    if (ctx->pc == 0x2B9D18u) {
        ctx->pc = 0x2B9D1Cu;
        goto label_2b9d1c;
    }
    ctx->pc = 0x2B9D14u;
    SET_GPR_U32(ctx, 31, 0x2B9D1Cu);
    ctx->pc = 0x251410u;
    if (runtime->hasFunction(0x251410u)) {
        auto targetFn = runtime->lookupFunction(0x251410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D1Cu; }
        if (ctx->pc != 0x2B9D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGInfo__FPc_0x251410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D1Cu; }
        if (ctx->pc != 0x2B9D1Cu) { return; }
    }
    ctx->pc = 0x2B9D1Cu;
label_2b9d1c:
    // 0x2b9d1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b9d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9d20:
    // 0x2b9d20: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_2b9d24:
    if (ctx->pc == 0x2B9D24u) {
        ctx->pc = 0x2B9D28u;
        goto label_2b9d28;
    }
    ctx->pc = 0x2B9D20u;
    {
        const bool branch_taken_0x2b9d20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d20) {
            ctx->pc = 0x2B9DA0u;
            goto label_2b9da0;
        }
    }
    ctx->pc = 0x2B9D28u;
label_2b9d28:
    // 0x2b9d28: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2b9d28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2b9d2c:
    // 0x2b9d2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b9d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b9d30:
    // 0x2b9d30: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_2b9d34:
    if (ctx->pc == 0x2B9D34u) {
        ctx->pc = 0x2B9D38u;
        goto label_2b9d38;
    }
    ctx->pc = 0x2B9D30u;
    {
        const bool branch_taken_0x2b9d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b9d30) {
            ctx->pc = 0x2B9D5Cu;
            goto label_2b9d5c;
        }
    }
    ctx->pc = 0x2B9D38u;
label_2b9d38:
    // 0x2b9d38: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2b9d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2b9d3c:
    // 0x2b9d3c: 0x3c0701f1  lui         $a3, 0x1F1
    ctx->pc = 0x2b9d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)497 << 16));
label_2b9d40:
    // 0x2b9d40: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x2b9d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2b9d44:
    // 0x2b9d44: 0x8e060114  lw          $a2, 0x114($s0)
    ctx->pc = 0x2b9d44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_2b9d48:
    // 0x2b9d48: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x2b9d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2b9d4c:
    // 0x2b9d4c: 0xc05c430  jal         func_1710C0
label_2b9d50:
    if (ctx->pc == 0x2B9D50u) {
        ctx->pc = 0x2B9D50u;
            // 0x2b9d50: 0x24e7cbe0  addiu       $a3, $a3, -0x3420 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953952));
        ctx->pc = 0x2B9D54u;
        goto label_2b9d54;
    }
    ctx->pc = 0x2B9D4Cu;
    SET_GPR_U32(ctx, 31, 0x2B9D54u);
    ctx->pc = 0x2B9D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9D4Cu;
            // 0x2b9d50: 0x24e7cbe0  addiu       $a3, $a3, -0x3420 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1710C0u;
    if (runtime->hasFunction(0x1710C0u)) {
        auto targetFn = runtime->lookupFunction(0x1710C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D54u; }
        if (ctx->pc != 0x2B9D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadActionFile__12CActionCharaFPciP9mgCMemory_0x1710c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D54u; }
        if (ctx->pc != 0x2B9D54u) { return; }
    }
    ctx->pc = 0x2B9D54u;
label_2b9d54:
    // 0x2b9d54: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x2b9d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_2b9d58:
    // 0x2b9d58: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x2b9d58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_2b9d5c:
    // 0x2b9d5c: 0x83829b77  lb          $v0, -0x6489($gp)
    ctx->pc = 0x2b9d5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941559)));
label_2b9d60:
    // 0x2b9d60: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2b9d64:
    if (ctx->pc == 0x2B9D64u) {
        ctx->pc = 0x2B9D68u;
        goto label_2b9d68;
    }
    ctx->pc = 0x2B9D60u;
    {
        const bool branch_taken_0x2b9d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d60) {
            ctx->pc = 0x2B9D94u;
            goto label_2b9d94;
        }
    }
    ctx->pc = 0x2B9D68u;
label_2b9d68:
    // 0x2b9d68: 0x8f829b6c  lw          $v0, -0x6494($gp)
    ctx->pc = 0x2b9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
label_2b9d6c:
    // 0x2b9d6c: 0xac400144  sw          $zero, 0x144($v0)
    ctx->pc = 0x2b9d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 0));
label_2b9d70:
    // 0x2b9d70: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x2b9d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
label_2b9d74:
    // 0x2b9d74: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2b9d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2b9d78:
    // 0x2b9d78: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2b9d7c:
    if (ctx->pc == 0x2B9D7Cu) {
        ctx->pc = 0x2B9D80u;
        goto label_2b9d80;
    }
    ctx->pc = 0x2B9D78u;
    {
        const bool branch_taken_0x2b9d78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d78) {
            ctx->pc = 0x2B9D94u;
            goto label_2b9d94;
        }
    }
    ctx->pc = 0x2B9D80u;
label_2b9d80:
    // 0x2b9d80: 0x8f829b6c  lw          $v0, -0x6494($gp)
    ctx->pc = 0x2b9d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
label_2b9d84:
    // 0x2b9d84: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x2b9d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2b9d88:
    // 0x2b9d88: 0x8e060114  lw          $a2, 0x114($s0)
    ctx->pc = 0x2b9d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_2b9d8c:
    // 0x2b9d8c: 0xc05c430  jal         func_1710C0
label_2b9d90:
    if (ctx->pc == 0x2B9D90u) {
        ctx->pc = 0x2B9D90u;
            // 0x2b9d90: 0x24470120  addiu       $a3, $v0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
        ctx->pc = 0x2B9D94u;
        goto label_2b9d94;
    }
    ctx->pc = 0x2B9D8Cu;
    SET_GPR_U32(ctx, 31, 0x2B9D94u);
    ctx->pc = 0x2B9D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9D8Cu;
            // 0x2b9d90: 0x24470120  addiu       $a3, $v0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1710C0u;
    if (runtime->hasFunction(0x1710C0u)) {
        auto targetFn = runtime->lookupFunction(0x1710C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D94u; }
        if (ctx->pc != 0x2B9D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadActionFile__12CActionCharaFPciP9mgCMemory_0x1710c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D94u; }
        if (ctx->pc != 0x2B9D94u) { return; }
    }
    ctx->pc = 0x2B9D94u;
label_2b9d94:
    // 0x2b9d94: 0x83829b75  lb          $v0, -0x648B($gp)
    ctx->pc = 0x2b9d94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941557)));
label_2b9d98:
    // 0x2b9d98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b9d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b9d9c:
    // 0x2b9d9c: 0xa3829b75  sb          $v0, -0x648B($gp)
    ctx->pc = 0x2b9d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
label_2b9da0:
    // 0x2b9da0: 0x83829b72  lb          $v0, -0x648E($gp)
    ctx->pc = 0x2b9da0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941554)));
label_2b9da4:
    // 0x2b9da4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9da8:
    // 0x2b9da8: 0x1044001a  beq         $v0, $a0, . + 4 + (0x1A << 2)
label_2b9dac:
    if (ctx->pc == 0x2B9DACu) {
        ctx->pc = 0x2B9DB0u;
        goto label_2b9db0;
    }
    ctx->pc = 0x2B9DA8u;
    {
        const bool branch_taken_0x2b9da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b9da8) {
            ctx->pc = 0x2B9E14u;
            goto label_2b9e14;
        }
    }
    ctx->pc = 0x2B9DB0u;
label_2b9db0:
    // 0x2b9db0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b9db4:
    if (ctx->pc == 0x2B9DB4u) {
        ctx->pc = 0x2B9DB8u;
        goto label_2b9db8;
    }
    ctx->pc = 0x2B9DB0u;
    {
        const bool branch_taken_0x2b9db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9db0) {
            ctx->pc = 0x2B9DC0u;
            goto label_2b9dc0;
        }
    }
    ctx->pc = 0x2B9DB8u;
label_2b9db8:
    // 0x2b9db8: 0x10000031  b           . + 4 + (0x31 << 2)
label_2b9dbc:
    if (ctx->pc == 0x2B9DBCu) {
        ctx->pc = 0x2B9DBCu;
            // 0x2b9dbc: 0x83839b70  lb          $v1, -0x6490($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
        ctx->pc = 0x2B9DC0u;
        goto label_2b9dc0;
    }
    ctx->pc = 0x2B9DB8u;
    {
        const bool branch_taken_0x2b9db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9DB8u;
            // 0x2b9dbc: 0x83839b70  lb          $v1, -0x6490($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9db8) {
            ctx->pc = 0x2B9E80u;
            goto label_2b9e80;
        }
    }
    ctx->pc = 0x2B9DC0u;
label_2b9dc0:
    // 0x2b9dc0: 0x83839b74  lb          $v1, -0x648C($gp)
    ctx->pc = 0x2b9dc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941556)));
label_2b9dc4:
    // 0x2b9dc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b9dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b9dc8:
    // 0x2b9dc8: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
label_2b9dcc:
    if (ctx->pc == 0x2B9DCCu) {
        ctx->pc = 0x2B9DD0u;
        goto label_2b9dd0;
    }
    ctx->pc = 0x2B9DC8u;
    {
        const bool branch_taken_0x2b9dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9dc8) {
            ctx->pc = 0x2B9E7Cu;
            goto label_2b9e7c;
        }
    }
    ctx->pc = 0x2B9DD0u;
label_2b9dd0:
    // 0x2b9dd0: 0x83829b75  lb          $v0, -0x648B($gp)
    ctx->pc = 0x2b9dd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941557)));
label_2b9dd4:
    // 0x2b9dd4: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x2b9dd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_2b9dd8:
    // 0x2b9dd8: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_2b9ddc:
    if (ctx->pc == 0x2B9DDCu) {
        ctx->pc = 0x2B9DE0u;
        goto label_2b9de0;
    }
    ctx->pc = 0x2B9DD8u;
    {
        const bool branch_taken_0x2b9dd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9dd8) {
            ctx->pc = 0x2B9E7Cu;
            goto label_2b9e7c;
        }
    }
    ctx->pc = 0x2B9DE0u;
label_2b9de0:
    // 0x2b9de0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2b9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2b9de4:
    // 0x2b9de4: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2b9de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_2b9de8:
    // 0x2b9de8: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x2b9de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2b9dec:
    // 0x2b9dec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b9decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b9df0:
    // 0x2b9df0: 0xc04e780  jal         func_139E00
label_2b9df4:
    if (ctx->pc == 0x2B9DF4u) {
        ctx->pc = 0x2B9DF4u;
            // 0x2b9df4: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x2B9DF8u;
        goto label_2b9df8;
    }
    ctx->pc = 0x2B9DF0u;
    SET_GPR_U32(ctx, 31, 0x2B9DF8u);
    ctx->pc = 0x2B9DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9DF0u;
            // 0x2b9df4: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9DF8u; }
        if (ctx->pc != 0x2B9DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9DF8u; }
        if (ctx->pc != 0x2B9DF8u) { return; }
    }
    ctx->pc = 0x2B9DF8u;
label_2b9df8:
    // 0x2b9df8: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x2b9df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2b9dfc:
    // 0x2b9dfc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b9dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e00:
    // 0x2b9e00: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2b9e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e04:
    // 0x2b9e04: 0xc0ae434  jal         func_2B90D0
label_2b9e08:
    if (ctx->pc == 0x2B9E08u) {
        ctx->pc = 0x2B9E08u;
            // 0x2b9e08: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B9E0Cu;
        goto label_2b9e0c;
    }
    ctx->pc = 0x2B9E04u;
    SET_GPR_U32(ctx, 31, 0x2B9E0Cu);
    ctx->pc = 0x2B9E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9E04u;
            // 0x2b9e08: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B90D0u;
    if (runtime->hasFunction(0x2B90D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B90D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E0Cu; }
        if (ctx->pc != 0x2B9E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoad__FP9mgCMemoryiPP17MENU_BGREAD_INFO2i_0x2b90d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E0Cu; }
        if (ctx->pc != 0x2B9E0Cu) { return; }
    }
    ctx->pc = 0x2B9E0Cu;
label_2b9e0c:
    // 0x2b9e0c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2b9e10:
    if (ctx->pc == 0x2B9E10u) {
        ctx->pc = 0x2B9E14u;
        goto label_2b9e14;
    }
    ctx->pc = 0x2B9E0Cu;
    {
        const bool branch_taken_0x2b9e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e0c) {
            ctx->pc = 0x2B9E7Cu;
            goto label_2b9e7c;
        }
    }
    ctx->pc = 0x2B9E14u;
label_2b9e14:
    // 0x2b9e14: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2b9e14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2b9e18:
    // 0x2b9e18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b9e1c:
    // 0x2b9e1c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2b9e20:
    if (ctx->pc == 0x2B9E20u) {
        ctx->pc = 0x2B9E24u;
        goto label_2b9e24;
    }
    ctx->pc = 0x2B9E1Cu;
    {
        const bool branch_taken_0x2b9e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b9e1c) {
            ctx->pc = 0x2B9E2Cu;
            goto label_2b9e2c;
        }
    }
    ctx->pc = 0x2B9E24u;
label_2b9e24:
    // 0x2b9e24: 0x10000015  b           . + 4 + (0x15 << 2)
label_2b9e28:
    if (ctx->pc == 0x2B9E28u) {
        ctx->pc = 0x2B9E2Cu;
        goto label_2b9e2c;
    }
    ctx->pc = 0x2B9E24u;
    {
        const bool branch_taken_0x2b9e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e24) {
            ctx->pc = 0x2B9E7Cu;
            goto label_2b9e7c;
        }
    }
    ctx->pc = 0x2B9E2Cu;
label_2b9e2c:
    // 0x2b9e2c: 0x83829b74  lb          $v0, -0x648C($gp)
    ctx->pc = 0x2b9e2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941556)));
label_2b9e30:
    // 0x2b9e30: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
label_2b9e34:
    if (ctx->pc == 0x2B9E34u) {
        ctx->pc = 0x2B9E38u;
        goto label_2b9e38;
    }
    ctx->pc = 0x2B9E30u;
    {
        const bool branch_taken_0x2b9e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b9e30) {
            ctx->pc = 0x2B9E64u;
            goto label_2b9e64;
        }
    }
    ctx->pc = 0x2B9E38u;
label_2b9e38:
    // 0x2b9e38: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2b9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2b9e3c:
    // 0x2b9e3c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2b9e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_2b9e40:
    // 0x2b9e40: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x2b9e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2b9e44:
    // 0x2b9e44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b9e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e48:
    // 0x2b9e48: 0xc04e780  jal         func_139E00
label_2b9e4c:
    if (ctx->pc == 0x2B9E4Cu) {
        ctx->pc = 0x2B9E4Cu;
            // 0x2b9e4c: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x2B9E50u;
        goto label_2b9e50;
    }
    ctx->pc = 0x2B9E48u;
    SET_GPR_U32(ctx, 31, 0x2B9E50u);
    ctx->pc = 0x2B9E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9E48u;
            // 0x2b9e4c: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E50u; }
        if (ctx->pc != 0x2B9E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E50u; }
        if (ctx->pc != 0x2B9E50u) { return; }
    }
    ctx->pc = 0x2B9E50u;
label_2b9e50:
    // 0x2b9e50: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x2b9e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2b9e54:
    // 0x2b9e54: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b9e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e58:
    // 0x2b9e58: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2b9e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e5c:
    // 0x2b9e5c: 0xc0ae434  jal         func_2B90D0
label_2b9e60:
    if (ctx->pc == 0x2B9E60u) {
        ctx->pc = 0x2B9E60u;
            // 0x2b9e60: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B9E64u;
        goto label_2b9e64;
    }
    ctx->pc = 0x2B9E5Cu;
    SET_GPR_U32(ctx, 31, 0x2B9E64u);
    ctx->pc = 0x2B9E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9E5Cu;
            // 0x2b9e60: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B90D0u;
    if (runtime->hasFunction(0x2B90D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B90D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E64u; }
        if (ctx->pc != 0x2B9E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoad__FP9mgCMemoryiPP17MENU_BGREAD_INFO2i_0x2b90d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E64u; }
        if (ctx->pc != 0x2B9E64u) { return; }
    }
    ctx->pc = 0x2B9E64u;
label_2b9e64:
    // 0x2b9e64: 0x83839b74  lb          $v1, -0x648C($gp)
    ctx->pc = 0x2b9e64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941556)));
label_2b9e68:
    // 0x2b9e68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b9e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b9e6c:
    // 0x2b9e6c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2b9e70:
    if (ctx->pc == 0x2B9E70u) {
        ctx->pc = 0x2B9E70u;
            // 0x2b9e70: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E74u;
        goto label_2b9e74;
    }
    ctx->pc = 0x2B9E6Cu;
    {
        const bool branch_taken_0x2b9e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B9E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9E6Cu;
            // 0x2b9e70: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e6c) {
            ctx->pc = 0x2B9E7Cu;
            goto label_2b9e7c;
        }
    }
    ctx->pc = 0x2B9E74u;
label_2b9e74:
    // 0x2b9e74: 0xc0aed10  jal         func_2BB440
label_2b9e78:
    if (ctx->pc == 0x2B9E78u) {
        ctx->pc = 0x2B9E78u;
            // 0x2b9e78: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E7Cu;
        goto label_2b9e7c;
    }
    ctx->pc = 0x2B9E74u;
    SET_GPR_U32(ctx, 31, 0x2B9E7Cu);
    ctx->pc = 0x2B9E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9E74u;
            // 0x2b9e78: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB440u;
    if (runtime->hasFunction(0x2BB440u)) {
        auto targetFn = runtime->lookupFunction(0x2BB440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E7Cu; }
        if (ctx->pc != 0x2B9E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoadEndCheckAfter__FPP17MENU_BGREAD_INFO2i_0x2bb440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E7Cu; }
        if (ctx->pc != 0x2B9E7Cu) { return; }
    }
    ctx->pc = 0x2B9E7Cu;
label_2b9e7c:
    // 0x2b9e7c: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2b9e7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2b9e80:
    // 0x2b9e80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b9e84:
    // 0x2b9e84: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2b9e88:
    if (ctx->pc == 0x2B9E88u) {
        ctx->pc = 0x2B9E8Cu;
        goto label_2b9e8c;
    }
    ctx->pc = 0x2B9E84u;
    {
        const bool branch_taken_0x2b9e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b9e84) {
            ctx->pc = 0x2B9E9Cu;
            goto label_2b9e9c;
        }
    }
    ctx->pc = 0x2B9E8Cu;
label_2b9e8c:
    // 0x2b9e8c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b9e90:
    if (ctx->pc == 0x2B9E90u) {
        ctx->pc = 0x2B9E94u;
        goto label_2b9e94;
    }
    ctx->pc = 0x2B9E8Cu;
    {
        const bool branch_taken_0x2b9e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e8c) {
            ctx->pc = 0x2B9E9Cu;
            goto label_2b9e9c;
        }
    }
    ctx->pc = 0x2B9E94u;
label_2b9e94:
    // 0x2b9e94: 0x10000013  b           . + 4 + (0x13 << 2)
label_2b9e98:
    if (ctx->pc == 0x2B9E98u) {
        ctx->pc = 0x2B9E98u;
            // 0x2b9e98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E9Cu;
        goto label_2b9e9c;
    }
    ctx->pc = 0x2B9E94u;
    {
        const bool branch_taken_0x2b9e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9E94u;
            // 0x2b9e98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e94) {
            ctx->pc = 0x2B9EE4u;
            goto label_2b9ee4;
        }
    }
    ctx->pc = 0x2B9E9Cu;
label_2b9e9c:
    // 0x2b9e9c: 0x83839b72  lb          $v1, -0x648E($gp)
    ctx->pc = 0x2b9e9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941554)));
label_2b9ea0:
    // 0x2b9ea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9ea4:
    // 0x2b9ea4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_2b9ea8:
    if (ctx->pc == 0x2B9EA8u) {
        ctx->pc = 0x2B9EA8u;
            // 0x2b9ea8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9EACu;
        goto label_2b9eac;
    }
    ctx->pc = 0x2B9EA4u;
    {
        const bool branch_taken_0x2b9ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9EA4u;
            // 0x2b9ea8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ea4) {
            ctx->pc = 0x2B9EC8u;
            goto label_2b9ec8;
        }
    }
    ctx->pc = 0x2B9EACu;
label_2b9eac:
    // 0x2b9eac: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_2b9eb0:
    if (ctx->pc == 0x2B9EB0u) {
        ctx->pc = 0x2B9EB4u;
        goto label_2b9eb4;
    }
    ctx->pc = 0x2B9EACu;
    {
        const bool branch_taken_0x2b9eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9eac) {
            ctx->pc = 0x2B9EE0u;
            goto label_2b9ee0;
        }
    }
    ctx->pc = 0x2B9EB4u;
label_2b9eb4:
    // 0x2b9eb4: 0x83829b75  lb          $v0, -0x648B($gp)
    ctx->pc = 0x2b9eb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941557)));
label_2b9eb8:
    // 0x2b9eb8: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2b9eb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_2b9ebc:
    // 0x2b9ebc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2b9ec0:
    if (ctx->pc == 0x2B9EC0u) {
        ctx->pc = 0x2B9EC4u;
        goto label_2b9ec4;
    }
    ctx->pc = 0x2B9EBCu;
    {
        const bool branch_taken_0x2b9ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9ebc) {
            ctx->pc = 0x2B9EE0u;
            goto label_2b9ee0;
        }
    }
    ctx->pc = 0x2B9EC4u;
label_2b9ec4:
    // 0x2b9ec4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2b9ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ec8:
    // 0x2b9ec8: 0xc0aed10  jal         func_2BB440
label_2b9ecc:
    if (ctx->pc == 0x2B9ECCu) {
        ctx->pc = 0x2B9ECCu;
            // 0x2b9ecc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9ED0u;
        goto label_2b9ed0;
    }
    ctx->pc = 0x2B9EC8u;
    SET_GPR_U32(ctx, 31, 0x2B9ED0u);
    ctx->pc = 0x2B9ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9EC8u;
            // 0x2b9ecc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB440u;
    if (runtime->hasFunction(0x2BB440u)) {
        auto targetFn = runtime->lookupFunction(0x2BB440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9ED0u; }
        if (ctx->pc != 0x2B9ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoadEndCheckAfter__FPP17MENU_BGREAD_INFO2i_0x2bb440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9ED0u; }
        if (ctx->pc != 0x2B9ED0u) { return; }
    }
    ctx->pc = 0x2B9ED0u;
label_2b9ed0:
    // 0x2b9ed0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2b9ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2b9ed4:
    // 0x2b9ed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9ed8:
    // 0x2b9ed8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b9edc:
    if (ctx->pc == 0x2B9EDCu) {
        ctx->pc = 0x2B9EDCu;
            // 0x2b9edc: 0xa3839b74  sb          $v1, -0x648C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2B9EE0u;
        goto label_2b9ee0;
    }
    ctx->pc = 0x2B9ED8u;
    {
        const bool branch_taken_0x2b9ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9ED8u;
            // 0x2b9edc: 0xa3839b74  sb          $v1, -0x648C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ed8) {
            ctx->pc = 0x2B9EE4u;
            goto label_2b9ee4;
        }
    }
    ctx->pc = 0x2B9EE0u;
label_2b9ee0:
    // 0x2b9ee0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b9ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ee4:
    // 0x2b9ee4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b9ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b9ee8:
    // 0x2b9ee8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2b9ee8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2b9eec:
    // 0x2b9eec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2b9eecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b9ef0:
    // 0x2b9ef0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2b9ef0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b9ef4:
    // 0x2b9ef4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b9ef4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b9ef8:
    // 0x2b9ef8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b9ef8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b9efc:
    // 0x2b9efc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b9efcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b9f00:
    // 0x2b9f00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b9f00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b9f04:
    // 0x2b9f04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b9f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b9f08:
    // 0x2b9f08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b9f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b9f0c:
    // 0x2b9f0c: 0x3e00008  jr          $ra
label_2b9f10:
    if (ctx->pc == 0x2B9F10u) {
        ctx->pc = 0x2B9F10u;
            // 0x2b9f10: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x2B9F14u;
        goto label_fallthrough_0x2b9f0c;
    }
    ctx->pc = 0x2B9F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9F0Cu;
            // 0x2b9f10: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b9f0c:
    ctx->pc = 0x2B9F14u;
}
