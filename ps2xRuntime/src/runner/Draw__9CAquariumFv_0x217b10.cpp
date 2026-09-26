#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__9CAquariumFv
// Address: 0x217b10 - 0x218940
void Draw__9CAquariumFv_0x217b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__9CAquariumFv_0x217b10");
#endif

    switch (ctx->pc) {
        case 0x217b10u: goto label_217b10;
        case 0x217b14u: goto label_217b14;
        case 0x217b18u: goto label_217b18;
        case 0x217b1cu: goto label_217b1c;
        case 0x217b20u: goto label_217b20;
        case 0x217b24u: goto label_217b24;
        case 0x217b28u: goto label_217b28;
        case 0x217b2cu: goto label_217b2c;
        case 0x217b30u: goto label_217b30;
        case 0x217b34u: goto label_217b34;
        case 0x217b38u: goto label_217b38;
        case 0x217b3cu: goto label_217b3c;
        case 0x217b40u: goto label_217b40;
        case 0x217b44u: goto label_217b44;
        case 0x217b48u: goto label_217b48;
        case 0x217b4cu: goto label_217b4c;
        case 0x217b50u: goto label_217b50;
        case 0x217b54u: goto label_217b54;
        case 0x217b58u: goto label_217b58;
        case 0x217b5cu: goto label_217b5c;
        case 0x217b60u: goto label_217b60;
        case 0x217b64u: goto label_217b64;
        case 0x217b68u: goto label_217b68;
        case 0x217b6cu: goto label_217b6c;
        case 0x217b70u: goto label_217b70;
        case 0x217b74u: goto label_217b74;
        case 0x217b78u: goto label_217b78;
        case 0x217b7cu: goto label_217b7c;
        case 0x217b80u: goto label_217b80;
        case 0x217b84u: goto label_217b84;
        case 0x217b88u: goto label_217b88;
        case 0x217b8cu: goto label_217b8c;
        case 0x217b90u: goto label_217b90;
        case 0x217b94u: goto label_217b94;
        case 0x217b98u: goto label_217b98;
        case 0x217b9cu: goto label_217b9c;
        case 0x217ba0u: goto label_217ba0;
        case 0x217ba4u: goto label_217ba4;
        case 0x217ba8u: goto label_217ba8;
        case 0x217bacu: goto label_217bac;
        case 0x217bb0u: goto label_217bb0;
        case 0x217bb4u: goto label_217bb4;
        case 0x217bb8u: goto label_217bb8;
        case 0x217bbcu: goto label_217bbc;
        case 0x217bc0u: goto label_217bc0;
        case 0x217bc4u: goto label_217bc4;
        case 0x217bc8u: goto label_217bc8;
        case 0x217bccu: goto label_217bcc;
        case 0x217bd0u: goto label_217bd0;
        case 0x217bd4u: goto label_217bd4;
        case 0x217bd8u: goto label_217bd8;
        case 0x217bdcu: goto label_217bdc;
        case 0x217be0u: goto label_217be0;
        case 0x217be4u: goto label_217be4;
        case 0x217be8u: goto label_217be8;
        case 0x217becu: goto label_217bec;
        case 0x217bf0u: goto label_217bf0;
        case 0x217bf4u: goto label_217bf4;
        case 0x217bf8u: goto label_217bf8;
        case 0x217bfcu: goto label_217bfc;
        case 0x217c00u: goto label_217c00;
        case 0x217c04u: goto label_217c04;
        case 0x217c08u: goto label_217c08;
        case 0x217c0cu: goto label_217c0c;
        case 0x217c10u: goto label_217c10;
        case 0x217c14u: goto label_217c14;
        case 0x217c18u: goto label_217c18;
        case 0x217c1cu: goto label_217c1c;
        case 0x217c20u: goto label_217c20;
        case 0x217c24u: goto label_217c24;
        case 0x217c28u: goto label_217c28;
        case 0x217c2cu: goto label_217c2c;
        case 0x217c30u: goto label_217c30;
        case 0x217c34u: goto label_217c34;
        case 0x217c38u: goto label_217c38;
        case 0x217c3cu: goto label_217c3c;
        case 0x217c40u: goto label_217c40;
        case 0x217c44u: goto label_217c44;
        case 0x217c48u: goto label_217c48;
        case 0x217c4cu: goto label_217c4c;
        case 0x217c50u: goto label_217c50;
        case 0x217c54u: goto label_217c54;
        case 0x217c58u: goto label_217c58;
        case 0x217c5cu: goto label_217c5c;
        case 0x217c60u: goto label_217c60;
        case 0x217c64u: goto label_217c64;
        case 0x217c68u: goto label_217c68;
        case 0x217c6cu: goto label_217c6c;
        case 0x217c70u: goto label_217c70;
        case 0x217c74u: goto label_217c74;
        case 0x217c78u: goto label_217c78;
        case 0x217c7cu: goto label_217c7c;
        case 0x217c80u: goto label_217c80;
        case 0x217c84u: goto label_217c84;
        case 0x217c88u: goto label_217c88;
        case 0x217c8cu: goto label_217c8c;
        case 0x217c90u: goto label_217c90;
        case 0x217c94u: goto label_217c94;
        case 0x217c98u: goto label_217c98;
        case 0x217c9cu: goto label_217c9c;
        case 0x217ca0u: goto label_217ca0;
        case 0x217ca4u: goto label_217ca4;
        case 0x217ca8u: goto label_217ca8;
        case 0x217cacu: goto label_217cac;
        case 0x217cb0u: goto label_217cb0;
        case 0x217cb4u: goto label_217cb4;
        case 0x217cb8u: goto label_217cb8;
        case 0x217cbcu: goto label_217cbc;
        case 0x217cc0u: goto label_217cc0;
        case 0x217cc4u: goto label_217cc4;
        case 0x217cc8u: goto label_217cc8;
        case 0x217cccu: goto label_217ccc;
        case 0x217cd0u: goto label_217cd0;
        case 0x217cd4u: goto label_217cd4;
        case 0x217cd8u: goto label_217cd8;
        case 0x217cdcu: goto label_217cdc;
        case 0x217ce0u: goto label_217ce0;
        case 0x217ce4u: goto label_217ce4;
        case 0x217ce8u: goto label_217ce8;
        case 0x217cecu: goto label_217cec;
        case 0x217cf0u: goto label_217cf0;
        case 0x217cf4u: goto label_217cf4;
        case 0x217cf8u: goto label_217cf8;
        case 0x217cfcu: goto label_217cfc;
        case 0x217d00u: goto label_217d00;
        case 0x217d04u: goto label_217d04;
        case 0x217d08u: goto label_217d08;
        case 0x217d0cu: goto label_217d0c;
        case 0x217d10u: goto label_217d10;
        case 0x217d14u: goto label_217d14;
        case 0x217d18u: goto label_217d18;
        case 0x217d1cu: goto label_217d1c;
        case 0x217d20u: goto label_217d20;
        case 0x217d24u: goto label_217d24;
        case 0x217d28u: goto label_217d28;
        case 0x217d2cu: goto label_217d2c;
        case 0x217d30u: goto label_217d30;
        case 0x217d34u: goto label_217d34;
        case 0x217d38u: goto label_217d38;
        case 0x217d3cu: goto label_217d3c;
        case 0x217d40u: goto label_217d40;
        case 0x217d44u: goto label_217d44;
        case 0x217d48u: goto label_217d48;
        case 0x217d4cu: goto label_217d4c;
        case 0x217d50u: goto label_217d50;
        case 0x217d54u: goto label_217d54;
        case 0x217d58u: goto label_217d58;
        case 0x217d5cu: goto label_217d5c;
        case 0x217d60u: goto label_217d60;
        case 0x217d64u: goto label_217d64;
        case 0x217d68u: goto label_217d68;
        case 0x217d6cu: goto label_217d6c;
        case 0x217d70u: goto label_217d70;
        case 0x217d74u: goto label_217d74;
        case 0x217d78u: goto label_217d78;
        case 0x217d7cu: goto label_217d7c;
        case 0x217d80u: goto label_217d80;
        case 0x217d84u: goto label_217d84;
        case 0x217d88u: goto label_217d88;
        case 0x217d8cu: goto label_217d8c;
        case 0x217d90u: goto label_217d90;
        case 0x217d94u: goto label_217d94;
        case 0x217d98u: goto label_217d98;
        case 0x217d9cu: goto label_217d9c;
        case 0x217da0u: goto label_217da0;
        case 0x217da4u: goto label_217da4;
        case 0x217da8u: goto label_217da8;
        case 0x217dacu: goto label_217dac;
        case 0x217db0u: goto label_217db0;
        case 0x217db4u: goto label_217db4;
        case 0x217db8u: goto label_217db8;
        case 0x217dbcu: goto label_217dbc;
        case 0x217dc0u: goto label_217dc0;
        case 0x217dc4u: goto label_217dc4;
        case 0x217dc8u: goto label_217dc8;
        case 0x217dccu: goto label_217dcc;
        case 0x217dd0u: goto label_217dd0;
        case 0x217dd4u: goto label_217dd4;
        case 0x217dd8u: goto label_217dd8;
        case 0x217ddcu: goto label_217ddc;
        case 0x217de0u: goto label_217de0;
        case 0x217de4u: goto label_217de4;
        case 0x217de8u: goto label_217de8;
        case 0x217decu: goto label_217dec;
        case 0x217df0u: goto label_217df0;
        case 0x217df4u: goto label_217df4;
        case 0x217df8u: goto label_217df8;
        case 0x217dfcu: goto label_217dfc;
        case 0x217e00u: goto label_217e00;
        case 0x217e04u: goto label_217e04;
        case 0x217e08u: goto label_217e08;
        case 0x217e0cu: goto label_217e0c;
        case 0x217e10u: goto label_217e10;
        case 0x217e14u: goto label_217e14;
        case 0x217e18u: goto label_217e18;
        case 0x217e1cu: goto label_217e1c;
        case 0x217e20u: goto label_217e20;
        case 0x217e24u: goto label_217e24;
        case 0x217e28u: goto label_217e28;
        case 0x217e2cu: goto label_217e2c;
        case 0x217e30u: goto label_217e30;
        case 0x217e34u: goto label_217e34;
        case 0x217e38u: goto label_217e38;
        case 0x217e3cu: goto label_217e3c;
        case 0x217e40u: goto label_217e40;
        case 0x217e44u: goto label_217e44;
        case 0x217e48u: goto label_217e48;
        case 0x217e4cu: goto label_217e4c;
        case 0x217e50u: goto label_217e50;
        case 0x217e54u: goto label_217e54;
        case 0x217e58u: goto label_217e58;
        case 0x217e5cu: goto label_217e5c;
        case 0x217e60u: goto label_217e60;
        case 0x217e64u: goto label_217e64;
        case 0x217e68u: goto label_217e68;
        case 0x217e6cu: goto label_217e6c;
        case 0x217e70u: goto label_217e70;
        case 0x217e74u: goto label_217e74;
        case 0x217e78u: goto label_217e78;
        case 0x217e7cu: goto label_217e7c;
        case 0x217e80u: goto label_217e80;
        case 0x217e84u: goto label_217e84;
        case 0x217e88u: goto label_217e88;
        case 0x217e8cu: goto label_217e8c;
        case 0x217e90u: goto label_217e90;
        case 0x217e94u: goto label_217e94;
        case 0x217e98u: goto label_217e98;
        case 0x217e9cu: goto label_217e9c;
        case 0x217ea0u: goto label_217ea0;
        case 0x217ea4u: goto label_217ea4;
        case 0x217ea8u: goto label_217ea8;
        case 0x217eacu: goto label_217eac;
        case 0x217eb0u: goto label_217eb0;
        case 0x217eb4u: goto label_217eb4;
        case 0x217eb8u: goto label_217eb8;
        case 0x217ebcu: goto label_217ebc;
        case 0x217ec0u: goto label_217ec0;
        case 0x217ec4u: goto label_217ec4;
        case 0x217ec8u: goto label_217ec8;
        case 0x217eccu: goto label_217ecc;
        case 0x217ed0u: goto label_217ed0;
        case 0x217ed4u: goto label_217ed4;
        case 0x217ed8u: goto label_217ed8;
        case 0x217edcu: goto label_217edc;
        case 0x217ee0u: goto label_217ee0;
        case 0x217ee4u: goto label_217ee4;
        case 0x217ee8u: goto label_217ee8;
        case 0x217eecu: goto label_217eec;
        case 0x217ef0u: goto label_217ef0;
        case 0x217ef4u: goto label_217ef4;
        case 0x217ef8u: goto label_217ef8;
        case 0x217efcu: goto label_217efc;
        case 0x217f00u: goto label_217f00;
        case 0x217f04u: goto label_217f04;
        case 0x217f08u: goto label_217f08;
        case 0x217f0cu: goto label_217f0c;
        case 0x217f10u: goto label_217f10;
        case 0x217f14u: goto label_217f14;
        case 0x217f18u: goto label_217f18;
        case 0x217f1cu: goto label_217f1c;
        case 0x217f20u: goto label_217f20;
        case 0x217f24u: goto label_217f24;
        case 0x217f28u: goto label_217f28;
        case 0x217f2cu: goto label_217f2c;
        case 0x217f30u: goto label_217f30;
        case 0x217f34u: goto label_217f34;
        case 0x217f38u: goto label_217f38;
        case 0x217f3cu: goto label_217f3c;
        case 0x217f40u: goto label_217f40;
        case 0x217f44u: goto label_217f44;
        case 0x217f48u: goto label_217f48;
        case 0x217f4cu: goto label_217f4c;
        case 0x217f50u: goto label_217f50;
        case 0x217f54u: goto label_217f54;
        case 0x217f58u: goto label_217f58;
        case 0x217f5cu: goto label_217f5c;
        case 0x217f60u: goto label_217f60;
        case 0x217f64u: goto label_217f64;
        case 0x217f68u: goto label_217f68;
        case 0x217f6cu: goto label_217f6c;
        case 0x217f70u: goto label_217f70;
        case 0x217f74u: goto label_217f74;
        case 0x217f78u: goto label_217f78;
        case 0x217f7cu: goto label_217f7c;
        case 0x217f80u: goto label_217f80;
        case 0x217f84u: goto label_217f84;
        case 0x217f88u: goto label_217f88;
        case 0x217f8cu: goto label_217f8c;
        case 0x217f90u: goto label_217f90;
        case 0x217f94u: goto label_217f94;
        case 0x217f98u: goto label_217f98;
        case 0x217f9cu: goto label_217f9c;
        case 0x217fa0u: goto label_217fa0;
        case 0x217fa4u: goto label_217fa4;
        case 0x217fa8u: goto label_217fa8;
        case 0x217facu: goto label_217fac;
        case 0x217fb0u: goto label_217fb0;
        case 0x217fb4u: goto label_217fb4;
        case 0x217fb8u: goto label_217fb8;
        case 0x217fbcu: goto label_217fbc;
        case 0x217fc0u: goto label_217fc0;
        case 0x217fc4u: goto label_217fc4;
        case 0x217fc8u: goto label_217fc8;
        case 0x217fccu: goto label_217fcc;
        case 0x217fd0u: goto label_217fd0;
        case 0x217fd4u: goto label_217fd4;
        case 0x217fd8u: goto label_217fd8;
        case 0x217fdcu: goto label_217fdc;
        case 0x217fe0u: goto label_217fe0;
        case 0x217fe4u: goto label_217fe4;
        case 0x217fe8u: goto label_217fe8;
        case 0x217fecu: goto label_217fec;
        case 0x217ff0u: goto label_217ff0;
        case 0x217ff4u: goto label_217ff4;
        case 0x217ff8u: goto label_217ff8;
        case 0x217ffcu: goto label_217ffc;
        case 0x218000u: goto label_218000;
        case 0x218004u: goto label_218004;
        case 0x218008u: goto label_218008;
        case 0x21800cu: goto label_21800c;
        case 0x218010u: goto label_218010;
        case 0x218014u: goto label_218014;
        case 0x218018u: goto label_218018;
        case 0x21801cu: goto label_21801c;
        case 0x218020u: goto label_218020;
        case 0x218024u: goto label_218024;
        case 0x218028u: goto label_218028;
        case 0x21802cu: goto label_21802c;
        case 0x218030u: goto label_218030;
        case 0x218034u: goto label_218034;
        case 0x218038u: goto label_218038;
        case 0x21803cu: goto label_21803c;
        case 0x218040u: goto label_218040;
        case 0x218044u: goto label_218044;
        case 0x218048u: goto label_218048;
        case 0x21804cu: goto label_21804c;
        case 0x218050u: goto label_218050;
        case 0x218054u: goto label_218054;
        case 0x218058u: goto label_218058;
        case 0x21805cu: goto label_21805c;
        case 0x218060u: goto label_218060;
        case 0x218064u: goto label_218064;
        case 0x218068u: goto label_218068;
        case 0x21806cu: goto label_21806c;
        case 0x218070u: goto label_218070;
        case 0x218074u: goto label_218074;
        case 0x218078u: goto label_218078;
        case 0x21807cu: goto label_21807c;
        case 0x218080u: goto label_218080;
        case 0x218084u: goto label_218084;
        case 0x218088u: goto label_218088;
        case 0x21808cu: goto label_21808c;
        case 0x218090u: goto label_218090;
        case 0x218094u: goto label_218094;
        case 0x218098u: goto label_218098;
        case 0x21809cu: goto label_21809c;
        case 0x2180a0u: goto label_2180a0;
        case 0x2180a4u: goto label_2180a4;
        case 0x2180a8u: goto label_2180a8;
        case 0x2180acu: goto label_2180ac;
        case 0x2180b0u: goto label_2180b0;
        case 0x2180b4u: goto label_2180b4;
        case 0x2180b8u: goto label_2180b8;
        case 0x2180bcu: goto label_2180bc;
        case 0x2180c0u: goto label_2180c0;
        case 0x2180c4u: goto label_2180c4;
        case 0x2180c8u: goto label_2180c8;
        case 0x2180ccu: goto label_2180cc;
        case 0x2180d0u: goto label_2180d0;
        case 0x2180d4u: goto label_2180d4;
        case 0x2180d8u: goto label_2180d8;
        case 0x2180dcu: goto label_2180dc;
        case 0x2180e0u: goto label_2180e0;
        case 0x2180e4u: goto label_2180e4;
        case 0x2180e8u: goto label_2180e8;
        case 0x2180ecu: goto label_2180ec;
        case 0x2180f0u: goto label_2180f0;
        case 0x2180f4u: goto label_2180f4;
        case 0x2180f8u: goto label_2180f8;
        case 0x2180fcu: goto label_2180fc;
        case 0x218100u: goto label_218100;
        case 0x218104u: goto label_218104;
        case 0x218108u: goto label_218108;
        case 0x21810cu: goto label_21810c;
        case 0x218110u: goto label_218110;
        case 0x218114u: goto label_218114;
        case 0x218118u: goto label_218118;
        case 0x21811cu: goto label_21811c;
        case 0x218120u: goto label_218120;
        case 0x218124u: goto label_218124;
        case 0x218128u: goto label_218128;
        case 0x21812cu: goto label_21812c;
        case 0x218130u: goto label_218130;
        case 0x218134u: goto label_218134;
        case 0x218138u: goto label_218138;
        case 0x21813cu: goto label_21813c;
        case 0x218140u: goto label_218140;
        case 0x218144u: goto label_218144;
        case 0x218148u: goto label_218148;
        case 0x21814cu: goto label_21814c;
        case 0x218150u: goto label_218150;
        case 0x218154u: goto label_218154;
        case 0x218158u: goto label_218158;
        case 0x21815cu: goto label_21815c;
        case 0x218160u: goto label_218160;
        case 0x218164u: goto label_218164;
        case 0x218168u: goto label_218168;
        case 0x21816cu: goto label_21816c;
        case 0x218170u: goto label_218170;
        case 0x218174u: goto label_218174;
        case 0x218178u: goto label_218178;
        case 0x21817cu: goto label_21817c;
        case 0x218180u: goto label_218180;
        case 0x218184u: goto label_218184;
        case 0x218188u: goto label_218188;
        case 0x21818cu: goto label_21818c;
        case 0x218190u: goto label_218190;
        case 0x218194u: goto label_218194;
        case 0x218198u: goto label_218198;
        case 0x21819cu: goto label_21819c;
        case 0x2181a0u: goto label_2181a0;
        case 0x2181a4u: goto label_2181a4;
        case 0x2181a8u: goto label_2181a8;
        case 0x2181acu: goto label_2181ac;
        case 0x2181b0u: goto label_2181b0;
        case 0x2181b4u: goto label_2181b4;
        case 0x2181b8u: goto label_2181b8;
        case 0x2181bcu: goto label_2181bc;
        case 0x2181c0u: goto label_2181c0;
        case 0x2181c4u: goto label_2181c4;
        case 0x2181c8u: goto label_2181c8;
        case 0x2181ccu: goto label_2181cc;
        case 0x2181d0u: goto label_2181d0;
        case 0x2181d4u: goto label_2181d4;
        case 0x2181d8u: goto label_2181d8;
        case 0x2181dcu: goto label_2181dc;
        case 0x2181e0u: goto label_2181e0;
        case 0x2181e4u: goto label_2181e4;
        case 0x2181e8u: goto label_2181e8;
        case 0x2181ecu: goto label_2181ec;
        case 0x2181f0u: goto label_2181f0;
        case 0x2181f4u: goto label_2181f4;
        case 0x2181f8u: goto label_2181f8;
        case 0x2181fcu: goto label_2181fc;
        case 0x218200u: goto label_218200;
        case 0x218204u: goto label_218204;
        case 0x218208u: goto label_218208;
        case 0x21820cu: goto label_21820c;
        case 0x218210u: goto label_218210;
        case 0x218214u: goto label_218214;
        case 0x218218u: goto label_218218;
        case 0x21821cu: goto label_21821c;
        case 0x218220u: goto label_218220;
        case 0x218224u: goto label_218224;
        case 0x218228u: goto label_218228;
        case 0x21822cu: goto label_21822c;
        case 0x218230u: goto label_218230;
        case 0x218234u: goto label_218234;
        case 0x218238u: goto label_218238;
        case 0x21823cu: goto label_21823c;
        case 0x218240u: goto label_218240;
        case 0x218244u: goto label_218244;
        case 0x218248u: goto label_218248;
        case 0x21824cu: goto label_21824c;
        case 0x218250u: goto label_218250;
        case 0x218254u: goto label_218254;
        case 0x218258u: goto label_218258;
        case 0x21825cu: goto label_21825c;
        case 0x218260u: goto label_218260;
        case 0x218264u: goto label_218264;
        case 0x218268u: goto label_218268;
        case 0x21826cu: goto label_21826c;
        case 0x218270u: goto label_218270;
        case 0x218274u: goto label_218274;
        case 0x218278u: goto label_218278;
        case 0x21827cu: goto label_21827c;
        case 0x218280u: goto label_218280;
        case 0x218284u: goto label_218284;
        case 0x218288u: goto label_218288;
        case 0x21828cu: goto label_21828c;
        case 0x218290u: goto label_218290;
        case 0x218294u: goto label_218294;
        case 0x218298u: goto label_218298;
        case 0x21829cu: goto label_21829c;
        case 0x2182a0u: goto label_2182a0;
        case 0x2182a4u: goto label_2182a4;
        case 0x2182a8u: goto label_2182a8;
        case 0x2182acu: goto label_2182ac;
        case 0x2182b0u: goto label_2182b0;
        case 0x2182b4u: goto label_2182b4;
        case 0x2182b8u: goto label_2182b8;
        case 0x2182bcu: goto label_2182bc;
        case 0x2182c0u: goto label_2182c0;
        case 0x2182c4u: goto label_2182c4;
        case 0x2182c8u: goto label_2182c8;
        case 0x2182ccu: goto label_2182cc;
        case 0x2182d0u: goto label_2182d0;
        case 0x2182d4u: goto label_2182d4;
        case 0x2182d8u: goto label_2182d8;
        case 0x2182dcu: goto label_2182dc;
        case 0x2182e0u: goto label_2182e0;
        case 0x2182e4u: goto label_2182e4;
        case 0x2182e8u: goto label_2182e8;
        case 0x2182ecu: goto label_2182ec;
        case 0x2182f0u: goto label_2182f0;
        case 0x2182f4u: goto label_2182f4;
        case 0x2182f8u: goto label_2182f8;
        case 0x2182fcu: goto label_2182fc;
        case 0x218300u: goto label_218300;
        case 0x218304u: goto label_218304;
        case 0x218308u: goto label_218308;
        case 0x21830cu: goto label_21830c;
        case 0x218310u: goto label_218310;
        case 0x218314u: goto label_218314;
        case 0x218318u: goto label_218318;
        case 0x21831cu: goto label_21831c;
        case 0x218320u: goto label_218320;
        case 0x218324u: goto label_218324;
        case 0x218328u: goto label_218328;
        case 0x21832cu: goto label_21832c;
        case 0x218330u: goto label_218330;
        case 0x218334u: goto label_218334;
        case 0x218338u: goto label_218338;
        case 0x21833cu: goto label_21833c;
        case 0x218340u: goto label_218340;
        case 0x218344u: goto label_218344;
        case 0x218348u: goto label_218348;
        case 0x21834cu: goto label_21834c;
        case 0x218350u: goto label_218350;
        case 0x218354u: goto label_218354;
        case 0x218358u: goto label_218358;
        case 0x21835cu: goto label_21835c;
        case 0x218360u: goto label_218360;
        case 0x218364u: goto label_218364;
        case 0x218368u: goto label_218368;
        case 0x21836cu: goto label_21836c;
        case 0x218370u: goto label_218370;
        case 0x218374u: goto label_218374;
        case 0x218378u: goto label_218378;
        case 0x21837cu: goto label_21837c;
        case 0x218380u: goto label_218380;
        case 0x218384u: goto label_218384;
        case 0x218388u: goto label_218388;
        case 0x21838cu: goto label_21838c;
        case 0x218390u: goto label_218390;
        case 0x218394u: goto label_218394;
        case 0x218398u: goto label_218398;
        case 0x21839cu: goto label_21839c;
        case 0x2183a0u: goto label_2183a0;
        case 0x2183a4u: goto label_2183a4;
        case 0x2183a8u: goto label_2183a8;
        case 0x2183acu: goto label_2183ac;
        case 0x2183b0u: goto label_2183b0;
        case 0x2183b4u: goto label_2183b4;
        case 0x2183b8u: goto label_2183b8;
        case 0x2183bcu: goto label_2183bc;
        case 0x2183c0u: goto label_2183c0;
        case 0x2183c4u: goto label_2183c4;
        case 0x2183c8u: goto label_2183c8;
        case 0x2183ccu: goto label_2183cc;
        case 0x2183d0u: goto label_2183d0;
        case 0x2183d4u: goto label_2183d4;
        case 0x2183d8u: goto label_2183d8;
        case 0x2183dcu: goto label_2183dc;
        case 0x2183e0u: goto label_2183e0;
        case 0x2183e4u: goto label_2183e4;
        case 0x2183e8u: goto label_2183e8;
        case 0x2183ecu: goto label_2183ec;
        case 0x2183f0u: goto label_2183f0;
        case 0x2183f4u: goto label_2183f4;
        case 0x2183f8u: goto label_2183f8;
        case 0x2183fcu: goto label_2183fc;
        case 0x218400u: goto label_218400;
        case 0x218404u: goto label_218404;
        case 0x218408u: goto label_218408;
        case 0x21840cu: goto label_21840c;
        case 0x218410u: goto label_218410;
        case 0x218414u: goto label_218414;
        case 0x218418u: goto label_218418;
        case 0x21841cu: goto label_21841c;
        case 0x218420u: goto label_218420;
        case 0x218424u: goto label_218424;
        case 0x218428u: goto label_218428;
        case 0x21842cu: goto label_21842c;
        case 0x218430u: goto label_218430;
        case 0x218434u: goto label_218434;
        case 0x218438u: goto label_218438;
        case 0x21843cu: goto label_21843c;
        case 0x218440u: goto label_218440;
        case 0x218444u: goto label_218444;
        case 0x218448u: goto label_218448;
        case 0x21844cu: goto label_21844c;
        case 0x218450u: goto label_218450;
        case 0x218454u: goto label_218454;
        case 0x218458u: goto label_218458;
        case 0x21845cu: goto label_21845c;
        case 0x218460u: goto label_218460;
        case 0x218464u: goto label_218464;
        case 0x218468u: goto label_218468;
        case 0x21846cu: goto label_21846c;
        case 0x218470u: goto label_218470;
        case 0x218474u: goto label_218474;
        case 0x218478u: goto label_218478;
        case 0x21847cu: goto label_21847c;
        case 0x218480u: goto label_218480;
        case 0x218484u: goto label_218484;
        case 0x218488u: goto label_218488;
        case 0x21848cu: goto label_21848c;
        case 0x218490u: goto label_218490;
        case 0x218494u: goto label_218494;
        case 0x218498u: goto label_218498;
        case 0x21849cu: goto label_21849c;
        case 0x2184a0u: goto label_2184a0;
        case 0x2184a4u: goto label_2184a4;
        case 0x2184a8u: goto label_2184a8;
        case 0x2184acu: goto label_2184ac;
        case 0x2184b0u: goto label_2184b0;
        case 0x2184b4u: goto label_2184b4;
        case 0x2184b8u: goto label_2184b8;
        case 0x2184bcu: goto label_2184bc;
        case 0x2184c0u: goto label_2184c0;
        case 0x2184c4u: goto label_2184c4;
        case 0x2184c8u: goto label_2184c8;
        case 0x2184ccu: goto label_2184cc;
        case 0x2184d0u: goto label_2184d0;
        case 0x2184d4u: goto label_2184d4;
        case 0x2184d8u: goto label_2184d8;
        case 0x2184dcu: goto label_2184dc;
        case 0x2184e0u: goto label_2184e0;
        case 0x2184e4u: goto label_2184e4;
        case 0x2184e8u: goto label_2184e8;
        case 0x2184ecu: goto label_2184ec;
        case 0x2184f0u: goto label_2184f0;
        case 0x2184f4u: goto label_2184f4;
        case 0x2184f8u: goto label_2184f8;
        case 0x2184fcu: goto label_2184fc;
        case 0x218500u: goto label_218500;
        case 0x218504u: goto label_218504;
        case 0x218508u: goto label_218508;
        case 0x21850cu: goto label_21850c;
        case 0x218510u: goto label_218510;
        case 0x218514u: goto label_218514;
        case 0x218518u: goto label_218518;
        case 0x21851cu: goto label_21851c;
        case 0x218520u: goto label_218520;
        case 0x218524u: goto label_218524;
        case 0x218528u: goto label_218528;
        case 0x21852cu: goto label_21852c;
        case 0x218530u: goto label_218530;
        case 0x218534u: goto label_218534;
        case 0x218538u: goto label_218538;
        case 0x21853cu: goto label_21853c;
        case 0x218540u: goto label_218540;
        case 0x218544u: goto label_218544;
        case 0x218548u: goto label_218548;
        case 0x21854cu: goto label_21854c;
        case 0x218550u: goto label_218550;
        case 0x218554u: goto label_218554;
        case 0x218558u: goto label_218558;
        case 0x21855cu: goto label_21855c;
        case 0x218560u: goto label_218560;
        case 0x218564u: goto label_218564;
        case 0x218568u: goto label_218568;
        case 0x21856cu: goto label_21856c;
        case 0x218570u: goto label_218570;
        case 0x218574u: goto label_218574;
        case 0x218578u: goto label_218578;
        case 0x21857cu: goto label_21857c;
        case 0x218580u: goto label_218580;
        case 0x218584u: goto label_218584;
        case 0x218588u: goto label_218588;
        case 0x21858cu: goto label_21858c;
        case 0x218590u: goto label_218590;
        case 0x218594u: goto label_218594;
        case 0x218598u: goto label_218598;
        case 0x21859cu: goto label_21859c;
        case 0x2185a0u: goto label_2185a0;
        case 0x2185a4u: goto label_2185a4;
        case 0x2185a8u: goto label_2185a8;
        case 0x2185acu: goto label_2185ac;
        case 0x2185b0u: goto label_2185b0;
        case 0x2185b4u: goto label_2185b4;
        case 0x2185b8u: goto label_2185b8;
        case 0x2185bcu: goto label_2185bc;
        case 0x2185c0u: goto label_2185c0;
        case 0x2185c4u: goto label_2185c4;
        case 0x2185c8u: goto label_2185c8;
        case 0x2185ccu: goto label_2185cc;
        case 0x2185d0u: goto label_2185d0;
        case 0x2185d4u: goto label_2185d4;
        case 0x2185d8u: goto label_2185d8;
        case 0x2185dcu: goto label_2185dc;
        case 0x2185e0u: goto label_2185e0;
        case 0x2185e4u: goto label_2185e4;
        case 0x2185e8u: goto label_2185e8;
        case 0x2185ecu: goto label_2185ec;
        case 0x2185f0u: goto label_2185f0;
        case 0x2185f4u: goto label_2185f4;
        case 0x2185f8u: goto label_2185f8;
        case 0x2185fcu: goto label_2185fc;
        case 0x218600u: goto label_218600;
        case 0x218604u: goto label_218604;
        case 0x218608u: goto label_218608;
        case 0x21860cu: goto label_21860c;
        case 0x218610u: goto label_218610;
        case 0x218614u: goto label_218614;
        case 0x218618u: goto label_218618;
        case 0x21861cu: goto label_21861c;
        case 0x218620u: goto label_218620;
        case 0x218624u: goto label_218624;
        case 0x218628u: goto label_218628;
        case 0x21862cu: goto label_21862c;
        case 0x218630u: goto label_218630;
        case 0x218634u: goto label_218634;
        case 0x218638u: goto label_218638;
        case 0x21863cu: goto label_21863c;
        case 0x218640u: goto label_218640;
        case 0x218644u: goto label_218644;
        case 0x218648u: goto label_218648;
        case 0x21864cu: goto label_21864c;
        case 0x218650u: goto label_218650;
        case 0x218654u: goto label_218654;
        case 0x218658u: goto label_218658;
        case 0x21865cu: goto label_21865c;
        case 0x218660u: goto label_218660;
        case 0x218664u: goto label_218664;
        case 0x218668u: goto label_218668;
        case 0x21866cu: goto label_21866c;
        case 0x218670u: goto label_218670;
        case 0x218674u: goto label_218674;
        case 0x218678u: goto label_218678;
        case 0x21867cu: goto label_21867c;
        case 0x218680u: goto label_218680;
        case 0x218684u: goto label_218684;
        case 0x218688u: goto label_218688;
        case 0x21868cu: goto label_21868c;
        case 0x218690u: goto label_218690;
        case 0x218694u: goto label_218694;
        case 0x218698u: goto label_218698;
        case 0x21869cu: goto label_21869c;
        case 0x2186a0u: goto label_2186a0;
        case 0x2186a4u: goto label_2186a4;
        case 0x2186a8u: goto label_2186a8;
        case 0x2186acu: goto label_2186ac;
        case 0x2186b0u: goto label_2186b0;
        case 0x2186b4u: goto label_2186b4;
        case 0x2186b8u: goto label_2186b8;
        case 0x2186bcu: goto label_2186bc;
        case 0x2186c0u: goto label_2186c0;
        case 0x2186c4u: goto label_2186c4;
        case 0x2186c8u: goto label_2186c8;
        case 0x2186ccu: goto label_2186cc;
        case 0x2186d0u: goto label_2186d0;
        case 0x2186d4u: goto label_2186d4;
        case 0x2186d8u: goto label_2186d8;
        case 0x2186dcu: goto label_2186dc;
        case 0x2186e0u: goto label_2186e0;
        case 0x2186e4u: goto label_2186e4;
        case 0x2186e8u: goto label_2186e8;
        case 0x2186ecu: goto label_2186ec;
        case 0x2186f0u: goto label_2186f0;
        case 0x2186f4u: goto label_2186f4;
        case 0x2186f8u: goto label_2186f8;
        case 0x2186fcu: goto label_2186fc;
        case 0x218700u: goto label_218700;
        case 0x218704u: goto label_218704;
        case 0x218708u: goto label_218708;
        case 0x21870cu: goto label_21870c;
        case 0x218710u: goto label_218710;
        case 0x218714u: goto label_218714;
        case 0x218718u: goto label_218718;
        case 0x21871cu: goto label_21871c;
        case 0x218720u: goto label_218720;
        case 0x218724u: goto label_218724;
        case 0x218728u: goto label_218728;
        case 0x21872cu: goto label_21872c;
        case 0x218730u: goto label_218730;
        case 0x218734u: goto label_218734;
        case 0x218738u: goto label_218738;
        case 0x21873cu: goto label_21873c;
        case 0x218740u: goto label_218740;
        case 0x218744u: goto label_218744;
        case 0x218748u: goto label_218748;
        case 0x21874cu: goto label_21874c;
        case 0x218750u: goto label_218750;
        case 0x218754u: goto label_218754;
        case 0x218758u: goto label_218758;
        case 0x21875cu: goto label_21875c;
        case 0x218760u: goto label_218760;
        case 0x218764u: goto label_218764;
        case 0x218768u: goto label_218768;
        case 0x21876cu: goto label_21876c;
        case 0x218770u: goto label_218770;
        case 0x218774u: goto label_218774;
        case 0x218778u: goto label_218778;
        case 0x21877cu: goto label_21877c;
        case 0x218780u: goto label_218780;
        case 0x218784u: goto label_218784;
        case 0x218788u: goto label_218788;
        case 0x21878cu: goto label_21878c;
        case 0x218790u: goto label_218790;
        case 0x218794u: goto label_218794;
        case 0x218798u: goto label_218798;
        case 0x21879cu: goto label_21879c;
        case 0x2187a0u: goto label_2187a0;
        case 0x2187a4u: goto label_2187a4;
        case 0x2187a8u: goto label_2187a8;
        case 0x2187acu: goto label_2187ac;
        case 0x2187b0u: goto label_2187b0;
        case 0x2187b4u: goto label_2187b4;
        case 0x2187b8u: goto label_2187b8;
        case 0x2187bcu: goto label_2187bc;
        case 0x2187c0u: goto label_2187c0;
        case 0x2187c4u: goto label_2187c4;
        case 0x2187c8u: goto label_2187c8;
        case 0x2187ccu: goto label_2187cc;
        case 0x2187d0u: goto label_2187d0;
        case 0x2187d4u: goto label_2187d4;
        case 0x2187d8u: goto label_2187d8;
        case 0x2187dcu: goto label_2187dc;
        case 0x2187e0u: goto label_2187e0;
        case 0x2187e4u: goto label_2187e4;
        case 0x2187e8u: goto label_2187e8;
        case 0x2187ecu: goto label_2187ec;
        case 0x2187f0u: goto label_2187f0;
        case 0x2187f4u: goto label_2187f4;
        case 0x2187f8u: goto label_2187f8;
        case 0x2187fcu: goto label_2187fc;
        case 0x218800u: goto label_218800;
        case 0x218804u: goto label_218804;
        case 0x218808u: goto label_218808;
        case 0x21880cu: goto label_21880c;
        case 0x218810u: goto label_218810;
        case 0x218814u: goto label_218814;
        case 0x218818u: goto label_218818;
        case 0x21881cu: goto label_21881c;
        case 0x218820u: goto label_218820;
        case 0x218824u: goto label_218824;
        case 0x218828u: goto label_218828;
        case 0x21882cu: goto label_21882c;
        case 0x218830u: goto label_218830;
        case 0x218834u: goto label_218834;
        case 0x218838u: goto label_218838;
        case 0x21883cu: goto label_21883c;
        case 0x218840u: goto label_218840;
        case 0x218844u: goto label_218844;
        case 0x218848u: goto label_218848;
        case 0x21884cu: goto label_21884c;
        case 0x218850u: goto label_218850;
        case 0x218854u: goto label_218854;
        case 0x218858u: goto label_218858;
        case 0x21885cu: goto label_21885c;
        case 0x218860u: goto label_218860;
        case 0x218864u: goto label_218864;
        case 0x218868u: goto label_218868;
        case 0x21886cu: goto label_21886c;
        case 0x218870u: goto label_218870;
        case 0x218874u: goto label_218874;
        case 0x218878u: goto label_218878;
        case 0x21887cu: goto label_21887c;
        case 0x218880u: goto label_218880;
        case 0x218884u: goto label_218884;
        case 0x218888u: goto label_218888;
        case 0x21888cu: goto label_21888c;
        case 0x218890u: goto label_218890;
        case 0x218894u: goto label_218894;
        case 0x218898u: goto label_218898;
        case 0x21889cu: goto label_21889c;
        case 0x2188a0u: goto label_2188a0;
        case 0x2188a4u: goto label_2188a4;
        case 0x2188a8u: goto label_2188a8;
        case 0x2188acu: goto label_2188ac;
        case 0x2188b0u: goto label_2188b0;
        case 0x2188b4u: goto label_2188b4;
        case 0x2188b8u: goto label_2188b8;
        case 0x2188bcu: goto label_2188bc;
        case 0x2188c0u: goto label_2188c0;
        case 0x2188c4u: goto label_2188c4;
        case 0x2188c8u: goto label_2188c8;
        case 0x2188ccu: goto label_2188cc;
        case 0x2188d0u: goto label_2188d0;
        case 0x2188d4u: goto label_2188d4;
        case 0x2188d8u: goto label_2188d8;
        case 0x2188dcu: goto label_2188dc;
        case 0x2188e0u: goto label_2188e0;
        case 0x2188e4u: goto label_2188e4;
        case 0x2188e8u: goto label_2188e8;
        case 0x2188ecu: goto label_2188ec;
        case 0x2188f0u: goto label_2188f0;
        case 0x2188f4u: goto label_2188f4;
        case 0x2188f8u: goto label_2188f8;
        case 0x2188fcu: goto label_2188fc;
        case 0x218900u: goto label_218900;
        case 0x218904u: goto label_218904;
        case 0x218908u: goto label_218908;
        case 0x21890cu: goto label_21890c;
        case 0x218910u: goto label_218910;
        case 0x218914u: goto label_218914;
        case 0x218918u: goto label_218918;
        case 0x21891cu: goto label_21891c;
        case 0x218920u: goto label_218920;
        case 0x218924u: goto label_218924;
        case 0x218928u: goto label_218928;
        case 0x21892cu: goto label_21892c;
        case 0x218930u: goto label_218930;
        case 0x218934u: goto label_218934;
        case 0x218938u: goto label_218938;
        case 0x21893cu: goto label_21893c;
        default: break;
    }

    ctx->pc = 0x217b10u;

label_217b10:
    // 0x217b10: 0x27bdf840  addiu       $sp, $sp, -0x7C0
    ctx->pc = 0x217b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965312));
label_217b14:
    // 0x217b14: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x217b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_217b18:
    // 0x217b18: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x217b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_217b1c:
    // 0x217b1c: 0x2442fc90  addiu       $v0, $v0, -0x370
    ctx->pc = 0x217b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966416));
label_217b20:
    // 0x217b20: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x217b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_217b24:
    // 0x217b24: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x217b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_217b28:
    // 0x217b28: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x217b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_217b2c:
    // 0x217b2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x217b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_217b30:
    // 0x217b30: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x217b30u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
label_217b34:
    // 0x217b34: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x217b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_217b38:
    // 0x217b38: 0x26d61ef0  addiu       $s6, $s6, 0x1EF0
    ctx->pc = 0x217b38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 7920));
label_217b3c:
    // 0x217b3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x217b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_217b40:
    // 0x217b40: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x217b40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_217b44:
    // 0x217b44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x217b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_217b48:
    // 0x217b48: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x217b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_217b4c:
    // 0x217b4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x217b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_217b50:
    // 0x217b50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x217b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_217b54:
    // 0x217b54: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x217b54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_217b58:
    // 0x217b58: 0xc050dec  jal         func_1437B0
label_217b5c:
    if (ctx->pc == 0x217B5Cu) {
        ctx->pc = 0x217B5Cu;
            // 0x217b5c: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x217B60u;
        goto label_217b60;
    }
    ctx->pc = 0x217B58u;
    SET_GPR_U32(ctx, 31, 0x217B60u);
    ctx->pc = 0x217B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217B58u;
            // 0x217b5c: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217B60u; }
        if (ctx->pc != 0x217B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217B60u; }
        if (ctx->pc != 0x217B60u) { return; }
    }
    ctx->pc = 0x217B60u;
label_217b60:
    // 0x217b60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x217b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217b64:
    // 0x217b64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x217b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217b68:
    // 0x217b68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x217b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217b6c:
    // 0x217b6c: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x217b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_217b70:
    // 0x217b70: 0x245302b4  addiu       $s3, $v0, 0x2B4
    ctx->pc = 0x217b70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 692));
label_217b74:
    // 0x217b74: 0x8c4202b4  lw          $v0, 0x2B4($v0)
    ctx->pc = 0x217b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_217b78:
    // 0x217b78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_217b7c:
    if (ctx->pc == 0x217B7Cu) {
        ctx->pc = 0x217B7Cu;
            // 0x217b7c: 0x2921021  addu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->pc = 0x217B80u;
        goto label_217b80;
    }
    ctx->pc = 0x217B78u;
    {
        const bool branch_taken_0x217b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217B78u;
            // 0x217b7c: 0x2921021  addu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b78) {
            ctx->pc = 0x217B98u;
            goto label_217b98;
        }
    }
    ctx->pc = 0x217B80u;
label_217b80:
    // 0x217b80: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x217b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_217b84:
    // 0x217b84: 0x844502cc  lh          $a1, 0x2CC($v0)
    ctx->pc = 0x217b84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 716)));
label_217b88:
    // 0x217b88: 0xc04ba14  jal         func_12E850
label_217b8c:
    if (ctx->pc == 0x217B8Cu) {
        ctx->pc = 0x217B8Cu;
            // 0x217b8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217B90u;
        goto label_217b90;
    }
    ctx->pc = 0x217B88u;
    SET_GPR_U32(ctx, 31, 0x217B90u);
    ctx->pc = 0x217B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217B88u;
            // 0x217b8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217B90u; }
        if (ctx->pc != 0x217B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217B90u; }
        if (ctx->pc != 0x217B90u) { return; }
    }
    ctx->pc = 0x217B90u;
label_217b90:
    // 0x217b90: 0xc083ba8  jal         func_20EEA0
label_217b94:
    if (ctx->pc == 0x217B94u) {
        ctx->pc = 0x217B94u;
            // 0x217b94: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x217B98u;
        goto label_217b98;
    }
    ctx->pc = 0x217B90u;
    SET_GPR_U32(ctx, 31, 0x217B98u);
    ctx->pc = 0x217B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217B90u;
            // 0x217b94: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20EEA0u;
    if (runtime->hasFunction(0x20EEA0u)) {
        auto targetFn = runtime->lookupFunction(0x20EEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217B98u; }
        if (ctx->pc != 0x217B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FishDraw__9CAquaFishFv_0x20eea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217B98u; }
        if (ctx->pc != 0x217B98u) { return; }
    }
    ctx->pc = 0x217B98u;
label_217b98:
    // 0x217b98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x217b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_217b9c:
    // 0x217b9c: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x217b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_217ba0:
    // 0x217ba0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x217ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_217ba4:
    // 0x217ba4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_217ba8:
    if (ctx->pc == 0x217BA8u) {
        ctx->pc = 0x217BA8u;
            // 0x217ba8: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x217BACu;
        goto label_217bac;
    }
    ctx->pc = 0x217BA4u;
    {
        const bool branch_taken_0x217ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217BA4u;
            // 0x217ba8: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ba4) {
            ctx->pc = 0x217B6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b6c;
        }
    }
    ctx->pc = 0x217BACu;
label_217bac:
    // 0x217bac: 0x3c130035  lui         $s3, 0x35
    ctx->pc = 0x217bacu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)53 << 16));
label_217bb0:
    // 0x217bb0: 0x2673f380  addiu       $s3, $s3, -0xC80
    ctx->pc = 0x217bb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964096));
label_217bb4:
    // 0x217bb4: 0xc050dec  jal         func_1437B0
label_217bb8:
    if (ctx->pc == 0x217BB8u) {
        ctx->pc = 0x217BB8u;
            // 0x217bb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217BBCu;
        goto label_217bbc;
    }
    ctx->pc = 0x217BB4u;
    SET_GPR_U32(ctx, 31, 0x217BBCu);
    ctx->pc = 0x217BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217BB4u;
            // 0x217bb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217BBCu; }
        if (ctx->pc != 0x217BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217BBCu; }
        if (ctx->pc != 0x217BBCu) { return; }
    }
    ctx->pc = 0x217BBCu;
label_217bbc:
    // 0x217bbc: 0x8e8200a0  lw          $v0, 0xA0($s4)
    ctx->pc = 0x217bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
label_217bc0:
    // 0x217bc0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_217bc4:
    if (ctx->pc == 0x217BC4u) {
        ctx->pc = 0x217BC8u;
        goto label_217bc8;
    }
    ctx->pc = 0x217BC0u;
    {
        const bool branch_taken_0x217bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217bc0) {
            ctx->pc = 0x217BE0u;
            goto label_217be0;
        }
    }
    ctx->pc = 0x217BC8u;
label_217bc8:
    // 0x217bc8: 0x868500b0  lh          $a1, 0xB0($s4)
    ctx->pc = 0x217bc8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 176)));
label_217bcc:
    // 0x217bcc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x217bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_217bd0:
    // 0x217bd0: 0xc04ba14  jal         func_12E850
label_217bd4:
    if (ctx->pc == 0x217BD4u) {
        ctx->pc = 0x217BD4u;
            // 0x217bd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217BD8u;
        goto label_217bd8;
    }
    ctx->pc = 0x217BD0u;
    SET_GPR_U32(ctx, 31, 0x217BD8u);
    ctx->pc = 0x217BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217BD0u;
            // 0x217bd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217BD8u; }
        if (ctx->pc != 0x217BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217BD8u; }
        if (ctx->pc != 0x217BD8u) { return; }
    }
    ctx->pc = 0x217BD8u;
label_217bd8:
    // 0x217bd8: 0xc050bf4  jal         func_142FD0
label_217bdc:
    if (ctx->pc == 0x217BDCu) {
        ctx->pc = 0x217BDCu;
            // 0x217bdc: 0x8e8400a0  lw          $a0, 0xA0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
        ctx->pc = 0x217BE0u;
        goto label_217be0;
    }
    ctx->pc = 0x217BD8u;
    SET_GPR_U32(ctx, 31, 0x217BE0u);
    ctx->pc = 0x217BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217BD8u;
            // 0x217bdc: 0x8e8400a0  lw          $a0, 0xA0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217BE0u; }
        if (ctx->pc != 0x217BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217BE0u; }
        if (ctx->pc != 0x217BE0u) { return; }
    }
    ctx->pc = 0x217BE0u;
label_217be0:
    // 0x217be0: 0x8e8200a8  lw          $v0, 0xA8($s4)
    ctx->pc = 0x217be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
label_217be4:
    // 0x217be4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_217be8:
    if (ctx->pc == 0x217BE8u) {
        ctx->pc = 0x217BECu;
        goto label_217bec;
    }
    ctx->pc = 0x217BE4u;
    {
        const bool branch_taken_0x217be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217be4) {
            ctx->pc = 0x217C38u;
            goto label_217c38;
        }
    }
    ctx->pc = 0x217BECu;
label_217bec:
    // 0x217bec: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x217becu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
label_217bf0:
    // 0x217bf0: 0x26840008  addiu       $a0, $s4, 0x8
    ctx->pc = 0x217bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_217bf4:
    // 0x217bf4: 0x26850038  addiu       $a1, $s4, 0x38
    ctx->pc = 0x217bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
label_217bf8:
    // 0x217bf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x217bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217bfc:
    // 0x217bfc: 0xc050940  jal         func_142500
label_217c00:
    if (ctx->pc == 0x217C00u) {
        ctx->pc = 0x217C00u;
            // 0x217c00: 0xae800024  sw          $zero, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x217C04u;
        goto label_217c04;
    }
    ctx->pc = 0x217BFCu;
    SET_GPR_U32(ctx, 31, 0x217C04u);
    ctx->pc = 0x217C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217BFCu;
            // 0x217c00: 0xae800024  sw          $zero, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142500u;
    if (runtime->hasFunction(0x142500u)) {
        auto targetFn = runtime->lookupFunction(0x142500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C04u; }
        if (ctx->pc != 0x217C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBeginDraw__FP9mgCMemoryPiP14mgCDrawManager_0x142500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C04u; }
        if (ctx->pc != 0x217C04u) { return; }
    }
    ctx->pc = 0x217C04u;
label_217c04:
    // 0x217c04: 0xc050be4  jal         func_142F90
label_217c08:
    if (ctx->pc == 0x217C08u) {
        ctx->pc = 0x217C08u;
            // 0x217c08: 0x8e8400a8  lw          $a0, 0xA8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
        ctx->pc = 0x217C0Cu;
        goto label_217c0c;
    }
    ctx->pc = 0x217C04u;
    SET_GPR_U32(ctx, 31, 0x217C0Cu);
    ctx->pc = 0x217C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217C04u;
            // 0x217c08: 0x8e8400a8  lw          $a0, 0xA8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142F90u;
    if (runtime->hasFunction(0x142F90u)) {
        auto targetFn = runtime->lookupFunction(0x142F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C0Cu; }
        if (ctx->pc != 0x217C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDraw__FP8mgCFrame_0x142f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C0Cu; }
        if (ctx->pc != 0x217C0Cu) { return; }
    }
    ctx->pc = 0x217C0Cu;
label_217c0c:
    // 0x217c0c: 0xc050dec  jal         func_1437B0
label_217c10:
    if (ctx->pc == 0x217C10u) {
        ctx->pc = 0x217C10u;
            // 0x217c10: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x217C14u;
        goto label_217c14;
    }
    ctx->pc = 0x217C0Cu;
    SET_GPR_U32(ctx, 31, 0x217C14u);
    ctx->pc = 0x217C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217C0Cu;
            // 0x217c10: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C14u; }
        if (ctx->pc != 0x217C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C14u; }
        if (ctx->pc != 0x217C14u) { return; }
    }
    ctx->pc = 0x217C14u;
label_217c14:
    // 0x217c14: 0x8e8400f8  lw          $a0, 0xF8($s4)
    ctx->pc = 0x217c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
label_217c18:
    // 0x217c18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_217c1c:
    if (ctx->pc == 0x217C1Cu) {
        ctx->pc = 0x217C20u;
        goto label_217c20;
    }
    ctx->pc = 0x217C18u;
    {
        const bool branch_taken_0x217c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x217c18) {
            ctx->pc = 0x217C28u;
            goto label_217c28;
        }
    }
    ctx->pc = 0x217C20u;
label_217c20:
    // 0x217c20: 0xc050be4  jal         func_142F90
label_217c24:
    if (ctx->pc == 0x217C24u) {
        ctx->pc = 0x217C28u;
        goto label_217c28;
    }
    ctx->pc = 0x217C20u;
    SET_GPR_U32(ctx, 31, 0x217C28u);
    ctx->pc = 0x142F90u;
    if (runtime->hasFunction(0x142F90u)) {
        auto targetFn = runtime->lookupFunction(0x142F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C28u; }
        if (ctx->pc != 0x217C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDraw__FP8mgCFrame_0x142f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C28u; }
        if (ctx->pc != 0x217C28u) { return; }
    }
    ctx->pc = 0x217C28u;
label_217c28:
    // 0x217c28: 0xc050dec  jal         func_1437B0
label_217c2c:
    if (ctx->pc == 0x217C2Cu) {
        ctx->pc = 0x217C2Cu;
            // 0x217c2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217C30u;
        goto label_217c30;
    }
    ctx->pc = 0x217C28u;
    SET_GPR_U32(ctx, 31, 0x217C30u);
    ctx->pc = 0x217C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217C28u;
            // 0x217c2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C30u; }
        if (ctx->pc != 0x217C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C30u; }
        if (ctx->pc != 0x217C30u) { return; }
    }
    ctx->pc = 0x217C30u;
label_217c30:
    // 0x217c30: 0xc050948  jal         func_142520
label_217c34:
    if (ctx->pc == 0x217C34u) {
        ctx->pc = 0x217C34u;
            // 0x217c34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217C38u;
        goto label_217c38;
    }
    ctx->pc = 0x217C30u;
    SET_GPR_U32(ctx, 31, 0x217C38u);
    ctx->pc = 0x217C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217C30u;
            // 0x217c34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142520u;
    if (runtime->hasFunction(0x142520u)) {
        auto targetFn = runtime->lookupFunction(0x142520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C38u; }
        if (ctx->pc != 0x217C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndDraw__FP14mgCDrawManager_0x142520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C38u; }
        if (ctx->pc != 0x217C38u) { return; }
    }
    ctx->pc = 0x217C38u;
label_217c38:
    // 0x217c38: 0x8e8200a4  lw          $v0, 0xA4($s4)
    ctx->pc = 0x217c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_217c3c:
    // 0x217c3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_217c40:
    if (ctx->pc == 0x217C40u) {
        ctx->pc = 0x217C44u;
        goto label_217c44;
    }
    ctx->pc = 0x217C3Cu;
    {
        const bool branch_taken_0x217c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217c3c) {
            ctx->pc = 0x217C5Cu;
            goto label_217c5c;
        }
    }
    ctx->pc = 0x217C44u;
label_217c44:
    // 0x217c44: 0x868500b2  lh          $a1, 0xB2($s4)
    ctx->pc = 0x217c44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 178)));
label_217c48:
    // 0x217c48: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x217c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_217c4c:
    // 0x217c4c: 0xc04ba14  jal         func_12E850
label_217c50:
    if (ctx->pc == 0x217C50u) {
        ctx->pc = 0x217C50u;
            // 0x217c50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217C54u;
        goto label_217c54;
    }
    ctx->pc = 0x217C4Cu;
    SET_GPR_U32(ctx, 31, 0x217C54u);
    ctx->pc = 0x217C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217C4Cu;
            // 0x217c50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C54u; }
        if (ctx->pc != 0x217C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C54u; }
        if (ctx->pc != 0x217C54u) { return; }
    }
    ctx->pc = 0x217C54u;
label_217c54:
    // 0x217c54: 0xc050bf4  jal         func_142FD0
label_217c58:
    if (ctx->pc == 0x217C58u) {
        ctx->pc = 0x217C58u;
            // 0x217c58: 0x8e8400a4  lw          $a0, 0xA4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
        ctx->pc = 0x217C5Cu;
        goto label_217c5c;
    }
    ctx->pc = 0x217C54u;
    SET_GPR_U32(ctx, 31, 0x217C5Cu);
    ctx->pc = 0x217C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217C54u;
            // 0x217c58: 0x8e8400a4  lw          $a0, 0xA4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C5Cu; }
        if (ctx->pc != 0x217C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C5Cu; }
        if (ctx->pc != 0x217C5Cu) { return; }
    }
    ctx->pc = 0x217C5Cu;
label_217c5c:
    // 0x217c5c: 0x8e820320  lw          $v0, 0x320($s4)
    ctx->pc = 0x217c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_217c60:
    // 0x217c60: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_217c64:
    if (ctx->pc == 0x217C64u) {
        ctx->pc = 0x217C68u;
        goto label_217c68;
    }
    ctx->pc = 0x217C60u;
    {
        const bool branch_taken_0x217c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217c60) {
            ctx->pc = 0x217C8Cu;
            goto label_217c8c;
        }
    }
    ctx->pc = 0x217C68u;
label_217c68:
    // 0x217c68: 0x86850324  lh          $a1, 0x324($s4)
    ctx->pc = 0x217c68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 804)));
label_217c6c:
    // 0x217c6c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x217c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_217c70:
    // 0x217c70: 0xc04ba14  jal         func_12E850
label_217c74:
    if (ctx->pc == 0x217C74u) {
        ctx->pc = 0x217C74u;
            // 0x217c74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217C78u;
        goto label_217c78;
    }
    ctx->pc = 0x217C70u;
    SET_GPR_U32(ctx, 31, 0x217C78u);
    ctx->pc = 0x217C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217C70u;
            // 0x217c74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C78u; }
        if (ctx->pc != 0x217C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C78u; }
        if (ctx->pc != 0x217C78u) { return; }
    }
    ctx->pc = 0x217C78u;
label_217c78:
    // 0x217c78: 0x8e840320  lw          $a0, 0x320($s4)
    ctx->pc = 0x217c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_217c7c:
    // 0x217c7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x217c7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_217c80:
    // 0x217c80: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x217c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_217c84:
    // 0x217c84: 0x320f809  jalr        $t9
label_217c88:
    if (ctx->pc == 0x217C88u) {
        ctx->pc = 0x217C8Cu;
        goto label_217c8c;
    }
    ctx->pc = 0x217C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x217C8Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x217C8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x217C8Cu; }
            if (ctx->pc != 0x217C8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x217C8Cu;
label_217c8c:
    // 0x217c8c: 0x86850190  lh          $a1, 0x190($s4)
    ctx->pc = 0x217c8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 400)));
label_217c90:
    // 0x217c90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x217c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_217c94:
    // 0x217c94: 0xc04ba14  jal         func_12E850
label_217c98:
    if (ctx->pc == 0x217C98u) {
        ctx->pc = 0x217C98u;
            // 0x217c98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217C9Cu;
        goto label_217c9c;
    }
    ctx->pc = 0x217C94u;
    SET_GPR_U32(ctx, 31, 0x217C9Cu);
    ctx->pc = 0x217C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217C94u;
            // 0x217c98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C9Cu; }
        if (ctx->pc != 0x217C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C9Cu; }
        if (ctx->pc != 0x217C9Cu) { return; }
    }
    ctx->pc = 0x217C9Cu;
label_217c9c:
    // 0x217c9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x217c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217ca0:
    // 0x217ca0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x217ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217ca4:
    // 0x217ca4: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x217ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_217ca8:
    // 0x217ca8: 0x2442c440  addiu       $v0, $v0, -0x3BC0
    ctx->pc = 0x217ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952000));
label_217cac:
    // 0x217cac: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x217cacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_217cb0:
    // 0x217cb0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x217cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_217cb4:
    // 0x217cb4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_217cb8:
    if (ctx->pc == 0x217CB8u) {
        ctx->pc = 0x217CBCu;
        goto label_217cbc;
    }
    ctx->pc = 0x217CB4u;
    {
        const bool branch_taken_0x217cb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x217cb4) {
            ctx->pc = 0x217CD4u;
            goto label_217cd4;
        }
    }
    ctx->pc = 0x217CBCu;
label_217cbc:
    // 0x217cbc: 0x8f8591d0  lw          $a1, -0x6E30($gp)
    ctx->pc = 0x217cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
label_217cc0:
    // 0x217cc0: 0x240600f8  addiu       $a2, $zero, 0xF8
    ctx->pc = 0x217cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_217cc4:
    // 0x217cc4: 0xc083340  jal         func_20CD00
label_217cc8:
    if (ctx->pc == 0x217CC8u) {
        ctx->pc = 0x217CC8u;
            // 0x217cc8: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x217CCCu;
        goto label_217ccc;
    }
    ctx->pc = 0x217CC4u;
    SET_GPR_U32(ctx, 31, 0x217CCCu);
    ctx->pc = 0x217CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217CC4u;
            // 0x217cc8: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20CD00u;
    if (runtime->hasFunction(0x20CD00u)) {
        auto targetFn = runtime->lookupFunction(0x20CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217CCCu; }
        if (ctx->pc != 0x217CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexture__7CBubbleFP10mgCTextureii_0x20cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217CCCu; }
        if (ctx->pc != 0x217CCCu) { return; }
    }
    ctx->pc = 0x217CCCu;
label_217ccc:
    // 0x217ccc: 0xc0833f4  jal         func_20CFD0
label_217cd0:
    if (ctx->pc == 0x217CD0u) {
        ctx->pc = 0x217CD0u;
            // 0x217cd0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x217CD4u;
        goto label_217cd4;
    }
    ctx->pc = 0x217CCCu;
    SET_GPR_U32(ctx, 31, 0x217CD4u);
    ctx->pc = 0x217CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217CCCu;
            // 0x217cd0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20CFD0u;
    if (runtime->hasFunction(0x20CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x20CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217CD4u; }
        if (ctx->pc != 0x217CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__7CBubbleFv_0x20cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217CD4u; }
        if (ctx->pc != 0x217CD4u) { return; }
    }
    ctx->pc = 0x217CD4u;
label_217cd4:
    // 0x217cd4: 0x0  nop
    ctx->pc = 0x217cd4u;
    // NOP
label_217cd8:
    // 0x217cd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x217cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_217cdc:
    // 0x217cdc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x217cdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_217ce0:
    // 0x217ce0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_217ce4:
    if (ctx->pc == 0x217CE4u) {
        ctx->pc = 0x217CE4u;
            // 0x217ce4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x217CE8u;
        goto label_217ce8;
    }
    ctx->pc = 0x217CE0u;
    {
        const bool branch_taken_0x217ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217CE0u;
            // 0x217ce4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ce0) {
            ctx->pc = 0x217CA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217ca4;
        }
    }
    ctx->pc = 0x217CE8u;
label_217ce8:
    // 0x217ce8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x217ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217cec:
    // 0x217cec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x217cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217cf0:
    // 0x217cf0: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x217cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_217cf4:
    // 0x217cf4: 0x2442c450  addiu       $v0, $v0, -0x3BB0
    ctx->pc = 0x217cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952016));
label_217cf8:
    // 0x217cf8: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x217cf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_217cfc:
    // 0x217cfc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x217cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_217d00:
    // 0x217d00: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_217d04:
    if (ctx->pc == 0x217D04u) {
        ctx->pc = 0x217D08u;
        goto label_217d08;
    }
    ctx->pc = 0x217D00u;
    {
        const bool branch_taken_0x217d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x217d00) {
            ctx->pc = 0x217D20u;
            goto label_217d20;
        }
    }
    ctx->pc = 0x217D08u;
label_217d08:
    // 0x217d08: 0x8f8591d0  lw          $a1, -0x6E30($gp)
    ctx->pc = 0x217d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
label_217d0c:
    // 0x217d0c: 0x240600f8  addiu       $a2, $zero, 0xF8
    ctx->pc = 0x217d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_217d10:
    // 0x217d10: 0xc083340  jal         func_20CD00
label_217d14:
    if (ctx->pc == 0x217D14u) {
        ctx->pc = 0x217D14u;
            // 0x217d14: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x217D18u;
        goto label_217d18;
    }
    ctx->pc = 0x217D10u;
    SET_GPR_U32(ctx, 31, 0x217D18u);
    ctx->pc = 0x217D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217D10u;
            // 0x217d14: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20CD00u;
    if (runtime->hasFunction(0x20CD00u)) {
        auto targetFn = runtime->lookupFunction(0x20CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217D18u; }
        if (ctx->pc != 0x217D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexture__7CBubbleFP10mgCTextureii_0x20cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217D18u; }
        if (ctx->pc != 0x217D18u) { return; }
    }
    ctx->pc = 0x217D18u;
label_217d18:
    // 0x217d18: 0xc0833f4  jal         func_20CFD0
label_217d1c:
    if (ctx->pc == 0x217D1Cu) {
        ctx->pc = 0x217D1Cu;
            // 0x217d1c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x217D20u;
        goto label_217d20;
    }
    ctx->pc = 0x217D18u;
    SET_GPR_U32(ctx, 31, 0x217D20u);
    ctx->pc = 0x217D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217D18u;
            // 0x217d1c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20CFD0u;
    if (runtime->hasFunction(0x20CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x20CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217D20u; }
        if (ctx->pc != 0x217D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__7CBubbleFv_0x20cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217D20u; }
        if (ctx->pc != 0x217D20u) { return; }
    }
    ctx->pc = 0x217D20u;
label_217d20:
    // 0x217d20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x217d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_217d24:
    // 0x217d24: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x217d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_217d28:
    // 0x217d28: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_217d2c:
    if (ctx->pc == 0x217D2Cu) {
        ctx->pc = 0x217D2Cu;
            // 0x217d2c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x217D30u;
        goto label_217d30;
    }
    ctx->pc = 0x217D28u;
    {
        const bool branch_taken_0x217d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217D28u;
            // 0x217d2c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d28) {
            ctx->pc = 0x217CF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217cf0;
        }
    }
    ctx->pc = 0x217D30u;
label_217d30:
    // 0x217d30: 0x8f8291f8  lw          $v0, -0x6E08($gp)
    ctx->pc = 0x217d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939128)));
label_217d34:
    // 0x217d34: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_217d38:
    if (ctx->pc == 0x217D38u) {
        ctx->pc = 0x217D38u;
            // 0x217d38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217D3Cu;
        goto label_217d3c;
    }
    ctx->pc = 0x217D34u;
    {
        const bool branch_taken_0x217d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217D34u;
            // 0x217d38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d34) {
            ctx->pc = 0x217D74u;
            goto label_217d74;
        }
    }
    ctx->pc = 0x217D3Cu;
label_217d3c:
    // 0x217d3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x217d3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217d40:
    // 0x217d40: 0x8f8291f8  lw          $v0, -0x6E08($gp)
    ctx->pc = 0x217d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939128)));
label_217d44:
    // 0x217d44: 0x240600f8  addiu       $a2, $zero, 0xF8
    ctx->pc = 0x217d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_217d48:
    // 0x217d48: 0x8f8591d0  lw          $a1, -0x6E30($gp)
    ctx->pc = 0x217d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
label_217d4c:
    // 0x217d4c: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x217d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_217d50:
    // 0x217d50: 0xc083340  jal         func_20CD00
label_217d54:
    if (ctx->pc == 0x217D54u) {
        ctx->pc = 0x217D54u;
            // 0x217d54: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x217D58u;
        goto label_217d58;
    }
    ctx->pc = 0x217D50u;
    SET_GPR_U32(ctx, 31, 0x217D58u);
    ctx->pc = 0x217D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217D50u;
            // 0x217d54: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20CD00u;
    if (runtime->hasFunction(0x20CD00u)) {
        auto targetFn = runtime->lookupFunction(0x20CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217D58u; }
        if (ctx->pc != 0x217D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexture__7CBubbleFP10mgCTextureii_0x20cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217D58u; }
        if (ctx->pc != 0x217D58u) { return; }
    }
    ctx->pc = 0x217D58u;
label_217d58:
    // 0x217d58: 0x8f8291f8  lw          $v0, -0x6E08($gp)
    ctx->pc = 0x217d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939128)));
label_217d5c:
    // 0x217d5c: 0xc0833f4  jal         func_20CFD0
label_217d60:
    if (ctx->pc == 0x217D60u) {
        ctx->pc = 0x217D60u;
            // 0x217d60: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x217D64u;
        goto label_217d64;
    }
    ctx->pc = 0x217D5Cu;
    SET_GPR_U32(ctx, 31, 0x217D64u);
    ctx->pc = 0x217D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217D5Cu;
            // 0x217d60: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20CFD0u;
    if (runtime->hasFunction(0x20CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x20CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217D64u; }
        if (ctx->pc != 0x217D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__7CBubbleFv_0x20cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217D64u; }
        if (ctx->pc != 0x217D64u) { return; }
    }
    ctx->pc = 0x217D64u;
label_217d64:
    // 0x217d64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x217d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_217d68:
    // 0x217d68: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x217d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
label_217d6c:
    // 0x217d6c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_217d70:
    if (ctx->pc == 0x217D70u) {
        ctx->pc = 0x217D70u;
            // 0x217d70: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->pc = 0x217D74u;
        goto label_217d74;
    }
    ctx->pc = 0x217D6Cu;
    {
        const bool branch_taken_0x217d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217D6Cu;
            // 0x217d70: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d6c) {
            ctx->pc = 0x217D40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217d40;
        }
    }
    ctx->pc = 0x217D74u;
label_217d74:
    // 0x217d74: 0x0  nop
    ctx->pc = 0x217d74u;
    // NOP
label_217d78:
    // 0x217d78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x217d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217d7c:
    // 0x217d7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x217d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217d80:
    // 0x217d80: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x217d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_217d84:
    // 0x217d84: 0x2442c480  addiu       $v0, $v0, -0x3B80
    ctx->pc = 0x217d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952064));
label_217d88:
    // 0x217d88: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x217d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_217d8c:
    // 0x217d8c: 0xc083bf0  jal         func_20EFC0
label_217d90:
    if (ctx->pc == 0x217D90u) {
        ctx->pc = 0x217D90u;
            // 0x217d90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x217D94u;
        goto label_217d94;
    }
    ctx->pc = 0x217D8Cu;
    SET_GPR_U32(ctx, 31, 0x217D94u);
    ctx->pc = 0x217D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217D8Cu;
            // 0x217d90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20EFC0u;
    if (runtime->hasFunction(0x20EFC0u)) {
        auto targetFn = runtime->lookupFunction(0x20EFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217D94u; }
        if (ctx->pc != 0x217D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__12CAquaFishEffFv_0x20efc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217D94u; }
        if (ctx->pc != 0x217D94u) { return; }
    }
    ctx->pc = 0x217D94u;
label_217d94:
    // 0x217d94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x217d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_217d98:
    // 0x217d98: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x217d98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_217d9c:
    // 0x217d9c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_217da0:
    if (ctx->pc == 0x217DA0u) {
        ctx->pc = 0x217DA0u;
            // 0x217da0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x217DA4u;
        goto label_217da4;
    }
    ctx->pc = 0x217D9Cu;
    {
        const bool branch_taken_0x217d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217D9Cu;
            // 0x217da0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d9c) {
            ctx->pc = 0x217D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217d80;
        }
    }
    ctx->pc = 0x217DA4u;
label_217da4:
    // 0x217da4: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x217da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
label_217da8:
    // 0x217da8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_217dac:
    if (ctx->pc == 0x217DACu) {
        ctx->pc = 0x217DACu;
            // 0x217dac: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->pc = 0x217DB0u;
        goto label_217db0;
    }
    ctx->pc = 0x217DA8u;
    {
        const bool branch_taken_0x217da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217DA8u;
            // 0x217dac: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217da8) {
            ctx->pc = 0x217DF8u;
            goto label_217df8;
        }
    }
    ctx->pc = 0x217DB0u;
label_217db0:
    // 0x217db0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x217db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_217db4:
    // 0x217db4: 0x2442fca0  addiu       $v0, $v0, -0x360
    ctx->pc = 0x217db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966432));
label_217db8:
    // 0x217db8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x217db8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_217dbc:
    // 0x217dbc: 0xc050dec  jal         func_1437B0
label_217dc0:
    if (ctx->pc == 0x217DC0u) {
        ctx->pc = 0x217DC0u;
            // 0x217dc0: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x217DC4u;
        goto label_217dc4;
    }
    ctx->pc = 0x217DBCu;
    SET_GPR_U32(ctx, 31, 0x217DC4u);
    ctx->pc = 0x217DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217DBCu;
            // 0x217dc0: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DC4u; }
        if (ctx->pc != 0x217DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DC4u; }
        if (ctx->pc != 0x217DC4u) { return; }
    }
    ctx->pc = 0x217DC4u;
label_217dc4:
    // 0x217dc4: 0x868500bc  lh          $a1, 0xBC($s4)
    ctx->pc = 0x217dc4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 188)));
label_217dc8:
    // 0x217dc8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x217dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_217dcc:
    // 0x217dcc: 0xc04ba14  jal         func_12E850
label_217dd0:
    if (ctx->pc == 0x217DD0u) {
        ctx->pc = 0x217DD0u;
            // 0x217dd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217DD4u;
        goto label_217dd4;
    }
    ctx->pc = 0x217DCCu;
    SET_GPR_U32(ctx, 31, 0x217DD4u);
    ctx->pc = 0x217DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217DCCu;
            // 0x217dd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DD4u; }
        if (ctx->pc != 0x217DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DD4u; }
        if (ctx->pc != 0x217DD4u) { return; }
    }
    ctx->pc = 0x217DD4u;
label_217dd4:
    // 0x217dd4: 0xc050bf4  jal         func_142FD0
label_217dd8:
    if (ctx->pc == 0x217DD8u) {
        ctx->pc = 0x217DD8u;
            // 0x217dd8: 0x8e8400c0  lw          $a0, 0xC0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
        ctx->pc = 0x217DDCu;
        goto label_217ddc;
    }
    ctx->pc = 0x217DD4u;
    SET_GPR_U32(ctx, 31, 0x217DDCu);
    ctx->pc = 0x217DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217DD4u;
            // 0x217dd8: 0x8e8400c0  lw          $a0, 0xC0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DDCu; }
        if (ctx->pc != 0x217DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DDCu; }
        if (ctx->pc != 0x217DDCu) { return; }
    }
    ctx->pc = 0x217DDCu;
label_217ddc:
    // 0x217ddc: 0x8e8400ac  lw          $a0, 0xAC($s4)
    ctx->pc = 0x217ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
label_217de0:
    // 0x217de0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_217de4:
    if (ctx->pc == 0x217DE4u) {
        ctx->pc = 0x217DE8u;
        goto label_217de8;
    }
    ctx->pc = 0x217DE0u;
    {
        const bool branch_taken_0x217de0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x217de0) {
            ctx->pc = 0x217DF0u;
            goto label_217df0;
        }
    }
    ctx->pc = 0x217DE8u;
label_217de8:
    // 0x217de8: 0xc050bf4  jal         func_142FD0
label_217dec:
    if (ctx->pc == 0x217DECu) {
        ctx->pc = 0x217DF0u;
        goto label_217df0;
    }
    ctx->pc = 0x217DE8u;
    SET_GPR_U32(ctx, 31, 0x217DF0u);
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DF0u; }
        if (ctx->pc != 0x217DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DF0u; }
        if (ctx->pc != 0x217DF0u) { return; }
    }
    ctx->pc = 0x217DF0u;
label_217df0:
    // 0x217df0: 0xc050dec  jal         func_1437B0
label_217df4:
    if (ctx->pc == 0x217DF4u) {
        ctx->pc = 0x217DF4u;
            // 0x217df4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217DF8u;
        goto label_217df8;
    }
    ctx->pc = 0x217DF0u;
    SET_GPR_U32(ctx, 31, 0x217DF8u);
    ctx->pc = 0x217DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217DF0u;
            // 0x217df4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DF8u; }
        if (ctx->pc != 0x217DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DF8u; }
        if (ctx->pc != 0x217DF8u) { return; }
    }
    ctx->pc = 0x217DF8u;
label_217df8:
    // 0x217df8: 0x8e840320  lw          $a0, 0x320($s4)
    ctx->pc = 0x217df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_217dfc:
    // 0x217dfc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_217e00:
    if (ctx->pc == 0x217E00u) {
        ctx->pc = 0x217E04u;
        goto label_217e04;
    }
    ctx->pc = 0x217DFCu;
    {
        const bool branch_taken_0x217dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x217dfc) {
            ctx->pc = 0x217E1Cu;
            goto label_217e1c;
        }
    }
    ctx->pc = 0x217E04u;
label_217e04:
    // 0x217e04: 0x92820384  lbu         $v0, 0x384($s4)
    ctx->pc = 0x217e04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 900)));
label_217e08:
    // 0x217e08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_217e0c:
    if (ctx->pc == 0x217E0Cu) {
        ctx->pc = 0x217E0Cu;
            // 0x217e0c: 0x3c024240  lui         $v0, 0x4240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
        ctx->pc = 0x217E10u;
        goto label_217e10;
    }
    ctx->pc = 0x217E08u;
    {
        const bool branch_taken_0x217e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217E08u;
            // 0x217e0c: 0x3c024240  lui         $v0, 0x4240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217e08) {
            ctx->pc = 0x217E1Cu;
            goto label_217e1c;
        }
    }
    ctx->pc = 0x217E10u;
label_217e10:
    // 0x217e10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x217e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_217e14:
    // 0x217e14: 0xc083e3c  jal         func_20F8F0
label_217e18:
    if (ctx->pc == 0x217E18u) {
        ctx->pc = 0x217E1Cu;
        goto label_217e1c;
    }
    ctx->pc = 0x217E14u;
    SET_GPR_U32(ctx, 31, 0x217E1Cu);
    ctx->pc = 0x20F8F0u;
    if (runtime->hasFunction(0x20F8F0u)) {
        auto targetFn = runtime->lookupFunction(0x20F8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217E1Cu; }
        if (ctx->pc != 0x217E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawEsaDropRoot__FP9CFishFoodf_0x20f8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217E1Cu; }
        if (ctx->pc != 0x217E1Cu) { return; }
    }
    ctx->pc = 0x217E1Cu;
label_217e1c:
    // 0x217e1c: 0x8e8200b8  lw          $v0, 0xB8($s4)
    ctx->pc = 0x217e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
label_217e20:
    // 0x217e20: 0x10400201  beqz        $v0, . + 4 + (0x201 << 2)
label_217e24:
    if (ctx->pc == 0x217E24u) {
        ctx->pc = 0x217E28u;
        goto label_217e28;
    }
    ctx->pc = 0x217E20u;
    {
        const bool branch_taken_0x217e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217e20) {
            ctx->pc = 0x218628u;
            goto label_218628;
        }
    }
    ctx->pc = 0x217E28u;
label_217e28:
    // 0x217e28: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x217e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_217e2c:
    // 0x217e2c: 0xc04c574  jal         func_1315D0
label_217e30:
    if (ctx->pc == 0x217E30u) {
        ctx->pc = 0x217E30u;
            // 0x217e30: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x217E34u;
        goto label_217e34;
    }
    ctx->pc = 0x217E2Cu;
    SET_GPR_U32(ctx, 31, 0x217E34u);
    ctx->pc = 0x217E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217E2Cu;
            // 0x217e30: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217E34u; }
        if (ctx->pc != 0x217E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217E34u; }
        if (ctx->pc != 0x217E34u) { return; }
    }
    ctx->pc = 0x217E34u;
label_217e34:
    // 0x217e34: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x217e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_217e38:
    // 0x217e38: 0x3c02423c  lui         $v0, 0x423C
    ctx->pc = 0x217e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16956 << 16));
label_217e3c:
    // 0x217e3c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x217e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_217e40:
    // 0x217e40: 0x0  nop
    ctx->pc = 0x217e40u;
    // NOP
label_217e44:
    // 0x217e44: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x217e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_217e48:
    // 0x217e48: 0x0  nop
    ctx->pc = 0x217e48u;
    // NOP
label_217e4c:
    // 0x217e4c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_217e50:
    if (ctx->pc == 0x217E50u) {
        ctx->pc = 0x217E54u;
        goto label_217e54;
    }
    ctx->pc = 0x217E4Cu;
    {
        const bool branch_taken_0x217e4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x217e4c) {
            ctx->pc = 0x217E8Cu;
            goto label_217e8c;
        }
    }
    ctx->pc = 0x217E54u;
label_217e54:
    // 0x217e54: 0x8e8400b8  lw          $a0, 0xB8($s4)
    ctx->pc = 0x217e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
label_217e58:
    // 0x217e58: 0x3c02423b  lui         $v0, 0x423B
    ctx->pc = 0x217e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16955 << 16));
label_217e5c:
    // 0x217e5c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x217e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_217e60:
    // 0x217e60: 0x3c03c208  lui         $v1, 0xC208
    ctx->pc = 0x217e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49672 << 16));
label_217e64:
    // 0x217e64: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x217e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_217e68:
    // 0x217e68: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x217e68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_217e6c:
    // 0x217e6c: 0x3c02c1ac  lui         $v0, 0xC1AC
    ctx->pc = 0x217e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49580 << 16));
label_217e70:
    // 0x217e70: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x217e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_217e74:
    // 0x217e74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x217e74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_217e78:
    // 0x217e78: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x217e78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_217e7c:
    // 0x217e7c: 0x320f809  jalr        $t9
label_217e80:
    if (ctx->pc == 0x217E80u) {
        ctx->pc = 0x217E84u;
        goto label_217e84;
    }
    ctx->pc = 0x217E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x217E84u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x217E84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x217E84u; }
            if (ctx->pc != 0x217E84u) { return; }
        }
        }
    }
    ctx->pc = 0x217E84u;
label_217e84:
    // 0x217e84: 0x1000000b  b           . + 4 + (0xB << 2)
label_217e88:
    if (ctx->pc == 0x217E88u) {
        ctx->pc = 0x217E88u;
            // 0x217e88: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x217E8Cu;
        goto label_217e8c;
    }
    ctx->pc = 0x217E84u;
    {
        const bool branch_taken_0x217e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217E84u;
            // 0x217e88: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217e84) {
            ctx->pc = 0x217EB4u;
            goto label_217eb4;
        }
    }
    ctx->pc = 0x217E8Cu;
label_217e8c:
    // 0x217e8c: 0x8e8400b8  lw          $a0, 0xB8($s4)
    ctx->pc = 0x217e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
label_217e90:
    // 0x217e90: 0x3c03c208  lui         $v1, 0xC208
    ctx->pc = 0x217e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49672 << 16));
label_217e94:
    // 0x217e94: 0x3c02c1ac  lui         $v0, 0xC1AC
    ctx->pc = 0x217e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49580 << 16));
label_217e98:
    // 0x217e98: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x217e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_217e9c:
    // 0x217e9c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x217e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_217ea0:
    // 0x217ea0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x217ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_217ea4:
    // 0x217ea4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x217ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_217ea8:
    // 0x217ea8: 0x320f809  jalr        $t9
label_217eac:
    if (ctx->pc == 0x217EACu) {
        ctx->pc = 0x217EB0u;
        goto label_217eb0;
    }
    ctx->pc = 0x217EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x217EB0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x217EB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x217EB0u; }
            if (ctx->pc != 0x217EB0u) { return; }
        }
        }
    }
    ctx->pc = 0x217EB0u;
label_217eb0:
    // 0x217eb0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x217eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_217eb4:
    // 0x217eb4: 0xc04c050  jal         func_130140
label_217eb8:
    if (ctx->pc == 0x217EB8u) {
        ctx->pc = 0x217EBCu;
        goto label_217ebc;
    }
    ctx->pc = 0x217EB4u;
    SET_GPR_U32(ctx, 31, 0x217EBCu);
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217EBCu; }
        if (ctx->pc != 0x217EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217EBCu; }
        if (ctx->pc != 0x217EBCu) { return; }
    }
    ctx->pc = 0x217EBCu;
label_217ebc:
    // 0x217ebc: 0x868500bc  lh          $a1, 0xBC($s4)
    ctx->pc = 0x217ebcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 188)));
label_217ec0:
    // 0x217ec0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x217ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_217ec4:
    // 0x217ec4: 0xc04ba14  jal         func_12E850
label_217ec8:
    if (ctx->pc == 0x217EC8u) {
        ctx->pc = 0x217EC8u;
            // 0x217ec8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217ECCu;
        goto label_217ecc;
    }
    ctx->pc = 0x217EC4u;
    SET_GPR_U32(ctx, 31, 0x217ECCu);
    ctx->pc = 0x217EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217EC4u;
            // 0x217ec8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217ECCu; }
        if (ctx->pc != 0x217ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217ECCu; }
        if (ctx->pc != 0x217ECCu) { return; }
    }
    ctx->pc = 0x217ECCu;
label_217ecc:
    // 0x217ecc: 0xc04b120  jal         func_12C480
label_217ed0:
    if (ctx->pc == 0x217ED0u) {
        ctx->pc = 0x217ED0u;
            // 0x217ed0: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x217ED4u;
        goto label_217ed4;
    }
    ctx->pc = 0x217ECCu;
    SET_GPR_U32(ctx, 31, 0x217ED4u);
    ctx->pc = 0x217ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217ECCu;
            // 0x217ed0: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217ED4u; }
        if (ctx->pc != 0x217ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217ED4u; }
        if (ctx->pc != 0x217ED4u) { return; }
    }
    ctx->pc = 0x217ED4u;
label_217ed4:
    // 0x217ed4: 0xc0510c0  jal         func_144300
label_217ed8:
    if (ctx->pc == 0x217ED8u) {
        ctx->pc = 0x217ED8u;
            // 0x217ed8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x217EDCu;
        goto label_217edc;
    }
    ctx->pc = 0x217ED4u;
    SET_GPR_U32(ctx, 31, 0x217EDCu);
    ctx->pc = 0x217ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217ED4u;
            // 0x217ed8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144300u;
    if (runtime->hasFunction(0x144300u)) {
        auto targetFn = runtime->lookupFunction(0x144300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217EDCu; }
        if (ctx->pc != 0x217EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFrameBuffer__FP10mgCTexture_0x144300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217EDCu; }
        if (ctx->pc != 0x217EDCu) { return; }
    }
    ctx->pc = 0x217EDCu;
label_217edc:
    // 0x217edc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x217edcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_217ee0:
    // 0x217ee0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x217ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_217ee4:
    // 0x217ee4: 0x24a5a070  addiu       $a1, $a1, -0x5F90
    ctx->pc = 0x217ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942832));
label_217ee8:
    // 0x217ee8: 0xc04b414  jal         func_12D050
label_217eec:
    if (ctx->pc == 0x217EECu) {
        ctx->pc = 0x217EECu;
            // 0x217eec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x217EF0u;
        goto label_217ef0;
    }
    ctx->pc = 0x217EE8u;
    SET_GPR_U32(ctx, 31, 0x217EF0u);
    ctx->pc = 0x217EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217EE8u;
            // 0x217eec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217EF0u; }
        if (ctx->pc != 0x217EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217EF0u; }
        if (ctx->pc != 0x217EF0u) { return; }
    }
    ctx->pc = 0x217EF0u;
label_217ef0:
    // 0x217ef0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x217ef0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_217ef4:
    // 0x217ef4: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x217ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_217ef8:
    // 0x217ef8: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x217ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_217efc:
    // 0x217efc: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x217efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_217f00:
    // 0x217f00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x217f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217f04:
    // 0x217f04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x217f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217f08:
    // 0x217f08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x217f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_217f0c:
    // 0x217f0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x217f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_217f10:
    // 0x217f10: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x217f10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_217f14:
    // 0x217f14: 0xc04f8e4  jal         func_13E390
label_217f18:
    if (ctx->pc == 0x217F18u) {
        ctx->pc = 0x217F18u;
            // 0x217f18: 0x24100  sll         $t0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x217F1Cu;
        goto label_217f1c;
    }
    ctx->pc = 0x217F14u;
    SET_GPR_U32(ctx, 31, 0x217F1Cu);
    ctx->pc = 0x217F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217F14u;
            // 0x217f18: 0x24100  sll         $t0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F1Cu; }
        if (ctx->pc != 0x217F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F1Cu; }
        if (ctx->pc != 0x217F1Cu) { return; }
    }
    ctx->pc = 0x217F1Cu;
label_217f1c:
    // 0x217f1c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x217f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_217f20:
    // 0x217f20: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x217f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_217f24:
    // 0x217f24: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x217f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_217f28:
    // 0x217f28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x217f28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217f2c:
    // 0x217f2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x217f2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217f30:
    // 0x217f30: 0xc051158  jal         func_144560
label_217f34:
    if (ctx->pc == 0x217F34u) {
        ctx->pc = 0x217F34u;
            // 0x217f34: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217F38u;
        goto label_217f38;
    }
    ctx->pc = 0x217F30u;
    SET_GPR_U32(ctx, 31, 0x217F38u);
    ctx->pc = 0x217F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217F30u;
            // 0x217f34: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144560u;
    if (runtime->hasFunction(0x144560u)) {
        auto targetFn = runtime->lookupFunction(0x144560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F38u; }
        if (ctx->pc != 0x217F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkMoveImage__FP10mgCTexture9mgRect_i_P10mgCTextureiii_0x144560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F38u; }
        if (ctx->pc != 0x217F38u) { return; }
    }
    ctx->pc = 0x217F38u;
label_217f38:
    // 0x217f38: 0xc04d0e8  jal         func_1343A0
label_217f3c:
    if (ctx->pc == 0x217F3Cu) {
        ctx->pc = 0x217F3Cu;
            // 0x217f3c: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x217F40u;
        goto label_217f40;
    }
    ctx->pc = 0x217F38u;
    SET_GPR_U32(ctx, 31, 0x217F40u);
    ctx->pc = 0x217F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217F38u;
            // 0x217f3c: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F40u; }
        if (ctx->pc != 0x217F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F40u; }
        if (ctx->pc != 0x217F40u) { return; }
    }
    ctx->pc = 0x217F40u;
label_217f40:
    // 0x217f40: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x217f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_217f44:
    // 0x217f44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x217f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217f48:
    // 0x217f48: 0xc04d104  jal         func_134410
label_217f4c:
    if (ctx->pc == 0x217F4Cu) {
        ctx->pc = 0x217F4Cu;
            // 0x217f4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217F50u;
        goto label_217f50;
    }
    ctx->pc = 0x217F48u;
    SET_GPR_U32(ctx, 31, 0x217F50u);
    ctx->pc = 0x217F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217F48u;
            // 0x217f4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F50u; }
        if (ctx->pc != 0x217F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F50u; }
        if (ctx->pc != 0x217F50u) { return; }
    }
    ctx->pc = 0x217F50u;
label_217f50:
    // 0x217f50: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x217f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_217f54:
    // 0x217f54: 0xc04d3e4  jal         func_134F90
label_217f58:
    if (ctx->pc == 0x217F58u) {
        ctx->pc = 0x217F58u;
            // 0x217f58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217F5Cu;
        goto label_217f5c;
    }
    ctx->pc = 0x217F54u;
    SET_GPR_U32(ctx, 31, 0x217F5Cu);
    ctx->pc = 0x217F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217F54u;
            // 0x217f58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F5Cu; }
        if (ctx->pc != 0x217F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F5Cu; }
        if (ctx->pc != 0x217F5Cu) { return; }
    }
    ctx->pc = 0x217F5Cu;
label_217f5c:
    // 0x217f5c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x217f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_217f60:
    // 0x217f60: 0xc04d424  jal         func_135090
label_217f64:
    if (ctx->pc == 0x217F64u) {
        ctx->pc = 0x217F64u;
            // 0x217f64: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x217F68u;
        goto label_217f68;
    }
    ctx->pc = 0x217F60u;
    SET_GPR_U32(ctx, 31, 0x217F68u);
    ctx->pc = 0x217F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217F60u;
            // 0x217f64: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F68u; }
        if (ctx->pc != 0x217F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F68u; }
        if (ctx->pc != 0x217F68u) { return; }
    }
    ctx->pc = 0x217F68u;
label_217f68:
    // 0x217f68: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x217f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_217f6c:
    // 0x217f6c: 0xc04d428  jal         func_1350A0
label_217f70:
    if (ctx->pc == 0x217F70u) {
        ctx->pc = 0x217F70u;
            // 0x217f70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x217F74u;
        goto label_217f74;
    }
    ctx->pc = 0x217F6Cu;
    SET_GPR_U32(ctx, 31, 0x217F74u);
    ctx->pc = 0x217F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217F6Cu;
            // 0x217f70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F74u; }
        if (ctx->pc != 0x217F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F74u; }
        if (ctx->pc != 0x217F74u) { return; }
    }
    ctx->pc = 0x217F74u;
label_217f74:
    // 0x217f74: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x217f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_217f78:
    // 0x217f78: 0xc04d3b0  jal         func_134EC0
label_217f7c:
    if (ctx->pc == 0x217F7Cu) {
        ctx->pc = 0x217F7Cu;
            // 0x217f7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217F80u;
        goto label_217f80;
    }
    ctx->pc = 0x217F78u;
    SET_GPR_U32(ctx, 31, 0x217F80u);
    ctx->pc = 0x217F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217F78u;
            // 0x217f7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F80u; }
        if (ctx->pc != 0x217F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F80u; }
        if (ctx->pc != 0x217F80u) { return; }
    }
    ctx->pc = 0x217F80u;
label_217f80:
    // 0x217f80: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x217f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_217f84:
    // 0x217f84: 0xc04d3bc  jal         func_134EF0
label_217f88:
    if (ctx->pc == 0x217F88u) {
        ctx->pc = 0x217F88u;
            // 0x217f88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217F8Cu;
        goto label_217f8c;
    }
    ctx->pc = 0x217F84u;
    SET_GPR_U32(ctx, 31, 0x217F8Cu);
    ctx->pc = 0x217F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217F84u;
            // 0x217f88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F8Cu; }
        if (ctx->pc != 0x217F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F8Cu; }
        if (ctx->pc != 0x217F8Cu) { return; }
    }
    ctx->pc = 0x217F8Cu;
label_217f8c:
    // 0x217f8c: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x217f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_217f90:
    // 0x217f90: 0xc04c524  jal         func_131490
label_217f94:
    if (ctx->pc == 0x217F94u) {
        ctx->pc = 0x217F94u;
            // 0x217f94: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x217F98u;
        goto label_217f98;
    }
    ctx->pc = 0x217F90u;
    SET_GPR_U32(ctx, 31, 0x217F98u);
    ctx->pc = 0x217F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217F90u;
            // 0x217f94: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131490u;
    if (runtime->hasFunction(0x131490u)) {
        auto targetFn = runtime->lookupFunction(0x131490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F98u; }
        if (ctx->pc != 0x217F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDir__9mgCCameraFPf_0x131490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F98u; }
        if (ctx->pc != 0x217F98u) { return; }
    }
    ctx->pc = 0x217F98u;
label_217f98:
    // 0x217f98: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x217f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_217f9c:
    // 0x217f9c: 0xc041be0  jal         func_106F80
label_217fa0:
    if (ctx->pc == 0x217FA0u) {
        ctx->pc = 0x217FA0u;
            // 0x217fa0: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x217FA4u;
        goto label_217fa4;
    }
    ctx->pc = 0x217F9Cu;
    SET_GPR_U32(ctx, 31, 0x217FA4u);
    ctx->pc = 0x217FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217F9Cu;
            // 0x217fa0: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217FA4u; }
        if (ctx->pc != 0x217FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217FA4u; }
        if (ctx->pc != 0x217FA4u) { return; }
    }
    ctx->pc = 0x217FA4u;
label_217fa4:
    // 0x217fa4: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x217fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_217fa8:
    // 0x217fa8: 0xafa002a4  sw          $zero, 0x2A4($sp)
    ctx->pc = 0x217fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 0));
label_217fac:
    // 0x217fac: 0xc041be0  jal         func_106F80
label_217fb0:
    if (ctx->pc == 0x217FB0u) {
        ctx->pc = 0x217FB0u;
            // 0x217fb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217FB4u;
        goto label_217fb4;
    }
    ctx->pc = 0x217FACu;
    SET_GPR_U32(ctx, 31, 0x217FB4u);
    ctx->pc = 0x217FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217FACu;
            // 0x217fb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217FB4u; }
        if (ctx->pc != 0x217FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217FB4u; }
        if (ctx->pc != 0x217FB4u) { return; }
    }
    ctx->pc = 0x217FB4u;
label_217fb4:
    // 0x217fb4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x217fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_217fb8:
    // 0x217fb8: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x217fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_217fbc:
    // 0x217fbc: 0x2442fcb0  addiu       $v0, $v0, -0x350
    ctx->pc = 0x217fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
label_217fc0:
    // 0x217fc0: 0x27a302d0  addiu       $v1, $sp, 0x2D0
    ctx->pc = 0x217fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_217fc4:
    // 0x217fc4: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x217fc4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_217fc8:
    // 0x217fc8: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x217fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_217fcc:
    // 0x217fcc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x217fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_217fd0:
    // 0x217fd0: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x217fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
label_217fd4:
    // 0x217fd4: 0x2442fcc0  addiu       $v0, $v0, -0x340
    ctx->pc = 0x217fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966464));
label_217fd8:
    // 0x217fd8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x217fd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_217fdc:
    // 0x217fdc: 0xc041bd6  jal         func_106F58
label_217fe0:
    if (ctx->pc == 0x217FE0u) {
        ctx->pc = 0x217FE0u;
            // 0x217fe0: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x217FE4u;
        goto label_217fe4;
    }
    ctx->pc = 0x217FDCu;
    SET_GPR_U32(ctx, 31, 0x217FE4u);
    ctx->pc = 0x217FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217FDCu;
            // 0x217fe0: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217FE4u; }
        if (ctx->pc != 0x217FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217FE4u; }
        if (ctx->pc != 0x217FE4u) { return; }
    }
    ctx->pc = 0x217FE4u;
label_217fe4:
    // 0x217fe4: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x217fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_217fe8:
    // 0x217fe8: 0xc041bd6  jal         func_106F58
label_217fec:
    if (ctx->pc == 0x217FECu) {
        ctx->pc = 0x217FECu;
            // 0x217fec: 0x27a502b0  addiu       $a1, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->pc = 0x217FF0u;
        goto label_217ff0;
    }
    ctx->pc = 0x217FE8u;
    SET_GPR_U32(ctx, 31, 0x217FF0u);
    ctx->pc = 0x217FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217FE8u;
            // 0x217fec: 0x27a502b0  addiu       $a1, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217FF0u; }
        if (ctx->pc != 0x217FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217FF0u; }
        if (ctx->pc != 0x217FF0u) { return; }
    }
    ctx->pc = 0x217FF0u;
label_217ff0:
    // 0x217ff0: 0xc061740  jal         func_185D00
label_217ff4:
    if (ctx->pc == 0x217FF4u) {
        ctx->pc = 0x217FF4u;
            // 0x217ff4: 0x8e8400b8  lw          $a0, 0xB8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
        ctx->pc = 0x217FF8u;
        goto label_217ff8;
    }
    ctx->pc = 0x217FF0u;
    SET_GPR_U32(ctx, 31, 0x217FF8u);
    ctx->pc = 0x217FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217FF0u;
            // 0x217ff4: 0x8e8400b8  lw          $a0, 0xB8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185D00u;
    if (runtime->hasFunction(0x185D00u)) {
        auto targetFn = runtime->lookupFunction(0x185D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217FF8u; }
        if (ctx->pc != 0x217FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePacket__11CWaterFrameFv_0x185d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217FF8u; }
        if (ctx->pc != 0x217FF8u) { return; }
    }
    ctx->pc = 0x217FF8u;
label_217ff8:
    // 0x217ff8: 0xc68100c4  lwc1        $f1, 0xC4($s4)
    ctx->pc = 0x217ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_217ffc:
    // 0x217ffc: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x217ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_218000:
    // 0x218000: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x218000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_218004:
    // 0x218004: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x218004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218008:
    // 0x218008: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x218008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_21800c:
    // 0x21800c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21800cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_218010:
    // 0x218010: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x218010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_218014:
    // 0x218014: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x218014u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_218018:
    // 0x218018: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x218018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21801c:
    // 0x21801c: 0x0  nop
    ctx->pc = 0x21801cu;
    // NOP
label_218020:
    // 0x218020: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_218024:
    if (ctx->pc == 0x218024u) {
        ctx->pc = 0x218024u;
            // 0x218024: 0xe68000c4  swc1        $f0, 0xC4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 196), bits); }
        ctx->pc = 0x218028u;
        goto label_218028;
    }
    ctx->pc = 0x218020u;
    {
        const bool branch_taken_0x218020 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218020u;
            // 0x218024: 0xe68000c4  swc1        $f0, 0xC4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x218020) {
            ctx->pc = 0x21802Cu;
            goto label_21802c;
        }
    }
    ctx->pc = 0x218028u;
label_218028:
    // 0x218028: 0xe68200c4  swc1        $f2, 0xC4($s4)
    ctx->pc = 0x218028u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 196), bits); }
label_21802c:
    // 0x21802c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21802cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_218030:
    // 0x218030: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x218030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_218034:
    // 0x218034: 0xc0941c0  jal         func_250700
label_218038:
    if (ctx->pc == 0x218038u) {
        ctx->pc = 0x21803Cu;
        goto label_21803c;
    }
    ctx->pc = 0x218034u;
    SET_GPR_U32(ctx, 31, 0x21803Cu);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21803Cu; }
        if (ctx->pc != 0x21803Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21803Cu; }
        if (ctx->pc != 0x21803Cu) { return; }
    }
    ctx->pc = 0x21803Cu;
label_21803c:
    // 0x21803c: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x21803cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_218040:
    // 0x218040: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_218044:
    // 0x218044: 0xc0a248c  jal         func_289230
label_218048:
    if (ctx->pc == 0x218048u) {
        ctx->pc = 0x218048u;
            // 0x218048: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x21804Cu;
        goto label_21804c;
    }
    ctx->pc = 0x218044u;
    SET_GPR_U32(ctx, 31, 0x21804Cu);
    ctx->pc = 0x218048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218044u;
            // 0x218048: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21804Cu; }
        if (ctx->pc != 0x21804Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21804Cu; }
        if (ctx->pc != 0x21804Cu) { return; }
    }
    ctx->pc = 0x21804Cu;
label_21804c:
    // 0x21804c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21804cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218050:
    // 0x218050: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x218050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_218054:
    // 0x218054: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x218054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_218058:
    // 0x218058: 0xc0941c0  jal         func_250700
label_21805c:
    if (ctx->pc == 0x21805Cu) {
        ctx->pc = 0x218060u;
        goto label_218060;
    }
    ctx->pc = 0x218058u;
    SET_GPR_U32(ctx, 31, 0x218060u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218060u; }
        if (ctx->pc != 0x218060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218060u; }
        if (ctx->pc != 0x218060u) { return; }
    }
    ctx->pc = 0x218060u;
label_218060:
    // 0x218060: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x218060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_218064:
    // 0x218064: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_218068:
    // 0x218068: 0xc0a248c  jal         func_289230
label_21806c:
    if (ctx->pc == 0x21806Cu) {
        ctx->pc = 0x21806Cu;
            // 0x21806c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x218070u;
        goto label_218070;
    }
    ctx->pc = 0x218068u;
    SET_GPR_U32(ctx, 31, 0x218070u);
    ctx->pc = 0x21806Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218068u;
            // 0x21806c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218070u; }
        if (ctx->pc != 0x218070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218070u; }
        if (ctx->pc != 0x218070u) { return; }
    }
    ctx->pc = 0x218070u;
label_218070:
    // 0x218070: 0x8e8400b8  lw          $a0, 0xB8($s4)
    ctx->pc = 0x218070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
label_218074:
    // 0x218074: 0xc68c00c4  lwc1        $f12, 0xC4($s4)
    ctx->pc = 0x218074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_218078:
    // 0x218078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x218078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21807c:
    // 0x21807c: 0xc061728  jal         func_185CA0
label_218080:
    if (ctx->pc == 0x218080u) {
        ctx->pc = 0x218080u;
            // 0x218080: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x218084u;
        goto label_218084;
    }
    ctx->pc = 0x21807Cu;
    SET_GPR_U32(ctx, 31, 0x218084u);
    ctx->pc = 0x218080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21807Cu;
            // 0x218080: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185CA0u;
    if (runtime->hasFunction(0x185CA0u)) {
        auto targetFn = runtime->lookupFunction(0x185CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218084u; }
        if (ctx->pc != 0x218084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shake__11CWaterFrameFiif_0x185ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218084u; }
        if (ctx->pc != 0x218084u) { return; }
    }
    ctx->pc = 0x218084u;
label_218084:
    // 0x218084: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x218084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
label_218088:
    // 0x218088: 0x3c023b93  lui         $v0, 0x3B93
    ctx->pc = 0x218088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15251 << 16));
label_21808c:
    // 0x21808c: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x21808cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_218090:
    // 0x218090: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x218090u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_218094:
    // 0x218094: 0x344374bc  ori         $v1, $v0, 0x74BC
    ctx->pc = 0x218094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29884);
label_218098:
    // 0x218098: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x218098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_21809c:
    // 0x21809c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x21809cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2180a0:
    // 0x2180a0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2180a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2180a4:
    // 0x2180a4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2180a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2180a8:
    // 0x2180a8: 0xc0616f0  jal         func_185BC0
label_2180ac:
    if (ctx->pc == 0x2180ACu) {
        ctx->pc = 0x2180ACu;
            // 0x2180ac: 0x8e8400b8  lw          $a0, 0xB8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
        ctx->pc = 0x2180B0u;
        goto label_2180b0;
    }
    ctx->pc = 0x2180A8u;
    SET_GPR_U32(ctx, 31, 0x2180B0u);
    ctx->pc = 0x2180ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2180A8u;
            // 0x2180ac: 0x8e8400b8  lw          $a0, 0xB8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185BC0u;
    if (runtime->hasFunction(0x185BC0u)) {
        auto targetFn = runtime->lookupFunction(0x185BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2180B0u; }
        if (ctx->pc != 0x2180B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetParam__11CWaterFrameFffff_0x185bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2180B0u; }
        if (ctx->pc != 0x2180B0u) { return; }
    }
    ctx->pc = 0x2180B0u;
label_2180b0:
    // 0x2180b0: 0x8e8400b8  lw          $a0, 0xB8($s4)
    ctx->pc = 0x2180b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
label_2180b4:
    // 0x2180b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2180b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2180b8:
    // 0x2180b8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x2180b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_2180bc:
    // 0x2180bc: 0x320f809  jalr        $t9
label_2180c0:
    if (ctx->pc == 0x2180C0u) {
        ctx->pc = 0x2180C4u;
        goto label_2180c4;
    }
    ctx->pc = 0x2180BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2180C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2180C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2180C4u; }
            if (ctx->pc != 0x2180C4u) { return; }
        }
        }
    }
    ctx->pc = 0x2180C4u;
label_2180c4:
    // 0x2180c4: 0x8e8400b8  lw          $a0, 0xB8($s4)
    ctx->pc = 0x2180c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
label_2180c8:
    // 0x2180c8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2180c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2180cc:
    // 0x2180cc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2180ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2180d0:
    // 0x2180d0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2180d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2180d4:
    // 0x2180d4: 0xc06170c  jal         func_185C30
label_2180d8:
    if (ctx->pc == 0x2180D8u) {
        ctx->pc = 0x2180D8u;
            // 0x2180d8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2180DCu;
        goto label_2180dc;
    }
    ctx->pc = 0x2180D4u;
    SET_GPR_U32(ctx, 31, 0x2180DCu);
    ctx->pc = 0x2180D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2180D4u;
            // 0x2180d8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185C30u;
    if (runtime->hasFunction(0x185C30u)) {
        auto targetFn = runtime->lookupFunction(0x185C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2180DCu; }
        if (ctx->pc != 0x2180DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__11CWaterFrameFUcUcUcUc_0x185c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2180DCu; }
        if (ctx->pc != 0x2180DCu) { return; }
    }
    ctx->pc = 0x2180DCu;
label_2180dc:
    // 0x2180dc: 0xc050bf4  jal         func_142FD0
label_2180e0:
    if (ctx->pc == 0x2180E0u) {
        ctx->pc = 0x2180E0u;
            // 0x2180e0: 0x8e8400b8  lw          $a0, 0xB8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
        ctx->pc = 0x2180E4u;
        goto label_2180e4;
    }
    ctx->pc = 0x2180DCu;
    SET_GPR_U32(ctx, 31, 0x2180E4u);
    ctx->pc = 0x2180E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2180DCu;
            // 0x2180e0: 0x8e8400b8  lw          $a0, 0xB8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2180E4u; }
        if (ctx->pc != 0x2180E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2180E4u; }
        if (ctx->pc != 0x2180E4u) { return; }
    }
    ctx->pc = 0x2180E4u;
label_2180e4:
    // 0x2180e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2180e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2180e8:
    // 0x2180e8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2180e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2180ec:
    // 0x2180ec: 0x24a5a2f8  addiu       $a1, $a1, -0x5D08
    ctx->pc = 0x2180ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943480));
label_2180f0:
    // 0x2180f0: 0xc04b414  jal         func_12D050
label_2180f4:
    if (ctx->pc == 0x2180F4u) {
        ctx->pc = 0x2180F4u;
            // 0x2180f4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2180F8u;
        goto label_2180f8;
    }
    ctx->pc = 0x2180F0u;
    SET_GPR_U32(ctx, 31, 0x2180F8u);
    ctx->pc = 0x2180F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2180F0u;
            // 0x2180f4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2180F8u; }
        if (ctx->pc != 0x2180F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2180F8u; }
        if (ctx->pc != 0x2180F8u) { return; }
    }
    ctx->pc = 0x2180F8u;
label_2180f8:
    // 0x2180f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2180f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2180fc:
    // 0x2180fc: 0xc050ef8  jal         func_143BE0
label_218100:
    if (ctx->pc == 0x218100u) {
        ctx->pc = 0x218100u;
            // 0x218100: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x218104u;
        goto label_218104;
    }
    ctx->pc = 0x2180FCu;
    SET_GPR_U32(ctx, 31, 0x218104u);
    ctx->pc = 0x218100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2180FCu;
            // 0x218100: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143BE0u;
    if (runtime->hasFunction(0x143BE0u)) {
        auto targetFn = runtime->lookupFunction(0x143BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218104u; }
        if (ctx->pc != 0x218104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__FP10mgCTexture_0x143be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218104u; }
        if (ctx->pc != 0x218104u) { return; }
    }
    ctx->pc = 0x218104u;
label_218104:
    // 0x218104: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_218108:
    if (ctx->pc == 0x218108u) {
        ctx->pc = 0x218108u;
            // 0x218108: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x21810Cu;
        goto label_21810c;
    }
    ctx->pc = 0x218104u;
    {
        const bool branch_taken_0x218104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x218108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218104u;
            // 0x218108: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218104) {
            ctx->pc = 0x218188u;
            goto label_218188;
        }
    }
    ctx->pc = 0x21810Cu;
label_21810c:
    // 0x21810c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x21810cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_218110:
    // 0x218110: 0xc04d128  jal         func_1344A0
label_218114:
    if (ctx->pc == 0x218114u) {
        ctx->pc = 0x218114u;
            // 0x218114: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x218118u;
        goto label_218118;
    }
    ctx->pc = 0x218110u;
    SET_GPR_U32(ctx, 31, 0x218118u);
    ctx->pc = 0x218114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218110u;
            // 0x218114: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218118u; }
        if (ctx->pc != 0x218118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218118u; }
        if (ctx->pc != 0x218118u) { return; }
    }
    ctx->pc = 0x218118u;
label_218118:
    // 0x218118: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x218118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21811c:
    // 0x21811c: 0xc04d368  jal         func_134DA0
label_218120:
    if (ctx->pc == 0x218120u) {
        ctx->pc = 0x218120u;
            // 0x218120: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x218124u;
        goto label_218124;
    }
    ctx->pc = 0x21811Cu;
    SET_GPR_U32(ctx, 31, 0x218124u);
    ctx->pc = 0x218120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21811Cu;
            // 0x218120: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218124u; }
        if (ctx->pc != 0x218124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218124u; }
        if (ctx->pc != 0x218124u) { return; }
    }
    ctx->pc = 0x218124u;
label_218124:
    // 0x218124: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x218124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_218128:
    // 0x218128: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x218128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_21812c:
    // 0x21812c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21812cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_218130:
    // 0x218130: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x218130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_218134:
    // 0x218134: 0xc04d320  jal         func_134C80
label_218138:
    if (ctx->pc == 0x218138u) {
        ctx->pc = 0x218138u;
            // 0x218138: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21813Cu;
        goto label_21813c;
    }
    ctx->pc = 0x218134u;
    SET_GPR_U32(ctx, 31, 0x21813Cu);
    ctx->pc = 0x218138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218134u;
            // 0x218138: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21813Cu; }
        if (ctx->pc != 0x21813Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21813Cu; }
        if (ctx->pc != 0x21813Cu) { return; }
    }
    ctx->pc = 0x21813Cu;
label_21813c:
    // 0x21813c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x21813cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_218140:
    // 0x218140: 0x27a407a0  addiu       $a0, $sp, 0x7A0
    ctx->pc = 0x218140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
label_218144:
    // 0x218144: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218148:
    // 0x218148: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x218148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21814c:
    // 0x21814c: 0xc04f8e4  jal         func_13E390
label_218150:
    if (ctx->pc == 0x218150u) {
        ctx->pc = 0x218150u;
            // 0x218150: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x218154u;
        goto label_218154;
    }
    ctx->pc = 0x21814Cu;
    SET_GPR_U32(ctx, 31, 0x218154u);
    ctx->pc = 0x218150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21814Cu;
            // 0x218150: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218154u; }
        if (ctx->pc != 0x218154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218154u; }
        if (ctx->pc != 0x218154u) { return; }
    }
    ctx->pc = 0x218154u;
label_218154:
    // 0x218154: 0x8f878780  lw          $a3, -0x7880($gp)
    ctx->pc = 0x218154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_218158:
    // 0x218158: 0x27a40790  addiu       $a0, $sp, 0x790
    ctx->pc = 0x218158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1936));
label_21815c:
    // 0x21815c: 0x8f888784  lw          $t0, -0x787C($gp)
    ctx->pc = 0x21815cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_218160:
    // 0x218160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218164:
    // 0x218164: 0xc04f8e4  jal         func_13E390
label_218168:
    if (ctx->pc == 0x218168u) {
        ctx->pc = 0x218168u;
            // 0x218168: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21816Cu;
        goto label_21816c;
    }
    ctx->pc = 0x218164u;
    SET_GPR_U32(ctx, 31, 0x21816Cu);
    ctx->pc = 0x218168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218164u;
            // 0x218168: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21816Cu; }
        if (ctx->pc != 0x21816Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21816Cu; }
        if (ctx->pc != 0x21816Cu) { return; }
    }
    ctx->pc = 0x21816Cu;
label_21816c:
    // 0x21816c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x21816cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_218170:
    // 0x218170: 0x27a50790  addiu       $a1, $sp, 0x790
    ctx->pc = 0x218170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1936));
label_218174:
    // 0x218174: 0xc08ca5c  jal         func_232970
label_218178:
    if (ctx->pc == 0x218178u) {
        ctx->pc = 0x218178u;
            // 0x218178: 0x27a607a0  addiu       $a2, $sp, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
        ctx->pc = 0x21817Cu;
        goto label_21817c;
    }
    ctx->pc = 0x218174u;
    SET_GPR_U32(ctx, 31, 0x21817Cu);
    ctx->pc = 0x218178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218174u;
            // 0x218178: 0x27a607a0  addiu       $a2, $sp, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21817Cu; }
        if (ctx->pc != 0x21817Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21817Cu; }
        if (ctx->pc != 0x21817Cu) { return; }
    }
    ctx->pc = 0x21817Cu;
label_21817c:
    // 0x21817c: 0xc04d1a4  jal         func_134690
label_218180:
    if (ctx->pc == 0x218180u) {
        ctx->pc = 0x218180u;
            // 0x218180: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x218184u;
        goto label_218184;
    }
    ctx->pc = 0x21817Cu;
    SET_GPR_U32(ctx, 31, 0x218184u);
    ctx->pc = 0x218180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21817Cu;
            // 0x218180: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218184u; }
        if (ctx->pc != 0x218184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218184u; }
        if (ctx->pc != 0x218184u) { return; }
    }
    ctx->pc = 0x218184u;
label_218184:
    // 0x218184: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x218184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_218188:
    // 0x218188: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x218188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21818c:
    // 0x21818c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x21818cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_218190:
    // 0x218190: 0xc050f18  jal         func_143C60
label_218194:
    if (ctx->pc == 0x218194u) {
        ctx->pc = 0x218194u;
            // 0x218194: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x218198u;
        goto label_218198;
    }
    ctx->pc = 0x218190u;
    SET_GPR_U32(ctx, 31, 0x218198u);
    ctx->pc = 0x218194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218190u;
            // 0x218194: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C60u;
    if (runtime->hasFunction(0x143C60u)) {
        auto targetFn = runtime->lookupFunction(0x143C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218198u; }
        if (ctx->pc != 0x218198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__Fiiii_0x143c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218198u; }
        if (ctx->pc != 0x218198u) { return; }
    }
    ctx->pc = 0x218198u;
label_218198:
    // 0x218198: 0x8e8400b8  lw          $a0, 0xB8($s4)
    ctx->pc = 0x218198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
label_21819c:
    // 0x21819c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x21819cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2181a0:
    // 0x2181a0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2181a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2181a4:
    // 0x2181a4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2181a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2181a8:
    // 0x2181a8: 0xc06170c  jal         func_185C30
label_2181ac:
    if (ctx->pc == 0x2181ACu) {
        ctx->pc = 0x2181ACu;
            // 0x2181ac: 0x24080030  addiu       $t0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x2181B0u;
        goto label_2181b0;
    }
    ctx->pc = 0x2181A8u;
    SET_GPR_U32(ctx, 31, 0x2181B0u);
    ctx->pc = 0x2181ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2181A8u;
            // 0x2181ac: 0x24080030  addiu       $t0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185C30u;
    if (runtime->hasFunction(0x185C30u)) {
        auto targetFn = runtime->lookupFunction(0x185C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2181B0u; }
        if (ctx->pc != 0x2181B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__11CWaterFrameFUcUcUcUc_0x185c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2181B0u; }
        if (ctx->pc != 0x2181B0u) { return; }
    }
    ctx->pc = 0x2181B0u;
label_2181b0:
    // 0x2181b0: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x2181b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
label_2181b4:
    // 0x2181b4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2181b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_2181b8:
    // 0x2181b8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2181b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2181bc:
    // 0x2181bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2181bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2181c0:
    // 0x2181c0: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x2181c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2181c4:
    // 0x2181c4: 0x3c023b93  lui         $v0, 0x3B93
    ctx->pc = 0x2181c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15251 << 16));
label_2181c8:
    // 0x2181c8: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x2181c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29884);
label_2181cc:
    // 0x2181cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2181ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2181d0:
    // 0x2181d0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2181d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2181d4:
    // 0x2181d4: 0xc0616f0  jal         func_185BC0
label_2181d8:
    if (ctx->pc == 0x2181D8u) {
        ctx->pc = 0x2181D8u;
            // 0x2181d8: 0x8e8400b8  lw          $a0, 0xB8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
        ctx->pc = 0x2181DCu;
        goto label_2181dc;
    }
    ctx->pc = 0x2181D4u;
    SET_GPR_U32(ctx, 31, 0x2181DCu);
    ctx->pc = 0x2181D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2181D4u;
            // 0x2181d8: 0x8e8400b8  lw          $a0, 0xB8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185BC0u;
    if (runtime->hasFunction(0x185BC0u)) {
        auto targetFn = runtime->lookupFunction(0x185BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2181DCu; }
        if (ctx->pc != 0x2181DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetParam__11CWaterFrameFffff_0x185bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2181DCu; }
        if (ctx->pc != 0x2181DCu) { return; }
    }
    ctx->pc = 0x2181DCu;
label_2181dc:
    // 0x2181dc: 0xc050bf4  jal         func_142FD0
label_2181e0:
    if (ctx->pc == 0x2181E0u) {
        ctx->pc = 0x2181E0u;
            // 0x2181e0: 0x8e8400b8  lw          $a0, 0xB8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
        ctx->pc = 0x2181E4u;
        goto label_2181e4;
    }
    ctx->pc = 0x2181DCu;
    SET_GPR_U32(ctx, 31, 0x2181E4u);
    ctx->pc = 0x2181E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2181DCu;
            // 0x2181e0: 0x8e8400b8  lw          $a0, 0xB8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2181E4u; }
        if (ctx->pc != 0x2181E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2181E4u; }
        if (ctx->pc != 0x2181E4u) { return; }
    }
    ctx->pc = 0x2181E4u;
label_2181e4:
    // 0x2181e4: 0xc0510c0  jal         func_144300
label_2181e8:
    if (ctx->pc == 0x2181E8u) {
        ctx->pc = 0x2181E8u;
            // 0x2181e8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x2181ECu;
        goto label_2181ec;
    }
    ctx->pc = 0x2181E4u;
    SET_GPR_U32(ctx, 31, 0x2181ECu);
    ctx->pc = 0x2181E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2181E4u;
            // 0x2181e8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144300u;
    if (runtime->hasFunction(0x144300u)) {
        auto targetFn = runtime->lookupFunction(0x144300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2181ECu; }
        if (ctx->pc != 0x2181ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFrameBuffer__FP10mgCTexture_0x144300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2181ECu; }
        if (ctx->pc != 0x2181ECu) { return; }
    }
    ctx->pc = 0x2181ECu;
label_2181ec:
    // 0x2181ec: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2181ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2181f0:
    // 0x2181f0: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x2181f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2181f4:
    // 0x2181f4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2181f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2181f8:
    // 0x2181f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2181f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2181fc:
    // 0x2181fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2181fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218200:
    // 0x218200: 0xc051158  jal         func_144560
label_218204:
    if (ctx->pc == 0x218204u) {
        ctx->pc = 0x218204u;
            // 0x218204: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x218208u;
        goto label_218208;
    }
    ctx->pc = 0x218200u;
    SET_GPR_U32(ctx, 31, 0x218208u);
    ctx->pc = 0x218204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218200u;
            // 0x218204: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144560u;
    if (runtime->hasFunction(0x144560u)) {
        auto targetFn = runtime->lookupFunction(0x144560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218208u; }
        if (ctx->pc != 0x218208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkMoveImage__FP10mgCTexture9mgRect_i_P10mgCTextureiii_0x144560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218208u; }
        if (ctx->pc != 0x218208u) { return; }
    }
    ctx->pc = 0x218208u;
label_218208:
    // 0x218208: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x218208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_21820c:
    // 0x21820c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x21820cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_218210:
    // 0x218210: 0x2442fcd0  addiu       $v0, $v0, -0x330
    ctx->pc = 0x218210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966480));
label_218214:
    // 0x218214: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x218214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_218218:
    // 0x218218: 0x784b0000  lq          $t3, 0x0($v0)
    ctx->pc = 0x218218u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_21821c:
    // 0x21821c: 0x27ac02e0  addiu       $t4, $sp, 0x2E0
    ctx->pc = 0x21821cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_218220:
    // 0x218220: 0x78490010  lq          $t1, 0x10($v0)
    ctx->pc = 0x218220u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_218224:
    // 0x218224: 0x2484fd10  addiu       $a0, $a0, -0x2F0
    ctx->pc = 0x218224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966544));
label_218228:
    // 0x218228: 0x78470020  lq          $a3, 0x20($v0)
    ctx->pc = 0x218228u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_21822c:
    // 0x21822c: 0x27aa0320  addiu       $t2, $sp, 0x320
    ctx->pc = 0x21822cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_218230:
    // 0x218230: 0x78450030  lq          $a1, 0x30($v0)
    ctx->pc = 0x218230u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_218234:
    // 0x218234: 0x2463fd50  addiu       $v1, $v1, -0x2B0
    ctx->pc = 0x218234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966608));
label_218238:
    // 0x218238: 0x27a80360  addiu       $t0, $sp, 0x360
    ctx->pc = 0x218238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
label_21823c:
    // 0x21823c: 0x27a603a0  addiu       $a2, $sp, 0x3A0
    ctx->pc = 0x21823cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_218240:
    // 0x218240: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x218240u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218244:
    // 0x218244: 0x7d8b0000  sq          $t3, 0x0($t4)
    ctx->pc = 0x218244u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 11));
label_218248:
    // 0x218248: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x218248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_21824c:
    // 0x21824c: 0x7d890010  sq          $t1, 0x10($t4)
    ctx->pc = 0x21824cu;
    WRITE128(ADD32(GPR_U32(ctx, 12), 16), GPR_VEC(ctx, 9));
label_218250:
    // 0x218250: 0x2442fd90  addiu       $v0, $v0, -0x270
    ctx->pc = 0x218250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966672));
label_218254:
    // 0x218254: 0x7d870020  sq          $a3, 0x20($t4)
    ctx->pc = 0x218254u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 32), GPR_VEC(ctx, 7));
label_218258:
    // 0x218258: 0x7d850030  sq          $a1, 0x30($t4)
    ctx->pc = 0x218258u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 48), GPR_VEC(ctx, 5));
label_21825c:
    // 0x21825c: 0x78890000  lq          $t1, 0x0($a0)
    ctx->pc = 0x21825cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_218260:
    // 0x218260: 0x78870010  lq          $a3, 0x10($a0)
    ctx->pc = 0x218260u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_218264:
    // 0x218264: 0x78850020  lq          $a1, 0x20($a0)
    ctx->pc = 0x218264u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_218268:
    // 0x218268: 0x78840030  lq          $a0, 0x30($a0)
    ctx->pc = 0x218268u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_21826c:
    // 0x21826c: 0x7d490000  sq          $t1, 0x0($t2)
    ctx->pc = 0x21826cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 9));
label_218270:
    // 0x218270: 0x7d470010  sq          $a3, 0x10($t2)
    ctx->pc = 0x218270u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 7));
label_218274:
    // 0x218274: 0x7d450020  sq          $a1, 0x20($t2)
    ctx->pc = 0x218274u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), GPR_VEC(ctx, 5));
label_218278:
    // 0x218278: 0x7d440030  sq          $a0, 0x30($t2)
    ctx->pc = 0x218278u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 48), GPR_VEC(ctx, 4));
label_21827c:
    // 0x21827c: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x21827cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_218280:
    // 0x218280: 0x78650010  lq          $a1, 0x10($v1)
    ctx->pc = 0x218280u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_218284:
    // 0x218284: 0x78640020  lq          $a0, 0x20($v1)
    ctx->pc = 0x218284u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_218288:
    // 0x218288: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x218288u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_21828c:
    // 0x21828c: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x21828cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
label_218290:
    // 0x218290: 0x7d050010  sq          $a1, 0x10($t0)
    ctx->pc = 0x218290u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 5));
label_218294:
    // 0x218294: 0x7d040020  sq          $a0, 0x20($t0)
    ctx->pc = 0x218294u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 4));
label_218298:
    // 0x218298: 0x7d030030  sq          $v1, 0x30($t0)
    ctx->pc = 0x218298u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 3));
label_21829c:
    // 0x21829c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x21829cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2182a0:
    // 0x2182a0: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x2182a0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2182a4:
    // 0x2182a4: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x2182a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2182a8:
    // 0x2182a8: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x2182a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2182ac:
    // 0x2182ac: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x2182acu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_2182b0:
    // 0x2182b0: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x2182b0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
label_2182b4:
    // 0x2182b4: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x2182b4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
label_2182b8:
    // 0x2182b8: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x2182b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
label_2182bc:
    // 0x2182bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2182bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2182c0:
    // 0x2182c0: 0x12a20038  beq         $s5, $v0, . + 4 + (0x38 << 2)
label_2182c4:
    if (ctx->pc == 0x2182C4u) {
        ctx->pc = 0x2182C4u;
            // 0x2182c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2182C8u;
        goto label_2182c8;
    }
    ctx->pc = 0x2182C0u;
    {
        const bool branch_taken_0x2182c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2182C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2182C0u;
            // 0x2182c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2182c0) {
            ctx->pc = 0x2183A4u;
            goto label_2183a4;
        }
    }
    ctx->pc = 0x2182C8u;
label_2182c8:
    // 0x2182c8: 0x12a20026  beq         $s5, $v0, . + 4 + (0x26 << 2)
label_2182cc:
    if (ctx->pc == 0x2182CCu) {
        ctx->pc = 0x2182CCu;
            // 0x2182cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2182D0u;
        goto label_2182d0;
    }
    ctx->pc = 0x2182C8u;
    {
        const bool branch_taken_0x2182c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2182CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2182C8u;
            // 0x2182cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2182c8) {
            ctx->pc = 0x218364u;
            goto label_218364;
        }
    }
    ctx->pc = 0x2182D0u;
label_2182d0:
    // 0x2182d0: 0x12a20014  beq         $s5, $v0, . + 4 + (0x14 << 2)
label_2182d4:
    if (ctx->pc == 0x2182D4u) {
        ctx->pc = 0x2182D8u;
        goto label_2182d8;
    }
    ctx->pc = 0x2182D0u;
    {
        const bool branch_taken_0x2182d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x2182d0) {
            ctx->pc = 0x218324u;
            goto label_218324;
        }
    }
    ctx->pc = 0x2182D8u;
label_2182d8:
    // 0x2182d8: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_2182dc:
    if (ctx->pc == 0x2182DCu) {
        ctx->pc = 0x2182E0u;
        goto label_2182e0;
    }
    ctx->pc = 0x2182D8u;
    {
        const bool branch_taken_0x2182d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2182d8) {
            ctx->pc = 0x2182E8u;
            goto label_2182e8;
        }
    }
    ctx->pc = 0x2182E0u;
label_2182e0:
    // 0x2182e0: 0x1000003e  b           . + 4 + (0x3E << 2)
label_2182e4:
    if (ctx->pc == 0x2182E4u) {
        ctx->pc = 0x2182E8u;
        goto label_2182e8;
    }
    ctx->pc = 0x2182E0u;
    {
        const bool branch_taken_0x2182e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2182e0) {
            ctx->pc = 0x2183DCu;
            goto label_2183dc;
        }
    }
    ctx->pc = 0x2182E8u;
label_2182e8:
    // 0x2182e8: 0x3c0241a8  lui         $v0, 0x41A8
    ctx->pc = 0x2182e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16808 << 16));
label_2182ec:
    // 0x2182ec: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x2182ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2182f0:
    // 0x2182f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2182f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2182f4:
    // 0x2182f4: 0x0  nop
    ctx->pc = 0x2182f4u;
    // NOP
label_2182f8:
    // 0x2182f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2182f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2182fc:
    // 0x2182fc: 0x0  nop
    ctx->pc = 0x2182fcu;
    // NOP
label_218300:
    // 0x218300: 0x450100c5  bc1t        . + 4 + (0xC5 << 2)
label_218304:
    if (ctx->pc == 0x218304u) {
        ctx->pc = 0x218304u;
            // 0x218304: 0x3c050035  lui         $a1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
        ctx->pc = 0x218308u;
        goto label_218308;
    }
    ctx->pc = 0x218300u;
    {
        const bool branch_taken_0x218300 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x218304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218300u;
            // 0x218304: 0x3c050035  lui         $a1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218300) {
            ctx->pc = 0x218618u;
            goto label_218618;
        }
    }
    ctx->pc = 0x218308u;
label_218308:
    // 0x218308: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x218308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_21830c:
    // 0x21830c: 0x24a5fdd0  addiu       $a1, $a1, -0x230
    ctx->pc = 0x21830cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966736));
label_218310:
    // 0x218310: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x218310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_218314:
    // 0x218314: 0xc041c3e  jal         func_1070F8
label_218318:
    if (ctx->pc == 0x218318u) {
        ctx->pc = 0x218318u;
            // 0x218318: 0x27b702e0  addiu       $s7, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->pc = 0x21831Cu;
        goto label_21831c;
    }
    ctx->pc = 0x218314u;
    SET_GPR_U32(ctx, 31, 0x21831Cu);
    ctx->pc = 0x218318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218314u;
            // 0x218318: 0x27b702e0  addiu       $s7, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21831Cu; }
        if (ctx->pc != 0x21831Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21831Cu; }
        if (ctx->pc != 0x21831Cu) { return; }
    }
    ctx->pc = 0x21831Cu;
label_21831c:
    // 0x21831c: 0x1000002f  b           . + 4 + (0x2F << 2)
label_218320:
    if (ctx->pc == 0x218320u) {
        ctx->pc = 0x218324u;
        goto label_218324;
    }
    ctx->pc = 0x21831Cu;
    {
        const bool branch_taken_0x21831c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21831c) {
            ctx->pc = 0x2183DCu;
            goto label_2183dc;
        }
    }
    ctx->pc = 0x218324u;
label_218324:
    // 0x218324: 0x0  nop
    ctx->pc = 0x218324u;
    // NOP
label_218328:
    // 0x218328: 0x3c02c1a8  lui         $v0, 0xC1A8
    ctx->pc = 0x218328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49576 << 16));
label_21832c:
    // 0x21832c: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x21832cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_218330:
    // 0x218330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218334:
    // 0x218334: 0x0  nop
    ctx->pc = 0x218334u;
    // NOP
label_218338:
    // 0x218338: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x218338u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21833c:
    // 0x21833c: 0x0  nop
    ctx->pc = 0x21833cu;
    // NOP
label_218340:
    // 0x218340: 0x450000b5  bc1f        . + 4 + (0xB5 << 2)
label_218344:
    if (ctx->pc == 0x218344u) {
        ctx->pc = 0x218344u;
            // 0x218344: 0x3c050035  lui         $a1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
        ctx->pc = 0x218348u;
        goto label_218348;
    }
    ctx->pc = 0x218340u;
    {
        const bool branch_taken_0x218340 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218340u;
            // 0x218344: 0x3c050035  lui         $a1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218340) {
            ctx->pc = 0x218618u;
            goto label_218618;
        }
    }
    ctx->pc = 0x218348u;
label_218348:
    // 0x218348: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x218348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_21834c:
    // 0x21834c: 0x24a5fde0  addiu       $a1, $a1, -0x220
    ctx->pc = 0x21834cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966752));
label_218350:
    // 0x218350: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x218350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_218354:
    // 0x218354: 0xc041c3e  jal         func_1070F8
label_218358:
    if (ctx->pc == 0x218358u) {
        ctx->pc = 0x218358u;
            // 0x218358: 0x27b70320  addiu       $s7, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->pc = 0x21835Cu;
        goto label_21835c;
    }
    ctx->pc = 0x218354u;
    SET_GPR_U32(ctx, 31, 0x21835Cu);
    ctx->pc = 0x218358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218354u;
            // 0x218358: 0x27b70320  addiu       $s7, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21835Cu; }
        if (ctx->pc != 0x21835Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21835Cu; }
        if (ctx->pc != 0x21835Cu) { return; }
    }
    ctx->pc = 0x21835Cu;
label_21835c:
    // 0x21835c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_218360:
    if (ctx->pc == 0x218360u) {
        ctx->pc = 0x218364u;
        goto label_218364;
    }
    ctx->pc = 0x21835Cu;
    {
        const bool branch_taken_0x21835c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21835c) {
            ctx->pc = 0x2183DCu;
            goto label_2183dc;
        }
    }
    ctx->pc = 0x218364u;
label_218364:
    // 0x218364: 0x0  nop
    ctx->pc = 0x218364u;
    // NOP
label_218368:
    // 0x218368: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x218368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
label_21836c:
    // 0x21836c: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x21836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_218370:
    // 0x218370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218374:
    // 0x218374: 0x0  nop
    ctx->pc = 0x218374u;
    // NOP
label_218378:
    // 0x218378: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x218378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21837c:
    // 0x21837c: 0x0  nop
    ctx->pc = 0x21837cu;
    // NOP
label_218380:
    // 0x218380: 0x450100a5  bc1t        . + 4 + (0xA5 << 2)
label_218384:
    if (ctx->pc == 0x218384u) {
        ctx->pc = 0x218384u;
            // 0x218384: 0x3c050035  lui         $a1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
        ctx->pc = 0x218388u;
        goto label_218388;
    }
    ctx->pc = 0x218380u;
    {
        const bool branch_taken_0x218380 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x218384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218380u;
            // 0x218384: 0x3c050035  lui         $a1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218380) {
            ctx->pc = 0x218618u;
            goto label_218618;
        }
    }
    ctx->pc = 0x218388u;
label_218388:
    // 0x218388: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x218388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_21838c:
    // 0x21838c: 0x24a5fdf0  addiu       $a1, $a1, -0x210
    ctx->pc = 0x21838cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966768));
label_218390:
    // 0x218390: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x218390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_218394:
    // 0x218394: 0xc041c3e  jal         func_1070F8
label_218398:
    if (ctx->pc == 0x218398u) {
        ctx->pc = 0x218398u;
            // 0x218398: 0x27b70360  addiu       $s7, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->pc = 0x21839Cu;
        goto label_21839c;
    }
    ctx->pc = 0x218394u;
    SET_GPR_U32(ctx, 31, 0x21839Cu);
    ctx->pc = 0x218398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218394u;
            // 0x218398: 0x27b70360  addiu       $s7, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21839Cu; }
        if (ctx->pc != 0x21839Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21839Cu; }
        if (ctx->pc != 0x21839Cu) { return; }
    }
    ctx->pc = 0x21839Cu;
label_21839c:
    // 0x21839c: 0x1000000f  b           . + 4 + (0xF << 2)
label_2183a0:
    if (ctx->pc == 0x2183A0u) {
        ctx->pc = 0x2183A4u;
        goto label_2183a4;
    }
    ctx->pc = 0x21839Cu;
    {
        const bool branch_taken_0x21839c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21839c) {
            ctx->pc = 0x2183DCu;
            goto label_2183dc;
        }
    }
    ctx->pc = 0x2183A4u;
label_2183a4:
    // 0x2183a4: 0x0  nop
    ctx->pc = 0x2183a4u;
    // NOP
label_2183a8:
    // 0x2183a8: 0x3c02c208  lui         $v0, 0xC208
    ctx->pc = 0x2183a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49672 << 16));
label_2183ac:
    // 0x2183ac: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x2183acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2183b0:
    // 0x2183b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2183b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2183b4:
    // 0x2183b4: 0x0  nop
    ctx->pc = 0x2183b4u;
    // NOP
label_2183b8:
    // 0x2183b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2183b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2183bc:
    // 0x2183bc: 0x0  nop
    ctx->pc = 0x2183bcu;
    // NOP
label_2183c0:
    // 0x2183c0: 0x45000095  bc1f        . + 4 + (0x95 << 2)
label_2183c4:
    if (ctx->pc == 0x2183C4u) {
        ctx->pc = 0x2183C4u;
            // 0x2183c4: 0x3c050035  lui         $a1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
        ctx->pc = 0x2183C8u;
        goto label_2183c8;
    }
    ctx->pc = 0x2183C0u;
    {
        const bool branch_taken_0x2183c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2183C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2183C0u;
            // 0x2183c4: 0x3c050035  lui         $a1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2183c0) {
            ctx->pc = 0x218618u;
            goto label_218618;
        }
    }
    ctx->pc = 0x2183C8u;
label_2183c8:
    // 0x2183c8: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x2183c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_2183cc:
    // 0x2183cc: 0x24a5fe00  addiu       $a1, $a1, -0x200
    ctx->pc = 0x2183ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
label_2183d0:
    // 0x2183d0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2183d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2183d4:
    // 0x2183d4: 0xc041c3e  jal         func_1070F8
label_2183d8:
    if (ctx->pc == 0x2183D8u) {
        ctx->pc = 0x2183D8u;
            // 0x2183d8: 0x27b703a0  addiu       $s7, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->pc = 0x2183DCu;
        goto label_2183dc;
    }
    ctx->pc = 0x2183D4u;
    SET_GPR_U32(ctx, 31, 0x2183DCu);
    ctx->pc = 0x2183D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2183D4u;
            // 0x2183d8: 0x27b703a0  addiu       $s7, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2183DCu; }
        if (ctx->pc != 0x2183DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2183DCu; }
        if (ctx->pc != 0x2183DCu) { return; }
    }
    ctx->pc = 0x2183DCu;
label_2183dc:
    // 0x2183dc: 0x0  nop
    ctx->pc = 0x2183dcu;
    // NOP
label_2183e0:
    // 0x2183e0: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x2183e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_2183e4:
    // 0x2183e4: 0xc041be0  jal         func_106F80
label_2183e8:
    if (ctx->pc == 0x2183E8u) {
        ctx->pc = 0x2183E8u;
            // 0x2183e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2183ECu;
        goto label_2183ec;
    }
    ctx->pc = 0x2183E4u;
    SET_GPR_U32(ctx, 31, 0x2183ECu);
    ctx->pc = 0x2183E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2183E4u;
            // 0x2183e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2183ECu; }
        if (ctx->pc != 0x2183ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2183ECu; }
        if (ctx->pc != 0x2183ECu) { return; }
    }
    ctx->pc = 0x2183ECu;
label_2183ec:
    // 0x2183ec: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2183ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_2183f0:
    // 0x2183f0: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x2183f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_2183f4:
    // 0x2183f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2183f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2183f8:
    // 0x2183f8: 0xc041c4a  jal         func_107128
label_2183fc:
    if (ctx->pc == 0x2183FCu) {
        ctx->pc = 0x2183FCu;
            // 0x2183fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x218400u;
        goto label_218400;
    }
    ctx->pc = 0x2183F8u;
    SET_GPR_U32(ctx, 31, 0x218400u);
    ctx->pc = 0x2183FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2183F8u;
            // 0x2183fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218400u; }
        if (ctx->pc != 0x218400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218400u; }
        if (ctx->pc != 0x218400u) { return; }
    }
    ctx->pc = 0x218400u;
label_218400:
    // 0x218400: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x218400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_218404:
    // 0x218404: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218408:
    // 0x218408: 0xc04d104  jal         func_134410
label_21840c:
    if (ctx->pc == 0x21840Cu) {
        ctx->pc = 0x21840Cu;
            // 0x21840c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x218410u;
        goto label_218410;
    }
    ctx->pc = 0x218408u;
    SET_GPR_U32(ctx, 31, 0x218410u);
    ctx->pc = 0x21840Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218408u;
            // 0x21840c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218410u; }
        if (ctx->pc != 0x218410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218410u; }
        if (ctx->pc != 0x218410u) { return; }
    }
    ctx->pc = 0x218410u;
label_218410:
    // 0x218410: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x218410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_218414:
    // 0x218414: 0xc04d3e4  jal         func_134F90
label_218418:
    if (ctx->pc == 0x218418u) {
        ctx->pc = 0x218418u;
            // 0x218418: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21841Cu;
        goto label_21841c;
    }
    ctx->pc = 0x218414u;
    SET_GPR_U32(ctx, 31, 0x21841Cu);
    ctx->pc = 0x218418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218414u;
            // 0x218418: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21841Cu; }
        if (ctx->pc != 0x21841Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21841Cu; }
        if (ctx->pc != 0x21841Cu) { return; }
    }
    ctx->pc = 0x21841Cu;
label_21841c:
    // 0x21841c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x21841cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_218420:
    // 0x218420: 0xc04d3fc  jal         func_134FF0
label_218424:
    if (ctx->pc == 0x218424u) {
        ctx->pc = 0x218424u;
            // 0x218424: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x218428u;
        goto label_218428;
    }
    ctx->pc = 0x218420u;
    SET_GPR_U32(ctx, 31, 0x218428u);
    ctx->pc = 0x218424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218420u;
            // 0x218424: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218428u; }
        if (ctx->pc != 0x218428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218428u; }
        if (ctx->pc != 0x218428u) { return; }
    }
    ctx->pc = 0x218428u;
label_218428:
    // 0x218428: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x218428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_21842c:
    // 0x21842c: 0xc04d3bc  jal         func_134EF0
label_218430:
    if (ctx->pc == 0x218430u) {
        ctx->pc = 0x218430u;
            // 0x218430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x218434u;
        goto label_218434;
    }
    ctx->pc = 0x21842Cu;
    SET_GPR_U32(ctx, 31, 0x218434u);
    ctx->pc = 0x218430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21842Cu;
            // 0x218430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218434u; }
        if (ctx->pc != 0x218434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218434u; }
        if (ctx->pc != 0x218434u) { return; }
    }
    ctx->pc = 0x218434u;
label_218434:
    // 0x218434: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x218434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_218438:
    // 0x218438: 0xc04d3b0  jal         func_134EC0
label_21843c:
    if (ctx->pc == 0x21843Cu) {
        ctx->pc = 0x21843Cu;
            // 0x21843c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x218440u;
        goto label_218440;
    }
    ctx->pc = 0x218438u;
    SET_GPR_U32(ctx, 31, 0x218440u);
    ctx->pc = 0x21843Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218438u;
            // 0x21843c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218440u; }
        if (ctx->pc != 0x218440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218440u; }
        if (ctx->pc != 0x218440u) { return; }
    }
    ctx->pc = 0x218440u;
label_218440:
    // 0x218440: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x218440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_218444:
    // 0x218444: 0xc04d428  jal         func_1350A0
label_218448:
    if (ctx->pc == 0x218448u) {
        ctx->pc = 0x218448u;
            // 0x218448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21844Cu;
        goto label_21844c;
    }
    ctx->pc = 0x218444u;
    SET_GPR_U32(ctx, 31, 0x21844Cu);
    ctx->pc = 0x218448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218444u;
            // 0x218448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21844Cu; }
        if (ctx->pc != 0x21844Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21844Cu; }
        if (ctx->pc != 0x21844Cu) { return; }
    }
    ctx->pc = 0x21844Cu;
label_21844c:
    // 0x21844c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x21844cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_218450:
    // 0x218450: 0xc04d44c  jal         func_135130
label_218454:
    if (ctx->pc == 0x218454u) {
        ctx->pc = 0x218454u;
            // 0x218454: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x218458u;
        goto label_218458;
    }
    ctx->pc = 0x218450u;
    SET_GPR_U32(ctx, 31, 0x218458u);
    ctx->pc = 0x218454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218450u;
            // 0x218454: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218458u; }
        if (ctx->pc != 0x218458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218458u; }
        if (ctx->pc != 0x218458u) { return; }
    }
    ctx->pc = 0x218458u;
label_218458:
    // 0x218458: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x218458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_21845c:
    // 0x21845c: 0xc04d128  jal         func_1344A0
label_218460:
    if (ctx->pc == 0x218460u) {
        ctx->pc = 0x218460u;
            // 0x218460: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x218464u;
        goto label_218464;
    }
    ctx->pc = 0x21845Cu;
    SET_GPR_U32(ctx, 31, 0x218464u);
    ctx->pc = 0x218460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21845Cu;
            // 0x218460: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218464u; }
        if (ctx->pc != 0x218464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218464u; }
        if (ctx->pc != 0x218464u) { return; }
    }
    ctx->pc = 0x218464u;
label_218464:
    // 0x218464: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x218464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_218468:
    // 0x218468: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x218468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_21846c:
    // 0x21846c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21846cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_218470:
    // 0x218470: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x218470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_218474:
    // 0x218474: 0xc04d320  jal         func_134C80
label_218478:
    if (ctx->pc == 0x218478u) {
        ctx->pc = 0x218478u;
            // 0x218478: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21847Cu;
        goto label_21847c;
    }
    ctx->pc = 0x218474u;
    SET_GPR_U32(ctx, 31, 0x21847Cu);
    ctx->pc = 0x218478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218474u;
            // 0x218478: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21847Cu; }
        if (ctx->pc != 0x21847Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21847Cu; }
        if (ctx->pc != 0x21847Cu) { return; }
    }
    ctx->pc = 0x21847Cu;
label_21847c:
    // 0x21847c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x21847cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218480:
    // 0x218480: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x218480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218484:
    // 0x218484: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x218484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218488:
    // 0x218488: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x218488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_21848c:
    // 0x21848c: 0x2f29821  addu        $s3, $s7, $s2
    ctx->pc = 0x21848cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_218490:
    // 0x218490: 0x244403f0  addiu       $a0, $v0, 0x3F0
    ctx->pc = 0x218490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
label_218494:
    // 0x218494: 0xc051638  jal         func_1458E0
label_218498:
    if (ctx->pc == 0x218498u) {
        ctx->pc = 0x218498u;
            // 0x218498: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21849Cu;
        goto label_21849c;
    }
    ctx->pc = 0x218494u;
    SET_GPR_U32(ctx, 31, 0x21849Cu);
    ctx->pc = 0x218498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218494u;
            // 0x218498: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21849Cu; }
        if (ctx->pc != 0x21849Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21849Cu; }
        if (ctx->pc != 0x21849Cu) { return; }
    }
    ctx->pc = 0x21849Cu;
label_21849c:
    // 0x21849c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x21849cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_2184a0:
    // 0x2184a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2184a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2184a4:
    // 0x2184a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2184a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2184a8:
    // 0x2184a8: 0xc041c38  jal         func_1070E0
label_2184ac:
    if (ctx->pc == 0x2184ACu) {
        ctx->pc = 0x2184ACu;
            // 0x2184ac: 0x27a603e0  addiu       $a2, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->pc = 0x2184B0u;
        goto label_2184b0;
    }
    ctx->pc = 0x2184A8u;
    SET_GPR_U32(ctx, 31, 0x2184B0u);
    ctx->pc = 0x2184ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2184A8u;
            // 0x2184ac: 0x27a603e0  addiu       $a2, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2184B0u; }
        if (ctx->pc != 0x2184B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2184B0u; }
        if (ctx->pc != 0x2184B0u) { return; }
    }
    ctx->pc = 0x2184B0u;
label_2184b0:
    // 0x2184b0: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2184b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_2184b4:
    // 0x2184b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2184b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2184b8:
    // 0x2184b8: 0xc05166c  jal         func_1459B0
label_2184bc:
    if (ctx->pc == 0x2184BCu) {
        ctx->pc = 0x2184BCu;
            // 0x2184bc: 0x24440430  addiu       $a0, $v0, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
        ctx->pc = 0x2184C0u;
        goto label_2184c0;
    }
    ctx->pc = 0x2184B8u;
    SET_GPR_U32(ctx, 31, 0x2184C0u);
    ctx->pc = 0x2184BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2184B8u;
            // 0x2184bc: 0x24440430  addiu       $a0, $v0, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2184C0u; }
        if (ctx->pc != 0x2184C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2184C0u; }
        if (ctx->pc != 0x2184C0u) { return; }
    }
    ctx->pc = 0x2184C0u;
label_2184c0:
    // 0x2184c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2184c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2184c4:
    // 0x2184c4: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2184c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_2184c8:
    // 0x2184c8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_2184cc:
    if (ctx->pc == 0x2184CCu) {
        ctx->pc = 0x2184CCu;
            // 0x2184cc: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x2184D0u;
        goto label_2184d0;
    }
    ctx->pc = 0x2184C8u;
    {
        const bool branch_taken_0x2184c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2184CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2184C8u;
            // 0x2184cc: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2184c8) {
            ctx->pc = 0x218488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_218488;
        }
    }
    ctx->pc = 0x2184D0u;
label_2184d0:
    // 0x2184d0: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_2184d4:
    if (ctx->pc == 0x2184D4u) {
        ctx->pc = 0x2184D4u;
            // 0x2184d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2184D8u;
        goto label_2184d8;
    }
    ctx->pc = 0x2184D0u;
    {
        const bool branch_taken_0x2184d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2184D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2184D0u;
            // 0x2184d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2184d0) {
            ctx->pc = 0x2184E0u;
            goto label_2184e0;
        }
    }
    ctx->pc = 0x2184D8u;
label_2184d8:
    // 0x2184d8: 0x16a2000e  bne         $s5, $v0, . + 4 + (0xE << 2)
label_2184dc:
    if (ctx->pc == 0x2184DCu) {
        ctx->pc = 0x2184E0u;
        goto label_2184e0;
    }
    ctx->pc = 0x2184D8u;
    {
        const bool branch_taken_0x2184d8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2184d8) {
            ctx->pc = 0x218514u;
            goto label_218514;
        }
    }
    ctx->pc = 0x2184E0u;
label_2184e0:
    // 0x2184e0: 0x8fa50430  lw          $a1, 0x430($sp)
    ctx->pc = 0x2184e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1072)));
label_2184e4:
    // 0x2184e4: 0x8fa40440  lw          $a0, 0x440($sp)
    ctx->pc = 0x2184e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1088)));
label_2184e8:
    // 0x2184e8: 0x8fa30450  lw          $v1, 0x450($sp)
    ctx->pc = 0x2184e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1104)));
label_2184ec:
    // 0x2184ec: 0x8fa20460  lw          $v0, 0x460($sp)
    ctx->pc = 0x2184ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1120)));
label_2184f0:
    // 0x2184f0: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x2184f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
label_2184f4:
    // 0x2184f4: 0x2484ff40  addiu       $a0, $a0, -0xC0
    ctx->pc = 0x2184f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967104));
label_2184f8:
    // 0x2184f8: 0xafa50430  sw          $a1, 0x430($sp)
    ctx->pc = 0x2184f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 5));
label_2184fc:
    // 0x2184fc: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x2184fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_218500:
    // 0x218500: 0xafa40440  sw          $a0, 0x440($sp)
    ctx->pc = 0x218500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 4));
label_218504:
    // 0x218504: 0x2442ff40  addiu       $v0, $v0, -0xC0
    ctx->pc = 0x218504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967104));
label_218508:
    // 0x218508: 0xafa30450  sw          $v1, 0x450($sp)
    ctx->pc = 0x218508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 3));
label_21850c:
    // 0x21850c: 0x1000000e  b           . + 4 + (0xE << 2)
label_218510:
    if (ctx->pc == 0x218510u) {
        ctx->pc = 0x218510u;
            // 0x218510: 0xafa20460  sw          $v0, 0x460($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 2));
        ctx->pc = 0x218514u;
        goto label_218514;
    }
    ctx->pc = 0x21850Cu;
    {
        const bool branch_taken_0x21850c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21850Cu;
            // 0x218510: 0xafa20460  sw          $v0, 0x460($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21850c) {
            ctx->pc = 0x218548u;
            goto label_218548;
        }
    }
    ctx->pc = 0x218514u;
label_218514:
    // 0x218514: 0x0  nop
    ctx->pc = 0x218514u;
    // NOP
label_218518:
    // 0x218518: 0x8fa50430  lw          $a1, 0x430($sp)
    ctx->pc = 0x218518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1072)));
label_21851c:
    // 0x21851c: 0x8fa40440  lw          $a0, 0x440($sp)
    ctx->pc = 0x21851cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1088)));
label_218520:
    // 0x218520: 0x8fa30450  lw          $v1, 0x450($sp)
    ctx->pc = 0x218520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1104)));
label_218524:
    // 0x218524: 0x8fa20460  lw          $v0, 0x460($sp)
    ctx->pc = 0x218524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1120)));
label_218528:
    // 0x218528: 0x24a5ff40  addiu       $a1, $a1, -0xC0
    ctx->pc = 0x218528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967104));
label_21852c:
    // 0x21852c: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x21852cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_218530:
    // 0x218530: 0xafa50430  sw          $a1, 0x430($sp)
    ctx->pc = 0x218530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 5));
label_218534:
    // 0x218534: 0x2463ff40  addiu       $v1, $v1, -0xC0
    ctx->pc = 0x218534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967104));
label_218538:
    // 0x218538: 0xafa40440  sw          $a0, 0x440($sp)
    ctx->pc = 0x218538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 4));
label_21853c:
    // 0x21853c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x21853cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_218540:
    // 0x218540: 0xafa30450  sw          $v1, 0x450($sp)
    ctx->pc = 0x218540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 3));
label_218544:
    // 0x218544: 0xafa20460  sw          $v0, 0x460($sp)
    ctx->pc = 0x218544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 2));
label_218548:
    // 0x218548: 0x27a20434  addiu       $v0, $sp, 0x434
    ctx->pc = 0x218548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1076));
label_21854c:
    // 0x21854c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_218550:
    // 0x218550: 0x27b30444  addiu       $s3, $sp, 0x444
    ctx->pc = 0x218550u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1092));
label_218554:
    // 0x218554: 0x27b20454  addiu       $s2, $sp, 0x454
    ctx->pc = 0x218554u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1108));
label_218558:
    // 0x218558: 0x27b10464  addiu       $s1, $sp, 0x464
    ctx->pc = 0x218558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1124));
label_21855c:
    // 0x21855c: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x21855cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_218560:
    // 0x218560: 0x27a20434  addiu       $v0, $sp, 0x434
    ctx->pc = 0x218560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1076));
label_218564:
    // 0x218564: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x218564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_218568:
    // 0x218568: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x218568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21856c:
    // 0x21856c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x21856cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_218570:
    // 0x218570: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x218570u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_218574:
    // 0x218574: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x218574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_218578:
    // 0x218578: 0x2442ffa0  addiu       $v0, $v0, -0x60
    ctx->pc = 0x218578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
label_21857c:
    // 0x21857c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x21857cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_218580:
    // 0x218580: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x218580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_218584:
    // 0x218584: 0x2442ffa0  addiu       $v0, $v0, -0x60
    ctx->pc = 0x218584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
label_218588:
    // 0x218588: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_21858c:
    if (ctx->pc == 0x21858Cu) {
        ctx->pc = 0x21858Cu;
            // 0x21858c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x218590u;
        goto label_218590;
    }
    ctx->pc = 0x218588u;
    {
        const bool branch_taken_0x218588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21858Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218588u;
            // 0x21858c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218588) {
            ctx->pc = 0x218610u;
            goto label_218610;
        }
    }
    ctx->pc = 0x218590u;
label_218590:
    // 0x218590: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x218590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_218594:
    // 0x218594: 0xc04d368  jal         func_134DA0
label_218598:
    if (ctx->pc == 0x218598u) {
        ctx->pc = 0x218598u;
            // 0x218598: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21859Cu;
        goto label_21859c;
    }
    ctx->pc = 0x218594u;
    SET_GPR_U32(ctx, 31, 0x21859Cu);
    ctx->pc = 0x218598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218594u;
            // 0x218598: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21859Cu; }
        if (ctx->pc != 0x21859Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21859Cu; }
        if (ctx->pc != 0x21859Cu) { return; }
    }
    ctx->pc = 0x21859Cu;
label_21859c:
    // 0x21859c: 0x27a20434  addiu       $v0, $sp, 0x434
    ctx->pc = 0x21859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1076));
label_2185a0:
    // 0x2185a0: 0x8fa50430  lw          $a1, 0x430($sp)
    ctx->pc = 0x2185a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1072)));
label_2185a4:
    // 0x2185a4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2185a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2185a8:
    // 0x2185a8: 0xc04d34c  jal         func_134D30
label_2185ac:
    if (ctx->pc == 0x2185ACu) {
        ctx->pc = 0x2185ACu;
            // 0x2185ac: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x2185B0u;
        goto label_2185b0;
    }
    ctx->pc = 0x2185A8u;
    SET_GPR_U32(ctx, 31, 0x2185B0u);
    ctx->pc = 0x2185ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2185A8u;
            // 0x2185ac: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2185B0u; }
        if (ctx->pc != 0x2185B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2185B0u; }
        if (ctx->pc != 0x2185B0u) { return; }
    }
    ctx->pc = 0x2185B0u;
label_2185b0:
    // 0x2185b0: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2185b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2185b4:
    // 0x2185b4: 0xc04d318  jal         func_134C60
label_2185b8:
    if (ctx->pc == 0x2185B8u) {
        ctx->pc = 0x2185B8u;
            // 0x2185b8: 0x27a503f0  addiu       $a1, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->pc = 0x2185BCu;
        goto label_2185bc;
    }
    ctx->pc = 0x2185B4u;
    SET_GPR_U32(ctx, 31, 0x2185BCu);
    ctx->pc = 0x2185B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2185B4u;
            // 0x2185b8: 0x27a503f0  addiu       $a1, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2185BCu; }
        if (ctx->pc != 0x2185BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2185BCu; }
        if (ctx->pc != 0x2185BCu) { return; }
    }
    ctx->pc = 0x2185BCu;
label_2185bc:
    // 0x2185bc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2185bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2185c0:
    // 0x2185c0: 0x8fa50440  lw          $a1, 0x440($sp)
    ctx->pc = 0x2185c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1088)));
label_2185c4:
    // 0x2185c4: 0xc04d34c  jal         func_134D30
label_2185c8:
    if (ctx->pc == 0x2185C8u) {
        ctx->pc = 0x2185C8u;
            // 0x2185c8: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x2185CCu;
        goto label_2185cc;
    }
    ctx->pc = 0x2185C4u;
    SET_GPR_U32(ctx, 31, 0x2185CCu);
    ctx->pc = 0x2185C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2185C4u;
            // 0x2185c8: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2185CCu; }
        if (ctx->pc != 0x2185CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2185CCu; }
        if (ctx->pc != 0x2185CCu) { return; }
    }
    ctx->pc = 0x2185CCu;
label_2185cc:
    // 0x2185cc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2185ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2185d0:
    // 0x2185d0: 0xc04d318  jal         func_134C60
label_2185d4:
    if (ctx->pc == 0x2185D4u) {
        ctx->pc = 0x2185D4u;
            // 0x2185d4: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->pc = 0x2185D8u;
        goto label_2185d8;
    }
    ctx->pc = 0x2185D0u;
    SET_GPR_U32(ctx, 31, 0x2185D8u);
    ctx->pc = 0x2185D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2185D0u;
            // 0x2185d4: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2185D8u; }
        if (ctx->pc != 0x2185D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2185D8u; }
        if (ctx->pc != 0x2185D8u) { return; }
    }
    ctx->pc = 0x2185D8u;
label_2185d8:
    // 0x2185d8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2185d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2185dc:
    // 0x2185dc: 0x8fa50450  lw          $a1, 0x450($sp)
    ctx->pc = 0x2185dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1104)));
label_2185e0:
    // 0x2185e0: 0xc04d34c  jal         func_134D30
label_2185e4:
    if (ctx->pc == 0x2185E4u) {
        ctx->pc = 0x2185E4u;
            // 0x2185e4: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x2185E8u;
        goto label_2185e8;
    }
    ctx->pc = 0x2185E0u;
    SET_GPR_U32(ctx, 31, 0x2185E8u);
    ctx->pc = 0x2185E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2185E0u;
            // 0x2185e4: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2185E8u; }
        if (ctx->pc != 0x2185E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2185E8u; }
        if (ctx->pc != 0x2185E8u) { return; }
    }
    ctx->pc = 0x2185E8u;
label_2185e8:
    // 0x2185e8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2185e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2185ec:
    // 0x2185ec: 0xc04d318  jal         func_134C60
label_2185f0:
    if (ctx->pc == 0x2185F0u) {
        ctx->pc = 0x2185F0u;
            // 0x2185f0: 0x27a50410  addiu       $a1, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->pc = 0x2185F4u;
        goto label_2185f4;
    }
    ctx->pc = 0x2185ECu;
    SET_GPR_U32(ctx, 31, 0x2185F4u);
    ctx->pc = 0x2185F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2185ECu;
            // 0x2185f0: 0x27a50410  addiu       $a1, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2185F4u; }
        if (ctx->pc != 0x2185F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2185F4u; }
        if (ctx->pc != 0x2185F4u) { return; }
    }
    ctx->pc = 0x2185F4u;
label_2185f4:
    // 0x2185f4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2185f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2185f8:
    // 0x2185f8: 0x8fa50460  lw          $a1, 0x460($sp)
    ctx->pc = 0x2185f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1120)));
label_2185fc:
    // 0x2185fc: 0xc04d34c  jal         func_134D30
label_218600:
    if (ctx->pc == 0x218600u) {
        ctx->pc = 0x218600u;
            // 0x218600: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x218604u;
        goto label_218604;
    }
    ctx->pc = 0x2185FCu;
    SET_GPR_U32(ctx, 31, 0x218604u);
    ctx->pc = 0x218600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2185FCu;
            // 0x218600: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218604u; }
        if (ctx->pc != 0x218604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218604u; }
        if (ctx->pc != 0x218604u) { return; }
    }
    ctx->pc = 0x218604u;
label_218604:
    // 0x218604: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x218604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_218608:
    // 0x218608: 0xc04d318  jal         func_134C60
label_21860c:
    if (ctx->pc == 0x21860Cu) {
        ctx->pc = 0x21860Cu;
            // 0x21860c: 0x27a50420  addiu       $a1, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->pc = 0x218610u;
        goto label_218610;
    }
    ctx->pc = 0x218608u;
    SET_GPR_U32(ctx, 31, 0x218610u);
    ctx->pc = 0x21860Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218608u;
            // 0x21860c: 0x27a50420  addiu       $a1, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218610u; }
        if (ctx->pc != 0x218610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218610u; }
        if (ctx->pc != 0x218610u) { return; }
    }
    ctx->pc = 0x218610u;
label_218610:
    // 0x218610: 0xc04d1a4  jal         func_134690
label_218614:
    if (ctx->pc == 0x218614u) {
        ctx->pc = 0x218614u;
            // 0x218614: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x218618u;
        goto label_218618;
    }
    ctx->pc = 0x218610u;
    SET_GPR_U32(ctx, 31, 0x218618u);
    ctx->pc = 0x218614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218610u;
            // 0x218614: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218618u; }
        if (ctx->pc != 0x218618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218618u; }
        if (ctx->pc != 0x218618u) { return; }
    }
    ctx->pc = 0x218618u;
label_218618:
    // 0x218618: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x218618u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_21861c:
    // 0x21861c: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x21861cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
label_218620:
    // 0x218620: 0x1440ff27  bnez        $v0, . + 4 + (-0xD9 << 2)
label_218624:
    if (ctx->pc == 0x218624u) {
        ctx->pc = 0x218624u;
            // 0x218624: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x218628u;
        goto label_218628;
    }
    ctx->pc = 0x218620u;
    {
        const bool branch_taken_0x218620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218620u;
            // 0x218624: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218620) {
            ctx->pc = 0x2182C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2182c0;
        }
    }
    ctx->pc = 0x218628u;
label_218628:
    // 0x218628: 0x86850190  lh          $a1, 0x190($s4)
    ctx->pc = 0x218628u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 400)));
label_21862c:
    // 0x21862c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x21862cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_218630:
    // 0x218630: 0xc04ba14  jal         func_12E850
label_218634:
    if (ctx->pc == 0x218634u) {
        ctx->pc = 0x218634u;
            // 0x218634: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x218638u;
        goto label_218638;
    }
    ctx->pc = 0x218630u;
    SET_GPR_U32(ctx, 31, 0x218638u);
    ctx->pc = 0x218634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218630u;
            // 0x218634: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218638u; }
        if (ctx->pc != 0x218638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218638u; }
        if (ctx->pc != 0x218638u) { return; }
    }
    ctx->pc = 0x218638u;
label_218638:
    // 0x218638: 0x92820108  lbu         $v0, 0x108($s4)
    ctx->pc = 0x218638u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 264)));
label_21863c:
    // 0x21863c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_218640:
    if (ctx->pc == 0x218640u) {
        ctx->pc = 0x218640u;
            // 0x218640: 0x3c0341a0  lui         $v1, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
        ctx->pc = 0x218644u;
        goto label_218644;
    }
    ctx->pc = 0x21863Cu;
    {
        const bool branch_taken_0x21863c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21863Cu;
            // 0x218640: 0x3c0341a0  lui         $v1, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21863c) {
            ctx->pc = 0x2186F0u;
            goto label_2186f0;
        }
    }
    ctx->pc = 0x218644u;
label_218644:
    // 0x218644: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x218644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
label_218648:
    // 0x218648: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x218648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21864c:
    // 0x21864c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x21864cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_218650:
    // 0x218650: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x218650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_218654:
    // 0x218654: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x218654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_218658:
    // 0x218658: 0x3c03430c  lui         $v1, 0x430C
    ctx->pc = 0x218658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17164 << 16));
label_21865c:
    // 0x21865c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21865cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218660:
    // 0x218660: 0x3c024230  lui         $v0, 0x4230
    ctx->pc = 0x218660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16944 << 16));
label_218664:
    // 0x218664: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x218664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_218668:
    // 0x218668: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x218668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_21866c:
    // 0x21866c: 0xc0887b8  jal         func_221EE0
label_218670:
    if (ctx->pc == 0x218670u) {
        ctx->pc = 0x218670u;
            // 0x218670: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x218674u;
        goto label_218674;
    }
    ctx->pc = 0x21866Cu;
    SET_GPR_U32(ctx, 31, 0x218674u);
    ctx->pc = 0x218670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21866Cu;
            // 0x218670: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218674u; }
        if (ctx->pc != 0x218674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218674u; }
        if (ctx->pc != 0x218674u) { return; }
    }
    ctx->pc = 0x218674u;
label_218674:
    // 0x218674: 0xc04d0e8  jal         func_1343A0
label_218678:
    if (ctx->pc == 0x218678u) {
        ctx->pc = 0x218678u;
            // 0x218678: 0x27a40470  addiu       $a0, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->pc = 0x21867Cu;
        goto label_21867c;
    }
    ctx->pc = 0x218674u;
    SET_GPR_U32(ctx, 31, 0x21867Cu);
    ctx->pc = 0x218678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218674u;
            // 0x218678: 0x27a40470  addiu       $a0, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21867Cu; }
        if (ctx->pc != 0x21867Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21867Cu; }
        if (ctx->pc != 0x21867Cu) { return; }
    }
    ctx->pc = 0x21867Cu;
label_21867c:
    // 0x21867c: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x21867cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_218680:
    // 0x218680: 0xc087ec4  jal         func_21FB10
label_218684:
    if (ctx->pc == 0x218684u) {
        ctx->pc = 0x218684u;
            // 0x218684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x218688u;
        goto label_218688;
    }
    ctx->pc = 0x218680u;
    SET_GPR_U32(ctx, 31, 0x218688u);
    ctx->pc = 0x218684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218680u;
            // 0x218684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218688u; }
        if (ctx->pc != 0x218688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218688u; }
        if (ctx->pc != 0x218688u) { return; }
    }
    ctx->pc = 0x218688u;
label_218688:
    // 0x218688: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x218688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_21868c:
    // 0x21868c: 0xc04d128  jal         func_1344A0
label_218690:
    if (ctx->pc == 0x218690u) {
        ctx->pc = 0x218690u;
            // 0x218690: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x218694u;
        goto label_218694;
    }
    ctx->pc = 0x21868Cu;
    SET_GPR_U32(ctx, 31, 0x218694u);
    ctx->pc = 0x218690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21868Cu;
            // 0x218690: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218694u; }
        if (ctx->pc != 0x218694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218694u; }
        if (ctx->pc != 0x218694u) { return; }
    }
    ctx->pc = 0x218694u;
label_218694:
    // 0x218694: 0x8f8591d0  lw          $a1, -0x6E30($gp)
    ctx->pc = 0x218694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
label_218698:
    // 0x218698: 0xc04d368  jal         func_134DA0
label_21869c:
    if (ctx->pc == 0x21869Cu) {
        ctx->pc = 0x21869Cu;
            // 0x21869c: 0x27a40470  addiu       $a0, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->pc = 0x2186A0u;
        goto label_2186a0;
    }
    ctx->pc = 0x218698u;
    SET_GPR_U32(ctx, 31, 0x2186A0u);
    ctx->pc = 0x21869Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218698u;
            // 0x21869c: 0x27a40470  addiu       $a0, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2186A0u; }
        if (ctx->pc != 0x2186A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2186A0u; }
        if (ctx->pc != 0x2186A0u) { return; }
    }
    ctx->pc = 0x2186A0u;
label_2186a0:
    // 0x2186a0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2186a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2186a4:
    // 0x2186a4: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x2186a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_2186a8:
    // 0x2186a8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2186a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2186ac:
    // 0x2186ac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2186acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2186b0:
    // 0x2186b0: 0xc04d320  jal         func_134C80
label_2186b4:
    if (ctx->pc == 0x2186B4u) {
        ctx->pc = 0x2186B4u;
            // 0x2186b4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2186B8u;
        goto label_2186b8;
    }
    ctx->pc = 0x2186B0u;
    SET_GPR_U32(ctx, 31, 0x2186B8u);
    ctx->pc = 0x2186B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2186B0u;
            // 0x2186b4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2186B8u; }
        if (ctx->pc != 0x2186B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2186B8u; }
        if (ctx->pc != 0x2186B8u) { return; }
    }
    ctx->pc = 0x2186B8u;
label_2186b8:
    // 0x2186b8: 0x27a407b0  addiu       $a0, $sp, 0x7B0
    ctx->pc = 0x2186b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_2186bc:
    // 0x2186bc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2186bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2186c0:
    // 0x2186c0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2186c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2186c4:
    // 0x2186c4: 0x2407009e  addiu       $a3, $zero, 0x9E
    ctx->pc = 0x2186c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_2186c8:
    // 0x2186c8: 0xc04f8e4  jal         func_13E390
label_2186cc:
    if (ctx->pc == 0x2186CCu) {
        ctx->pc = 0x2186CCu;
            // 0x2186cc: 0x24080042  addiu       $t0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->pc = 0x2186D0u;
        goto label_2186d0;
    }
    ctx->pc = 0x2186C8u;
    SET_GPR_U32(ctx, 31, 0x2186D0u);
    ctx->pc = 0x2186CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2186C8u;
            // 0x2186cc: 0x24080042  addiu       $t0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2186D0u; }
        if (ctx->pc != 0x2186D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2186D0u; }
        if (ctx->pc != 0x2186D0u) { return; }
    }
    ctx->pc = 0x2186D0u;
label_2186d0:
    // 0x2186d0: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2186d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2186d4:
    // 0x2186d4: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x2186d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_2186d8:
    // 0x2186d8: 0x27a507b0  addiu       $a1, $sp, 0x7B0
    ctx->pc = 0x2186d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_2186dc:
    // 0x2186dc: 0x24c6fe10  addiu       $a2, $a2, -0x1F0
    ctx->pc = 0x2186dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966800));
label_2186e0:
    // 0x2186e0: 0xc08a338  jal         func_228CE0
label_2186e4:
    if (ctx->pc == 0x2186E4u) {
        ctx->pc = 0x2186E4u;
            // 0x2186e4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2186E8u;
        goto label_2186e8;
    }
    ctx->pc = 0x2186E0u;
    SET_GPR_U32(ctx, 31, 0x2186E8u);
    ctx->pc = 0x2186E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2186E0u;
            // 0x2186e4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2186E8u; }
        if (ctx->pc != 0x2186E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2186E8u; }
        if (ctx->pc != 0x2186E8u) { return; }
    }
    ctx->pc = 0x2186E8u;
label_2186e8:
    // 0x2186e8: 0xc04d1a4  jal         func_134690
label_2186ec:
    if (ctx->pc == 0x2186ECu) {
        ctx->pc = 0x2186ECu;
            // 0x2186ec: 0x27a40470  addiu       $a0, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->pc = 0x2186F0u;
        goto label_2186f0;
    }
    ctx->pc = 0x2186E8u;
    SET_GPR_U32(ctx, 31, 0x2186F0u);
    ctx->pc = 0x2186ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2186E8u;
            // 0x2186ec: 0x27a40470  addiu       $a0, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2186F0u; }
        if (ctx->pc != 0x2186F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2186F0u; }
        if (ctx->pc != 0x2186F0u) { return; }
    }
    ctx->pc = 0x2186F0u;
label_2186f0:
    // 0x2186f0: 0x9282031e  lbu         $v0, 0x31E($s4)
    ctx->pc = 0x2186f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 798)));
label_2186f4:
    // 0x2186f4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2186f8:
    if (ctx->pc == 0x2186F8u) {
        ctx->pc = 0x2186FCu;
        goto label_2186fc;
    }
    ctx->pc = 0x2186F4u;
    {
        const bool branch_taken_0x2186f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2186f4) {
            ctx->pc = 0x218738u;
            goto label_218738;
        }
    }
    ctx->pc = 0x2186FCu;
label_2186fc:
    // 0x2186fc: 0x868202d8  lh          $v0, 0x2D8($s4)
    ctx->pc = 0x2186fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 728)));
label_218700:
    // 0x218700: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x218700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_218704:
    // 0x218704: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_218708:
    if (ctx->pc == 0x218708u) {
        ctx->pc = 0x21870Cu;
        goto label_21870c;
    }
    ctx->pc = 0x218704u;
    {
        const bool branch_taken_0x218704 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x218704) {
            ctx->pc = 0x218738u;
            goto label_218738;
        }
    }
    ctx->pc = 0x21870Cu;
label_21870c:
    // 0x21870c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21870cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_218710:
    // 0x218710: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x218710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_218714:
    // 0x218714: 0x8c4202b4  lw          $v0, 0x2B4($v0)
    ctx->pc = 0x218714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_218718:
    // 0x218718: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_21871c:
    if (ctx->pc == 0x21871Cu) {
        ctx->pc = 0x218720u;
        goto label_218720;
    }
    ctx->pc = 0x218718u;
    {
        const bool branch_taken_0x218718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218718) {
            ctx->pc = 0x218738u;
            goto label_218738;
        }
    }
    ctx->pc = 0x218720u;
label_218720:
    // 0x218720: 0x8c470938  lw          $a3, 0x938($v0)
    ctx->pc = 0x218720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2360)));
label_218724:
    // 0x218724: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x218724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_218728:
    // 0x218728: 0x8f8691d0  lw          $a2, -0x6E30($gp)
    ctx->pc = 0x218728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
label_21872c:
    // 0x21872c: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x21872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_218730:
    // 0x218730: 0xc084794  jal         func_211E50
label_218734:
    if (ctx->pc == 0x218734u) {
        ctx->pc = 0x218734u;
            // 0x218734: 0x2444feae  addiu       $a0, $v0, -0x152 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966958));
        ctx->pc = 0x218738u;
        goto label_218738;
    }
    ctx->pc = 0x218730u;
    SET_GPR_U32(ctx, 31, 0x218738u);
    ctx->pc = 0x218734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218730u;
            // 0x218734: 0x2444feae  addiu       $a0, $v0, -0x152 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966958));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211E50u;
    if (runtime->hasFunction(0x211E50u)) {
        auto targetFn = runtime->lookupFunction(0x211E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218738u; }
        if (ctx->pc != 0x218738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFishParam__FiiP10mgCTextureP13CGameDataUsed_0x211e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218738u; }
        if (ctx->pc != 0x218738u) { return; }
    }
    ctx->pc = 0x218738u;
label_218738:
    // 0x218738: 0x86820388  lh          $v0, 0x388($s4)
    ctx->pc = 0x218738u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 904)));
label_21873c:
    // 0x21873c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x21873cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_218740:
    // 0x218740: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_218744:
    if (ctx->pc == 0x218744u) {
        ctx->pc = 0x218748u;
        goto label_218748;
    }
    ctx->pc = 0x218740u;
    {
        const bool branch_taken_0x218740 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x218740) {
            ctx->pc = 0x218778u;
            goto label_218778;
        }
    }
    ctx->pc = 0x218748u;
label_218748:
    // 0x218748: 0x8e820390  lw          $v0, 0x390($s4)
    ctx->pc = 0x218748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 912)));
label_21874c:
    // 0x21874c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_218750:
    if (ctx->pc == 0x218750u) {
        ctx->pc = 0x218754u;
        goto label_218754;
    }
    ctx->pc = 0x21874Cu;
    {
        const bool branch_taken_0x21874c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21874c) {
            ctx->pc = 0x218778u;
            goto label_218778;
        }
    }
    ctx->pc = 0x218754u;
label_218754:
    // 0x218754: 0x8685038c  lh          $a1, 0x38C($s4)
    ctx->pc = 0x218754u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 908)));
label_218758:
    // 0x218758: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x218758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_21875c:
    // 0x21875c: 0xc04ba14  jal         func_12E850
label_218760:
    if (ctx->pc == 0x218760u) {
        ctx->pc = 0x218760u;
            // 0x218760: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x218764u;
        goto label_218764;
    }
    ctx->pc = 0x21875Cu;
    SET_GPR_U32(ctx, 31, 0x218764u);
    ctx->pc = 0x218760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21875Cu;
            // 0x218760: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218764u; }
        if (ctx->pc != 0x218764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218764u; }
        if (ctx->pc != 0x218764u) { return; }
    }
    ctx->pc = 0x218764u;
label_218764:
    // 0x218764: 0x8e840390  lw          $a0, 0x390($s4)
    ctx->pc = 0x218764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 912)));
label_218768:
    // 0x218768: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x218768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21876c:
    // 0x21876c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x21876cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_218770:
    // 0x218770: 0x320f809  jalr        $t9
label_218774:
    if (ctx->pc == 0x218774u) {
        ctx->pc = 0x218778u;
        goto label_218778;
    }
    ctx->pc = 0x218770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x218778u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x218778u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x218778u; }
            if (ctx->pc != 0x218778u) { return; }
        }
        }
    }
    ctx->pc = 0x218778u;
label_218778:
    // 0x218778: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x218778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_21877c:
    // 0x21877c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x21877cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_218780:
    // 0x218780: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x218780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
label_218784:
    // 0x218784: 0xc04ba14  jal         func_12E850
label_218788:
    if (ctx->pc == 0x218788u) {
        ctx->pc = 0x218788u;
            // 0x218788: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21878Cu;
        goto label_21878c;
    }
    ctx->pc = 0x218784u;
    SET_GPR_U32(ctx, 31, 0x21878Cu);
    ctx->pc = 0x218788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218784u;
            // 0x218788: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21878Cu; }
        if (ctx->pc != 0x21878Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21878Cu; }
        if (ctx->pc != 0x21878Cu) { return; }
    }
    ctx->pc = 0x21878Cu;
label_21878c:
    // 0x21878c: 0xc0846a4  jal         func_211A90
label_218790:
    if (ctx->pc == 0x218790u) {
        ctx->pc = 0x218790u;
            // 0x218790: 0x268400fc  addiu       $a0, $s4, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 252));
        ctx->pc = 0x218794u;
        goto label_218794;
    }
    ctx->pc = 0x21878Cu;
    SET_GPR_U32(ctx, 31, 0x218794u);
    ctx->pc = 0x218790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21878Cu;
            // 0x218790: 0x268400fc  addiu       $a0, $s4, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211A90u;
    if (runtime->hasFunction(0x211A90u)) {
        auto targetFn = runtime->lookupFunction(0x211A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218794u; }
        if (ctx->pc != 0x218794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__8CAquaMesFv_0x211a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218794u; }
        if (ctx->pc != 0x218794u) { return; }
    }
    ctx->pc = 0x218794u;
label_218794:
    // 0x218794: 0x8f839520  lw          $v1, -0x6AE0($gp)
    ctx->pc = 0x218794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
label_218798:
    // 0x218798: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
label_21879c:
    if (ctx->pc == 0x21879Cu) {
        ctx->pc = 0x21879Cu;
            // 0x21879c: 0x27a40580  addiu       $a0, $sp, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
        ctx->pc = 0x2187A0u;
        goto label_2187a0;
    }
    ctx->pc = 0x218798u;
    {
        const bool branch_taken_0x218798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21879Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218798u;
            // 0x21879c: 0x27a40580  addiu       $a0, $sp, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218798) {
            ctx->pc = 0x218910u;
            goto label_218910;
        }
    }
    ctx->pc = 0x2187A0u;
label_2187a0:
    // 0x2187a0: 0xc0873cc  jal         func_21CF30
label_2187a4:
    if (ctx->pc == 0x2187A4u) {
        ctx->pc = 0x2187A8u;
        goto label_2187a8;
    }
    ctx->pc = 0x2187A0u;
    SET_GPR_U32(ctx, 31, 0x2187A8u);
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2187A8u; }
        if (ctx->pc != 0x2187A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2187A8u; }
        if (ctx->pc != 0x2187A8u) { return; }
    }
    ctx->pc = 0x2187A8u;
label_2187a8:
    // 0x2187a8: 0x868302d8  lh          $v1, 0x2D8($s4)
    ctx->pc = 0x2187a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 728)));
label_2187ac:
    // 0x2187ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2187acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2187b0:
    // 0x2187b0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2187b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2187b4:
    // 0x2187b4: 0x8c6302b4  lw          $v1, 0x2B4($v1)
    ctx->pc = 0x2187b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 692)));
label_2187b8:
    // 0x2187b8: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
label_2187bc:
    if (ctx->pc == 0x2187BCu) {
        ctx->pc = 0x2187C0u;
        goto label_2187c0;
    }
    ctx->pc = 0x2187B8u;
    {
        const bool branch_taken_0x2187b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2187b8) {
            ctx->pc = 0x218910u;
            goto label_218910;
        }
    }
    ctx->pc = 0x2187C0u;
label_2187c0:
    // 0x2187c0: 0x8c620938  lw          $v0, 0x938($v1)
    ctx->pc = 0x2187c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2360)));
label_2187c4:
    // 0x2187c4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2187c8:
    if (ctx->pc == 0x2187C8u) {
        ctx->pc = 0x2187C8u;
            // 0x2187c8: 0x24530010  addiu       $s3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2187CCu;
        goto label_2187cc;
    }
    ctx->pc = 0x2187C4u;
    {
        const bool branch_taken_0x2187c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2187C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2187C4u;
            // 0x2187c8: 0x24530010  addiu       $s3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2187c4) {
            ctx->pc = 0x2187D0u;
            goto label_2187d0;
        }
    }
    ctx->pc = 0x2187CCu;
label_2187cc:
    // 0x2187cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2187ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2187d0:
    // 0x2187d0: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x2187d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_2187d4:
    // 0x2187d4: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2187d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_2187d8:
    // 0x2187d8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2187d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2187dc:
    // 0x2187dc: 0x3c034372  lui         $v1, 0x4372
    ctx->pc = 0x2187dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17266 << 16));
label_2187e0:
    // 0x2187e0: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x2187e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2187e4:
    // 0x2187e4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2187e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2187e8:
    // 0x2187e8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2187e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_2187ec:
    // 0x2187ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2187ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2187f0:
    // 0x2187f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2187f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2187f4:
    // 0x2187f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2187f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2187f8:
    // 0x2187f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2187f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2187fc:
    // 0x2187fc: 0x24110050  addiu       $s1, $zero, 0x50
    ctx->pc = 0x2187fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_218800:
    // 0x218800: 0x2510ff88  addiu       $s0, $t0, -0x78
    ctx->pc = 0x218800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967176));
label_218804:
    // 0x218804: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x218804u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218808:
    // 0x218808: 0xc0887b8  jal         func_221EE0
label_21880c:
    if (ctx->pc == 0x21880Cu) {
        ctx->pc = 0x21880Cu;
            // 0x21880c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x218810u;
        goto label_218810;
    }
    ctx->pc = 0x218808u;
    SET_GPR_U32(ctx, 31, 0x218810u);
    ctx->pc = 0x21880Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218808u;
            // 0x21880c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218810u; }
        if (ctx->pc != 0x218810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218810u; }
        if (ctx->pc != 0x218810u) { return; }
    }
    ctx->pc = 0x218810u;
label_218810:
    // 0x218810: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x218810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_218814:
    // 0x218814: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x218814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_218818:
    // 0x218818: 0x2463fe30  addiu       $v1, $v1, -0x1D0
    ctx->pc = 0x218818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966832));
label_21881c:
    // 0x21881c: 0x27a70630  addiu       $a3, $sp, 0x630
    ctx->pc = 0x21881cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_218820:
    // 0x218820: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x218820u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_218824:
    // 0x218824: 0x2442c500  addiu       $v0, $v0, -0x3B00
    ctx->pc = 0x218824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952192));
label_218828:
    // 0x218828: 0x78640010  lq          $a0, 0x10($v1)
    ctx->pc = 0x218828u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_21882c:
    // 0x21882c: 0x27a50660  addiu       $a1, $sp, 0x660
    ctx->pc = 0x21882cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
label_218830:
    // 0x218830: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x218830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218834:
    // 0x218834: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x218834u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218838:
    // 0x218838: 0x78630020  lq          $v1, 0x20($v1)
    ctx->pc = 0x218838u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_21883c:
    // 0x21883c: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x21883cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
label_218840:
    // 0x218840: 0x7ce40010  sq          $a0, 0x10($a3)
    ctx->pc = 0x218840u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 4));
label_218844:
    // 0x218844: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x218844u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
label_218848:
    // 0x218848: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x218848u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_21884c:
    // 0x21884c: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x21884cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_218850:
    // 0x218850: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x218850u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_218854:
    // 0x218854: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x218854u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_218858:
    // 0x218858: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x218858u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
label_21885c:
    // 0x21885c: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x21885cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
label_218860:
    // 0x218860: 0x9662002e  lhu         $v0, 0x2E($s3)
    ctx->pc = 0x218860u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 46)));
label_218864:
    // 0x218864: 0xafa20660  sw          $v0, 0x660($sp)
    ctx->pc = 0x218864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1632), GPR_U32(ctx, 2));
label_218868:
    // 0x218868: 0x9662002c  lhu         $v0, 0x2C($s3)
    ctx->pc = 0x218868u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 44)));
label_21886c:
    // 0x21886c: 0xafa20664  sw          $v0, 0x664($sp)
    ctx->pc = 0x21886cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1636), GPR_U32(ctx, 2));
label_218870:
    // 0x218870: 0x96620026  lhu         $v0, 0x26($s3)
    ctx->pc = 0x218870u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
label_218874:
    // 0x218874: 0xafa20668  sw          $v0, 0x668($sp)
    ctx->pc = 0x218874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1640), GPR_U32(ctx, 2));
label_218878:
    // 0x218878: 0x96620028  lhu         $v0, 0x28($s3)
    ctx->pc = 0x218878u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
label_21887c:
    // 0x21887c: 0xafa2066c  sw          $v0, 0x66C($sp)
    ctx->pc = 0x21887cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1644), GPR_U32(ctx, 2));
label_218880:
    // 0x218880: 0x9662002a  lhu         $v0, 0x2A($s3)
    ctx->pc = 0x218880u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 42)));
label_218884:
    // 0x218884: 0xafa20670  sw          $v0, 0x670($sp)
    ctx->pc = 0x218884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1648), GPR_U32(ctx, 2));
label_218888:
    // 0x218888: 0x9262003a  lbu         $v0, 0x3A($s3)
    ctx->pc = 0x218888u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 58)));
label_21888c:
    // 0x21888c: 0xafa20674  sw          $v0, 0x674($sp)
    ctx->pc = 0x21888cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1652), GPR_U32(ctx, 2));
label_218890:
    // 0x218890: 0x96620018  lhu         $v0, 0x18($s3)
    ctx->pc = 0x218890u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
label_218894:
    // 0x218894: 0xafa20678  sw          $v0, 0x678($sp)
    ctx->pc = 0x218894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1656), GPR_U32(ctx, 2));
label_218898:
    // 0x218898: 0x9662001a  lhu         $v0, 0x1A($s3)
    ctx->pc = 0x218898u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
label_21889c:
    // 0x21889c: 0xafa2067c  sw          $v0, 0x67C($sp)
    ctx->pc = 0x21889cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1660), GPR_U32(ctx, 2));
label_2188a0:
    // 0x2188a0: 0x96620030  lhu         $v0, 0x30($s3)
    ctx->pc = 0x2188a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_2188a4:
    // 0x2188a4: 0xafa20680  sw          $v0, 0x680($sp)
    ctx->pc = 0x2188a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1664), GPR_U32(ctx, 2));
label_2188a8:
    // 0x2188a8: 0x96620036  lhu         $v0, 0x36($s3)
    ctx->pc = 0x2188a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
label_2188ac:
    // 0x2188ac: 0xafa20684  sw          $v0, 0x684($sp)
    ctx->pc = 0x2188acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1668), GPR_U32(ctx, 2));
label_2188b0:
    // 0x2188b0: 0x82620035  lb          $v0, 0x35($s3)
    ctx->pc = 0x2188b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 53)));
label_2188b4:
    // 0x2188b4: 0xafa20688  sw          $v0, 0x688($sp)
    ctx->pc = 0x2188b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1672), GPR_U32(ctx, 2));
label_2188b8:
    // 0x2188b8: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2188b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2188bc:
    // 0x2188bc: 0xafa2068c  sw          $v0, 0x68C($sp)
    ctx->pc = 0x2188bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1676), GPR_U32(ctx, 2));
label_2188c0:
    // 0x2188c0: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x2188c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_2188c4:
    // 0x2188c4: 0x8c450630  lw          $a1, 0x630($v0)
    ctx->pc = 0x2188c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1584)));
label_2188c8:
    // 0x2188c8: 0x8c460660  lw          $a2, 0x660($v0)
    ctx->pc = 0x2188c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1632)));
label_2188cc:
    // 0x2188cc: 0xc04a234  jal         func_1288D0
label_2188d0:
    if (ctx->pc == 0x2188D0u) {
        ctx->pc = 0x2188D0u;
            // 0x2188d0: 0x27a40690  addiu       $a0, $sp, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
        ctx->pc = 0x2188D4u;
        goto label_2188d4;
    }
    ctx->pc = 0x2188CCu;
    SET_GPR_U32(ctx, 31, 0x2188D4u);
    ctx->pc = 0x2188D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2188CCu;
            // 0x2188d0: 0x27a40690  addiu       $a0, $sp, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2188D4u; }
        if (ctx->pc != 0x2188D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2188D4u; }
        if (ctx->pc != 0x2188D4u) { return; }
    }
    ctx->pc = 0x2188D4u;
label_2188d4:
    // 0x2188d4: 0x878291d8  lh          $v0, -0x6E28($gp)
    ctx->pc = 0x2188d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939096)));
label_2188d8:
    // 0x2188d8: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
label_2188dc:
    if (ctx->pc == 0x2188DCu) {
        ctx->pc = 0x2188DCu;
            // 0x2188dc: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->pc = 0x2188E0u;
        goto label_2188e0;
    }
    ctx->pc = 0x2188D8u;
    {
        const bool branch_taken_0x2188d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2188DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2188D8u;
            // 0x2188dc: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2188d8) {
            ctx->pc = 0x2188E4u;
            goto label_2188e4;
        }
    }
    ctx->pc = 0x2188E0u;
label_2188e0:
    // 0x2188e0: 0xa3a20690  sb          $v0, 0x690($sp)
    ctx->pc = 0x2188e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1680), (uint8_t)GPR_U32(ctx, 2));
label_2188e4:
    // 0x2188e4: 0x0  nop
    ctx->pc = 0x2188e4u;
    // NOP
label_2188e8:
    // 0x2188e8: 0x27a40580  addiu       $a0, $sp, 0x580
    ctx->pc = 0x2188e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
label_2188ec:
    // 0x2188ec: 0x27a50690  addiu       $a1, $sp, 0x690
    ctx->pc = 0x2188ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
label_2188f0:
    // 0x2188f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2188f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2188f4:
    // 0x2188f4: 0xc0b5688  jal         func_2D5A20
label_2188f8:
    if (ctx->pc == 0x2188F8u) {
        ctx->pc = 0x2188F8u;
            // 0x2188f8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2188FCu;
        goto label_2188fc;
    }
    ctx->pc = 0x2188F4u;
    SET_GPR_U32(ctx, 31, 0x2188FCu);
    ctx->pc = 0x2188F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2188F4u;
            // 0x2188f8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2188FCu; }
        if (ctx->pc != 0x2188FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2188FCu; }
        if (ctx->pc != 0x2188FCu) { return; }
    }
    ctx->pc = 0x2188FCu;
label_2188fc:
    // 0x2188fc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2188fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_218900:
    // 0x218900: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x218900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_218904:
    // 0x218904: 0x2a43000c  slti        $v1, $s2, 0xC
    ctx->pc = 0x218904u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
label_218908:
    // 0x218908: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_21890c:
    if (ctx->pc == 0x21890Cu) {
        ctx->pc = 0x21890Cu;
            // 0x21890c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x218910u;
        goto label_218910;
    }
    ctx->pc = 0x218908u;
    {
        const bool branch_taken_0x218908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21890Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218908u;
            // 0x21890c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218908) {
            ctx->pc = 0x2188C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2188c0;
        }
    }
    ctx->pc = 0x218910u;
label_218910:
    // 0x218910: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x218910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_218914:
    // 0x218914: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x218914u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_218918:
    // 0x218918: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x218918u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21891c:
    // 0x21891c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21891cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_218920:
    // 0x218920: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x218920u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_218924:
    // 0x218924: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x218924u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_218928:
    // 0x218928: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x218928u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21892c:
    // 0x21892c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21892cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_218930:
    // 0x218930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x218930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_218934:
    // 0x218934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x218934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_218938:
    // 0x218938: 0x3e00008  jr          $ra
label_21893c:
    if (ctx->pc == 0x21893Cu) {
        ctx->pc = 0x21893Cu;
            // 0x21893c: 0x27bd07c0  addiu       $sp, $sp, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1984));
        ctx->pc = 0x218940u;
        goto label_fallthrough_0x218938;
    }
    ctx->pc = 0x218938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21893Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218938u;
            // 0x21893c: 0x27bd07c0  addiu       $sp, $sp, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1984));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x218938:
    ctx->pc = 0x218940u;
}
