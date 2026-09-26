#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Thinking__9CAquariumFi
// Address: 0x214960 - 0x21566c
void Thinking__9CAquariumFi_0x214960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Thinking__9CAquariumFi_0x214960");
#endif

    switch (ctx->pc) {
        case 0x214960u: goto label_214960;
        case 0x214964u: goto label_214964;
        case 0x214968u: goto label_214968;
        case 0x21496cu: goto label_21496c;
        case 0x214970u: goto label_214970;
        case 0x214974u: goto label_214974;
        case 0x214978u: goto label_214978;
        case 0x21497cu: goto label_21497c;
        case 0x214980u: goto label_214980;
        case 0x214984u: goto label_214984;
        case 0x214988u: goto label_214988;
        case 0x21498cu: goto label_21498c;
        case 0x214990u: goto label_214990;
        case 0x214994u: goto label_214994;
        case 0x214998u: goto label_214998;
        case 0x21499cu: goto label_21499c;
        case 0x2149a0u: goto label_2149a0;
        case 0x2149a4u: goto label_2149a4;
        case 0x2149a8u: goto label_2149a8;
        case 0x2149acu: goto label_2149ac;
        case 0x2149b0u: goto label_2149b0;
        case 0x2149b4u: goto label_2149b4;
        case 0x2149b8u: goto label_2149b8;
        case 0x2149bcu: goto label_2149bc;
        case 0x2149c0u: goto label_2149c0;
        case 0x2149c4u: goto label_2149c4;
        case 0x2149c8u: goto label_2149c8;
        case 0x2149ccu: goto label_2149cc;
        case 0x2149d0u: goto label_2149d0;
        case 0x2149d4u: goto label_2149d4;
        case 0x2149d8u: goto label_2149d8;
        case 0x2149dcu: goto label_2149dc;
        case 0x2149e0u: goto label_2149e0;
        case 0x2149e4u: goto label_2149e4;
        case 0x2149e8u: goto label_2149e8;
        case 0x2149ecu: goto label_2149ec;
        case 0x2149f0u: goto label_2149f0;
        case 0x2149f4u: goto label_2149f4;
        case 0x2149f8u: goto label_2149f8;
        case 0x2149fcu: goto label_2149fc;
        case 0x214a00u: goto label_214a00;
        case 0x214a04u: goto label_214a04;
        case 0x214a08u: goto label_214a08;
        case 0x214a0cu: goto label_214a0c;
        case 0x214a10u: goto label_214a10;
        case 0x214a14u: goto label_214a14;
        case 0x214a18u: goto label_214a18;
        case 0x214a1cu: goto label_214a1c;
        case 0x214a20u: goto label_214a20;
        case 0x214a24u: goto label_214a24;
        case 0x214a28u: goto label_214a28;
        case 0x214a2cu: goto label_214a2c;
        case 0x214a30u: goto label_214a30;
        case 0x214a34u: goto label_214a34;
        case 0x214a38u: goto label_214a38;
        case 0x214a3cu: goto label_214a3c;
        case 0x214a40u: goto label_214a40;
        case 0x214a44u: goto label_214a44;
        case 0x214a48u: goto label_214a48;
        case 0x214a4cu: goto label_214a4c;
        case 0x214a50u: goto label_214a50;
        case 0x214a54u: goto label_214a54;
        case 0x214a58u: goto label_214a58;
        case 0x214a5cu: goto label_214a5c;
        case 0x214a60u: goto label_214a60;
        case 0x214a64u: goto label_214a64;
        case 0x214a68u: goto label_214a68;
        case 0x214a6cu: goto label_214a6c;
        case 0x214a70u: goto label_214a70;
        case 0x214a74u: goto label_214a74;
        case 0x214a78u: goto label_214a78;
        case 0x214a7cu: goto label_214a7c;
        case 0x214a80u: goto label_214a80;
        case 0x214a84u: goto label_214a84;
        case 0x214a88u: goto label_214a88;
        case 0x214a8cu: goto label_214a8c;
        case 0x214a90u: goto label_214a90;
        case 0x214a94u: goto label_214a94;
        case 0x214a98u: goto label_214a98;
        case 0x214a9cu: goto label_214a9c;
        case 0x214aa0u: goto label_214aa0;
        case 0x214aa4u: goto label_214aa4;
        case 0x214aa8u: goto label_214aa8;
        case 0x214aacu: goto label_214aac;
        case 0x214ab0u: goto label_214ab0;
        case 0x214ab4u: goto label_214ab4;
        case 0x214ab8u: goto label_214ab8;
        case 0x214abcu: goto label_214abc;
        case 0x214ac0u: goto label_214ac0;
        case 0x214ac4u: goto label_214ac4;
        case 0x214ac8u: goto label_214ac8;
        case 0x214accu: goto label_214acc;
        case 0x214ad0u: goto label_214ad0;
        case 0x214ad4u: goto label_214ad4;
        case 0x214ad8u: goto label_214ad8;
        case 0x214adcu: goto label_214adc;
        case 0x214ae0u: goto label_214ae0;
        case 0x214ae4u: goto label_214ae4;
        case 0x214ae8u: goto label_214ae8;
        case 0x214aecu: goto label_214aec;
        case 0x214af0u: goto label_214af0;
        case 0x214af4u: goto label_214af4;
        case 0x214af8u: goto label_214af8;
        case 0x214afcu: goto label_214afc;
        case 0x214b00u: goto label_214b00;
        case 0x214b04u: goto label_214b04;
        case 0x214b08u: goto label_214b08;
        case 0x214b0cu: goto label_214b0c;
        case 0x214b10u: goto label_214b10;
        case 0x214b14u: goto label_214b14;
        case 0x214b18u: goto label_214b18;
        case 0x214b1cu: goto label_214b1c;
        case 0x214b20u: goto label_214b20;
        case 0x214b24u: goto label_214b24;
        case 0x214b28u: goto label_214b28;
        case 0x214b2cu: goto label_214b2c;
        case 0x214b30u: goto label_214b30;
        case 0x214b34u: goto label_214b34;
        case 0x214b38u: goto label_214b38;
        case 0x214b3cu: goto label_214b3c;
        case 0x214b40u: goto label_214b40;
        case 0x214b44u: goto label_214b44;
        case 0x214b48u: goto label_214b48;
        case 0x214b4cu: goto label_214b4c;
        case 0x214b50u: goto label_214b50;
        case 0x214b54u: goto label_214b54;
        case 0x214b58u: goto label_214b58;
        case 0x214b5cu: goto label_214b5c;
        case 0x214b60u: goto label_214b60;
        case 0x214b64u: goto label_214b64;
        case 0x214b68u: goto label_214b68;
        case 0x214b6cu: goto label_214b6c;
        case 0x214b70u: goto label_214b70;
        case 0x214b74u: goto label_214b74;
        case 0x214b78u: goto label_214b78;
        case 0x214b7cu: goto label_214b7c;
        case 0x214b80u: goto label_214b80;
        case 0x214b84u: goto label_214b84;
        case 0x214b88u: goto label_214b88;
        case 0x214b8cu: goto label_214b8c;
        case 0x214b90u: goto label_214b90;
        case 0x214b94u: goto label_214b94;
        case 0x214b98u: goto label_214b98;
        case 0x214b9cu: goto label_214b9c;
        case 0x214ba0u: goto label_214ba0;
        case 0x214ba4u: goto label_214ba4;
        case 0x214ba8u: goto label_214ba8;
        case 0x214bacu: goto label_214bac;
        case 0x214bb0u: goto label_214bb0;
        case 0x214bb4u: goto label_214bb4;
        case 0x214bb8u: goto label_214bb8;
        case 0x214bbcu: goto label_214bbc;
        case 0x214bc0u: goto label_214bc0;
        case 0x214bc4u: goto label_214bc4;
        case 0x214bc8u: goto label_214bc8;
        case 0x214bccu: goto label_214bcc;
        case 0x214bd0u: goto label_214bd0;
        case 0x214bd4u: goto label_214bd4;
        case 0x214bd8u: goto label_214bd8;
        case 0x214bdcu: goto label_214bdc;
        case 0x214be0u: goto label_214be0;
        case 0x214be4u: goto label_214be4;
        case 0x214be8u: goto label_214be8;
        case 0x214becu: goto label_214bec;
        case 0x214bf0u: goto label_214bf0;
        case 0x214bf4u: goto label_214bf4;
        case 0x214bf8u: goto label_214bf8;
        case 0x214bfcu: goto label_214bfc;
        case 0x214c00u: goto label_214c00;
        case 0x214c04u: goto label_214c04;
        case 0x214c08u: goto label_214c08;
        case 0x214c0cu: goto label_214c0c;
        case 0x214c10u: goto label_214c10;
        case 0x214c14u: goto label_214c14;
        case 0x214c18u: goto label_214c18;
        case 0x214c1cu: goto label_214c1c;
        case 0x214c20u: goto label_214c20;
        case 0x214c24u: goto label_214c24;
        case 0x214c28u: goto label_214c28;
        case 0x214c2cu: goto label_214c2c;
        case 0x214c30u: goto label_214c30;
        case 0x214c34u: goto label_214c34;
        case 0x214c38u: goto label_214c38;
        case 0x214c3cu: goto label_214c3c;
        case 0x214c40u: goto label_214c40;
        case 0x214c44u: goto label_214c44;
        case 0x214c48u: goto label_214c48;
        case 0x214c4cu: goto label_214c4c;
        case 0x214c50u: goto label_214c50;
        case 0x214c54u: goto label_214c54;
        case 0x214c58u: goto label_214c58;
        case 0x214c5cu: goto label_214c5c;
        case 0x214c60u: goto label_214c60;
        case 0x214c64u: goto label_214c64;
        case 0x214c68u: goto label_214c68;
        case 0x214c6cu: goto label_214c6c;
        case 0x214c70u: goto label_214c70;
        case 0x214c74u: goto label_214c74;
        case 0x214c78u: goto label_214c78;
        case 0x214c7cu: goto label_214c7c;
        case 0x214c80u: goto label_214c80;
        case 0x214c84u: goto label_214c84;
        case 0x214c88u: goto label_214c88;
        case 0x214c8cu: goto label_214c8c;
        case 0x214c90u: goto label_214c90;
        case 0x214c94u: goto label_214c94;
        case 0x214c98u: goto label_214c98;
        case 0x214c9cu: goto label_214c9c;
        case 0x214ca0u: goto label_214ca0;
        case 0x214ca4u: goto label_214ca4;
        case 0x214ca8u: goto label_214ca8;
        case 0x214cacu: goto label_214cac;
        case 0x214cb0u: goto label_214cb0;
        case 0x214cb4u: goto label_214cb4;
        case 0x214cb8u: goto label_214cb8;
        case 0x214cbcu: goto label_214cbc;
        case 0x214cc0u: goto label_214cc0;
        case 0x214cc4u: goto label_214cc4;
        case 0x214cc8u: goto label_214cc8;
        case 0x214cccu: goto label_214ccc;
        case 0x214cd0u: goto label_214cd0;
        case 0x214cd4u: goto label_214cd4;
        case 0x214cd8u: goto label_214cd8;
        case 0x214cdcu: goto label_214cdc;
        case 0x214ce0u: goto label_214ce0;
        case 0x214ce4u: goto label_214ce4;
        case 0x214ce8u: goto label_214ce8;
        case 0x214cecu: goto label_214cec;
        case 0x214cf0u: goto label_214cf0;
        case 0x214cf4u: goto label_214cf4;
        case 0x214cf8u: goto label_214cf8;
        case 0x214cfcu: goto label_214cfc;
        case 0x214d00u: goto label_214d00;
        case 0x214d04u: goto label_214d04;
        case 0x214d08u: goto label_214d08;
        case 0x214d0cu: goto label_214d0c;
        case 0x214d10u: goto label_214d10;
        case 0x214d14u: goto label_214d14;
        case 0x214d18u: goto label_214d18;
        case 0x214d1cu: goto label_214d1c;
        case 0x214d20u: goto label_214d20;
        case 0x214d24u: goto label_214d24;
        case 0x214d28u: goto label_214d28;
        case 0x214d2cu: goto label_214d2c;
        case 0x214d30u: goto label_214d30;
        case 0x214d34u: goto label_214d34;
        case 0x214d38u: goto label_214d38;
        case 0x214d3cu: goto label_214d3c;
        case 0x214d40u: goto label_214d40;
        case 0x214d44u: goto label_214d44;
        case 0x214d48u: goto label_214d48;
        case 0x214d4cu: goto label_214d4c;
        case 0x214d50u: goto label_214d50;
        case 0x214d54u: goto label_214d54;
        case 0x214d58u: goto label_214d58;
        case 0x214d5cu: goto label_214d5c;
        case 0x214d60u: goto label_214d60;
        case 0x214d64u: goto label_214d64;
        case 0x214d68u: goto label_214d68;
        case 0x214d6cu: goto label_214d6c;
        case 0x214d70u: goto label_214d70;
        case 0x214d74u: goto label_214d74;
        case 0x214d78u: goto label_214d78;
        case 0x214d7cu: goto label_214d7c;
        case 0x214d80u: goto label_214d80;
        case 0x214d84u: goto label_214d84;
        case 0x214d88u: goto label_214d88;
        case 0x214d8cu: goto label_214d8c;
        case 0x214d90u: goto label_214d90;
        case 0x214d94u: goto label_214d94;
        case 0x214d98u: goto label_214d98;
        case 0x214d9cu: goto label_214d9c;
        case 0x214da0u: goto label_214da0;
        case 0x214da4u: goto label_214da4;
        case 0x214da8u: goto label_214da8;
        case 0x214dacu: goto label_214dac;
        case 0x214db0u: goto label_214db0;
        case 0x214db4u: goto label_214db4;
        case 0x214db8u: goto label_214db8;
        case 0x214dbcu: goto label_214dbc;
        case 0x214dc0u: goto label_214dc0;
        case 0x214dc4u: goto label_214dc4;
        case 0x214dc8u: goto label_214dc8;
        case 0x214dccu: goto label_214dcc;
        case 0x214dd0u: goto label_214dd0;
        case 0x214dd4u: goto label_214dd4;
        case 0x214dd8u: goto label_214dd8;
        case 0x214ddcu: goto label_214ddc;
        case 0x214de0u: goto label_214de0;
        case 0x214de4u: goto label_214de4;
        case 0x214de8u: goto label_214de8;
        case 0x214decu: goto label_214dec;
        case 0x214df0u: goto label_214df0;
        case 0x214df4u: goto label_214df4;
        case 0x214df8u: goto label_214df8;
        case 0x214dfcu: goto label_214dfc;
        case 0x214e00u: goto label_214e00;
        case 0x214e04u: goto label_214e04;
        case 0x214e08u: goto label_214e08;
        case 0x214e0cu: goto label_214e0c;
        case 0x214e10u: goto label_214e10;
        case 0x214e14u: goto label_214e14;
        case 0x214e18u: goto label_214e18;
        case 0x214e1cu: goto label_214e1c;
        case 0x214e20u: goto label_214e20;
        case 0x214e24u: goto label_214e24;
        case 0x214e28u: goto label_214e28;
        case 0x214e2cu: goto label_214e2c;
        case 0x214e30u: goto label_214e30;
        case 0x214e34u: goto label_214e34;
        case 0x214e38u: goto label_214e38;
        case 0x214e3cu: goto label_214e3c;
        case 0x214e40u: goto label_214e40;
        case 0x214e44u: goto label_214e44;
        case 0x214e48u: goto label_214e48;
        case 0x214e4cu: goto label_214e4c;
        case 0x214e50u: goto label_214e50;
        case 0x214e54u: goto label_214e54;
        case 0x214e58u: goto label_214e58;
        case 0x214e5cu: goto label_214e5c;
        case 0x214e60u: goto label_214e60;
        case 0x214e64u: goto label_214e64;
        case 0x214e68u: goto label_214e68;
        case 0x214e6cu: goto label_214e6c;
        case 0x214e70u: goto label_214e70;
        case 0x214e74u: goto label_214e74;
        case 0x214e78u: goto label_214e78;
        case 0x214e7cu: goto label_214e7c;
        case 0x214e80u: goto label_214e80;
        case 0x214e84u: goto label_214e84;
        case 0x214e88u: goto label_214e88;
        case 0x214e8cu: goto label_214e8c;
        case 0x214e90u: goto label_214e90;
        case 0x214e94u: goto label_214e94;
        case 0x214e98u: goto label_214e98;
        case 0x214e9cu: goto label_214e9c;
        case 0x214ea0u: goto label_214ea0;
        case 0x214ea4u: goto label_214ea4;
        case 0x214ea8u: goto label_214ea8;
        case 0x214eacu: goto label_214eac;
        case 0x214eb0u: goto label_214eb0;
        case 0x214eb4u: goto label_214eb4;
        case 0x214eb8u: goto label_214eb8;
        case 0x214ebcu: goto label_214ebc;
        case 0x214ec0u: goto label_214ec0;
        case 0x214ec4u: goto label_214ec4;
        case 0x214ec8u: goto label_214ec8;
        case 0x214eccu: goto label_214ecc;
        case 0x214ed0u: goto label_214ed0;
        case 0x214ed4u: goto label_214ed4;
        case 0x214ed8u: goto label_214ed8;
        case 0x214edcu: goto label_214edc;
        case 0x214ee0u: goto label_214ee0;
        case 0x214ee4u: goto label_214ee4;
        case 0x214ee8u: goto label_214ee8;
        case 0x214eecu: goto label_214eec;
        case 0x214ef0u: goto label_214ef0;
        case 0x214ef4u: goto label_214ef4;
        case 0x214ef8u: goto label_214ef8;
        case 0x214efcu: goto label_214efc;
        case 0x214f00u: goto label_214f00;
        case 0x214f04u: goto label_214f04;
        case 0x214f08u: goto label_214f08;
        case 0x214f0cu: goto label_214f0c;
        case 0x214f10u: goto label_214f10;
        case 0x214f14u: goto label_214f14;
        case 0x214f18u: goto label_214f18;
        case 0x214f1cu: goto label_214f1c;
        case 0x214f20u: goto label_214f20;
        case 0x214f24u: goto label_214f24;
        case 0x214f28u: goto label_214f28;
        case 0x214f2cu: goto label_214f2c;
        case 0x214f30u: goto label_214f30;
        case 0x214f34u: goto label_214f34;
        case 0x214f38u: goto label_214f38;
        case 0x214f3cu: goto label_214f3c;
        case 0x214f40u: goto label_214f40;
        case 0x214f44u: goto label_214f44;
        case 0x214f48u: goto label_214f48;
        case 0x214f4cu: goto label_214f4c;
        case 0x214f50u: goto label_214f50;
        case 0x214f54u: goto label_214f54;
        case 0x214f58u: goto label_214f58;
        case 0x214f5cu: goto label_214f5c;
        case 0x214f60u: goto label_214f60;
        case 0x214f64u: goto label_214f64;
        case 0x214f68u: goto label_214f68;
        case 0x214f6cu: goto label_214f6c;
        case 0x214f70u: goto label_214f70;
        case 0x214f74u: goto label_214f74;
        case 0x214f78u: goto label_214f78;
        case 0x214f7cu: goto label_214f7c;
        case 0x214f80u: goto label_214f80;
        case 0x214f84u: goto label_214f84;
        case 0x214f88u: goto label_214f88;
        case 0x214f8cu: goto label_214f8c;
        case 0x214f90u: goto label_214f90;
        case 0x214f94u: goto label_214f94;
        case 0x214f98u: goto label_214f98;
        case 0x214f9cu: goto label_214f9c;
        case 0x214fa0u: goto label_214fa0;
        case 0x214fa4u: goto label_214fa4;
        case 0x214fa8u: goto label_214fa8;
        case 0x214facu: goto label_214fac;
        case 0x214fb0u: goto label_214fb0;
        case 0x214fb4u: goto label_214fb4;
        case 0x214fb8u: goto label_214fb8;
        case 0x214fbcu: goto label_214fbc;
        case 0x214fc0u: goto label_214fc0;
        case 0x214fc4u: goto label_214fc4;
        case 0x214fc8u: goto label_214fc8;
        case 0x214fccu: goto label_214fcc;
        case 0x214fd0u: goto label_214fd0;
        case 0x214fd4u: goto label_214fd4;
        case 0x214fd8u: goto label_214fd8;
        case 0x214fdcu: goto label_214fdc;
        case 0x214fe0u: goto label_214fe0;
        case 0x214fe4u: goto label_214fe4;
        case 0x214fe8u: goto label_214fe8;
        case 0x214fecu: goto label_214fec;
        case 0x214ff0u: goto label_214ff0;
        case 0x214ff4u: goto label_214ff4;
        case 0x214ff8u: goto label_214ff8;
        case 0x214ffcu: goto label_214ffc;
        case 0x215000u: goto label_215000;
        case 0x215004u: goto label_215004;
        case 0x215008u: goto label_215008;
        case 0x21500cu: goto label_21500c;
        case 0x215010u: goto label_215010;
        case 0x215014u: goto label_215014;
        case 0x215018u: goto label_215018;
        case 0x21501cu: goto label_21501c;
        case 0x215020u: goto label_215020;
        case 0x215024u: goto label_215024;
        case 0x215028u: goto label_215028;
        case 0x21502cu: goto label_21502c;
        case 0x215030u: goto label_215030;
        case 0x215034u: goto label_215034;
        case 0x215038u: goto label_215038;
        case 0x21503cu: goto label_21503c;
        case 0x215040u: goto label_215040;
        case 0x215044u: goto label_215044;
        case 0x215048u: goto label_215048;
        case 0x21504cu: goto label_21504c;
        case 0x215050u: goto label_215050;
        case 0x215054u: goto label_215054;
        case 0x215058u: goto label_215058;
        case 0x21505cu: goto label_21505c;
        case 0x215060u: goto label_215060;
        case 0x215064u: goto label_215064;
        case 0x215068u: goto label_215068;
        case 0x21506cu: goto label_21506c;
        case 0x215070u: goto label_215070;
        case 0x215074u: goto label_215074;
        case 0x215078u: goto label_215078;
        case 0x21507cu: goto label_21507c;
        case 0x215080u: goto label_215080;
        case 0x215084u: goto label_215084;
        case 0x215088u: goto label_215088;
        case 0x21508cu: goto label_21508c;
        case 0x215090u: goto label_215090;
        case 0x215094u: goto label_215094;
        case 0x215098u: goto label_215098;
        case 0x21509cu: goto label_21509c;
        case 0x2150a0u: goto label_2150a0;
        case 0x2150a4u: goto label_2150a4;
        case 0x2150a8u: goto label_2150a8;
        case 0x2150acu: goto label_2150ac;
        case 0x2150b0u: goto label_2150b0;
        case 0x2150b4u: goto label_2150b4;
        case 0x2150b8u: goto label_2150b8;
        case 0x2150bcu: goto label_2150bc;
        case 0x2150c0u: goto label_2150c0;
        case 0x2150c4u: goto label_2150c4;
        case 0x2150c8u: goto label_2150c8;
        case 0x2150ccu: goto label_2150cc;
        case 0x2150d0u: goto label_2150d0;
        case 0x2150d4u: goto label_2150d4;
        case 0x2150d8u: goto label_2150d8;
        case 0x2150dcu: goto label_2150dc;
        case 0x2150e0u: goto label_2150e0;
        case 0x2150e4u: goto label_2150e4;
        case 0x2150e8u: goto label_2150e8;
        case 0x2150ecu: goto label_2150ec;
        case 0x2150f0u: goto label_2150f0;
        case 0x2150f4u: goto label_2150f4;
        case 0x2150f8u: goto label_2150f8;
        case 0x2150fcu: goto label_2150fc;
        case 0x215100u: goto label_215100;
        case 0x215104u: goto label_215104;
        case 0x215108u: goto label_215108;
        case 0x21510cu: goto label_21510c;
        case 0x215110u: goto label_215110;
        case 0x215114u: goto label_215114;
        case 0x215118u: goto label_215118;
        case 0x21511cu: goto label_21511c;
        case 0x215120u: goto label_215120;
        case 0x215124u: goto label_215124;
        case 0x215128u: goto label_215128;
        case 0x21512cu: goto label_21512c;
        case 0x215130u: goto label_215130;
        case 0x215134u: goto label_215134;
        case 0x215138u: goto label_215138;
        case 0x21513cu: goto label_21513c;
        case 0x215140u: goto label_215140;
        case 0x215144u: goto label_215144;
        case 0x215148u: goto label_215148;
        case 0x21514cu: goto label_21514c;
        case 0x215150u: goto label_215150;
        case 0x215154u: goto label_215154;
        case 0x215158u: goto label_215158;
        case 0x21515cu: goto label_21515c;
        case 0x215160u: goto label_215160;
        case 0x215164u: goto label_215164;
        case 0x215168u: goto label_215168;
        case 0x21516cu: goto label_21516c;
        case 0x215170u: goto label_215170;
        case 0x215174u: goto label_215174;
        case 0x215178u: goto label_215178;
        case 0x21517cu: goto label_21517c;
        case 0x215180u: goto label_215180;
        case 0x215184u: goto label_215184;
        case 0x215188u: goto label_215188;
        case 0x21518cu: goto label_21518c;
        case 0x215190u: goto label_215190;
        case 0x215194u: goto label_215194;
        case 0x215198u: goto label_215198;
        case 0x21519cu: goto label_21519c;
        case 0x2151a0u: goto label_2151a0;
        case 0x2151a4u: goto label_2151a4;
        case 0x2151a8u: goto label_2151a8;
        case 0x2151acu: goto label_2151ac;
        case 0x2151b0u: goto label_2151b0;
        case 0x2151b4u: goto label_2151b4;
        case 0x2151b8u: goto label_2151b8;
        case 0x2151bcu: goto label_2151bc;
        case 0x2151c0u: goto label_2151c0;
        case 0x2151c4u: goto label_2151c4;
        case 0x2151c8u: goto label_2151c8;
        case 0x2151ccu: goto label_2151cc;
        case 0x2151d0u: goto label_2151d0;
        case 0x2151d4u: goto label_2151d4;
        case 0x2151d8u: goto label_2151d8;
        case 0x2151dcu: goto label_2151dc;
        case 0x2151e0u: goto label_2151e0;
        case 0x2151e4u: goto label_2151e4;
        case 0x2151e8u: goto label_2151e8;
        case 0x2151ecu: goto label_2151ec;
        case 0x2151f0u: goto label_2151f0;
        case 0x2151f4u: goto label_2151f4;
        case 0x2151f8u: goto label_2151f8;
        case 0x2151fcu: goto label_2151fc;
        case 0x215200u: goto label_215200;
        case 0x215204u: goto label_215204;
        case 0x215208u: goto label_215208;
        case 0x21520cu: goto label_21520c;
        case 0x215210u: goto label_215210;
        case 0x215214u: goto label_215214;
        case 0x215218u: goto label_215218;
        case 0x21521cu: goto label_21521c;
        case 0x215220u: goto label_215220;
        case 0x215224u: goto label_215224;
        case 0x215228u: goto label_215228;
        case 0x21522cu: goto label_21522c;
        case 0x215230u: goto label_215230;
        case 0x215234u: goto label_215234;
        case 0x215238u: goto label_215238;
        case 0x21523cu: goto label_21523c;
        case 0x215240u: goto label_215240;
        case 0x215244u: goto label_215244;
        case 0x215248u: goto label_215248;
        case 0x21524cu: goto label_21524c;
        case 0x215250u: goto label_215250;
        case 0x215254u: goto label_215254;
        case 0x215258u: goto label_215258;
        case 0x21525cu: goto label_21525c;
        case 0x215260u: goto label_215260;
        case 0x215264u: goto label_215264;
        case 0x215268u: goto label_215268;
        case 0x21526cu: goto label_21526c;
        case 0x215270u: goto label_215270;
        case 0x215274u: goto label_215274;
        case 0x215278u: goto label_215278;
        case 0x21527cu: goto label_21527c;
        case 0x215280u: goto label_215280;
        case 0x215284u: goto label_215284;
        case 0x215288u: goto label_215288;
        case 0x21528cu: goto label_21528c;
        case 0x215290u: goto label_215290;
        case 0x215294u: goto label_215294;
        case 0x215298u: goto label_215298;
        case 0x21529cu: goto label_21529c;
        case 0x2152a0u: goto label_2152a0;
        case 0x2152a4u: goto label_2152a4;
        case 0x2152a8u: goto label_2152a8;
        case 0x2152acu: goto label_2152ac;
        case 0x2152b0u: goto label_2152b0;
        case 0x2152b4u: goto label_2152b4;
        case 0x2152b8u: goto label_2152b8;
        case 0x2152bcu: goto label_2152bc;
        case 0x2152c0u: goto label_2152c0;
        case 0x2152c4u: goto label_2152c4;
        case 0x2152c8u: goto label_2152c8;
        case 0x2152ccu: goto label_2152cc;
        case 0x2152d0u: goto label_2152d0;
        case 0x2152d4u: goto label_2152d4;
        case 0x2152d8u: goto label_2152d8;
        case 0x2152dcu: goto label_2152dc;
        case 0x2152e0u: goto label_2152e0;
        case 0x2152e4u: goto label_2152e4;
        case 0x2152e8u: goto label_2152e8;
        case 0x2152ecu: goto label_2152ec;
        case 0x2152f0u: goto label_2152f0;
        case 0x2152f4u: goto label_2152f4;
        case 0x2152f8u: goto label_2152f8;
        case 0x2152fcu: goto label_2152fc;
        case 0x215300u: goto label_215300;
        case 0x215304u: goto label_215304;
        case 0x215308u: goto label_215308;
        case 0x21530cu: goto label_21530c;
        case 0x215310u: goto label_215310;
        case 0x215314u: goto label_215314;
        case 0x215318u: goto label_215318;
        case 0x21531cu: goto label_21531c;
        case 0x215320u: goto label_215320;
        case 0x215324u: goto label_215324;
        case 0x215328u: goto label_215328;
        case 0x21532cu: goto label_21532c;
        case 0x215330u: goto label_215330;
        case 0x215334u: goto label_215334;
        case 0x215338u: goto label_215338;
        case 0x21533cu: goto label_21533c;
        case 0x215340u: goto label_215340;
        case 0x215344u: goto label_215344;
        case 0x215348u: goto label_215348;
        case 0x21534cu: goto label_21534c;
        case 0x215350u: goto label_215350;
        case 0x215354u: goto label_215354;
        case 0x215358u: goto label_215358;
        case 0x21535cu: goto label_21535c;
        case 0x215360u: goto label_215360;
        case 0x215364u: goto label_215364;
        case 0x215368u: goto label_215368;
        case 0x21536cu: goto label_21536c;
        case 0x215370u: goto label_215370;
        case 0x215374u: goto label_215374;
        case 0x215378u: goto label_215378;
        case 0x21537cu: goto label_21537c;
        case 0x215380u: goto label_215380;
        case 0x215384u: goto label_215384;
        case 0x215388u: goto label_215388;
        case 0x21538cu: goto label_21538c;
        case 0x215390u: goto label_215390;
        case 0x215394u: goto label_215394;
        case 0x215398u: goto label_215398;
        case 0x21539cu: goto label_21539c;
        case 0x2153a0u: goto label_2153a0;
        case 0x2153a4u: goto label_2153a4;
        case 0x2153a8u: goto label_2153a8;
        case 0x2153acu: goto label_2153ac;
        case 0x2153b0u: goto label_2153b0;
        case 0x2153b4u: goto label_2153b4;
        case 0x2153b8u: goto label_2153b8;
        case 0x2153bcu: goto label_2153bc;
        case 0x2153c0u: goto label_2153c0;
        case 0x2153c4u: goto label_2153c4;
        case 0x2153c8u: goto label_2153c8;
        case 0x2153ccu: goto label_2153cc;
        case 0x2153d0u: goto label_2153d0;
        case 0x2153d4u: goto label_2153d4;
        case 0x2153d8u: goto label_2153d8;
        case 0x2153dcu: goto label_2153dc;
        case 0x2153e0u: goto label_2153e0;
        case 0x2153e4u: goto label_2153e4;
        case 0x2153e8u: goto label_2153e8;
        case 0x2153ecu: goto label_2153ec;
        case 0x2153f0u: goto label_2153f0;
        case 0x2153f4u: goto label_2153f4;
        case 0x2153f8u: goto label_2153f8;
        case 0x2153fcu: goto label_2153fc;
        case 0x215400u: goto label_215400;
        case 0x215404u: goto label_215404;
        case 0x215408u: goto label_215408;
        case 0x21540cu: goto label_21540c;
        case 0x215410u: goto label_215410;
        case 0x215414u: goto label_215414;
        case 0x215418u: goto label_215418;
        case 0x21541cu: goto label_21541c;
        case 0x215420u: goto label_215420;
        case 0x215424u: goto label_215424;
        case 0x215428u: goto label_215428;
        case 0x21542cu: goto label_21542c;
        case 0x215430u: goto label_215430;
        case 0x215434u: goto label_215434;
        case 0x215438u: goto label_215438;
        case 0x21543cu: goto label_21543c;
        case 0x215440u: goto label_215440;
        case 0x215444u: goto label_215444;
        case 0x215448u: goto label_215448;
        case 0x21544cu: goto label_21544c;
        case 0x215450u: goto label_215450;
        case 0x215454u: goto label_215454;
        case 0x215458u: goto label_215458;
        case 0x21545cu: goto label_21545c;
        case 0x215460u: goto label_215460;
        case 0x215464u: goto label_215464;
        case 0x215468u: goto label_215468;
        case 0x21546cu: goto label_21546c;
        case 0x215470u: goto label_215470;
        case 0x215474u: goto label_215474;
        case 0x215478u: goto label_215478;
        case 0x21547cu: goto label_21547c;
        case 0x215480u: goto label_215480;
        case 0x215484u: goto label_215484;
        case 0x215488u: goto label_215488;
        case 0x21548cu: goto label_21548c;
        case 0x215490u: goto label_215490;
        case 0x215494u: goto label_215494;
        case 0x215498u: goto label_215498;
        case 0x21549cu: goto label_21549c;
        case 0x2154a0u: goto label_2154a0;
        case 0x2154a4u: goto label_2154a4;
        case 0x2154a8u: goto label_2154a8;
        case 0x2154acu: goto label_2154ac;
        case 0x2154b0u: goto label_2154b0;
        case 0x2154b4u: goto label_2154b4;
        case 0x2154b8u: goto label_2154b8;
        case 0x2154bcu: goto label_2154bc;
        case 0x2154c0u: goto label_2154c0;
        case 0x2154c4u: goto label_2154c4;
        case 0x2154c8u: goto label_2154c8;
        case 0x2154ccu: goto label_2154cc;
        case 0x2154d0u: goto label_2154d0;
        case 0x2154d4u: goto label_2154d4;
        case 0x2154d8u: goto label_2154d8;
        case 0x2154dcu: goto label_2154dc;
        case 0x2154e0u: goto label_2154e0;
        case 0x2154e4u: goto label_2154e4;
        case 0x2154e8u: goto label_2154e8;
        case 0x2154ecu: goto label_2154ec;
        case 0x2154f0u: goto label_2154f0;
        case 0x2154f4u: goto label_2154f4;
        case 0x2154f8u: goto label_2154f8;
        case 0x2154fcu: goto label_2154fc;
        case 0x215500u: goto label_215500;
        case 0x215504u: goto label_215504;
        case 0x215508u: goto label_215508;
        case 0x21550cu: goto label_21550c;
        case 0x215510u: goto label_215510;
        case 0x215514u: goto label_215514;
        case 0x215518u: goto label_215518;
        case 0x21551cu: goto label_21551c;
        case 0x215520u: goto label_215520;
        case 0x215524u: goto label_215524;
        case 0x215528u: goto label_215528;
        case 0x21552cu: goto label_21552c;
        case 0x215530u: goto label_215530;
        case 0x215534u: goto label_215534;
        case 0x215538u: goto label_215538;
        case 0x21553cu: goto label_21553c;
        case 0x215540u: goto label_215540;
        case 0x215544u: goto label_215544;
        case 0x215548u: goto label_215548;
        case 0x21554cu: goto label_21554c;
        case 0x215550u: goto label_215550;
        case 0x215554u: goto label_215554;
        case 0x215558u: goto label_215558;
        case 0x21555cu: goto label_21555c;
        case 0x215560u: goto label_215560;
        case 0x215564u: goto label_215564;
        case 0x215568u: goto label_215568;
        case 0x21556cu: goto label_21556c;
        case 0x215570u: goto label_215570;
        case 0x215574u: goto label_215574;
        case 0x215578u: goto label_215578;
        case 0x21557cu: goto label_21557c;
        case 0x215580u: goto label_215580;
        case 0x215584u: goto label_215584;
        case 0x215588u: goto label_215588;
        case 0x21558cu: goto label_21558c;
        case 0x215590u: goto label_215590;
        case 0x215594u: goto label_215594;
        case 0x215598u: goto label_215598;
        case 0x21559cu: goto label_21559c;
        case 0x2155a0u: goto label_2155a0;
        case 0x2155a4u: goto label_2155a4;
        case 0x2155a8u: goto label_2155a8;
        case 0x2155acu: goto label_2155ac;
        case 0x2155b0u: goto label_2155b0;
        case 0x2155b4u: goto label_2155b4;
        case 0x2155b8u: goto label_2155b8;
        case 0x2155bcu: goto label_2155bc;
        case 0x2155c0u: goto label_2155c0;
        case 0x2155c4u: goto label_2155c4;
        case 0x2155c8u: goto label_2155c8;
        case 0x2155ccu: goto label_2155cc;
        case 0x2155d0u: goto label_2155d0;
        case 0x2155d4u: goto label_2155d4;
        case 0x2155d8u: goto label_2155d8;
        case 0x2155dcu: goto label_2155dc;
        case 0x2155e0u: goto label_2155e0;
        case 0x2155e4u: goto label_2155e4;
        case 0x2155e8u: goto label_2155e8;
        case 0x2155ecu: goto label_2155ec;
        case 0x2155f0u: goto label_2155f0;
        case 0x2155f4u: goto label_2155f4;
        case 0x2155f8u: goto label_2155f8;
        case 0x2155fcu: goto label_2155fc;
        case 0x215600u: goto label_215600;
        case 0x215604u: goto label_215604;
        case 0x215608u: goto label_215608;
        case 0x21560cu: goto label_21560c;
        case 0x215610u: goto label_215610;
        case 0x215614u: goto label_215614;
        case 0x215618u: goto label_215618;
        case 0x21561cu: goto label_21561c;
        case 0x215620u: goto label_215620;
        case 0x215624u: goto label_215624;
        case 0x215628u: goto label_215628;
        case 0x21562cu: goto label_21562c;
        case 0x215630u: goto label_215630;
        case 0x215634u: goto label_215634;
        case 0x215638u: goto label_215638;
        case 0x21563cu: goto label_21563c;
        case 0x215640u: goto label_215640;
        case 0x215644u: goto label_215644;
        case 0x215648u: goto label_215648;
        case 0x21564cu: goto label_21564c;
        case 0x215650u: goto label_215650;
        case 0x215654u: goto label_215654;
        case 0x215658u: goto label_215658;
        case 0x21565cu: goto label_21565c;
        case 0x215660u: goto label_215660;
        case 0x215664u: goto label_215664;
        case 0x215668u: goto label_215668;
        default: break;
    }

    ctx->pc = 0x214960u;

label_214960:
    // 0x214960: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x214960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_214964:
    // 0x214964: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x214964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_214968:
    // 0x214968: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x214968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_21496c:
    // 0x21496c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x21496cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_214970:
    // 0x214970: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x214970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_214974:
    // 0x214974: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x214974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_214978:
    // 0x214978: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x214978u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21497c:
    // 0x21497c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x21497cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_214980:
    // 0x214980: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x214980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_214984:
    // 0x214984: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x214984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_214988:
    // 0x214988: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x214988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_21498c:
    // 0x21498c: 0x58880  sll         $s1, $a1, 2
    ctx->pc = 0x21498cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_214990:
    // 0x214990: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x214990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_214994:
    // 0x214994: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x214994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_214998:
    // 0x214998: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x214998u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_21499c:
    // 0x21499c: 0x247202b4  addiu       $s2, $v1, 0x2B4
    ctx->pc = 0x21499cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 692));
label_2149a0:
    // 0x2149a0: 0x8c6302b4  lw          $v1, 0x2B4($v1)
    ctx->pc = 0x2149a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 692)));
label_2149a4:
    // 0x2149a4: 0x10600324  beqz        $v1, . + 4 + (0x324 << 2)
label_2149a8:
    if (ctx->pc == 0x2149A8u) {
        ctx->pc = 0x2149A8u;
            // 0x2149a8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2149ACu;
        goto label_2149ac;
    }
    ctx->pc = 0x2149A4u;
    {
        const bool branch_taken_0x2149a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2149A4u;
            // 0x2149a8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149a4) {
            ctx->pc = 0x215638u;
            goto label_215638;
        }
    }
    ctx->pc = 0x2149ACu;
label_2149ac:
    // 0x2149ac: 0x8e840320  lw          $a0, 0x320($s4)
    ctx->pc = 0x2149acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_2149b0:
    // 0x2149b0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2149b4:
    if (ctx->pc == 0x2149B4u) {
        ctx->pc = 0x2149B4u;
            // 0x2149b4: 0x2417ffff  addiu       $s7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2149B8u;
        goto label_2149b8;
    }
    ctx->pc = 0x2149B0u;
    {
        const bool branch_taken_0x2149b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2149B0u;
            // 0x2149b4: 0x2417ffff  addiu       $s7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149b0) {
            ctx->pc = 0x2149CCu;
            goto label_2149cc;
        }
    }
    ctx->pc = 0x2149B8u;
label_2149b8:
    // 0x2149b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2149b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2149bc:
    // 0x2149bc: 0x90970690  lbu         $s7, 0x690($a0)
    ctx->pc = 0x2149bcu;
    SET_GPR_U32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1680)));
label_2149c0:
    // 0x2149c0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2149c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2149c4:
    // 0x2149c4: 0x320f809  jalr        $t9
label_2149c8:
    if (ctx->pc == 0x2149C8u) {
        ctx->pc = 0x2149C8u;
            // 0x2149c8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2149CCu;
        goto label_2149cc;
    }
    ctx->pc = 0x2149C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2149CCu);
        ctx->pc = 0x2149C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2149C4u;
            // 0x2149c8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2149CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2149CCu; }
            if (ctx->pc != 0x2149CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2149CCu;
label_2149cc:
    // 0x2149cc: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x2149ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
label_2149d0:
    // 0x2149d0: 0x2463c480  addiu       $v1, $v1, -0x3B80
    ctx->pc = 0x2149d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952064));
label_2149d4:
    // 0x2149d4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2149d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2149d8:
    // 0x2149d8: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x2149d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2149dc:
    // 0x2149dc: 0xafb300d0  sw          $s3, 0xD0($sp)
    ctx->pc = 0x2149dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 19));
label_2149e0:
    // 0x2149e0: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x2149e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2149e4:
    // 0x2149e4: 0x8e320938  lw          $s2, 0x938($s1)
    ctx->pc = 0x2149e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2360)));
label_2149e8:
    // 0x2149e8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_2149ec:
    if (ctx->pc == 0x2149ECu) {
        ctx->pc = 0x2149ECu;
            // 0x2149ec: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2149F0u;
        goto label_2149f0;
    }
    ctx->pc = 0x2149E8u;
    {
        const bool branch_taken_0x2149e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2149ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2149E8u;
            // 0x2149ec: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149e8) {
            ctx->pc = 0x2149F8u;
            goto label_2149f8;
        }
    }
    ctx->pc = 0x2149F0u;
label_2149f0:
    // 0x2149f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2149f4:
    if (ctx->pc == 0x2149F4u) {
        ctx->pc = 0x2149F4u;
            // 0x2149f4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2149F8u;
        goto label_2149f8;
    }
    ctx->pc = 0x2149F0u;
    {
        const bool branch_taken_0x2149f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2149F0u;
            // 0x2149f4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149f0) {
            ctx->pc = 0x2149FCu;
            goto label_2149fc;
        }
    }
    ctx->pc = 0x2149F8u;
label_2149f8:
    // 0x2149f8: 0x26550010  addiu       $s5, $s2, 0x10
    ctx->pc = 0x2149f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2149fc:
    // 0x2149fc: 0x1240030e  beqz        $s2, . + 4 + (0x30E << 2)
label_214a00:
    if (ctx->pc == 0x214A00u) {
        ctx->pc = 0x214A04u;
        goto label_214a04;
    }
    ctx->pc = 0x2149FCu;
    {
        const bool branch_taken_0x2149fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2149fc) {
            ctx->pc = 0x215638u;
            goto label_215638;
        }
    }
    ctx->pc = 0x214A04u;
label_214a04:
    // 0x214a04: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_214a08:
    if (ctx->pc == 0x214A08u) {
        ctx->pc = 0x214A0Cu;
        goto label_214a0c;
    }
    ctx->pc = 0x214A04u;
    {
        const bool branch_taken_0x214a04 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x214a04) {
            ctx->pc = 0x214A14u;
            goto label_214a14;
        }
    }
    ctx->pc = 0x214A0Cu;
label_214a0c:
    // 0x214a0c: 0x1000030b  b           . + 4 + (0x30B << 2)
label_214a10:
    if (ctx->pc == 0x214A10u) {
        ctx->pc = 0x214A10u;
            // 0x214a10: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x214A14u;
        goto label_214a14;
    }
    ctx->pc = 0x214A0Cu;
    {
        const bool branch_taken_0x214a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214A0Cu;
            // 0x214a10: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a0c) {
            ctx->pc = 0x21563Cu;
            goto label_21563c;
        }
    }
    ctx->pc = 0x214A14u;
label_214a14:
    // 0x214a14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x214a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_214a18:
    // 0x214a18: 0x16e20010  bne         $s7, $v0, . + 4 + (0x10 << 2)
label_214a1c:
    if (ctx->pc == 0x214A1Cu) {
        ctx->pc = 0x214A20u;
        goto label_214a20;
    }
    ctx->pc = 0x214A18u;
    {
        const bool branch_taken_0x214a18 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x214a18) {
            ctx->pc = 0x214A5Cu;
            goto label_214a5c;
        }
    }
    ctx->pc = 0x214A20u;
label_214a20:
    // 0x214a20: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x214a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_214a24:
    // 0x214a24: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x214a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_214a28:
    // 0x214a28: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x214a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_214a2c:
    // 0x214a2c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x214a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_214a30:
    // 0x214a30: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x214a30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_214a34:
    // 0x214a34: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x214a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_214a38:
    // 0x214a38: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x214a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_214a3c:
    // 0x214a3c: 0x96be0030  lhu         $fp, 0x30($s5)
    ctx->pc = 0x214a3cu;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 48)));
label_214a40:
    // 0x214a40: 0xc0941b0  jal         func_2506C0
label_214a44:
    if (ctx->pc == 0x214A44u) {
        ctx->pc = 0x214A44u;
            // 0x214a44: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x214A48u;
        goto label_214a48;
    }
    ctx->pc = 0x214A40u;
    SET_GPR_U32(ctx, 31, 0x214A48u);
    ctx->pc = 0x214A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214A40u;
            // 0x214a44: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214A48u; }
        if (ctx->pc != 0x214A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214A48u; }
        if (ctx->pc != 0x214A48u) { return; }
    }
    ctx->pc = 0x214A48u;
label_214a48:
    // 0x214a48: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x214a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
label_214a4c:
    // 0x214a4c: 0x3c2082a  slt         $at, $fp, $v0
    ctx->pc = 0x214a4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_214a50:
    // 0x214a50: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_214a54:
    if (ctx->pc == 0x214A54u) {
        ctx->pc = 0x214A58u;
        goto label_214a58;
    }
    ctx->pc = 0x214A50u;
    {
        const bool branch_taken_0x214a50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x214a50) {
            ctx->pc = 0x214A5Cu;
            goto label_214a5c;
        }
    }
    ctx->pc = 0x214A58u;
label_214a58:
    // 0x214a58: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x214a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_214a5c:
    // 0x214a5c: 0x862206ae  lh          $v0, 0x6AE($s1)
    ctx->pc = 0x214a5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1710)));
label_214a60:
    // 0x214a60: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x214a60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_214a64:
    // 0x214a64: 0x102002f1  beqz        $at, . + 4 + (0x2F1 << 2)
label_214a68:
    if (ctx->pc == 0x214A68u) {
        ctx->pc = 0x214A68u;
            // 0x214a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214A6Cu;
        goto label_214a6c;
    }
    ctx->pc = 0x214A64u;
    {
        const bool branch_taken_0x214a64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214A64u;
            // 0x214a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a64) {
            ctx->pc = 0x21562Cu;
            goto label_21562c;
        }
    }
    ctx->pc = 0x214A6Cu;
label_214a6c:
    // 0x214a6c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x214a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_214a70:
    // 0x214a70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x214a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_214a74:
    // 0x214a74: 0x2463a1a0  addiu       $v1, $v1, -0x5E60
    ctx->pc = 0x214a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943136));
label_214a78:
    // 0x214a78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x214a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_214a7c:
    // 0x214a7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x214a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_214a80:
    // 0x214a80: 0x400008  jr          $v0
label_214a84:
    if (ctx->pc == 0x214A84u) {
        ctx->pc = 0x214A88u;
        goto label_214a88;
    }
    ctx->pc = 0x214A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214A88u: goto label_214a88;
            case 0x214AC8u: goto label_214ac8;
            case 0x214F84u: goto label_214f84;
            case 0x214FE0u: goto label_214fe0;
            case 0x2150C0u: goto label_2150c0;
            case 0x215190u: goto label_215190;
            case 0x215370u: goto label_215370;
            case 0x21540Cu: goto label_21540c;
            case 0x215628u: goto label_215628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214A88u;
label_214a88:
    // 0x214a88: 0xc62c06f0  lwc1        $f12, 0x6F0($s1)
    ctx->pc = 0x214a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_214a8c:
    // 0x214a8c: 0x26240670  addiu       $a0, $s1, 0x670
    ctx->pc = 0x214a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
label_214a90:
    // 0x214a90: 0xc041e96  jal         func_107A58
label_214a94:
    if (ctx->pc == 0x214A94u) {
        ctx->pc = 0x214A94u;
            // 0x214a94: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214A98u;
        goto label_214a98;
    }
    ctx->pc = 0x214A90u;
    SET_GPR_U32(ctx, 31, 0x214A98u);
    ctx->pc = 0x214A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214A90u;
            // 0x214a94: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214A98u; }
        if (ctx->pc != 0x214A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214A98u; }
        if (ctx->pc != 0x214A98u) { return; }
    }
    ctx->pc = 0x214A98u;
label_214a98:
    // 0x214a98: 0x8e2206c4  lw          $v0, 0x6C4($s1)
    ctx->pc = 0x214a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1732)));
label_214a9c:
    // 0x214a9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x214a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_214aa0:
    // 0x214aa0: 0xae2206c4  sw          $v0, 0x6C4($s1)
    ctx->pc = 0x214aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1732), GPR_U32(ctx, 2));
label_214aa4:
    // 0x214aa4: 0x8e2206c4  lw          $v0, 0x6C4($s1)
    ctx->pc = 0x214aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1732)));
label_214aa8:
    // 0x214aa8: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_214aac:
    if (ctx->pc == 0x214AACu) {
        ctx->pc = 0x214AACu;
            // 0x214aac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214AB0u;
        goto label_214ab0;
    }
    ctx->pc = 0x214AA8u;
    {
        const bool branch_taken_0x214aa8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x214AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214AA8u;
            // 0x214aac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214aa8) {
            ctx->pc = 0x214AB8u;
            goto label_214ab8;
        }
    }
    ctx->pc = 0x214AB0u;
label_214ab0:
    // 0x214ab0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x214ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214ab4:
    // 0x214ab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_214ab8:
    // 0x214ab8: 0xc065d30  jal         func_1974C0
label_214abc:
    if (ctx->pc == 0x214ABCu) {
        ctx->pc = 0x214ABCu;
            // 0x214abc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x214AC0u;
        goto label_214ac0;
    }
    ctx->pc = 0x214AB8u;
    SET_GPR_U32(ctx, 31, 0x214AC0u);
    ctx->pc = 0x214ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214AB8u;
            // 0x214abc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1974C0u;
    if (runtime->hasFunction(0x1974C0u)) {
        auto targetFn = runtime->lookupFunction(0x1974C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214AC0u; }
        if (ctx->pc != 0x214AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFishHp__13CGameDataUsedFi_0x1974c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214AC0u; }
        if (ctx->pc != 0x214AC0u) { return; }
    }
    ctx->pc = 0x214AC0u;
label_214ac0:
    // 0x214ac0: 0x100002d9  b           . + 4 + (0x2D9 << 2)
label_214ac4:
    if (ctx->pc == 0x214AC4u) {
        ctx->pc = 0x214AC8u;
        goto label_214ac8;
    }
    ctx->pc = 0x214AC0u;
    {
        const bool branch_taken_0x214ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214ac0) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x214AC8u;
label_214ac8:
    // 0x214ac8: 0x862206b0  lh          $v0, 0x6B0($s1)
    ctx->pc = 0x214ac8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1712)));
label_214acc:
    // 0x214acc: 0x14400099  bnez        $v0, . + 4 + (0x99 << 2)
label_214ad0:
    if (ctx->pc == 0x214AD0u) {
        ctx->pc = 0x214AD4u;
        goto label_214ad4;
    }
    ctx->pc = 0x214ACCu;
    {
        const bool branch_taken_0x214acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214acc) {
            ctx->pc = 0x214D34u;
            goto label_214d34;
        }
    }
    ctx->pc = 0x214AD4u;
label_214ad4:
    // 0x214ad4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x214ad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_214ad8:
    // 0x214ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_214adc:
    // 0x214adc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x214adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_214ae0:
    // 0x214ae0: 0x320f809  jalr        $t9
label_214ae4:
    if (ctx->pc == 0x214AE4u) {
        ctx->pc = 0x214AE4u;
            // 0x214ae4: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x214AE8u;
        goto label_214ae8;
    }
    ctx->pc = 0x214AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x214AE8u);
        ctx->pc = 0x214AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214AE0u;
            // 0x214ae4: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x214AE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x214AE8u; }
            if (ctx->pc != 0x214AE8u) { return; }
        }
        }
    }
    ctx->pc = 0x214AE8u;
label_214ae8:
    // 0x214ae8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x214ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_214aec:
    // 0x214aec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_214af0:
    // 0x214af0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x214af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_214af4:
    // 0x214af4: 0x320f809  jalr        $t9
label_214af8:
    if (ctx->pc == 0x214AF8u) {
        ctx->pc = 0x214AF8u;
            // 0x214af8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x214AFCu;
        goto label_214afc;
    }
    ctx->pc = 0x214AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x214AFCu);
        ctx->pc = 0x214AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214AF4u;
            // 0x214af8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x214AFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x214AFCu; }
            if (ctx->pc != 0x214AFCu) { return; }
        }
        }
    }
    ctx->pc = 0x214AFCu;
label_214afc:
    // 0x214afc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x214afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_214b00:
    // 0x214b00: 0xc04c018  jal         func_130060
label_214b04:
    if (ctx->pc == 0x214B04u) {
        ctx->pc = 0x214B04u;
            // 0x214b04: 0x26250660  addiu       $a1, $s1, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
        ctx->pc = 0x214B08u;
        goto label_214b08;
    }
    ctx->pc = 0x214B00u;
    SET_GPR_U32(ctx, 31, 0x214B08u);
    ctx->pc = 0x214B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214B00u;
            // 0x214b04: 0x26250660  addiu       $a1, $s1, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214B08u; }
        if (ctx->pc != 0x214B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214B08u; }
        if (ctx->pc != 0x214B08u) { return; }
    }
    ctx->pc = 0x214B08u;
label_214b08:
    // 0x214b08: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x214b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_214b0c:
    // 0x214b0c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x214b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_214b10:
    // 0x214b10: 0x2442fc20  addiu       $v0, $v0, -0x3E0
    ctx->pc = 0x214b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966304));
label_214b14:
    // 0x214b14: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x214b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_214b18:
    // 0x214b18: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x214b18u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_214b1c:
    // 0x214b1c: 0x2484fc30  addiu       $a0, $a0, -0x3D0
    ctx->pc = 0x214b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966320));
label_214b20:
    // 0x214b20: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x214b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_214b24:
    // 0x214b24: 0x3c02c1ad  lui         $v0, 0xC1AD
    ctx->pc = 0x214b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49581 << 16));
label_214b28:
    // 0x214b28: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x214b28u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_214b2c:
    // 0x214b2c: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x214b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
label_214b30:
    // 0x214b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x214b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_214b34:
    // 0x214b34: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x214b34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_214b38:
    // 0x214b38: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x214b38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_214b3c:
    // 0x214b3c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x214b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_214b40:
    // 0x214b40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x214b40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_214b44:
    // 0x214b44: 0x0  nop
    ctx->pc = 0x214b44u;
    // NOP
label_214b48:
    // 0x214b48: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_214b4c:
    if (ctx->pc == 0x214B4Cu) {
        ctx->pc = 0x214B4Cu;
            // 0x214b4c: 0x3c0241ad  lui         $v0, 0x41AD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16813 << 16));
        ctx->pc = 0x214B50u;
        goto label_214b50;
    }
    ctx->pc = 0x214B48u;
    {
        const bool branch_taken_0x214b48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x214B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214B48u;
            // 0x214b4c: 0x3c0241ad  lui         $v0, 0x41AD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16813 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b48) {
            ctx->pc = 0x214B74u;
            goto label_214b74;
        }
    }
    ctx->pc = 0x214B50u;
label_214b50:
    // 0x214b50: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x214b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_214b54:
    // 0x214b54: 0x3c023d0b  lui         $v0, 0x3D0B
    ctx->pc = 0x214b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15627 << 16));
label_214b58:
    // 0x214b58: 0x34424396  ori         $v0, $v0, 0x4396
    ctx->pc = 0x214b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17302);
label_214b5c:
    // 0x214b5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x214b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_214b60:
    // 0x214b60: 0x0  nop
    ctx->pc = 0x214b60u;
    // NOP
label_214b64:
    // 0x214b64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x214b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_214b68:
    // 0x214b68: 0x10000015  b           . + 4 + (0x15 << 2)
label_214b6c:
    if (ctx->pc == 0x214B6Cu) {
        ctx->pc = 0x214B6Cu;
            // 0x214b6c: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->pc = 0x214B70u;
        goto label_214b70;
    }
    ctx->pc = 0x214B68u;
    {
        const bool branch_taken_0x214b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214B68u;
            // 0x214b6c: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b68) {
            ctx->pc = 0x214BC0u;
            goto label_214bc0;
        }
    }
    ctx->pc = 0x214B70u;
label_214b70:
    // 0x214b70: 0x3c0241ad  lui         $v0, 0x41AD
    ctx->pc = 0x214b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16813 << 16));
label_214b74:
    // 0x214b74: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x214b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
label_214b78:
    // 0x214b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x214b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_214b7c:
    // 0x214b7c: 0x0  nop
    ctx->pc = 0x214b7cu;
    // NOP
label_214b80:
    // 0x214b80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x214b80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_214b84:
    // 0x214b84: 0x0  nop
    ctx->pc = 0x214b84u;
    // NOP
label_214b88:
    // 0x214b88: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_214b8c:
    if (ctx->pc == 0x214B8Cu) {
        ctx->pc = 0x214B90u;
        goto label_214b90;
    }
    ctx->pc = 0x214B88u;
    {
        const bool branch_taken_0x214b88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x214b88) {
            ctx->pc = 0x214BB0u;
            goto label_214bb0;
        }
    }
    ctx->pc = 0x214B90u;
label_214b90:
    // 0x214b90: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x214b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_214b94:
    // 0x214b94: 0x3c023d0b  lui         $v0, 0x3D0B
    ctx->pc = 0x214b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15627 << 16));
label_214b98:
    // 0x214b98: 0x34424396  ori         $v0, $v0, 0x4396
    ctx->pc = 0x214b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17302);
label_214b9c:
    // 0x214b9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x214b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_214ba0:
    // 0x214ba0: 0x0  nop
    ctx->pc = 0x214ba0u;
    // NOP
label_214ba4:
    // 0x214ba4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x214ba4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_214ba8:
    // 0x214ba8: 0x10000005  b           . + 4 + (0x5 << 2)
label_214bac:
    if (ctx->pc == 0x214BACu) {
        ctx->pc = 0x214BACu;
            // 0x214bac: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->pc = 0x214BB0u;
        goto label_214bb0;
    }
    ctx->pc = 0x214BA8u;
    {
        const bool branch_taken_0x214ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214BA8u;
            // 0x214bac: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ba8) {
            ctx->pc = 0x214BC0u;
            goto label_214bc0;
        }
    }
    ctx->pc = 0x214BB0u;
label_214bb0:
    // 0x214bb0: 0xc6210670  lwc1        $f1, 0x670($s1)
    ctx->pc = 0x214bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_214bb4:
    // 0x214bb4: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x214bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_214bb8:
    // 0x214bb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x214bb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_214bbc:
    // 0x214bbc: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x214bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_214bc0:
    // 0x214bc0: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x214bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_214bc4:
    // 0x214bc4: 0x3c02c12c  lui         $v0, 0xC12C
    ctx->pc = 0x214bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49452 << 16));
label_214bc8:
    // 0x214bc8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x214bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_214bcc:
    // 0x214bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x214bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_214bd0:
    // 0x214bd0: 0x0  nop
    ctx->pc = 0x214bd0u;
    // NOP
label_214bd4:
    // 0x214bd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x214bd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_214bd8:
    // 0x214bd8: 0x0  nop
    ctx->pc = 0x214bd8u;
    // NOP
label_214bdc:
    // 0x214bdc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_214be0:
    if (ctx->pc == 0x214BE0u) {
        ctx->pc = 0x214BE0u;
            // 0x214be0: 0x3c02412c  lui         $v0, 0x412C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16684 << 16));
        ctx->pc = 0x214BE4u;
        goto label_214be4;
    }
    ctx->pc = 0x214BDCu;
    {
        const bool branch_taken_0x214bdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x214BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214BDCu;
            // 0x214be0: 0x3c02412c  lui         $v0, 0x412C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16684 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214bdc) {
            ctx->pc = 0x214C08u;
            goto label_214c08;
        }
    }
    ctx->pc = 0x214BE4u;
label_214be4:
    // 0x214be4: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x214be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_214be8:
    // 0x214be8: 0x3c023d03  lui         $v0, 0x3D03
    ctx->pc = 0x214be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15619 << 16));
label_214bec:
    // 0x214bec: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x214becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_214bf0:
    // 0x214bf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x214bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_214bf4:
    // 0x214bf4: 0x0  nop
    ctx->pc = 0x214bf4u;
    // NOP
label_214bf8:
    // 0x214bf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x214bf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_214bfc:
    // 0x214bfc: 0x10000015  b           . + 4 + (0x15 << 2)
label_214c00:
    if (ctx->pc == 0x214C00u) {
        ctx->pc = 0x214C00u;
            // 0x214c00: 0xe7a00118  swc1        $f0, 0x118($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->pc = 0x214C04u;
        goto label_214c04;
    }
    ctx->pc = 0x214BFCu;
    {
        const bool branch_taken_0x214bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214BFCu;
            // 0x214c00: 0xe7a00118  swc1        $f0, 0x118($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214bfc) {
            ctx->pc = 0x214C54u;
            goto label_214c54;
        }
    }
    ctx->pc = 0x214C04u;
label_214c04:
    // 0x214c04: 0x3c02412c  lui         $v0, 0x412C
    ctx->pc = 0x214c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16684 << 16));
label_214c08:
    // 0x214c08: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x214c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_214c0c:
    // 0x214c0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x214c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_214c10:
    // 0x214c10: 0x0  nop
    ctx->pc = 0x214c10u;
    // NOP
label_214c14:
    // 0x214c14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x214c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_214c18:
    // 0x214c18: 0x0  nop
    ctx->pc = 0x214c18u;
    // NOP
label_214c1c:
    // 0x214c1c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_214c20:
    if (ctx->pc == 0x214C20u) {
        ctx->pc = 0x214C24u;
        goto label_214c24;
    }
    ctx->pc = 0x214C1Cu;
    {
        const bool branch_taken_0x214c1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x214c1c) {
            ctx->pc = 0x214C44u;
            goto label_214c44;
        }
    }
    ctx->pc = 0x214C24u;
label_214c24:
    // 0x214c24: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x214c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_214c28:
    // 0x214c28: 0x3c023d03  lui         $v0, 0x3D03
    ctx->pc = 0x214c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15619 << 16));
label_214c2c:
    // 0x214c2c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x214c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_214c30:
    // 0x214c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x214c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_214c34:
    // 0x214c34: 0x0  nop
    ctx->pc = 0x214c34u;
    // NOP
label_214c38:
    // 0x214c38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x214c38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_214c3c:
    // 0x214c3c: 0x10000005  b           . + 4 + (0x5 << 2)
label_214c40:
    if (ctx->pc == 0x214C40u) {
        ctx->pc = 0x214C40u;
            // 0x214c40: 0xe7a00118  swc1        $f0, 0x118($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->pc = 0x214C44u;
        goto label_214c44;
    }
    ctx->pc = 0x214C3Cu;
    {
        const bool branch_taken_0x214c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214C3Cu;
            // 0x214c40: 0xe7a00118  swc1        $f0, 0x118($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c3c) {
            ctx->pc = 0x214C54u;
            goto label_214c54;
        }
    }
    ctx->pc = 0x214C44u;
label_214c44:
    // 0x214c44: 0xc6210678  lwc1        $f1, 0x678($s1)
    ctx->pc = 0x214c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_214c48:
    // 0x214c48: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x214c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_214c4c:
    // 0x214c4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x214c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_214c50:
    // 0x214c50: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x214c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_214c54:
    // 0x214c54: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x214c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_214c58:
    // 0x214c58: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x214c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_214c5c:
    // 0x214c5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x214c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_214c60:
    // 0x214c60: 0xc0941c0  jal         func_250700
label_214c64:
    if (ctx->pc == 0x214C64u) {
        ctx->pc = 0x214C68u;
        goto label_214c68;
    }
    ctx->pc = 0x214C60u;
    SET_GPR_U32(ctx, 31, 0x214C68u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214C68u; }
        if (ctx->pc != 0x214C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214C68u; }
        if (ctx->pc != 0x214C68u) { return; }
    }
    ctx->pc = 0x214C68u;
label_214c68:
    // 0x214c68: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x214c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_214c6c:
    // 0x214c6c: 0x27b30114  addiu       $s3, $sp, 0x114
    ctx->pc = 0x214c6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_214c70:
    // 0x214c70: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x214c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_214c74:
    // 0x214c74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x214c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_214c78:
    // 0x214c78: 0x0  nop
    ctx->pc = 0x214c78u;
    // NOP
label_214c7c:
    // 0x214c7c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x214c7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_214c80:
    // 0x214c80: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x214c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_214c84:
    // 0x214c84: 0x8e220924  lw          $v0, 0x924($s1)
    ctx->pc = 0x214c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2340)));
label_214c88:
    // 0x214c88: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x214c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_214c8c:
    // 0x214c8c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_214c90:
    if (ctx->pc == 0x214C90u) {
        ctx->pc = 0x214C90u;
            // 0x214c90: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x214C94u;
        goto label_214c94;
    }
    ctx->pc = 0x214C8Cu;
    {
        const bool branch_taken_0x214c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214C8Cu;
            // 0x214c90: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c8c) {
            ctx->pc = 0x214CC8u;
            goto label_214cc8;
        }
    }
    ctx->pc = 0x214C94u;
label_214c94:
    // 0x214c94: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x214c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_214c98:
    // 0x214c98: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x214c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_214c9c:
    // 0x214c9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x214c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_214ca0:
    // 0x214ca0: 0xc0941c0  jal         func_250700
label_214ca4:
    if (ctx->pc == 0x214CA4u) {
        ctx->pc = 0x214CA8u;
        goto label_214ca8;
    }
    ctx->pc = 0x214CA0u;
    SET_GPR_U32(ctx, 31, 0x214CA8u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CA8u; }
        if (ctx->pc != 0x214CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CA8u; }
        if (ctx->pc != 0x214CA8u) { return; }
    }
    ctx->pc = 0x214CA8u;
label_214ca8:
    // 0x214ca8: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x214ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
label_214cac:
    // 0x214cac: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x214cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_214cb0:
    // 0x214cb0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x214cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_214cb4:
    // 0x214cb4: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x214cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_214cb8:
    // 0x214cb8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x214cb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_214cbc:
    // 0x214cbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x214cbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_214cc0:
    // 0x214cc0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x214cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_214cc4:
    // 0x214cc4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x214cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_214cc8:
    // 0x214cc8: 0xc041be0  jal         func_106F80
label_214ccc:
    if (ctx->pc == 0x214CCCu) {
        ctx->pc = 0x214CCCu;
            // 0x214ccc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214CD0u;
        goto label_214cd0;
    }
    ctx->pc = 0x214CC8u;
    SET_GPR_U32(ctx, 31, 0x214CD0u);
    ctx->pc = 0x214CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214CC8u;
            // 0x214ccc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CD0u; }
        if (ctx->pc != 0x214CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CD0u; }
        if (ctx->pc != 0x214CD0u) { return; }
    }
    ctx->pc = 0x214CD0u;
label_214cd0:
    // 0x214cd0: 0xc04bff4  jal         func_12FFD0
label_214cd4:
    if (ctx->pc == 0x214CD4u) {
        ctx->pc = 0x214CD4u;
            // 0x214cd4: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->pc = 0x214CD8u;
        goto label_214cd8;
    }
    ctx->pc = 0x214CD0u;
    SET_GPR_U32(ctx, 31, 0x214CD8u);
    ctx->pc = 0x214CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214CD0u;
            // 0x214cd4: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CD8u; }
        if (ctx->pc != 0x214CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CD8u; }
        if (ctx->pc != 0x214CD8u) { return; }
    }
    ctx->pc = 0x214CD8u;
label_214cd8:
    // 0x214cd8: 0x26240670  addiu       $a0, $s1, 0x670
    ctx->pc = 0x214cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
label_214cdc:
    // 0x214cdc: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x214cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_214ce0:
    // 0x214ce0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x214ce0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_214ce4:
    // 0x214ce4: 0xc041c38  jal         func_1070E0
label_214ce8:
    if (ctx->pc == 0x214CE8u) {
        ctx->pc = 0x214CE8u;
            // 0x214ce8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214CECu;
        goto label_214cec;
    }
    ctx->pc = 0x214CE4u;
    SET_GPR_U32(ctx, 31, 0x214CECu);
    ctx->pc = 0x214CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214CE4u;
            // 0x214ce8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CECu; }
        if (ctx->pc != 0x214CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CECu; }
        if (ctx->pc != 0x214CECu) { return; }
    }
    ctx->pc = 0x214CECu;
label_214cec:
    // 0x214cec: 0xc04bff4  jal         func_12FFD0
label_214cf0:
    if (ctx->pc == 0x214CF0u) {
        ctx->pc = 0x214CF0u;
            // 0x214cf0: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->pc = 0x214CF4u;
        goto label_214cf4;
    }
    ctx->pc = 0x214CECu;
    SET_GPR_U32(ctx, 31, 0x214CF4u);
    ctx->pc = 0x214CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214CECu;
            // 0x214cf0: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CF4u; }
        if (ctx->pc != 0x214CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CF4u; }
        if (ctx->pc != 0x214CF4u) { return; }
    }
    ctx->pc = 0x214CF4u;
label_214cf4:
    // 0x214cf4: 0x0  nop
    ctx->pc = 0x214cf4u;
    // NOP
label_214cf8:
    // 0x214cf8: 0x0  nop
    ctx->pc = 0x214cf8u;
    // NOP
label_214cfc:
    // 0x214cfc: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x214cfcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_214d00:
    // 0x214d00: 0x0  nop
    ctx->pc = 0x214d00u;
    // NOP
label_214d04:
    // 0x214d04: 0x26240670  addiu       $a0, $s1, 0x670
    ctx->pc = 0x214d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
label_214d08:
    // 0x214d08: 0xc041e96  jal         func_107A58
label_214d0c:
    if (ctx->pc == 0x214D0Cu) {
        ctx->pc = 0x214D0Cu;
            // 0x214d0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214D10u;
        goto label_214d10;
    }
    ctx->pc = 0x214D08u;
    SET_GPR_U32(ctx, 31, 0x214D10u);
    ctx->pc = 0x214D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214D08u;
            // 0x214d0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D10u; }
        if (ctx->pc != 0x214D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D10u; }
        if (ctx->pc != 0x214D10u) { return; }
    }
    ctx->pc = 0x214D10u;
label_214d10:
    // 0x214d10: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x214d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_214d14:
    // 0x214d14: 0xc041be0  jal         func_106F80
label_214d18:
    if (ctx->pc == 0x214D18u) {
        ctx->pc = 0x214D18u;
            // 0x214d18: 0x26250670  addiu       $a1, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->pc = 0x214D1Cu;
        goto label_214d1c;
    }
    ctx->pc = 0x214D14u;
    SET_GPR_U32(ctx, 31, 0x214D1Cu);
    ctx->pc = 0x214D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214D14u;
            // 0x214d18: 0x26250670  addiu       $a1, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D1Cu; }
        if (ctx->pc != 0x214D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D1Cu; }
        if (ctx->pc != 0x214D1Cu) { return; }
    }
    ctx->pc = 0x214D1Cu;
label_214d1c:
    // 0x214d1c: 0xc7ad0108  lwc1        $f13, 0x108($sp)
    ctx->pc = 0x214d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_214d20:
    // 0x214d20: 0xc047c76  jal         func_11F1D8
label_214d24:
    if (ctx->pc == 0x214D24u) {
        ctx->pc = 0x214D24u;
            // 0x214d24: 0xc7ac0100  lwc1        $f12, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x214D28u;
        goto label_214d28;
    }
    ctx->pc = 0x214D20u;
    SET_GPR_U32(ctx, 31, 0x214D28u);
    ctx->pc = 0x214D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214D20u;
            // 0x214d24: 0xc7ac0100  lwc1        $f12, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D28u; }
        if (ctx->pc != 0x214D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D28u; }
        if (ctx->pc != 0x214D28u) { return; }
    }
    ctx->pc = 0x214D28u;
label_214d28:
    // 0x214d28: 0xc04c374  jal         func_130DD0
label_214d2c:
    if (ctx->pc == 0x214D2Cu) {
        ctx->pc = 0x214D2Cu;
            // 0x214d2c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x214D30u;
        goto label_214d30;
    }
    ctx->pc = 0x214D28u;
    SET_GPR_U32(ctx, 31, 0x214D30u);
    ctx->pc = 0x214D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214D28u;
            // 0x214d2c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D30u; }
        if (ctx->pc != 0x214D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D30u; }
        if (ctx->pc != 0x214D30u) { return; }
    }
    ctx->pc = 0x214D30u;
label_214d30:
    // 0x214d30: 0xe6200684  swc1        $f0, 0x684($s1)
    ctx->pc = 0x214d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1668), bits); }
label_214d34:
    // 0x214d34: 0x862306b0  lh          $v1, 0x6B0($s1)
    ctx->pc = 0x214d34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1712)));
label_214d38:
    // 0x214d38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x214d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_214d3c:
    // 0x214d3c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_214d40:
    if (ctx->pc == 0x214D40u) {
        ctx->pc = 0x214D44u;
        goto label_214d44;
    }
    ctx->pc = 0x214D3Cu;
    {
        const bool branch_taken_0x214d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x214d3c) {
            ctx->pc = 0x214D4Cu;
            goto label_214d4c;
        }
    }
    ctx->pc = 0x214D44u;
label_214d44:
    // 0x214d44: 0xc083780  jal         func_20DE00
label_214d48:
    if (ctx->pc == 0x214D48u) {
        ctx->pc = 0x214D48u;
            // 0x214d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214D4Cu;
        goto label_214d4c;
    }
    ctx->pc = 0x214D44u;
    SET_GPR_U32(ctx, 31, 0x214D4Cu);
    ctx->pc = 0x214D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214D44u;
            // 0x214d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20DE00u;
    if (runtime->hasFunction(0x20DE00u)) {
        auto targetFn = runtime->lookupFunction(0x20DE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D4Cu; }
        if (ctx->pc != 0x214D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveActionRound__9CAquaFishFv_0x20de00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D4Cu; }
        if (ctx->pc != 0x214D4Cu) { return; }
    }
    ctx->pc = 0x214D4Cu;
label_214d4c:
    // 0x214d4c: 0x862306b0  lh          $v1, 0x6B0($s1)
    ctx->pc = 0x214d4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1712)));
label_214d50:
    // 0x214d50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214d54:
    // 0x214d54: 0x14620072  bne         $v1, $v0, . + 4 + (0x72 << 2)
label_214d58:
    if (ctx->pc == 0x214D58u) {
        ctx->pc = 0x214D58u;
            // 0x214d58: 0x240400c8  addiu       $a0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->pc = 0x214D5Cu;
        goto label_214d5c;
    }
    ctx->pc = 0x214D54u;
    {
        const bool branch_taken_0x214d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x214D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214D54u;
            // 0x214d58: 0x240400c8  addiu       $a0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d54) {
            ctx->pc = 0x214F20u;
            goto label_214f20;
        }
    }
    ctx->pc = 0x214D5Cu;
label_214d5c:
    // 0x214d5c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x214d5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_214d60:
    // 0x214d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_214d64:
    // 0x214d64: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x214d64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_214d68:
    // 0x214d68: 0x320f809  jalr        $t9
label_214d6c:
    if (ctx->pc == 0x214D6Cu) {
        ctx->pc = 0x214D6Cu;
            // 0x214d6c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x214D70u;
        goto label_214d70;
    }
    ctx->pc = 0x214D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x214D70u);
        ctx->pc = 0x214D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214D68u;
            // 0x214d6c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x214D70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x214D70u; }
            if (ctx->pc != 0x214D70u) { return; }
        }
        }
    }
    ctx->pc = 0x214D70u;
label_214d70:
    // 0x214d70: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x214d70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_214d74:
    // 0x214d74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_214d78:
    // 0x214d78: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x214d78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_214d7c:
    // 0x214d7c: 0x320f809  jalr        $t9
label_214d80:
    if (ctx->pc == 0x214D80u) {
        ctx->pc = 0x214D80u;
            // 0x214d80: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x214D84u;
        goto label_214d84;
    }
    ctx->pc = 0x214D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x214D84u);
        ctx->pc = 0x214D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214D7Cu;
            // 0x214d80: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x214D84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x214D84u; }
            if (ctx->pc != 0x214D84u) { return; }
        }
        }
    }
    ctx->pc = 0x214D84u;
label_214d84:
    // 0x214d84: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x214d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_214d88:
    // 0x214d88: 0xc04c028  jal         func_1300A0
label_214d8c:
    if (ctx->pc == 0x214D8Cu) {
        ctx->pc = 0x214D8Cu;
            // 0x214d8c: 0x26250660  addiu       $a1, $s1, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
        ctx->pc = 0x214D90u;
        goto label_214d90;
    }
    ctx->pc = 0x214D88u;
    SET_GPR_U32(ctx, 31, 0x214D90u);
    ctx->pc = 0x214D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214D88u;
            // 0x214d8c: 0x26250660  addiu       $a1, $s1, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D90u; }
        if (ctx->pc != 0x214D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D90u; }
        if (ctx->pc != 0x214D90u) { return; }
    }
    ctx->pc = 0x214D90u;
label_214d90:
    // 0x214d90: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x214d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_214d94:
    // 0x214d94: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x214d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_214d98:
    // 0x214d98: 0x2442fc40  addiu       $v0, $v0, -0x3C0
    ctx->pc = 0x214d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966336));
label_214d9c:
    // 0x214d9c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x214d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_214da0:
    // 0x214da0: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x214da0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_214da4:
    // 0x214da4: 0x2484fc50  addiu       $a0, $a0, -0x3B0
    ctx->pc = 0x214da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966352));
label_214da8:
    // 0x214da8: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x214da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_214dac:
    // 0x214dac: 0x263306c0  addiu       $s3, $s1, 0x6C0
    ctx->pc = 0x214dacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
label_214db0:
    // 0x214db0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x214db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_214db4:
    // 0x214db4: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x214db4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_214db8:
    // 0x214db8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x214db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_214dbc:
    // 0x214dbc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x214dbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_214dc0:
    // 0x214dc0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x214dc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_214dc4:
    // 0x214dc4: 0x0  nop
    ctx->pc = 0x214dc4u;
    // NOP
label_214dc8:
    // 0x214dc8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_214dcc:
    if (ctx->pc == 0x214DCCu) {
        ctx->pc = 0x214DCCu;
            // 0x214dcc: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x214DD0u;
        goto label_214dd0;
    }
    ctx->pc = 0x214DC8u;
    {
        const bool branch_taken_0x214dc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x214DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214DC8u;
            // 0x214dcc: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214dc8) {
            ctx->pc = 0x214DE0u;
            goto label_214de0;
        }
    }
    ctx->pc = 0x214DD0u;
label_214dd0:
    // 0x214dd0: 0x8e620254  lw          $v0, 0x254($s3)
    ctx->pc = 0x214dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 596)));
label_214dd4:
    // 0x214dd4: 0x28410015  slti        $at, $v0, 0x15
    ctx->pc = 0x214dd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
label_214dd8:
    // 0x214dd8: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
label_214ddc:
    if (ctx->pc == 0x214DDCu) {
        ctx->pc = 0x214DE0u;
        goto label_214de0;
    }
    ctx->pc = 0x214DD8u;
    {
        const bool branch_taken_0x214dd8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x214dd8) {
            ctx->pc = 0x214E38u;
            goto label_214e38;
        }
    }
    ctx->pc = 0x214DE0u;
label_214de0:
    // 0x214de0: 0x86620252  lh          $v0, 0x252($s3)
    ctx->pc = 0x214de0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 594)));
label_214de4:
    // 0x214de4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x214de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_214de8:
    // 0x214de8: 0xa6620252  sh          $v0, 0x252($s3)
    ctx->pc = 0x214de8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 594), (uint16_t)GPR_U32(ctx, 2));
label_214dec:
    // 0x214dec: 0xae600254  sw          $zero, 0x254($s3)
    ctx->pc = 0x214decu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 596), GPR_U32(ctx, 0));
label_214df0:
    // 0x214df0: 0x86630250  lh          $v1, 0x250($s3)
    ctx->pc = 0x214df0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 592)));
label_214df4:
    // 0x214df4: 0x86620252  lh          $v0, 0x252($s3)
    ctx->pc = 0x214df4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 594)));
label_214df8:
    // 0x214df8: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x214df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_214dfc:
    // 0x214dfc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x214dfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_214e00:
    // 0x214e00: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_214e04:
    if (ctx->pc == 0x214E04u) {
        ctx->pc = 0x214E08u;
        goto label_214e08;
    }
    ctx->pc = 0x214E00u;
    {
        const bool branch_taken_0x214e00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x214e00) {
            ctx->pc = 0x214E14u;
            goto label_214e14;
        }
    }
    ctx->pc = 0x214E08u;
label_214e08:
    // 0x214e08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_214e0c:
    // 0x214e0c: 0xc0836e0  jal         func_20DB80
label_214e10:
    if (ctx->pc == 0x214E10u) {
        ctx->pc = 0x214E10u;
            // 0x214e10: 0xa6600252  sh          $zero, 0x252($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 594), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x214E14u;
        goto label_214e14;
    }
    ctx->pc = 0x214E0Cu;
    SET_GPR_U32(ctx, 31, 0x214E14u);
    ctx->pc = 0x214E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214E0Cu;
            // 0x214e10: 0xa6600252  sh          $zero, 0x252($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 594), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20DB80u;
    if (runtime->hasFunction(0x20DB80u)) {
        auto targetFn = runtime->lookupFunction(0x20DB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E14u; }
        if (ctx->pc != 0x214E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextRootNormal__9CAquaFishFv_0x20db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E14u; }
        if (ctx->pc != 0x214E14u) { return; }
    }
    ctx->pc = 0x214E14u;
label_214e14:
    // 0x214e14: 0x86620252  lh          $v0, 0x252($s3)
    ctx->pc = 0x214e14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 594)));
label_214e18:
    // 0x214e18: 0x26250660  addiu       $a1, $s1, 0x660
    ctx->pc = 0x214e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
label_214e1c:
    // 0x214e1c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x214e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_214e20:
    // 0x214e20: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x214e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_214e24:
    // 0x214e24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x214e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_214e28:
    // 0x214e28: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x214e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_214e2c:
    // 0x214e2c: 0x78420050  lq          $v0, 0x50($v0)
    ctx->pc = 0x214e2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 80)));
label_214e30:
    // 0x214e30: 0xc041c3e  jal         func_1070F8
label_214e34:
    if (ctx->pc == 0x214E34u) {
        ctx->pc = 0x214E34u;
            // 0x214e34: 0x7e220660  sq          $v0, 0x660($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 1632), GPR_VEC(ctx, 2));
        ctx->pc = 0x214E38u;
        goto label_214e38;
    }
    ctx->pc = 0x214E30u;
    SET_GPR_U32(ctx, 31, 0x214E38u);
    ctx->pc = 0x214E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214E30u;
            // 0x214e34: 0x7e220660  sq          $v0, 0x660($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 1632), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E38u; }
        if (ctx->pc != 0x214E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E38u; }
        if (ctx->pc != 0x214E38u) { return; }
    }
    ctx->pc = 0x214E38u;
label_214e38:
    // 0x214e38: 0x8e620254  lw          $v0, 0x254($s3)
    ctx->pc = 0x214e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 596)));
label_214e3c:
    // 0x214e3c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x214e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_214e40:
    // 0x214e40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x214e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_214e44:
    // 0x214e44: 0xae620254  sw          $v0, 0x254($s3)
    ctx->pc = 0x214e44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 596), GPR_U32(ctx, 2));
label_214e48:
    // 0x214e48: 0x86620252  lh          $v0, 0x252($s3)
    ctx->pc = 0x214e48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 594)));
label_214e4c:
    // 0x214e4c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x214e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_214e50:
    // 0x214e50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x214e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_214e54:
    // 0x214e54: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x214e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_214e58:
    // 0x214e58: 0xc041c5c  jal         func_107170
label_214e5c:
    if (ctx->pc == 0x214E5Cu) {
        ctx->pc = 0x214E5Cu;
            // 0x214e5c: 0x24450050  addiu       $a1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->pc = 0x214E60u;
        goto label_214e60;
    }
    ctx->pc = 0x214E58u;
    SET_GPR_U32(ctx, 31, 0x214E60u);
    ctx->pc = 0x214E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214E58u;
            // 0x214e5c: 0x24450050  addiu       $a1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E60u; }
        if (ctx->pc != 0x214E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E60u; }
        if (ctx->pc != 0x214E60u) { return; }
    }
    ctx->pc = 0x214E60u;
label_214e60:
    // 0x214e60: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x214e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_214e64:
    // 0x214e64: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x214e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_214e68:
    // 0x214e68: 0xc041c3e  jal         func_1070F8
label_214e6c:
    if (ctx->pc == 0x214E6Cu) {
        ctx->pc = 0x214E6Cu;
            // 0x214e6c: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x214E70u;
        goto label_214e70;
    }
    ctx->pc = 0x214E68u;
    SET_GPR_U32(ctx, 31, 0x214E70u);
    ctx->pc = 0x214E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214E68u;
            // 0x214e6c: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E70u; }
        if (ctx->pc != 0x214E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E70u; }
        if (ctx->pc != 0x214E70u) { return; }
    }
    ctx->pc = 0x214E70u;
label_214e70:
    // 0x214e70: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x214e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_214e74:
    // 0x214e74: 0xc041be0  jal         func_106F80
label_214e78:
    if (ctx->pc == 0x214E78u) {
        ctx->pc = 0x214E78u;
            // 0x214e78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214E7Cu;
        goto label_214e7c;
    }
    ctx->pc = 0x214E74u;
    SET_GPR_U32(ctx, 31, 0x214E7Cu);
    ctx->pc = 0x214E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214E74u;
            // 0x214e78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E7Cu; }
        if (ctx->pc != 0x214E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E7Cu; }
        if (ctx->pc != 0x214E7Cu) { return; }
    }
    ctx->pc = 0x214E7Cu;
label_214e7c:
    // 0x214e7c: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x214e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
label_214e80:
    // 0x214e80: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x214e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_214e84:
    // 0x214e84: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x214e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_214e88:
    // 0x214e88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x214e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_214e8c:
    // 0x214e8c: 0xc041e96  jal         func_107A58
label_214e90:
    if (ctx->pc == 0x214E90u) {
        ctx->pc = 0x214E90u;
            // 0x214e90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214E94u;
        goto label_214e94;
    }
    ctx->pc = 0x214E8Cu;
    SET_GPR_U32(ctx, 31, 0x214E94u);
    ctx->pc = 0x214E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214E8Cu;
            // 0x214e90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E94u; }
        if (ctx->pc != 0x214E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E94u; }
        if (ctx->pc != 0x214E94u) { return; }
    }
    ctx->pc = 0x214E94u;
label_214e94:
    // 0x214e94: 0xc04bff4  jal         func_12FFD0
label_214e98:
    if (ctx->pc == 0x214E98u) {
        ctx->pc = 0x214E98u;
            // 0x214e98: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->pc = 0x214E9Cu;
        goto label_214e9c;
    }
    ctx->pc = 0x214E94u;
    SET_GPR_U32(ctx, 31, 0x214E9Cu);
    ctx->pc = 0x214E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214E94u;
            // 0x214e98: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E9Cu; }
        if (ctx->pc != 0x214E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E9Cu; }
        if (ctx->pc != 0x214E9Cu) { return; }
    }
    ctx->pc = 0x214E9Cu;
label_214e9c:
    // 0x214e9c: 0x26240670  addiu       $a0, $s1, 0x670
    ctx->pc = 0x214e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
label_214ea0:
    // 0x214ea0: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x214ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_214ea4:
    // 0x214ea4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x214ea4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_214ea8:
    // 0x214ea8: 0xc041c38  jal         func_1070E0
label_214eac:
    if (ctx->pc == 0x214EACu) {
        ctx->pc = 0x214EACu;
            // 0x214eac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214EB0u;
        goto label_214eb0;
    }
    ctx->pc = 0x214EA8u;
    SET_GPR_U32(ctx, 31, 0x214EB0u);
    ctx->pc = 0x214EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214EA8u;
            // 0x214eac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214EB0u; }
        if (ctx->pc != 0x214EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214EB0u; }
        if (ctx->pc != 0x214EB0u) { return; }
    }
    ctx->pc = 0x214EB0u;
label_214eb0:
    // 0x214eb0: 0xc04bff4  jal         func_12FFD0
label_214eb4:
    if (ctx->pc == 0x214EB4u) {
        ctx->pc = 0x214EB4u;
            // 0x214eb4: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->pc = 0x214EB8u;
        goto label_214eb8;
    }
    ctx->pc = 0x214EB0u;
    SET_GPR_U32(ctx, 31, 0x214EB8u);
    ctx->pc = 0x214EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214EB0u;
            // 0x214eb4: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214EB8u; }
        if (ctx->pc != 0x214EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214EB8u; }
        if (ctx->pc != 0x214EB8u) { return; }
    }
    ctx->pc = 0x214EB8u;
label_214eb8:
    // 0x214eb8: 0x0  nop
    ctx->pc = 0x214eb8u;
    // NOP
label_214ebc:
    // 0x214ebc: 0x0  nop
    ctx->pc = 0x214ebcu;
    // NOP
label_214ec0:
    // 0x214ec0: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x214ec0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_214ec4:
    // 0x214ec4: 0x0  nop
    ctx->pc = 0x214ec4u;
    // NOP
label_214ec8:
    // 0x214ec8: 0x26240670  addiu       $a0, $s1, 0x670
    ctx->pc = 0x214ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
label_214ecc:
    // 0x214ecc: 0xc041e96  jal         func_107A58
label_214ed0:
    if (ctx->pc == 0x214ED0u) {
        ctx->pc = 0x214ED0u;
            // 0x214ed0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214ED4u;
        goto label_214ed4;
    }
    ctx->pc = 0x214ECCu;
    SET_GPR_U32(ctx, 31, 0x214ED4u);
    ctx->pc = 0x214ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214ECCu;
            // 0x214ed0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214ED4u; }
        if (ctx->pc != 0x214ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214ED4u; }
        if (ctx->pc != 0x214ED4u) { return; }
    }
    ctx->pc = 0x214ED4u;
label_214ed4:
    // 0x214ed4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x214ed4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_214ed8:
    // 0x214ed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_214edc:
    // 0x214edc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x214edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_214ee0:
    // 0x214ee0: 0x320f809  jalr        $t9
label_214ee4:
    if (ctx->pc == 0x214EE4u) {
        ctx->pc = 0x214EE4u;
            // 0x214ee4: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x214EE8u;
        goto label_214ee8;
    }
    ctx->pc = 0x214EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x214EE8u);
        ctx->pc = 0x214EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214EE0u;
            // 0x214ee4: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x214EE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x214EE8u; }
            if (ctx->pc != 0x214EE8u) { return; }
        }
        }
    }
    ctx->pc = 0x214EE8u;
label_214ee8:
    // 0x214ee8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x214ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_214eec:
    // 0x214eec: 0x26250660  addiu       $a1, $s1, 0x660
    ctx->pc = 0x214eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
label_214ef0:
    // 0x214ef0: 0xc041c3e  jal         func_1070F8
label_214ef4:
    if (ctx->pc == 0x214EF4u) {
        ctx->pc = 0x214EF4u;
            // 0x214ef4: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x214EF8u;
        goto label_214ef8;
    }
    ctx->pc = 0x214EF0u;
    SET_GPR_U32(ctx, 31, 0x214EF8u);
    ctx->pc = 0x214EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214EF0u;
            // 0x214ef4: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214EF8u; }
        if (ctx->pc != 0x214EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214EF8u; }
        if (ctx->pc != 0x214EF8u) { return; }
    }
    ctx->pc = 0x214EF8u;
label_214ef8:
    // 0x214ef8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x214ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_214efc:
    // 0x214efc: 0xc041be0  jal         func_106F80
label_214f00:
    if (ctx->pc == 0x214F00u) {
        ctx->pc = 0x214F00u;
            // 0x214f00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214F04u;
        goto label_214f04;
    }
    ctx->pc = 0x214EFCu;
    SET_GPR_U32(ctx, 31, 0x214F04u);
    ctx->pc = 0x214F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214EFCu;
            // 0x214f00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F04u; }
        if (ctx->pc != 0x214F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F04u; }
        if (ctx->pc != 0x214F04u) { return; }
    }
    ctx->pc = 0x214F04u;
label_214f04:
    // 0x214f04: 0xc7ad0148  lwc1        $f13, 0x148($sp)
    ctx->pc = 0x214f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_214f08:
    // 0x214f08: 0xc047c76  jal         func_11F1D8
label_214f0c:
    if (ctx->pc == 0x214F0Cu) {
        ctx->pc = 0x214F0Cu;
            // 0x214f0c: 0xc7ac0140  lwc1        $f12, 0x140($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x214F10u;
        goto label_214f10;
    }
    ctx->pc = 0x214F08u;
    SET_GPR_U32(ctx, 31, 0x214F10u);
    ctx->pc = 0x214F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214F08u;
            // 0x214f0c: 0xc7ac0140  lwc1        $f12, 0x140($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F10u; }
        if (ctx->pc != 0x214F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F10u; }
        if (ctx->pc != 0x214F10u) { return; }
    }
    ctx->pc = 0x214F10u;
label_214f10:
    // 0x214f10: 0xc04c374  jal         func_130DD0
label_214f14:
    if (ctx->pc == 0x214F14u) {
        ctx->pc = 0x214F14u;
            // 0x214f14: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x214F18u;
        goto label_214f18;
    }
    ctx->pc = 0x214F10u;
    SET_GPR_U32(ctx, 31, 0x214F18u);
    ctx->pc = 0x214F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214F10u;
            // 0x214f14: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F18u; }
        if (ctx->pc != 0x214F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F18u; }
        if (ctx->pc != 0x214F18u) { return; }
    }
    ctx->pc = 0x214F18u;
label_214f18:
    // 0x214f18: 0xe6200684  swc1        $f0, 0x684($s1)
    ctx->pc = 0x214f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1668), bits); }
label_214f1c:
    // 0x214f1c: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x214f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_214f20:
    // 0x214f20: 0xc0941b0  jal         func_2506C0
label_214f24:
    if (ctx->pc == 0x214F24u) {
        ctx->pc = 0x214F28u;
        goto label_214f28;
    }
    ctx->pc = 0x214F20u;
    SET_GPR_U32(ctx, 31, 0x214F28u);
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F28u; }
        if (ctx->pc != 0x214F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F28u; }
        if (ctx->pc != 0x214F28u) { return; }
    }
    ctx->pc = 0x214F28u;
label_214f28:
    // 0x214f28: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x214f28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_214f2c:
    // 0x214f2c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_214f30:
    if (ctx->pc == 0x214F30u) {
        ctx->pc = 0x214F34u;
        goto label_214f34;
    }
    ctx->pc = 0x214F2Cu;
    {
        const bool branch_taken_0x214f2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x214f2c) {
            ctx->pc = 0x214F40u;
            goto label_214f40;
        }
    }
    ctx->pc = 0x214F34u;
label_214f34:
    // 0x214f34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_214f38:
    // 0x214f38: 0xc065d30  jal         func_1974C0
label_214f3c:
    if (ctx->pc == 0x214F3Cu) {
        ctx->pc = 0x214F3Cu;
            // 0x214f3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x214F40u;
        goto label_214f40;
    }
    ctx->pc = 0x214F38u;
    SET_GPR_U32(ctx, 31, 0x214F40u);
    ctx->pc = 0x214F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214F38u;
            // 0x214f3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1974C0u;
    if (runtime->hasFunction(0x1974C0u)) {
        auto targetFn = runtime->lookupFunction(0x1974C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F40u; }
        if (ctx->pc != 0x214F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFishHp__13CGameDataUsedFi_0x1974c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F40u; }
        if (ctx->pc != 0x214F40u) { return; }
    }
    ctx->pc = 0x214F40u;
label_214f40:
    // 0x214f40: 0x8e2206a8  lw          $v0, 0x6A8($s1)
    ctx->pc = 0x214f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
label_214f44:
    // 0x214f44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x214f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_214f48:
    // 0x214f48: 0xae2206a8  sw          $v0, 0x6A8($s1)
    ctx->pc = 0x214f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 2));
label_214f4c:
    // 0x214f4c: 0x8e2206a8  lw          $v0, 0x6A8($s1)
    ctx->pc = 0x214f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
label_214f50:
    // 0x214f50: 0x28420258  slti        $v0, $v0, 0x258
    ctx->pc = 0x214f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
label_214f54:
    // 0x214f54: 0x144001b4  bnez        $v0, . + 4 + (0x1B4 << 2)
label_214f58:
    if (ctx->pc == 0x214F58u) {
        ctx->pc = 0x214F5Cu;
        goto label_214f5c;
    }
    ctx->pc = 0x214F54u;
    {
        const bool branch_taken_0x214f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214f54) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x214F5Cu;
label_214f5c:
    // 0x214f5c: 0xc0941b0  jal         func_2506C0
label_214f60:
    if (ctx->pc == 0x214F60u) {
        ctx->pc = 0x214F60u;
            // 0x214f60: 0x24040065  addiu       $a0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->pc = 0x214F64u;
        goto label_214f64;
    }
    ctx->pc = 0x214F5Cu;
    SET_GPR_U32(ctx, 31, 0x214F64u);
    ctx->pc = 0x214F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214F5Cu;
            // 0x214f60: 0x24040065  addiu       $a0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F64u; }
        if (ctx->pc != 0x214F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F64u; }
        if (ctx->pc != 0x214F64u) { return; }
    }
    ctx->pc = 0x214F64u;
label_214f64:
    // 0x214f64: 0x2841005a  slti        $at, $v0, 0x5A
    ctx->pc = 0x214f64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
label_214f68:
    // 0x214f68: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_214f6c:
    if (ctx->pc == 0x214F6Cu) {
        ctx->pc = 0x214F6Cu;
            // 0x214f6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214F70u;
        goto label_214f70;
    }
    ctx->pc = 0x214F68u;
    {
        const bool branch_taken_0x214f68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214F68u;
            // 0x214f6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f68) {
            ctx->pc = 0x214F7Cu;
            goto label_214f7c;
        }
    }
    ctx->pc = 0x214F70u;
label_214f70:
    // 0x214f70: 0x100001ad  b           . + 4 + (0x1AD << 2)
label_214f74:
    if (ctx->pc == 0x214F74u) {
        ctx->pc = 0x214F74u;
            // 0x214f74: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x214F78u;
        goto label_214f78;
    }
    ctx->pc = 0x214F70u;
    {
        const bool branch_taken_0x214f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214F70u;
            // 0x214f74: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f70) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x214F78u;
label_214f78:
    // 0x214f78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x214f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214f7c:
    // 0x214f7c: 0x100001aa  b           . + 4 + (0x1AA << 2)
label_214f80:
    if (ctx->pc == 0x214F80u) {
        ctx->pc = 0x214F84u;
        goto label_214f84;
    }
    ctx->pc = 0x214F7Cu;
    {
        const bool branch_taken_0x214f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214f7c) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x214F84u;
label_214f84:
    // 0x214f84: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x214f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_214f88:
    // 0x214f88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_214f8c:
    // 0x214f8c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x214f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_214f90:
    // 0x214f90: 0x320f809  jalr        $t9
label_214f94:
    if (ctx->pc == 0x214F94u) {
        ctx->pc = 0x214F94u;
            // 0x214f94: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x214F98u;
        goto label_214f98;
    }
    ctx->pc = 0x214F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x214F98u);
        ctx->pc = 0x214F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214F90u;
            // 0x214f94: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x214F98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x214F98u; }
            if (ctx->pc != 0x214F98u) { return; }
        }
        }
    }
    ctx->pc = 0x214F98u;
label_214f98:
    // 0x214f98: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x214f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_214f9c:
    // 0x214f9c: 0x26240670  addiu       $a0, $s1, 0x670
    ctx->pc = 0x214f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
label_214fa0:
    // 0x214fa0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x214fa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_214fa4:
    // 0x214fa4: 0x7e220660  sq          $v0, 0x660($s1)
    ctx->pc = 0x214fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1632), GPR_VEC(ctx, 2));
label_214fa8:
    // 0x214fa8: 0xc62c06f0  lwc1        $f12, 0x6F0($s1)
    ctx->pc = 0x214fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_214fac:
    // 0x214fac: 0xc041e96  jal         func_107A58
label_214fb0:
    if (ctx->pc == 0x214FB0u) {
        ctx->pc = 0x214FB0u;
            // 0x214fb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214FB4u;
        goto label_214fb4;
    }
    ctx->pc = 0x214FACu;
    SET_GPR_U32(ctx, 31, 0x214FB4u);
    ctx->pc = 0x214FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214FACu;
            // 0x214fb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214FB4u; }
        if (ctx->pc != 0x214FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214FB4u; }
        if (ctx->pc != 0x214FB4u) { return; }
    }
    ctx->pc = 0x214FB4u;
label_214fb4:
    // 0x214fb4: 0xc083618  jal         func_20D860
label_214fb8:
    if (ctx->pc == 0x214FB8u) {
        ctx->pc = 0x214FB8u;
            // 0x214fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214FBCu;
        goto label_214fbc;
    }
    ctx->pc = 0x214FB4u;
    SET_GPR_U32(ctx, 31, 0x214FBCu);
    ctx->pc = 0x214FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214FB4u;
            // 0x214fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D860u;
    if (runtime->hasFunction(0x20D860u)) {
        auto targetFn = runtime->lookupFunction(0x20D860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214FBCu; }
        if (ctx->pc != 0x214FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NormalGetNextRot__9CAquaFishFv_0x20d860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214FBCu; }
        if (ctx->pc != 0x214FBCu) { return; }
    }
    ctx->pc = 0x214FBCu;
label_214fbc:
    // 0x214fbc: 0x8e2206c4  lw          $v0, 0x6C4($s1)
    ctx->pc = 0x214fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1732)));
label_214fc0:
    // 0x214fc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x214fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_214fc4:
    // 0x214fc4: 0xae2206c4  sw          $v0, 0x6C4($s1)
    ctx->pc = 0x214fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1732), GPR_U32(ctx, 2));
label_214fc8:
    // 0x214fc8: 0x8e2206c4  lw          $v0, 0x6C4($s1)
    ctx->pc = 0x214fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1732)));
label_214fcc:
    // 0x214fcc: 0x1c400196  bgtz        $v0, . + 4 + (0x196 << 2)
label_214fd0:
    if (ctx->pc == 0x214FD0u) {
        ctx->pc = 0x214FD4u;
        goto label_214fd4;
    }
    ctx->pc = 0x214FCCu;
    {
        const bool branch_taken_0x214fcc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x214fcc) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x214FD4u;
label_214fd4:
    // 0x214fd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214fd8:
    // 0x214fd8: 0x10000193  b           . + 4 + (0x193 << 2)
label_214fdc:
    if (ctx->pc == 0x214FDCu) {
        ctx->pc = 0x214FDCu;
            // 0x214fdc: 0xa62206ae  sh          $v0, 0x6AE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1710), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x214FE0u;
        goto label_214fe0;
    }
    ctx->pc = 0x214FD8u;
    {
        const bool branch_taken_0x214fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214FD8u;
            // 0x214fdc: 0xa62206ae  sh          $v0, 0x6AE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1710), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fd8) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x214FE0u;
label_214fe0:
    // 0x214fe0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x214fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_214fe4:
    // 0x214fe4: 0x16e20027  bne         $s7, $v0, . + 4 + (0x27 << 2)
label_214fe8:
    if (ctx->pc == 0x214FE8u) {
        ctx->pc = 0x214FE8u;
            // 0x214fe8: 0x3c0242ca  lui         $v0, 0x42CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17098 << 16));
        ctx->pc = 0x214FECu;
        goto label_214fec;
    }
    ctx->pc = 0x214FE4u;
    {
        const bool branch_taken_0x214fe4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x214FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214FE4u;
            // 0x214fe8: 0x3c0242ca  lui         $v0, 0x42CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17098 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fe4) {
            ctx->pc = 0x215084u;
            goto label_215084;
        }
    }
    ctx->pc = 0x214FECu;
label_214fec:
    // 0x214fec: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x214fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_214ff0:
    // 0x214ff0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x214ff0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_214ff4:
    // 0x214ff4: 0x7e220660  sq          $v0, 0x660($s1)
    ctx->pc = 0x214ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1632), GPR_VEC(ctx, 2));
label_214ff8:
    // 0x214ff8: 0x96a20026  lhu         $v0, 0x26($s5)
    ctx->pc = 0x214ff8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 38)));
label_214ffc:
    // 0x214ffc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_215000:
    if (ctx->pc == 0x215000u) {
        ctx->pc = 0x215000u;
            // 0x215000: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x215004u;
        goto label_215004;
    }
    ctx->pc = 0x214FFCu;
    {
        const bool branch_taken_0x214ffc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x215000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214FFCu;
            // 0x215000: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ffc) {
            ctx->pc = 0x215014u;
            goto label_215014;
        }
    }
    ctx->pc = 0x215004u;
label_215004:
    // 0x215004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215008:
    // 0x215008: 0x10000008  b           . + 4 + (0x8 << 2)
label_21500c:
    if (ctx->pc == 0x21500Cu) {
        ctx->pc = 0x21500Cu;
            // 0x21500c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x215010u;
        goto label_215010;
    }
    ctx->pc = 0x215008u;
    {
        const bool branch_taken_0x215008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21500Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215008u;
            // 0x21500c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215008) {
            ctx->pc = 0x21502Cu;
            goto label_21502c;
        }
    }
    ctx->pc = 0x215010u;
label_215010:
    // 0x215010: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x215010u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_215014:
    // 0x215014: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x215014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_215018:
    // 0x215018: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x215018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_21501c:
    // 0x21501c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21501cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215020:
    // 0x215020: 0x0  nop
    ctx->pc = 0x215020u;
    // NOP
label_215024:
    // 0x215024: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x215024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_215028:
    // 0x215028: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x215028u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_21502c:
    // 0x21502c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x21502cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_215030:
    // 0x215030: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x215030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_215034:
    // 0x215034: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x215034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_215038:
    // 0x215038: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x215038u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21503c:
    // 0x21503c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x21503cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_215040:
    // 0x215040: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x215040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215044:
    // 0x215044: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x215044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_215048:
    // 0x215048: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x215048u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_21504c:
    // 0x21504c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21504cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_215050:
    // 0x215050: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x215050u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_215054:
    // 0x215054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215058:
    // 0x215058: 0xc0835dc  jal         func_20D770
label_21505c:
    if (ctx->pc == 0x21505Cu) {
        ctx->pc = 0x21505Cu;
            // 0x21505c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x215060u;
        goto label_215060;
    }
    ctx->pc = 0x215058u;
    SET_GPR_U32(ctx, 31, 0x215060u);
    ctx->pc = 0x21505Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215058u;
            // 0x21505c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D770u;
    if (runtime->hasFunction(0x20D770u)) {
        auto targetFn = runtime->lookupFunction(0x20D770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215060u; }
        if (ctx->pc != 0x215060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NormalGetNextVelo__9CAquaFishFf_0x20d770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215060u; }
        if (ctx->pc != 0x215060u) { return; }
    }
    ctx->pc = 0x215060u;
label_215060:
    // 0x215060: 0xc083618  jal         func_20D860
label_215064:
    if (ctx->pc == 0x215064u) {
        ctx->pc = 0x215064u;
            // 0x215064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x215068u;
        goto label_215068;
    }
    ctx->pc = 0x215060u;
    SET_GPR_U32(ctx, 31, 0x215068u);
    ctx->pc = 0x215064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215060u;
            // 0x215064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D860u;
    if (runtime->hasFunction(0x20D860u)) {
        auto targetFn = runtime->lookupFunction(0x20D860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215068u; }
        if (ctx->pc != 0x215068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NormalGetNextRot__9CAquaFishFv_0x20d860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215068u; }
        if (ctx->pc != 0x215068u) { return; }
    }
    ctx->pc = 0x215068u;
label_215068:
    // 0x215068: 0x3c034160  lui         $v1, 0x4160
    ctx->pc = 0x215068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
label_21506c:
    // 0x21506c: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x21506cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
label_215070:
    // 0x215070: 0xae230694  sw          $v1, 0x694($s1)
    ctx->pc = 0x215070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1684), GPR_U32(ctx, 3));
label_215074:
    // 0x215074: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x215074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_215078:
    // 0x215078: 0x1000016b  b           . + 4 + (0x16B << 2)
label_21507c:
    if (ctx->pc == 0x21507Cu) {
        ctx->pc = 0x21507Cu;
            // 0x21507c: 0xae220690  sw          $v0, 0x690($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x215080u;
        goto label_215080;
    }
    ctx->pc = 0x215078u;
    {
        const bool branch_taken_0x215078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21507Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215078u;
            // 0x21507c: 0xae220690  sw          $v0, 0x690($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215078) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x215080u;
label_215080:
    // 0x215080: 0x3c0242ca  lui         $v0, 0x42CA
    ctx->pc = 0x215080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17098 << 16));
label_215084:
    // 0x215084: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x215084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_215088:
    // 0x215088: 0xc0941c0  jal         func_250700
label_21508c:
    if (ctx->pc == 0x21508Cu) {
        ctx->pc = 0x215090u;
        goto label_215090;
    }
    ctx->pc = 0x215088u;
    SET_GPR_U32(ctx, 31, 0x215090u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215090u; }
        if (ctx->pc != 0x215090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215090u; }
        if (ctx->pc != 0x215090u) { return; }
    }
    ctx->pc = 0x215090u;
label_215090:
    // 0x215090: 0xc0a248c  jal         func_289230
label_215094:
    if (ctx->pc == 0x215094u) {
        ctx->pc = 0x215094u;
            // 0x215094: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x215098u;
        goto label_215098;
    }
    ctx->pc = 0x215090u;
    SET_GPR_U32(ctx, 31, 0x215098u);
    ctx->pc = 0x215094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215090u;
            // 0x215094: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215098u; }
        if (ctx->pc != 0x215098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215098u; }
        if (ctx->pc != 0x215098u) { return; }
    }
    ctx->pc = 0x215098u;
label_215098:
    // 0x215098: 0x28410046  slti        $at, $v0, 0x46
    ctx->pc = 0x215098u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)70) ? 1 : 0);
label_21509c:
    // 0x21509c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_2150a0:
    if (ctx->pc == 0x2150A0u) {
        ctx->pc = 0x2150A4u;
        goto label_2150a4;
    }
    ctx->pc = 0x21509Cu;
    {
        const bool branch_taken_0x21509c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21509c) {
            ctx->pc = 0x2150B0u;
            goto label_2150b0;
        }
    }
    ctx->pc = 0x2150A4u;
label_2150a4:
    // 0x2150a4: 0xae200680  sw          $zero, 0x680($s1)
    ctx->pc = 0x2150a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 0));
label_2150a8:
    // 0x2150a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2150ac:
    if (ctx->pc == 0x2150ACu) {
        ctx->pc = 0x2150ACu;
            // 0x2150ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2150B0u;
        goto label_2150b0;
    }
    ctx->pc = 0x2150A8u;
    {
        const bool branch_taken_0x2150a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2150ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2150A8u;
            // 0x2150ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2150a8) {
            ctx->pc = 0x2150B8u;
            goto label_2150b8;
        }
    }
    ctx->pc = 0x2150B0u;
label_2150b0:
    // 0x2150b0: 0xae200680  sw          $zero, 0x680($s1)
    ctx->pc = 0x2150b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 0));
label_2150b4:
    // 0x2150b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2150b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2150b8:
    // 0x2150b8: 0x1000015b  b           . + 4 + (0x15B << 2)
label_2150bc:
    if (ctx->pc == 0x2150BCu) {
        ctx->pc = 0x2150BCu;
            // 0x2150bc: 0xae200680  sw          $zero, 0x680($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 0));
        ctx->pc = 0x2150C0u;
        goto label_2150c0;
    }
    ctx->pc = 0x2150B8u;
    {
        const bool branch_taken_0x2150b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2150BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2150B8u;
            // 0x2150bc: 0xae200680  sw          $zero, 0x680($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2150b8) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x2150C0u;
label_2150c0:
    // 0x2150c0: 0xc083838  jal         func_20E0E0
label_2150c4:
    if (ctx->pc == 0x2150C4u) {
        ctx->pc = 0x2150C4u;
            // 0x2150c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2150C8u;
        goto label_2150c8;
    }
    ctx->pc = 0x2150C0u;
    SET_GPR_U32(ctx, 31, 0x2150C8u);
    ctx->pc = 0x2150C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2150C0u;
            // 0x2150c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E0E0u;
    if (runtime->hasFunction(0x20E0E0u)) {
        auto targetFn = runtime->lookupFunction(0x20E0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2150C8u; }
        if (ctx->pc != 0x2150C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveActionBattle__9CAquaFishFv_0x20e0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2150C8u; }
        if (ctx->pc != 0x2150C8u) { return; }
    }
    ctx->pc = 0x2150C8u;
label_2150c8:
    // 0x2150c8: 0x8e2206a8  lw          $v0, 0x6A8($s1)
    ctx->pc = 0x2150c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
label_2150cc:
    // 0x2150cc: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_2150d0:
    if (ctx->pc == 0x2150D0u) {
        ctx->pc = 0x2150D4u;
        goto label_2150d4;
    }
    ctx->pc = 0x2150CCu;
    {
        const bool branch_taken_0x2150cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2150cc) {
            ctx->pc = 0x2150F0u;
            goto label_2150f0;
        }
    }
    ctx->pc = 0x2150D4u;
label_2150d4:
    // 0x2150d4: 0xae2006f4  sw          $zero, 0x6F4($s1)
    ctx->pc = 0x2150d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1780), GPR_U32(ctx, 0));
label_2150d8:
    // 0x2150d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2150d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2150dc:
    // 0x2150dc: 0xa62006c0  sh          $zero, 0x6C0($s1)
    ctx->pc = 0x2150dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1728), (uint16_t)GPR_U32(ctx, 0));
label_2150e0:
    // 0x2150e0: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x2150e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2150e4:
    // 0x2150e4: 0xa6600008  sh          $zero, 0x8($s3)
    ctx->pc = 0x2150e4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 0));
label_2150e8:
    // 0x2150e8: 0x10000010  b           . + 4 + (0x10 << 2)
label_2150ec:
    if (ctx->pc == 0x2150ECu) {
        ctx->pc = 0x2150ECu;
            // 0x2150ec: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x2150F0u;
        goto label_2150f0;
    }
    ctx->pc = 0x2150E8u;
    {
        const bool branch_taken_0x2150e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2150ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2150E8u;
            // 0x2150ec: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2150e8) {
            ctx->pc = 0x21512Cu;
            goto label_21512c;
        }
    }
    ctx->pc = 0x2150F0u;
label_2150f0:
    // 0x2150f0: 0x8e340930  lw          $s4, 0x930($s1)
    ctx->pc = 0x2150f0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2352)));
label_2150f4:
    // 0x2150f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2150f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2150f8:
    // 0x2150f8: 0xc083584  jal         func_20D610
label_2150fc:
    if (ctx->pc == 0x2150FCu) {
        ctx->pc = 0x2150FCu;
            // 0x2150fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x215100u;
        goto label_215100;
    }
    ctx->pc = 0x2150F8u;
    SET_GPR_U32(ctx, 31, 0x215100u);
    ctx->pc = 0x2150FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2150F8u;
            // 0x2150fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D610u;
    if (runtime->hasFunction(0x20D610u)) {
        auto targetFn = runtime->lookupFunction(0x20D610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215100u; }
        if (ctx->pc != 0x215100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFatigue__9CAquaFishFi_0x20d610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215100u; }
        if (ctx->pc != 0x215100u) { return; }
    }
    ctx->pc = 0x215100u;
label_215100:
    // 0x215100: 0x54082a  slt         $at, $v0, $s4
    ctx->pc = 0x215100u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_215104:
    // 0x215104: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_215108:
    if (ctx->pc == 0x215108u) {
        ctx->pc = 0x215108u;
            // 0x215108: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x21510Cu;
        goto label_21510c;
    }
    ctx->pc = 0x215104u;
    {
        const bool branch_taken_0x215104 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x215108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215104u;
            // 0x215108: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215104) {
            ctx->pc = 0x215130u;
            goto label_215130;
        }
    }
    ctx->pc = 0x21510Cu;
label_21510c:
    // 0x21510c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215110:
    // 0x215110: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x215110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_215114:
    // 0x215114: 0xa62206b0  sh          $v0, 0x6B0($s1)
    ctx->pc = 0x215114u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1712), (uint16_t)GPR_U32(ctx, 2));
label_215118:
    // 0x215118: 0xae2006a8  sw          $zero, 0x6A8($s1)
    ctx->pc = 0x215118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 0));
label_21511c:
    // 0x21511c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_215120:
    // 0x215120: 0xa62006c0  sh          $zero, 0x6C0($s1)
    ctx->pc = 0x215120u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1728), (uint16_t)GPR_U32(ctx, 0));
label_215124:
    // 0x215124: 0xa6600008  sh          $zero, 0x8($s3)
    ctx->pc = 0x215124u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 0));
label_215128:
    // 0x215128: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x215128u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_21512c:
    // 0x21512c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x21512cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_215130:
    // 0x215130: 0xc0941b0  jal         func_2506C0
label_215134:
    if (ctx->pc == 0x215134u) {
        ctx->pc = 0x215138u;
        goto label_215138;
    }
    ctx->pc = 0x215130u;
    SET_GPR_U32(ctx, 31, 0x215138u);
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215138u; }
        if (ctx->pc != 0x215138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215138u; }
        if (ctx->pc != 0x215138u) { return; }
    }
    ctx->pc = 0x215138u;
label_215138:
    // 0x215138: 0x2841000f  slti        $at, $v0, 0xF
    ctx->pc = 0x215138u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_21513c:
    // 0x21513c: 0x1020013a  beqz        $at, . + 4 + (0x13A << 2)
label_215140:
    if (ctx->pc == 0x215140u) {
        ctx->pc = 0x215144u;
        goto label_215144;
    }
    ctx->pc = 0x21513Cu;
    {
        const bool branch_taken_0x21513c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21513c) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x215144u;
label_215144:
    // 0x215144: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_215148:
    // 0x215148: 0xc065d30  jal         func_1974C0
label_21514c:
    if (ctx->pc == 0x21514Cu) {
        ctx->pc = 0x21514Cu;
            // 0x21514c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x215150u;
        goto label_215150;
    }
    ctx->pc = 0x215148u;
    SET_GPR_U32(ctx, 31, 0x215150u);
    ctx->pc = 0x21514Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215148u;
            // 0x21514c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1974C0u;
    if (runtime->hasFunction(0x1974C0u)) {
        auto targetFn = runtime->lookupFunction(0x1974C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215150u; }
        if (ctx->pc != 0x215150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFishHp__13CGameDataUsedFi_0x1974c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215150u; }
        if (ctx->pc != 0x215150u) { return; }
    }
    ctx->pc = 0x215150u;
label_215150:
    // 0x215150: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x215150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_215154:
    // 0x215154: 0xc0941b0  jal         func_2506C0
label_215158:
    if (ctx->pc == 0x215158u) {
        ctx->pc = 0x215158u;
            // 0x215158: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x21515Cu;
        goto label_21515c;
    }
    ctx->pc = 0x215154u;
    SET_GPR_U32(ctx, 31, 0x21515Cu);
    ctx->pc = 0x215158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215154u;
            // 0x215158: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21515Cu; }
        if (ctx->pc != 0x21515Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21515Cu; }
        if (ctx->pc != 0x21515Cu) { return; }
    }
    ctx->pc = 0x21515Cu;
label_21515c:
    // 0x21515c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x21515cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_215160:
    // 0x215160: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x215160u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_215164:
    // 0x215164: 0x10200130  beqz        $at, . + 4 + (0x130 << 2)
label_215168:
    if (ctx->pc == 0x215168u) {
        ctx->pc = 0x21516Cu;
        goto label_21516c;
    }
    ctx->pc = 0x215164u;
    {
        const bool branch_taken_0x215164 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x215164) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x21516Cu;
label_21516c:
    // 0x21516c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215170:
    // 0x215170: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x215170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_215174:
    // 0x215174: 0xa62206b0  sh          $v0, 0x6B0($s1)
    ctx->pc = 0x215174u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1712), (uint16_t)GPR_U32(ctx, 2));
label_215178:
    // 0x215178: 0xae2006a8  sw          $zero, 0x6A8($s1)
    ctx->pc = 0x215178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 0));
label_21517c:
    // 0x21517c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21517cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_215180:
    // 0x215180: 0xa62006c0  sh          $zero, 0x6C0($s1)
    ctx->pc = 0x215180u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1728), (uint16_t)GPR_U32(ctx, 0));
label_215184:
    // 0x215184: 0xa6600008  sh          $zero, 0x8($s3)
    ctx->pc = 0x215184u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 0));
label_215188:
    // 0x215188: 0x10000127  b           . + 4 + (0x127 << 2)
label_21518c:
    if (ctx->pc == 0x21518Cu) {
        ctx->pc = 0x21518Cu;
            // 0x21518c: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x215190u;
        goto label_215190;
    }
    ctx->pc = 0x215188u;
    {
        const bool branch_taken_0x215188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21518Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215188u;
            // 0x21518c: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215188) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x215190u;
label_215190:
    // 0x215190: 0x862306c0  lh          $v1, 0x6C0($s1)
    ctx->pc = 0x215190u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1728)));
label_215194:
    // 0x215194: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x215194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_215198:
    // 0x215198: 0x14620037  bne         $v1, $v0, . + 4 + (0x37 << 2)
label_21519c:
    if (ctx->pc == 0x21519Cu) {
        ctx->pc = 0x21519Cu;
            // 0x21519c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2151A0u;
        goto label_2151a0;
    }
    ctx->pc = 0x215198u;
    {
        const bool branch_taken_0x215198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21519Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215198u;
            // 0x21519c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215198) {
            ctx->pc = 0x215278u;
            goto label_215278;
        }
    }
    ctx->pc = 0x2151A0u;
label_2151a0:
    // 0x2151a0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2151a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2151a4:
    // 0x2151a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2151a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2151a8:
    // 0x2151a8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2151a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2151ac:
    // 0x2151ac: 0x320f809  jalr        $t9
label_2151b0:
    if (ctx->pc == 0x2151B0u) {
        ctx->pc = 0x2151B0u;
            // 0x2151b0: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x2151B4u;
        goto label_2151b4;
    }
    ctx->pc = 0x2151ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2151B4u);
        ctx->pc = 0x2151B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2151ACu;
            // 0x2151b0: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2151B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2151B4u; }
            if (ctx->pc != 0x2151B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2151B4u;
label_2151b4:
    // 0x2151b4: 0x26240660  addiu       $a0, $s1, 0x660
    ctx->pc = 0x2151b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
label_2151b8:
    // 0x2151b8: 0xc04c018  jal         func_130060
label_2151bc:
    if (ctx->pc == 0x2151BCu) {
        ctx->pc = 0x2151BCu;
            // 0x2151bc: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x2151C0u;
        goto label_2151c0;
    }
    ctx->pc = 0x2151B8u;
    SET_GPR_U32(ctx, 31, 0x2151C0u);
    ctx->pc = 0x2151BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2151B8u;
            // 0x2151bc: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2151C0u; }
        if (ctx->pc != 0x2151C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2151C0u; }
        if (ctx->pc != 0x2151C0u) { return; }
    }
    ctx->pc = 0x2151C0u;
label_2151c0:
    // 0x2151c0: 0x3c023df5  lui         $v0, 0x3DF5
    ctx->pc = 0x2151c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15861 << 16));
label_2151c4:
    // 0x2151c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2151c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2151c8:
    // 0x2151c8: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2151c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_2151cc:
    // 0x2151cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2151ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2151d0:
    // 0x2151d0: 0xc083658  jal         func_20D960
label_2151d4:
    if (ctx->pc == 0x2151D4u) {
        ctx->pc = 0x2151D4u;
            // 0x2151d4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2151D8u;
        goto label_2151d8;
    }
    ctx->pc = 0x2151D0u;
    SET_GPR_U32(ctx, 31, 0x2151D8u);
    ctx->pc = 0x2151D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2151D0u;
            // 0x2151d4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D960u;
    if (runtime->hasFunction(0x20D960u)) {
        auto targetFn = runtime->lookupFunction(0x20D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2151D8u; }
        if (ctx->pc != 0x2151D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMoveSpeed__9CAquaFishFf_0x20d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2151D8u; }
        if (ctx->pc != 0x2151D8u) { return; }
    }
    ctx->pc = 0x2151D8u;
label_2151d8:
    // 0x2151d8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2151d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2151dc:
    // 0x2151dc: 0xc0835dc  jal         func_20D770
label_2151e0:
    if (ctx->pc == 0x2151E0u) {
        ctx->pc = 0x2151E0u;
            // 0x2151e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2151E4u;
        goto label_2151e4;
    }
    ctx->pc = 0x2151DCu;
    SET_GPR_U32(ctx, 31, 0x2151E4u);
    ctx->pc = 0x2151E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2151DCu;
            // 0x2151e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D770u;
    if (runtime->hasFunction(0x20D770u)) {
        auto targetFn = runtime->lookupFunction(0x20D770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2151E4u; }
        if (ctx->pc != 0x2151E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NormalGetNextVelo__9CAquaFishFf_0x20d770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2151E4u; }
        if (ctx->pc != 0x2151E4u) { return; }
    }
    ctx->pc = 0x2151E4u;
label_2151e4:
    // 0x2151e4: 0xc083618  jal         func_20D860
label_2151e8:
    if (ctx->pc == 0x2151E8u) {
        ctx->pc = 0x2151E8u;
            // 0x2151e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2151ECu;
        goto label_2151ec;
    }
    ctx->pc = 0x2151E4u;
    SET_GPR_U32(ctx, 31, 0x2151ECu);
    ctx->pc = 0x2151E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2151E4u;
            // 0x2151e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D860u;
    if (runtime->hasFunction(0x20D860u)) {
        auto targetFn = runtime->lookupFunction(0x20D860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2151ECu; }
        if (ctx->pc != 0x2151ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NormalGetNextRot__9CAquaFishFv_0x20d860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2151ECu; }
        if (ctx->pc != 0x2151ECu) { return; }
    }
    ctx->pc = 0x2151ECu;
label_2151ec:
    // 0x2151ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2151ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2151f0:
    // 0x2151f0: 0xc065d30  jal         func_1974C0
label_2151f4:
    if (ctx->pc == 0x2151F4u) {
        ctx->pc = 0x2151F4u;
            // 0x2151f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2151F8u;
        goto label_2151f8;
    }
    ctx->pc = 0x2151F0u;
    SET_GPR_U32(ctx, 31, 0x2151F8u);
    ctx->pc = 0x2151F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2151F0u;
            // 0x2151f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1974C0u;
    if (runtime->hasFunction(0x1974C0u)) {
        auto targetFn = runtime->lookupFunction(0x1974C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2151F8u; }
        if (ctx->pc != 0x2151F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFishHp__13CGameDataUsedFi_0x1974c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2151F8u; }
        if (ctx->pc != 0x2151F8u) { return; }
    }
    ctx->pc = 0x2151F8u;
label_2151f8:
    // 0x2151f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2151f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2151fc:
    // 0x2151fc: 0xc083584  jal         func_20D610
label_215200:
    if (ctx->pc == 0x215200u) {
        ctx->pc = 0x215200u;
            // 0x215200: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x215204u;
        goto label_215204;
    }
    ctx->pc = 0x2151FCu;
    SET_GPR_U32(ctx, 31, 0x215204u);
    ctx->pc = 0x215200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2151FCu;
            // 0x215200: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D610u;
    if (runtime->hasFunction(0x20D610u)) {
        auto targetFn = runtime->lookupFunction(0x20D610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215204u; }
        if (ctx->pc != 0x215204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFatigue__9CAquaFishFi_0x20d610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215204u; }
        if (ctx->pc != 0x215204u) { return; }
    }
    ctx->pc = 0x215204u;
label_215204:
    // 0x215204: 0x8e2206a8  lw          $v0, 0x6A8($s1)
    ctx->pc = 0x215204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
label_215208:
    // 0x215208: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x215208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21520c:
    // 0x21520c: 0xae2206a8  sw          $v0, 0x6A8($s1)
    ctx->pc = 0x21520cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 2));
label_215210:
    // 0x215210: 0x8e2206a8  lw          $v0, 0x6A8($s1)
    ctx->pc = 0x215210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
label_215214:
    // 0x215214: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_215218:
    if (ctx->pc == 0x215218u) {
        ctx->pc = 0x215218u;
            // 0x215218: 0x3c024059  lui         $v0, 0x4059 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16473 << 16));
        ctx->pc = 0x21521Cu;
        goto label_21521c;
    }
    ctx->pc = 0x215214u;
    {
        const bool branch_taken_0x215214 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x215218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215214u;
            // 0x215218: 0x3c024059  lui         $v0, 0x4059 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16473 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215214) {
            ctx->pc = 0x215224u;
            goto label_215224;
        }
    }
    ctx->pc = 0x21521Cu;
label_21521c:
    // 0x21521c: 0xae2006a8  sw          $zero, 0x6A8($s1)
    ctx->pc = 0x21521cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 0));
label_215220:
    // 0x215220: 0x3c024059  lui         $v0, 0x4059
    ctx->pc = 0x215220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16473 << 16));
label_215224:
    // 0x215224: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x215224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_215228:
    // 0x215228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21522c:
    // 0x21522c: 0x0  nop
    ctx->pc = 0x21522cu;
    // NOP
label_215230:
    // 0x215230: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x215230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_215234:
    // 0x215234: 0x0  nop
    ctx->pc = 0x215234u;
    // NOP
label_215238:
    // 0x215238: 0x45000031  bc1f        . + 4 + (0x31 << 2)
label_21523c:
    if (ctx->pc == 0x21523Cu) {
        ctx->pc = 0x215240u;
        goto label_215240;
    }
    ctx->pc = 0x215238u;
    {
        const bool branch_taken_0x215238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215238) {
            ctx->pc = 0x215300u;
            goto label_215300;
        }
    }
    ctx->pc = 0x215240u;
label_215240:
    // 0x215240: 0x8e220924  lw          $v0, 0x924($s1)
    ctx->pc = 0x215240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2340)));
label_215244:
    // 0x215244: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x215244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_215248:
    // 0x215248: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_21524c:
    if (ctx->pc == 0x21524Cu) {
        ctx->pc = 0x215250u;
        goto label_215250;
    }
    ctx->pc = 0x215248u;
    {
        const bool branch_taken_0x215248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215248) {
            ctx->pc = 0x215300u;
            goto label_215300;
        }
    }
    ctx->pc = 0x215250u;
label_215250:
    // 0x215250: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x215250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_215254:
    // 0x215254: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x215254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_215258:
    // 0x215258: 0xa62306c0  sh          $v1, 0x6C0($s1)
    ctx->pc = 0x215258u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1728), (uint16_t)GPR_U32(ctx, 3));
label_21525c:
    // 0x21525c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21525cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_215260:
    // 0x215260: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x215260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_215264:
    // 0x215264: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x215264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_215268:
    // 0x215268: 0x320f809  jalr        $t9
label_21526c:
    if (ctx->pc == 0x21526Cu) {
        ctx->pc = 0x21526Cu;
            // 0x21526c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x215270u;
        goto label_215270;
    }
    ctx->pc = 0x215268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x215270u);
        ctx->pc = 0x21526Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215268u;
            // 0x21526c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x215270u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x215270u; }
            if (ctx->pc != 0x215270u) { return; }
        }
        }
    }
    ctx->pc = 0x215270u;
label_215270:
    // 0x215270: 0x10000024  b           . + 4 + (0x24 << 2)
label_215274:
    if (ctx->pc == 0x215274u) {
        ctx->pc = 0x215274u;
            // 0x215274: 0x8e2206a8  lw          $v0, 0x6A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
        ctx->pc = 0x215278u;
        goto label_215278;
    }
    ctx->pc = 0x215270u;
    {
        const bool branch_taken_0x215270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215270u;
            // 0x215274: 0x8e2206a8  lw          $v0, 0x6A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215270) {
            ctx->pc = 0x215304u;
            goto label_215304;
        }
    }
    ctx->pc = 0x215278u;
label_215278:
    // 0x215278: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x215278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21527c:
    // 0x21527c: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_215280:
    if (ctx->pc == 0x215280u) {
        ctx->pc = 0x215280u;
            // 0x215280: 0x2404012c  addiu       $a0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->pc = 0x215284u;
        goto label_215284;
    }
    ctx->pc = 0x21527Cu;
    {
        const bool branch_taken_0x21527c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x215280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21527Cu;
            // 0x215280: 0x2404012c  addiu       $a0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21527c) {
            ctx->pc = 0x2152E0u;
            goto label_2152e0;
        }
    }
    ctx->pc = 0x215284u;
label_215284:
    // 0x215284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_215288:
    // 0x215288: 0xc083584  jal         func_20D610
label_21528c:
    if (ctx->pc == 0x21528Cu) {
        ctx->pc = 0x21528Cu;
            // 0x21528c: 0x2405fffc  addiu       $a1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->pc = 0x215290u;
        goto label_215290;
    }
    ctx->pc = 0x215288u;
    SET_GPR_U32(ctx, 31, 0x215290u);
    ctx->pc = 0x21528Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215288u;
            // 0x21528c: 0x2405fffc  addiu       $a1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D610u;
    if (runtime->hasFunction(0x20D610u)) {
        auto targetFn = runtime->lookupFunction(0x20D610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215290u; }
        if (ctx->pc != 0x215290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFatigue__9CAquaFishFi_0x20d610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215290u; }
        if (ctx->pc != 0x215290u) { return; }
    }
    ctx->pc = 0x215290u;
label_215290:
    // 0x215290: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_215294:
    // 0x215294: 0xc065d30  jal         func_1974C0
label_215298:
    if (ctx->pc == 0x215298u) {
        ctx->pc = 0x215298u;
            // 0x215298: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x21529Cu;
        goto label_21529c;
    }
    ctx->pc = 0x215294u;
    SET_GPR_U32(ctx, 31, 0x21529Cu);
    ctx->pc = 0x215298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215294u;
            // 0x215298: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1974C0u;
    if (runtime->hasFunction(0x1974C0u)) {
        auto targetFn = runtime->lookupFunction(0x1974C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21529Cu; }
        if (ctx->pc != 0x21529Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFishHp__13CGameDataUsedFi_0x1974c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21529Cu; }
        if (ctx->pc != 0x21529Cu) { return; }
    }
    ctx->pc = 0x21529Cu;
label_21529c:
    // 0x21529c: 0xc04bc8c  jal         func_12F230
label_2152a0:
    if (ctx->pc == 0x2152A0u) {
        ctx->pc = 0x2152A0u;
            // 0x2152a0: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->pc = 0x2152A4u;
        goto label_2152a4;
    }
    ctx->pc = 0x21529Cu;
    SET_GPR_U32(ctx, 31, 0x2152A4u);
    ctx->pc = 0x2152A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21529Cu;
            // 0x2152a0: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2152A4u; }
        if (ctx->pc != 0x2152A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2152A4u; }
        if (ctx->pc != 0x2152A4u) { return; }
    }
    ctx->pc = 0x2152A4u;
label_2152a4:
    // 0x2152a4: 0x8e220924  lw          $v0, 0x924($s1)
    ctx->pc = 0x2152a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2340)));
label_2152a8:
    // 0x2152a8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2152a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2152ac:
    // 0x2152ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2152b0:
    if (ctx->pc == 0x2152B0u) {
        ctx->pc = 0x2152B4u;
        goto label_2152b4;
    }
    ctx->pc = 0x2152ACu;
    {
        const bool branch_taken_0x2152ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2152ac) {
            ctx->pc = 0x2152BCu;
            goto label_2152bc;
        }
    }
    ctx->pc = 0x2152B4u;
label_2152b4:
    // 0x2152b4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2152b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2152b8:
    // 0x2152b8: 0xa62206ae  sh          $v0, 0x6AE($s1)
    ctx->pc = 0x2152b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1710), (uint16_t)GPR_U32(ctx, 2));
label_2152bc:
    // 0x2152bc: 0x8e220930  lw          $v0, 0x930($s1)
    ctx->pc = 0x2152bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2352)));
label_2152c0:
    // 0x2152c0: 0x8e23092c  lw          $v1, 0x92C($s1)
    ctx->pc = 0x2152c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2348)));
label_2152c4:
    // 0x2152c4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2152c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2152c8:
    // 0x2152c8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2152c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2152cc:
    // 0x2152cc: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_2152d0:
    if (ctx->pc == 0x2152D0u) {
        ctx->pc = 0x2152D4u;
        goto label_2152d4;
    }
    ctx->pc = 0x2152CCu;
    {
        const bool branch_taken_0x2152cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2152cc) {
            ctx->pc = 0x215300u;
            goto label_215300;
        }
    }
    ctx->pc = 0x2152D4u;
label_2152d4:
    // 0x2152d4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2152d8:
    if (ctx->pc == 0x2152D8u) {
        ctx->pc = 0x2152D8u;
            // 0x2152d8: 0x64130001  daddiu      $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x2152DCu;
        goto label_2152dc;
    }
    ctx->pc = 0x2152D4u;
    {
        const bool branch_taken_0x2152d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2152D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2152D4u;
            // 0x2152d8: 0x64130001  daddiu      $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2152d4) {
            ctx->pc = 0x215300u;
            goto label_215300;
        }
    }
    ctx->pc = 0x2152DCu;
label_2152dc:
    // 0x2152dc: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x2152dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_2152e0:
    // 0x2152e0: 0xc0941b0  jal         func_2506C0
label_2152e4:
    if (ctx->pc == 0x2152E4u) {
        ctx->pc = 0x2152E8u;
        goto label_2152e8;
    }
    ctx->pc = 0x2152E0u;
    SET_GPR_U32(ctx, 31, 0x2152E8u);
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2152E8u; }
        if (ctx->pc != 0x2152E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2152E8u; }
        if (ctx->pc != 0x2152E8u) { return; }
    }
    ctx->pc = 0x2152E8u;
label_2152e8:
    // 0x2152e8: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x2152e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_2152ec:
    // 0x2152ec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_2152f0:
    if (ctx->pc == 0x2152F0u) {
        ctx->pc = 0x2152F4u;
        goto label_2152f4;
    }
    ctx->pc = 0x2152ECu;
    {
        const bool branch_taken_0x2152ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2152ec) {
            ctx->pc = 0x215300u;
            goto label_215300;
        }
    }
    ctx->pc = 0x2152F4u;
label_2152f4:
    // 0x2152f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2152f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2152f8:
    // 0x2152f8: 0xc065d30  jal         func_1974C0
label_2152fc:
    if (ctx->pc == 0x2152FCu) {
        ctx->pc = 0x2152FCu;
            // 0x2152fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x215300u;
        goto label_215300;
    }
    ctx->pc = 0x2152F8u;
    SET_GPR_U32(ctx, 31, 0x215300u);
    ctx->pc = 0x2152FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2152F8u;
            // 0x2152fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1974C0u;
    if (runtime->hasFunction(0x1974C0u)) {
        auto targetFn = runtime->lookupFunction(0x1974C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215300u; }
        if (ctx->pc != 0x215300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFishHp__13CGameDataUsedFi_0x1974c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215300u; }
        if (ctx->pc != 0x215300u) { return; }
    }
    ctx->pc = 0x215300u;
label_215300:
    // 0x215300: 0x8e2206a8  lw          $v0, 0x6A8($s1)
    ctx->pc = 0x215300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
label_215304:
    // 0x215304: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x215304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_215308:
    // 0x215308: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_21530c:
    if (ctx->pc == 0x21530Cu) {
        ctx->pc = 0x21530Cu;
            // 0x21530c: 0xae2206a8  sw          $v0, 0x6A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 2));
        ctx->pc = 0x215310u;
        goto label_215310;
    }
    ctx->pc = 0x215308u;
    {
        const bool branch_taken_0x215308 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x21530Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215308u;
            // 0x21530c: 0xae2206a8  sw          $v0, 0x6A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215308) {
            ctx->pc = 0x21531Cu;
            goto label_21531c;
        }
    }
    ctx->pc = 0x215310u;
label_215310:
    // 0x215310: 0x8e2206a8  lw          $v0, 0x6A8($s1)
    ctx->pc = 0x215310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
label_215314:
    // 0x215314: 0x1c4000c4  bgtz        $v0, . + 4 + (0xC4 << 2)
label_215318:
    if (ctx->pc == 0x215318u) {
        ctx->pc = 0x21531Cu;
        goto label_21531c;
    }
    ctx->pc = 0x215314u;
    {
        const bool branch_taken_0x215314 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x215314) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x21531Cu;
label_21531c:
    // 0x21531c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x21531cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_215320:
    // 0x215320: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x215320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_215324:
    // 0x215324: 0xc085230  jal         func_2148C0
label_215328:
    if (ctx->pc == 0x215328u) {
        ctx->pc = 0x215328u;
            // 0x215328: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x21532Cu;
        goto label_21532c;
    }
    ctx->pc = 0x215324u;
    SET_GPR_U32(ctx, 31, 0x21532Cu);
    ctx->pc = 0x215328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215324u;
            // 0x215328: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2148C0u;
    if (runtime->hasFunction(0x2148C0u)) {
        auto targetFn = runtime->lookupFunction(0x2148C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21532Cu; }
        if (ctx->pc != 0x21532Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleTarget__9CAquariumFi_0x2148c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21532Cu; }
        if (ctx->pc != 0x21532Cu) { return; }
    }
    ctx->pc = 0x21532Cu;
label_21532c:
    // 0x21532c: 0x27a300d8  addiu       $v1, $sp, 0xD8
    ctx->pc = 0x21532cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_215330:
    // 0x215330: 0x27a400d4  addiu       $a0, $sp, 0xD4
    ctx->pc = 0x215330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_215334:
    // 0x215334: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x215334u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_215338:
    // 0x215338: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x215338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_21533c:
    // 0x21533c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x21533cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_215340:
    // 0x215340: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x215340u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_215344:
    // 0x215344: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_215348:
    if (ctx->pc == 0x215348u) {
        ctx->pc = 0x21534Cu;
        goto label_21534c;
    }
    ctx->pc = 0x215344u;
    {
        const bool branch_taken_0x215344 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x215344) {
            ctx->pc = 0x21535Cu;
            goto label_21535c;
        }
    }
    ctx->pc = 0x21534Cu;
label_21534c:
    // 0x21534c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21534cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_215350:
    // 0x215350: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x215350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_215354:
    // 0x215354: 0x8c4202b4  lw          $v0, 0x2B4($v0)
    ctx->pc = 0x215354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_215358:
    // 0x215358: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x215358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21535c:
    // 0x21535c: 0xae2006a8  sw          $zero, 0x6A8($s1)
    ctx->pc = 0x21535cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 0));
label_215360:
    // 0x215360: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x215360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
label_215364:
    // 0x215364: 0xae220694  sw          $v0, 0x694($s1)
    ctx->pc = 0x215364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1684), GPR_U32(ctx, 2));
label_215368:
    // 0x215368: 0x100000af  b           . + 4 + (0xAF << 2)
label_21536c:
    if (ctx->pc == 0x21536Cu) {
        ctx->pc = 0x21536Cu;
            // 0x21536c: 0xa62006c0  sh          $zero, 0x6C0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1728), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x215370u;
        goto label_215370;
    }
    ctx->pc = 0x215368u;
    {
        const bool branch_taken_0x215368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21536Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215368u;
            // 0x21536c: 0xa62006c0  sh          $zero, 0x6C0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1728), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215368) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x215370u;
label_215370:
    // 0x215370: 0x82a20035  lb          $v0, 0x35($s5)
    ctx->pc = 0x215370u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
label_215374:
    // 0x215374: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x215374u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_215378:
    // 0x215378: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_21537c:
    if (ctx->pc == 0x21537Cu) {
        ctx->pc = 0x21537Cu;
            // 0x21537c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x215380u;
        goto label_215380;
    }
    ctx->pc = 0x215378u;
    {
        const bool branch_taken_0x215378 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21537Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215378u;
            // 0x21537c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215378) {
            ctx->pc = 0x21539Cu;
            goto label_21539c;
        }
    }
    ctx->pc = 0x215380u;
label_215380:
    // 0x215380: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x215380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_215384:
    // 0x215384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215388:
    // 0x215388: 0xa62306ac  sh          $v1, 0x6AC($s1)
    ctx->pc = 0x215388u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1708), (uint16_t)GPR_U32(ctx, 3));
label_21538c:
    // 0x21538c: 0xa62206ae  sh          $v0, 0x6AE($s1)
    ctx->pc = 0x21538cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1710), (uint16_t)GPR_U32(ctx, 2));
label_215390:
    // 0x215390: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_215394:
    if (ctx->pc == 0x215394u) {
        ctx->pc = 0x215394u;
            // 0x215394: 0xae2006a8  sw          $zero, 0x6A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 0));
        ctx->pc = 0x215398u;
        goto label_215398;
    }
    ctx->pc = 0x215390u;
    {
        const bool branch_taken_0x215390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215390u;
            // 0x215394: 0xae2006a8  sw          $zero, 0x6A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215390) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x215398u;
label_215398:
    // 0x215398: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x215398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21539c:
    // 0x21539c: 0xc085230  jal         func_2148C0
label_2153a0:
    if (ctx->pc == 0x2153A0u) {
        ctx->pc = 0x2153A0u;
            // 0x2153a0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2153A4u;
        goto label_2153a4;
    }
    ctx->pc = 0x21539Cu;
    SET_GPR_U32(ctx, 31, 0x2153A4u);
    ctx->pc = 0x2153A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21539Cu;
            // 0x2153a0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2148C0u;
    if (runtime->hasFunction(0x2148C0u)) {
        auto targetFn = runtime->lookupFunction(0x2148C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2153A4u; }
        if (ctx->pc != 0x2153A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleTarget__9CAquariumFi_0x2148c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2153A4u; }
        if (ctx->pc != 0x2153A4u) { return; }
    }
    ctx->pc = 0x2153A4u;
label_2153a4:
    // 0x2153a4: 0xa62206ac  sh          $v0, 0x6AC($s1)
    ctx->pc = 0x2153a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1708), (uint16_t)GPR_U32(ctx, 2));
label_2153a8:
    // 0x2153a8: 0x862206ac  lh          $v0, 0x6AC($s1)
    ctx->pc = 0x2153a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1708)));
label_2153ac:
    // 0x2153ac: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_2153b0:
    if (ctx->pc == 0x2153B0u) {
        ctx->pc = 0x2153B4u;
        goto label_2153b4;
    }
    ctx->pc = 0x2153ACu;
    {
        const bool branch_taken_0x2153ac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2153ac) {
            ctx->pc = 0x2153C4u;
            goto label_2153c4;
        }
    }
    ctx->pc = 0x2153B4u;
label_2153b4:
    // 0x2153b4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2153b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2153b8:
    // 0x2153b8: 0xa62206ae  sh          $v0, 0x6AE($s1)
    ctx->pc = 0x2153b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1710), (uint16_t)GPR_U32(ctx, 2));
label_2153bc:
    // 0x2153bc: 0x1000009a  b           . + 4 + (0x9A << 2)
label_2153c0:
    if (ctx->pc == 0x2153C0u) {
        ctx->pc = 0x2153C0u;
            // 0x2153c0: 0xae2006a8  sw          $zero, 0x6A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 0));
        ctx->pc = 0x2153C4u;
        goto label_2153c4;
    }
    ctx->pc = 0x2153BCu;
    {
        const bool branch_taken_0x2153bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2153C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2153BCu;
            // 0x2153c0: 0xae2006a8  sw          $zero, 0x6A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153bc) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x2153C4u;
label_2153c4:
    // 0x2153c4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2153c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2153c8:
    // 0x2153c8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2153c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2153cc:
    // 0x2153cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2153ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2153d0:
    // 0x2153d0: 0x24a59dc0  addiu       $a1, $a1, -0x6240
    ctx->pc = 0x2153d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942144));
label_2153d4:
    // 0x2153d4: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2153d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2153d8:
    // 0x2153d8: 0x320f809  jalr        $t9
label_2153dc:
    if (ctx->pc == 0x2153DCu) {
        ctx->pc = 0x2153DCu;
            // 0x2153dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2153E0u;
        goto label_2153e0;
    }
    ctx->pc = 0x2153D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2153E0u);
        ctx->pc = 0x2153DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2153D8u;
            // 0x2153dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2153E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2153E0u; }
            if (ctx->pc != 0x2153E0u) { return; }
        }
        }
    }
    ctx->pc = 0x2153E0u;
label_2153e0:
    // 0x2153e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2153e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2153e4:
    // 0x2153e4: 0x24040065  addiu       $a0, $zero, 0x65
    ctx->pc = 0x2153e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_2153e8:
    // 0x2153e8: 0xc0941b0  jal         func_2506C0
label_2153ec:
    if (ctx->pc == 0x2153ECu) {
        ctx->pc = 0x2153ECu;
            // 0x2153ec: 0xa62206ae  sh          $v0, 0x6AE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1710), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2153F0u;
        goto label_2153f0;
    }
    ctx->pc = 0x2153E8u;
    SET_GPR_U32(ctx, 31, 0x2153F0u);
    ctx->pc = 0x2153ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2153E8u;
            // 0x2153ec: 0xa62206ae  sh          $v0, 0x6AE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1710), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2153F0u; }
        if (ctx->pc != 0x2153F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2153F0u; }
        if (ctx->pc != 0x2153F0u) { return; }
    }
    ctx->pc = 0x2153F0u;
label_2153f0:
    // 0x2153f0: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x2153f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
label_2153f4:
    // 0x2153f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2153f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2153f8:
    // 0x2153f8: 0xae2206a8  sw          $v0, 0x6A8($s1)
    ctx->pc = 0x2153f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 2));
label_2153fc:
    // 0x2153fc: 0xc083bd4  jal         func_20EF50
label_215400:
    if (ctx->pc == 0x215400u) {
        ctx->pc = 0x215400u;
            // 0x215400: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x215404u;
        goto label_215404;
    }
    ctx->pc = 0x2153FCu;
    SET_GPR_U32(ctx, 31, 0x215404u);
    ctx->pc = 0x215400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2153FCu;
            // 0x215400: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20EF50u;
    if (runtime->hasFunction(0x20EF50u)) {
        auto targetFn = runtime->lookupFunction(0x20EF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215404u; }
        if (ctx->pc != 0x215404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartFishEffect__12CAquaFishEffFi_0x20ef50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215404u; }
        if (ctx->pc != 0x215404u) { return; }
    }
    ctx->pc = 0x215404u;
label_215404:
    // 0x215404: 0x10000088  b           . + 4 + (0x88 << 2)
label_215408:
    if (ctx->pc == 0x215408u) {
        ctx->pc = 0x21540Cu;
        goto label_21540c;
    }
    ctx->pc = 0x215404u;
    {
        const bool branch_taken_0x215404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215404) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x21540Cu;
label_21540c:
    // 0x21540c: 0x862206ac  lh          $v0, 0x6AC($s1)
    ctx->pc = 0x21540cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1708)));
label_215410:
    // 0x215410: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x215410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_215414:
    // 0x215414: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x215414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_215418:
    // 0x215418: 0x8c5202b4  lw          $s2, 0x2B4($v0)
    ctx->pc = 0x215418u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_21541c:
    // 0x21541c: 0x1240003d  beqz        $s2, . + 4 + (0x3D << 2)
label_215420:
    if (ctx->pc == 0x215420u) {
        ctx->pc = 0x215424u;
        goto label_215424;
    }
    ctx->pc = 0x21541Cu;
    {
        const bool branch_taken_0x21541c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x21541c) {
            ctx->pc = 0x215514u;
            goto label_215514;
        }
    }
    ctx->pc = 0x215424u;
label_215424:
    // 0x215424: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x215424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_215428:
    // 0x215428: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21542c:
    // 0x21542c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x21542cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_215430:
    // 0x215430: 0x320f809  jalr        $t9
label_215434:
    if (ctx->pc == 0x215434u) {
        ctx->pc = 0x215434u;
            // 0x215434: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x215438u;
        goto label_215438;
    }
    ctx->pc = 0x215430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x215438u);
        ctx->pc = 0x215434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215430u;
            // 0x215434: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x215438u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x215438u; }
            if (ctx->pc != 0x215438u) { return; }
        }
        }
    }
    ctx->pc = 0x215438u;
label_215438:
    // 0x215438: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x215438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21543c:
    // 0x21543c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21543cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_215440:
    // 0x215440: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x215440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_215444:
    // 0x215444: 0x320f809  jalr        $t9
label_215448:
    if (ctx->pc == 0x215448u) {
        ctx->pc = 0x215448u;
            // 0x215448: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x21544Cu;
        goto label_21544c;
    }
    ctx->pc = 0x215444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21544Cu);
        ctx->pc = 0x215448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215444u;
            // 0x215448: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21544Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21544Cu; }
            if (ctx->pc != 0x21544Cu) { return; }
        }
        }
    }
    ctx->pc = 0x21544Cu;
label_21544c:
    // 0x21544c: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x21544cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_215450:
    // 0x215450: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x215450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_215454:
    // 0x215454: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x215454u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_215458:
    // 0x215458: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x215458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_21545c:
    // 0x21545c: 0xc041c3e  jal         func_1070F8
label_215460:
    if (ctx->pc == 0x215460u) {
        ctx->pc = 0x215460u;
            // 0x215460: 0x7e220660  sq          $v0, 0x660($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 1632), GPR_VEC(ctx, 2));
        ctx->pc = 0x215464u;
        goto label_215464;
    }
    ctx->pc = 0x21545Cu;
    SET_GPR_U32(ctx, 31, 0x215464u);
    ctx->pc = 0x215460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21545Cu;
            // 0x215460: 0x7e220660  sq          $v0, 0x660($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 1632), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215464u; }
        if (ctx->pc != 0x215464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215464u; }
        if (ctx->pc != 0x215464u) { return; }
    }
    ctx->pc = 0x215464u;
label_215464:
    // 0x215464: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x215464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_215468:
    // 0x215468: 0xc04c018  jal         func_130060
label_21546c:
    if (ctx->pc == 0x21546Cu) {
        ctx->pc = 0x21546Cu;
            // 0x21546c: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x215470u;
        goto label_215470;
    }
    ctx->pc = 0x215468u;
    SET_GPR_U32(ctx, 31, 0x215470u);
    ctx->pc = 0x21546Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215468u;
            // 0x21546c: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215470u; }
        if (ctx->pc != 0x215470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215470u; }
        if (ctx->pc != 0x215470u) { return; }
    }
    ctx->pc = 0x215470u;
label_215470:
    // 0x215470: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x215470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_215474:
    // 0x215474: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x215474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
label_215478:
    // 0x215478: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x215478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21547c:
    // 0x21547c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x21547cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_215480:
    // 0x215480: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x215480u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_215484:
    // 0x215484: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x215484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_215488:
    // 0x215488: 0x0  nop
    ctx->pc = 0x215488u;
    // NOP
label_21548c:
    // 0x21548c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_215490:
    if (ctx->pc == 0x215490u) {
        ctx->pc = 0x215490u;
            // 0x215490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x215494u;
        goto label_215494;
    }
    ctx->pc = 0x21548Cu;
    {
        const bool branch_taken_0x21548c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21548Cu;
            // 0x215490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21548c) {
            ctx->pc = 0x2154A4u;
            goto label_2154a4;
        }
    }
    ctx->pc = 0x215494u;
label_215494:
    // 0x215494: 0x3c023e05  lui         $v0, 0x3E05
    ctx->pc = 0x215494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15877 << 16));
label_215498:
    // 0x215498: 0x34421eb8  ori         $v0, $v0, 0x1EB8
    ctx->pc = 0x215498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
label_21549c:
    // 0x21549c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21549cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2154a0:
    // 0x2154a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2154a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2154a4:
    // 0x2154a4: 0xc083658  jal         func_20D960
label_2154a8:
    if (ctx->pc == 0x2154A8u) {
        ctx->pc = 0x2154ACu;
        goto label_2154ac;
    }
    ctx->pc = 0x2154A4u;
    SET_GPR_U32(ctx, 31, 0x2154ACu);
    ctx->pc = 0x20D960u;
    if (runtime->hasFunction(0x20D960u)) {
        auto targetFn = runtime->lookupFunction(0x20D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2154ACu; }
        if (ctx->pc != 0x2154ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMoveSpeed__9CAquaFishFf_0x20d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2154ACu; }
        if (ctx->pc != 0x2154ACu) { return; }
    }
    ctx->pc = 0x2154ACu;
label_2154ac:
    // 0x2154ac: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2154acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2154b0:
    // 0x2154b0: 0xc0835dc  jal         func_20D770
label_2154b4:
    if (ctx->pc == 0x2154B4u) {
        ctx->pc = 0x2154B4u;
            // 0x2154b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2154B8u;
        goto label_2154b8;
    }
    ctx->pc = 0x2154B0u;
    SET_GPR_U32(ctx, 31, 0x2154B8u);
    ctx->pc = 0x2154B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2154B0u;
            // 0x2154b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D770u;
    if (runtime->hasFunction(0x20D770u)) {
        auto targetFn = runtime->lookupFunction(0x20D770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2154B8u; }
        if (ctx->pc != 0x2154B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NormalGetNextVelo__9CAquaFishFf_0x20d770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2154B8u; }
        if (ctx->pc != 0x2154B8u) { return; }
    }
    ctx->pc = 0x2154B8u;
label_2154b8:
    // 0x2154b8: 0xc083618  jal         func_20D860
label_2154bc:
    if (ctx->pc == 0x2154BCu) {
        ctx->pc = 0x2154BCu;
            // 0x2154bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2154C0u;
        goto label_2154c0;
    }
    ctx->pc = 0x2154B8u;
    SET_GPR_U32(ctx, 31, 0x2154C0u);
    ctx->pc = 0x2154BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2154B8u;
            // 0x2154bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D860u;
    if (runtime->hasFunction(0x20D860u)) {
        auto targetFn = runtime->lookupFunction(0x20D860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2154C0u; }
        if (ctx->pc != 0x2154C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NormalGetNextRot__9CAquaFishFv_0x20d860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2154C0u; }
        if (ctx->pc != 0x2154C0u) { return; }
    }
    ctx->pc = 0x2154C0u;
label_2154c0:
    // 0x2154c0: 0x8e2206a8  lw          $v0, 0x6A8($s1)
    ctx->pc = 0x2154c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
label_2154c4:
    // 0x2154c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2154c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2154c8:
    // 0x2154c8: 0xae2206a8  sw          $v0, 0x6A8($s1)
    ctx->pc = 0x2154c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 2));
label_2154cc:
    // 0x2154cc: 0x8e2206a8  lw          $v0, 0x6A8($s1)
    ctx->pc = 0x2154ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
label_2154d0:
    // 0x2154d0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_2154d4:
    if (ctx->pc == 0x2154D4u) {
        ctx->pc = 0x2154D8u;
        goto label_2154d8;
    }
    ctx->pc = 0x2154D0u;
    {
        const bool branch_taken_0x2154d0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2154d0) {
            ctx->pc = 0x2154E4u;
            goto label_2154e4;
        }
    }
    ctx->pc = 0x2154D8u;
label_2154d8:
    // 0x2154d8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2154d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2154dc:
    // 0x2154dc: 0xa62206ae  sh          $v0, 0x6AE($s1)
    ctx->pc = 0x2154dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1710), (uint16_t)GPR_U32(ctx, 2));
label_2154e0:
    // 0x2154e0: 0xae2006a8  sw          $zero, 0x6A8($s1)
    ctx->pc = 0x2154e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 0));
label_2154e4:
    // 0x2154e4: 0x8e420938  lw          $v0, 0x938($s2)
    ctx->pc = 0x2154e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2360)));
label_2154e8:
    // 0x2154e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2154ec:
    if (ctx->pc == 0x2154ECu) {
        ctx->pc = 0x2154F0u;
        goto label_2154f0;
    }
    ctx->pc = 0x2154E8u;
    {
        const bool branch_taken_0x2154e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2154e8) {
            ctx->pc = 0x215500u;
            goto label_215500;
        }
    }
    ctx->pc = 0x2154F0u;
label_2154f0:
    // 0x2154f0: 0x80420045  lb          $v0, 0x45($v0)
    ctx->pc = 0x2154f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 69)));
label_2154f4:
    // 0x2154f4: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2154f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2154f8:
    // 0x2154f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2154fc:
    if (ctx->pc == 0x2154FCu) {
        ctx->pc = 0x215500u;
        goto label_215500;
    }
    ctx->pc = 0x2154F8u;
    {
        const bool branch_taken_0x2154f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2154f8) {
            ctx->pc = 0x215510u;
            goto label_215510;
        }
    }
    ctx->pc = 0x215500u;
label_215500:
    // 0x215500: 0x82a20035  lb          $v0, 0x35($s5)
    ctx->pc = 0x215500u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
label_215504:
    // 0x215504: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x215504u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_215508:
    // 0x215508: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_21550c:
    if (ctx->pc == 0x21550Cu) {
        ctx->pc = 0x215510u;
        goto label_215510;
    }
    ctx->pc = 0x215508u;
    {
        const bool branch_taken_0x215508 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x215508) {
            ctx->pc = 0x215514u;
            goto label_215514;
        }
    }
    ctx->pc = 0x215510u;
label_215510:
    // 0x215510: 0xae2006f4  sw          $zero, 0x6F4($s1)
    ctx->pc = 0x215510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1780), GPR_U32(ctx, 0));
label_215514:
    // 0x215514: 0x86820388  lh          $v0, 0x388($s4)
    ctx->pc = 0x215514u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 904)));
label_215518:
    // 0x215518: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_21551c:
    if (ctx->pc == 0x21551Cu) {
        ctx->pc = 0x215520u;
        goto label_215520;
    }
    ctx->pc = 0x215518u;
    {
        const bool branch_taken_0x215518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215518) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x215520u;
label_215520:
    // 0x215520: 0x8e2206f4  lw          $v0, 0x6F4($s1)
    ctx->pc = 0x215520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1780)));
label_215524:
    // 0x215524: 0x284100a1  slti        $at, $v0, 0xA1
    ctx->pc = 0x215524u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)161) ? 1 : 0);
label_215528:
    // 0x215528: 0x1420003f  bnez        $at, . + 4 + (0x3F << 2)
label_21552c:
    if (ctx->pc == 0x21552Cu) {
        ctx->pc = 0x215530u;
        goto label_215530;
    }
    ctx->pc = 0x215528u;
    {
        const bool branch_taken_0x215528 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x215528) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x215530u;
label_215530:
    // 0x215530: 0x8f8391b4  lw          $v1, -0x6E4C($gp)
    ctx->pc = 0x215530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939060)));
label_215534:
    // 0x215534: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x215534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_215538:
    // 0x215538: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x215538u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_21553c:
    // 0x21553c: 0x1420003a  bnez        $at, . + 4 + (0x3A << 2)
label_215540:
    if (ctx->pc == 0x215540u) {
        ctx->pc = 0x215544u;
        goto label_215544;
    }
    ctx->pc = 0x21553Cu;
    {
        const bool branch_taken_0x21553c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21553c) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x215544u;
label_215544:
    // 0x215544: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x215544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_215548:
    // 0x215548: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
label_21554c:
    if (ctx->pc == 0x21554Cu) {
        ctx->pc = 0x215550u;
        goto label_215550;
    }
    ctx->pc = 0x215548u;
    {
        const bool branch_taken_0x215548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x215548) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x215550u;
label_215550:
    // 0x215550: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x215550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_215554:
    // 0x215554: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
label_215558:
    if (ctx->pc == 0x215558u) {
        ctx->pc = 0x21555Cu;
        goto label_21555c;
    }
    ctx->pc = 0x215554u;
    {
        const bool branch_taken_0x215554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x215554) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x21555Cu;
label_21555c:
    // 0x21555c: 0x8e820390  lw          $v0, 0x390($s4)
    ctx->pc = 0x21555cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 912)));
label_215560:
    // 0x215560: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_215564:
    if (ctx->pc == 0x215564u) {
        ctx->pc = 0x215568u;
        goto label_215568;
    }
    ctx->pc = 0x215560u;
    {
        const bool branch_taken_0x215560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215560) {
            ctx->pc = 0x215628u;
            goto label_215628;
        }
    }
    ctx->pc = 0x215568u;
label_215568:
    // 0x215568: 0xa6600008  sh          $zero, 0x8($s3)
    ctx->pc = 0x215568u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 0));
label_21556c:
    // 0x21556c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21556cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_215570:
    // 0x215570: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x215570u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_215574:
    // 0x215574: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x215574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_215578:
    // 0x215578: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x215578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_21557c:
    // 0x21557c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21557cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_215580:
    // 0x215580: 0xc041e96  jal         func_107A58
label_215584:
    if (ctx->pc == 0x215584u) {
        ctx->pc = 0x215584u;
            // 0x215584: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x215588u;
        goto label_215588;
    }
    ctx->pc = 0x215580u;
    SET_GPR_U32(ctx, 31, 0x215588u);
    ctx->pc = 0x215584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215580u;
            // 0x215584: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215588u; }
        if (ctx->pc != 0x215588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215588u; }
        if (ctx->pc != 0x215588u) { return; }
    }
    ctx->pc = 0x215588u;
label_215588:
    // 0x215588: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x215588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_21558c:
    // 0x21558c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x21558cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_215590:
    // 0x215590: 0xc041c38  jal         func_1070E0
label_215594:
    if (ctx->pc == 0x215594u) {
        ctx->pc = 0x215594u;
            // 0x215594: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x215598u;
        goto label_215598;
    }
    ctx->pc = 0x215590u;
    SET_GPR_U32(ctx, 31, 0x215598u);
    ctx->pc = 0x215594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215590u;
            // 0x215594: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215598u; }
        if (ctx->pc != 0x215598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215598u; }
        if (ctx->pc != 0x215598u) { return; }
    }
    ctx->pc = 0x215598u;
label_215598:
    // 0x215598: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x215598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_21559c:
    // 0x21559c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21559cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2155a0:
    // 0x2155a0: 0xa6820388  sh          $v0, 0x388($s4)
    ctx->pc = 0x2155a0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 904), (uint16_t)GPR_U32(ctx, 2));
label_2155a4:
    // 0x2155a4: 0xa680038a  sh          $zero, 0x38A($s4)
    ctx->pc = 0x2155a4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 906), (uint16_t)GPR_U32(ctx, 0));
label_2155a8:
    // 0x2155a8: 0x8f8491bc  lw          $a0, -0x6E44($gp)
    ctx->pc = 0x2155a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939068)));
label_2155ac:
    // 0x2155ac: 0xc063818  jal         func_18E060
label_2155b0:
    if (ctx->pc == 0x2155B0u) {
        ctx->pc = 0x2155B0u;
            // 0x2155b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2155B4u;
        goto label_2155b4;
    }
    ctx->pc = 0x2155ACu;
    SET_GPR_U32(ctx, 31, 0x2155B4u);
    ctx->pc = 0x2155B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2155ACu;
            // 0x2155b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2155B4u; }
        if (ctx->pc != 0x2155B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2155B4u; }
        if (ctx->pc != 0x2155B4u) { return; }
    }
    ctx->pc = 0x2155B4u;
label_2155b4:
    // 0x2155b4: 0x8e840390  lw          $a0, 0x390($s4)
    ctx->pc = 0x2155b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 912)));
label_2155b8:
    // 0x2155b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2155b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2155bc:
    // 0x2155bc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2155bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2155c0:
    // 0x2155c0: 0x320f809  jalr        $t9
label_2155c4:
    if (ctx->pc == 0x2155C4u) {
        ctx->pc = 0x2155C4u;
            // 0x2155c4: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x2155C8u;
        goto label_2155c8;
    }
    ctx->pc = 0x2155C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2155C8u);
        ctx->pc = 0x2155C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2155C0u;
            // 0x2155c4: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2155C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2155C8u; }
            if (ctx->pc != 0x2155C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2155C8u;
label_2155c8:
    // 0x2155c8: 0x8e840390  lw          $a0, 0x390($s4)
    ctx->pc = 0x2155c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 912)));
label_2155cc:
    // 0x2155cc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2155ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2155d0:
    // 0x2155d0: 0x24a5a198  addiu       $a1, $a1, -0x5E68
    ctx->pc = 0x2155d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943128));
label_2155d4:
    // 0x2155d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2155d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2155d8:
    // 0x2155d8: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2155d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2155dc:
    // 0x2155dc: 0x320f809  jalr        $t9
label_2155e0:
    if (ctx->pc == 0x2155E0u) {
        ctx->pc = 0x2155E0u;
            // 0x2155e0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2155E4u;
        goto label_2155e4;
    }
    ctx->pc = 0x2155DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2155E4u);
        ctx->pc = 0x2155E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2155DCu;
            // 0x2155e0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2155E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2155E4u; }
            if (ctx->pc != 0x2155E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2155E4u;
label_2155e4:
    // 0x2155e4: 0x8e840390  lw          $a0, 0x390($s4)
    ctx->pc = 0x2155e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 912)));
label_2155e8:
    // 0x2155e8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2155e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_2155ec:
    // 0x2155ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2155ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2155f0:
    // 0x2155f0: 0x0  nop
    ctx->pc = 0x2155f0u;
    // NOP
label_2155f4:
    // 0x2155f4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2155f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2155f8:
    // 0x2155f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2155f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2155fc:
    // 0x2155fc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2155fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_215600:
    // 0x215600: 0x320f809  jalr        $t9
label_215604:
    if (ctx->pc == 0x215604u) {
        ctx->pc = 0x215604u;
            // 0x215604: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x215608u;
        goto label_215608;
    }
    ctx->pc = 0x215600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x215608u);
        ctx->pc = 0x215604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215600u;
            // 0x215604: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x215608u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x215608u; }
            if (ctx->pc != 0x215608u) { return; }
        }
        }
    }
    ctx->pc = 0x215608u;
label_215608:
    // 0x215608: 0x8e840390  lw          $a0, 0x390($s4)
    ctx->pc = 0x215608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 912)));
label_21560c:
    // 0x21560c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x21560cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_215610:
    // 0x215610: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x215610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_215614:
    // 0x215614: 0x320f809  jalr        $t9
label_215618:
    if (ctx->pc == 0x215618u) {
        ctx->pc = 0x21561Cu;
        goto label_21561c;
    }
    ctx->pc = 0x215614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21561Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x21561Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21561Cu; }
            if (ctx->pc != 0x21561Cu) { return; }
        }
        }
    }
    ctx->pc = 0x21561Cu;
label_21561c:
    // 0x21561c: 0xa696031a  sh          $s6, 0x31A($s4)
    ctx->pc = 0x21561cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 794), (uint16_t)GPR_U32(ctx, 22));
label_215620:
    // 0x215620: 0x862206ac  lh          $v0, 0x6AC($s1)
    ctx->pc = 0x215620u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1708)));
label_215624:
    // 0x215624: 0xa682031c  sh          $v0, 0x31C($s4)
    ctx->pc = 0x215624u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 796), (uint16_t)GPR_U32(ctx, 2));
label_215628:
    // 0x215628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21562c:
    // 0x21562c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21562cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_215630:
    // 0x215630: 0xc083900  jal         func_20E400
label_215634:
    if (ctx->pc == 0x215634u) {
        ctx->pc = 0x215634u;
            // 0x215634: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x215638u;
        goto label_215638;
    }
    ctx->pc = 0x215630u;
    SET_GPR_U32(ctx, 31, 0x215638u);
    ctx->pc = 0x215634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215630u;
            // 0x215634: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E400u;
    if (runtime->hasFunction(0x20E400u)) {
        auto targetFn = runtime->lookupFunction(0x20E400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215638u; }
        if (ctx->pc != 0x215638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextThink__9CAquaFishFiP16NEXT_THINK_PARAM_0x20e400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215638u; }
        if (ctx->pc != 0x215638u) { return; }
    }
    ctx->pc = 0x215638u;
label_215638:
    // 0x215638: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x215638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_21563c:
    // 0x21563c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x21563cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_215640:
    // 0x215640: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x215640u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_215644:
    // 0x215644: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x215644u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_215648:
    // 0x215648: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x215648u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21564c:
    // 0x21564c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x21564cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_215650:
    // 0x215650: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x215650u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_215654:
    // 0x215654: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x215654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_215658:
    // 0x215658: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x215658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21565c:
    // 0x21565c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21565cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_215660:
    // 0x215660: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x215660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_215664:
    // 0x215664: 0x3e00008  jr          $ra
label_215668:
    if (ctx->pc == 0x215668u) {
        ctx->pc = 0x215668u;
            // 0x215668: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x21566Cu;
        goto label_fallthrough_0x215664;
    }
    ctx->pc = 0x215664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215664u;
            // 0x215668: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x215664:
    ctx->pc = 0x21566Cu;
}
